#include "functions.h"

/* _ZN13CGameResource12LoadMissionsEi @ 00129a84 (arm) */
void fn_00129a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129a84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00129a88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00129a8c:;
    {
        cpu->r[0] = rd32(0x00129a94u + + 0x8cu);
    }
L_00129a90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00129a94:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00129a98:;
    {
        cpu->r[0] = add_flags(cpu, 0x00129aa0u, cpu->r[0], 0, 0);
    }
L_00129a9c:;
    {
        cpu->r[14] = 0x00129aa0u; fn_000fc740(cpu);
    }
L_00129aa0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129aa4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = (~0x00000000u);
        }
    }
L_00129aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129b14;
        }
    }
L_00129aac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00129ab0:;
    {
        cpu->r[14] = 0x00129ab4u; fn_000fc650(cpu);
    }
L_00129ab4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00129ab8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00129abc:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129ac0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129ac4:;
    {
        cpu->r[14] = 0x00129ac8u; fn_000fc5ec(cpu);
    }
L_00129ac8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129acc:;
    {
        cpu->r[14] = 0x00129ad0u; fn_000fc628(cpu);
    }
L_00129ad0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00129ad4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129ad8:;
    {
        cpu->r[14] = 0x00129adcu; fn_000fc5dc(cpu);
    }
L_00129adc:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00129ae0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00129ae4:;
    {
        cpu->r[4] = (uint32_t)((int32_t)(int16_t)(cpu->r[4] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_00129ae8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_00129aec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129af0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_00129af4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00129af8:;
    {
        cpu->r[14] = 0x00129afcu; fn_000fc5ec(cpu);
    }
L_00129afc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129b00:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x4u;
        cpu->r[1] = rd32(cpu->r[4] + - 0x4u);
        cpu->r[4] = wb_tmp;
    }
L_00129b04:;
    {
        cpu->r[14] = 0x00129b08u; fn_00129670(cpu);
    }
L_00129b08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00129b0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129b10:;
    {
        cpu->r[14] = 0x00129b14u; fn_000fc710(cpu);
    }
L_00129b14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129b18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00129b1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00129b20u)) return;
    }
}

/* _ZN13CGameResource4LoadEi @ 00129b24 (arm) */
void fn_00129b24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129b24:;
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
L_00129b28:;
    {
        cpu->r[4] = rd32(0x00129b30u + + 0x12cu);
    }
L_00129b2c:;
    {
        cpu->r[3] = rd32(0x00129b34u + + 0x12cu);
    }
L_00129b30:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00129b34:;
    {
        cpu->r[4] = add_flags(cpu, 0x00129b3cu, cpu->r[4], 0, 0);
    }
L_00129b38:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00129b3c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00129b40:;
    {
        cpu->r[14] = 0x00129b44u; fn_00096b5c(cpu);
    }
L_00129b44:;
    {
        cpu->r[2] = rd32(0x00129b4cu + + 0x118u);
    }
L_00129b48:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00129b4c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00129b50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_00129b54:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_00129b58:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00129b5c:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_00129b60:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_00129b64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00129b68:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00129b6c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x38u);
    }
L_00129b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129c18;
        }
    }
L_00129b74:;
    {
        cpu->r[6] = rd32(0x00129b7cu + + 0xecu);
    }
L_00129b78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00129b7c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00129b80:;
    {
        cpu->r[14] = 0x00129b84u; fn_00189f5c(cpu);
    }
L_00129b84:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00129b88:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00129b8c:;
    {
        cpu->r[14] = 0x00129b90u; fn_001897b4(cpu);
    }
L_00129b90:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129b94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000000u);
        }
    }
L_00129b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129c10;
        }
    }
L_00129b9c:;
    {
        cpu->r[14] = 0x00129ba0u; fn_000fc5dc(cpu);
    }
L_00129ba0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00129ba4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00129ba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129bac:;
    {
        cpu->r[14] = 0x00129bb0u; fn_000fc650(cpu);
    }
L_00129bb0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00129bb4:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129bbc:;
    {
        cpu->r[14] = 0x00129bc0u; fn_000fc5ec(cpu);
    }
L_00129bc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129bc4:;
    {
        cpu->r[14] = 0x00129bc8u; fn_000fc628(cpu);
    }
L_00129bc8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00129bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129bd0:;
    {
        cpu->r[14] = 0x00129bd4u; fn_000fc5dc(cpu);
    }
L_00129bd4:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00129bd8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00129bdc:;
    {
        cpu->r[5] = (uint32_t)((int32_t)(int16_t)(cpu->r[5] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_00129be0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00129be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129be8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_00129bec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00129bf0:;
    {
        cpu->r[14] = 0x00129bf4u; fn_000fc5ec(cpu);
    }
L_00129bf4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00129bf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00129bfc:;
    {
        cpu->r[14] = 0x00129c00u; fn_00129670(cpu);
    }
L_00129c00:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00129c04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129c08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129c0c:;
    {
        cpu->r[14] = 0x00129c10u; fn_00189870(cpu);
    }
L_00129c10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129c14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00129c18u)) return;
    }
L_00129c18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00129c1c:;
    {
        cpu->r[14] = 0x00129c20u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00129c20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129b74;
        }
    }
L_00129c28:;
    {
        cpu->r[6] = rd32(0x00129c30u + + 0x38u);
    }
L_00129c2c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00129c30:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00129c34:;
    {
        cpu->r[14] = 0x00129c38u; fn_00189f48(cpu);
    }
L_00129c38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00129c3c:;
    {
        cpu->r[14] = 0x00129c40u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00129c40:;
    {
        cpu->r[3] = rd32(0x00129c48u + + 0x24u);
    }
L_00129c44:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00129c48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00129c4c:;
    {
        cpu->r[3] = rd32(0x00129c54u + + 0x1cu);
    }
L_00129c50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00129c54:;
    {
        cpu->r[14] = 0x00129c58u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00129c58:;
    {
        goto L_00129b78;
    }
}

/* _ZN13CGameResourceD1Ev @ 00129c74 (arm) */
void fn_00129c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129c74:;
    {
        cpu->r[3] = rd32(0x00129c7cu + + 0x24u);
    }
L_00129c78:;
    {
        cpu->r[2] = rd32(0x00129c80u + + 0x24u);
    }
L_00129c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00129c84u, cpu->r[3], 0, 0);
    }
L_00129c80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00129c84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00129c88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129c8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00129c90:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00129c94:;
    {
        cpu->r[14] = 0x00129c98u; fn_00129640(cpu);
    }
L_00129c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129c9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00129ca0u)) return;
    }
}

/* _ZN13CGameResourceD2Ev @ 00129ca8 (arm) */
void fn_00129ca8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129ca8:;
    {
        cpu->r[3] = rd32(0x00129cb0u + + 0x24u);
    }
L_00129cac:;
    {
        cpu->r[2] = rd32(0x00129cb4u + + 0x24u);
    }
L_00129cb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00129cb8u, cpu->r[3], 0, 0);
    }
L_00129cb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00129cb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00129cbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129cc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00129cc4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00129cc8:;
    {
        cpu->r[14] = 0x00129cccu; fn_00129640(cpu);
    }
L_00129ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129cd0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00129cd4u)) return;
    }
}

/* _ZN13CGameResourceD0Ev @ 00129cdc (arm) */
void fn_00129cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129cdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00129ce0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129ce4:;
    {
        cpu->r[14] = 0x00129ce8u; fn_00129c74(cpu);
    }
L_00129ce8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129cec:;
    {
        cpu->r[14] = 0x00129cf0u; fn_0018ba20(cpu);
    }
L_00129cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129cf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00129cf8u)) return;
    }
}

/* _ZN9CAlterHSV6EncodeENS_5TRgbaEbb @ 00129cf8 (arm) */
void fn_00129cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129cf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00129cfc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00129d00:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129d04:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00129d08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00129d0c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00129d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129d4c;
        }
    }
L_00129d14:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 3u, &shc); cpu->r[0] = v;
    }
L_00129d18:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 3u, &shc); cpu->r[2] = v;
    }
L_00129d1c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[3] = v;
    }
L_00129d20:;
    {
        cpu->r[0] = (~shifter(cpu->r[0], 2, 17u, &shc));
    }
L_00129d24:;
    {
        cpu->r[0] = (~shifter(cpu->r[0], 3, 17u, &shc));
    }
L_00129d28:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, 10u, &shc); cpu->r[2] = v;
    }
L_00129d2c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 5u, &shc); cpu->r[0] = v;
    }
L_00129d30:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129d34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00129d38:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] & ~ 0x00000001u; cpu->r[0] = v;
        }
    }
L_00129d3c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_00129d40:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_00129d44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00129d48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00129d4c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 4u, &shc); cpu->r[2] = v;
    }
L_00129d50:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 5u, &shc); cpu->r[12] = v;
    }
L_00129d54:;
    {
        uint32_t v = cpu->r[3] & 0x000000f0u; cpu->r[3] = v;
    }
L_00129d58:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00129d5c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 12u, &shc); cpu->r[12] = v;
    }
L_00129d60:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_00129d64:;
    {
        uint32_t v = cpu->r[0] | cpu->r[3]; cpu->r[0] = v;
    }
L_00129d68:;
    {
        goto L_00129d34;
    }
}

/* _ZN9CAlterHSV6DecodeEtb @ 00129d6c (arm) */
void fn_00129d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129d6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00129d70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00129d74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] & ~ 0x00000001u; cpu->r[0] = v;
        }
    }
L_00129d78:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_00129d7c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_00129d80:;
    {
        { uint32_t v = cpu->r[0] & 0x00008000u; set_nz(cpu, v); }
    }
L_00129d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00129dc0;
        }
    }
L_00129d88:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[2] = v;
    }
L_00129d8c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 7u, &shc); cpu->r[3] = v;
    }
L_00129d90:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[12] = v;
    }
L_00129d94:;
    {
        uint32_t v = cpu->r[3] & 0x000000e0u; cpu->r[3] = v;
    }
L_00129d98:;
    {
        uint32_t v = cpu->r[12] & 0x000000f0u; cpu->r[12] = v;
    }
L_00129d9c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_00129da0:;
    {
        uint32_t v = cpu->r[0] & 0x000000f0u; cpu->r[1] = v;
    }
L_00129da4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00129da8:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xffu) | ((cpu->r[12] & 0xffu) << 0);
    }
L_00129dac:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xff00u) | ((cpu->r[1] & 0xffu) << 8);
    }
L_00129db0:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xff0000u) | ((cpu->r[2] & 0xffu) << 16);
    }
L_00129db4:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xff000000u) | ((cpu->r[3] & 0xffu) << 24);
    }
L_00129db8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00129dbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00129dc0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[2] = v;
    }
L_00129dc4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 7u, &shc); cpu->r[12] = v;
    }
L_00129dc8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[0] = v;
    }
L_00129dcc:;
    {
        uint32_t v = cpu->r[12] & 0x000000f8u; cpu->r[12] = v;
    }
L_00129dd0:;
    {
        uint32_t v = cpu->r[0] & 0x000000f8u; cpu->r[1] = v;
    }
L_00129dd4:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_00129dd8:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_00129ddc:;
    {
        goto L_00129da4;
    }
}

/* _ZN9CAlterHSV5AlterEtbffff @ 00129de0 (arm) */
void fn_00129de0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129de0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00129de4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00129de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129dec:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00129df0:;
    {
        cpu->r[14] = 0x00129df4u; fn_00129d6c(cpu);
    }
L_00129df4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00129df8:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 15u, &shc); cpu->r[2] = v;
    }
L_00129dfc:;
    {
        wr8(cpu->r[13], cpu->r[0]);
    }
L_00129e00:;
    {
        cpu->r[3] = (cpu->r[0] >> 24) & 0xffu;
    }
L_00129e04:;
    {
        wr8(cpu->r[13] + + 0x3u, cpu->r[3]);
    }
L_00129e08:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00129e0c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00129e10:;
    {
        wr8(cpu->r[13] + + 0x1u, cpu->r[3]);
    }
L_00129e14:;
    {
        wr8(cpu->r[13] + + 0x2u, cpu->r[0]);
    }
L_00129e18:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00129e1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00129e20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00129e24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00129e28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00129e2c:;
    {
        return fn_00129cf8(cpu);
    }
}

/* _ZN9CAlterHSV9RGBAtoHSVEPNS_5TRgbaEPNS_4THsvE @ 00129e30 (arm) */
void fn_00129e30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129e30:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_00129e34:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00129e38:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00129e3c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00129e40:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00129e44:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00129e4cu + + 0xecu);
    }
L_00129e48:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x2u);
    }
L_00129e4c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00129e50:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00129e54:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_00129e58:;
    {
        vfp_vdiv(cpu, 14, 14, 13);
    }
L_00129e5c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00129e60:;
    {
        vfp_vdiv(cpu, 13, 12, 13);
    }
L_00129e64:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00129e68:;
    {
        vfp_sync_flags(cpu);
    }
L_00129e6c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,15);
        }
    }
L_00129e70:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,14);
        }
    }
L_00129e74:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_00129e78:;
    {
        vfp_sync_flags(cpu);
    }
L_00129e7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00129e80:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,11) = *vfp_s(cpu,12);
        }
    }
L_00129e84:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,11) = *vfp_s(cpu,13);
        }
    }
L_00129e88:;
    {
        vfp_sync_flags(cpu);
    }
L_00129e8c:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,15);
        }
    }
L_00129e90:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,14);
        }
    }
L_00129e94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_00129e98:;
    {
        vfp_sync_flags(cpu);
    }
L_00129e9c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,13);
        }
    }
L_00129ea0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_00129ea4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00129ea8:;
    {
        vfp_sync_flags(cpu);
    }
L_00129eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129f24;
        }
    }
L_00129eb0:;
    {
        vfp_vsub(cpu, 11, 12, 11);
    }
L_00129eb4:;
    {
        vfp_vdiv(cpu, 10, 11, 12);
    }
L_00129eb8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_00129ebc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00129ec0:;
    {
        vfp_sync_flags(cpu);
    }
L_00129ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129f14;
        }
    }
L_00129ec8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_00129ecc:;
    {
        vfp_sync_flags(cpu);
    }
L_00129ed0:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vsub(cpu, 15, 13, 15);
        }
    }
L_00129ed4:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_00129ed8:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vdiv(cpu, 14, 15, 11);
        }
    }
L_00129edc:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00129ee4u + + 0x58u);
        }
    }
L_00129ee0:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 14, 15, 11);
        }
    }
L_00129ee4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00129eecu + + 0x54u);
        }
    }
L_00129ee8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00129eec:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129ef0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00129ef8u + + 0x4cu);
    }
L_00129ef4:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00129ef8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00129efc:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129f00:;
    {
        vfp_sync_flags(cpu);
    }
L_00129f04:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00129f0cu + + 0x3cu);
        }
    }
L_00129f08:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_00129f0c:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00129f10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00129f14:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_00129f18:;
    {
        vfp_vdiv(cpu, 15, 14, 11);
    }
L_00129f1c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129f20:;
    {
        goto L_00129ef0;
    }
L_00129f24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00129f2cu + + 0x20u);
    }
L_00129f28:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129f2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00129f34u + + 0x1cu);
    }
L_00129f30:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129f34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CAlterHSV15AlterHSVDirrectEPvS0_iffff @ 00129f54 (arm) */
void fn_00129f54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129f54:;
    {
        cpu->r[12] = rd32(0x00129f5cu + + 0xd4u);
    }
L_00129f58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00129f5c:;
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
L_00129f60:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00129f64:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00129f68:;
    {
        cpu->r[3] = rd32(0x00129f70u + + 0xc4u);
    }
L_00129f6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00129f70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_00129f74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00129f7cu, cpu->r[12], 0, 0);
    }
L_00129f78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00129f7c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_00129f80:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00129f84:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00129f88:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00129f8c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00129f90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00129f94:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_00129f98:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_00129f9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012a024;
        }
    }
L_00129fa0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00129fa4:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00129fa8:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_00129fac:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_00129fb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00129fb4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00129fb8:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[7];
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
        cpu->r[5] = wb_tmp;
    }
L_00129fbc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00129fc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_00129fc4:;
    {
        cpu->r[8] = rd16(cpu->r[5] + + 0x4u);
    }
L_00129fc8:;
    {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[7];
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
        cpu->r[4] = wb_tmp;
    }
L_00129fcc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00129fd0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00129fd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00129fd8:;
    {
        cpu->r[14] = 0x00129fdcu; fn_00129de0(cpu);
    }
L_00129fdc:;
    {
        cpu->r[12] = rd16(cpu->r[5] + + 0x6u);
    }
L_00129fe0:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00129fe4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00129fe8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00129fec:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[8] = v;
    }
L_00129ff0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00129ff4:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00129ff8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00129ffc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012a000:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0012a004:;
    {
        cpu->r[14] = 0x0012a008u; fn_00129de0(cpu);
    }
L_0012a008:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012a00c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0012a010:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x4u);
    }
L_0012a014:;
    {
        uint32_t v = cpu->r[8] | cpu->r[3]; cpu->r[8] = v;
    }
L_0012a018:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0012a01c:;
    {
        wr16(cpu->r[4] + + 0x6u, cpu->r[0]);
    }
L_0012a020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00129fa8;
        }
    }
L_0012a024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012a028:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012a02c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012a030u)) return;
    }
}

/* _ZN9CAlterHSV5ColorEhhh @ 0012a038 (arm) */
void fn_0012a038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012a038:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0012a03c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_0012a058;
        case 1: goto L_0012a078;
        case 2: goto L_0012a05c;
        case 3: goto L_0012a054;
        default: guest_unimplemented(cpu, 0x0012a03cu); return; }
        }
    }
L_0012a040:;
    {
        goto L_0012a094;
    }
L_0012a054:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012a058:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012a05c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_0012a060:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_0012a064:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0012a068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0012a06c:;
    {
        cpu->r[0] = cpu->r[1] + (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0012a070:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0012a074:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012a078:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_0012a07c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_0012a080:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0012a084:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0012a088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012a08c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0012a090:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012a094:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012a098:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CAlterHSV7InterpAEii @ 0012a09c (arm) */
void fn_0012a09c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012a09c:;
    {
        cpu->r[3] = rd32(0x0012a0a4u + + 0x2b8u);
    }
L_0012a0a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012a0a8u + + 0x2b0u);
    }
L_0012a0a4:;
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
L_0012a0a8:;
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
L_0012a0ac:;
    {
        cpu->r[7] = rd32(0x0012a0b4u + + 0x2acu);
    }
L_0012a0b0:;
    {
        cpu->r[12] = rd32(0x0012a0b8u + + 0x2acu);
    }
L_0012a0b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012a0bcu, cpu->r[3], 0, 0);
    }
L_0012a0b8:;
    {
        cpu->r[7] = add_flags(cpu, 0x0012a0c0u, cpu->r[7], 0, 0);
    }
L_0012a0bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012a0c0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012a0c4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 8u, &shc); cpu->r[10] = v;
    }
L_0012a0c8:;
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
L_0012a0cc:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_0012a0d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0012a0d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_0012a0d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0012a0dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012a0e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0012a0e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012a0e8:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0012a0ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0012a0f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0012a0f4:;
    {
        cpu->r[0] = rd8(cpu->r[8] + + 0x3u);
    }
L_0012a0f8:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[0];
    }
L_0012a0fc:;
    {
        cpu->r[9] = rd8(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_0012a100:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_0012a104:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x1u);
    }
L_0012a108:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[9];
    }
L_0012a10c:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x2u);
    }
L_0012a110:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012a114:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_0012a118:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[8] = v1;
    }
L_0012a11c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0012a120:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012a124:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_0012a128:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 8u, &shc), 0, 0);
    }
L_0012a12c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0012a130:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0012a134:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0012a138:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012a13c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 8u, &shc), 0, 0);
    }
L_0012a140:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0012a144:;
    {
        cpu->r[10] = rd8(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0012a148:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[10];
    }
L_0012a14c:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_0012a150:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012a154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_0012a158:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012a15c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0012a160:;
    {
        cpu->r[2] = rd8(cpu->r[9] + + 0x3u);
    }
L_0012a164:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[3];
    }
L_0012a168:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0012a16c:;
    {
        cpu->r[11] = rd8(cpu->r[4] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0012a170:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[2];
    }
L_0012a174:;
    {
        cpu->r[4] = rd8(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0012a178:;
    {
        cpu->r[2] = rd8(cpu->r[8] + + 0x3u);
    }
L_0012a17c:;
    {
        *(uint32_t*)vfp_s(cpu,30) = cpu->r[4];
    }
L_0012a180:;
    {
        cpu->r[10] = rd8(cpu->r[8] + + 0x1u);
    }
L_0012a184:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[2];
    }
L_0012a188:;
    {
        cpu->r[4] = rd8(cpu->r[9] + + 0x1u);
    }
L_0012a18c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[10];
    }
L_0012a190:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x3u);
    }
L_0012a194:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[4];
    }
L_0012a198:;
    {
        cpu->r[10] = rd8(cpu->r[1] + + 0x1u);
    }
L_0012a19c:;
    {
        *(uint32_t*)vfp_s(cpu,25) = cpu->r[2];
    }
L_0012a1a0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0012a1a4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x3u);
    }
L_0012a1a8:;
    {
        cpu->r[4] = rd8(cpu->r[0] + + 0x1u);
    }
L_0012a1ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0012a1b0:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x2u);
    }
L_0012a1b4:;
    {
        *(uint32_t*)vfp_s(cpu,28) = cpu->r[10];
    }
L_0012a1b8:;
    {
        cpu->r[9] = rd8(cpu->r[9] + + 0x2u);
    }
L_0012a1bc:;
    {
        *(uint32_t*)vfp_s(cpu,26) = cpu->r[1];
    }
L_0012a1c0:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x2u);
    }
L_0012a1c4:;
    {
        *(uint32_t*)vfp_s(cpu,31) = cpu->r[11];
    }
L_0012a1c8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x2u);
    }
L_0012a1cc:;
    {
        *(uint32_t*)vfp_s(cpu,29) = cpu->r[4];
    }
L_0012a1d0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[9];
    }
L_0012a1d4:;
    {
        *(uint32_t*)vfp_s(cpu,0) = cpu->r[8];
    }
L_0012a1d8:;
    {
        vfp_vmul(cpu, 24, 10, 15);
    }
L_0012a1dc:;
    {
        *(uint32_t*)vfp_s(cpu,27) = cpu->r[0];
    }
L_0012a1e0:;
    {
        cpu->r[1] = rd32(0x0012a1e8u + + 0x180u);
    }
L_0012a1e4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0012a1e8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0012a1ec:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0012a1f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012a1f4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_0012a1f8:;
    {
        vfp_vmul(cpu, 23, 11, 15);
    }
L_0012a1fc:;
    {
        vfp_vmul(cpu, 22, 12, 15);
    }
L_0012a200:;
    {
        vfp_vmul(cpu, 21, 13, 15);
    }
L_0012a204:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0012a208:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_0012a20c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012a210:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_0012a214:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0012a218:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0012a21c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0012a220:;
    {
        *vfp_s(cpu,0) = (float)*(int32_t*)vfp_s(cpu,0);
    }
L_0012a224:;
    {
        *vfp_s(cpu,1) = (float)*(int32_t*)vfp_s(cpu,1);
    }
L_0012a228:;
    {
        *vfp_s(cpu,2) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012a22c:;
    {
        *vfp_s(cpu,31) = (float)*(int32_t*)vfp_s(cpu,31);
    }
L_0012a230:;
    {
        *vfp_s(cpu,30) = (float)*(int32_t*)vfp_s(cpu,30);
    }
L_0012a234:;
    {
        *vfp_s(cpu,29) = (float)*(int32_t*)vfp_s(cpu,29);
    }
L_0012a238:;
    {
        *vfp_s(cpu,28) = (float)*(int32_t*)vfp_s(cpu,28);
    }
L_0012a23c:;
    {
        *vfp_s(cpu,27) = (float)*(int32_t*)vfp_s(cpu,27);
    }
L_0012a240:;
    {
        *vfp_s(cpu,26) = (float)*(int32_t*)vfp_s(cpu,26);
    }
L_0012a244:;
    {
        *vfp_s(cpu,25) = (float)*(int32_t*)vfp_s(cpu,25);
    }
L_0012a248:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0012a24c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012a250:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13]);
    }
L_0012a254:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0012a258:;
    {
        vfp_vmul(cpu, 3, 25, 14);
    }
L_0012a25c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0012a260:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0012a264:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012a268:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 10u, &shc), 0, 0);
    }
L_0012a26c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_0012a270:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0012a274:;
    {
        vfp_vmul(cpu, 4, 13, 15);
    }
L_0012a278:;
    {
        vfp_vmul(cpu, 5, 31, 14);
    }
L_0012a27c:;
    {
        vfp_vmul(cpu, 6, 30, 15);
    }
L_0012a280:;
    {
        vfp_vmul(cpu, 7, 29, 14);
    }
L_0012a284:;
    {
        vfp_vmul(cpu, 8, 28, 15);
    }
L_0012a288:;
    {
        vfp_vmul(cpu, 9, 27, 14);
    }
L_0012a28c:;
    {
        vfp_vmul(cpu, 10, 26, 15);
    }
L_0012a290:;
    {
        *vfp_s(cpu,25) = *vfp_s(cpu,21);
    }
L_0012a294:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_0012a298:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0012a29c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_0012a2a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0012a2a4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_0012a2a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_0012a2ac:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,24);
    }
L_0012a2b0:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,23);
    }
L_0012a2b4:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,22);
    }
L_0012a2b8:;
    {
        vfp_vmla(cpu, 25, 14, 16);
    }
L_0012a2bc:;
    {
        vfp_vmla(cpu, 13, 14, 1);
    }
L_0012a2c0:;
    {
        vfp_vmla(cpu, 11, 20, 14);
    }
L_0012a2c4:;
    {
        vfp_vmla(cpu, 12, 14, 18);
    }
L_0012a2c8:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,25);
    }
L_0012a2cc:;
    {
        vfp_vmla(cpu, 13, 15, 2);
    }
L_0012a2d0:;
    {
        vfp_vmla(cpu, 11, 19, 15);
    }
L_0012a2d4:;
    {
        vfp_vmla(cpu, 12, 15, 17);
    }
L_0012a2d8:;
    {
        vfp_vmla(cpu, 14, 15, 0);
    }
L_0012a2dc:;
    {
        vfp_vadd(cpu, 11, 11, 5);
    }
L_0012a2e0:;
    {
        vfp_vadd(cpu, 12, 12, 7);
    }
L_0012a2e4:;
    {
        vfp_vadd(cpu, 14, 14, 9);
    }
L_0012a2e8:;
    {
        vfp_vadd(cpu, 13, 13, 3);
    }
L_0012a2ec:;
    {
        vfp_vadd(cpu, 11, 11, 6);
    }
L_0012a2f0:;
    {
        vfp_vadd(cpu, 12, 12, 8);
    }
L_0012a2f4:;
    {
        vfp_vadd(cpu, 14, 14, 10);
    }
L_0012a2f8:;
    {
        vfp_vadd(cpu, 13, 13, 4);
    }
L_0012a2fc:;
    {
        *(uint32_t*)vfp_s(cpu,11) = (uint32_t)*vfp_s(cpu,11);
    }
L_0012a300:;
    {
        *(uint32_t*)vfp_s(cpu,12) = (uint32_t)*vfp_s(cpu,12);
    }
L_0012a304:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0012a308:;
    {
        wr8(cpu->r[1], cpu->r[8]);
    }
L_0012a30c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = (uint32_t)*vfp_s(cpu,14);
    }
L_0012a310:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0012a314:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[7]);
    }
L_0012a318:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0012a31c:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012a320:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[8]);
    }
L_0012a324:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012a328:;
    {
        wr8(cpu->r[1] + + 0x3u, cpu->r[7]);
    }
L_0012a32c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0012a330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a290;
        }
    }
L_0012a334:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012a338:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0012a33c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012a340:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_0012a344:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a248;
        }
    }
L_0012a348:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0012a34c:;
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
L_0012a350:;
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
L_0012a354:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CAlterHSV7InterpBEii @ 0012a36c (arm) */
void fn_0012a36c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012a36c:;
    {
        cpu->r[3] = rd32(0x0012a374u + + 0x2d4u);
    }
L_0012a370:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012a378u + + 0x2ccu);
    }
L_0012a374:;
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
L_0012a378:;
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
L_0012a37c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012a384u, cpu->r[3], 0, 0);
    }
L_0012a380:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0012a384:;
    {
        cpu->r[7] = rd32(0x0012a38cu + + 0x2c0u);
    }
L_0012a388:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012a38c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012a390:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 8u, &shc); cpu->r[10] = v;
    }
L_0012a394:;
    {
        cpu->r[4] = rd32(0x0012a39cu + + 0x2b4u);
    }
L_0012a398:;
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
L_0012a39c:;
    {
        cpu->r[7] = add_flags(cpu, 0x0012a3a4u, cpu->r[7], 0, 0);
    }
L_0012a3a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_0012a3a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_0012a3a8:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0012a3ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012a3b0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0012a3b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0012a3b8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0012a3bc:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0012a3c0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0012a3c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0012a3c8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012a3cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012a3d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0012a3d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012a3d8:;
    {
        cpu->r[0] = rd8(cpu->r[8] + + 0x3u);
    }
L_0012a3dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0012a3e0:;
    {
        cpu->r[9] = rd8(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_0012a3e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_0012a3e8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0012a3ec:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[0];
    }
L_0012a3f0:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x1u);
    }
L_0012a3f4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[9];
    }
L_0012a3f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0012a3fc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012a400:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x2u);
    }
L_0012a404:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_0012a408:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a40c:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0012a410:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012a414:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012a418:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012a41c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0012a420:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 8u, &shc), 0, 0);
    }
L_0012a424:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x3u);
    }
L_0012a428:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 8u, &shc), 0, 0);
    }
L_0012a42c:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[3];
    }
L_0012a430:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_0012a434:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012a438:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0012a43c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0012a440:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0012a444:;
    {
        cpu->r[2] = rd8(cpu->r[8] + + 0x3u);
    }
L_0012a448:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x3u);
    }
L_0012a44c:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[2];
    }
L_0012a450:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0012a454:;
    {
        *(uint32_t*)vfp_s(cpu,25) = cpu->r[3];
    }
L_0012a458:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x3u);
    }
L_0012a45c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0012a460:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012a464:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012a468:;
    {
        cpu->r[11] = rd8(cpu->r[4] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0012a46c:;
    {
        *(uint32_t*)vfp_s(cpu,30) = cpu->r[11];
    }
L_0012a470:;
    {
        cpu->r[9] = rd8(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_0012a474:;
    {
        *(uint32_t*)vfp_s(cpu,31) = cpu->r[9];
    }
L_0012a478:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0012a47c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0012a480:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[2];
    }
L_0012a484:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012a488:;
    {
        cpu->r[11] = rd8(cpu->r[10] + + 0x1u);
    }
L_0012a48c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[11];
    }
L_0012a490:;
    {
        cpu->r[10] = rd8(cpu->r[10] + + 0x2u);
    }
L_0012a494:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[10];
    }
L_0012a498:;
    {
        cpu->r[2] = rd8(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0012a49c:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[2];
    }
L_0012a4a0:;
    {
        cpu->r[11] = rd8(cpu->r[0] + + 0x1u);
    }
L_0012a4a4:;
    {
        *(uint32_t*)vfp_s(cpu,29) = cpu->r[11];
    }
L_0012a4a8:;
    {
        cpu->r[2] = rd8(cpu->r[8] + + 0x1u);
    }
L_0012a4ac:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_0012a4b0:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_0012a4b4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_0012a4b8:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x2u);
    }
L_0012a4bc:;
    {
        *(uint32_t*)vfp_s(cpu,28) = cpu->r[2];
    }
L_0012a4c0:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x2u);
    }
L_0012a4c4:;
    {
        *(uint32_t*)vfp_s(cpu,0) = cpu->r[8];
    }
L_0012a4c8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x2u);
    }
L_0012a4cc:;
    {
        *(uint32_t*)vfp_s(cpu,26) = cpu->r[1];
    }
L_0012a4d0:;
    {
        *(uint32_t*)vfp_s(cpu,27) = cpu->r[0];
    }
L_0012a4d4:;
    {
        cpu->r[1] = rd32(0x0012a4dcu + + 0x178u);
    }
L_0012a4d8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0012a4dc:;
    {
        vfp_vmul(cpu, 24, 10, 15);
    }
L_0012a4e0:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_0012a4e4:;
    {
        vfp_vmul(cpu, 23, 11, 15);
    }
L_0012a4e8:;
    {
        vfp_vmul(cpu, 22, 12, 15);
    }
L_0012a4ec:;
    {
        vfp_vmul(cpu, 21, 13, 15);
    }
L_0012a4f0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0012a4f4:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_0012a4f8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012a4fc:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_0012a500:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0012a504:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0012a508:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0012a50c:;
    {
        *vfp_s(cpu,0) = (float)*(int32_t*)vfp_s(cpu,0);
    }
L_0012a510:;
    {
        *vfp_s(cpu,1) = (float)*(int32_t*)vfp_s(cpu,1);
    }
L_0012a514:;
    {
        *vfp_s(cpu,2) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012a518:;
    {
        *vfp_s(cpu,31) = (float)*(int32_t*)vfp_s(cpu,31);
    }
L_0012a51c:;
    {
        *vfp_s(cpu,30) = (float)*(int32_t*)vfp_s(cpu,30);
    }
L_0012a520:;
    {
        *vfp_s(cpu,29) = (float)*(int32_t*)vfp_s(cpu,29);
    }
L_0012a524:;
    {
        *vfp_s(cpu,28) = (float)*(int32_t*)vfp_s(cpu,28);
    }
L_0012a528:;
    {
        *vfp_s(cpu,27) = (float)*(int32_t*)vfp_s(cpu,27);
    }
L_0012a52c:;
    {
        *vfp_s(cpu,26) = (float)*(int32_t*)vfp_s(cpu,26);
    }
L_0012a530:;
    {
        *vfp_s(cpu,25) = (float)*(int32_t*)vfp_s(cpu,25);
    }
L_0012a534:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0012a538:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012a53c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13]);
    }
L_0012a540:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0012a544:;
    {
        vfp_vmul(cpu, 3, 25, 14);
    }
L_0012a548:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0012a54c:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0012a550:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012a554:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 10u, &shc), 0, 0);
    }
L_0012a558:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_0012a55c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0012a560:;
    {
        vfp_vmul(cpu, 4, 13, 15);
    }
L_0012a564:;
    {
        vfp_vmul(cpu, 5, 31, 14);
    }
L_0012a568:;
    {
        vfp_vmul(cpu, 6, 30, 15);
    }
L_0012a56c:;
    {
        vfp_vmul(cpu, 7, 29, 14);
    }
L_0012a570:;
    {
        vfp_vmul(cpu, 8, 28, 15);
    }
L_0012a574:;
    {
        vfp_vmul(cpu, 9, 27, 14);
    }
L_0012a578:;
    {
        vfp_vmul(cpu, 10, 26, 15);
    }
L_0012a57c:;
    {
        *vfp_s(cpu,25) = *vfp_s(cpu,21);
    }
L_0012a580:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_0012a584:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0012a588:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_0012a58c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0012a590:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_0012a594:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_0012a598:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,24);
    }
L_0012a59c:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,23);
    }
L_0012a5a0:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,22);
    }
L_0012a5a4:;
    {
        vfp_vmla(cpu, 25, 14, 16);
    }
L_0012a5a8:;
    {
        vfp_vmla(cpu, 13, 14, 1);
    }
L_0012a5ac:;
    {
        vfp_vmla(cpu, 11, 20, 14);
    }
L_0012a5b0:;
    {
        vfp_vmla(cpu, 12, 14, 18);
    }
L_0012a5b4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,25);
    }
L_0012a5b8:;
    {
        vfp_vmla(cpu, 13, 15, 2);
    }
L_0012a5bc:;
    {
        vfp_vmla(cpu, 11, 19, 15);
    }
L_0012a5c0:;
    {
        vfp_vmla(cpu, 12, 15, 17);
    }
L_0012a5c4:;
    {
        vfp_vmla(cpu, 14, 15, 0);
    }
L_0012a5c8:;
    {
        vfp_vadd(cpu, 11, 11, 5);
    }
L_0012a5cc:;
    {
        vfp_vadd(cpu, 12, 12, 7);
    }
L_0012a5d0:;
    {
        vfp_vadd(cpu, 14, 14, 9);
    }
L_0012a5d4:;
    {
        vfp_vadd(cpu, 13, 13, 3);
    }
L_0012a5d8:;
    {
        vfp_vadd(cpu, 11, 11, 6);
    }
L_0012a5dc:;
    {
        vfp_vadd(cpu, 12, 12, 8);
    }
L_0012a5e0:;
    {
        vfp_vadd(cpu, 14, 14, 10);
    }
L_0012a5e4:;
    {
        vfp_vadd(cpu, 13, 13, 4);
    }
L_0012a5e8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = (uint32_t)*vfp_s(cpu,11);
    }
L_0012a5ec:;
    {
        *(uint32_t*)vfp_s(cpu,12) = (uint32_t)*vfp_s(cpu,12);
    }
L_0012a5f0:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0012a5f4:;
    {
        wr8(cpu->r[1], cpu->r[8]);
    }
L_0012a5f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = (uint32_t)*vfp_s(cpu,14);
    }
L_0012a5fc:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0012a600:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[7]);
    }
L_0012a604:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0012a608:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012a60c:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[8]);
    }
L_0012a610:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012a614:;
    {
        wr8(cpu->r[1] + + 0x3u, cpu->r[7]);
    }
L_0012a618:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0012a61c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a57c;
        }
    }
L_0012a620:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012a624:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0012a628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012a62c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_0012a630:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a534;
        }
    }
L_0012a634:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0012a638:;
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
L_0012a63c:;
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
L_0012a640:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CAlterHSV10DecompressEPvS0_iiiiii @ 0012a658 (arm) */
void fn_0012a658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012a658:;
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
L_0012a65c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0012a660:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012a664:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0012a668:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0012a66c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012a670:;
    {
        cpu->r[2] = rd32(0x0012a678u + + 0x390u);
    }
L_0012a674:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0012a678:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012a680u, cpu->r[2], 0, 0);
    }
L_0012a67c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_0012a680:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0012a684:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0012a688:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0012a68c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0012a690:;
    {
        cpu->r[1] = rd32(0x0012a698u + + 0x374u);
    }
L_0012a694:;
    {
        cpu->r[2] = rd32(0x0012a69cu + + 0x374u);
    }
L_0012a698:;
    {
        cpu->r[3] = rd32(0x0012a6a0u + + 0x374u);
    }
L_0012a69c:;
    {
        cpu->r[12] = rd32(0x0012a6a4u + + 0x374u);
    }
L_0012a6a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0012a6a4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0012a6a8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0012a6ac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0012a6b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012a6b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012a6b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0012a6bc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012a7d4;
        }
    }
L_0012a6c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012a6c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012a6c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012a7b8;
        }
    }
L_0012a6cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012a6d0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012a6d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012a6d8:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0012a6dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012a6e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0012a6e4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0012a6e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012a6ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012a6f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012a6f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0012a6f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_0012a6fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0012a700:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0012a704:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012a708:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012a70c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012a710:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0012a714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0012a718:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0012a71c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[10] = v;
    }
L_0012a720:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_0012a724:;
    {
        cpu->r[0] = rd16(cpu->r[9] + + 0x4u);
    }
L_0012a728:;
    {
        cpu->r[14] = 0x0012a72cu; fn_00129d6c(cpu);
    }
L_0012a72c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012a730:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012a734:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0012a738:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0012a73c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_0012a740:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012a744:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012a748:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0012a74c:;
    {
        wr8(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_0012a750:;
    {
        cpu->r[2] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012a754:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_0012a758:;
    {
        cpu->r[2] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012a75c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012a760:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_0012a764:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0012a768:;
    {
        cpu->r[0] = rd16(cpu->r[9] + + 0x6u);
    }
L_0012a76c:;
    {
        cpu->r[14] = 0x0012a770u; fn_00129d6c(cpu);
    }
L_0012a770:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a774:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012a778:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012a77c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0012a780:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0012a784:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012a788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0012a78c:;
    {
        wr8(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_0012a790:;
    {
        cpu->r[2] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012a794:;
    {
        wr8(cpu->r[10] + + 0x3u, cpu->r[2]);
    }
L_0012a798:;
    {
        cpu->r[2] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012a79c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012a7a0:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[2]);
    }
L_0012a7a4:;
    {
        wr8(cpu->r[10] + + 0x2u, cpu->r[0]);
    }
L_0012a7a8:;
    {
        cpu->r[2] = rd32(cpu->r[11] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_0012a7ac:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[2]);
    }
L_0012a7b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0012a7b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a704;
        }
    }
L_0012a7b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012a7bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012a7c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0012a7c4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0012a7c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_0012a7cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0012a7d0:;
    {
        goto L_0012a6b0;
    }
L_0012a7d4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012a7d8:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_0012a7dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0012a7e0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012a814;
        }
    }
L_0012a7e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012a7e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012a7ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012a7f0:;
    {
        cpu->r[14] = 0x0012a7f4u; fn_0012a09c(cpu);
    }
L_0012a7f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012a7f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012a7fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012a800:;
    {
        cpu->r[14] = 0x0012a804u; fn_0012a36c(cpu);
    }
L_0012a804:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_0012a808:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012a7e8;
        }
    }
L_0012a80c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012a810:;
    {
        goto L_0012a7dc;
    }
L_0012a814:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012a818:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a81c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012a820:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012a824:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012a828:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012a82c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_0012a830:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0012a834:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 4u, &shc); cpu->r[1] = v;
    }
L_0012a838:;
    {
        cpu->r[12] = rd32(0x0012a840u + + 0x1dcu);
    }
L_0012a83c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0012a840:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0012a844:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012a848:;
    {
        cpu->r[1] = rd32(0x0012a850u + + 0x1d0u);
    }
L_0012a84c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0012a850:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0012a854:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0012a858:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0012a85c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012a860:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012a864:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0012a868:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012aa00;
        }
    }
L_0012a86c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012a870:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012a874:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0012a878:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0012a87c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0012a880:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0012a884:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0012a888:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012a88c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012a890:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0012a894:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0012a898:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012a89c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012a8a0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0012a8a4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0012a8a8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0012a8ac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0012a8b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0012a8b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012a8b8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0012a8bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a8c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012a8c4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012a8c8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012a8cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012a8d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012a8d4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0012a8d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a8dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0012a8e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012a8e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012a8e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 10u, &shc), 0, 0);
    }
L_0012a8ec:;
    {
        cpu->r[6] = rd32(cpu->r[13]);
    }
L_0012a8f0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_0012a8f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0012a8f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_0012a8fc:;
    {
        uint32_t v = cpu->r[10] & 0x00000003u; cpu->r[7] = v;
    }
L_0012a900:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_0012a904:;
    {
        cpu->r[0] = rd8(cpu->r[4]);
    }
L_0012a908:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012a90c:;
    {
        cpu->r[14] = 0x0012a910u; fn_0012a038(cpu);
    }
L_0012a910:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012a914:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 2u, &shc); cpu->r[10] = v;
    }
L_0012a918:;
    {
        wr8(cpu->r[6], cpu->r[0]);
    }
L_0012a91c:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x1u);
    }
L_0012a920:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x1u);
    }
L_0012a924:;
    {
        cpu->r[14] = 0x0012a928u; fn_0012a038(cpu);
    }
L_0012a928:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012a92c:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[0]);
    }
L_0012a930:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x2u);
    }
L_0012a934:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2u);
    }
L_0012a938:;
    {
        cpu->r[14] = 0x0012a93cu; fn_0012a038(cpu);
    }
L_0012a93c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[8], 0, 0);
    }
L_0012a940:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012a944:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012a948:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0012a94c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x3u);
    }
L_0012a950:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0012a954:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x3u);
    }
L_0012a958:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012a95c:;
    {
        cpu->r[14] = 0x0012a960u; fn_0012a038(cpu);
    }
L_0012a960:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000010u, 1, 1);
    }
L_0012a964:;
    {
        wr8(cpu->r[6] + + 0x3u, cpu->r[0]);
    }
L_0012a968:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0012a96c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a8fc;
        }
    }
L_0012a970:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012a974:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_0012a978:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 1);
    }
L_0012a97c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0012a980:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_0012a984:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0012a988:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012a8d0;
        }
    }
L_0012a98c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012a990:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012a994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012a998:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012a99c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012a9a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0012a9a4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0012a9a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0012a9ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012a9b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0012a9b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0012a9b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0012a9bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0012a9c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0012a9c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012a8b4;
        }
    }
L_0012a9c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012a9cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012a9d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0012a9d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012a9d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012a9dc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0012a9e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0012a9e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012a9e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0012a9ec:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0012a9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000400u, 0, 0);
    }
L_0012a9f4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0012a9f8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0012a9fc:;
    {
        goto L_0012a85c;
    }
L_0012aa00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0012aa04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012aa08u)) return;
    }
}

/* _ZN9CAlterHSV10DecompressEPvS0_ii @ 0012aa24 (arm) */
void fn_0012aa24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012aa24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0012aa28:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012aa2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012aa30:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_0012aa34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012aa38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000002u;
        }
    }
L_0012aa3c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[4] = v;
        }
    }
L_0012aa40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0012aa44:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[14] = v;
        }
    }
L_0012aa48:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0012aa4c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = 0x00000002u;
        }
    }
L_0012aa50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012aa54:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012aa58:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0012aa5c:;
    {
        cpu->r[14] = 0x0012aa60u; fn_0012a658(cpu);
    }
L_0012aa60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012aa64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012aa68u)) return;
    }
}

/* _ZN9CAlterHSV9AlterRGBAEffff @ 0012aa68 (arm) */
void fn_0012aa68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012aa68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_0012aa6c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0012aa74u + + 0x3b4u);
    }
L_0012aa70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0012aa74:;
    {
        cpu->r[12] = rd32(0x0012aa7cu + + 0x3ccu);
    }
L_0012aa78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0012aa7c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012aa80:;
    {
        cpu->r[3] = rd32(0x0012aa88u + + 0x3c4u);
    }
L_0012aa84:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012aa8cu, cpu->r[12], 0, 0);
    }
L_0012aa88:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[1];
    }
L_0012aa8c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0012aa90:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0012aa94:;
    {
        vfp_sync_flags(cpu);
    }
L_0012aa98:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012aa9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_0012aaa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012aac0;
        }
    }
L_0012aaa4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0012aaacu + + 0x380u);
    }
L_0012aaa8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0012aaac:;
    {
        vfp_sync_flags(cpu);
    }
L_0012aab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012aabc;
        }
    }
L_0012aab4:;
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
L_0012aab8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012aabc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0012aac0:;
    {
        *vfp_d(cpu,4) = (double)*vfp_s(cpu,14);
    }
L_0012aac4:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x0012aaccu + + 0x34cu);
    }
L_0012aac8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_0012aacc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0012aad0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0012aad4:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0012aad8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_0012aadc:;
    {
        *vfp_d(cpu, 5) = -(*vfp_d(cpu, 5) - *vfp_d(cpu, 4) * *vfp_d(cpu, 5));
    }
L_0012aae0:;
    {
        *vfp_d(cpu, 4) = *(double*)G(0x0012aae8u + + 0x338u);
    }
L_0012aae4:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) * *vfp_d(cpu, 4);
    }
L_0012aae8:;
    {
        vfp_vsub(cpu, 7, 7, 15);
    }
L_0012aaec:;
    {
        *vfp_s(cpu,11) = (float)*vfp_d(cpu,5);
    }
L_0012aaf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012aab4;
        }
    }
L_0012aaf4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[5] = v;
    }
L_0012aaf8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012aafc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ab04u + + 0x32cu);
    }
L_0012ab00:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x0012ab08u + + 0x32cu);
    }
L_0012ab04:;
    {
        *vfp_s(cpu, 5) = *(float*)G(0x0012ab0cu + + 0x32cu);
    }
L_0012ab08:;
    {
        *vfp_s(cpu, 6) = *(float*)G(0x0012ab10u + + 0x32cu);
    }
L_0012ab0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012ab14u + + 0x32cu);
    }
L_0012ab10:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0012ab18u + + 0x32cu);
    }
L_0012ab14:;
    {
        goto L_0012ab4c;
    }
L_0012ab18:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[0] = v;
    }
L_0012ab1c:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[6] = v;
    }
L_0012ab20:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0012ab24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ac04;
        }
    }
L_0012ab28:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[0] = v;
    }
L_0012ab2c:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[6] = v;
    }
L_0012ab30:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0012ab34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ac9c;
        }
    }
L_0012ab38:;
    {
        sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 3, 2u, &shc), 1, 1);
    }
L_0012ab3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ad2c;
        }
    }
L_0012ab40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012ab44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_0012ab48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0012ab4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0012ab50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012aab4;
        }
    }
L_0012ab54:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0012ab58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012ab5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ab40;
        }
    }
L_0012ab60:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[6] = v;
    }
L_0012ab64:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0012ab68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ab18;
        }
    }
L_0012ab6c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0012ab70:;
    {
        vfp_vadd(cpu, 9, 9, 12);
    }
L_0012ab74:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0012ab78:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2]);
    }
L_0012ab7c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ab80:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012ab84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012ab88:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012ab8c:;
    {
        vfp_vsub(cpu, 9, 9, 15);
    }
L_0012ab90:;
    {
        vfp_vadd(cpu, 8, 8, 11);
    }
L_0012ab94:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ab98:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012ab9c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012aba0:;
    {
        vfp_vadd(cpu, 9, 9, 15);
    }
L_0012aba4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012aba8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012abac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0012abb0:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[7];
    }
L_0012abb4:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_0012abb8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_0012abbc:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012abc0:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012abc4:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[6];
    }
L_0012abc8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012abcc:;
    {
        vfp_vadd(cpu, 8, 8, 15);
    }
L_0012abd0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012af08;
        }
    }
L_0012abd4:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012abd8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[0] = v;
    }
L_0012abdc:;
    {
        vfp_vmla(cpu, 2, 8, 13);
    }
L_0012abe0:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012abe4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012abe8:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_0012abec:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[6]);
    }
L_0012abf0:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_0012abf4:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[6]);
    }
L_0012abf8:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[6] = v;
    }
L_0012abfc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0012ac00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ab28;
        }
    }
L_0012ac04:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_0012ac08:;
    {
        vfp_vadd(cpu, 9, 9, 12);
    }
L_0012ac0c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_0012ac10:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0012ac14:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ac18:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012ac1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012ac20:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012ac24:;
    {
        vfp_vsub(cpu, 9, 9, 15);
    }
L_0012ac28:;
    {
        vfp_vadd(cpu, 8, 8, 11);
    }
L_0012ac2c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ac30:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012ac34:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012ac38:;
    {
        vfp_vadd(cpu, 9, 9, 15);
    }
L_0012ac3c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012ac40:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012ac44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0012ac48:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[7];
    }
L_0012ac4c:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_0012ac50:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_0012ac54:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012ac58:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012ac5c:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[6];
    }
L_0012ac60:;
    {
        vfp_sync_flags(cpu);
    }
L_0012ac64:;
    {
        vfp_vadd(cpu, 8, 8, 15);
    }
L_0012ac68:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012ae50;
        }
    }
L_0012ac6c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012ac70:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[0] = v;
    }
L_0012ac74:;
    {
        vfp_vmla(cpu, 2, 8, 13);
    }
L_0012ac78:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012ac7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012ac80:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_0012ac84:;
    {
        wr8(cpu->r[1] + + 0x6u, cpu->r[6]);
    }
L_0012ac88:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[6]);
    }
L_0012ac8c:;
    {
        wr8(cpu->r[1] + + 0x5u, cpu->r[6]);
    }
L_0012ac90:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[6] = v;
    }
L_0012ac94:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0012ac98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ab38;
        }
    }
L_0012ac9c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x1cu);
    }
L_0012aca0:;
    {
        vfp_vadd(cpu, 9, 9, 12);
    }
L_0012aca4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x20u);
    }
L_0012aca8:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2] + + 0x18u);
    }
L_0012acac:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012acb0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012acb4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012acb8:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012acbc:;
    {
        vfp_vsub(cpu, 9, 9, 15);
    }
L_0012acc0:;
    {
        vfp_vadd(cpu, 8, 8, 11);
    }
L_0012acc4:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012acc8:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012accc:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[6];
    }
L_0012acd0:;
    {
        vfp_vadd(cpu, 9, 9, 15);
    }
L_0012acd4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012acd8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012acdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0012ace0:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[7];
    }
L_0012ace4:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_0012ace8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_0012acec:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012acf0:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0012acf4:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[6];
    }
L_0012acf8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012acfc:;
    {
        vfp_vadd(cpu, 8, 8, 15);
    }
L_0012ad00:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012adb8;
        }
    }
L_0012ad04:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012ad08:;
    {
        sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 3, 2u, &shc), 1, 1);
    }
L_0012ad0c:;
    {
        vfp_vmla(cpu, 2, 8, 13);
    }
L_0012ad10:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012ad14:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012ad18:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_0012ad1c:;
    {
        wr8(cpu->r[1] + + 0xau, cpu->r[6]);
    }
L_0012ad20:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_0012ad24:;
    {
        wr8(cpu->r[1] + + 0x9u, cpu->r[6]);
    }
L_0012ad28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ab40;
        }
    }
L_0012ad2c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x28u);
    }
L_0012ad30:;
    {
        vfp_vadd(cpu, 9, 9, 12);
    }
L_0012ad34:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x2cu);
    }
L_0012ad38:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2] + + 0x24u);
    }
L_0012ad3c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ad40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012ad44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012ad48:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0012ad4c:;
    {
        vfp_vsub(cpu, 9, 9, 15);
    }
L_0012ad50:;
    {
        vfp_vadd(cpu, 8, 8, 11);
    }
L_0012ad54:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012ad58:;
    {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0012ad5c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0012ad60:;
    {
        vfp_vadd(cpu, 9, 9, 15);
    }
L_0012ad64:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012ad68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012ad6c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012ad70:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[6];
    }
L_0012ad74:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_0012ad78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_0012ad7c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,8);
    }
L_0012ad80:;
    {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0012ad84:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[0];
    }
L_0012ad88:;
    {
        vfp_sync_flags(cpu);
    }
L_0012ad8c:;
    {
        vfp_vadd(cpu, 8, 8, 15);
    }
L_0012ad90:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012aeac;
        }
    }
L_0012ad94:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012ad98:;
    {
        vfp_vmla(cpu, 2, 8, 13);
    }
L_0012ad9c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012ada0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0xb4000000u, 0, 0);
    }
L_0012ada4:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0012ada8:;
    {
        wr8(cpu->r[1] + + 0xeu, cpu->r[0]);
    }
L_0012adac:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_0012adb0:;
    {
        wr8(cpu->r[1] + + 0xdu, cpu->r[0]);
    }
L_0012adb4:;
    {
        goto L_0012ab40;
    }
L_0012adb8:;
    {
        vfp_vadd(cpu, 4, 4, 7);
    }
L_0012adbc:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,4);
    }
L_0012adc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012adc4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012adc8:;
    {
        *(uint32_t*)vfp_s(cpu,4) = cpu->r[6];
    }
L_0012adcc:;
    {
        vfp_vmul(cpu, 4, 4, 5);
    }
L_0012add0:;
    {
        vfp_vsub(cpu, 3, 4, 6);
    }
L_0012add4:;
    {
        vfp_vadd(cpu, 3, 3, 14);
    }
L_0012add8:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012addc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012ade0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00c00000u, 0, 0);
    }
L_0012ade4:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[6];
    }
L_0012ade8:;
    {
        *vfp_s(cpu,3) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012adec:;
    {
        vfp_vsub(cpu, 4, 4, 3);
    }
L_0012adf0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 1);
    }
L_0012adf4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_0012b054;
        case 1: goto L_0012b2d8;
        case 2: goto L_0012b2b8;
        case 3: goto L_0012b29c;
        case 4: goto L_0012b27c;
        case 5: goto L_0012b11c;
        default: guest_unimplemented(cpu, 0x0012adf4u); return; }
        }
    }
L_0012adf8:;
    {
        goto L_0012b054;
    }
L_0012ae50:;
    {
        vfp_vadd(cpu, 4, 4, 7);
    }
L_0012ae54:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,4);
    }
L_0012ae58:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012ae5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012ae60:;
    {
        *(uint32_t*)vfp_s(cpu,4) = cpu->r[6];
    }
L_0012ae64:;
    {
        vfp_vmul(cpu, 4, 4, 5);
    }
L_0012ae68:;
    {
        vfp_vsub(cpu, 3, 4, 6);
    }
L_0012ae6c:;
    {
        vfp_vadd(cpu, 3, 3, 14);
    }
L_0012ae70:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012ae74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012ae78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00c00000u, 0, 0);
    }
L_0012ae7c:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[6];
    }
L_0012ae80:;
    {
        *vfp_s(cpu,3) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012ae84:;
    {
        vfp_vsub(cpu, 4, 4, 3);
    }
L_0012ae88:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 1);
    }
L_0012ae8c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_0012b004;
        case 1: goto L_0012b260;
        case 2: goto L_0012b240;
        case 3: goto L_0012b178;
        case 4: goto L_0012b158;
        case 5: goto L_0012b224;
        default: guest_unimplemented(cpu, 0x0012ae8cu); return; }
        }
    }
L_0012ae90:;
    {
        goto L_0012b004;
    }
L_0012aeac:;
    {
        vfp_vadd(cpu, 4, 4, 7);
    }
L_0012aeb0:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,4);
    }
L_0012aeb4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012aeb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0012aebc:;
    {
        *(uint32_t*)vfp_s(cpu,4) = cpu->r[7];
    }
L_0012aec0:;
    {
        vfp_vmul(cpu, 4, 4, 5);
    }
L_0012aec4:;
    {
        vfp_vsub(cpu, 3, 4, 6);
    }
L_0012aec8:;
    {
        vfp_vadd(cpu, 3, 3, 14);
    }
L_0012aecc:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012aed0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0xb4000000u, 0, 0);
    }
L_0012aed4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00c00000u, 0, 0);
    }
L_0012aed8:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[0];
    }
L_0012aedc:;
    {
        *vfp_s(cpu,3) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012aee0:;
    {
        vfp_vsub(cpu, 4, 4, 3);
    }
L_0012aee4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0012aee8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_0012afb4;
        case 1: goto L_0012b100;
        case 2: goto L_0012b0e0;
        case 3: goto L_0012b0c4;
        case 4: goto L_0012b0a4;
        case 5: goto L_0012b208;
        default: guest_unimplemented(cpu, 0x0012aee8u); return; }
        }
    }
L_0012aeec:;
    {
        goto L_0012afb4;
    }
L_0012af08:;
    {
        vfp_vadd(cpu, 4, 4, 7);
    }
L_0012af0c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,4);
    }
L_0012af10:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012af14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0012af18:;
    {
        *(uint32_t*)vfp_s(cpu,4) = cpu->r[6];
    }
L_0012af1c:;
    {
        vfp_vmul(cpu, 4, 4, 5);
    }
L_0012af20:;
    {
        vfp_vsub(cpu, 3, 4, 6);
    }
L_0012af24:;
    {
        vfp_vadd(cpu, 3, 3, 14);
    }
L_0012af28:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012af2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0xb4000000u, 0, 0);
    }
L_0012af30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00c00000u, 0, 0);
    }
L_0012af34:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[6];
    }
L_0012af38:;
    {
        *vfp_s(cpu,3) = (float)*(int32_t*)vfp_s(cpu,2);
    }
L_0012af3c:;
    {
        vfp_vsub(cpu, 4, 4, 3);
    }
L_0012af40:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 1);
    }
L_0012af44:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_0012af64;
        case 1: goto L_0012b1d0;
        case 2: goto L_0012b1b0;
        case 3: goto L_0012b194;
        case 4: goto L_0012b138;
        case 5: goto L_0012b1ec;
        default: guest_unimplemented(cpu, 0x0012af44u); return; }
        }
    }
L_0012af48:;
    {
        goto L_0012af64;
    }
L_0012af64:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012af68:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012af6c:;
    {
        vfp_vmls(cpu, 3, 4, 9);
    }
L_0012af70:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012af74:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012af78:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012af7c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012af80:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,14);
    }
L_0012af84:;
    {
        vfp_vmla(cpu, 9, 2, 13);
    }
L_0012af88:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012af8c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012af90:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_0012af94:;
    {
        vfp_vmla(cpu, 2, 3, 13);
    }
L_0012af98:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,14);
    }
L_0012af9c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012afa0:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[7]);
    }
L_0012afa4:;
    {
        vfp_vmla(cpu, 3, 4, 13);
    }
L_0012afa8:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012afac:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[6]);
    }
L_0012afb0:;
    {
        goto L_0012ab18;
    }
L_0012afb4:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012afb8:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012afbc:;
    {
        vfp_vmls(cpu, 3, 4, 9);
    }
L_0012afc0:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012afc4:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012afc8:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012afcc:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012afd0:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,14);
    }
L_0012afd4:;
    {
        vfp_vmla(cpu, 9, 2, 13);
    }
L_0012afd8:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012afdc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012afe0:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_0012afe4:;
    {
        vfp_vmla(cpu, 2, 3, 13);
    }
L_0012afe8:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,14);
    }
L_0012afec:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012aff0:;
    {
        wr8(cpu->r[1] + + 0xdu, cpu->r[6]);
    }
L_0012aff4:;
    {
        vfp_vmla(cpu, 3, 4, 13);
    }
L_0012aff8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012affc:;
    {
        wr8(cpu->r[1] + + 0xeu, cpu->r[0]);
    }
L_0012b000:;
    {
        goto L_0012ab40;
    }
L_0012b004:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b008:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b00c:;
    {
        vfp_vmls(cpu, 3, 4, 9);
    }
L_0012b010:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b014:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b018:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b01c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b020:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,14);
    }
L_0012b024:;
    {
        vfp_vmla(cpu, 9, 2, 13);
    }
L_0012b028:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012b02c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012b030:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[6]);
    }
L_0012b034:;
    {
        vfp_vmla(cpu, 2, 3, 13);
    }
L_0012b038:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,14);
    }
L_0012b03c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012b040:;
    {
        wr8(cpu->r[1] + + 0x5u, cpu->r[7]);
    }
L_0012b044:;
    {
        vfp_vmla(cpu, 3, 4, 13);
    }
L_0012b048:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012b04c:;
    {
        wr8(cpu->r[1] + + 0x6u, cpu->r[6]);
    }
L_0012b050:;
    {
        goto L_0012ab28;
    }
L_0012b054:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b058:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b05c:;
    {
        vfp_vmls(cpu, 3, 4, 9);
    }
L_0012b060:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b064:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b068:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b06c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b070:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,14);
    }
L_0012b074:;
    {
        vfp_vmla(cpu, 9, 2, 13);
    }
L_0012b078:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,14);
    }
L_0012b07c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,9);
    }
L_0012b080:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_0012b084:;
    {
        vfp_vmla(cpu, 2, 3, 13);
    }
L_0012b088:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,14);
    }
L_0012b08c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,2);
    }
L_0012b090:;
    {
        wr8(cpu->r[1] + + 0x9u, cpu->r[7]);
    }
L_0012b094:;
    {
        vfp_vmla(cpu, 3, 4, 13);
    }
L_0012b098:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,3);
    }
L_0012b09c:;
    {
        wr8(cpu->r[1] + + 0xau, cpu->r[6]);
    }
L_0012b0a0:;
    {
        goto L_0012ab38;
    }
L_0012b0a4:;
    {
        vfp_vsub(cpu, 3, 15, 4);
    }
L_0012b0a8:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b0ac:;
    {
        vfp_vmls(cpu, 2, 3, 9);
    }
L_0012b0b0:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b0b4:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b0b8:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b0bc:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b0c0:;
    {
        goto L_0012afd0;
    }
L_0012b0c4:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b0c8:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b0cc:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b0d0:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b0d4:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b0d8:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b0dc:;
    {
        goto L_0012afd0;
    }
L_0012b0e0:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b0e4:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b0e8:;
    {
        vfp_vmls(cpu, 2, 4, 9);
    }
L_0012b0ec:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b0f0:;
    {
        vfp_vmul(cpu, 4, 2, 8);
    }
L_0012b0f4:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b0f8:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b0fc:;
    {
        goto L_0012afd0;
    }
L_0012b100:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b104:;
    {
        vfp_vmls(cpu, 2, 9, 4);
    }
L_0012b108:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b10c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b110:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b114:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b118:;
    {
        goto L_0012afd0;
    }
L_0012b11c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b120:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b124:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b128:;
    {
        vfp_vmul(cpu, 4, 3, 8);
    }
L_0012b12c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b130:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b134:;
    {
        goto L_0012b070;
    }
L_0012b138:;
    {
        vfp_vsub(cpu, 3, 15, 4);
    }
L_0012b13c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b140:;
    {
        vfp_vmls(cpu, 2, 3, 9);
    }
L_0012b144:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b148:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b14c:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b150:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b154:;
    {
        goto L_0012af80;
    }
L_0012b158:;
    {
        vfp_vsub(cpu, 3, 15, 4);
    }
L_0012b15c:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b160:;
    {
        vfp_vmls(cpu, 2, 3, 9);
    }
L_0012b164:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b168:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b16c:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b170:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b174:;
    {
        goto L_0012b020;
    }
L_0012b178:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b17c:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b180:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b184:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b188:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b18c:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b190:;
    {
        goto L_0012b020;
    }
L_0012b194:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b198:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b19c:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b1a0:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b1a4:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b1a8:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b1ac:;
    {
        goto L_0012af80;
    }
L_0012b1b0:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b1b4:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b1b8:;
    {
        vfp_vmls(cpu, 2, 4, 9);
    }
L_0012b1bc:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b1c0:;
    {
        vfp_vmul(cpu, 4, 2, 8);
    }
L_0012b1c4:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b1c8:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b1cc:;
    {
        goto L_0012af80;
    }
L_0012b1d0:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b1d4:;
    {
        vfp_vmls(cpu, 2, 9, 4);
    }
L_0012b1d8:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b1dc:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b1e0:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b1e4:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b1e8:;
    {
        goto L_0012af80;
    }
L_0012b1ec:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b1f0:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b1f4:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b1f8:;
    {
        vfp_vmul(cpu, 4, 3, 8);
    }
L_0012b1fc:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b200:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b204:;
    {
        goto L_0012af80;
    }
L_0012b208:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b20c:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b210:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b214:;
    {
        vfp_vmul(cpu, 4, 3, 8);
    }
L_0012b218:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b21c:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b220:;
    {
        goto L_0012afd0;
    }
L_0012b224:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b228:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b22c:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b230:;
    {
        vfp_vmul(cpu, 4, 3, 8);
    }
L_0012b234:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,8);
    }
L_0012b238:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b23c:;
    {
        goto L_0012b020;
    }
L_0012b240:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b244:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b248:;
    {
        vfp_vmls(cpu, 2, 4, 9);
    }
L_0012b24c:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b250:;
    {
        vfp_vmul(cpu, 4, 2, 8);
    }
L_0012b254:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b258:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b25c:;
    {
        goto L_0012b020;
    }
L_0012b260:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b264:;
    {
        vfp_vmls(cpu, 2, 9, 4);
    }
L_0012b268:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b26c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b270:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b274:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b278:;
    {
        goto L_0012b020;
    }
L_0012b27c:;
    {
        vfp_vsub(cpu, 3, 15, 4);
    }
L_0012b280:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b284:;
    {
        vfp_vmls(cpu, 2, 3, 9);
    }
L_0012b288:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b28c:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b290:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b294:;
    {
        vfp_vmul(cpu, 3, 9, 8);
    }
L_0012b298:;
    {
        goto L_0012b070;
    }
L_0012b29c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,15);
    }
L_0012b2a0:;
    {
        vfp_vmls(cpu, 3, 9, 4);
    }
L_0012b2a4:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b2a8:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,8);
    }
L_0012b2ac:;
    {
        vfp_vmul(cpu, 3, 3, 8);
    }
L_0012b2b0:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b2b4:;
    {
        goto L_0012b070;
    }
L_0012b2b8:;
    {
        vfp_vsub(cpu, 4, 15, 4);
    }
L_0012b2bc:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b2c0:;
    {
        vfp_vmls(cpu, 2, 4, 9);
    }
L_0012b2c4:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b2c8:;
    {
        vfp_vmul(cpu, 4, 2, 8);
    }
L_0012b2cc:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b2d0:;
    {
        vfp_vmul(cpu, 2, 9, 8);
    }
L_0012b2d4:;
    {
        goto L_0012b070;
    }
L_0012b2d8:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,15);
    }
L_0012b2dc:;
    {
        vfp_vmls(cpu, 2, 9, 4);
    }
L_0012b2e0:;
    {
        vfp_vsub(cpu, 9, 15, 9);
    }
L_0012b2e4:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,8);
    }
L_0012b2e8:;
    {
        vfp_vmul(cpu, 2, 2, 8);
    }
L_0012b2ec:;
    {
        vfp_vmul(cpu, 4, 9, 8);
    }
L_0012b2f0:;
    {
        goto L_0012b070;
    }
}

/* _ZN9CAlterHSV6zOrderEiiiii @ 0012b2f8 (arm) */
void fn_0012b2f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b2f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0012b2fc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0012b300:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012b304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b338;
        }
    }
L_0012b308:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0012b30c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0012b310:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0012b314:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0012b318:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0012b31c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[12] = v;
    }
L_0012b320:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012b344;
        }
    }
L_0012b324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012b328:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_0012b32c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
        }
    }
L_0012b330:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0012b334:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012b308;
        }
    }
L_0012b338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b33c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0012b340:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012b344:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012b348:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_0012b34c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
        }
    }
L_0012b350:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
        }
    }
L_0012b354:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012b330;
        }
    }
L_0012b358:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0012b35c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0012b360:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0012b364:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0012b368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012b308;
        }
    }
L_0012b36c:;
    {
        goto L_0012b338;
    }
}

/* _ZN9CAlterHSV10fillZOrderEiiiii @ 0012b370 (arm) */
void fn_0012b370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b370:;
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
L_0012b374:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0012b378:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012b37c:;
    {
        cpu->r[11] = rd32(0x0012b384u + + 0xb4u);
    }
L_0012b380:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012b384:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012b388:;
    {
        cpu->r[11] = add_flags(cpu, 0x0012b390u, cpu->r[11], 0, 0);
    }
L_0012b38c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0012b390:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0012b394:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012b398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b420;
        }
    }
L_0012b39c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_0012b3a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_0012b3a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012b3a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0012b3ac:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_0012b3b0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_0012b3b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_0012b3b8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012b3bc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[10] = v;
    }
L_0012b3c0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0012b3c4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0012b3c8:;
    {
        cpu->r[14] = 0x0012b3ccu; fn_0012b370(cpu);
    }
L_0012b3cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012b3d0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0012b3d4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012b3d8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0012b3dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0012b3e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_0012b3e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012b3e8:;
    {
        cpu->r[14] = 0x0012b3ecu; fn_0012b370(cpu);
    }
L_0012b3ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0012b3f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012b3f4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0012b3f8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012b3fc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0012b400:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0012b404:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012b408:;
    {
        cpu->r[14] = 0x0012b40cu; fn_0012b370(cpu);
    }
L_0012b40c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0012b410:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0012b414:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_0012b418:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_0012b41c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012b39c;
        }
    }
L_0012b420:;
    {
        cpu->r[3] = rd32(0x0012b428u + + 0x14u);
    }
L_0012b424:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[8], 2, 8u, &shc), 0, 0);
    }
L_0012b428:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0012b42c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[7]);
    }
L_0012b430:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012b434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b438u)) return;
    }
}

/* _ZN9CAlterHSVD1Ev @ 0012b440 (arm) */
void fn_0012b440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b440:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012b444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b448:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012b44c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012b450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b460;
        }
    }
L_0012b454:;
    {
        cpu->r[14] = 0x0012b458u; fn_0018ba60(cpu);
    }
L_0012b458:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b45c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0012b460:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012b464:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012b468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b478;
        }
    }
L_0012b46c:;
    {
        cpu->r[14] = 0x0012b470u; fn_0018ba60(cpu);
    }
L_0012b470:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b474:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0012b478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b47c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b480u)) return;
    }
}

/* _ZN9CAlterHSVD2Ev @ 0012b480 (arm) */
void fn_0012b480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b480:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012b484:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b488:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012b48c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012b490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b4a0;
        }
    }
L_0012b494:;
    {
        cpu->r[14] = 0x0012b498u; fn_0018ba60(cpu);
    }
L_0012b498:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b49c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0012b4a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012b4a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012b4a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b4b8;
        }
    }
L_0012b4ac:;
    {
        cpu->r[14] = 0x0012b4b0u; fn_0018ba60(cpu);
    }
L_0012b4b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b4b4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0012b4b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b4bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b4c0u)) return;
    }
}

/* _ZN9CAlterHSVC1EiiPvb @ 0012b4c0 (arm) */
void fn_0012b4c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b4c0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[12] = v;
    }
L_0012b4c4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0012b4c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012b4cc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0012b4d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b4d4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0012b4d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012b4dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0012b4e0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_0012b4e4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0012b4e8:;
    {
        cpu->r[14] = 0x0012b4ecu; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b4ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b4f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0012b4f4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0012b4f8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b4fc:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0012b500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b528;
        }
    }
L_0012b504:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012b508:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012b50c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012b510:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012b514:;
    {
        cpu->r[14] = 0x0012b518u; fn_00129e30(cpu);
    }
L_0012b518:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0012b51c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012b520:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012b524:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012b508;
        }
    }
L_0012b528:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b52c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b530:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0012b534:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b538u)) return;
    }
}

/* _ZN9CAlterHSVC2EiiPvb @ 0012b538 (arm) */
void fn_0012b538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b538:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[12] = v;
    }
L_0012b53c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0012b540:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012b544:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0012b548:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b54c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0012b550:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012b554:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0012b558:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_0012b55c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0012b560:;
    {
        cpu->r[14] = 0x0012b564u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b564:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b568:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0012b56c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0012b570:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b574:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0012b578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012b5a0;
        }
    }
L_0012b57c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012b580:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012b584:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012b588:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012b58c:;
    {
        cpu->r[14] = 0x0012b590u; fn_00129e30(cpu);
    }
L_0012b590:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0012b594:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012b598:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012b59c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012b580;
        }
    }
L_0012b5a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b5a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b5a8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0012b5ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b5b0u)) return;
    }
}

/* _ZN9CAlterHSVC1EiiPv @ 0012b5b0 (arm) */
void fn_0012b5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b5b0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[12] = v;
    }
L_0012b5b4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0012b5b8:;
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
L_0012b5bc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0012b5c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b5c4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0012b5c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0012b5cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0012b5d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0012b5d4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_0012b5d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0012b5dc:;
    {
        cpu->r[14] = 0x0012b5e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b5e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b5e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012b5e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012b5ec:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0012b5f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012b5f4:;
    {
        cpu->r[14] = 0x0012b5f8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b5f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b5fc:;
    {
        cpu->r[9] = rd32(cpu->r[4]);
    }
L_0012b600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012b604:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0012b608:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0012b60c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012b6e8;
        }
    }
L_0012b610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012b614:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0012b618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012b61c:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0012b620:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012b624:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0012b628:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0012b62c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_0012b630:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0012b634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b638:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0012b63c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012b640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012b644:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x4u);
    }
L_0012b648:;
    {
        cpu->r[14] = 0x0012b64cu; fn_00129d6c(cpu);
    }
L_0012b64c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_0012b650:;
    {
        wr8(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0012b654:;
    {
        cpu->r[3] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012b658:;
    {
        wr8(cpu->r[13] + + 0xbu, cpu->r[3]);
    }
L_0012b65c:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012b660:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012b664:;
    {
        wr8(cpu->r[13] + + 0x9u, cpu->r[3]);
    }
L_0012b668:;
    {
        wr8(cpu->r[13] + + 0xau, cpu->r[0]);
    }
L_0012b66c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012b670:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012b674:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0012b678:;
    {
        cpu->r[14] = 0x0012b67cu; fn_00129e30(cpu);
    }
L_0012b67c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x17u);
    }
L_0012b680:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012b684:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012b688:;
    {
        wr8(cpu->r[2] + cpu->r[5], cpu->r[3]);
    }
L_0012b68c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b690:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012b694:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x6u);
    }
L_0012b698:;
    {
        cpu->r[14] = 0x0012b69cu; fn_00129d6c(cpu);
    }
L_0012b69c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0012b6a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012b6a4:;
    {
        wr8(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0012b6a8:;
    {
        cpu->r[3] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012b6ac:;
    {
        wr8(cpu->r[13] + + 0xbu, cpu->r[3]);
    }
L_0012b6b0:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012b6b4:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012b6b8:;
    {
        wr8(cpu->r[13] + + 0x9u, cpu->r[3]);
    }
L_0012b6bc:;
    {
        wr8(cpu->r[13] + + 0xau, cpu->r[0]);
    }
L_0012b6c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012b6c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012b6c8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0012b6cc:;
    {
        cpu->r[14] = 0x0012b6d0u; fn_00129e30(cpu);
    }
L_0012b6d0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x17u);
    }
L_0012b6d4:;
    {
        wr8(cpu->r[11] + cpu->r[5], cpu->r[3]);
    }
L_0012b6d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012b6dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b6e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0012b6e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012b634;
        }
    }
L_0012b6e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b6ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b6f0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0012b6f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0012b6f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b6fcu)) return;
    }
}

/* _ZN9CAlterHSVC2EiiPv @ 0012b6fc (arm) */
void fn_0012b6fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b6fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[12] = v;
    }
L_0012b700:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0012b704:;
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
L_0012b708:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0012b70c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012b710:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0012b714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0012b718:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0012b71c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0012b720:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_0012b724:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0012b728:;
    {
        cpu->r[14] = 0x0012b72cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b72c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b730:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012b734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012b738:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0012b73c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012b740:;
    {
        cpu->r[14] = 0x0012b744u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012b744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b748:;
    {
        cpu->r[9] = rd32(cpu->r[4]);
    }
L_0012b74c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012b750:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0012b754:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0012b758:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012b834;
        }
    }
L_0012b75c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012b760:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0012b764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012b768:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0012b76c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012b770:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0012b774:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0012b778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_0012b77c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0012b780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b784:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0012b788:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012b78c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012b790:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x4u);
    }
L_0012b794:;
    {
        cpu->r[14] = 0x0012b798u; fn_00129d6c(cpu);
    }
L_0012b798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_0012b79c:;
    {
        wr8(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0012b7a0:;
    {
        cpu->r[3] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012b7a4:;
    {
        wr8(cpu->r[13] + + 0xbu, cpu->r[3]);
    }
L_0012b7a8:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012b7ac:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012b7b0:;
    {
        wr8(cpu->r[13] + + 0x9u, cpu->r[3]);
    }
L_0012b7b4:;
    {
        wr8(cpu->r[13] + + 0xau, cpu->r[0]);
    }
L_0012b7b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012b7bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012b7c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0012b7c4:;
    {
        cpu->r[14] = 0x0012b7c8u; fn_00129e30(cpu);
    }
L_0012b7c8:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x17u);
    }
L_0012b7cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012b7d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012b7d4:;
    {
        wr8(cpu->r[2] + cpu->r[5], cpu->r[3]);
    }
L_0012b7d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012b7dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012b7e0:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x6u);
    }
L_0012b7e4:;
    {
        cpu->r[14] = 0x0012b7e8u; fn_00129d6c(cpu);
    }
L_0012b7e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0012b7ec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012b7f0:;
    {
        wr8(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0012b7f4:;
    {
        cpu->r[3] = (cpu->r[0] >> 24) & 0xffu;
    }
L_0012b7f8:;
    {
        wr8(cpu->r[13] + + 0xbu, cpu->r[3]);
    }
L_0012b7fc:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0012b800:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_0012b804:;
    {
        wr8(cpu->r[13] + + 0x9u, cpu->r[3]);
    }
L_0012b808:;
    {
        wr8(cpu->r[13] + + 0xau, cpu->r[0]);
    }
L_0012b80c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012b810:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012b814:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0012b818:;
    {
        cpu->r[14] = 0x0012b81cu; fn_00129e30(cpu);
    }
L_0012b81c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x17u);
    }
L_0012b820:;
    {
        wr8(cpu->r[11] + cpu->r[5], cpu->r[3]);
    }
L_0012b824:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012b828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0012b82c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0012b830:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012b780;
        }
    }
L_0012b834:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012b838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012b83c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0012b840:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0012b844:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b848u)) return;
    }
}

/* _ZN9CAlterHSV9HSVtoRGBAEPNS_4THsvEPNS_5TRgbaE @ 0012b848 (arm) */
void fn_0012b848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b848:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012b84c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012b854u + + 0x12cu);
    }
L_0012b850:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012b854:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0012b858:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0012b85c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012b860:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0012b864:;
    {
        vfp_sync_flags(cpu);
    }
L_0012b868:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012b8e0;
        }
    }
L_0012b86c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_0012b870:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012b878u + + 0x10cu);
    }
L_0012b874:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_0012b878:;
    {
        *vfp_d(cpu,4) = (double)*vfp_s(cpu,17);
    }
L_0012b87c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,4); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_0012b880:;
    {
        cpu->r[14] = 0x0012b884u; imp_floor(cpu); /* floor */
    }
L_0012b884:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012b88cu + + 0xfcu);
    }
L_0012b888:;
    {
        vfp_vsub(cpu, 13, 14, 16);
    }
L_0012b88c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_0012b890:;
    {
        vfp_vmul(cpu, 10, 15, 13);
    }
L_0012b894:;
    {
        *(uint64_t*)vfp_d(cpu,4) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0012b898:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,4);
    }
L_0012b89c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0012b8a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012b8a4:;
    {
        vfp_vsub(cpu, 17, 17, 12);
    }
L_0012b8a8:;
    {
        vfp_vsub(cpu, 12, 14, 17);
    }
L_0012b8ac:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,14);
    }
L_0012b8b0:;
    {
        vfp_vmls(cpu, 14, 16, 17);
    }
L_0012b8b4:;
    {
        vfp_vmls(cpu, 9, 16, 12);
    }
L_0012b8b8:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0012b8bc:;
    {
        vfp_vmul(cpu, 12, 15, 9);
    }
L_0012b8c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012b8c4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0012b944;
        case 1: goto L_0012b950;
        case 2: goto L_0012b960;
        case 3: goto L_0012b970;
        case 4: goto L_0012b928;
        default: guest_unimplemented(cpu, 0x0012b8c4u); return; }
        }
    }
L_0012b8c8:;
    {
        goto L_0012b938;
    }
L_0012b8e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0012b8e4:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,13);
    }
L_0012b8e8:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
    }
L_0012b8ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012b8f4u + + 0x98u);
    }
L_0012b8f0:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_0012b8f4:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0012b8f8:;
    {
        vfp_vmul(cpu, 15, 11, 14);
    }
L_0012b8fc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = (uint32_t)*vfp_s(cpu,12);
    }
L_0012b900:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0012b904:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0012b908:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_0012b90c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0012b910:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012b914:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[2]);
    }
L_0012b918:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012b91c:;
    {
        wr8(cpu->r[4] + + 0x2u, cpu->r[3]);
    }
L_0012b920:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012b924:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012b928u)) return;
    }
L_0012b928:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
    }
L_0012b92c:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,10);
    }
L_0012b930:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,12);
    }
L_0012b934:;
    {
        goto L_0012b8ec;
    }
L_0012b938:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
    }
L_0012b93c:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,10);
    }
L_0012b940:;
    {
        goto L_0012b8ec;
    }
L_0012b944:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,10);
    }
L_0012b948:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,12);
    }
L_0012b94c:;
    {
        goto L_0012b8ec;
    }
L_0012b950:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_0012b954:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,10);
    }
L_0012b958:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_0012b95c:;
    {
        goto L_0012b8ec;
    }
L_0012b960:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_0012b964:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,12);
    }
L_0012b968:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,10);
    }
L_0012b96c:;
    {
        goto L_0012b8ec;
    }
L_0012b970:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
    }
L_0012b974:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,14);
    }
L_0012b978:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,10);
    }
L_0012b97c:;
    {
        goto L_0012b8ec;
    }
}

/* _ZN9CAlterHSV6Alter3EPNS_4THsvEPNS_5TRgbaEffff @ 0012b990 (arm) */
void fn_0012b990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012b990:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0012b994:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0012b998:;
    {
        cpu->r[14] = cpu->r[1];
    }
L_0012b99c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012b9a0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0012b9a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0012b9a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0012b9ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0012b9b0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0012b9b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0012b9b8:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0012b9bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0012b9c0:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_0012b9c4:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_0012b9c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012b9cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012b9d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012b9d4:;
    {
        vfp_sync_flags(cpu);
    }
L_0012b9d8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012ba34;
        }
    }
L_0012b9dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012b9e4u + + 0x8cu);
    }
L_0012b9e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012b9e4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_0012b9e8:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_0012b9ec:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0012b9f4u + + 0x6cu);
    }
L_0012b9f0:;
    {
        *vfp_d(cpu, 7) = -(*vfp_d(cpu, 7) - *vfp_d(cpu, 6) * *vfp_d(cpu, 7));
    }
L_0012b9f4:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0012b9fcu + + 0x6cu);
    }
L_0012b9f8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0012b9fc:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_0012ba00:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0012ba04:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0012ba08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012ba0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012ba10:;
    {
        vfp_sync_flags(cpu);
    }
L_0012ba14:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012ba48;
        }
    }
L_0012ba18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ba20u + + 0x50u);
    }
L_0012ba1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012ba20:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0012ba24:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_0012ba28:;
    {
        cpu->r[14] = 0x0012ba2cu; fn_0012b848(cpu);
    }
L_0012ba2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012ba30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ba34u)) return;
    }
L_0012ba34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012ba3cu + + 0x38u);
    }
L_0012ba38:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012ba3c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012ba40:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0012ba44:;
    {
        goto L_0012b9e4;
    }
L_0012ba48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012ba50u + + 0x24u);
    }
L_0012ba4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012ba50:;
    {
        vfp_sync_flags(cpu);
    }
L_0012ba54:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0012ba58:;
    {
        goto L_0012ba20;
    }
}

/* _ZN9CAlterHSV6Alter2EPNS_4THsvEhPtbffff @ 0012ba78 (arm) */
void fn_0012ba78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ba78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012ba7c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012ba80:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012ba84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012ba88:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0012ba8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_0012ba90:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_0012ba94:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_0012ba98:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012ba9c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0012baa0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0012baa4:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0012baa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0012baac:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0012bab0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_0012bab4:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_0012bab8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012babc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012bac0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012bac4:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bac8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012bb40;
        }
    }
L_0012bacc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bad4u + + 0xa4u);
    }
L_0012bad0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bad4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_0012bad8:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_0012badc:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0012bae4u + + 0x84u);
    }
L_0012bae0:;
    {
        *vfp_d(cpu, 7) = -(*vfp_d(cpu, 7) - *vfp_d(cpu, 6) * *vfp_d(cpu, 7));
    }
L_0012bae4:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0012baecu + + 0x84u);
    }
L_0012bae8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0012baec:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_0012baf0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0012baf4:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0012baf8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012bafc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bb00:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bb04:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012bb54;
        }
    }
L_0012bb08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bb10u + + 0x68u);
    }
L_0012bb0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bb10:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0012bb14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012bb18:;
    {
        cpu->r[14] = 0x0012bb1cu; fn_0012b848(cpu);
    }
L_0012bb1c:;
    {
        cpu->r[2] = rd16(cpu->r[4]);
    }
L_0012bb20:;
    {
        wr8(cpu->r[13] + + 0xfu, cpu->r[5]);
    }
L_0012bb24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012bb28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012bb2c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 15u, &shc); cpu->r[2] = v;
    }
L_0012bb30:;
    {
        cpu->r[14] = 0x0012bb34u; fn_00129cf8(cpu);
    }
L_0012bb34:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_0012bb38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012bb3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012bb40u)) return;
    }
L_0012bb40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012bb48u + + 0x34u);
    }
L_0012bb44:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012bb48:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bb4c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0012bb50:;
    {
        goto L_0012bad4;
    }
L_0012bb54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012bb5cu + + 0x20u);
    }
L_0012bb58:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012bb5c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bb60:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0012bb64:;
    {
        goto L_0012bb10;
    }
}

/* _ZN9CAlterHSV5AlterEPNS_4THsvEhPtbffff @ 0012bb80 (arm) */
void fn_0012bb80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bb80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012bb84:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0012bb8cu + + 0x134u);
    }
L_0012bb88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012bb8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_0012bb90:;
    {
        vfp_vsub(cpu, 12, 15, 13);
    }
L_0012bb94:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_0012bb98:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012bb9c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012bba0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012bba4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_0012bba8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bbac:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012bc84;
        }
    }
L_0012bbb0:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_0012bbb4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_0012bbb8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bbbc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012bc84;
        }
    }
L_0012bbc0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0012bbc4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012bbccu + + 0xf8u);
    }
L_0012bbc8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_0012bbcc:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bbd0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012bc84;
        }
    }
L_0012bbd4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0012bbd8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_0012bbdc:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0012bbe0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0012bbe4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0012bbe8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_0012bbec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0012bbf0:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_0012bbf4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_0012bbf8:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0012bbfc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012bc00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_0012bc04:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bc08:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bc0c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012bc8c;
        }
    }
L_0012bc10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bc18u + + 0xb0u);
    }
L_0012bc14:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0012bc18:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bc1c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0012bc20:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_0012bc24:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_0012bc28:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0012bc30u + + 0x80u);
    }
L_0012bc2c:;
    {
        *vfp_d(cpu, 7) = -(*vfp_d(cpu, 7) - *vfp_d(cpu, 6) * *vfp_d(cpu, 7));
    }
L_0012bc30:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0012bc38u + + 0x80u);
    }
L_0012bc34:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0012bc38:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_0012bc3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0012bc40:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0012bc44:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012bc48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bc4c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bc50:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0012bc98;
        }
    }
L_0012bc54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bc5cu + + 0x70u);
    }
L_0012bc58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bc5c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0012bc60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012bc64:;
    {
        cpu->r[14] = 0x0012bc68u; fn_0012b848(cpu);
    }
L_0012bc68:;
    {
        cpu->r[2] = rd16(cpu->r[4]);
    }
L_0012bc6c:;
    {
        wr8(cpu->r[13] + + 0xfu, cpu->r[5]);
    }
L_0012bc70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012bc74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012bc78:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 15u, &shc); cpu->r[2] = v;
    }
L_0012bc7c:;
    {
        cpu->r[14] = 0x0012bc80u; fn_00129cf8(cpu);
    }
L_0012bc80:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_0012bc84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012bc88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012bc8cu)) return;
    }
L_0012bc8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bc94u + + 0x38u);
    }
L_0012bc90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012bc94:;
    {
        goto L_0012bc20;
    }
L_0012bc98:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012bca0u + + 0x28u);
    }
L_0012bc9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012bca0:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bca4:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0012bca8:;
    {
        goto L_0012bc5c;
    }
}

/* _ZN9CAlterHSV8AlterHSVEffff @ 0012bcd0 (arm) */
void fn_0012bcd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bcd0:;
    {
        cpu->r[12] = rd32(0x0012bcd8u + + 0x22cu);
    }
L_0012bcd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bcdcu + + 0x220u);
    }
L_0012bcd8:;
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
L_0012bcdc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012bce0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0012bce4:;
    {
        cpu->r[3] = rd32(0x0012bcecu + + 0x21cu);
    }
L_0012bce8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012bcf0u, cpu->r[12], 0, 0);
    }
L_0012bcec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0012bcf0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0012bcf4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0012bcf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012bcfc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0012bd00:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0012bd04:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0012bd08:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bd0c:;
    {
        wr32(cpu->r[3], cpu->r[8]);
    }
L_0012bd10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000002u;
        }
    }
L_0012bd14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012bd38;
        }
    }
L_0012bd18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012bd20u + + 0x1e0u);
    }
L_0012bd1c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0012bd20:;
    {
        vfp_sync_flags(cpu);
    }
L_0012bd24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012bd34;
        }
    }
L_0012bd28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0012bd2c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012bd30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012bd34u)) return;
    }
L_0012bd34:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0012bd38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0012bd3c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012bd40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012bd44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012bd48:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0012bd4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0012bd50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012bd54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012bd58:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0012bd5c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0012bd60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012bd64:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0012bd68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012bd6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012bd70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0012bd74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012be4c;
        }
    }
L_0012bd78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012bd7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012bd28;
        }
    }
L_0012bd80:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0012bd84:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0012bd88:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0012bd8c:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0012bd90:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0012bd94:;
    {
        goto L_0012bdac;
    }
L_0012bd98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012bd9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012bda0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012bda4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012bd28;
        }
    }
L_0012bda8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012bdac:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[4]);
    }
L_0012bdb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0012bdb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012bd98;
        }
    }
L_0012bdb8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012bdbc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0012bdc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012bdc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0012bdc8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_0012bdcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012bdd0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[2] + + 0x4u);
        cpu->r[2] = wb_tmp;
    }
L_0012bdd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012bdd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0012bddc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012bde0:;
    {
        uint32_t v = cpu->r[12] & cpu->r[3]; cpu->r[12] = v;
    }
L_0012bde4:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0012bde8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0012bdec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0012bdf0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0012bdf4:;
    {
        cpu->r[14] = 0x0012bdf8u; fn_0012ba78(cpu);
    }
L_0012bdf8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012bdfc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012be00:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012be04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0012be08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_0012be0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0012be10:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_0012be14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012be18:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0012be1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0012be20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012be24:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0012be28:;
    {
        cpu->r[14] = 0x0012be2cu; fn_0012ba78(cpu);
    }
L_0012be2c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012be30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012be34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0012be38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0012be3c:;
    {
        cpu->r[2] = rd16(cpu->r[8] + + 0x4u);
    }
L_0012be40:;
    {
        uint32_t v = cpu->r[12] | cpu->r[2]; cpu->r[12] = v;
    }
L_0012be44:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[12]);
    }
L_0012be48:;
    {
        goto L_0012bd98;
    }
L_0012be4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012be50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012bd28;
        }
    }
L_0012be54:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0012be58:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012be5c:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0012be60:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0012be64:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0012be68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012be6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0012be70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012be74:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[2] + + 0x4u);
        cpu->r[2] = wb_tmp;
    }
L_0012be78:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[4]);
    }
L_0012be7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0012be80:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012be84:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0012be88:;
    {
        uint32_t v = cpu->r[12] & cpu->r[3]; cpu->r[9] = v;
    }
L_0012be8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0012be90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_0012be94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012be98:;
    {
        cpu->r[14] = 0x0012be9cu; fn_0012bb80(cpu);
    }
L_0012be9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012bea0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012bea4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012bea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0012beac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_0012beb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0012beb4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_0012beb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012bebc:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0012bec0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0012bec4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012bec8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_0012becc:;
    {
        cpu->r[14] = 0x0012bed0u; fn_0012bb80(cpu);
    }
L_0012bed0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0012bed4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012bed8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0012bedc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0012bee0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0012bee4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012bee8:;
    {
        cpu->r[12] = rd16(cpu->r[7] + + 0x4u);
    }
L_0012beec:;
    {
        uint32_t v = cpu->r[9] | cpu->r[12]; cpu->r[12] = v;
    }
L_0012bef0:;
    {
        wr16(cpu->r[7] + + 0x4u, cpu->r[12]);
    }
L_0012bef4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012be64;
        }
    }
L_0012bef8:;
    {
        goto L_0012bd28;
    }
}

/* _ZN10CBigBuffer4InitEv @ 0012bf0c (arm) */
void fn_0012bf0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bf0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012bf10:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_0012bf14:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0012bf18:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0012bf1c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0012bf20:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0012bf24:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0012bf28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CBigBufferC1Ev @ 0012bf2c (arm) */
void fn_0012bf2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bf2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012bf30:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_0012bf34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012bf38:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0012bf3c:;
    {
        cpu->r[3] = 0x00001406u;
    }
L_0012bf40:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0012bf44:;
    {
        cpu->r[14] = 0x0012bf48u; fn_0012bf0c(cpu);
    }
L_0012bf48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012bf4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012bf50u)) return;
    }
}

/* _ZN10CBigBufferC2Ev @ 0012bf50 (arm) */
void fn_0012bf50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bf50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012bf54:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_0012bf58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012bf5c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0012bf60:;
    {
        cpu->r[3] = 0x00001406u;
    }
L_0012bf64:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0012bf68:;
    {
        cpu->r[14] = 0x0012bf6cu; fn_0012bf0c(cpu);
    }
L_0012bf6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012bf70:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012bf74u)) return;
    }
}

/* _ZN10CBigBuffer10BindBufferEv @ 0012bf74 (arm) */
void fn_0012bf74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bf74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CBigBuffer9SendToGPUEv @ 0012bf78 (arm) */
void fn_0012bf78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012bf78:;
    {
        cpu->r[3] = rd32(0x0012bf80u + + 0xa0u);
    }
L_0012bf7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012bf80:;
    {
        cpu->r[2] = rd32(0x0012bf88u + + 0x9cu);
    }
L_0012bf84:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012bf8cu, cpu->r[3], 0, 0);
    }
L_0012bf88:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012bf8c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012bf90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012bf94:;
    {
        cpu->r[6] = 0x000084c0u;
    }
L_0012bf98:;
    {
        cpu->r[5] = 0x00000010u;
    }
L_0012bf9c:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0012bfa0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0012bfa4:;
    {
        cpu->r[14] = 0x0012bfa8u; fn_0012e1c8(cpu);
    }
L_0012bfa8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0012bfac:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0012bfb0:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0012bfb4:;
    {
        cpu->r[14] = 0x0012bfb8u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0012bfb8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0012bfbc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012bfc0:;
    {
        cpu->r[14] = 0x0012bfc4u; fn_0012e19c(cpu);
    }
L_0012bfc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012bfc8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012bfcc:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_0012bfd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0012bfd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012bfd8:;
    {
        cpu->r[14] = 0x0012bfdcu; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_0012bfdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012bfe0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0012bfe4:;
    {
        cpu->r[14] = 0x0012bfe8u; fn_0012e124(cpu);
    }
L_0012bfe8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012bfec:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0012bff0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_0012bff4:;
    {
        cpu->r[14] = 0x0012bff8u; fn_0012e150(cpu);
    }
L_0012bff8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012bffc:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0012c000:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0012c004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0012c008:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012c00c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0012c010:;
    {
        cpu->r[14] = 0x0012c014u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0012c014:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_0012c018:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012bfdc;
        }
    }
L_0012c01c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c020u)) return;
    }
}

/* _ZN10CBigBuffer9InitAllocEiibb @ 0012c028 (arm) */
void fn_0012c028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c028:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0012c02c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0012c030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012c034:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012c038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c058;
        }
    }
L_0012c040:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012c044:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012c048:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012c04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c08c;
        }
    }
L_0012c050:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012c054:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c058u)) return;
    }
L_0012c058:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012c05c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0012c060:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0012c064:;
    {
        cpu->r[14] = 0x0012c068u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012c068:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012c06c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012c070:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c074:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0012c078:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
        }
    }
L_0012c07c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
        }
    }
L_0012c080:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c040;
        }
    }
L_0012c084:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0012c088:;
    {
        goto L_0012c050;
    }
L_0012c08c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0012c090:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0012c094:;
    {
        cpu->r[14] = 0x0012c098u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012c098:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0012c09c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c0a0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0012c0a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
        }
    }
L_0012c0a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_0012c0ac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
        }
    }
L_0012c0b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c050;
        }
    }
L_0012c0b4:;
    {
        goto L_0012c084;
    }
}

/* _ZN10CBigBuffer13AllocIdxChunkEiRi @ 0012c0b8 (arm) */
void fn_0012c0b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c0b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012c0bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c0c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0012c0c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012c0c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0012c0cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012c0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c0d4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0012c0d8:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_0012c0dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
        }
    }
L_0012c0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c16c;
        }
    }
L_0012c0e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0012c0e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0012c0ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012c118;
        }
    }
L_0012c0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c134;
        }
    }
L_0012c0f8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0012c0fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012c100:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0012c104:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_0012c108:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012c10c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0012c110:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012c114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c118u)) return;
    }
L_0012c118:;
    {
        cpu->r[14] = 0x0012c11cu; imp_realloc(cpu); /* realloc */
    }
L_0012c11c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c120:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0012c124:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5]);
        }
    }
L_0012c128:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_0012c12c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_0012c130:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c0f8;
        }
    }
L_0012c134:;
    {
        cpu->r[1] = rd32(0x0012c13cu + + 0x54u);
    }
L_0012c138:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012c13c:;
    {
        cpu->r[2] = rd32(0x0012c144u + + 0x50u);
    }
L_0012c140:;
    {
        cpu->r[14] = 0x00000072u;
    }
L_0012c144:;
    {
        cpu->r[3] = rd32(0x0012c14cu + + 0x4cu);
    }
L_0012c148:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012c150u, cpu->r[1], 0, 0);
    }
L_0012c14c:;
    {
        cpu->r[12] = rd32(0x0012c154u + + 0x48u);
    }
L_0012c150:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012c158u, cpu->r[2], 0, 0);
    }
L_0012c154:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012c15cu, cpu->r[3], 0, 0);
    }
L_0012c158:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0012c15c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012c164u, cpu->r[12], 0, 0);
    }
L_0012c160:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012c164:;
    {
        cpu->r[14] = 0x0012c168u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012c168:;
    {
        goto L_0012c0f8;
    }
L_0012c16c:;
    {
        cpu->r[0] = 0x00000d40u;
    }
L_0012c170:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0003u << 16);
    }
L_0012c174:;
    {
        cpu->r[14] = 0x0012c178u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012c178:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_0012c17c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0012c180:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0012c184:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0012c188:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0012c18c:;
    {
        goto L_0012c0e4;
    }
}

/* _ZN10CBigBuffer10AllocChunkEiRi @ 0012c1a0 (arm) */
void fn_0012c1a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c1a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012c1a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c1a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0012c1ac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012c1b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0012c1b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012c1b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c1bc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0012c1c0:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_0012c1c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_0012c1c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c254;
        }
    }
L_0012c1cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0012c1d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0012c1d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012c200;
        }
    }
L_0012c1d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c21c;
        }
    }
L_0012c1e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0012c1e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0012c1e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0012c1ec:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_0012c1f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0012c1f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0012c1f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012c1fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c200u)) return;
    }
L_0012c200:;
    {
        cpu->r[14] = 0x0012c204u; imp_realloc(cpu); /* realloc */
    }
L_0012c204:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c208:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0012c20c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5]);
        }
    }
L_0012c210:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_0012c214:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
        }
    }
L_0012c218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c1e0;
        }
    }
L_0012c21c:;
    {
        cpu->r[1] = rd32(0x0012c224u + + 0x4cu);
    }
L_0012c220:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012c224:;
    {
        cpu->r[12] = rd32(0x0012c22cu + + 0x48u);
    }
L_0012c228:;
    {
        cpu->r[14] = 0x0000005cu;
    }
L_0012c22c:;
    {
        cpu->r[2] = rd32(0x0012c234u + + 0x44u);
    }
L_0012c230:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012c238u, cpu->r[1], 0, 0);
    }
L_0012c234:;
    {
        cpu->r[3] = rd32(0x0012c23cu + + 0x40u);
    }
L_0012c238:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012c240u, cpu->r[12], 0, 0);
    }
L_0012c23c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012c244u, cpu->r[2], 0, 0);
    }
L_0012c240:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_0012c244:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012c24cu, cpu->r[3], 0, 0);
    }
L_0012c248:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012c24c:;
    {
        cpu->r[14] = 0x0012c250u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012c250:;
    {
        goto L_0012c1e0;
    }
L_0012c254:;
    {
        cpu->r[0] = 0x001f4000u;
    }
L_0012c258:;
    {
        cpu->r[14] = 0x0012c25cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0012c25c:;
    {
        cpu->r[3] = 0x001f4000u;
    }
L_0012c260:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0012c264:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0012c268:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0012c26c:;
    {
        goto L_0012c1cc;
    }
}

/* _ZN10CBigBuffer5CleanEv @ 0012c280 (arm) */
void fn_0012c280(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c280:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012c284:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c288:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0012c28c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c2a0;
        }
    }
L_0012c294:;
    {
        cpu->r[14] = 0x0012c298u; fn_0018ba60(cpu);
    }
L_0012c298:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012c29c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0012c2a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012c2a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c2a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c2b8;
        }
    }
L_0012c2ac:;
    {
        cpu->r[14] = 0x0012c2b0u; fn_0018ba60(cpu);
    }
L_0012c2b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012c2b4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0012c2b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012c2bc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0012c2c0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0012c2c4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_0012c2c8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0012c2cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c2d0u)) return;
    }
}

/* _ZN10CBigBufferD1Ev @ 0012c2d0 (arm) */
void fn_0012c2d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c2d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012c2d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c2d8:;
    {
        cpu->r[14] = 0x0012c2dcu; fn_0012c280(cpu);
    }
L_0012c2dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012c2e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c2e4u)) return;
    }
}

/* _ZN10CBigBufferD2Ev @ 0012c2e4 (arm) */
void fn_0012c2e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c2e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012c2e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012c2ec:;
    {
        cpu->r[14] = 0x0012c2f0u; fn_0012c280(cpu);
    }
L_0012c2f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012c2f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c2f8u)) return;
    }
}

/* _ZN13gxRenderGroup22ConvertTexCoordToshortEv @ 0012c2f8 (arm) */
void fn_0012c2f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c2f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13gxRenderGroup9IsSimilarEP12gxRenderItemS1_ @ 0012c2fc (arm) */
void fn_0012c2fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c2fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c300:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0012c304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c350;
        }
    }
L_0012c308:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0012c30c:;
    {
        { uint32_t v = cpu->r[3] & 0x40000000u; set_nz(cpu, v); }
    }
L_0012c310:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c350;
        }
    }
L_0012c314:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_0012c318:;
    {
        { uint32_t v = cpu->r[0] & 0x40000000u; set_nz(cpu, v); }
    }
L_0012c31c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c350;
        }
    }
L_0012c320:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_0012c324:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x186u);
    }
L_0012c328:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 1);
    }
L_0012c32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c350;
        }
    }
L_0012c330:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_0012c334:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xcu);
    }
L_0012c338:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c33c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c350;
        }
    }
L_0012c340:;
    {
        cpu->r[4] = rd8(cpu->r[2] + + 0x30u);
    }
L_0012c344:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x30u);
    }
L_0012c348:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_0012c34c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c35c;
        }
    }
L_0012c350:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012c354:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0012c358:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012c35c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0012c360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c350;
        }
    }
L_0012c364:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x4u);
    }
L_0012c368:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x4u);
    }
L_0012c36c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0012c370:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012c374:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012c378:;
    {
        goto L_0012c354;
    }
}

/* _ZN13gxRenderGroup7CompareEP12gxRenderItemS1_ @ 0012c37c (arm) */
void fn_0012c37c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c37c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_0012c380:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0012c384:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x4u);
    }
L_0012c388:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x4u);
    }
L_0012c38c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0012c390:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012c394:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012c398:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012c39c:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012c3a0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x30u);
    }
L_0012c3a4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x30u);
    }
L_0012c3a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0012c3ac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012c3b0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012c3b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13gxRenderGroup9SendToGPUEv @ 0012c3b8 (arm) */
void fn_0012c3b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c3b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b4u, 0, 0);
    }
L_0012c3bc:;
    {
        return fn_0012bf78(cpu);
    }
}

/* _ZN13gxRenderGroup16SendBuffersToGPUEii @ 0012c3c0 (arm) */
void fn_0012c3c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c3c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012c3c4:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[1]; cpu->r[5] = v;
    }
L_0012c3c8:;
    {
        cpu->r[4] = rd32(0x0012c3d0u + + 0xf8u);
    }
L_0012c3cc:;
    {
        { uint32_t v = cpu->r[5] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012c3d0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0012c3d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0012c3dcu, cpu->r[4], 0, 0);
    }
L_0012c3d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c484;
        }
    }
L_0012c3dc:;
    {
        { uint32_t v = cpu->r[5] & 0x00000002u; set_nz(cpu, v); }
    }
L_0012c3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c3fc;
        }
    }
L_0012c3e4:;
    {
        cpu->r[3] = rd32(0x0012c3ecu + + 0xe0u);
    }
L_0012c3e8:;
    {
        uint32_t v = cpu->r[6] & 0x00000002u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0012c3ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0012c3f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c3f4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012c3f8:;
    {
        cpu->r[14] = 0x0012c3fcu; fn_0012e170(cpu);
    }
L_0012c3fc:;
    {
        { uint32_t v = cpu->r[5] & 0x00000004u; set_nz(cpu, v); }
    }
L_0012c400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c41c;
        }
    }
L_0012c404:;
    {
        cpu->r[3] = rd32(0x0012c40cu + + 0xc0u);
    }
L_0012c408:;
    {
        uint32_t v = cpu->r[6] & 0x00000004u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0012c40c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0012c410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c414:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012c418:;
    {
        cpu->r[14] = 0x0012c41cu; fn_0012e19c(cpu);
    }
L_0012c41c:;
    {
        { uint32_t v = cpu->r[5] & 0x00000008u; set_nz(cpu, v); }
    }
L_0012c420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c42c;
        }
    }
L_0012c424:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_0012c428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c49c;
        }
    }
L_0012c42c:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_0012c430:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c434u)) return;
        }
    }
L_0012c434:;
    {
        uint32_t v = cpu->r[6] & 0x00000010u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_0012c438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c460;
        }
    }
L_0012c43c:;
    {
        cpu->r[3] = rd32(0x0012c444u + + 0x88u);
    }
L_0012c440:;
    {
        cpu->r[1] = 0x000084c1u;
    }
L_0012c444:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c448:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0012c44c:;
    {
        cpu->r[14] = 0x0012c450u; fn_0012e124(cpu);
    }
L_0012c450:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0012c454:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012c458:;
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
L_0012c45c:;
    {
        return fn_0012e150(cpu);
    }
L_0012c460:;
    {
        cpu->r[3] = rd32(0x0012c468u + + 0x64u);
    }
L_0012c464:;
    {
        cpu->r[1] = 0x000084c1u;
    }
L_0012c468:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c46c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0012c470:;
    {
        cpu->r[14] = 0x0012c474u; fn_0012e124(cpu);
    }
L_0012c474:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0012c478:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012c47c:;
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
L_0012c480:;
    {
        return fn_0012e150(cpu);
    }
L_0012c484:;
    {
        cpu->r[3] = rd32(0x0012c48cu + + 0x40u);
    }
L_0012c488:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012c48c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c490:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012c494:;
    {
        cpu->r[14] = 0x0012c498u; fn_0012e1c8(cpu);
    }
L_0012c498:;
    {
        goto L_0012c3dc;
    }
L_0012c49c:;
    {
        cpu->r[3] = rd32(0x0012c4a4u + + 0x28u);
    }
L_0012c4a0:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_0012c4a4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012c4a8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0012c4ac:;
    {
        cpu->r[14] = 0x0012c4b0u; fn_0012e124(cpu);
    }
L_0012c4b0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0012c4b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012c4b8:;
    {
        cpu->r[14] = 0x0012c4bcu; fn_0012e150(cpu);
    }
L_0012c4bc:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_0012c4c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c434;
        }
    }
L_0012c4c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c4c8u)) return;
    }
}

/* _ZN13gxRenderGroup23UpdateSphericalTexCoordEP7CMatrixP12gxRenderItem @ 0012c4d0 (arm) */
void fn_0012c4d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c4d0:;
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
L_0012c4d4:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0012c4d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0012c4dc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xbcu);
    }
L_0012c4e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012c4e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0012c4e8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xc0u);
    }
L_0012c4ec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0012c4f0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_0012c4f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012c4f8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
        }
    }
L_0012c4fc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0012c500:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0012c504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c7a0;
        }
    }
L_0012c508:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xdcu);
    }
L_0012c50c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012c510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c7a0;
        }
    }
L_0012c514:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x24u);
    }
L_0012c518:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012c51c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0012c7a0;
        }
    }
L_0012c520:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00007600u, 0, 0);
    }
L_0012c524:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012c528:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_0012c52c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0012c530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_0012c534:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0012c538:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0012c53c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c540:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0012c544:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c548:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0012c54c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c550:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0012c554:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0012c558:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012c55c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0012c564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c538;
        }
    }
L_0012c568:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012c56c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_0012c570:;
    {
        cpu->r[14] = 0x0012c574u; fn_00153fbc(cpu);
    }
L_0012c574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_0012c578:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0012c57c:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c580:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0012c584:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c588:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0012c58c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c590:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0012c594:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0012c598:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0012c59c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c5a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_0012c5a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c578;
        }
    }
L_0012c5a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012c5ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012c5b0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012c5b4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0012c5b8:;
    {
        cpu->r[14] = 0x0012c5bcu; fn_0015364c(cpu);
    }
L_0012c5bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012c5c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x44u);
    }
L_0012c5c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c5c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012c7a0;
        }
    }
L_0012c5cc:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0012c5d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012c5d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0012c5d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0012c5dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0012c5e0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0012c5e8u + + 0x1e0u);
    }
L_0012c5e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0012c5e8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0012c5f0u + + 0x1dcu);
    }
L_0012c5ec:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0012c5f4u + + 0x1dcu);
    }
L_0012c5f0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x0012c5f8u + + 0x1dcu);
    }
L_0012c5f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012c5f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c5fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012c600:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c604:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c608:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c60c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x48u);
    }
L_0012c610:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c614:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012c618:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c61c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0012c620:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0012c624:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012c628:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0012c62c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0012c630:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x18u);
    }
L_0012c634:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012c780;
        }
    }
L_0012c638:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0012c63c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012c640:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0012c644:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0012c648:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0012c64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012c650:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0012c654:;
    {
        cpu->r[3] = rd16(cpu->r[9] + cpu->r[6]);
    }
L_0012c658:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0012c65c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xdcu);
    }
L_0012c660:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0012c664:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0012c668:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0012c66c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c770;
        }
    }
L_0012c670:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0012c674:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_0012c678:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xb8u);
    }
L_0012c67c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_0012c680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_0012c684:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000024u, 0, 0);
    }
L_0012c688:;
    {
        cpu->r[14] = 0x0012c68cu; fn_001533e4(cpu);
    }
L_0012c68c:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,18);
    }
L_0012c690:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_0012c694:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_0012c698:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0012c69c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0012c6a0:;
    {
        vfp_vmla(cpu, 13, 14, 14);
    }
L_0012c6a4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
    }
L_0012c6a8:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_0012c6ac:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012c6b0:;
    {
        cpu->r[14] = 0x0012c6b4u; fn_0012dcf4(cpu);
    }
L_0012c6b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_0012c6b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0012c6bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012c6c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_0012c6c4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0012c6c8:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0012c6cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_0012c6d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012c6d4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0012c6d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0012c6dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_0012c6e0:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0012c6e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012c6e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c6ec:;
    {
        cpu->r[14] = 0x0012c6f0u; fn_001533e4(cpu);
    }
L_0012c6f0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_0012c6f4:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_0012c6f8:;
    {
        vfp_vmul(cpu, 15, 8, 9);
    }
L_0012c6fc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_0012c700:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_0012c704:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_0012c708:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_0012c70c:;
    {
        vfp_vmla(cpu, 15, 11, 14);
    }
L_0012c710:;
    {
        vfp_vmla(cpu, 15, 12, 10);
    }
L_0012c714:;
    {
        vfp_vadd(cpu, 13, 15, 15);
    }
L_0012c718:;
    {
        vfp_vmul(cpu, 9, 13, 9);
    }
L_0012c71c:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0012c720:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_0012c724:;
    {
        vfp_vsub(cpu, 15, 8, 9);
    }
L_0012c728:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012c72c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012c730:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0012c734:;
    {
        vfp_vmul(cpu, 13, 13, 10);
    }
L_0012c738:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_0012c73c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0012c740:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0012c744:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012c748:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_0012c74c:;
    {
        vfp_vadd(cpu, 14, 13, 17);
    }
L_0012c750:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0012c754:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0012c758:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012c75c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012c760:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012c7ac;
        }
    }
L_0012c764:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0012c768:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[1]);
    }
L_0012c76c:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012c770:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_0012c774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c654;
        }
    }
L_0012c778:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012c77c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x44u);
    }
L_0012c780:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012c784:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012c788:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0012c78c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0012c790:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0012c794:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0012c798:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0012c79c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012c5f4;
        }
    }
L_0012c7a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0012c7a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0012c7a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c7acu)) return;
    }
L_0012c7ac:;
    {
        vfp_vsqrt(cpu, 14, 15);
    }
L_0012c7b0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012c7b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,14));
    }
L_0012c7b8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012c7bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c764;
        }
    }
L_0012c7c0:;
    {
        cpu->r[14] = 0x0012c7c4u; imp_sqrtf(cpu); /* sqrtf */
    }
L_0012c7c4:;
    {
        goto L_0012c764;
    }
}

/* _ZN13gxRenderGroup10InsertItemEP12gxRenderItem @ 0012c7d8 (arm) */
void fn_0012c7d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c7d8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_0012c7dc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0012c7e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c7e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012c7e8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0012c7ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012c7f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c914;
        }
    }
L_0012c7f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012c7f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012c7fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c8e4;
        }
    }
L_0012c800:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0xa8u);
    }
L_0012c804:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c894;
        }
    }
L_0012c80c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012c810:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 5u, &shc), 0, 0);
    }
L_0012c814:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012c818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0012c81c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_0012c820:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_0012c824:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_0012c828:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0x4u, cpu->r[4]);
        }
    }
L_0012c82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c894;
        }
    }
L_0012c830:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c834:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 5u, &shc), 0, 0);
    }
L_0012c838:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012c83c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_0012c840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c89c;
        }
    }
L_0012c844:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0012c848:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x188u);
    }
L_0012c84c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_0012c850:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0012c854:;
    {
        vfp_sync_flags(cpu);
    }
L_0012c858:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012c888;
        }
    }
L_0012c85c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0012c860:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0012c864:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012c868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c908;
        }
    }
L_0012c86c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012c870:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x188u);
    }
L_0012c874:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0012c878:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_0012c87c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0012c880:;
    {
        vfp_sync_flags(cpu);
    }
L_0012c884:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012c85c;
        }
    }
L_0012c888:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_0012c88c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0012c890:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[4]);
    }
L_0012c894:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012c898:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012c89cu)) return;
    }
L_0012c89c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012c8a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012c8a4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012c8a8:;
    {
        cpu->r[14] = 0x0012c8acu; fn_0012c37c(cpu);
    }
L_0012c8ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c8b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c888;
        }
    }
L_0012c8b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0012c8b8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0012c8bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012c8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c908;
        }
    }
L_0012c8c4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012c8c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012c8cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012c8d0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012c8d4:;
    {
        cpu->r[14] = 0x0012c8d8u; fn_0012c37c(cpu);
    }
L_0012c8d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012c8dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012c8b4;
        }
    }
L_0012c8e0:;
    {
        goto L_0012c888;
    }
L_0012c8e4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0xa8u);
    }
L_0012c8e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c8ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c80c;
        }
    }
L_0012c8f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012c8f4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x178u);
    }
L_0012c8f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012c8fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012c900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012c810;
        }
    }
L_0012c904:;
    {
        goto L_0012c894;
    }
L_0012c908:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0012c90c:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[4]);
    }
L_0012c910:;
    {
        goto L_0012c894;
    }
L_0012c914:;
    {
        cpu->r[1] = rd32(0x0012c91cu + + 0x30u);
    }
L_0012c918:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012c91c:;
    {
        cpu->r[2] = rd32(0x0012c924u + + 0x2cu);
    }
L_0012c920:;
    {
        cpu->r[14] = 0x000001b9u;
    }
L_0012c924:;
    {
        cpu->r[3] = rd32(0x0012c92cu + + 0x28u);
    }
L_0012c928:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012c930u, cpu->r[1], 0, 0);
    }
L_0012c92c:;
    {
        cpu->r[12] = rd32(0x0012c934u + + 0x24u);
    }
L_0012c930:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012c938u, cpu->r[2], 0, 0);
    }
L_0012c934:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012c93cu, cpu->r[3], 0, 0);
    }
L_0012c938:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0012c93c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012c944u, cpu->r[12], 0, 0);
    }
L_0012c940:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012c944:;
    {
        cpu->r[14] = 0x0012c948u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012c948:;
    {
        goto L_0012c7f4;
    }
}

/* _ZN13gxRenderGroup10InsertItemEi @ 0012c95c (arm) */
void fn_0012c95c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c95c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012c960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_0012c964:;
    {
        return fn_0012c7d8(cpu);
    }
}

/* _ZN13gxRenderGroup17OrderRenderGroupsEPP17StaticSceneObjecti @ 0012c968 (arm) */
void fn_0012c968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012c968:;
    {
        cpu->r[3] = rd32(0x0012c970u + + 0x110u);
    }
L_0012c96c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012c970:;
    {
        cpu->r[12] = rd32(0x0012c978u + + 0x10cu);
    }
L_0012c974:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012c97cu, cpu->r[3], 0, 0);
    }
L_0012c978:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0012c97c:;
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
L_0012c980:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012c984:;
    {
        cpu->r[12] = rd32(0x0012c98cu + + 0xfcu);
    }
L_0012c988:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012c98c:;
    {
        cpu->r[0] = rd32(0x0012c994u + + 0xf8u);
    }
L_0012c990:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0012c994:;
    {
        cpu->r[10] = rd32(0x0012c99cu + + 0xf4u);
    }
L_0012c998:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012c99c:;
    {
        cpu->r[12] = rd32(0x0012c9a4u + + 0xf0u);
    }
L_0012c9a0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0012c9a4:;
    {
        cpu->r[0] = rd32(0x0012c9acu + + 0xecu);
    }
L_0012c9a8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012c9ac:;
    {
        cpu->r[12] = rd32(0x0012c9b4u + + 0xe8u);
    }
L_0012c9b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0012c9b4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0012c9b8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012c9bc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012c9c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0012c9c4:;
    {
        wr32(cpu->r[8], cpu->r[2]);
    }
L_0012c9c8:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_0012c9cc:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0012c9d0:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_0012c9d4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012c9d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0012c9dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xa4u);
    }
L_0012c9e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x94u, cpu->r[2]);
        }
    }
L_0012c9e4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
        }
    }
L_0012c9e8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x34u, cpu->r[2]);
        }
    }
L_0012c9ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x54u, cpu->r[2]);
        }
    }
L_0012c9f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x74u, cpu->r[2]);
        }
    }
L_0012c9f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012c9f8:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[4]);
    }
L_0012c9fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012ca20;
        }
    }
L_0012ca00:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012ca04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012ca08:;
    {
        cpu->r[14] = 0x0012ca0cu; fn_0012c95c(cpu);
    }
L_0012ca0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xa4u);
    }
L_0012ca10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012ca14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012ca18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012ca00;
        }
    }
L_0012ca1c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0xa8u);
    }
L_0012ca20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012ca24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ca28u)) return;
        }
    }
L_0012ca28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012ca2c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0012ca30:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0012ca34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x000000a0u, 0, 0);
    }
L_0012ca38:;
    {
        wr8(cpu->r[6] + + 0xa8u, cpu->r[3]);
    }
L_0012ca3c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x14u);
    }
L_0012ca40:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0012ca44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ca70;
        }
    }
L_0012ca48:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_0012ca4c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012ca50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0012ca54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012ca58:;
    {
        cpu->r[14] = 0x0012ca5cu; fn_0012c2fc(cpu);
    }
L_0012ca5c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x10u);
    }
L_0012ca60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012ca64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_0012ca68:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0012ca6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ca48;
        }
    }
L_0012ca70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_0012ca74:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_0012ca78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012ca3c;
        }
    }
L_0012ca7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ca80u)) return;
    }
}

/* _ZN13gxRenderGroup12RenderGroupsEib @ 0012caa0 (arm) */
void fn_0012caa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012caa0:;
    {
        cpu->r[3] = rd32(0x0012caa8u + + 0x6c8u);
    }
L_0012caa4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012caa8:;
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
L_0012caac:;
    {
        cpu->r[2] = rd32(0x0012cab4u + + 0x6c0u);
    }
L_0012cab0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0012cab4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012cab8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012cac0u, cpu->r[2], 0, 0);
    }
L_0012cabc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0012cac0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012cac4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0012cac8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_0012cacc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012cad0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012cad4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0012cad8:;
    {
        wr32(cpu->r[6] + + 0xd8u, cpu->r[3]);
    }
L_0012cadc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012cae0:;
    {
        wr32(cpu->r[6] + + 0xe0u, cpu->r[3]);
    }
L_0012cae4:;
    {
        wr32(cpu->r[6] + + 0xd4u, cpu->r[3]);
    }
L_0012cae8:;
    {
        cpu->r[9] = rd32(cpu->r[1]);
    }
L_0012caec:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x14u);
    }
L_0012caf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d10c;
        }
    }
L_0012caf4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0012caf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012cafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d144;
        }
    }
L_0012cb00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012cb04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cf34;
        }
    }
L_0012cb08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012cb0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0012cb10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012cb14:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012cb18:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
        }
    }
L_0012cb1c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0012d128;
        }
    }
L_0012cb20:;
    {
        cpu->r[4] = 0x000011e8u;
    }
L_0012cb24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x000000e4u, 0, 0);
    }
L_0012cb28:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0012cb2c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0012cb30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cb34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012cb38:;
    {
        cpu->r[14] = 0x0012cb40u;
    }
L_0012cb3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cb40u)) return;
    }
L_0012cb40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0012cb44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012cb48:;
    {
        cpu->r[3] = (~cpu->r[3]);
    }
L_0012cb4c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0012cb50:;
    {
        cpu->r[14] = 0x0012cb54u; fn_0012c3b8(cpu);
    }
L_0012cb54:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0012cb58:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_0012cb5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cb60:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012cb64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012cb68:;
    {
        cpu->r[14] = 0x0012cb70u;
    }
L_0012cb6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cb70u)) return;
    }
L_0012cb70:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0012cb74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cb78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012cb7c:;
    {
        cpu->r[14] = 0x0012cb84u;
    }
L_0012cb80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cb84u)) return;
    }
L_0012cb84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012cb88:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012cb8c:;
    {
        cpu->r[14] = 0x0012cb90u; fn_0012e230(cpu);
    }
L_0012cb90:;
    {
        cpu->r[2] = rd32(0x0012cb98u + + 0x5e0u);
    }
L_0012cb94:;
    {
        cpu->r[1] = rd32(0x0012cb9cu + + 0x5e0u);
    }
L_0012cb98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012cb9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012cba4u, cpu->r[2], 0, 0);
    }
L_0012cba0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012cba8u, cpu->r[1], 0, 0);
    }
L_0012cba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0012cba8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0012cbac:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0012cbb0:;
    {
        cpu->r[1] = rd32(0x0012cbb8u + + 0x5c8u);
    }
L_0012cbb4:;
    {
        cpu->r[2] = rd32(0x0012cbbcu + + 0x5c8u);
    }
L_0012cbb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012cbc0u, cpu->r[1], 0, 0);
    }
L_0012cbbc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0012cbc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012cbc8u, cpu->r[2], 0, 0);
    }
L_0012cbc4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0012cbc8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cbcc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0012cbd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cbe4;
        }
    }
L_0012cbd4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x12cu);
    }
L_0012cbd8:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0012cbdc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0012cbe0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[12] + + 0x178u, cpu->r[2]);
        }
    }
L_0012cbe4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
    }
L_0012cbe8:;
    {
        uint32_t v = cpu->r[1] & 0x20000000u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0012cbec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cf40;
        }
    }
L_0012cbf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012cbf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cfbc;
        }
    }
L_0012cbf8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0012cbfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cfd8;
        }
    }
L_0012cc00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012cc04:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x17cu);
    }
L_0012cc08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0012cc0c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012cc10:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0012cc14:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0012cc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d018;
        }
    }
L_0012cc1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xe0u);
    }
L_0012cc20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012cc24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cc28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd8(cpu->r[12] + + 0x178u);
        }
    }
L_0012cc2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ccd0;
        }
    }
L_0012cc30:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x178u);
    }
L_0012cc34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012cc38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ccd0;
        }
    }
L_0012cc3c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x44u);
    }
L_0012cc40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012cc44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012cca8;
        }
    }
L_0012cc48:;
    {
        cpu->r[8] = 0x00000004u;
    }
L_0012cc4c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012cc50:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0012cc54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0012cc58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_0012cc5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000e4u, 0, 0);
    }
L_0012cc60:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xc0u);
    }
L_0012cc64:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0012cc68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012cc6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0012cc70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012cc74:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0012cc78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0012cc7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0012cc80:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0012cc84:;
    {
        cpu->r[14] = 0x0012cc88u; imp_memcpy(cpu); /* memcpy */
    }
L_0012cc88:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xe0u);
    }
L_0012cc8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0012cc90:;
    {
        wr32(cpu->r[6] + + 0xe0u, cpu->r[3]);
    }
L_0012cc94:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x44u);
    }
L_0012cc98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cc9c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0012cca0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012cc50;
        }
    }
L_0012cca4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cca8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012ccac:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xd4u);
    }
L_0012ccb0:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x178u);
    }
L_0012ccb4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x38u);
    }
L_0012ccb8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xd8u);
    }
L_0012ccbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0012ccc0:;
    {
        wr32(cpu->r[6] + + 0xd4u, cpu->r[12]);
    }
L_0012ccc4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x34u);
    }
L_0012ccc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012cccc:;
    {
        wr32(cpu->r[6] + + 0xd8u, cpu->r[1]);
    }
L_0012ccd0:;
    {
        cpu->r[1] = 0x0000128cu;
    }
L_0012ccd4:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x30u);
    }
L_0012ccd8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0012ccdc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012cce0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_0012cce4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0012cce8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 1);
    }
L_0012ccec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d0bc;
        }
    }
L_0012ccf0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000007u, 1, 1);
    }
L_0012ccf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d0bc;
        }
    }
L_0012ccf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012ccfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cfa8;
        }
    }
L_0012cd00:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_0012cd04:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x30u);
    }
L_0012cd08:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012cd0c:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_0012cd10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012cd14:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012cd18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0012cd1c:;
    {
        cpu->r[14] = 0x0012cd20u; fn_00147cd8(cpu);
    }
L_0012cd20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0012cd24:;
    {
        cpu->r[14] = 0x0012cd28u; fn_00147a48(cpu);
    }
L_0012cd28:;
    {
        cpu->r[11] = rd8(cpu->r[7] + + 0x24u);
    }
L_0012cd2c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_0012cd30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0012d034;
        }
    }
L_0012cd34:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0012cd38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012cddc;
        }
    }
L_0012cd3c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012cd40:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0012cd44:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_0012cd48:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0012cd4c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012cd50:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_0012cd54:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0012cd58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012cd5c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0012cd60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012cd64:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_0012cd68:;
    {
        cpu->r[14] = 0x0012cd6cu; fn_00147a50(cpu);
    }
L_0012cd6c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012cd70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012cd74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012cd78:;
    {
        cpu->r[14] = 0x0012cd7cu; fn_00141848(cpu);
    }
L_0012cd7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012cd80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012cd84:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012cd88:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012cd8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_0012cd90:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0012cd94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cdbc;
        }
    }
L_0012cd98:;
    {
        cpu->r[14] = 0x0012cd9cu; fn_0012f12c(cpu);
    }
L_0012cd9c:;
    {
        cpu->r[3] = rd16(cpu->r[10] + + 0x14u);
    }
L_0012cda0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012cda4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012cda8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000003u; set_nz(cpu, v); }
    }
L_0012cdac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012cdb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0012cdb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0012cdb8:;
    {
        cpu->r[14] = 0x0012cdbcu; fn_00134680(cpu);
    }
L_0012cdbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012cdc0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012cdc4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0012cdc8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0012cdcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cd58;
        }
    }
L_0012cdd0:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_0012cdd4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012cdd8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012cddc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cde0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x186u);
    }
L_0012cde4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012cde8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d0f4;
        }
    }
L_0012cdec:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_0012cdf0:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x30u);
    }
L_0012cdf4:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012cdf8:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_0012cdfc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012ce00:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012ce04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0012ce08:;
    {
        cpu->r[14] = 0x0012ce0cu; fn_0014814c(cpu);
    }
L_0012ce0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012ce10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012ce14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012ce18:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0012ce1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~cpu->r[2]);
        }
    }
L_0012ce20:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
        }
    }
L_0012ce24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012ce28:;
    {
        cpu->r[14] = 0x0012ce2cu; fn_0012c3c0(cpu);
    }
L_0012ce2c:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0xe0u);
    }
L_0012ce30:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x14u);
    }
L_0012ce34:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0012ce38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0012ce3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d044;
        }
    }
L_0012ce40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x44u);
    }
L_0012ce44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012ce48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012ceb8;
        }
    }
L_0012ce4c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_0012ce50:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0012ce54:;
    {
        cpu->r[10] = rd32(0x0012ce5cu + + 0x32cu);
    }
L_0012ce58:;
    {
        cpu->r[8] = 0x00000004u;
    }
L_0012ce5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012ce60:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x48u);
    }
L_0012ce64:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012ce68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0012ce6c:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_0012ce70:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xc0u);
    }
L_0012ce74:;
    {
        cpu->r[1] = rd32(cpu->r[14] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0012ce78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012ce7c:;
    {
        cpu->r[14] = rd32(cpu->r[14] + cpu->r[8]);
    }
L_0012ce80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_0012ce84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0012ce88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0012ce8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012ce90:;
    {
        cpu->r[14] = 0x0012ce94u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_0012ce94:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[10]);
    }
L_0012ce98:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012ce9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012cea0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012cea4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x44u);
    }
L_0012cea8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012ceac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012ce60;
        }
    }
L_0012ceb0:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0012ceb4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012ceb8:;
    {
        cpu->r[2] = 0x00001738u;
    }
L_0012cebc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x34u);
    }
L_0012cec0:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0012cec4:;
    {
        cpu->r[12] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012cec8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0012cecc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0012ced0:;
    {
        wr32(cpu->r[9] + cpu->r[2], cpu->r[0]);
    }
L_0012ced4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x38u);
    }
L_0012ced8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0012cedc:;
    {
        wr32(cpu->r[9] + cpu->r[3], cpu->r[1]);
    }
L_0012cee0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cee4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x186u);
    }
L_0012cee8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012ceec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d0a0;
        }
    }
L_0012cef0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_0012cef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d0ac;
        }
    }
L_0012cef8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x10u);
    }
L_0012cefc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012cf00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012cf04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cbc8;
        }
    }
L_0012cf08:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0012cf0c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0012cf10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cf14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012cf18:;
    {
        cpu->r[14] = 0x0012cf20u;
    }
L_0012cf1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cf20u)) return;
    }
L_0012cf20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012cf24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012cf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cf34;
        }
    }
L_0012cf2c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012cf30:;
    {
        cpu->r[14] = 0x0012cf34u; fn_0012e2b8(cpu);
    }
L_0012cf34:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012cf38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0012cf3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cf40u)) return;
    }
L_0012cf40:;
    {
        cpu->r[14] = 0x0012cf44u; imp_glPushMatrix(cpu); /* glPushMatrix */
    }
L_0012cf44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cf48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012cf4c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0012cf50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012cf54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012cf58:;
    {
        cpu->r[14] = 0x0012cf60u;
    }
L_0012cf5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012cf60u)) return;
    }
L_0012cf60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012cf64:;
    {
        cpu->r[3] = rd32(0x0012cf6cu + + 0x220u);
    }
L_0012cf68:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0012cf6c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012cf70:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0012cf74:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0012cf78:;
    {
        cpu->r[14] = 0x0012cf7cu; fn_000be228(cpu);
    }
L_0012cf7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012cf80:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012cf84:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0012cf88:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012cf8c:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012cf90:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0012cf94:;
    {
        cpu->r[14] = 0x0012cf98u; fn_00147ccc(cpu);
    }
L_0012cf98:;
    {
        cpu->r[14] = 0x0012cf9cu; imp_glPopMatrix(cpu); /* glPopMatrix */
    }
L_0012cf9c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x10u);
    }
L_0012cfa0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012cfa4:;
    {
        goto L_0012cf00;
    }
L_0012cfa8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xe0u);
    }
L_0012cfac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012cfb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = rd32(cpu->r[5] + + 0x10u);
        }
    }
L_0012cfb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cf00;
        }
    }
L_0012cfb8:;
    {
        goto L_0012cd00;
    }
L_0012cfbc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012cfc0:;
    {
        cpu->r[14] = 0x0012cfc4u; fn_0012e230(cpu);
    }
L_0012cfc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012cfc8:;
    {
        cpu->r[14] = 0x0012cfccu; fn_0012c3b8(cpu);
    }
L_0012cfcc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cfd0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0012cfd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cc00;
        }
    }
L_0012cfd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012cfdc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012cfe0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0012cfe4:;
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
L_0012cfe8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012cfec:;
    {
        cpu->r[12] = 0x000002afu;
    }
L_0012cff0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0012cff4:;
    {
        cpu->r[14] = 0x0012cff8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012cff8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012cffc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012d000:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012d004:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x17cu);
    }
L_0012d008:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0012d00c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0012d010:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0012d014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cc1c;
        }
    }
L_0012d018:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012d01c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cc1c;
        }
    }
L_0012d020:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d024:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012d028:;
    {
        cpu->r[14] = 0x0012d02cu; fn_0012c2fc(cpu);
    }
L_0012d02c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012d030:;
    {
        goto L_0012cc1c;
    }
L_0012d034:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012d038:;
    {
        cpu->r[14] = 0x0012d03cu; fn_00147a48(cpu);
    }
L_0012d03c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0012d040:;
    {
        goto L_0012cd34;
    }
L_0012d044:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012d048:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012d04c:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_0012d050:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012d054:;
    {
        cpu->r[14] = 0x0012d058u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_0012d058:;
    {
        cpu->r[1] = 0x00001738u;
    }
L_0012d05c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xd8u);
    }
L_0012d060:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012d064:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_0012d068:;
    {
        wr32(cpu->r[6] + + 0xe0u, cpu->r[3]);
    }
L_0012d06c:;
    {
        cpu->r[14] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0012d070:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0012d074:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0012d078:;
    {
        wr32(cpu->r[9] + cpu->r[1], cpu->r[12]);
    }
L_0012d07c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xd4u);
    }
L_0012d080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012d084:;
    {
        wr32(cpu->r[9] + cpu->r[2], cpu->r[1]);
    }
L_0012d088:;
    {
        wr32(cpu->r[6] + + 0xd8u, cpu->r[3]);
    }
L_0012d08c:;
    {
        wr32(cpu->r[6] + + 0xd4u, cpu->r[3]);
    }
L_0012d090:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012d094:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x186u);
    }
L_0012d098:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012d09c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cef0;
        }
    }
L_0012d0a0:;
    {
        cpu->r[14] = 0x0012d0a4u; imp_glPopMatrix(cpu); /* glPopMatrix */
    }
L_0012d0a4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_0012d0a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cef8;
        }
    }
L_0012d0ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012d0b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012d0b4:;
    {
        cpu->r[14] = 0x0012d0b8u; fn_0012e230(cpu);
    }
L_0012d0b8:;
    {
        goto L_0012cef8;
    }
L_0012d0bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012d0c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012cfac;
        }
    }
L_0012d0c4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0xdcu);
    }
L_0012d0c8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0012d0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d154;
        }
    }
L_0012d0d0:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0012d0d4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0012d0d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d0dc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0012d0e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0012d0e4:;
    {
        cpu->r[14] = 0x0012d0e8u; fn_0012c4d0(cpu);
    }
L_0012d0e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012d0ec:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x178u);
    }
L_0012d0f0:;
    {
        goto L_0012ccf8;
    }
L_0012d0f4:;
    {
        cpu->r[14] = 0x0012d0f8u; imp_glPushMatrix(cpu); /* glPushMatrix */
    }
L_0012d0f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012d0fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000134u, 0, 0);
    }
L_0012d100:;
    {
        cpu->r[14] = 0x0012d104u; fn_00153efc(cpu);
    }
L_0012d104:;
    {
        cpu->r[14] = 0x0012d108u; imp_glLoadMatrixf(cpu); /* glLoadMatrixf */
    }
L_0012d108:;
    {
        goto L_0012cdec;
    }
L_0012d10c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012d110:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0012d114:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cb00;
        }
    }
L_0012d118:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0012d11c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012d120:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012cb00;
        }
    }
L_0012d124:;
    {
        goto L_0012cf34;
    }
L_0012d128:;
    {
        cpu->r[14] = 0x0012d12cu; fn_0012dcdc(cpu);
    }
L_0012d12c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012d130:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012d134:;
    {
        cpu->r[14] = 0x0012d138u; fn_0012eb8c(cpu);
    }
L_0012d138:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012d13c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0012d140:;
    {
        goto L_0012cb20;
    }
L_0012d144:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0012d148:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x74u);
    }
L_0012d14c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0012d150:;
    {
        goto L_0012cb00;
    }
L_0012d154:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xacu);
    }
L_0012d158:;
    {
        cpu->r[14] = 0x0012d15cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0012d15c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012d160:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xacu);
    }
L_0012d164:;
    {
        wr32(cpu->r[6] + + 0xdcu, cpu->r[0]);
    }
L_0012d168:;
    {
        cpu->r[14] = 0x0012d16cu; imp_memset(cpu); /* memset */
    }
L_0012d16c:;
    {
        goto L_0012d0d0;
    }
}

/* _ZN13gxRenderGroup4InitEPP17StaticSceneObjecti @ 0012d190 (arm) */
void fn_0012d190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012d190:;
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
L_0012d194:;
    {
        cpu->r[3] = rd32(0x0012d19cu + + 0x68cu);
    }
L_0012d198:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_0012d19c:;
    {
        cpu->r[10] = rd32(0x0012d1a4u + + 0x688u);
    }
L_0012d1a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012d1a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012d1acu, cpu->r[3], 0, 0);
    }
L_0012d1a8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0012d1ac:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0012d1b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0012d1b4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0012d1b8:;
    {
        cpu->r[0] = rd32(0x0012d1c0u + + 0x670u);
    }
L_0012d1bc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d1c0:;
    {
        cpu->r[2] = rd32(0x0012d1c8u + + 0x66cu);
    }
L_0012d1c4:;
    {
        cpu->r[8] = rd32(0x0012d1ccu + + 0x66cu);
    }
L_0012d1c8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_0012d1cc:;
    {
        cpu->r[12] = rd32(0x0012d1d4u + + 0x668u);
    }
L_0012d1d0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d1d4:;
    {
        cpu->r[1] = rd32(0x0012d1dcu + + 0x664u);
    }
L_0012d1d8:;
    {
        cpu->r[3] = rd32(0x0012d1e0u + + 0x664u);
    }
L_0012d1dc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0012d1e0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0012d1e4:;
    {
        cpu->r[7] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_0012d1e8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0012d1ec:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_0012d1f0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0012d1f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012d1f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012d1fc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[8]);
    }
L_0012d200:;
    {
        cpu->r[3] = rd32(0x0012d208u + + 0x640u);
    }
L_0012d204:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x48u);
    }
L_0012d208:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012d20c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0012d210:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_0012d214:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0012d218:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_0012d21c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_0012d220:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0012d224:;
    {
        cpu->r[14] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_0012d228:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_0012d22c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d230:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_0012d234:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0012d238:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_0012d23c:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_0012d240:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[0];
        }
    }
L_0012d244:;
    {
        wr32(cpu->r[6], cpu->r[5]);
    }
L_0012d248:;
    {
        wr32(cpu->r[14], cpu->r[5]);
    }
L_0012d24c:;
    {
        wr32(cpu->r[12], cpu->r[5]);
    }
L_0012d250:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_0012d254:;
    {
        wr32(cpu->r[2], cpu->r[5]);
    }
L_0012d258:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0012d25c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012d2fc;
        }
    }
L_0012d260:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0012d264:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0012d268:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012d26c:;
    {
        goto L_0012d27c;
    }
L_0012d270:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0012d274:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d2f8;
        }
    }
L_0012d27c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d280:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012d284:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d288:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d28c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d290:;
    {
        cpu->r[14] = 0x0012d298u;
    }
L_0012d294:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d298u)) return;
    }
L_0012d298:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012d29c:;
    {
        cpu->r[14] = 0x0012d2a4u;
    }
L_0012d2a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d2a4u)) return;
    }
L_0012d2a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 1);
    }
L_0012d2a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d270;
        }
    }
L_0012d2ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d2b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d2b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d2b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d2bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d2c0:;
    {
        cpu->r[14] = 0x0012d2c8u;
    }
L_0012d2c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d2c8u)) return;
    }
L_0012d2c8:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0xacu);
    }
L_0012d2cc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0012d2d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0012d2d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x28u);
    }
L_0012d2d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0012d2dc:;
    {
        wr32(cpu->r[11] + + 0xacu, cpu->r[2]);
    }
L_0012d2e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0012d2e4:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0xb0u);
    }
L_0012d2e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xfcu);
    }
L_0012d2ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0012d2f0:;
    {
        wr32(cpu->r[11] + + 0xb0u, cpu->r[3]);
    }
L_0012d2f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d27c;
        }
    }
L_0012d2f8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0012d2fc:;
    {
        wr32(cpu->r[11] + + 0xa4u, cpu->r[7]);
    }
L_0012d300:;
    {
        cpu->r[14] = 0x0012d304u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012d304:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012d308:;
    {
        wr32(cpu->r[11], cpu->r[0]);
    }
L_0012d30c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d7e8;
        }
    }
L_0012d310:;
    {
        cpu->r[5] = rd32(cpu->r[11] + + 0xdcu);
    }
L_0012d314:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012d318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d80c;
        }
    }
L_0012d31c:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0xacu);
    }
L_0012d320:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], 0x000000b4u, 0, 0);
    }
L_0012d324:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0xb8u);
    }
L_0012d328:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012d32c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0xb0u);
    }
L_0012d330:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d334:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0012d338:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_0012d33c:;
    {
        cpu->r[14] = 0x0012d340u; fn_0012c028(cpu);
    }
L_0012d340:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012d344:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0xbcu);
    }
L_0012d348:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0xc0u);
    }
L_0012d34c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_0012d350:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0012d354:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_0012d358:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012d7e8;
        }
    }
L_0012d35c:;
    {
        cpu->r[1] = rd32(0x0012d364u + + 0x4e8u);
    }
L_0012d360:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0012d364:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_0012d368:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_0012d36c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_0012d370:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0012d374:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0012d378:;
    {
        goto L_0012d398;
    }
L_0012d37c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012d380:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d384:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012d388:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d38c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0012d390:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0012d394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d774;
        }
    }
L_0012d398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d39c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d3a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d3a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d3a8:;
    {
        cpu->r[14] = 0x0012d3b0u;
    }
L_0012d3ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d3b0u)) return;
    }
L_0012d3b0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012d3b4:;
    {
        cpu->r[14] = 0x0012d3bcu;
    }
L_0012d3b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d3bcu)) return;
    }
L_0012d3bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 1);
    }
L_0012d3c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d37c;
        }
    }
L_0012d3c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d3c8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012d3cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0012d3d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d3d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0012d3d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d3dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d3e0:;
    {
        cpu->r[14] = 0x0012d3e8u;
    }
L_0012d3e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d3e8u)) return;
    }
L_0012d3e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d3ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d3f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d3f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d3f8:;
    {
        cpu->r[14] = 0x0012d400u;
    }
L_0012d3fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d400u)) return;
    }
L_0012d400:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d404:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0012d408:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x186u);
    }
L_0012d40c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_0012d410:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0012d414:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0012d418:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
        }
    }
L_0012d41c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012d420:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012d424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0012d428:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d42c:;
    {
        cpu->r[14] = 0x0012d430u; fn_00136fc4(cpu);
    }
L_0012d430:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d434:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x186u);
    }
L_0012d438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012d43c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d7f0;
        }
    }
L_0012d440:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012d444:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d448:;
    {
        cpu->r[14] = 0x0012d450u;
    }
L_0012d44c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d450u)) return;
    }
L_0012d450:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d454:;
    {
        wr32(cpu->r[7] + + 0x18cu, cpu->r[0]);
    }
L_0012d458:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012d45c:;
    {
        cpu->r[14] = 0x0012d460u; fn_000b5a8c(cpu);
    }
L_0012d460:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012d464:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0012d468:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d46c:;
    {
        cpu->r[14] = 0x0012d474u;
    }
L_0012d470:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d474u)) return;
    }
L_0012d474:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0012d478:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012d47c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012d480:;
    {
        cpu->r[14] = 0x0012d484u; fn_001533e4(cpu);
    }
L_0012d484:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0xfcu);
    }
L_0012d488:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012d48c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012d490:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0xb8u);
    }
L_0012d494:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012d4c4;
        }
    }
L_0012d498:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012d49c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0012d4a0:;
    {
        cpu->r[14] = 0x0012d4a4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0012d4a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012d4a8:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0012d4ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012d4b0:;
    {
        cpu->r[2] = rd16(cpu->r[10]);
    }
L_0012d4b4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0012d4b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0012d4bc:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000002u;
        wr16(cpu->r[10], cpu->r[2]);
        cpu->r[10] = wb_tmp;
    }
L_0012d4c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012d4ac;
        }
    }
L_0012d4c4:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x28u);
    }
L_0012d4c8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0012d4cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0012d4d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012d73c;
        }
    }
L_0012d4d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d4d8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0012d4dc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_0012d4e0:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0012d4e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012d4e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0012d4ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0012d4f0:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_0012d4f4:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0012d4f8:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0012d4fc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[7] = v;
    }
L_0012d500:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_0012d504:;
    {
        goto L_0012d624;
    }
L_0012d508:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x30u);
    }
L_0012d50c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0012d510:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[8] + + 0x30u, cpu->r[3]);
        }
    }
L_0012d514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d520;
        }
    }
L_0012d518:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012d51c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d700;
        }
    }
L_0012d520:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012d528:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0012d52c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012d530:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d534:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012d538:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012d53c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0012d540:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d544:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0012d548:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[0]);
    }
L_0012d54c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x186u);
    }
L_0012d550:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0012d554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d6bc;
        }
    }
L_0012d558:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0012d55c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d6dc;
        }
    }
L_0012d560:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0012d564:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0012d568:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[1]);
        }
    }
L_0012d56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d5a4;
        }
    }
L_0012d570:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012d574:;
    {
        cpu->r[1] = 0x00001288u;
    }
L_0012d578:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0012d57c:;
    {
        cpu->r[1] = rd8(cpu->r[8] + + 0x30u);
    }
L_0012d580:;
    {
        cpu->r[14] = 0x0012d584u; fn_00147cd8(cpu);
    }
L_0012d584:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0012d588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012d58c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0012d590:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0012d594:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0012d598:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[12]);
        }
    }
L_0012d59c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0]);
        }
    }
L_0012d5a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[1]);
        }
    }
L_0012d5a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d5a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012d5ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0012d5b0:;
    {
        cpu->r[14] = 0x0012d5b4u; fn_00136fa0(cpu);
    }
L_0012d5b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012d5b8:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_0012d5bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012d5c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000004cu, 0, 0);
    }
L_0012d5c4:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[0]);
    }
L_0012d5c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012d5cc:;
    {
        cpu->r[1] = rd8(cpu->r[8] + + 0x30u);
    }
L_0012d5d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012d5d4:;
    {
        cpu->r[14] = 0x0012d5d8u; fn_00147cd8(cpu);
    }
L_0012d5d8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x6u);
    }
L_0012d5dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012d5e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012d5e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0012d5e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0012d5ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12]);
        }
    }
L_0012d5f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[8]);
        }
    }
L_0012d5f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
        }
    }
L_0012d5f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012d5fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
        }
    }
L_0012d600:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] & ~ 0x00000004u; cpu->r[1] = v;
        }
    }
L_0012d604:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x14u, cpu->r[1]);
        }
    }
L_0012d608:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012d60c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_0012d610:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012d614:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_0012d618:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[1]);
    }
L_0012d61c:;
    {
        wr32(cpu->r[2] + + 0x18u, cpu->r[8]);
    }
L_0012d620:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012d724;
        }
    }
L_0012d624:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x9cu);
    }
L_0012d628:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0012d62c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d630:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012d634:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012d638:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0012d63c:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_0012d640:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_0012d644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0012d648:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0012d64c:;
    {
        wr32(cpu->r[11], cpu->r[1]);
    }
L_0012d650:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[8]);
    }
L_0012d654:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[10]);
    }
L_0012d658:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0012d65c:;
    {
        cpu->r[1] = rd16(cpu->r[8] + + 0x4u);
    }
L_0012d660:;
    {
        cpu->r[14] = 0x0012d664u; fn_00135cf4(cpu);
    }
L_0012d664:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012d668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d684;
        }
    }
L_0012d66c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012d670:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012d674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d684;
        }
    }
L_0012d678:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0012d67c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_0012d680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d508;
        }
    }
L_0012d684:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d688:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012d68c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012d690:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0012d694:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012d698:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012d69c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d6a0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012d6a4:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0012d6a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d6ac:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[0]);
    }
L_0012d6b0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x186u);
    }
L_0012d6b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0012d6b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d558;
        }
    }
L_0012d6bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d6c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0012d6c4:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[2]);
    }
L_0012d6c8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012d6cc:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0012d6d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d6d4:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_0012d6d8:;
    {
        goto L_0012d5a4;
    }
L_0012d6dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d6e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012d6e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012d6e8:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[1]);
    }
L_0012d6ec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012d6f0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0012d6f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0012d6f8:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_0012d6fc:;
    {
        goto L_0012d5a4;
    }
L_0012d700:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d704:;
    {
        cpu->r[2] = 0x0000001fu;
    }
L_0012d708:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0012d70c:;
    {
        wr8(cpu->r[8] + + 0x30u, cpu->r[2]);
    }
L_0012d710:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0012d714:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012d718:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d71c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012d720:;
    {
        goto L_0012d538;
    }
L_0012d724:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012d728:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0xfcu);
    }
L_0012d72c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0012d730:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0xb8u);
    }
L_0012d734:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0012d738:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0012d73c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_0012d740:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d744:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012d748:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012d74c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012d750:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[1]; cpu->r[1] = v;
    }
L_0012d754:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012d758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d75c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0012d760:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0012d764:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0012d768:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0012d76c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0012d770:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d398;
        }
    }
L_0012d774:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d778:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0012d77c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0012d780:;
    {
        goto L_0012d790;
    }
L_0012d784:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0012d788:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d78c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d7e8;
        }
    }
L_0012d790:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d794:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012d798:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d79c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d7a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d7a4:;
    {
        cpu->r[14] = 0x0012d7acu;
    }
L_0012d7a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d7acu)) return;
    }
L_0012d7ac:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012d7b0:;
    {
        cpu->r[14] = 0x0012d7b8u;
    }
L_0012d7b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d7b8u)) return;
    }
L_0012d7b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 1);
    }
L_0012d7bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d784;
        }
    }
L_0012d7c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012d7c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012d7c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0012d7cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012d7d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012d7d4:;
    {
        cpu->r[14] = 0x0012d7dcu;
    }
L_0012d7d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d7dcu)) return;
    }
L_0012d7dc:;
    {
        cpu->r[14] = 0x0012d7e0u; fn_00137c48(cpu);
    }
L_0012d7e0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0012d7e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012d790;
        }
    }
L_0012d7e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0012d7ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d7f0u)) return;
    }
L_0012d7f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012d7f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0012d7f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0012d7fc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0012d800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012d804:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012d808:;
    {
        goto L_0012d484;
    }
L_0012d80c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0xacu);
    }
L_0012d810:;
    {
        cpu->r[14] = 0x0012d814u; imp__Znaj(cpu); /* _Znaj */
    }
L_0012d814:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012d818:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0xacu);
    }
L_0012d81c:;
    {
        wr32(cpu->r[11] + + 0xdcu, cpu->r[0]);
    }
L_0012d820:;
    {
        cpu->r[14] = 0x0012d824u; imp_memset(cpu); /* memset */
    }
L_0012d824:;
    {
        goto L_0012d31c;
    }
}

/* _ZN13gxRenderGroup5CleanEv @ 0012d850 (arm) */
void fn_0012d850(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012d850:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012d854:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012d858:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012d85c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012d860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d870;
        }
    }
L_0012d864:;
    {
        cpu->r[14] = 0x0012d868u; fn_0018ba60(cpu);
    }
L_0012d868:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012d86c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0012d870:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0012d874:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012d878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d888;
        }
    }
L_0012d87c:;
    {
        cpu->r[14] = 0x0012d880u; fn_0018ba60(cpu);
    }
L_0012d880:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012d884:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[3]);
    }
L_0012d888:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d88c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012d890:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_0012d894:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_0012d898:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_0012d89c:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_0012d8a0:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_0012d8a4:;
    {
        cpu->r[14] = 0x0012d8a8u; fn_0012c280(cpu);
    }
L_0012d8a8:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_0012d8ac:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_0012d8b0:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_0012d8b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d8b8u)) return;
    }
}

/* _ZN13gxRenderGroupC1Ev @ 0012d8b8 (arm) */
void fn_0012d8b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012d8b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012d8bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000000b4u, 0, 0);
    }
L_0012d8c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012d8c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00007600u, 0, 0);
    }
L_0012d8c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d8cc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d8d0:;
    {
        cpu->r[14] = 0x0012d8d4u; fn_0012bf2c(cpu);
    }
L_0012d8d4:;
    {
        cpu->r[3] = 0x00007654u;
    }
L_0012d8d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
    }
L_0012d8dc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0012d8e0:;
    {
        cpu->r[14] = 0x0012d8e4u; fn_001535e0(cpu);
    }
L_0012d8e4:;
    {
        cpu->r[3] = 0x00007698u;
    }
L_0012d8e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000058u, 0, 0);
    }
L_0012d8ec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0012d8f0:;
    {
        cpu->r[14] = 0x0012d8f4u; fn_001535e0(cpu);
    }
L_0012d8f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d8f8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012d8fc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_0012d900:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_0012d904:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_0012d908:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_0012d90c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_0012d910:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_0012d914:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0012d918:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_0012d91c:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_0012d920:;
    {
        cpu->r[14] = 0x0012d924u; fn_0012bf0c(cpu);
    }
L_0012d924:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_0012d928:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_0012d92c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012d930:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_0012d934:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_0012d938:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_0012d93c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d940u)) return;
    }
}

/* _ZN13gxRenderGroupC2Ev @ 0012d940 (arm) */
void fn_0012d940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012d940:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012d944:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000000b4u, 0, 0);
    }
L_0012d948:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012d94c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00007600u, 0, 0);
    }
L_0012d950:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d954:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012d958:;
    {
        cpu->r[14] = 0x0012d95cu; fn_0012bf2c(cpu);
    }
L_0012d95c:;
    {
        cpu->r[3] = 0x00007654u;
    }
L_0012d960:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
    }
L_0012d964:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0012d968:;
    {
        cpu->r[14] = 0x0012d96cu; fn_001535e0(cpu);
    }
L_0012d96c:;
    {
        cpu->r[3] = 0x00007698u;
    }
L_0012d970:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000058u, 0, 0);
    }
L_0012d974:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0012d978:;
    {
        cpu->r[14] = 0x0012d97cu; fn_001535e0(cpu);
    }
L_0012d97c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012d980:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012d984:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_0012d988:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_0012d98c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_0012d990:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_0012d994:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_0012d998:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_0012d99c:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0012d9a0:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_0012d9a4:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_0012d9a8:;
    {
        cpu->r[14] = 0x0012d9acu; fn_0012bf0c(cpu);
    }
L_0012d9ac:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_0012d9b0:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_0012d9b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012d9b8:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_0012d9bc:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_0012d9c0:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_0012d9c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012d9c8u)) return;
    }
}

/* _ZN13gxRenderGroupD1Ev @ 0012d9c8 (arm) */
void fn_0012d9c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012d9c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012d9cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012d9d0:;
    {
        cpu->r[14] = 0x0012d9d4u; fn_0012d850(cpu);
    }
L_0012d9d4:;
    {
        cpu->r[6] = 0x00007698u;
    }
L_0012d9d8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012d9dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012d9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012d9fc;
        }
    }
L_0012d9e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012d9e8:;
    {
        cpu->r[14] = 0x0012d9ecu; fn_000b2bc8(cpu);
    }
L_0012d9ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012d9f0:;
    {
        cpu->r[14] = 0x0012d9f4u; fn_0018ba20(cpu);
    }
L_0012d9f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012d9f8:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012d9fc:;
    {
        cpu->r[6] = 0x00007654u;
    }
L_0012da00:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012da04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012da08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012da24;
        }
    }
L_0012da0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da10:;
    {
        cpu->r[14] = 0x0012da14u; fn_000b2bc8(cpu);
    }
L_0012da14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da18:;
    {
        cpu->r[14] = 0x0012da1cu; fn_0018ba20(cpu);
    }
L_0012da1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012da20:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012da24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_0012da28:;
    {
        cpu->r[14] = 0x0012da2cu; fn_0012c2d0(cpu);
    }
L_0012da2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012da30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012da34u)) return;
    }
}

/* _ZN13gxRenderGroupD2Ev @ 0012da34 (arm) */
void fn_0012da34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012da34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012da38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012da3c:;
    {
        cpu->r[14] = 0x0012da40u; fn_0012d850(cpu);
    }
L_0012da40:;
    {
        cpu->r[6] = 0x00007698u;
    }
L_0012da44:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012da48:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012da4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012da68;
        }
    }
L_0012da50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da54:;
    {
        cpu->r[14] = 0x0012da58u; fn_000b2bc8(cpu);
    }
L_0012da58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da5c:;
    {
        cpu->r[14] = 0x0012da60u; fn_0018ba20(cpu);
    }
L_0012da60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012da64:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012da68:;
    {
        cpu->r[6] = 0x00007654u;
    }
L_0012da6c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012da70:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012da74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012da90;
        }
    }
L_0012da78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da7c:;
    {
        cpu->r[14] = 0x0012da80u; fn_000b2bc8(cpu);
    }
L_0012da80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012da84:;
    {
        cpu->r[14] = 0x0012da88u; fn_0018ba20(cpu);
    }
L_0012da88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012da8c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012da90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_0012da94:;
    {
        cpu->r[14] = 0x0012da98u; fn_0012c2d0(cpu);
    }
L_0012da98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012da9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012daa0u)) return;
    }
}

/* _Z47filis_awesome_interpolation_function_is_awesomefff @ 0012daa0 (arm) */
void fn_0012daa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012daa0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0012daa4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012daacu + + 0x18u);
    }
L_0012daa8:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0012daac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0012dab0:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_0012dab4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0012dab8:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_0012dabc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012dac0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z47filis_awesome_interpolation_function_is_awesomeffff @ 0012dac8 (arm) */
void fn_0012dac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dac8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0012dacc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012dad4u + + 0x1cu);
    }
L_0012dad0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012dad4:;
    {
        vfp_sync_flags(cpu);
    }
L_0012dad8:;
    {
        if (cond_test(cpu, 9)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_0012dadc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0012dae0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0012dae4:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_0012dae8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012daec:;
    {
        return fn_0012daa0(cpu);
    }
}

/* _ZN12CImageFilter7UpdateVEf @ 0012daf4 (arm) */
void fn_0012daf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012daf4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012daf8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012dafc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012db00:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_0012db04:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012db08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_0012db0c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012db10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012db14:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db18:;
    {
        cpu->r[14] = 0x0012db1cu; fn_0012dac8(cpu);
    }
L_0012db1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db20:;
    {
        cpu->r[2] = 0x3f000000u;
    }
L_0012db24:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0012db28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012db2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012db30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012db34:;
    {
        cpu->r[14] = 0x0012db38u; fn_0012dac8(cpu);
    }
L_0012db38:;
    {
        cpu->r[2] = 0x0000999au;
    }
L_0012db3c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db40:;
    {
        cpu->r[1] = 0x3e800000u;
    }
L_0012db44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3e19u << 16);
    }
L_0012db48:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0012db4c:;
    {
        cpu->r[0] = 0x3f000000u;
    }
L_0012db50:;
    {
        cpu->r[14] = 0x0012db54u; fn_0012dac8(cpu);
    }
L_0012db54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db58:;
    {
        cpu->r[1] = 0x3e800000u;
    }
L_0012db5c:;
    {
        cpu->r[2] = 0x3f400000u;
    }
L_0012db60:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0012db64:;
    {
        cpu->r[0] = 0x3d800000u;
    }
L_0012db68:;
    {
        cpu->r[14] = 0x0012db6cu; fn_0012dac8(cpu);
    }
L_0012db6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db70:;
    {
        cpu->r[2] = 0x3f000000u;
    }
L_0012db74:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0012db78:;
    {
        cpu->r[0] = 0x3f400000u;
    }
L_0012db7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012db80:;
    {
        cpu->r[14] = 0x0012db84u; fn_0012dac8(cpu);
    }
L_0012db84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012db88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012db8c:;
    {
        cpu->r[1] = 0x3f400000u;
    }
L_0012db90:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3f60u << 16);
    }
L_0012db94:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0012db98:;
    {
        cpu->r[0] = 0x0000999au;
    }
L_0012db9c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x3e19u << 16);
    }
L_0012dba0:;
    {
        cpu->r[14] = 0x0012dba4u; fn_0012dac8(cpu);
    }
L_0012dba4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012dba8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0012dbac:;
    {
        cpu->r[0] = 0x3f800000u;
    }
L_0012dbb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012dbb4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012dbb8:;
    {
        cpu->r[14] = 0x0012dbbcu; fn_0012dac8(cpu);
    }
L_0012dbbc:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_0012dbc0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012dbc4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012dbc8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0012dbcc:;
    {
        cpu->r[0] = 0x0000999au;
    }
L_0012dbd0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x3e99u << 16);
    }
L_0012dbd4:;
    {
        cpu->r[14] = 0x0012dbd8u; fn_0012dac8(cpu);
    }
L_0012dbd8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_0012dbdc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012dbe0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012dbe4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0012dbe8:;
    {
        vfp_sync_flags(cpu);
    }
L_0012dbec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0012dbf0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0012dbf4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0012dc10;
        }
    }
L_0012dbf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0012dbfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_0012dc00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_0012dc04:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0012dc08:;
    {
        vfp_sync_flags(cpu);
    }
L_0012dc0c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012dc98;
        }
    }
L_0012dc10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012dc14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012dc18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012dc1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0012dc20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012dc50;
        }
    }
L_0012dc24:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1] + - 0x20u);
    }
L_0012dc28:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_0012dc2c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0012dc30:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0012dc34:;
    {
        vfp_sync_flags(cpu);
    }
L_0012dc38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012dbf8;
        }
    }
L_0012dc3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0012dc40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012dc44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0012dc48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0012dc4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012dc24;
        }
    }
L_0012dc50:;
    {
        cpu->r[1] = rd32(0x0012dc58u + + 0x74u);
    }
L_0012dc54:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012dc58:;
    {
        cpu->r[2] = rd32(0x0012dc60u + + 0x70u);
    }
L_0012dc5c:;
    {
        cpu->r[14] = 0x0000003eu;
    }
L_0012dc60:;
    {
        cpu->r[3] = rd32(0x0012dc68u + + 0x6cu);
    }
L_0012dc64:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012dc6cu, cpu->r[1], 0, 0);
    }
L_0012dc68:;
    {
        cpu->r[12] = rd32(0x0012dc70u + + 0x68u);
    }
L_0012dc6c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012dc74u, cpu->r[2], 0, 0);
    }
L_0012dc70:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012dc78u, cpu->r[3], 0, 0);
    }
L_0012dc74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0012dc78:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012dc80u, cpu->r[12], 0, 0);
    }
L_0012dc7c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012dc80:;
    {
        cpu->r[14] = 0x0012dc84u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012dc84:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012dc88:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbf80u << 16);
    }
L_0012dc8c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012dc90:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012dc94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012dc98u)) return;
    }
L_0012dc98:;
    {
        vfp_vsub(cpu, 15, 15, 16);
    }
L_0012dc9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012dca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0012dca4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0012dca8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x24u);
    }
L_0012dcac:;
    {
        cpu->r[1] = rd32(cpu->r[2] + - 0x1cu);
    }
L_0012dcb0:;
    {
        vfp_vsub(cpu, 16, 17, 16);
    }
L_0012dcb4:;
    {
        vfp_vdiv(cpu, 14, 16, 15);
    }
L_0012dcb8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012dcbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0012dcc0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012dcc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012dcc8:;
    {
        return fn_0012daa0(cpu);
    }
}

/* _Z21g_far_clip_reflectionv @ 0012dcdc (arm) */
void fn_0012dcdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dcdc:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_0012dce0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x461cu << 16);
    }
L_0012dce4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z22g_far_clip_transparentv @ 0012dce8 (arm) */
void fn_0012dce8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dce8:;
    {
        cpu->r[0] = 0x00002000u;
    }
L_0012dcec:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x4699u << 16);
    }
L_0012dcf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z7InvSqrtf @ 0012dcf4 (arm) */
void fn_0012dcf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dcf4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0012dcf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012dd00u + + 0x28u);
    }
L_0012dcfc:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0012dd00:;
    {
        cpu->r[3] = 0x00005a86u;
    }
L_0012dd04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5f37u << 16);
    }
L_0012dd08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012dd10u + + 0x1cu);
    }
L_0012dd0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 1, 0);
    }
L_0012dd10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012dd14:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0012dd18:;
    {
        vfp_vmls(cpu, 15, 14, 13);
    }
L_0012dd1c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0012dd20:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012dd24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D6InitVIEv @ 0012dd30 (arm) */
void fn_0012dd30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D8DbgPerfsEv @ 0012dd34 (arm) */
void fn_0012dd34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D6SaveGXEv @ 0012dd38 (arm) */
void fn_0012dd38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D9RestoreGXEv @ 0012dd3c (arm) */
void fn_0012dd3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D6ReInitEv @ 0012dd40 (arm) */
void fn_0012dd40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd40:;
    {
        cpu->r[3] = 0x000012ccu;
    }
L_0012dd44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012dd48:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012dd4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D18DBG_BeginRenderingEv @ 0012dd50 (arm) */
void fn_0012dd50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D16DBG_EndRenderingEv @ 0012dd54 (arm) */
void fn_0012dd54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D8setColorEj @ 0012dd58 (arm) */
void fn_0012dd58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd58:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_0012dd5c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012dd60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D11DrawTextureEP7Textureiiiii @ 0012dd64 (arm) */
void fn_0012dd64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D14IsVtxSubFormatEP16GXVtxAttrFmtListS1_ @ 0012dd68 (arm) */
void fn_0012dd68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dd68:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0012dd6c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0012dd70:;
    {
        sub_flags(cpu, cpu->r[12], 0x000000ffu, 1, 1);
    }
L_0012dd74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ddfc;
        }
    }
L_0012dd78:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_0012dd7c:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000ffu, 1, 1);
    }
L_0012dd80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012dddc;
        }
    }
L_0012dd84:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0012dd88:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0012dd8c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0012dd90:;
    {
        goto L_0012dda0;
    }
L_0012dd94:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x10u;
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
        cpu->r[0] = wb_tmp;
    }
L_0012dd98:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0012dd9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012dde8;
        }
    }
L_0012dda0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0012dda4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012dd94;
        }
    }
L_0012dda8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0012ddac:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0012ddb0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_0012ddb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012ddb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012dddc;
        }
    }
L_0012ddbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0012ddc0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_0012ddc4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012ddc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012dddc;
        }
    }
L_0012ddcc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_0012ddd0:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0xcu);
    }
L_0012ddd4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012ddd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012dd94;
        }
    }
L_0012dddc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012dde0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0012dde4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012dde8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012ddec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012dddc;
        }
    }
L_0012ddf0:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x10u;
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
        cpu->r[1] = wb_tmp;
    }
L_0012ddf4:;
    {
        sub_flags(cpu, cpu->r[12], 0x000000ffu, 1, 1);
    }
L_0012ddf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012dd84;
        }
    }
L_0012ddfc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0012de00:;
    {
        goto L_0012dde0;
    }
}

/* _ZN5Lib3D7GetClipERjS0_S0_S0_ @ 0012de04 (arm) */
void fn_0012de04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012de04:;
    {
        cpu->r[12] = 0x00001300u;
    }
L_0012de08:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012de0c:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_0012de10:;
    {
        cpu->r[1] = 0x00001304u;
    }
L_0012de14:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0012de18:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_0012de1c:;
    {
        cpu->r[2] = 0x00001308u;
    }
L_0012de20:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0012de24:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012de28:;
    {
        cpu->r[3] = 0x0000130cu;
    }
L_0012de2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012de30:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0012de34:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0012de38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D20IsIntersectionOccursER8Vector3dS1_ff @ 0012de3c (arm) */
void fn_0012de3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012de3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_0012de40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0012de44:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_0012de48:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_0012de4c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_0012de50:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0012de54:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_0012de58:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0012de5c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0012de60:;
    {
        vfp_vsub(cpu, 12, 10, 12);
    }
L_0012de64:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_0012de68:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_0012de6c:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_0012de70:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0012de74:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_0012de78:;
    {
        vfp_vmla(cpu, 14, 11, 11);
    }
L_0012de7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0012de80:;
    {
        vfp_sync_flags(cpu);
    }
L_0012de84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012de88:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012de8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D15SphereInFrustumER8Vector3df @ 0012de90 (arm) */
void fn_0012de90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012de90:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0012de94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_0012de98:;
    {
        vfp_vadd(cpu, 12, 15, 14);
    }
L_0012de9c:;
    {
        cpu->r[3] = 0x00001310u;
    }
L_0012dea0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0012dea4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_0012dea8:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_0012deac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_0012deb0:;
    {
        vfp_sync_flags(cpu);
    }
L_0012deb4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012df60;
        }
    }
L_0012deb8:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_0012debc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0012dec4u + + 0xa4u);
    }
L_0012dec0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_0012dec4:;
    {
        vfp_sync_flags(cpu);
    }
L_0012dec8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012df60;
        }
    }
L_0012decc:;
    {
        cpu->r[3] = 0x000012b0u;
    }
L_0012ded0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_0012ded4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0012ded8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_0012dedc:;
    {
        cpu->r[3] = 0x000012b8u;
    }
L_0012dee0:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_0012dee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0012dee8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_0012deec:;
    {
        vfp_vmul(cpu, 12, 15, 12);
    }
L_0012def0:;
    {
        vfp_vadd(cpu, 11, 12, 13);
    }
L_0012def4:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_0012def8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,14));
    }
L_0012defc:;
    {
        vfp_sync_flags(cpu);
    }
L_0012df00:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012df60;
        }
    }
L_0012df04:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_0012df08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_0012df0c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012df10:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012df60;
        }
    }
L_0012df14:;
    {
        cpu->r[3] = 0x000012acu;
    }
L_0012df18:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_0012df1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0012df20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_0012df24:;
    {
        cpu->r[3] = 0x000012a8u;
    }
L_0012df28:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_0012df2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0012df30:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_0012df34:;
    {
        vfp_vmul(cpu, 15, 11, 12);
    }
L_0012df38:;
    {
        vfp_vadd(cpu, 12, 13, 15);
    }
L_0012df3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_0012df40:;
    {
        vfp_sync_flags(cpu);
    }
L_0012df44:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012df60;
        }
    }
L_0012df48:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0012df4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012df50:;
    {
        vfp_sync_flags(cpu);
    }
L_0012df54:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012df58:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012df5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012df60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012df64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D20SetRendertargetWidthEi @ 0012df6c (arm) */
void fn_0012df6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012df6c:;
    {
        cpu->r[3] = 0x0000129cu;
    }
L_0012df70:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012df74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D20GetRendertargetWidthEv @ 0012df78 (arm) */
void fn_0012df78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012df78:;
    {
        cpu->r[3] = 0x0000129cu;
    }
L_0012df7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012df80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D21SetRendertargetHeightEi @ 0012df84 (arm) */
void fn_0012df84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012df84:;
    {
        cpu->r[3] = 0x000012a0u;
    }
L_0012df88:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012df8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D21GetRendertargetHeightEv @ 0012df90 (arm) */
void fn_0012df90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012df90:;
    {
        cpu->r[3] = 0x000012a0u;
    }
L_0012df94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012df98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D14GetAspectRatioEv @ 0012df9c (arm) */
void fn_0012df9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012df9c:;
    {
        cpu->r[3] = 0x000012a0u;
    }
L_0012dfa0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012dfa4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012dfa8:;
    {
        cpu->r[3] = 0x0000129cu;
    }
L_0012dfac:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0012dfb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012dfb4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0012dfb8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0012dfbc:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_0012dfc0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012dfc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D17ResetPerfCountersEv @ 0012dfc8 (arm) */
void fn_0012dfc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dfc8:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_0012dfcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012dfd0:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012dfd4:;
    {
        cpu->r[2] = 0x00001738u;
    }
L_0012dfd8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012dfdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D22InvaliadateRenderStateEv @ 0012dfe0 (arm) */
void fn_0012dfe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012dfe0:;
    {
        cpu->r[2] = 0x00001778u;
    }
L_0012dfe4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0012dfe8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012dfec:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012dff0:;
    {
        cpu->r[2] = 0x0000179cu;
    }
L_0012dff4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012dff8:;
    {
        cpu->r[2] = 0x00001794u;
    }
L_0012dffc:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0012e000:;
    {
        cpu->r[2] = 0x0000177cu;
    }
L_0012e004:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e008:;
    {
        cpu->r[2] = 0x00001780u;
    }
L_0012e00c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e010:;
    {
        cpu->r[2] = 0x00001784u;
    }
L_0012e014:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e018:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0012e01c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e020:;
    {
        cpu->r[2] = 0x0000178cu;
    }
L_0012e024:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e028:;
    {
        cpu->r[2] = 0x00001790u;
    }
L_0012e02c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e030:;
    {
        cpu->r[2] = 0x00001798u;
    }
L_0012e034:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e038:;
    {
        cpu->r[2] = 0x000017a0u;
    }
L_0012e03c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0012e040:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D14setForcedColorEffff @ 0012e044 (arm) */
void fn_0012e044(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e044:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0012e048:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0012e04c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0012e050:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0012e054:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13]);
    }
L_0012e058:;
    {
        vfp_sync_flags(cpu);
    }
L_0012e05c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012e0d4;
        }
    }
L_0012e060:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_0012e064:;
    {
        vfp_sync_flags(cpu);
    }
L_0012e068:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012e0d4;
        }
    }
L_0012e06c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_0012e070:;
    {
        vfp_sync_flags(cpu);
    }
L_0012e074:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012e0d4;
        }
    }
L_0012e078:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_0012e07c:;
    {
        vfp_sync_flags(cpu);
    }
L_0012e080:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012e0d4;
        }
    }
L_0012e084:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0012e088:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_0012e08c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012e090:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012e094:;
    {
        cpu->r[3] = 0x000017a8u;
    }
L_0012e098:;
    {
        *(uint32_t*)vfp_s(cpu,14) = (uint32_t)*vfp_s(cpu,14);
    }
L_0012e09c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012e0a0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e0a4:;
    {
        cpu->r[3] = 0x000017a9u;
    }
L_0012e0a8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0012e0ac:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012e0b0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012e0b4:;
    {
        cpu->r[3] = 0x000017aau;
    }
L_0012e0b8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = (uint32_t)*vfp_s(cpu,12);
    }
L_0012e0bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012e0c0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e0c4:;
    {
        cpu->r[3] = 0x000017abu;
    }
L_0012e0c8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0012e0cc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012e0d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012e0d4:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_0012e0d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012e0dc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012e0e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13CreateSurfaceP10SurfaceRecbbb @ 0012e0e4 (arm) */
void fn_0012e0e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e0e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D9EnableFogEv @ 0012e0e8 (arm) */
void fn_0012e0e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e0e8:;
    {
        cpu->r[0] = 0x00000b60u;
    }
L_0012e0ec:;
    {
        imp_glEnable(cpu); /* tail glEnable */ return;
    }
}

/* _ZN5Lib3D14EnableLightingEb @ 0012e0f0 (arm) */
void fn_0012e0f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e0f0:;
    {
        cpu->r[3] = 0x00001748u;
    }
L_0012e0f4:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e0f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e0fc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e100:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e104:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e114;
        }
    }
L_0012e10c:;
    {
        cpu->r[0] = 0x00000b50u;
    }
L_0012e110:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
L_0012e114:;
    {
        cpu->r[0] = 0x00000b50u;
    }
L_0012e118:;
    {
        imp_glEnable(cpu); /* tail glEnable */ return;
    }
}

/* _ZN5Lib3D10DisableFogEv @ 0012e11c (arm) */
void fn_0012e11c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e11c:;
    {
        cpu->r[0] = 0x00000b60u;
    }
L_0012e120:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _ZN5Lib3D25SetClientActiveTextureARBEi @ 0012e124 (arm) */
void fn_0012e124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e124:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e128:;
    {
        cpu->r[4] = 0x000012c0u;
    }
L_0012e12c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012e130:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012e134:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012e138:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012e13c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e140u)) return;
        }
    }
L_0012e140:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012e144:;
    {
        cpu->r[14] = 0x0012e148u; imp_glClientActiveTexture(cpu); /* glClientActiveTexture */
    }
L_0012e148:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[6]);
    }
L_0012e14c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e150u)) return;
    }
}

/* _ZN5Lib3D34EnableClientStateTextureCoordArrayEb @ 0012e150 (arm) */
void fn_0012e150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e150:;
    {
        cpu->r[3] = 0x000012bfu;
    }
L_0012e154:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e158:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e15c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e168;
        }
    }
L_0012e160:;
    {
        cpu->r[0] = 0x00008078u;
    }
L_0012e164:;
    {
        imp_glDisableClientState(cpu); /* tail glDisableClientState */ return;
    }
L_0012e168:;
    {
        cpu->r[0] = 0x00008078u;
    }
L_0012e16c:;
    {
        imp_glEnableClientState(cpu); /* tail glEnableClientState */ return;
    }
}

/* _ZN5Lib3D28EnableClientStateNormalArrayEb @ 0012e170 (arm) */
void fn_0012e170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e170:;
    {
        cpu->r[3] = 0x000012beu;
    }
L_0012e174:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e178:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e17c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e180:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e184:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e194;
        }
    }
L_0012e18c:;
    {
        cpu->r[0] = 0x00008075u;
    }
L_0012e190:;
    {
        imp_glDisableClientState(cpu); /* tail glDisableClientState */ return;
    }
L_0012e194:;
    {
        cpu->r[0] = 0x00008075u;
    }
L_0012e198:;
    {
        imp_glEnableClientState(cpu); /* tail glEnableClientState */ return;
    }
}

/* _ZN5Lib3D27EnableClientStateColorArrayEb @ 0012e19c (arm) */
void fn_0012e19c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e19c:;
    {
        cpu->r[3] = 0x000012bdu;
    }
L_0012e1a0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e1a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e1a8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e1ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e1b0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e1b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e1c0;
        }
    }
L_0012e1b8:;
    {
        cpu->r[0] = 0x00008076u;
    }
L_0012e1bc:;
    {
        imp_glDisableClientState(cpu); /* tail glDisableClientState */ return;
    }
L_0012e1c0:;
    {
        cpu->r[0] = 0x00008076u;
    }
L_0012e1c4:;
    {
        imp_glEnableClientState(cpu); /* tail glEnableClientState */ return;
    }
}

/* _ZN5Lib3D28EnableClientStateVertexArrayEb @ 0012e1c8 (arm) */
void fn_0012e1c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e1c8:;
    {
        cpu->r[3] = 0x000012bcu;
    }
L_0012e1cc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e1d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e1d4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e1d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e1dc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e1e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e1ec;
        }
    }
L_0012e1e4:;
    {
        cpu->r[0] = 0x00008074u;
    }
L_0012e1e8:;
    {
        imp_glDisableClientState(cpu); /* tail glDisableClientState */ return;
    }
L_0012e1ec:;
    {
        cpu->r[0] = 0x00008074u;
    }
L_0012e1f0:;
    {
        imp_glEnableClientState(cpu); /* tail glEnableClientState */ return;
    }
}

/* _ZN5Lib3D13DisableTexMapEi @ 0012e1f4 (arm) */
void fn_0012e1f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e1f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000490u, 0, 0);
    }
L_0012e1f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012e1fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e200:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012e204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012e208:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00008400u, 0, 0);
    }
L_0012e20c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0012e210:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0012e214:;
    {
        cpu->r[14] = 0x0012e218u; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_0012e218:;
    {
        cpu->r[3] = 0x00001240u;
    }
L_0012e21c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0012e220:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0012e224:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012e228:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e22c:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _ZN5Lib3D19DisableUnusedTexMapEi @ 0012e230 (arm) */
void fn_0012e230(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e230:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0012e234:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e238:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0012e23c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012e240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e244u)) return;
        }
    }
L_0012e244:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012e248:;
    {
        cpu->r[14] = 0x0012e24cu; fn_0012e1f4(cpu);
    }
L_0012e24c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0012e250:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e254u)) return;
        }
    }
L_0012e254:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012e258:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012e25c:;
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
L_0012e260:;
    {
        return fn_0012e1f4(cpu);
    }
}

/* _ZN5Lib3D13SetMatrixModeEi @ 0012e264 (arm) */
void fn_0012e264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e264:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0012e268:;
    {
        wr32(cpu->r[0] + + 0xea8u, cpu->r[1]);
    }
L_0012e26c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e270:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012e274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e29c;
        }
    }
L_0012e278:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e27c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e280u)) return;
        }
    }
L_0012e280:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_0012e284:;
    {
        cpu->r[14] = 0x0012e288u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0012e288:;
    {
        cpu->r[2] = 0x000011e8u;
    }
L_0012e28c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00001100u, 0, 0);
    }
L_0012e290:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0012e294:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0012e298:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e29cu)) return;
    }
L_0012e29c:;
    {
        cpu->r[0] = 0x00001701u;
    }
L_0012e2a0:;
    {
        cpu->r[14] = 0x0012e2a4u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0012e2a4:;
    {
        cpu->r[2] = 0x000011e8u;
    }
L_0012e2a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000e80u, 0, 0);
    }
L_0012e2ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012e2b0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0012e2b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e2b8u)) return;
    }
}

/* _ZN5Lib3D10PopFarClipEv @ 0012e2b8 (arm) */
void fn_0012e2b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e2b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e2bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012e2c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012e2c4:;
    {
        cpu->r[14] = 0x0012e2c8u; fn_0012e264(cpu);
    }
L_0012e2c8:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0012e2cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012e2d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012e2d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012e2d8:;
    {
        cpu->r[14] = 0x0012e2e0u;
    }
L_0012e2dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e2e0u)) return;
    }
L_0012e2e0:;
    {
        cpu->r[3] = 0x00001310u;
    }
L_0012e2e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012e2ecu + + 0x14u);
    }
L_0012e2e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012e2ec:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012e2f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012e2f4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012e2f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e2fc:;
    {
        return fn_0012e264(cpu);
    }
}

/* _ZN5Lib3D16RestoreTexMatrixEi @ 0012e304 (arm) */
void fn_0012e304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e304:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00008400u, 0, 0);
    }
L_0012e308:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e30c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0012e310:;
    {
        cpu->r[14] = 0x0012e314u; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_0012e314:;
    {
        cpu->r[0] = 0x00001702u;
    }
L_0012e318:;
    {
        cpu->r[14] = 0x0012e31cu; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0012e31c:;
    {
        cpu->r[14] = 0x0012e320u; imp_glLoadIdentity(cpu); /* glLoadIdentity */
    }
L_0012e320:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_0012e324:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e328:;
    {
        imp_glMatrixMode(cpu); /* tail glMatrixMode */ return;
    }
}

/* _ZN5Lib3D18TranslateTexMatrixEfffi @ 0012e32c (arm) */
void fn_0012e32c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e32c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e330:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012e334:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0012e338:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012e33c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008400u, 0, 0);
    }
L_0012e340:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0012e344:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0012e348:;
    {
        cpu->r[14] = 0x0012e34cu; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_0012e34c:;
    {
        cpu->r[0] = 0x00001702u;
    }
L_0012e350:;
    {
        cpu->r[14] = 0x0012e354u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0012e354:;
    {
        cpu->r[14] = 0x0012e358u; imp_glLoadIdentity(cpu); /* glLoadIdentity */
    }
L_0012e358:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012e35c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012e360:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012e364:;
    {
        cpu->r[14] = 0x0012e368u; imp_glTranslatef(cpu); /* glTranslatef */
    }
L_0012e368:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_0012e36c:;
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
L_0012e370:;
    {
        imp_glMatrixMode(cpu); /* tail glMatrixMode */ return;
    }
}

/* _ZN5Lib3D15RotateTexMatrixEfffi @ 0012e374 (arm) */
void fn_0012e374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e374:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e378:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012e37c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0012e380:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0012e384:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008400u, 0, 0);
    }
L_0012e388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0012e38c:;
    {
        cpu->r[14] = 0x0012e390u; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_0012e390:;
    {
        cpu->r[0] = 0x00001702u;
    }
L_0012e394:;
    {
        cpu->r[14] = 0x0012e398u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0012e398:;
    {
        cpu->r[14] = 0x0012e39cu; imp_glLoadIdentity(cpu); /* glLoadIdentity */
    }
L_0012e39c:;
    {
        cpu->r[0] = 0x3f000000u;
    }
L_0012e3a0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012e3a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012e3a8:;
    {
        cpu->r[14] = 0x0012e3acu; imp_glTranslatef(cpu); /* glTranslatef */
    }
L_0012e3ac:;
    {
        uint32_t v = cpu->r[5] ^ 0x80000000u; cpu->r[0] = v;
    }
L_0012e3b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012e3b4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012e3b8:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0012e3bc:;
    {
        cpu->r[14] = 0x0012e3c0u; imp_glRotatef(cpu); /* glRotatef */
    }
L_0012e3c0:;
    {
        cpu->r[0] = 0xbf000000u;
    }
L_0012e3c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012e3c8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012e3cc:;
    {
        cpu->r[14] = 0x0012e3d0u; imp_glTranslatef(cpu); /* glTranslatef */
    }
L_0012e3d0:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_0012e3d4:;
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
L_0012e3d8:;
    {
        imp_glMatrixMode(cpu); /* tail glMatrixMode */ return;
    }
}

/* _ZN5Lib3D16SetPostTexMatrixEiP7CMatrix @ 0012e3dc (arm) */
void fn_0012e3dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e3dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0012e3e0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0012e3e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012e3e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001440u, 0, 0);
    }
L_0012e3ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0012e3f0:;
    {
        return fn_00153624(cpu);
    }
}

/* _ZN5Lib3D13SetClearColorER7GXColor @ 0012e3f4 (arm) */
void fn_0012e3f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e3f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00001780u, 0, 0);
    }
L_0012e3f8:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0012e3fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_0012e400:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e404:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e408:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_0012e40c:;
    {
        cpu->r[3] = 0x000017a7u;
    }
L_0012e410:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012e418u + + 0x5cu);
    }
L_0012e414:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e418:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0012e41c:;
    {
        cpu->r[3] = 0x000017a4u;
    }
L_0012e420:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0012e424:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e428:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012e42c:;
    {
        cpu->r[3] = 0x000017a5u;
    }
L_0012e430:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e434:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0012e438:;
    {
        cpu->r[3] = 0x000017a6u;
    }
L_0012e43c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0012e440:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e444:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012e448:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0012e44c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0012e450:;
    {
        vfp_vmul(cpu, 10, 11, 15);
    }
L_0012e454:;
    {
        vfp_vmul(cpu, 11, 12, 15);
    }
L_0012e458:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_0012e45c:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_0012e460:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0012e464:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0012e468:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0012e46c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012e470:;
    {
        imp_glClearColor(cpu); /* tail glClearColor */ return;
    }
}

/* _ZN5Lib3D14SetFogIntervalEff @ 0012e478 (arm) */
void fn_0012e478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e478:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0012e47c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e480:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012e484:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0012e48cu + + 0x38u);
    }
L_0012e488:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_0012e48c:;
    {
        cpu->r[3] = 0x00001754u;
    }
L_0012e490:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_0012e494:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e498:;
    {
        cpu->r[3] = 0x00001758u;
    }
L_0012e49c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012e4a0:;
    {
        cpu->r[0] = 0x00000b63u;
    }
L_0012e4a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012e4a8:;
    {
        cpu->r[14] = 0x0012e4acu; imp_glFogf(cpu); /* glFogf */
    }
L_0012e4ac:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_0012e4b0:;
    {
        cpu->r[0] = 0x00000b64u;
    }
L_0012e4b4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012e4b8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012e4bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e4c0:;
    {
        imp_glFogf(cpu); /* tail glFogf */ return;
    }
}

/* _ZN5Lib3D10SetFogTypeE10_GXFogType @ 0012e4c8 (arm) */
void fn_0012e4c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e4c8:;
    {
        cpu->r[3] = 0x0000174cu;
    }
L_0012e4cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0012e4d0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e4d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e508;
        }
    }
L_0012e4d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_0012e4dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e4f8;
        }
    }
L_0012e4e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0012e4e4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0012e4e8:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_0012e4ec:;
    {
        cpu->r[0] = 0x00000b65u;
    }
L_0012e4f0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4618u << 16);
    }
L_0012e4f4:;
    {
        imp_glFogf(cpu); /* tail glFogf */ return;
    }
L_0012e4f8:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_0012e4fc:;
    {
        cpu->r[0] = 0x00000b65u;
    }
L_0012e500:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4500u << 16);
    }
L_0012e504:;
    {
        imp_glFogf(cpu); /* tail glFogf */ return;
    }
L_0012e508:;
    {
        cpu->r[0] = 0x00000b65u;
    }
L_0012e50c:;
    {
        cpu->r[1] = 0x45000000u;
    }
L_0012e510:;
    {
        imp_glFogf(cpu); /* tail glFogf */ return;
    }
}

/* _ZN5Lib3D11SetFogColorEhhh @ 0012e514 (arm) */
void fn_0012e514(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e514:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e518:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_0012e51c:;
    {
        cpu->r[14] = cpu->r[0];
    }
L_0012e520:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0012e524:;
    {
        cpu->r[0] = 0x00001750u;
    }
L_0012e528:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012e52c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012e530:;
    {
        cpu->r[4] = 0x00001751u;
    }
L_0012e534:;
    {
        wr8(cpu->r[14] + cpu->r[0], cpu->r[1]);
    }
L_0012e538:;
    {
        cpu->r[1] = 0x00001752u;
    }
L_0012e53c:;
    {
        wr8(cpu->r[14] + cpu->r[4], cpu->r[2]);
    }
L_0012e540:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_0012e544:;
    {
        wr8(cpu->r[14] + cpu->r[1], cpu->r[3]);
    }
L_0012e548:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0012e550u + + 0x48u);
    }
L_0012e54c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0012e550:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[14]);
        cpu->r[12] = wb_tmp;
    }
L_0012e554:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_0012e558:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0012e55c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012e564u + + 0x38u);
    }
L_0012e560:;
    {
        cpu->r[0] = 0x00000b66u;
    }
L_0012e564:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0012e568:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0012e56c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0012e570:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0012e574:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0012e578:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_0012e57c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012e580:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_0012e584:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0012e588:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012e58c:;
    {
        cpu->r[14] = 0x0012e590u; imp_glFogfv(cpu); /* glFogfv */
    }
L_0012e590:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012e594:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e598u)) return;
    }
}

/* _ZN5Lib3D16GetPostTexMatrixEi @ 0012e5a0 (arm) */
void fn_0012e5a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e5a0:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_0012e5a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000040u, 1, 0);
    }
L_0012e5a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_0012e5ac:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0012e5b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012e5b4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_0012e5b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012e5bc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0012e5c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_0012e5c4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0012e5fc;
        }
    }
L_0012e5c8:;
    {
        cpu->r[1] = rd32(0x0012e5d0u + + 0x44u);
    }
L_0012e5cc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012e5d0:;
    {
        cpu->r[2] = rd32(0x0012e5d8u + + 0x40u);
    }
L_0012e5d4:;
    {
        cpu->r[14] = 0x00000752u;
    }
L_0012e5d8:;
    {
        cpu->r[3] = rd32(0x0012e5e0u + + 0x3cu);
    }
L_0012e5dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012e5e4u, cpu->r[1], 0, 0);
    }
L_0012e5e0:;
    {
        cpu->r[12] = rd32(0x0012e5e8u + + 0x38u);
    }
L_0012e5e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012e5ecu, cpu->r[2], 0, 0);
    }
L_0012e5e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012e5f0u, cpu->r[3], 0, 0);
    }
L_0012e5ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0012e5f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012e5f8u, cpu->r[12], 0, 0);
    }
L_0012e5f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012e5f8:;
    {
        cpu->r[14] = 0x0012e5fcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012e5fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_0012e600:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0012e604:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001440u, 0, 0);
    }
L_0012e608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0012e60c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012e610:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e614u)) return;
    }
}

/* _ZN5Lib3D13GetVtxAttrFmtE8GXVtxFmt7_GXAttrP10_GXCompCntP11_GXCompTypePh @ 0012e624 (arm) */
void fn_0012e624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e624:;
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
L_0012e628:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0012e62c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xe84u);
    }
L_0012e630:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012e634:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012e638:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0012e63c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0012e640:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012e644:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012e648:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012e64c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0012e6b8;
        }
    }
L_0012e650:;
    {
        cpu->r[3] = 0x000001d0u;
    }
L_0012e654:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[5]; cpu->r[5] = v;
    }
L_0012e658:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0012e65c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012e660:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0012e664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e688;
        }
    }
L_0012e668:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012e66c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e67c;
        }
    }
L_0012e670:;
    {
        goto L_0012e690;
    }
L_0012e674:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012e678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e690;
        }
    }
L_0012e67c:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x10u;
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
        cpu->r[2] = wb_tmp;
    }
L_0012e680:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0012e684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e674;
        }
    }
L_0012e688:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012e68c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e690u)) return;
    }
L_0012e690:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012e694:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_0012e698:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_0012e69c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0012e6a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
        }
    }
L_0012e6a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8], cpu->r[3]);
        }
    }
L_0012e6a8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0012e6ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[2] + + 0xcu);
        }
    }
L_0012e6b0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[10], cpu->r[3]);
        }
    }
L_0012e6b4:;
    {
        goto L_0012e688;
    }
L_0012e6b8:;
    {
        cpu->r[1] = rd32(0x0012e6c0u + + 0x30u);
    }
L_0012e6bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012e6c0:;
    {
        cpu->r[12] = rd32(0x0012e6c8u + + 0x2cu);
    }
L_0012e6c4:;
    {
        cpu->r[14] = 0x000006bau;
    }
L_0012e6c8:;
    {
        cpu->r[2] = rd32(0x0012e6d0u + + 0x28u);
    }
L_0012e6cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012e6d4u, cpu->r[1], 0, 0);
    }
L_0012e6d0:;
    {
        cpu->r[3] = rd32(0x0012e6d8u + + 0x24u);
    }
L_0012e6d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012e6dcu, cpu->r[12], 0, 0);
    }
L_0012e6d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012e6e0u, cpu->r[2], 0, 0);
    }
L_0012e6dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_0012e6e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012e6e8u, cpu->r[3], 0, 0);
    }
L_0012e6e4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012e6e8:;
    {
        cpu->r[14] = 0x0012e6ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012e6ec:;
    {
        goto L_0012e650;
    }
}

/* _ZN5Lib3D33SynchronizeRenderTargetDimensionsEv @ 0012e700 (arm) */
void fn_0012e700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e700:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012e704:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012e70c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012e710:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012e714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e73c;
        }
    }
L_0012e718:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x104u);
    }
L_0012e71c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012e720:;
    {
        cpu->r[14] = 0x0012e724u; fn_0012df6c(cpu);
    }
L_0012e724:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012e728:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012e72c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x108u);
    }
L_0012e730:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012e734:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e738:;
    {
        return fn_0012df84(cpu);
    }
L_0012e73c:;
    {
        cpu->r[1] = rd32(0x0012e744u + + 0x34u);
    }
L_0012e740:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012e744:;
    {
        cpu->r[12] = rd32(0x0012e74cu + + 0x30u);
    }
L_0012e748:;
    {
        cpu->r[14] = 0x0000010au;
    }
L_0012e74c:;
    {
        cpu->r[2] = rd32(0x0012e754u + + 0x2cu);
    }
L_0012e750:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012e758u, cpu->r[1], 0, 0);
    }
L_0012e754:;
    {
        cpu->r[3] = rd32(0x0012e75cu + + 0x28u);
    }
L_0012e758:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012e760u, cpu->r[12], 0, 0);
    }
L_0012e75c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012e764u, cpu->r[2], 0, 0);
    }
L_0012e760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_0012e764:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012e76cu, cpu->r[3], 0, 0);
    }
L_0012e768:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012e76c:;
    {
        cpu->r[14] = 0x0012e770u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012e770:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012e774:;
    {
        goto L_0012e718;
    }
}

/* _ZN5Lib3D13SetTexEnvModeEii @ 0012e788 (arm) */
void fn_0012e788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e788:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0012e78c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e790:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012e794:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012e798:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012e79c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012e7a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012e7d8;
        }
    }
L_0012e7a4:;
    {
        cpu->r[1] = rd32(0x0012e7acu + + 0x68u);
    }
L_0012e7a8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012e7ac:;
    {
        cpu->r[12] = rd32(0x0012e7b4u + + 0x64u);
    }
L_0012e7b0:;
    {
        cpu->r[14] = 0x00000a63u;
    }
L_0012e7b4:;
    {
        cpu->r[2] = rd32(0x0012e7bcu + + 0x60u);
    }
L_0012e7b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012e7c0u, cpu->r[1], 0, 0);
    }
L_0012e7bc:;
    {
        cpu->r[3] = rd32(0x0012e7c4u + + 0x5cu);
    }
L_0012e7c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012e7c8u, cpu->r[12], 0, 0);
    }
L_0012e7c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012e7ccu, cpu->r[2], 0, 0);
    }
L_0012e7c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000048u, 0, 0);
    }
L_0012e7cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012e7d4u, cpu->r[3], 0, 0);
    }
L_0012e7d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012e7d4:;
    {
        cpu->r[14] = 0x0012e7d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012e7d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000005e0u, 0, 0);
    }
L_0012e7dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000006u, 0, 0);
    }
L_0012e7e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0012e7e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012e7e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012e7ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e80c;
        }
    }
L_0012e7f0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[4]);
    }
L_0012e7f4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012e7f8:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_0012e7fc:;
    {
        cpu->r[1] = 0x00002200u;
    }
L_0012e800:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012e804:;
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
L_0012e808:;
    {
        imp_glTexEnvi(cpu); /* tail glTexEnvi */ return;
    }
L_0012e80c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012e810:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e814u)) return;
    }
}

/* _ZN5Lib3D10SetCullingEi @ 0012e824 (arm) */
void fn_0012e824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e824:;
    {
        cpu->r[3] = 0x00001798u;
    }
L_0012e828:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012e82c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012e830:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e834:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e838u)) return;
        }
    }
L_0012e838:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0012e83c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e874;
        }
    }
L_0012e844:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_0012e848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e860;
        }
    }
L_0012e84c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0012e850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e888;
        }
    }
L_0012e854:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_0012e858:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e85c:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
L_0012e860:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_0012e864:;
    {
        cpu->r[14] = 0x0012e868u; imp_glEnable(cpu); /* glEnable */
    }
L_0012e868:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_0012e86c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e870:;
    {
        imp_glCullFace(cpu); /* tail glCullFace */ return;
    }
L_0012e874:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_0012e878:;
    {
        cpu->r[14] = 0x0012e87cu; imp_glEnable(cpu); /* glEnable */
    }
L_0012e87c:;
    {
        cpu->r[0] = 0x00000405u;
    }
L_0012e880:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e884:;
    {
        imp_glCullFace(cpu); /* tail glCullFace */ return;
    }
L_0012e888:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_0012e88c:;
    {
        cpu->r[14] = 0x0012e890u; imp_glEnable(cpu); /* glEnable */
    }
L_0012e890:;
    {
        cpu->r[0] = 0x00000404u;
    }
L_0012e894:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012e898:;
    {
        imp_glCullFace(cpu); /* tail glCullFace */ return;
    }
}

/* _ZN5Lib3D12SetAlphaTestEih @ 0012e89c (arm) */
void fn_0012e89c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e89c:;
    {
        cpu->r[3] = 0x00001790u;
    }
L_0012e8a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e8a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012e8a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0012e8ac:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0012e8b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012e8b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e8fc;
        }
    }
L_0012e8b8:;
    {
        cpu->r[3] = 0x00000207u;
    }
L_0012e8bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012e8c0:;
    {
        cpu->r[3] = 0x00001790u;
    }
L_0012e8c4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_0012e8c8:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_0012e8cc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_0012e8d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e928;
        }
    }
L_0012e8d4:;
    {
        cpu->r[0] = 0x00000bc0u;
    }
L_0012e8d8:;
    {
        cpu->r[14] = 0x0012e8dcu; imp_glEnable(cpu); /* glEnable */
    }
L_0012e8dc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_0012e8e0:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_0012e8e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012e8ecu + + 0x48u);
    }
L_0012e8e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012e8ec:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_0012e8f0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012e8f4:;
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
L_0012e8f8:;
    {
        imp_glAlphaFunc(cpu); /* tail glAlphaFunc */ return;
    }
L_0012e8fc:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_0012e900:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012e904:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0012e908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e90cu)) return;
        }
    }
L_0012e90c:;
    {
        cpu->r[3] = 0x00000207u;
    }
L_0012e910:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0012e914:;
    {
        cpu->r[3] = 0x00001790u;
    }
L_0012e918:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_0012e91c:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_0012e920:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_0012e924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e8d4;
        }
    }
L_0012e928:;
    {
        cpu->r[0] = 0x00000bc0u;
    }
L_0012e92c:;
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
L_0012e930:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _ZN5Lib3D11SetBlendingE12_GXBlendModeii @ 0012e938 (arm) */
void fn_0012e938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e938:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e93c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012e940:;
    {
        cpu->r[2] = 0x00001784u;
    }
L_0012e944:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0012e948:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0012e94c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e9a0;
        }
    }
L_0012e954:;
    {
        cpu->r[3] = 0x00001784u;
    }
L_0012e958:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e95c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012e960:;
    {
        cpu->r[3] = 0x0000178cu;
    }
L_0012e964:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_0012e968:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0012e96c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_0012e970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e980;
        }
    }
L_0012e974:;
    {
        cpu->r[0] = 0x00000be2u;
    }
L_0012e978:;
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
L_0012e97c:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
L_0012e980:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0012e984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e988u)) return;
        }
    }
L_0012e988:;
    {
        cpu->r[0] = 0x00000be2u;
    }
L_0012e98c:;
    {
        cpu->r[14] = 0x0012e990u; imp_glEnable(cpu); /* glEnable */
    }
L_0012e990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012e994:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012e998:;
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
L_0012e99c:;
    {
        imp_glBlendFunc(cpu); /* tail glBlendFunc */ return;
    }
L_0012e9a0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0012e9a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012e9a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0012e9ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e954;
        }
    }
L_0012e9b0:;
    {
        cpu->r[3] = 0x0000178cu;
    }
L_0012e9b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012e9b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0012e9bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012e954;
        }
    }
L_0012e9c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012e9c4u)) return;
    }
}

/* _ZN5Lib3D12SetDepthTestEiii @ 0012e9c4 (arm) */
void fn_0012e9c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012e9c4:;
    {
        cpu->r[12] = 0x00001778u;
    }
L_0012e9c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012e9cc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0012e9d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0012e9d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012e9d8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012e9dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0012e9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012e9f8;
        }
    }
L_0012e9e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012e9e8:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_0012e9ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ea34;
        }
    }
L_0012e9f0:;
    {
        cpu->r[0] = 0x00000b71u;
    }
L_0012e9f4:;
    {
        cpu->r[14] = 0x0012e9f8u; imp_glEnable(cpu); /* glEnable */
    }
L_0012e9f8:;
    {
        cpu->r[3] = 0x00001780u;
    }
L_0012e9fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012ea00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0012ea04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ea14;
        }
    }
L_0012ea08:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_0012ea0c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_0012ea10:;
    {
        cpu->r[14] = 0x0012ea14u; imp_glDepthMask(cpu); /* glDepthMask */
    }
L_0012ea14:;
    {
        cpu->r[3] = 0x0000177cu;
    }
L_0012ea18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012ea1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0012ea20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ea24u)) return;
        }
    }
L_0012ea24:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0012ea28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012ea2c:;
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
L_0012ea30:;
    {
        imp_glDepthFunc(cpu); /* tail glDepthFunc */ return;
    }
L_0012ea34:;
    {
        cpu->r[0] = 0x00000b71u;
    }
L_0012ea38:;
    {
        cpu->r[14] = 0x0012ea3cu; imp_glDisable(cpu); /* glDisable */
    }
L_0012ea3c:;
    {
        goto L_0012e9f8;
    }
}

/* _ZN5Lib3D14End2DRenderingEv @ 0012ea40 (arm) */
void fn_0012ea40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ea40:;
    {
        cpu->r[3] = 0x000012c4u;
    }
L_0012ea44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012ea48:;
    {
        cpu->r[5] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012ea4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012ea50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012ea54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ea58u)) return;
        }
    }
L_0012ea58:;
    {
        cpu->r[6] = 0x000011e8u;
    }
L_0012ea5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012ea60:;
    {
        cpu->r[14] = 0x0012ea64u; fn_0012e264(cpu);
    }
L_0012ea64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ea68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ea6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ea70:;
    {
        cpu->r[14] = 0x0012ea78u;
    }
L_0012ea74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ea78u)) return;
    }
L_0012ea78:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012ea7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012ea80:;
    {
        cpu->r[14] = 0x0012ea84u; fn_0012e264(cpu);
    }
L_0012ea84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ea88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ea8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ea90:;
    {
        cpu->r[14] = 0x0012ea98u;
    }
L_0012ea94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ea98u)) return;
    }
L_0012ea98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012ea9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012eaa0:;
    {
        cpu->r[2] = 0x00000203u;
    }
L_0012eaa4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0012eaa8:;
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
L_0012eaac:;
    {
        return fn_0012e9c4(cpu);
    }
}

/* _ZN5Lib3D8ApplyFOVEv @ 0012eab0 (arm) */
void fn_0012eab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012eab0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0012eab4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012eab8:;
    {
        cpu->r[6] = 0x000011e8u;
    }
L_0012eabc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012eac0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012eac4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00001300u, 0, 0);
    }
L_0012eac8:;
    {
        cpu->r[14] = 0x0012eaccu; fn_0012e264(cpu);
    }
L_0012eacc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ead0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0012ead4:;
    {
        cpu->r[7] = rd32(0x0012eadcu + + 0xa8u);
    }
L_0012ead8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012eadc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012eae0:;
    {
        cpu->r[7] = add_flags(cpu, 0x0012eae8u, cpu->r[7], 0, 0);
    }
L_0012eae4:;
    {
        cpu->r[14] = 0x0012eaecu;
    }
L_0012eae8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eaecu)) return;
    }
L_0012eaec:;
    {
        cpu->r[2] = 0x00001290u;
    }
L_0012eaf0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012eaf4:;
    {
        cpu->r[3] = 0x42000000u;
    }
L_0012eaf8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012eafc:;
    {
        cpu->r[2] = 0x00001294u;
    }
L_0012eb00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012eb08u + + 0x78u);
    }
L_0012eb04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012eb08:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012eb0c:;
    {
        cpu->r[14] = 0x0012eb10u; fn_00154cb0(cpu);
    }
L_0012eb10:;
    {
        cpu->r[3] = rd32(0x0012eb18u + + 0x70u);
    }
L_0012eb14:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012eb18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012eb1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0012eb20:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012eb24:;
    {
        cpu->r[14] = 0x0012eb28u; fn_0009b31c(cpu);
    }
L_0012eb28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012eb2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012eb30:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012eb34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012eb38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012eb3c:;
    {
        cpu->r[14] = 0x0012eb44u;
    }
L_0012eb40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eb44u)) return;
    }
L_0012eb44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012eb48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012eb4c:;
    {
        cpu->r[14] = 0x0012eb50u; fn_0012e264(cpu);
    }
L_0012eb50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012eb54:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012eb58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012eb5c:;
    {
        cpu->r[14] = 0x0012eb64u;
    }
L_0012eb60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eb64u)) return;
    }
L_0012eb64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012eb68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012eb6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012eb70:;
    {
        cpu->r[14] = 0x0012eb78u;
    }
L_0012eb74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eb78u)) return;
    }
L_0012eb78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012eb7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eb80u)) return;
    }
}

/* _ZN5Lib3D11PushFarClipEf @ 0012eb8c (arm) */
void fn_0012eb8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012eb8c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012eb90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012eb94:;
    {
        cpu->r[7] = 0x000011e8u;
    }
L_0012eb98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012eb9c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0012eba0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012eba4:;
    {
        cpu->r[14] = 0x0012eba8u; fn_0012e264(cpu);
    }
L_0012eba8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012ebac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001300u, 0, 0);
    }
L_0012ebb0:;
    {
        cpu->r[6] = rd32(0x0012ebb8u + + 0x84u);
    }
L_0012ebb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ebb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0012ebbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ebc0:;
    {
        cpu->r[6] = add_flags(cpu, 0x0012ebc8u, cpu->r[6], 0, 0);
    }
L_0012ebc4:;
    {
        cpu->r[14] = 0x0012ebccu;
    }
L_0012ebc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ebccu)) return;
    }
L_0012ebcc:;
    {
        cpu->r[2] = 0x00001290u;
    }
L_0012ebd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012ebd4:;
    {
        cpu->r[3] = 0x42000000u;
    }
L_0012ebd8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012ebdc:;
    {
        cpu->r[2] = 0x00001294u;
    }
L_0012ebe0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012ebe4:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0012ebe8:;
    {
        cpu->r[14] = 0x0012ebecu; fn_00154cb0(cpu);
    }
L_0012ebec:;
    {
        cpu->r[3] = rd32(0x0012ebf4u + + 0x4cu);
    }
L_0012ebf0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012ebf4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012ebf8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0012ebfc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012ec00:;
    {
        cpu->r[14] = 0x0012ec04u; fn_0009b31c(cpu);
    }
L_0012ec04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012ec08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012ec0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012ec10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ec14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ec18:;
    {
        cpu->r[14] = 0x0012ec20u;
    }
L_0012ec1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ec20u)) return;
    }
L_0012ec20:;
    {
        cpu->r[3] = 0x00001310u;
    }
L_0012ec24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012ec28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012ec2c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_0012ec30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012ec34:;
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
L_0012ec38:;
    {
        return fn_0012e264(cpu);
    }
}

/* _ZN5Lib3D6SetFOVEff @ 0012ec44 (arm) */
void fn_0012ec44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ec44:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0012ec48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ec50u + + 0xb0u);
    }
L_0012ec4c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0012ec50:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012ec58u + + 0xacu);
    }
L_0012ec54:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_0012ec58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012ec5c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012ec60:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0012ec64:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_0012ec68:;
    {
        cpu->r[3] = 0x00001294u;
    }
L_0012ec6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012ec70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00001280u, 0, 0);
    }
L_0012ec74:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012ec78:;
    {
        cpu->r[3] = 0x00001298u;
    }
L_0012ec7c:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_0012ec80:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012ec84:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0012ec88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0012ec8c:;
    {
        cpu->r[14] = 0x0012ec90u; imp_tanf(cpu); /* tanf */
    }
L_0012ec90:;
    {
        cpu->r[3] = 0x000012a4u;
    }
L_0012ec94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ec9cu + + 0x6cu);
    }
L_0012ec98:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012ec9c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012eca0:;
    {
        cpu->r[3] = 0x000012b4u;
    }
L_0012eca4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ecacu + + 0x60u);
    }
L_0012eca8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ecac:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012ecb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ecb8u + + 0x58u);
    }
L_0012ecb4:;
    {
        cpu->r[3] = 0x000012acu;
    }
L_0012ecb8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ecbc:;
    {
        cpu->r[3] = 0x000012b8u;
    }
L_0012ecc0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ecc4:;
    {
        cpu->r[3] = 0x000012a8u;
    }
L_0012ecc8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0012eccc:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_0012ecd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0012ecd4:;
    {
        vfp_vdiv(cpu, 14, 15, 16);
    }
L_0012ecd8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012ecdc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ece0:;
    {
        cpu->r[3] = 0x000012b0u;
    }
L_0012ece4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012ece8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ecec:;
    {
        cpu->r[14] = 0x0012ecf0u; fn_00155f80(cpu);
    }
L_0012ecf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_0012ecf4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012ecf8:;
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
L_0012ecfc:;
    {
        return fn_00155f80(cpu);
    }
}

/* _ZN5Lib3D20IsIntersectionOccursEP17StaticSceneObjectS1_ @ 0012ed14 (arm) */
void fn_0012ed14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ed14:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0012ed18:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0012ed1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012ed20:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012ed24:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012ed28:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012ed2c:;
    {
        cpu->r[14] = 0x0012ed30u; fn_000b5a8c(cpu);
    }
L_0012ed30:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012ed34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012ed38:;
    {
        cpu->r[14] = 0x0012ed3cu; fn_000b5a8c(cpu);
    }
L_0012ed3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18cu);
    }
L_0012ed40:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012ed44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18cu);
    }
L_0012ed48:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012ed4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012ed50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012ed54:;
    {
        cpu->r[14] = 0x0012ed58u; fn_0012de3c(cpu);
    }
L_0012ed58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012ed5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ed60u)) return;
    }
}

/* _ZN5Lib3D12SetColorMaskEbb @ 0012ed60 (arm) */
void fn_0012ed60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ed60:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0012ed64:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012ed68:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012ed6c:;
    {
        imp_glColorMask(cpu); /* tail glColorMask */ return;
    }
}

/* _ZN5Lib3D11SetViewportEiiii @ 0012ed70 (arm) */
void fn_0012ed70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ed70:;
    {
        cpu->r[12] = rd32(0x0012ed78u + + 0x30u);
    }
L_0012ed74:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012ed78:;
    {
        cpu->r[1] = rd32(0x0012ed80u + + 0x2cu);
    }
L_0012ed7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012ed84u, cpu->r[12], 0, 0);
    }
L_0012ed80:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0012ed84:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0012ed88:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012ed8c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0012ed90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0012ed94:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0012ed98:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0012ed9c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0012eda0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0012eda4:;
    {
        imp_glViewport(cpu); /* tail glViewport */ return;
    }
}

/* _ZN5Lib3D14BeginRenderingEv @ 0012edb0 (arm) */
void fn_0012edb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012edb0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0012edb4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0012edb8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0012edbc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0012edc4u + + 0xfcu);
    }
L_0012edc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012edc4:;
    {
        cpu->r[14] = 0x0012edc8u; fn_0012dfc8(cpu);
    }
L_0012edc8:;
    {
        cpu->r[0] = 0x3f800000u;
    }
L_0012edcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012edd0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012edd4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012edd8:;
    {
        cpu->r[14] = 0x0012eddcu; imp_glClearColor(cpu); /* glClearColor */
    }
L_0012eddc:;
    {
        cpu->r[0] = 0x00004100u;
    }
L_0012ede0:;
    {
        cpu->r[14] = 0x0012ede4u; imp_glClear(cpu); /* glClear */
    }
L_0012ede4:;
    {
        cpu->r[6] = 0x000011e8u;
    }
L_0012ede8:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_0012edec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001300u, 0, 0);
    }
L_0012edf0:;
    {
        cpu->r[14] = 0x0012edf4u; imp_glEnable(cpu); /* glEnable */
    }
L_0012edf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012edf8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012edfc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0012ee00:;
    {
        cpu->r[14] = 0x0012ee04u; fn_0012e264(cpu);
    }
L_0012ee04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ee08:;
    {
        cpu->r[7] = rd32(0x0012ee10u + + 0xb4u);
    }
L_0012ee0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ee10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ee14:;
    {
        cpu->r[7] = add_flags(cpu, 0x0012ee1cu, cpu->r[7], 0, 0);
    }
L_0012ee18:;
    {
        cpu->r[14] = 0x0012ee20u;
    }
L_0012ee1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ee20u)) return;
    }
L_0012ee20:;
    {
        cpu->r[2] = 0x00001290u;
    }
L_0012ee24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012ee28:;
    {
        cpu->r[3] = 0x42000000u;
    }
L_0012ee2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012ee30:;
    {
        cpu->r[2] = 0x00001294u;
    }
L_0012ee34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012ee38:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0012ee3c:;
    {
        cpu->r[14] = 0x0012ee40u; fn_00154cb0(cpu);
    }
L_0012ee40:;
    {
        cpu->r[3] = rd32(0x0012ee48u + + 0x80u);
    }
L_0012ee44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012ee48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012ee4c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0012ee50:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012ee54:;
    {
        cpu->r[14] = 0x0012ee58u; fn_0009b31c(cpu);
    }
L_0012ee58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ee5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012ee60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012ee64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ee68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ee6c:;
    {
        cpu->r[14] = 0x0012ee74u;
    }
L_0012ee70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ee74u)) return;
    }
L_0012ee74:;
    {
        cpu->r[3] = 0x00001310u;
    }
L_0012ee78:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0012ee7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012ee80:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0012ee84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012ee88:;
    {
        cpu->r[14] = 0x0012ee8cu; fn_0012e264(cpu);
    }
L_0012ee8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012ee90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012ee94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012ee98:;
    {
        cpu->r[14] = 0x0012eea0u;
    }
L_0012ee9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eea0u)) return;
    }
L_0012eea0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012eea4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012eea8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012eeac:;
    {
        cpu->r[14] = 0x0012eeb4u;
    }
L_0012eeb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eeb4u)) return;
    }
L_0012eeb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012eeb8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0012eebc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012eec0u)) return;
    }
}

/* _ZN5Lib3D9SetAmbClrEiR7GXColor @ 0012eecc (arm) */
void fn_0012eecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012eecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000480u, 0, 0);
    }
L_0012eed0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0012eed4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0012eed8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012eedc:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012eee0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0012eee4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0012eee8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0012eeec:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0012eef0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0012eef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012ef78;
        }
    }
L_0012eef8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012eefc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0012ef00:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0012ef04:;
    {
        cpu->r[14] = 0x0012ef08u; imp_memcpy(cpu); /* memcpy */
    }
L_0012ef08:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3u);
    }
L_0012ef0c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0012ef10:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_0012ef14:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0012ef18:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012ef1c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
    }
L_0012ef20:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012ef24:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x2u);
    }
L_0012ef28:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[4];
    }
L_0012ef2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012ef34u + + 0x4cu);
    }
L_0012ef30:;
    {
        cpu->r[1] = 0x00000404u;
    }
L_0012ef34:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012ef38:;
    {
        cpu->r[0] = 0x00000405u;
    }
L_0012ef3c:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_0012ef40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0012ef44:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_0012ef48:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_0012ef4c:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_0012ef50:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_0012ef54:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_0012ef58:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_0012ef5c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0012ef60:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0012ef64:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0012ef68:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0012ef6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012ef70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012ef74:;
    {
        cpu->r[14] = 0x0012ef78u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_0012ef78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012ef7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012ef80u)) return;
    }
}

/* _ZN5Lib3D9SetMtlClrEiR7GXColor @ 0012ef84 (arm) */
void fn_0012ef84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012ef84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000480u, 0, 0);
    }
L_0012ef88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_0012ef8c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0012ef90:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012ef94:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012ef98:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0012ef9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0012efa0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0012efa4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0012efa8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0012efac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f030;
        }
    }
L_0012efb0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012efb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0012efb8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0012efbc:;
    {
        cpu->r[14] = 0x0012efc0u; imp_memcpy(cpu); /* memcpy */
    }
L_0012efc0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3u);
    }
L_0012efc4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0012efc8:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_0012efcc:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0012efd0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0012efd4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
    }
L_0012efd8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0012efdc:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x2u);
    }
L_0012efe0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[4];
    }
L_0012efe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0012efecu + + 0x4cu);
    }
L_0012efe8:;
    {
        cpu->r[1] = 0x00000404u;
    }
L_0012efec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012eff0:;
    {
        cpu->r[0] = 0x00000405u;
    }
L_0012eff4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_0012eff8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0012effc:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_0012f000:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_0012f004:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_0012f008:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_0012f00c:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_0012f010:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_0012f014:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0012f018:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0012f01c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0012f020:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0012f024:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012f028:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f02c:;
    {
        cpu->r[14] = 0x0012f030u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_0012f030:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012f034:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f038u)) return;
    }
}

/* _ZN5Lib3D12SetNormalMtxEiP7CMatrixf @ 0012f03c (arm) */
void fn_0012f03c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f03c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0012f040:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0012f044:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012f04cu + + 0x28u);
    }
L_0012f048:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012f04c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0012f050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000ea0u, 0, 0);
    }
L_0012f054:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0012f058:;
    {
        vfp_sync_flags(cpu);
    }
L_0012f05c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0012f068;
        }
    }
L_0012f060:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0012f064:;
    {
        return fn_00153360(cpu);
    }
L_0012f068:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0012f06c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0012f070:;
    {
        return fn_001532b4(cpu);
    }
}

/* _ZN5Lib3D13SetPaletteMtxEiP7CMatrixb @ 0012f078 (arm) */
void fn_0012f078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f078:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012f07c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012f080:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012f084:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f088:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012f08c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0012f090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012f094:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0012f098:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012f09c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f0a4;
        }
    }
L_0012f0a0:;
    {
        cpu->r[14] = 0x0012f0a4u; fn_00147c60(cpu);
    }
L_0012f0a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012f0a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f108;
        }
    }
L_0012f0ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012f0b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f0b4u)) return;
        }
    }
L_0012f0b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012f0b8:;
    {
        cpu->r[14] = 0x0012f0bcu; fn_00153efc(cpu);
    }
L_0012f0bc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0012f0c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000011c0u, 0, 0);
    }
L_0012f0c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_0012f0c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_0012f0cc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012f0d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0012f0d4:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f0d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0012f0dc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f0e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0012f0e4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f0e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0012f0ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0012f0f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012f0f4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f0f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0012f0fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f0d0;
        }
    }
L_0012f100:;
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
L_0012f104:;
    {
        imp_glLoadMatrixf(cpu); /* tail glLoadMatrixf */ return;
    }
L_0012f108:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012f10c:;
    {
        cpu->r[14] = 0x0012f110u; imp_glCurrentPaletteMatrixOES(cpu); /* glCurrentPaletteMatrixOES */
    }
L_0012f110:;
    {
        goto L_0012f0b4;
    }
}

/* _ZN5Lib3D17TempBindTexture2DEi @ 0012f114 (arm) */
void fn_0012f114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f114:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0012f118:;
    {
        cpu->r[3] = 0x00001244u;
    }
L_0012f11c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012f120:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0012f124:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_0012f128:;
    {
        imp_glBindTexture(cpu); /* tail glBindTexture */ return;
    }
}

/* _ZN5Lib3D12EnableTexMapEiP7Texturei @ 0012f12c (arm) */
void fn_0012f12c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f12c:;
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
L_0012f130:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0012f134:;
    {
        cpu->r[4] = 0x00001284u;
    }
L_0012f138:;
    {
        cpu->r[0] = rd32(0x0012f140u + + 0xe0u);
    }
L_0012f13c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0012f140:;
    {
        cpu->r[5] = rd8(cpu->r[12] + cpu->r[4]);
    }
L_0012f144:;
    {
        cpu->r[0] = add_flags(cpu, 0x0012f14cu, cpu->r[0], 0, 0);
    }
L_0012f148:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0012f14c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012f150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f1dc;
        }
    }
L_0012f154:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000490u, 0, 0);
    }
L_0012f158:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_0012f15c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0012f160:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0012f164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012f168:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012f16c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[5];
        }
    }
L_0012f170:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_0012f174:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0012f178:;
    {
        cpu->r[10] = rd32(0x0012f180u + + 0xa4u);
    }
L_0012f17c:;
    {
        cpu->r[3] = 0x00001240u;
    }
L_0012f180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012f184:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0012f188:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0012f18c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[7]);
    }
L_0012f190:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_0012f194:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0012f198:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_0012f19c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0012f1a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0012f1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f1c4;
        }
    }
L_0012f1a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00008400u, 0, 0);
    }
L_0012f1ac:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_0012f1b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0012f1b4:;
    {
        cpu->r[14] = 0x0012f1b8u; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_0012f1b8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0012f1bc:;
    {
        cpu->r[14] = 0x0012f1c0u; imp_glEnable(cpu); /* glEnable */
    }
L_0012f1c0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_0012f1c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012f1c8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0012f1cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[5];
        }
    }
L_0012f1d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0012f1d4:;
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
L_0012f1d8:;
    {
        imp_glBindTexture(cpu); /* tail glBindTexture */ return;
    }
L_0012f1dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000490u, 0, 0);
    }
L_0012f1e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012f1e4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0012f1e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0012f1ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
        }
    }
L_0012f1f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
        }
    }
L_0012f1f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f164;
        }
    }
L_0012f1f8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_0012f1fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012f200:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0012f204:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012f208:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[5];
        }
    }
L_0012f20c:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x4u);
    }
L_0012f210:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0012f214:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_0012f218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f164;
        }
    }
L_0012f21c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f220u)) return;
    }
}

/* _ZN5Lib3D14CopyTexFromEFBEP7Textureii9_GXTexFmt @ 0012f228 (arm) */
void fn_0012f228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f228:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012f22c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012f230:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012f234:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f238:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0012f23c:;
    {
        cpu->r[14] = 0x0012f240u; fn_0012f12c(cpu);
    }
L_0012f240:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0012f244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f25c;
        }
    }
L_0012f248:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_0012f24c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f250u)) return;
        }
    }
L_0012f250:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_0012f254:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012f258:;
    {
        imp_glClear(cpu); /* tail glClear */ return;
    }
L_0012f25c:;
    {
        cpu->r[14] = 0x0012f260u; imp_glFinish(cpu); /* glFinish */
    }
L_0012f260:;
    {
        cpu->r[0] = 0x00004100u;
    }
L_0012f264:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0012f268:;
    {
        imp_glClear(cpu); /* tail glClear */ return;
    }
}

/* _ZN5Lib3D19SetShearMatrixFloatEPf @ 0012f26c (arm) */
void fn_0012f26c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f26c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0012f270:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012f274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000016f4u;
        }
    }
L_0012f278:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012f27c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[4]);
        }
    }
L_0012f280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f2bc;
        }
    }
L_0012f284:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[4] = base + 16u;
    }
L_0012f288:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x000016c0u, 0, 0);
    }
L_0012f28c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_0012f290:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_0012f294:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0012f298:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0012f29c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[4] = base + 16u;
    }
L_0012f2a0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0012f2a4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[4] = base + 16u;
    }
L_0012f2a8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0012f2ac:;
    {
        uint32_t base = cpu->r[4];
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
L_0012f2b0:;
    {
        cpu->r[4] = 0x000016f4u;
    }
L_0012f2b4:;
    {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[5]);
    }
L_0012f2b8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0012f2bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0012f2c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Lib3D14RegisterVtxFmtEP16GXVtxAttrFmtList @ 0012f2c4 (arm) */
void fn_0012f2c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f2c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xe84u);
    }
L_0012f2c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012f2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012f2d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001d8u, 1, 0);
    }
L_0012f2d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f2d8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0012f2dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012f378;
        }
    }
L_0012f2e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0012f2e4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0012f2e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012f2ec:;
    {
        goto L_0012f300;
    }
L_0012f2f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe84u);
    }
L_0012f2f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012f2f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0012f2fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012f338;
        }
    }
L_0012f300:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x000001d4u, 0, 0);
    }
L_0012f304:;
    {
        cpu->r[2] = 0x000001d0u;
    }
L_0012f308:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012f30c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0012f310:;
    {
        cpu->r[14] = 0x0012f314u; imp_memcpy(cpu); /* memcpy */
    }
L_0012f314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f318:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012f31c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0012f320:;
    {
        cpu->r[14] = 0x0012f324u; fn_0012dd68(cpu);
    }
L_0012f324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012f328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f2f0;
        }
    }
L_0012f32c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012f330:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001d8u, 0, 0);
    }
L_0012f334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f338u)) return;
    }
L_0012f338:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0012f33c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012f378;
        }
    }
L_0012f340:;
    {
        cpu->r[1] = rd32(0x0012f348u + + 0x7cu);
    }
L_0012f344:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012f348:;
    {
        cpu->r[12] = rd32(0x0012f350u + + 0x78u);
    }
L_0012f34c:;
    {
        cpu->r[14] = 0x000006a1u;
    }
L_0012f350:;
    {
        cpu->r[2] = rd32(0x0012f358u + + 0x74u);
    }
L_0012f354:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012f35cu, cpu->r[1], 0, 0);
    }
L_0012f358:;
    {
        cpu->r[3] = rd32(0x0012f360u + + 0x70u);
    }
L_0012f35c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012f364u, cpu->r[12], 0, 0);
    }
L_0012f360:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012f368u, cpu->r[2], 0, 0);
    }
L_0012f364:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000058u, 0, 0);
    }
L_0012f368:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012f370u, cpu->r[3], 0, 0);
    }
L_0012f36c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0012f370:;
    {
        cpu->r[14] = 0x0012f374u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012f374:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe84u);
    }
L_0012f378:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0012f37c:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_0012f380:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000010u;
        }
    }
L_0012f384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f3a0;
        }
    }
L_0012f388:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012f38c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[2], 2, 4u, &shc));
    }
L_0012f390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012f394:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_0012f398:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f38c;
        }
    }
L_0012f39c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[2] = v;
    }
L_0012f3a0:;
    {
        cpu->r[0] = 0x000001d0u;
    }
L_0012f3a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012f3a8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[4]; cpu->r[3] = v;
    }
L_0012f3ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0012f3b0:;
    {
        cpu->r[14] = 0x0012f3b4u; imp_memcpy(cpu); /* memcpy */
    }
L_0012f3b4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xe84u);
    }
L_0012f3b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012f3bc:;
    {
        wr32(cpu->r[4] + + 0xe84u, cpu->r[3]);
    }
L_0012f3c0:;
    {
        goto L_0012f32c;
    }
}
