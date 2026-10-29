#include "functions.h"

/* _ZN18GS_ReplayMenuLoginD1Ev @ 0011eaec (arm) */
void fn_0011eaec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011eaec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011eaf0:;
    {
        cpu->r[4] = rd32(0x0011eaf8u + + 0x38u);
    }
L_0011eaf4:;
    {
        cpu->r[3] = rd32(0x0011eafcu + + 0x38u);
    }
L_0011eaf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011eafc:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011eb04u, cpu->r[4], 0, 0);
    }
L_0011eb00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011eb04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011eb08:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0011eb0c:;
    {
        cpu->r[14] = 0x0011eb10u; fn_0011e7c4(cpu);
    }
L_0011eb10:;
    {
        cpu->r[3] = rd32(0x0011eb18u + + 0x20u);
    }
L_0011eb14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eb18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011eb1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011eb20:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011eb24:;
    {
        cpu->r[14] = 0x0011eb28u; fn_000ec21c(cpu);
    }
L_0011eb28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eb2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011eb30u)) return;
    }
}

/* _ZN18GS_ReplayMenuLoginD0Ev @ 0011eb3c (arm) */
void fn_0011eb3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011eb3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011eb40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011eb44:;
    {
        cpu->r[14] = 0x0011eb48u; fn_0011eaec(cpu);
    }
L_0011eb48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011eb4c:;
    {
        cpu->r[14] = 0x0011eb50u; fn_0018ba20(cpu);
    }
L_0011eb50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011eb54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011eb58u)) return;
    }
}

/* _ZN18GS_ReplayMenuLoginD2Ev @ 0011eb58 (arm) */
void fn_0011eb58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011eb58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011eb5c:;
    {
        cpu->r[4] = rd32(0x0011eb64u + + 0x38u);
    }
L_0011eb60:;
    {
        cpu->r[3] = rd32(0x0011eb68u + + 0x38u);
    }
L_0011eb64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011eb68:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011eb70u, cpu->r[4], 0, 0);
    }
L_0011eb6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011eb70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011eb74:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0011eb78:;
    {
        cpu->r[14] = 0x0011eb7cu; fn_0011e7c4(cpu);
    }
L_0011eb7c:;
    {
        cpu->r[3] = rd32(0x0011eb84u + + 0x20u);
    }
L_0011eb80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eb84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011eb88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011eb8c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011eb90:;
    {
        cpu->r[14] = 0x0011eb94u; fn_000ec21c(cpu);
    }
L_0011eb94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eb98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011eb9cu)) return;
    }
}

/* _ZN18GS_ReplayMenuLoginC1Ev @ 0011eba8 (arm) */
void fn_0011eba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011eba8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011ebac:;
    {
        cpu->r[4] = rd32(0x0011ebb4u + + 0x20u);
    }
L_0011ebb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ebb4:;
    {
        cpu->r[14] = 0x0011ebb8u; fn_0010ffa8(cpu);
    }
L_0011ebb8:;
    {
        cpu->r[3] = rd32(0x0011ebc0u + + 0x18u);
    }
L_0011ebbc:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ebc4u, cpu->r[4], 0, 0);
    }
L_0011ebc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ebc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ebc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011ebcc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011ebd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ebd4u)) return;
    }
}

/* _ZN18GS_ReplayMenuLoginC2Ev @ 0011ebdc (arm) */
void fn_0011ebdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ebdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011ebe0:;
    {
        cpu->r[4] = rd32(0x0011ebe8u + + 0x20u);
    }
L_0011ebe4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ebe8:;
    {
        cpu->r[14] = 0x0011ebecu; fn_0010ffa8(cpu);
    }
L_0011ebec:;
    {
        cpu->r[3] = rd32(0x0011ebf4u + + 0x18u);
    }
L_0011ebf0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ebf8u, cpu->r[4], 0, 0);
    }
L_0011ebf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ebf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ebfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011ec00:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011ec04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ec08u)) return;
    }
}

/* _ZN18GS_ReplayMenuLogin6RenderEv @ 0011ec10 (arm) */
void fn_0011ec10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ec10:;
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
L_0011ec14:;
    {
        cpu->r[5] = rd32(0x0011ec1cu + + 0x1b0u);
    }
L_0011ec18:;
    {
        cpu->r[8] = rd32(0x0011ec20u + + 0x1b0u);
    }
L_0011ec1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011ec20:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011ec28u, cpu->r[5], 0, 0);
    }
L_0011ec24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ec28:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0011ec2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011ec30:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ec34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ed4c;
        }
    }
L_0011ec38:;
    {
        cpu->r[7] = rd32(0x0011ec40u + + 0x194u);
    }
L_0011ec3c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011ec40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011ec44:;
    {
        cpu->r[14] = 0x0011ec48u; fn_00096a08(cpu);
    }
L_0011ec48:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011ec4c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ec50:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ec54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011ec58:;
    {
        cpu->r[14] = 0x0011ec5cu; fn_0018aa44(cpu);
    }
L_0011ec5c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0011ec60:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011ec64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ec68:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0011ec6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ed90;
        }
    }
L_0011ec70:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011ec74:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011ec78:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0011ec7c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011ec80:;
    {
        cpu->r[14] = 0x0011ec84u; fn_0018aa44(cpu);
    }
L_0011ec84:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011ec88:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011ec8c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011ec90:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0011ec94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011ec98:;
    {
        cpu->r[14] = 0x0011ec9cu; fn_000ad8a0(cpu);
    }
L_0011ec9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011eca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011eca4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011ecd0;
        }
    }
L_0011eca8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011ecac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011ecb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011ecb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ecb8:;
    {
        cpu->r[14] = 0x0011ecc0u;
    }
L_0011ecbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ecc0u)) return;
    }
L_0011ecc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011ecc4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011ecc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011eccc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011eca8;
        }
    }
L_0011ecd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ecd4:;
    {
        cpu->r[1] = 0x0000065cu;
    }
L_0011ecd8:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0011ecdc:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_0011ece0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011ece4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011ece8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011ecec:;
    {
        cpu->r[14] = 0x0011ecf0u; fn_000ad200(cpu);
    }
L_0011ecf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ecf4:;
    {
        cpu->r[1] = 0x0000065du;
    }
L_0011ecf8:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0011ecfc:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_0011ed00:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011ed04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011ed08:;
    {
        cpu->r[14] = 0x0011ed0cu; fn_000ad200(cpu);
    }
L_0011ed0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ed10:;
    {
        cpu->r[1] = 0x0000065fu;
    }
L_0011ed14:;
    {
        cpu->r[2] = 0x000000fau;
    }
L_0011ed18:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_0011ed1c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011ed20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011ed24:;
    {
        cpu->r[14] = 0x0011ed28u; fn_000ad200(cpu);
    }
L_0011ed28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ed2c:;
    {
        cpu->r[1] = 0x0000065eu;
    }
L_0011ed30:;
    {
        cpu->r[2] = 0x000000fau;
    }
L_0011ed34:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_0011ed38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011ed3c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011ed40:;
    {
        cpu->r[14] = 0x0011ed44u; fn_000ad200(cpu);
    }
L_0011ed44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011ed48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ed4cu)) return;
    }
L_0011ed4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ed50:;
    {
        cpu->r[14] = 0x0011ed54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ed54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ed58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ec38;
        }
    }
L_0011ed5c:;
    {
        cpu->r[7] = rd32(0x0011ed64u + + 0x70u);
    }
L_0011ed60:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011ed64:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011ed68:;
    {
        cpu->r[14] = 0x0011ed6cu; fn_0018aa20(cpu);
    }
L_0011ed6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ed70:;
    {
        cpu->r[14] = 0x0011ed74u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011ed74:;
    {
        cpu->r[3] = rd32(0x0011ed7cu + + 0x5cu);
    }
L_0011ed78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011ed7c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011ed80:;
    {
        cpu->r[3] = rd32(0x0011ed88u + + 0x54u);
    }
L_0011ed84:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011ed88:;
    {
        cpu->r[14] = 0x0011ed8cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011ed8c:;
    {
        goto L_0011ec3c;
    }
L_0011ed90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011ed94:;
    {
        cpu->r[14] = 0x0011ed98u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ed98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ed9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ec70;
        }
    }
L_0011eda0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011eda4:;
    {
        cpu->r[14] = 0x0011eda8u; fn_0018aa20(cpu);
    }
L_0011eda8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011edac:;
    {
        cpu->r[14] = 0x0011edb0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011edb0:;
    {
        cpu->r[3] = rd32(0x0011edb8u + + 0x20u);
    }
L_0011edb4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011edb8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011edbc:;
    {
        cpu->r[3] = rd32(0x0011edc4u + + 0x18u);
    }
L_0011edc0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011edc4:;
    {
        cpu->r[14] = 0x0011edc8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011edc8:;
    {
        goto L_0011ec70;
    }
}

/* init_array_37 @ 0011ede0 (arm) */
void fn_0011ede0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ede0:;
    {
        cpu->r[3] = rd32(0x0011ede8u + + 0x20u);
    }
L_0011ede4:;
    {
        cpu->r[1] = rd32(0x0011edecu + + 0x20u);
    }
L_0011ede8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011edf0u, cpu->r[3], 0, 0);
    }
L_0011edec:;
    {
        cpu->r[2] = rd32(0x0011edf4u + + 0x1cu);
    }
L_0011edf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0011edf4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011edfcu, cpu->r[2], 0, 0);
    }
L_0011edf8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011edfc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0011ee00:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0011ee04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_ReplayMenuLoginPanel6UpdateEv @ 0011ee14 (arm) */
void fn_0011ee14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ee14:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0011ee18:;
    {
        cpu->r[4] = rd32(0x0011ee20u + + 0x4b0u);
    }
L_0011ee1c:;
    {
        cpu->r[6] = rd32(0x0011ee24u + + 0x4b0u);
    }
L_0011ee20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000aa0u, 1, 0);
    }
L_0011ee24:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ee2cu, cpu->r[4], 0, 0);
    }
L_0011ee28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x80u);
    }
L_0011ee2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ee30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011ee34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011ee38:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011ee3c:;
    {
        wr32(cpu->r[13] + + 0xa9cu, cpu->r[2]);
    }
L_0011ee40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ee7c;
        }
    }
L_0011ee44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0011ee48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ee58;
        }
    }
L_0011ee4c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x84u);
    }
L_0011ee50:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0011ee54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011eeac;
        }
    }
L_0011ee58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ee5c:;
    {
        cpu->r[14] = 0x0011ee60u; fn_000a6c08(cpu);
    }
L_0011ee60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011ee64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa9cu);
    }
L_0011ee68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011ee6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011ee70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011f2cc;
        }
    }
L_0011ee74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000aa0u, 0, 0);
    }
L_0011ee78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ee7cu)) return;
    }
L_0011ee7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9dcu);
    }
L_0011ee80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0011ee84:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0011f008;
        case 1: goto L_0011f07c;
        case 2: goto L_0011f088;
        case 3: goto L_0011ee58;
        case 4: goto L_0011ee58;
        case 5: goto L_0011ee58;
        case 6: goto L_0011f0e0;
        case 7: goto L_0011ef0c;
        default: guest_unimplemented(cpu, 0x0011ee84u); return; }
        }
    }
L_0011ee88:;
    {
        goto L_0011ee58;
    }
L_0011eeac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88cu);
    }
L_0011eeb0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011eeb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0011eeb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f178;
        }
    }
L_0011eebc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9e0u);
    }
L_0011eec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011eec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ee58;
        }
    }
L_0011eec8:;
    {
        cpu->r[2] = rd32(0x0011eed0u + + 0x408u);
    }
L_0011eecc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011eed0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011eed4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0011eed8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011eedc:;
    {
        wr8(cpu->r[2] + + 0x4ccu, cpu->r[3]);
    }
L_0011eee0:;
    {
        cpu->r[14] = 0x0011eee4u; fn_000f34e8(cpu);
    }
L_0011eee4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0011eee8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011eeec:;
    {
        cpu->r[14] = 0x0011eef0u; fn_000f34e8(cpu);
    }
L_0011eef0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0011eef4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011eef8:;
    {
        cpu->r[14] = 0x0011eefcu; fn_000f34e8(cpu);
    }
L_0011eefc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0011ef00:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011ef04:;
    {
        cpu->r[14] = 0x0011ef08u; fn_000f34e8(cpu);
    }
L_0011ef08:;
    {
        goto L_0011ee60;
    }
L_0011ef0c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011ef10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0011ef14:;
    {
        cpu->r[14] = 0x0011ef18u; fn_001933d4(cpu);
    }
L_0011ef18:;
    {
        cpu->r[3] = rd32(0x0011ef20u + + 0x3b8u);
    }
L_0011ef1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ef20:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0011ef24:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011ef28:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011ef2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011ef30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011ef34:;
    {
        cpu->r[14] = 0x0011ef3cu;
    }
L_0011ef38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ef3cu)) return;
    }
L_0011ef3c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011ef40:;
    {
        cpu->r[1] = 0x0000e2b2u;
    }
L_0011ef44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_0011ef48:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0011ef4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0011ef50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0011ef54:;
    {
        cpu->r[14] = 0x0011ef58u; fn_000ae4b0(cpu);
    }
L_0011ef58:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011ef5c:;
    {
        cpu->r[1] = 0x0000e3b2u;
    }
L_0011ef60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000790u, 0, 0);
    }
L_0011ef64:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0011ef68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0011ef6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0011ef70:;
    {
        cpu->r[14] = 0x0011ef74u; fn_000ae4b0(cpu);
    }
L_0011ef74:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0011ef78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000620u, 0, 0);
    }
L_0011ef7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0011ef80:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0011ef84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000b2u, 0, 0);
    }
L_0011ef88:;
    {
        cpu->r[14] = 0x0011ef8cu; fn_000ae4b0(cpu);
    }
L_0011ef8c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011ef90:;
    {
        cpu->r[1] = 0x0000e5b2u;
    }
L_0011ef94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000420u, 0, 0);
    }
L_0011ef98:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0011ef9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0011efa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0011efa4:;
    {
        cpu->r[14] = 0x0011efa8u; fn_000ae4b0(cpu);
    }
L_0011efa8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011efac:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_0011efb0:;
    {
        cpu->r[1] = rd32(0x0011efb8u + + 0x324u);
    }
L_0011efb4:;
    {
        cpu->r[12] = rd32(0x0011efbcu + + 0x324u);
    }
L_0011efb8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0011efbc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011efc0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011efc8u, cpu->r[1], 0, 0);
    }
L_0011efc4:;
    {
        cpu->r[2] = rd32(0x0011efccu + + 0x318u);
    }
L_0011efc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011efd0u, cpu->r[12], 0, 0);
    }
L_0011efcc:;
    {
        cpu->r[3] = rd32(0x0011efd4u + + 0x314u);
    }
L_0011efd0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011efd8u, cpu->r[2], 0, 0);
    }
L_0011efd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011efd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011efe0u, cpu->r[3], 0, 0);
    }
L_0011efdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011efe0:;
    {
        cpu->r[14] = 0x0011efe4u; fn_001b9234(cpu);
    }
L_0011efe4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011efe8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011efec:;
    {
        cpu->r[14] = 0x0011eff0u; fn_001933d4(cpu);
    }
L_0011eff0:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0011eff4:;
    {
        wr32(cpu->r[5] + + 0x9dcu, cpu->r[3]);
    }
L_0011eff8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011effc:;
    {
        wr32(cpu->r[5] + + 0x9e0u, cpu->r[3]);
    }
L_0011f000:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_0011f004:;
    {
        goto L_0011ee44;
    }
L_0011f008:;
    {
        cpu->r[3] = rd32(0x0011f010u + + 0x2c8u);
    }
L_0011f00c:;
    {
        cpu->r[1] = 0x0000e26eu;
    }
L_0011f010:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0011f014:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f018:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011f01c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_0011f020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0011f024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000024cu, 0, 0);
    }
L_0011f028:;
    {
        cpu->r[14] = 0x0011f02cu; fn_000ae1e8(cpu);
    }
L_0011f02c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011f030:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_0011f034:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_0011f038:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011f03c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011f040:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000290u, 0, 0);
    }
L_0011f044:;
    {
        cpu->r[14] = 0x0011f048u; fn_000ae1e8(cpu);
    }
L_0011f048:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0011f04c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011f050:;
    {
        cpu->r[14] = 0x0011f054u; fn_001933d4(cpu);
    }
L_0011f054:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011f058:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0011f05c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011f060:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x40u);
    }
L_0011f064:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0011f068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f25c;
        }
    }
L_0011f06c:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0011f070:;
    {
        wr32(cpu->r[5] + + 0x9dcu, cpu->r[3]);
    }
L_0011f074:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_0011f078:;
    {
        goto L_0011ee44;
    }
L_0011f07c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011f080:;
    {
        wr32(cpu->r[0] + + 0x9dcu, cpu->r[3]);
    }
L_0011f084:;
    {
        goto L_0011ee58;
    }
L_0011f088:;
    {
        cpu->r[2] = rd32(0x0011f090u + + 0x248u);
    }
L_0011f08c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0011f090:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011f094:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011f098:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0011f09c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0011f0a0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0011f0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ee58;
        }
    }
L_0011f0a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f0ac:;
    {
        wr32(cpu->r[0] + + 0x9e0u, cpu->r[3]);
    }
L_0011f0b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011f1a0;
        }
    }
L_0011f0b4:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0011f0b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0011f0bc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_0011f0c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f0c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ee58;
        }
    }
L_0011f0c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011f0cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e000u, 0, 0);
    }
L_0011f0d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0011f0d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_0011f0d8:;
    {
        cpu->r[14] = 0x0011f0dcu; fn_000ae3d0(cpu);
    }
L_0011f0dc:;
    {
        goto L_0011f06c;
    }
L_0011f0e0:;
    {
        cpu->r[2] = rd32(0x0011f0e8u + + 0x1f0u);
    }
L_0011f0e4:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0011f0e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011f0ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011f0f0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0011f0f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011f0f8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0011f0fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ee58;
        }
    }
L_0011f100:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f104:;
    {
        wr32(cpu->r[0] + + 0x9e0u, cpu->r[3]);
    }
L_0011f108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011f208;
        }
    }
L_0011f10c:;
    {
        cpu->r[1] = 0x0000e26cu;
    }
L_0011f110:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0011f114:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_0011f118:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0011f11c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ee58;
        }
    }
L_0011f120:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0011f124:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_0011f128:;
    {
        cpu->r[14] = 0x0011f12cu; fn_000a6b7c(cpu);
    }
L_0011f12c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011f130:;
    {
        cpu->r[1] = rd32(0x0011f138u + + 0x1b4u);
    }
L_0011f134:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0011f138:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f13c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f144u, cpu->r[1], 0, 0);
    }
L_0011f140:;
    {
        cpu->r[14] = 0x0011f144u; fn_000ae3d0(cpu);
    }
L_0011f144:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011f148:;
    {
        cpu->r[2] = 0x0000e26eu;
    }
L_0011f14c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011f150:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0011f154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_0011f158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0011f15c:;
    {
        cpu->r[14] = 0x0011f160u; fn_000ae740(cpu);
    }
L_0011f160:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f164:;
    {
        cpu->r[14] = 0x0011f168u; fn_000a76a0(cpu);
    }
L_0011f168:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0011f16c:;
    {
        wr32(cpu->r[5] + + 0x9dcu, cpu->r[3]);
    }
L_0011f170:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_0011f174:;
    {
        goto L_0011ee44;
    }
L_0011f178:;
    {
        cpu->r[3] = rd32(0x0011f180u + + 0x158u);
    }
L_0011f17c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f180:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0011f184:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0011f188:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011f18c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011f190:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011f194:;
    {
        cpu->r[14] = 0x0011f19cu;
    }
L_0011f198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f19cu)) return;
    }
L_0011f19c:;
    {
        goto L_0011ee58;
    }
L_0011f1a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_0011f1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f2a0;
        }
    }
L_0011f1a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f1ac:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0011f1b0:;
    {
        cpu->r[14] = 0x0011f1b4u; fn_000a6b7c(cpu);
    }
L_0011f1b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000420u, 0, 0);
    }
L_0011f1b8:;
    {
        cpu->r[1] = rd32(0x0011f1c0u + + 0x130u);
    }
L_0011f1bc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0011f1c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011f1c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x9e0u);
    }
L_0011f1c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f1d0u, cpu->r[1], 0, 0);
    }
L_0011f1cc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_0011f1d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f1d4:;
    {
        cpu->r[14] = 0x0011f1d8u; imp_sprintf(cpu); /* sprintf */
    }
L_0011f1d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011f1dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011f1e0:;
    {
        cpu->r[14] = 0x0011f1e4u; fn_000ae3d0(cpu);
    }
L_0011f1e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011f1e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_0011f1ec:;
    {
        cpu->r[14] = 0x0011f1f0u; fn_000ae160(cpu);
    }
L_0011f1f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f1f4:;
    {
        cpu->r[14] = 0x0011f1f8u; fn_000a76a0(cpu);
    }
L_0011f1f8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0011f1fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_0011f200:;
    {
        wr32(cpu->r[5] + + 0x9dcu, cpu->r[2]);
    }
L_0011f204:;
    {
        goto L_0011ee44;
    }
L_0011f208:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_0011f20c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ee58;
        }
    }
L_0011f210:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f214:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0011f218:;
    {
        cpu->r[14] = 0x0011f21cu; fn_000a6b7c(cpu);
    }
L_0011f21c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000420u, 0, 0);
    }
L_0011f220:;
    {
        cpu->r[1] = rd32(0x0011f228u + + 0xccu);
    }
L_0011f224:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0011f228:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011f22c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x9e0u);
    }
L_0011f230:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_0011f234:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f238:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f240u, cpu->r[1], 0, 0);
    }
L_0011f23c:;
    {
        cpu->r[14] = 0x0011f240u; imp_sprintf(cpu); /* sprintf */
    }
L_0011f240:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011f244:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011f248:;
    {
        cpu->r[14] = 0x0011f24cu; fn_000ae3d0(cpu);
    }
L_0011f24c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011f250:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_0011f254:;
    {
        cpu->r[14] = 0x0011f258u; fn_000ae160(cpu);
    }
L_0011f258:;
    {
        goto L_0011f160;
    }
L_0011f25c:;
    {
        cpu->r[1] = rd32(0x0011f264u + + 0x94u);
    }
L_0011f260:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011f264:;
    {
        cpu->r[14] = rd32(0x0011f26cu + + 0x90u);
    }
L_0011f268:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f270u, cpu->r[1], 0, 0);
    }
L_0011f26c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0011f270:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011f274:;
    {
        cpu->r[14] = add_flags(cpu, 0x0011f27cu, cpu->r[14], 0, 0);
    }
L_0011f278:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011f27c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0011f280:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0011f284:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0011f288:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011f28c:;
    {
        cpu->r[14] = 0x0011f290u; fn_001b8240(cpu);
    }
L_0011f290:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011f294:;
    {
        wr32(cpu->r[5] + + 0x9dcu, cpu->r[3]);
    }
L_0011f298:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_0011f29c:;
    {
        goto L_0011ee44;
    }
L_0011f2a0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011f2a4:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[7]);
    }
L_0011f2a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011f2ac:;
    {
        cpu->r[14] = 0x0011f2b0u; fn_000a6b7c(cpu);
    }
L_0011f2b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011f2b4:;
    {
        cpu->r[0] = 0x0000043au;
    }
L_0011f2b8:;
    {
        cpu->r[14] = 0x0011f2bcu; fn_000aeb58(cpu);
    }
L_0011f2bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011f2c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_0011f2c4:;
    {
        cpu->r[14] = 0x0011f2c8u; fn_000ae160(cpu);
    }
L_0011f2c8:;
    {
        goto L_0011f160;
    }
L_0011f2cc:;
    {
        cpu->r[14] = 0x0011f2d0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0011f2d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 4, 11u, &shc); cpu->r[11] = v;
        set_nz(cpu, v);
        }
    }
L_0011f2d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0011f2d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_0011f2dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2e4u & shifter(cpu->r[4], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0011f2e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2e8u & shifter(cpu->r[0], 2, 21u, &shc); cpu->r[3] = v;
        }
    }
L_0011f2e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2ecu & shifter(cpu->r[4], 4, 20u, &shc); cpu->r[3] = v;
        }
    }
L_0011f2e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2f0u & shifter(cpu->r[8], 4, 20u, &shc); cpu->r[3] = v;
        }
    }
L_0011f2ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2f4u & shifter(cpu->r[4], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0011f2f0:;
    {
        if (cond_test(cpu, 1)) {
        wr16(0x0011f2f8u, cpu->r[3]);
        }
    }
L_0011f2f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f2fcu & shifter(cpu->r[8], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0011f2f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011f300u & shifter(cpu->r[0], 3, 15u, &shc); cpu->r[3] = v;
        }
    }
L_0011f2fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[7]; uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x0011f300u)) return;
        }
    }
}

/* _ZN23GS_ReplayMenuLoginPanelD1Ev @ 0011f300 (arm) */
void fn_0011f300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f300:;
    {
        cpu->r[3] = rd32(0x0011f308u + + 0x24u);
    }
L_0011f304:;
    {
        cpu->r[2] = rd32(0x0011f30cu + + 0x24u);
    }
L_0011f308:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011f310u, cpu->r[3], 0, 0);
    }
L_0011f30c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f310:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011f314:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f31c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011f320:;
    {
        cpu->r[14] = 0x0011f324u; fn_000a753c(cpu);
    }
L_0011f324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f328:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f32cu)) return;
    }
}

/* _ZN23GS_ReplayMenuLoginPanelD0Ev @ 0011f334 (arm) */
void fn_0011f334(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f334:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f338:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f33c:;
    {
        cpu->r[14] = 0x0011f340u; fn_0011f300(cpu);
    }
L_0011f340:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f344:;
    {
        cpu->r[14] = 0x0011f348u; fn_0018ba20(cpu);
    }
L_0011f348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f34c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f350u)) return;
    }
}

/* _ZN23GS_ReplayMenuLoginPanelD2Ev @ 0011f350 (arm) */
void fn_0011f350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f350:;
    {
        cpu->r[3] = rd32(0x0011f358u + + 0x24u);
    }
L_0011f354:;
    {
        cpu->r[2] = rd32(0x0011f35cu + + 0x24u);
    }
L_0011f358:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011f360u, cpu->r[3], 0, 0);
    }
L_0011f35c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f360:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011f364:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f368:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f36c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011f370:;
    {
        cpu->r[14] = 0x0011f374u; fn_000a753c(cpu);
    }
L_0011f374:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f378:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f37cu)) return;
    }
}

/* _ZN23GS_ReplayMenuLoginPanelC1Ev @ 0011f384 (arm) */
void fn_0011f384(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f384:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011f388:;
    {
        cpu->r[5] = rd32(0x0011f390u + + 0x6cu);
    }
L_0011f38c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f390:;
    {
        cpu->r[14] = 0x0011f394u; fn_000a7608(cpu);
    }
L_0011f394:;
    {
        cpu->r[1] = rd32(0x0011f39cu + + 0x64u);
    }
L_0011f398:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011f3a0u, cpu->r[5], 0, 0);
    }
L_0011f39c:;
    {
        cpu->r[2] = rd32(0x0011f3a4u + + 0x60u);
    }
L_0011f3a0:;
    {
        cpu->r[3] = 0x0000e26cu;
    }
L_0011f3a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011f3a8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0011f3ac:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011f3b0:;
    {
        cpu->r[0] = 0x00000435u;
    }
L_0011f3b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011f3b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f3bc:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[12]);
    }
L_0011f3c0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0011f3c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f3c8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0011f3cc:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[12]);
    }
L_0011f3d0:;
    {
        cpu->r[14] = 0x0011f3d4u; fn_000aeb58(cpu);
    }
L_0011f3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009e0u, 0, 0);
    }
L_0011f3d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0011f3dc:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011f3e0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011f3e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f3e8:;
    {
        cpu->r[14] = 0x0011f3ecu; fn_000a7bb0(cpu);
    }
L_0011f3ec:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011f3f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f3f4:;
    {
        wr32(cpu->r[4] + + 0x9e0u, cpu->r[3]);
    }
L_0011f3f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f3fcu)) return;
    }
}

/* _ZN23GS_ReplayMenuLoginPanelC2Ev @ 0011f408 (arm) */
void fn_0011f408(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f408:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011f40c:;
    {
        cpu->r[5] = rd32(0x0011f414u + + 0x6cu);
    }
L_0011f410:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f414:;
    {
        cpu->r[14] = 0x0011f418u; fn_000a7608(cpu);
    }
L_0011f418:;
    {
        cpu->r[1] = rd32(0x0011f420u + + 0x64u);
    }
L_0011f41c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011f424u, cpu->r[5], 0, 0);
    }
L_0011f420:;
    {
        cpu->r[2] = rd32(0x0011f428u + + 0x60u);
    }
L_0011f424:;
    {
        cpu->r[3] = 0x0000e26cu;
    }
L_0011f428:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011f42c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0011f430:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011f434:;
    {
        cpu->r[0] = 0x00000435u;
    }
L_0011f438:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011f43c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f440:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[12]);
    }
L_0011f444:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0011f448:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f44c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0011f450:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[12]);
    }
L_0011f454:;
    {
        cpu->r[14] = 0x0011f458u; fn_000aeb58(cpu);
    }
L_0011f458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009e0u, 0, 0);
    }
L_0011f45c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0011f460:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011f464:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011f468:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f46c:;
    {
        cpu->r[14] = 0x0011f470u; fn_000a7bb0(cpu);
    }
L_0011f470:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011f474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f478:;
    {
        wr32(cpu->r[4] + + 0x9e0u, cpu->r[3]);
    }
L_0011f47c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f480u)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit14InitTextFieldsEv @ 0011f48c (arm) */
void fn_0011f48c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f48c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit16RemoveTextFieldsEv @ 0011f490 (arm) */
void fn_0011f490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f490:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit17ApplyMenuSettingsEv @ 0011f494 (arm) */
void fn_0011f494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f494:;
    {
        cpu->r[1] = rd32(0x0011f49cu + + 0x50u);
    }
L_0011f498:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011f49c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f4a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f4a8u, cpu->r[1], 0, 0);
    }
L_0011f4a4:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_0011f4a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011f4ac:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[1]);
    }
L_0011f4b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f4b4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0011f4b8:;
    {
        cpu->r[14] = 0x0011f4c0u;
    }
L_0011f4bc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f4c0u)) return;
    }
L_0011f4c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011f4c4:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_0011f4c8:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0011f4cc:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_0011f4d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f4d4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011f4d8:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_0011f4dc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0011f4e0:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_0011f4e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0011f4e8:;
    {
        return fn_0011f48c(cpu);
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit8isKindOfEi @ 0011f4f0 (arm) */
void fn_0011f4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f4f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011f4f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_38 @ 0011f4f8 (arm) */
void fn_0011f4f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f4f8:;
    {
        cpu->r[2] = rd32(0x0011f500u + + 0x38u);
    }
L_0011f4fc:;
    {
        cpu->r[0] = rd32(0x0011f504u + + 0x38u);
    }
L_0011f500:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011f508u, cpu->r[2], 0, 0);
    }
L_0011f504:;
    {
        cpu->r[1] = rd32(0x0011f50cu + + 0x34u);
    }
L_0011f508:;
    {
        cpu->r[3] = rd32(0x0011f510u + + 0x34u);
    }
L_0011f50c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0011f510:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011f518u, cpu->r[1], 0, 0);
    }
L_0011f514:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011f51cu, cpu->r[3], 0, 0);
    }
L_0011f518:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011f51c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_0011f520:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[0]);
    }
L_0011f524:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_0011f528:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000005fu, 1, 0);
    }
L_0011f52c:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_0011f530:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0011f534:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit6ResumeEv @ 0011f548 (arm) */
void fn_0011f548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f548:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f54c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f550:;
    {
        cpu->r[14] = 0x0011f554u; fn_001142a0(cpu);
    }
L_0011f554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f558:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0011f55c:;
    {
        return fn_0011f48c(cpu);
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit6UpdateEv @ 0011f560 (arm) */
void fn_0011f560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f560:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011f564:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011f568:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011f56c:;
    {
        cpu->r[4] = rd32(0x0011f574u + + 0x15cu);
    }
L_0011f570:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011f574:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011f57cu, cpu->r[4], 0, 0);
    }
L_0011f578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f5d4;
        }
    }
L_0011f57c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0011f580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f594;
        }
    }
L_0011f584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f588:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011f5c8;
        }
    }
L_0011f58c:;
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
L_0011f590:;
    {
        return fn_00114a58(cpu);
    }
L_0011f594:;
    {
        cpu->r[14] = 0x0011f598u; fn_0010da28(cpu);
    }
L_0011f598:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011f59c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f5a0u)) return;
        }
    }
L_0011f5a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0011f5a4:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_0011f5a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011f5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f6b8;
        }
    }
L_0011f5b0:;
    {
        cpu->r[2] = 0x00000662u;
    }
L_0011f5b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011f5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f614;
        }
    }
L_0011f5bc:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_0011f5c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011f5c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f604;
        }
    }
L_0011f5c8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011f5cc:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0011f5d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f5d4u)) return;
    }
L_0011f5d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011f5d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f5dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f5e0u)) return;
        }
    }
L_0011f5e0:;
    {
        cpu->r[3] = rd32(0x0011f5e8u + + 0xecu);
    }
L_0011f5e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f5e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011f5ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011f5f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000581u;
        }
    }
L_0011f5f4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
        }
    }
L_0011f5f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0011f5fc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_0011f600:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f604u)) return;
    }
L_0011f604:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011f608:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011f60c:;
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
L_0011f610:;
    {
        return fn_000f34e8(cpu);
    }
L_0011f614:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011f618:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0011f61c:;
    {
        cpu->r[3] = rd32(0x0011f624u + + 0xb4u);
    }
L_0011f620:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f624:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011f628:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f62c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011f630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_0011f634:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b2u, 0, 0);
    }
L_0011f638:;
    {
        cpu->r[14] = 0x0011f63cu; imp_memset(cpu); /* memset */
    }
L_0011f63c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011f640:;
    {
        cpu->r[0] = 0x0000e5b2u;
    }
L_0011f644:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f648:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011f64c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011f650:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011f654:;
    {
        cpu->r[14] = 0x0011f658u; imp_memset(cpu); /* memset */
    }
L_0011f658:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011f65c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_0011f660:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011f664:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_0011f668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b2u, 0, 0);
    }
L_0011f66c:;
    {
        cpu->r[14] = 0x0011f670u; imp_memcpy(cpu); /* memcpy */
    }
L_0011f670:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011f674:;
    {
        cpu->r[0] = 0x0000e5b2u;
    }
L_0011f678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000a50u, 0, 0);
    }
L_0011f67c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011f680:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011f684:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011f688:;
    {
        cpu->r[14] = 0x0011f68cu; imp_memcpy(cpu); /* memcpy */
    }
L_0011f68c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f690:;
    {
        cpu->r[14] = 0x0011f694u; fn_0011f490(cpu);
    }
L_0011f694:;
    {
        cpu->r[0] = 0x000009e8u;
    }
L_0011f698:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011f69c:;
    {
        cpu->r[14] = 0x0011f6a0u; fn_0018ba6c(cpu);
    }
L_0011f6a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f6a4:;
    {
        cpu->r[14] = 0x0011f6a8u; fn_0011f384(cpu);
    }
L_0011f6a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f6ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011f6b0:;
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
L_0011f6b4:;
    {
        return fn_000f361c(cpu);
    }
L_0011f6b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011f6bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011f6c0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011f6c4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011f6c8:;
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
L_0011f6cc:;
    {
        return fn_0009b14c(cpu);
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit8DoActionEii @ 0011f6dc (arm) */
void fn_0011f6dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f6dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011f6e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f6e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011f6e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0011f6ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f6f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f6fc;
        }
    }
L_0011f6f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011f6f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f6fcu)) return;
    }
L_0011f6fc:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0011f700:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0011f704:;
    {
        cpu->r[14] = 0x0011f708u; fn_00093f34(cpu);
    }
L_0011f708:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0011f70c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011f710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011f714:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0011f718:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011f71c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011f720:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011f724:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011f728:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[0]);
    }
L_0011f72c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0011f730:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011f734:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_0011f738:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0011f73c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0011f740:;
    {
        goto L_0011f6f4;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit16RenderBackgroundEv @ 0011f744 (arm) */
void fn_0011f744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f744:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0011f748:;
    {
        cpu->r[4] = rd32(0x0011f750u + + 0x50u);
    }
L_0011f74c:;
    {
        cpu->r[3] = rd32(0x0011f754u + + 0x50u);
    }
L_0011f750:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011f754:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011f75cu, cpu->r[4], 0, 0);
    }
L_0011f758:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_0011f75c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f760:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0011f764:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f768:;
    {
        cpu->r[14] = 0x0011f76cu; fn_0012dd58(cpu);
    }
L_0011f76c:;
    {
        cpu->r[12] = rd32(0x0011f774u + + 0x34u);
    }
L_0011f770:;
    {
        cpu->r[3] = rd32(0x0011f778u + + 0x34u);
    }
L_0011f774:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011f778:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f77c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011f780:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0011f784:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f788:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011f78c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011f790:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011f794:;
    {
        cpu->r[14] = 0x0011f798u; fn_00130908(cpu);
    }
L_0011f798:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011f79c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f7a0u)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmitD1Ev @ 0011f7b0 (arm) */
void fn_0011f7b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f7b0:;
    {
        cpu->r[3] = rd32(0x0011f7b8u + + 0x24u);
    }
L_0011f7b4:;
    {
        cpu->r[2] = rd32(0x0011f7bcu + + 0x24u);
    }
L_0011f7b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011f7c0u, cpu->r[3], 0, 0);
    }
L_0011f7bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f7c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011f7c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f7c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f7cc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011f7d0:;
    {
        cpu->r[14] = 0x0011f7d4u; fn_000ec21c(cpu);
    }
L_0011f7d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f7d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f7dcu)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmitD0Ev @ 0011f7e4 (arm) */
void fn_0011f7e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f7e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f7e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f7ec:;
    {
        cpu->r[14] = 0x0011f7f0u; fn_0011f7b0(cpu);
    }
L_0011f7f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f7f4:;
    {
        cpu->r[14] = 0x0011f7f8u; fn_0018ba20(cpu);
    }
L_0011f7f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f7fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f800u)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmitD2Ev @ 0011f800 (arm) */
void fn_0011f800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f800:;
    {
        cpu->r[3] = rd32(0x0011f808u + + 0x24u);
    }
L_0011f804:;
    {
        cpu->r[2] = rd32(0x0011f80cu + + 0x24u);
    }
L_0011f808:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011f810u, cpu->r[3], 0, 0);
    }
L_0011f80c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011f810:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011f814:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011f81c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011f820:;
    {
        cpu->r[14] = 0x0011f824u; fn_000ec21c(cpu);
    }
L_0011f824:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f828:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f82cu)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmitC1Ev @ 0011f834 (arm) */
void fn_0011f834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f834:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011f838:;
    {
        cpu->r[4] = rd32(0x0011f840u + + 0x20u);
    }
L_0011f83c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011f840:;
    {
        cpu->r[14] = 0x0011f844u; fn_0010ffa8(cpu);
    }
L_0011f844:;
    {
        cpu->r[3] = rd32(0x0011f84cu + + 0x18u);
    }
L_0011f848:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011f850u, cpu->r[4], 0, 0);
    }
L_0011f84c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f850:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f854:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011f858:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011f85c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f860u)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmitC2Ev @ 0011f868 (arm) */
void fn_0011f868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f868:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011f86c:;
    {
        cpu->r[4] = rd32(0x0011f874u + + 0x20u);
    }
L_0011f870:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011f874:;
    {
        cpu->r[14] = 0x0011f878u; fn_0010ffa8(cpu);
    }
L_0011f878:;
    {
        cpu->r[3] = rd32(0x0011f880u + + 0x18u);
    }
L_0011f87c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011f884u, cpu->r[4], 0, 0);
    }
L_0011f880:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011f884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011f888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011f88c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011f890:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f894u)) return;
    }
}

/* _ZN24GS_ReplayMenuLoginSubmit6RenderEv @ 0011f89c (arm) */
void fn_0011f89c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011f89c:;
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
L_0011f8a0:;
    {
        cpu->r[5] = rd32(0x0011f8a8u + + 0x18cu);
    }
L_0011f8a4:;
    {
        cpu->r[8] = rd32(0x0011f8acu + + 0x18cu);
    }
L_0011f8a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011f8ac:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011f8b4u, cpu->r[5], 0, 0);
    }
L_0011f8b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011f8b4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0011f8b8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011f8bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011f8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f9b4;
        }
    }
L_0011f8c4:;
    {
        cpu->r[6] = rd32(0x0011f8ccu + + 0x170u);
    }
L_0011f8c8:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011f8cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011f8d0:;
    {
        cpu->r[14] = 0x0011f8d4u; fn_00096a08(cpu);
    }
L_0011f8d4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011f8d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011f8dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011f8e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011f8e4:;
    {
        cpu->r[14] = 0x0011f8e8u; fn_0018aa44(cpu);
    }
L_0011f8e8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0011f8ec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011f8f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011f8f4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011f8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f9f8;
        }
    }
L_0011f8fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011f900:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0011f904:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0011f908:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0011f90c:;
    {
        cpu->r[14] = 0x0011f910u; fn_0018aa44(cpu);
    }
L_0011f910:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011f914:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011f918:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0011f91c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011f920:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011f924:;
    {
        cpu->r[14] = 0x0011f928u; fn_000ad8a0(cpu);
    }
L_0011f928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011f92c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0011f930:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011f95c;
        }
    }
L_0011f934:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011f938:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011f93c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011f940:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011f944:;
    {
        cpu->r[14] = 0x0011f94cu;
    }
L_0011f948:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f94cu)) return;
    }
L_0011f94c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011f950:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0011f954:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0011f958:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011f934;
        }
    }
L_0011f95c:;
    {
        cpu->r[2] = rd32(0x0011f964u + + 0xdcu);
    }
L_0011f960:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0011f964:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011f968:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011f96c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011f970:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f974:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011f978:;
    {
        cpu->r[1] = 0x00000660u;
    }
L_0011f97c:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_0011f980:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0011f984:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0011f988:;
    {
        cpu->r[14] = 0x0011f98cu; fn_000ad200(cpu);
    }
L_0011f98c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0011f990:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f994:;
    {
        cpu->r[1] = 0x00000661u;
    }
L_0011f998:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_0011f99c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011f9a0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0011f9a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011f9a8:;
    {
        cpu->r[14] = 0x0011f9acu; fn_000ad200(cpu);
    }
L_0011f9ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011f9b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011f9b4u)) return;
    }
L_0011f9b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f9b8:;
    {
        cpu->r[14] = 0x0011f9bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011f9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011f9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f8c4;
        }
    }
L_0011f9c4:;
    {
        cpu->r[6] = rd32(0x0011f9ccu + + 0x70u);
    }
L_0011f9c8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011f9cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011f9d0:;
    {
        cpu->r[14] = 0x0011f9d4u; fn_0018aa20(cpu);
    }
L_0011f9d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011f9d8:;
    {
        cpu->r[14] = 0x0011f9dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011f9dc:;
    {
        cpu->r[3] = rd32(0x0011f9e4u + + 0x60u);
    }
L_0011f9e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011f9e4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011f9e8:;
    {
        cpu->r[3] = rd32(0x0011f9f0u + + 0x58u);
    }
L_0011f9ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011f9f0:;
    {
        cpu->r[14] = 0x0011f9f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011f9f4:;
    {
        goto L_0011f8c8;
    }
L_0011f9f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011f9fc:;
    {
        cpu->r[14] = 0x0011fa00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011fa00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011fa04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011f8fc;
        }
    }
L_0011fa08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011fa0c:;
    {
        cpu->r[14] = 0x0011fa10u; fn_0018aa20(cpu);
    }
L_0011fa10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011fa14:;
    {
        cpu->r[14] = 0x0011fa18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011fa18:;
    {
        cpu->r[3] = rd32(0x0011fa20u + + 0x24u);
    }
L_0011fa1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011fa20:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011fa24:;
    {
        cpu->r[3] = rd32(0x0011fa2cu + + 0x1cu);
    }
L_0011fa28:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011fa2c:;
    {
        cpu->r[14] = 0x0011fa30u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011fa30:;
    {
        goto L_0011f8fc;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu8isKindOfEi @ 0011fa4c (arm) */
void fn_0011fa4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011fa4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002du, 1, 1);
    }
L_0011fa50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0011fa54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0011fa58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu8DoActionEii @ 0011fa5c (arm) */
void fn_0011fa5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011fa5c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011fa60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011fa64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0011fa68:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0011fa6c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fa70u)) return;
        }
    }
L_0011fa70:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0011fa74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0011fa78:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fa7cu)) return;
        }
    }
L_0011fa7c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0011fa80:;
    {
        cpu->r[14] = 0x0011fa88u;
    }
L_0011fa84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fa88u)) return;
    }
L_0011fa88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fa8cu)) return;
    }
}

/* init_array_39 @ 0011fa8c (arm) */
void fn_0011fa8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011fa8c:;
    {
        cpu->r[3] = rd32(0x0011fa94u + + 0x20u);
    }
L_0011fa90:;
    {
        cpu->r[1] = rd32(0x0011fa98u + + 0x20u);
    }
L_0011fa94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011fa9cu, cpu->r[3], 0, 0);
    }
L_0011fa98:;
    {
        cpu->r[2] = rd32(0x0011faa0u + + 0x1cu);
    }
L_0011fa9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0011faa0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011faa8u, cpu->r[2], 0, 0);
    }
L_0011faa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011faa8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0011faac:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0011fab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu11DoBarActionEii @ 0011fac0 (arm) */
void fn_0011fac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011fac0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0011fac4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0011fac8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0011facc:;
    {
        cpu->r[5] = rd32(0x0011fad4u + + 0x104u);
    }
L_0011fad0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011fad4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011fad8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011fae0u, cpu->r[5], 0, 0);
    }
L_0011fadc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011fb78;
        }
    }
L_0011fae0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011fae4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0011fae8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0011faec:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0011faf0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0011faf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011faf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0011fafc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011fb00:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0011fb04:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0011fb08:;
    {
        cpu->r[14] = 0x0011fb0cu; fn_00093f34(cpu);
    }
L_0011fb0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0011fb10:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_0011fb14:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011fb18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011fb1c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0011fb20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0011fb24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0011fb28:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011fb2c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011fb30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011fb34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011fb38:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011fb3c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0011fb40:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0011fb44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011fb48:;
    {
        cpu->r[14] = 0x0011fb4cu; fn_000fd248(cpu);
    }
L_0011fb4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0011fb50:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0011fb54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011fb58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011fb80;
        }
    }
L_0011fb5c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011fb78;
        }
    }
L_0011fb60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000005c0u, 1, 0);
    }
L_0011fb64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_0011fb68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0011fb6c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0011fb70:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
        }
    }
L_0011fb74:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_0011fb78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011fb7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fb80u)) return;
    }
L_0011fb80:;
    {
        cpu->r[3] = rd32(0x0011fb88u + + 0x54u);
    }
L_0011fb84:;
    {
        cpu->r[1] = 0x00001c38u;
    }
L_0011fb88:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011fb8c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011fb90:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011fb94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_0011fb98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0011fb9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_0011fba0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_0011fba4:;
    {
        cpu->r[14] = 0x0011fba8u; fn_000933e0(cpu);
    }
L_0011fba8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011fbac:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0011fbb0:;
    {
        cpu->r[14] = 0x0011fbb4u; fn_0009e9e8(cpu);
    }
L_0011fbb4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011fbb8:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0011fbbc:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_0011fbc0:;
    {
        cpu->r[14] = 0x0011fbc4u; fn_00093f34(cpu);
    }
L_0011fbc4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011fbc8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011fbcc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011fbd0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_0011fbd4:;
    {
        goto L_0011fb78;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu17UpdateColorSliderEv @ 0011fbe0 (arm) */
void fn_0011fbe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011fbe0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_0011fbe4:;
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
L_0011fbe8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0011fbec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0011fbf0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011fbf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000950u, 0, 0);
    }
L_0011fbf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0011fbfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0011fc00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011fc04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0011fc08:;
    {
        cpu->r[4] = rd32(0x0011fc10u + + 0x358u);
    }
L_0011fc0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0011fc10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_0011fc14:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011fc1cu, cpu->r[4], 0, 0);
    }
L_0011fc18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011fc1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011fc20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0011fc24:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x8u);
    }
L_0011fc28:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011fc2c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xcu);
    }
L_0011fc30:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 24u, &shc); cpu->r[6] = v;
    }
L_0011fc34:;
    {
        cpu->r[7] = rd8(cpu->r[0] + + 0x8u);
    }
L_0011fc38:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[8], 3, 8u, &shc); cpu->r[6] = v;
    }
L_0011fc3c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[6];
    }
L_0011fc40:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0011fc44:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_0011fc48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0011fc4c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 24u, &shc); cpu->r[12] = v;
    }
L_0011fc50:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 24u, &shc); cpu->r[3] = v;
    }
L_0011fc54:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0011fc58:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0011fc5c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0011fc60:;
    {
        vfp_sync_flags(cpu);
    }
L_0011fc64:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0011fc68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011fed4;
        }
    }
L_0011fc6c:;
    {
        cpu->r[3] = rd32(0x0011fc74u + + 0x2f8u);
    }
L_0011fc70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011fc74:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011fc78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011fc7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011fe84;
        }
    }
L_0011fc80:;
    {
        cpu->r[8] = rd32(0x0011fc88u + + 0x2e8u);
    }
L_0011fc84:;
    {
        cpu->r[3] = rd32(0x0011fc8cu + + 0x2e8u);
    }
L_0011fc88:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0011fc8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011fc90:;
    {
        cpu->r[3] = rd32(0x0011fc98u + + 0x2e0u);
    }
L_0011fc94:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011fc98:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0011fc9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011fca0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0011fca4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[12], 0x00000093u, 1, 0);
    }
L_0011fca8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_0011fcac:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011fcb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011fe90;
        }
    }
L_0011fcb4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011fcb8:;
    {
        cpu->r[1] = rd32(0x0011fcc0u + + 0x2c0u);
    }
L_0011fcbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011fcc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0011fcc4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0011fcc8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0011fccc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000066u, 1, 0);
    }
L_0011fcd0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_0011fcd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011fdd0;
        }
    }
L_0011fcd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000066u, 0, 0);
    }
L_0011fcdc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0011fce0:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[6], 0x0000000fu, 1, 1);
        }
    }
L_0011fce4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011fdd0;
        }
    }
L_0011fce8:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000002cu, 1, 1);
    }
L_0011fcec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011fdd0;
        }
    }
L_0011fcf0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000053u, 0, 0);
    }
L_0011fcf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0011fcfcu + + 0x294u);
    }
L_0011fcf8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_0011fcfc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_0011fd00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0011fd04:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011fd08:;
    {
        vfp_sync_flags(cpu);
    }
L_0011fd0c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00120300;
        }
    }
L_0011fd10:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x950u);
    }
L_0011fd14:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0011fd18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0011fd1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011fd24u + + 0x278u);
    }
L_0011fd20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0011fd24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00001b80u, 0, 0);
    }
L_0011fd28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0011fd2c:;
    {
        cpu->r[8] = rd8(cpu->r[1] + + 0x8u);
    }
L_0011fd30:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x4u);
    }
L_0011fd34:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[8] = v;
    }
L_0011fd38:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[7], 3, 8u, &shc); cpu->r[8] = v;
    }
L_0011fd3c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_0011fd40:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_0011fd44:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_0011fd48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0011fd4c:;
    {
        vfp_sync_flags(cpu);
    }
L_0011fd50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011fd84;
        }
    }
L_0011fd54:;
    {
        cpu->r[8] = rd8(cpu->r[1] + + 0xcu);
    }
L_0011fd58:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0011fd5c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_0011fd60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011fd68u + + 0x220u);
    }
L_0011fd64:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[8] = v;
    }
L_0011fd68:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 3, 8u, &shc); cpu->r[8] = v;
    }
L_0011fd6c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_0011fd70:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_0011fd74:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_0011fd78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0011fd7c:;
    {
        vfp_sync_flags(cpu);
    }
L_0011fd80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012034c;
        }
    }
L_0011fd84:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011fd88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0011fd8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0011fd94u + + 0x1f8u);
    }
L_0011fd90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0011fd94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_0011fd98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0011fd9c:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x8u);
    }
L_0011fda0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_0011fda4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 24u, &shc); cpu->r[12] = v;
    }
L_0011fda8:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0011fdac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_0011fdb0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011fdb4:;
    {
        vfp_sync_flags(cpu);
    }
L_0011fdb8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001202dc;
        }
    }
L_0011fdbc:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[1] = v;
    }
L_0011fdc0:;
    {
        cpu->r[12] = 0x000000bfu;
    }
L_0011fdc4:;
    {
        uint32_t v = cpu->r[1] | 0x80000000u; cpu->r[1] = v;
    }
L_0011fdc8:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_0011fdcc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0011fdd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011fdd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ff5c;
        }
    }
L_0011fdd8:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_0011fddc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0011fde0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011fde4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011fe84;
        }
    }
L_0011fde8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x950u);
    }
L_0011fdec:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0011fdf0:;
    {
        cpu->r[7] = 0x00001c38u;
    }
L_0011fdf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_0011fdf8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[6], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0011fdfc:;
    {
        cpu->r[0] = 0x00001bbeu;
    }
L_0011fe00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_0011fe04:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0011fe08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011fe0c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0011fe10:;
    {
        cpu->r[14] = 0x0011fe14u; fn_000b0c4c(cpu);
    }
L_0011fe14:;
    {
        cpu->r[3] = rd32(0x0011fe1cu + + 0x160u);
    }
L_0011fe18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011fe1c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_0011fe20:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011fe24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_0011fe28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_0011fe2c:;
    {
        cpu->r[8] = rd32(cpu->r[10]);
    }
L_0011fe30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x000019c0u, 0, 0);
    }
L_0011fe34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], 0x00001b80u, 0, 0);
    }
L_0011fe38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000003du, 0, 0);
    }
L_0011fe3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_0011fe40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011fe44:;
    {
        cpu->r[14] = 0x0011fe48u; imp_memcpy(cpu); /* memcpy */
    }
L_0011fe48:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011fe4c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_0011fe50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011fe54:;
    {
        cpu->r[14] = 0x0011fe58u; imp_memcpy(cpu); /* memcpy */
    }
L_0011fe58:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_0011fe5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011fe60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011fe64:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_0011fe68:;
    {
        cpu->r[14] = 0x0011fe6cu; fn_000933e0(cpu);
    }
L_0011fe6c:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0011fe70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011fe74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0011fe78:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0011fe7c:;
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
L_0011fe80:;
    {
        return fn_0009e9e8(cpu);
    }
L_0011fe84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0011fe88:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0011fe8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011fe90u)) return;
    }
L_0011fe90:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000093u, 0, 0);
    }
L_0011fe94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_0011fe98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00120130;
        }
    }
L_0011fe9c:;
    {
        cpu->r[11] = rd32(0x0011fea4u + + 0xdcu);
    }
L_0011fea0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0011fea4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011fea8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x0000002cu, 1, 0);
    }
L_0011feac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011feb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00120148;
        }
    }
L_0011feb4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011feb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011febc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_0011fec0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011ffa0;
        }
    }
L_0011fec4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0011fec8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011fecc:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0011fed0:;
    {
        goto L_0011fcc8;
    }
L_0011fed4:;
    {
        cpu->r[3] = rd32(0x0011fedcu + + 0xa8u);
    }
L_0011fed8:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_0011fedc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011fee0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011fee4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011fee8:;
    {
        cpu->r[14] = 0x0011feecu; fn_00135cf4(cpu);
    }
L_0011feec:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x950u);
    }
L_0011fef0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011fef4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011fef8:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0011fefc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011ff04u + + 0x90u);
    }
L_0011ff00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0011ff04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0011ff08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00001b80u, 0, 0);
    }
L_0011ff0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011ff10:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x8u);
    }
L_0011ff14:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_0011ff18:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_0011ff1c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 3, 8u, &shc); cpu->r[1] = v;
    }
L_0011ff20:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011ff24:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011ff28:;
    {
        cpu->r[14] = 0x0011ff2cu; fn_00135568(cpu);
    }
L_0011ff2c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x950u);
    }
L_0011ff30:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011ff34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011ff38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011ff3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_0011ff40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011ff44:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x8u);
    }
L_0011ff48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011ff4c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 24u, &shc); cpu->r[3] = v;
    }
L_0011ff50:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0011ff54:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_0011ff58:;
    {
        goto L_0011fc6c;
    }
L_0011ff5c:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_0011ff60:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0011ff64:;
    {
        goto L_0011fde8;
    }
L_0011ffa0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x0000005eu, 1, 0);
    }
L_0011ffa4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_0011ffa8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00120140;
        }
    }
L_0011ffac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000041u, 1, 0);
    }
L_0011ffb0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_0011ffb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00120140;
        }
    }
L_0011ffb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000080u, 0, 0);
    }
L_0011ffbc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0011ffc4u + - 0x34u);
    }
L_0011ffc0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0011ffc4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0011ffc8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0011ffcc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011ffd0:;
    {
        vfp_sync_flags(cpu);
    }
L_0011ffd4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00120430;
        }
    }
L_0011ffd8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x950u);
    }
L_0011ffdc:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0011ffe0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_0011ffe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011ffecu + - 0x50u);
    }
L_0011ffe8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0011ffec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00001b80u, 0, 0);
    }
L_0011fff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0011fff4:;
    {
        cpu->r[8] = rd8(cpu->r[1] + + 0x8u);
    }
L_0011fff8:;
    {
        cpu->r[11] = rd32(cpu->r[1] + + 0x4u);
    }
L_0011fffc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[8] = v;
    }
L_00120000:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_00120004:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[11], 3, 8u, &shc); cpu->r[11] = v;
    }
L_00120008:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_0012000c:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_00120010:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00120014:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00120018:;
    {
        vfp_sync_flags(cpu);
    }
L_0012001c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012046c;
        }
    }
L_00120020:;
    {
        cpu->r[11] = rd8(cpu->r[1] + + 0xcu);
    }
L_00120024:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00120028:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x8u);
    }
L_0012002c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120034u + - 0xacu);
    }
L_00120030:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 24u, &shc); cpu->r[11] = v;
    }
L_00120034:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[8], 3, 8u, &shc); cpu->r[11] = v;
    }
L_00120038:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_0012003c:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_00120040:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00120044:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00120048:;
    {
        vfp_sync_flags(cpu);
    }
L_0012004c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012046c;
        }
    }
L_00120050:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00001b80u, 0, 0);
    }
L_00120054:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00120058:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000010u, 0, 0);
    }
L_0012005c:;
    {
        cpu->r[11] = rd8(cpu->r[9] + + 0x8u);
    }
L_00120060:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x4u);
    }
L_00120064:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 24u, &shc); cpu->r[11] = v;
    }
L_00120068:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[8], 3, 8u, &shc); cpu->r[11] = v;
    }
L_0012006c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_00120070:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_00120074:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00120078:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0012007c:;
    {
        vfp_sync_flags(cpu);
    }
L_00120080:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012046c;
        }
    }
L_00120084:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00120088:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012008c:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[11] = v;
    }
L_00120090:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[11]);
    }
L_00120094:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00120098:;
    {
        uint32_t v = cpu->r[11] & 0x000000ffu; cpu->r[8] = v;
    }
L_0012009c:;
    {
        cpu->r[11] = rd8(cpu->r[1] + + 0x8u);
    }
L_001200a0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_001200a4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_001200a8:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[8] = v;
    }
L_001200ac:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[8]);
    }
L_001200b0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001200b4:;
    {
        cpu->r[11] = cpu->r[8];
    }
L_001200b8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001200bc:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[8] = v;
    }
L_001200c0:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[8]);
    }
L_001200c4:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 24u, &shc); cpu->r[8] = v;
    }
L_001200c8:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[8]);
    }
L_001200cc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001200d0:;
    {
        cpu->r[11] = rd8(cpu->r[9] + + 0x4u);
    }
L_001200d4:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[1] = v;
    }
L_001200d8:;
    {
        wr8(cpu->r[9] + + 0x8u, cpu->r[1]);
    }
L_001200dc:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001200e0:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[1]);
    }
L_001200e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_001200e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001200f0u + - 0x164u);
    }
L_001200ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001200f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_001200f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001200f8:;
    {
        cpu->r[8] = rd8(cpu->r[1] + + 0xcu);
    }
L_001200fc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00120100:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[8] = v;
    }
L_00120104:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[12], 3, 8u, &shc); cpu->r[8] = v;
    }
L_00120108:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_0012010c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00120110:;
    {
        vfp_sync_flags(cpu);
    }
L_00120114:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00120544;
        }
    }
L_00120118:;
    {
        uint32_t v = cpu->r[12] & 0x000000ffu; cpu->r[12] = v;
    }
L_0012011c:;
    {
        cpu->r[8] = 0x000000bfu;
    }
L_00120120:;
    {
        uint32_t v = cpu->r[12] | 0x80000000u; cpu->r[12] = v;
    }
L_00120124:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[8]);
    }
L_00120128:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[12]);
    }
L_0012012c:;
    {
        goto L_0011fcc8;
    }
L_00120130:;
    {
        cpu->r[11] = rd32(0x00120138u + - 0x1b8u);
    }
L_00120134:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00120138:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012013c:;
    {
        goto L_0011feb4;
    }
L_00120140:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00120144:;
    {
        goto L_0011fcc8;
    }
L_00120148:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x0000000fu, 1, 0);
    }
L_0012014c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00120150:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011feb4;
        }
    }
L_00120154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000080u, 0, 0);
    }
L_00120158:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120160u + - 0x1d0u);
    }
L_0012015c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_00120160:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00120164:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00120168:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0012016c:;
    {
        vfp_sync_flags(cpu);
    }
L_00120170:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001203cc;
        }
    }
L_00120174:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00120178:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0012017c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00120180:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00120184:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00120188:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_0012018c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00120190:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_00120194:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00120198:;
    {
        cpu->r[9] = rd8(cpu->r[0] + + 0x8u);
    }
L_0012019c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001201a0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001201a4:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 24u, &shc); cpu->r[0] = v;
    }
L_001201a8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_001201ac:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[9], 3, 8u, &shc); cpu->r[9] = v;
    }
L_001201b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[9];
    }
L_001201b4:;
    {
        vfp_vsub(cpu, 15, 15, 16);
    }
L_001201b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001201c0u + - 0x224u);
    }
L_001201bc:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001201c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001201c4:;
    {
        vfp_sync_flags(cpu);
    }
L_001201c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00120474;
        }
    }
L_001201cc:;
    {
        cpu->r[3] = rd32(0x001201d4u + - 0x250u);
    }
L_001201d0:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_001201d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001201d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001201dc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001201e0:;
    {
        cpu->r[14] = 0x001201e4u; fn_00135cf4(cpu);
    }
L_001201e4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_001201e8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001201ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001201f0:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_001201f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001201fcu + - 0x268u);
    }
L_001201f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001201fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00120200:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_00120204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00120208:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0x8u);
    }
L_0012020c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_00120210:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 24u, &shc); cpu->r[1] = v;
    }
L_00120214:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 3, 8u, &shc); cpu->r[1] = v;
    }
L_00120218:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012021c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00120220:;
    {
        cpu->r[14] = 0x00120224u; fn_00135568(cpu);
    }
L_00120224:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_00120228:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012022c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0xcu);
    }
L_00120230:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00120234:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00120238:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0012023c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00120240:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00120244:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00120248:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0012024c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00120250:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_00120254:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00120258:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0012025c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[12], 0x00000093u, 1, 0);
    }
L_00120260:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x8u);
    }
L_00120264:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x4u);
    }
L_00120268:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 24u, &shc); cpu->r[1] = v;
    }
L_0012026c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 3, 8u, &shc); cpu->r[1] = v;
    }
L_00120270:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[1]);
    }
L_00120274:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00120278:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012027c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_00120280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00120284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_00120288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0012028c:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x8u);
    }
L_00120290:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_00120294:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_00120298:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 3, 8u, &shc); cpu->r[1] = v;
    }
L_0012029c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001202a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001202a4:;
    {
        vfp_sync_flags(cpu);
    }
L_001202a8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00120560;
        }
    }
L_001202ac:;
    {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[1] = v;
    }
L_001202b0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001202b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001202b8:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001202bc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001202c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_001202c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1]);
        }
    }
L_001202c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011fcc8;
        }
    }
L_001202cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001202d0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000093u, 0, 0);
    }
L_001202d4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001202d8:;
    {
        goto L_0011febc;
    }
L_001202dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001202e4u + - 0x348u);
    }
L_001202e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001202e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001202e8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[1] = v;
        }
    }
L_001202ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x0000003fu;
        }
    }
L_001202f0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[1] | 0x80000000u; cpu->r[1] = v;
        }
    }
L_001202f4:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[0] + + 0x8u, cpu->r[12]);
        }
    }
L_001202f8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
        }
    }
L_001202fc:;
    {
        goto L_0011fdd0;
    }
L_00120300:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120308u + - 0x370u);
    }
L_00120304:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00120308:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x950u);
    }
L_0012030c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00120310:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00120314:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00120318:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_0012031c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00120320:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_00120324:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012032cu + - 0x390u);
    }
L_00120328:;
    {
        cpu->r[7] = rd8(cpu->r[1] + + 0x4u);
    }
L_0012032c:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00120330:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_00120334:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00120338:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[7] = v;
    }
L_0012033c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 24u, &shc); cpu->r[6] = v;
    }
L_00120340:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
    }
L_00120344:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_00120348:;
    {
        goto L_0011fd18;
    }
L_0012034c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00001b80u, 0, 0);
    }
L_00120350:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00120354:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_00120358:;
    {
        cpu->r[8] = rd8(cpu->r[6] + + 0x8u);
    }
L_0012035c:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x4u);
    }
L_00120360:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[8] = v;
    }
L_00120364:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 3, 8u, &shc); cpu->r[8] = v;
    }
L_00120368:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_0012036c:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_00120370:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00120374:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00120378:;
    {
        vfp_sync_flags(cpu);
    }
L_0012037c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011fd84;
        }
    }
L_00120380:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00120384:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 24u, &shc); cpu->r[8] = v;
    }
L_00120388:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[8]);
    }
L_0012038c:;
    {
        uint32_t v = cpu->r[7] & 0x000000ffu; cpu->r[7] = v;
    }
L_00120390:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[8]);
    }
L_00120394:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00120398:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[7] = v;
    }
L_0012039c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
    }
L_001203a0:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[9] = v;
    }
L_001203a4:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[8] = v;
    }
L_001203a8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[9]);
    }
L_001203ac:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[8]);
    }
L_001203b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001203b4:;
    {
        cpu->r[7] = rd8(cpu->r[6] + + 0x4u);
    }
L_001203b8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[8] = v;
    }
L_001203bc:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001203c0:;
    {
        wr8(cpu->r[6] + + 0x8u, cpu->r[8]);
    }
L_001203c4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_001203c8:;
    {
        goto L_0011fd88;
    }
L_001203cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001203d4u + + 0x1b8u);
    }
L_001203d0:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001203d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001203dcu + + 0x1b4u);
    }
L_001203d8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001203dc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001203e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001203e4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001203e8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001203ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001203f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_001203f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001203f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001203fc:;
    {
        cpu->r[9] = rd8(cpu->r[0] + + 0x4u);
    }
L_00120400:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00120404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00120408:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012040c:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00120410:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_00120414:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00120418:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[0]);
    }
L_0012041c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00120420:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[9] = v;
    }
L_00120424:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00120428:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[9]);
    }
L_0012042c:;
    {
        goto L_001201b4;
    }
L_00120430:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x950u);
    }
L_00120434:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012043cu + + 0x158u);
    }
L_00120438:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0012043c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[10] = v;
    }
L_00120440:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_00120444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00120448:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_0012044c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00120450:;
    {
        cpu->r[9] = rd8(cpu->r[1] + + 0x8u);
    }
L_00120454:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00120458:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 24u, &shc); cpu->r[8] = v;
    }
L_0012045c:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[8]);
    }
L_00120460:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[8] = v;
    }
L_00120464:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[8]);
    }
L_00120468:;
    {
        goto L_0011ffe0;
    }
L_0012046c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00120470:;
    {
        goto L_001200e4;
    }
L_00120474:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00120478:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0012047c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120484u + + 0x114u);
    }
L_00120480:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_00120484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00120488:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_0012048c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00120490:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0xcu);
    }
L_00120494:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x8u);
    }
L_00120498:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_0012049c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[9], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001204a0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001204a4:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_001204a8:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001204ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001204b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001204b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001201cc;
        }
    }
L_001204b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_001204bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_001204c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001204c4:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8u);
    }
L_001204c8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x4u);
    }
L_001204cc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_001204d0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[9], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001204d4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001204d8:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_001204dc:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001204e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001204e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001204e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001201cc;
        }
    }
L_001204ec:;
    {
        cpu->r[9] = rd8(cpu->r[1] + + 0x4u);
    }
L_001204f0:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001204f4:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[2] = v;
    }
L_001204f8:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_001204fc:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_00120500:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00120504:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00120508:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_0012050c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00120510:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_00120514:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00120518:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0012051c:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00120520:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_00120524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00120528:;
    {
        cpu->r[8] = rd8(cpu->r[0] + + 0x4u);
    }
L_0012052c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00120530:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00120534:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00120538:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0012053c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120540:;
    {
        goto L_00120274;
    }
L_00120544:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00120548:;
    {
        vfp_sync_flags(cpu);
    }
L_0012054c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[12] & 0x000000ffu; cpu->r[12] = v;
        }
    }
L_00120550:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[1] + + 0x8u, cpu->r[12]);
        }
    }
L_00120554:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00120558:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[1] + + 0xcu, cpu->r[12]);
        }
    }
L_0012055c:;
    {
        goto L_0011fcc8;
    }
L_00120560:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120568u + + 0x34u);
    }
L_00120564:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00120568:;
    {
        vfp_sync_flags(cpu);
    }
L_0012056c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001202bc;
        }
    }
L_00120570:;
    {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[8] = v;
    }
L_00120574:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00120578:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_0012057c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00120580:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00120584:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00120588:;
    {
        goto L_001202bc;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu17ApplyMenuSettingsEv @ 001205a0 (arm) */
void fn_001205a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001205a0:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x8cau);
    }
L_001205a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001205a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001205ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001205b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001205b4:;
    {
        cpu->r[3] = rd32(0x001205bcu + + 0x64u);
    }
L_001205b8:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001205bc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001205c0:;
    {
        cpu->r[0] = rd32(0x001205c8u + + 0x5cu);
    }
L_001205c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001205ccu, cpu->r[3], 0, 0);
    }
L_001205c8:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_001205cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
        }
    }
L_001205d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001205d4:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[1]);
    }
L_001205d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_001205dc:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_001205e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000005c9u;
        }
    }
L_001205e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
        }
    }
L_001205e8:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001205ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_001205f0:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001205f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001205f8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001205fc:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00120600:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00120604:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00120608:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0012060c:;
    {
        cpu->r[14] = 0x00120610u; fn_0009b4d0(cpu);
    }
L_00120610:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_00120614:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[3]);
    }
L_00120618:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_0012061c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00120620u)) return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenuD1Ev @ 00120628 (arm) */
void fn_00120628(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120628:;
    {
        cpu->r[3] = rd32(0x00120630u + + 0x24u);
    }
L_0012062c:;
    {
        cpu->r[2] = rd32(0x00120634u + + 0x24u);
    }
L_00120630:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120638u, cpu->r[3], 0, 0);
    }
L_00120634:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00120638:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012063c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120640:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00120644:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00120648:;
    {
        cpu->r[14] = 0x0012064cu; fn_000ec21c(cpu);
    }
L_0012064c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120650:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00120654u)) return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenuD0Ev @ 0012065c (arm) */
void fn_0012065c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012065c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00120660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120664:;
    {
        cpu->r[14] = 0x00120668u; fn_00120628(cpu);
    }
L_00120668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012066c:;
    {
        cpu->r[14] = 0x00120670u; fn_0018ba20(cpu);
    }
L_00120670:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120674:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00120678u)) return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenuD2Ev @ 00120678 (arm) */
void fn_00120678(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120678:;
    {
        cpu->r[3] = rd32(0x00120680u + + 0x24u);
    }
L_0012067c:;
    {
        cpu->r[2] = rd32(0x00120684u + + 0x24u);
    }
L_00120680:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120688u, cpu->r[3], 0, 0);
    }
L_00120684:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00120688:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012068c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00120694:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00120698:;
    {
        cpu->r[14] = 0x0012069cu; fn_000ec21c(cpu);
    }
L_0012069c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001206a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001206a4u)) return;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenuC1Eib @ 001206ac (arm) */
void fn_001206ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001206ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001206b0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001206b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001206b8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001206bc:;
    {
        cpu->r[6] = rd32(0x001206c4u + + 0x80u);
    }
L_001206c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001206c4:;
    {
        cpu->r[14] = 0x001206c8u; fn_001100c0(cpu);
    }
L_001206c8:;
    {
        cpu->r[3] = rd32(0x001206d0u + + 0x78u);
    }
L_001206cc:;
    {
        cpu->r[6] = add_flags(cpu, 0x001206d4u, cpu->r[6], 0, 0);
    }
L_001206d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_001206d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001206d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001206dc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001206e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00120708;
        }
    }
L_001206e4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001206e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001206f0u + + 0x50u);
    }
L_001206ec:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_001206f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001206f4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001206f8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_001206fc:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00120700:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00120704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00120708u)) return;
    }
L_00120708:;
    {
        cpu->r[1] = rd32(0x00120710u + + 0x3cu);
    }
L_0012070c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00120710:;
    {
        cpu->r[2] = rd32(0x00120718u + + 0x38u);
    }
L_00120714:;
    {
        cpu->r[14] = 0x00000027u;
    }
L_00120718:;
    {
        cpu->r[3] = rd32(0x00120720u + + 0x34u);
    }
L_0012071c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00120724u, cpu->r[1], 0, 0);
    }
L_00120720:;
    {
        cpu->r[12] = rd32(0x00120728u + + 0x30u);
    }
L_00120724:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012072cu, cpu->r[2], 0, 0);
    }
L_00120728:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120730u, cpu->r[3], 0, 0);
    }
L_0012072c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00120730:;
    {
        cpu->r[12] = add_flags(cpu, 0x00120738u, cpu->r[12], 0, 0);
    }
L_00120734:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00120738:;
    {
        cpu->r[14] = 0x0012073cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0012073c:;
    {
        goto L_001206e4;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu6UpdateEv @ 0012075c (arm) */
void fn_0012075c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012075c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00120760:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x94u);
    }
L_00120764:;
    {
        cpu->r[4] = rd32(0x0012076cu + + 0x18cu);
    }
L_00120768:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012076c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00120770:;
    {
        cpu->r[4] = add_flags(cpu, 0x00120778u, cpu->r[4], 0, 0);
    }
L_00120774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120808;
        }
    }
L_00120778:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0012077c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120790;
        }
    }
L_00120780:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00120784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00120788u)) return;
        }
    }
L_00120788:;
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
L_0012078c:;
    {
        return fn_00114a58(cpu);
    }
L_00120790:;
    {
        cpu->r[14] = 0x00120794u; fn_0010da28(cpu);
    }
L_00120794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00120798:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012079cu)) return;
        }
    }
L_0012079c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_001207a0:;
    {
        cpu->r[2] = 0x000005ccu;
    }
L_001207a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001207a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120898;
        }
    }
L_001207ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012082c;
        }
    }
L_001207b0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001207b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001207b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120850;
        }
    }
L_001207bc:;
    {
        cpu->r[2] = 0x000005cbu;
    }
L_001207c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001207c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00120844;
        }
    }
L_001207c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_001207cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001207d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120844;
        }
    }
L_001207d4:;
    {
        cpu->r[3] = rd32(0x001207dcu + + 0x120u);
    }
L_001207d8:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001207dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001207e0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001207e4:;
    {
        cpu->r[14] = 0x001207e8u; fn_0018ba6c(cpu);
    }
L_001207e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001207ec:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001207f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001207f4:;
    {
        cpu->r[14] = 0x001207f8u; fn_001206ac(cpu);
    }
L_001207f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001207fc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00120800:;
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
L_00120804:;
    {
        return fn_000f36dc(cpu);
    }
L_00120808:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0012080c:;
    {
        cpu->r[14] = 0x00120810u; fn_000eb59c(cpu);
    }
L_00120810:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00120814:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00120818:;
    {
        cpu->r[14] = 0x00120820u;
    }
L_0012081c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120820u)) return;
    }
L_00120820:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00120824:;
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
L_00120828:;
    {
        return fn_0010efe4(cpu);
    }
L_0012082c:;
    {
        cpu->r[2] = 0x000005cdu;
    }
L_00120830:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00120834:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120868;
        }
    }
L_00120838:;
    {
        cpu->r[2] = 0x000005ceu;
    }
L_0012083c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00120840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001208c8;
        }
    }
L_00120844:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00120848:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0012084c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00120850u)) return;
    }
L_00120850:;
    {
        cpu->r[3] = rd32(0x00120858u + + 0xa4u);
    }
L_00120854:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00120858:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012085c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00120860:;
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
L_00120864:;
    {
        return fn_000f34e8(cpu);
    }
L_00120868:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_0012086c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00120870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120844;
        }
    }
L_00120874:;
    {
        cpu->r[3] = rd32(0x0012087cu + + 0x80u);
    }
L_00120878:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_0012087c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00120880:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00120884:;
    {
        cpu->r[14] = 0x00120888u; fn_0018ba6c(cpu);
    }
L_00120888:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012088c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120890:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120894:;
    {
        goto L_001207f4;
    }
L_00120898:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_0012089c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001208a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120844;
        }
    }
L_001208a4:;
    {
        cpu->r[3] = rd32(0x001208acu + + 0x50u);
    }
L_001208a8:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001208ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001208b0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001208b4:;
    {
        cpu->r[14] = 0x001208b8u; fn_0018ba6c(cpu);
    }
L_001208b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001208bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001208c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001208c4:;
    {
        goto L_001207f4;
    }
L_001208c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_001208cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001208d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120844;
        }
    }
L_001208d4:;
    {
        cpu->r[3] = rd32(0x001208dcu + + 0x20u);
    }
L_001208d8:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001208dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001208e0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001208e4:;
    {
        cpu->r[14] = 0x001208e8u; fn_0018ba6c(cpu);
    }
L_001208e8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001208ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001208f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001208f4:;
    {
        goto L_001207f4;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenuC2Eib @ 00120900 (arm) */
void fn_00120900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120900:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00120904:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00120908:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012090c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00120910:;
    {
        cpu->r[6] = rd32(0x00120918u + + 0x80u);
    }
L_00120914:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120918:;
    {
        cpu->r[14] = 0x0012091cu; fn_001100c0(cpu);
    }
L_0012091c:;
    {
        cpu->r[3] = rd32(0x00120924u + + 0x78u);
    }
L_00120920:;
    {
        cpu->r[6] = add_flags(cpu, 0x00120928u, cpu->r[6], 0, 0);
    }
L_00120924:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_00120928:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0012092c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00120930:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00120934:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0012095c;
        }
    }
L_00120938:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012093c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120944u + + 0x50u);
    }
L_00120940:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_00120944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120948:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012094c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_00120950:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00120954:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00120958:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012095cu)) return;
    }
L_0012095c:;
    {
        cpu->r[1] = rd32(0x00120964u + + 0x3cu);
    }
L_00120960:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00120964:;
    {
        cpu->r[2] = rd32(0x0012096cu + + 0x38u);
    }
L_00120968:;
    {
        cpu->r[14] = 0x00000027u;
    }
L_0012096c:;
    {
        cpu->r[3] = rd32(0x00120974u + + 0x34u);
    }
L_00120970:;
    {
        cpu->r[1] = add_flags(cpu, 0x00120978u, cpu->r[1], 0, 0);
    }
L_00120974:;
    {
        cpu->r[12] = rd32(0x0012097cu + + 0x30u);
    }
L_00120978:;
    {
        cpu->r[2] = add_flags(cpu, 0x00120980u, cpu->r[2], 0, 0);
    }
L_0012097c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120984u, cpu->r[3], 0, 0);
    }
L_00120980:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00120984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0012098cu, cpu->r[12], 0, 0);
    }
L_00120988:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012098c:;
    {
        cpu->r[14] = 0x00120990u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00120990:;
    {
        goto L_00120938;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu17RenderColorSliderEv @ 001209b0 (arm) */
void fn_001209b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001209b0:;
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
L_001209b4:;
    {
        cpu->r[4] = rd32(0x001209bcu + + 0x340u);
    }
L_001209b8:;
    {
        cpu->r[8] = rd32(0x001209c0u + + 0x340u);
    }
L_001209bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001209c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001209c8u, cpu->r[4], 0, 0);
    }
L_001209c4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001209c8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001209cc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001209d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001209d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120c5c;
        }
    }
L_001209d8:;
    {
        cpu->r[5] = rd32(0x001209e0u + + 0x324u);
    }
L_001209dc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001209e0:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001209e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001209e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001209ec:;
    {
        cpu->r[14] = 0x001209f0u; fn_0018aa44(cpu);
    }
L_001209f0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001209f4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001209f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001209fc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00120a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120ca0;
        }
    }
L_00120a04:;
    {
        cpu->r[1] = 0x00000038u;
    }
L_00120a08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120a0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00120a10:;
    {
        cpu->r[14] = 0x00120a14u; fn_0018aa44(cpu);
    }
L_00120a14:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x950u);
    }
L_00120a18:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_00120a1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120a24u + + 0x2b8u);
    }
L_00120a20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00120a24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00120a28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00120a2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00120a30:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00120a34:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x8u);
    }
L_00120a38:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_00120a3c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00120a40:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00120a44:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00120a48:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00120a4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120a54u + + 0x28cu);
    }
L_00120a50:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_00120a54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120a5cu + + 0x288u);
    }
L_00120a58:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00120a5c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00120a60:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00120a64:;
    {
        add_flags(cpu, cpu->r[9], 0x0000007au, 0, 1);
    }
L_00120a68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = (~0x00000079u);
        }
    }
L_00120a6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00120a78;
        }
    }
L_00120a70:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000078u, 1, 1);
    }
L_00120a74:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = 0x00000078u;
        }
    }
L_00120a78:;
    {
        cpu->r[12] = rd32(0x00120a80u + + 0x288u);
    }
L_00120a7c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00120a80:;
    {
        cpu->r[11] = rd32(0x00120a88u + + 0x284u);
    }
L_00120a84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120a88:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00120a8c:;
    {
        cpu->r[1] = 0x0000010bu;
    }
L_00120a90:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00120a94:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00120a98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00120a9c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00120aa0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00120aa4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00120aa8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00120aac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_00120ab0:;
    {
        cpu->r[14] = 0x00120ab4u; fn_000ad8a0(cpu);
    }
L_00120ab4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00120ab8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00120abc:;
    {
        cpu->r[1] = 0x0000010eu;
    }
L_00120ac0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120ac4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00120ac8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_00120acc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_00120ad0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00120ad4:;
    {
        cpu->r[14] = 0x00120ad8u; fn_000ad8a0(cpu);
    }
L_00120ad8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x950u);
    }
L_00120adc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120ae4u + + 0x200u);
    }
L_00120ae0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_00120ae4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00120aecu + + 0x1fcu);
    }
L_00120ae8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00120aec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00120af0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00120af4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00120af8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00120afc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xcu);
    }
L_00120b00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00120b04:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00120b08:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00120b0c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00120b10:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_00120b14:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00120b18:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00120b1c:;
    {
        add_flags(cpu, cpu->r[9], 0x0000007au, 0, 1);
    }
L_00120b20:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = (~0x00000079u);
        }
    }
L_00120b24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00120b30;
        }
    }
L_00120b28:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000078u, 1, 1);
    }
L_00120b2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = 0x00000078u;
        }
    }
L_00120b30:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00120b34:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00120b38:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00120b3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120b40:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00120b44:;
    {
        cpu->r[1] = 0x0000010cu;
    }
L_00120b48:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00120b4c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00120b50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00120b54:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00120b58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 0);
    }
L_00120b5c:;
    {
        cpu->r[14] = 0x00120b60u; fn_000ad8a0(cpu);
    }
L_00120b60:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00120b64:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00120b68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00120b6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00120b70:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00120b74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 0);
    }
L_00120b78:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00120b7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00120b80:;
    {
        cpu->r[14] = 0x00120b84u; fn_000ad8a0(cpu);
    }
L_00120b84:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00120b88:;
    {
        cpu->r[1] = 0x0000010eu;
    }
L_00120b8c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00120b90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120b94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00120b98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_00120b9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 0);
    }
L_00120ba0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00120ba4:;
    {
        cpu->r[14] = 0x00120ba8u; fn_000ad8a0(cpu);
    }
L_00120ba8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x950u);
    }
L_00120bac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120bb4u + + 0x138u);
    }
L_00120bb0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_00120bb4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00120bbcu + + 0x134u);
    }
L_00120bb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00120bbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00120bc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00120bc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00120bc8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x8u);
    }
L_00120bcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_00120bd0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00120bd4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00120bd8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00120bdc:;
    {
        vfp_vadd(cpu, 13, 13, 14);
    }
L_00120be0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120be8u + + 0x10cu);
    }
L_00120be4:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00120be8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00120bf0u + + 0x108u);
    }
L_00120bec:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_00120bf0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00120bf4:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00120bf8:;
    {
        add_flags(cpu, cpu->r[5], 0x0000004du, 0, 1);
    }
L_00120bfc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = (~0x0000004cu);
        }
    }
L_00120c00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00120c0c;
        }
    }
L_00120c04:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000004bu, 1, 1);
    }
L_00120c08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x0000004bu;
        }
    }
L_00120c0c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00120c10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00120c14:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00120c18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120c1c:;
    {
        cpu->r[1] = 0x0000010au;
    }
L_00120c20:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00120c24:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00120c28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00120c2c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00120c30:;
    {
        cpu->r[14] = 0x00120c34u; fn_000ad8a0(cpu);
    }
L_00120c34:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00120c38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120c3c:;
    {
        cpu->r[1] = 0x0000010du;
    }
L_00120c40:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00120c44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00120c48:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[5], 1, 0);
    }
L_00120c4c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00120c50:;
    {
        cpu->r[14] = 0x00120c54u; fn_000ad8a0(cpu);
    }
L_00120c54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00120c58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00120c5cu)) return;
    }
L_00120c5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120c60:;
    {
        cpu->r[14] = 0x00120c64u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00120c64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00120c68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001209d8;
        }
    }
L_00120c6c:;
    {
        cpu->r[5] = rd32(0x00120c74u + + 0x90u);
    }
L_00120c70:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00120c74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120c78:;
    {
        cpu->r[14] = 0x00120c7cu; fn_0018aa20(cpu);
    }
L_00120c7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120c80:;
    {
        cpu->r[14] = 0x00120c84u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00120c84:;
    {
        cpu->r[3] = rd32(0x00120c8cu + + 0x84u);
    }
L_00120c88:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120c8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00120c90:;
    {
        cpu->r[3] = rd32(0x00120c98u + + 0x7cu);
    }
L_00120c94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00120c98:;
    {
        cpu->r[14] = 0x00120c9cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00120c9c:;
    {
        goto L_001209dc;
    }
L_00120ca0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00120ca4:;
    {
        cpu->r[14] = 0x00120ca8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00120ca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00120cac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120a04;
        }
    }
L_00120cb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120cb4:;
    {
        cpu->r[14] = 0x00120cb8u; fn_0018aa20(cpu);
    }
L_00120cb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00120cbc:;
    {
        cpu->r[14] = 0x00120cc0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00120cc0:;
    {
        cpu->r[3] = rd32(0x00120cc8u + + 0x48u);
    }
L_00120cc4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120cc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00120ccc:;
    {
        cpu->r[3] = rd32(0x00120cd4u + + 0x40u);
    }
L_00120cd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00120cd4:;
    {
        cpu->r[14] = 0x00120cd8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00120cd8:;
    {
        goto L_00120a04;
    }
}

/* _ZN29GS_SelectCarBodypartPaintMenu6RenderEv @ 00120d18 (arm) */
void fn_00120d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120d18:;
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
L_00120d1c:;
    {
        cpu->r[8] = rd32(0x00120d24u + + 0x240u);
    }
L_00120d20:;
    {
        cpu->r[6] = rd32(0x00120d28u + + 0x240u);
    }
L_00120d24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00120d28:;
    {
        cpu->r[8] = add_flags(cpu, 0x00120d30u, cpu->r[8], 0, 0);
    }
L_00120d2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00120d30:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_00120d34:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00120d38:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00120d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120eb0;
        }
    }
L_00120d40:;
    {
        cpu->r[5] = rd32(0x00120d48u + + 0x224u);
    }
L_00120d44:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00120d48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00120d4c:;
    {
        cpu->r[14] = 0x00120d50u; fn_00096a08(cpu);
    }
L_00120d50:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_00120d54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120d58:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00120d5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00120d60:;
    {
        cpu->r[14] = 0x00120d64u; fn_0018aa44(cpu);
    }
L_00120d64:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_00120d68:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00120d6c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00120d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120ef4;
        }
    }
L_00120d74:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00120d78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00120d7c:;
    {
        cpu->r[14] = 0x00120d80u; fn_00096a08(cpu);
    }
L_00120d80:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120d84:;
    {
        cpu->r[7] = 0x00001c4cu;
    }
L_00120d88:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00120d8c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00120d90:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_00120d94:;
    {
        cpu->r[14] = 0x00120d98u; fn_0018aa44(cpu);
    }
L_00120d98:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00120d9c:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00120da0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00120da4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120da8:;
    {
        cpu->r[14] = 0x00120dacu; fn_00113570(cpu);
    }
L_00120dac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00120db0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00120db4:;
    {
        cpu->r[14] = 0x00120db8u; fn_000978a8(cpu);
    }
L_00120db8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00120dbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00120dc0:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00120dc4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x444u);
    }
L_00120dc8:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00120dcc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[14]; cpu->r[2] = v;
    }
L_00120dd0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00120dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000500u, 0, 0);
    }
L_00120dd8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00120ddc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_00120de0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120de4:;
    {
        cpu->r[14] = 0x00120decu;
    }
L_00120de8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120decu)) return;
    }
L_00120dec:;
    {
        cpu->r[3] = rd32(0x00120df4u + + 0x17cu);
    }
L_00120df0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00120df4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00120df8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00120dfc:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120e00:;
    {
        cpu->r[3] = rd32(0x00120e08u + + 0x16cu);
    }
L_00120e04:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00120e08:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120e0c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00120e10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00120e14:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_00120e18:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00120e1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120e20:;
    {
        cpu->r[14] = 0x00120e24u; fn_000ad19c(cpu);
    }
L_00120e24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00120e28:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00120e2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00120e30:;
    {
        cpu->r[14] = 0x00120e34u; fn_000a439c(cpu);
    }
L_00120e34:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00120e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00120f30;
        }
    }
L_00120e3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00120e40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00120e44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00120e74;
        }
    }
L_00120e48:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00120e4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00120e50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00120e54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120e58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00120e5c:;
    {
        cpu->r[14] = 0x00120e64u;
    }
L_00120e60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120e64u)) return;
    }
L_00120e64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00120e68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00120e6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00120e70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00120e4c;
        }
    }
L_00120e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120e78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00120e7c:;
    {
        cpu->r[14] = 0x00120e84u;
    }
L_00120e80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120e84u)) return;
    }
L_00120e84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120e88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00120e8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00120e90:;
    {
        cpu->r[14] = 0x00120e98u;
    }
L_00120e94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120e98u)) return;
    }
L_00120e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120e9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00120ea0:;
    {
        cpu->r[14] = 0x00120ea8u;
    }
L_00120ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00120ea8u)) return;
    }
L_00120ea8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00120eac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00120eb0u)) return;
    }
L_00120eb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00120eb4:;
    {
        cpu->r[14] = 0x00120eb8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00120eb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00120ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120d40;
        }
    }
L_00120ec0:;
    {
        cpu->r[5] = rd32(0x00120ec8u + + 0xa4u);
    }
L_00120ec4:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_00120ec8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120ecc:;
    {
        cpu->r[14] = 0x00120ed0u; fn_0018aa20(cpu);
    }
L_00120ed0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00120ed4:;
    {
        cpu->r[14] = 0x00120ed8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00120ed8:;
    {
        cpu->r[3] = rd32(0x00120ee0u + + 0x98u);
    }
L_00120edc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00120ee0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120ee4:;
    {
        cpu->r[3] = rd32(0x00120eecu + + 0x90u);
    }
L_00120ee8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120eec:;
    {
        cpu->r[14] = 0x00120ef0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00120ef0:;
    {
        goto L_00120d44;
    }
L_00120ef4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120ef8:;
    {
        cpu->r[14] = 0x00120efcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00120efc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00120f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00120d74;
        }
    }
L_00120f04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00120f08:;
    {
        cpu->r[14] = 0x00120f0cu; fn_0018aa20(cpu);
    }
L_00120f0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00120f10:;
    {
        cpu->r[14] = 0x00120f14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00120f14:;
    {
        cpu->r[3] = rd32(0x00120f1cu + + 0x5cu);
    }
L_00120f18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00120f1c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120f20:;
    {
        cpu->r[3] = rd32(0x00120f28u + + 0x54u);
    }
L_00120f24:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00120f28:;
    {
        cpu->r[14] = 0x00120f2cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00120f2c:;
    {
        goto L_00120d74;
    }
L_00120f30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00120f34:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00120f38:;
    {
        cpu->r[2] = 0x55000000u;
    }
L_00120f3c:;
    {
        cpu->r[14] = 0x00120f40u; fn_0010dda8(cpu);
    }
L_00120f40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00120f44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00120f48:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_00120f4c:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00120f50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00120f54:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00120f58:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00120f5c:;
    {
        cpu->r[14] = 0x00120f60u; fn_000ad8a0(cpu);
    }
L_00120f60:;
    {
        goto L_00120e3c;
    }
}

/* _ZN22GS_SelectCarDecalsMenu8isKindOfEi @ 00120f80 (arm) */
void fn_00120f80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120f80:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002cu, 1, 1);
    }
L_00120f84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00120f88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00120f8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_40 @ 00120f90 (arm) */
void fn_00120f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120f90:;
    {
        cpu->r[1] = rd32(0x00120f98u + + 0x40u);
    }
L_00120f94:;
    {
        cpu->r[0] = rd32(0x00120f9cu + + 0x40u);
    }
L_00120f98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00120fa0u, cpu->r[1], 0, 0);
    }
L_00120f9c:;
    {
        cpu->r[3] = rd32(0x00120fa4u + + 0x3cu);
    }
L_00120fa0:;
    {
        cpu->r[2] = rd32(0x00120fa8u + + 0x3cu);
    }
L_00120fa4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00120fa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120fb0u, cpu->r[3], 0, 0);
    }
L_00120fac:;
    {
        cpu->r[2] = add_flags(cpu, 0x00120fb4u, cpu->r[2], 0, 0);
    }
L_00120fb0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00120fb4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_00120fb8:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00120fbc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00120fc0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_00120fc4:;
    {
        wr32(cpu->r[2] + + 0x28u, cpu->r[1]);
    }
L_00120fc8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_00120fcc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_00120fd0:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_00120fd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_SelectCarDecalsMenuD1Ev @ 00120fe8 (arm) */
void fn_00120fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00120fe8:;
    {
        cpu->r[3] = rd32(0x00120ff0u + + 0x24u);
    }
L_00120fec:;
    {
        cpu->r[2] = rd32(0x00120ff4u + + 0x24u);
    }
L_00120ff0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00120ff8u, cpu->r[3], 0, 0);
    }
L_00120ff4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00120ff8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00120ffc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121000:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00121004:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00121008:;
    {
        cpu->r[14] = 0x0012100cu; fn_000ec21c(cpu);
    }
L_0012100c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121010:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00121014u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenu18UnloadDecalTextureEv @ 0012101c (arm) */
void fn_0012101c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012101c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00121020:;
    {
        cpu->r[4] = rd32(0x00121028u + + 0x88u);
    }
L_00121024:;
    {
        cpu->r[3] = rd32(0x0012102cu + + 0x88u);
    }
L_00121028:;
    {
        cpu->r[5] = 0x00001bbdu;
    }
L_0012102c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121034u, cpu->r[4], 0, 0);
    }
L_00121030:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121034:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00121038:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012103c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121040:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[1] + cpu->r[5]);
    }
L_00121044:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_00121048:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00005d00u, 0, 0);
    }
L_0012104c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c0u, 0, 0);
    }
L_00121050:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00121054:;
    {
        cpu->r[14] = 0x00121058u; fn_00135c90(cpu);
    }
L_00121058:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012105c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00121060:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00121064:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00121068:;
    {
        cpu->r[14] = 0x0012106cu; fn_001367cc(cpu);
    }
L_0012106c:;
    {
        cpu->r[0] = rd32(0x00121074u + + 0x44u);
    }
L_00121070:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00121074:;
    {
        cpu->r[2] = 0x00005dc0u;
    }
L_00121078:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012107c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00121080:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[1] + cpu->r[5]);
    }
L_00121084:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00121088:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_0012108c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00005d00u, 0, 0);
    }
L_00121090:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c0u, 0, 0);
    }
L_00121094:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00121098:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_0012109c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001210a0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001210a4:;
    {
        cpu->r[14] = 0x001210acu;
    }
L_001210a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001210acu)) return;
    }
L_001210ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001210b0u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenu11DoBarActionEii @ 001210bc (arm) */
void fn_001210bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001210bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001210c0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001210c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001210c8:;
    {
        cpu->r[5] = rd32(0x001210d0u + + 0xecu);
    }
L_001210cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001210d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001210d4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001210dcu, cpu->r[5], 0, 0);
    }
L_001210d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121158;
        }
    }
L_001210dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001210e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_001210e4:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_001210e8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001210ec:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001210f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001210f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001210f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001210fc:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00121100:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00121104:;
    {
        cpu->r[14] = 0x00121108u; fn_00093f34(cpu);
    }
L_00121108:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0012110c:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00121110:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00121114:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00121118:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0012111c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00121120:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00121124:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00121128:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0012112c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121130:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00121134:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00121138:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0012113c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00121140:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00121144:;
    {
        cpu->r[14] = 0x00121148u; fn_000fd248(cpu);
    }
L_00121148:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0012114c:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00121150:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00121154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121160;
        }
    }
L_00121158:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012115c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00121160u)) return;
    }
L_00121160:;
    {
        cpu->r[3] = rd32(0x00121168u + + 0x58u);
    }
L_00121164:;
    {
        cpu->r[1] = 0x00001c38u;
    }
L_00121168:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012116c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121170:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00121174:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00121178:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0012117c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_00121180:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_00121184:;
    {
        cpu->r[14] = 0x00121188u; fn_000933e0(cpu);
    }
L_00121188:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012118c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00121190:;
    {
        cpu->r[14] = 0x00121194u; fn_0009e9e8(cpu);
    }
L_00121194:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_00121198:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012119c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121158;
        }
    }
L_001211a0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001211a4:;
    {
        cpu->r[14] = 0x001211a8u; fn_00093f34(cpu);
    }
L_001211a8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001211ac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001211b0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001211b4:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001211b8:;
    {
        goto L_00121158;
    }
}

/* _ZN22GS_SelectCarDecalsMenu6UpdateEv @ 001211c4 (arm) */
void fn_001211c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001211c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001211c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001211cc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001211d0:;
    {
        cpu->r[14] = 0x001211d8u;
    }
L_001211d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001211d8u)) return;
    }
L_001211d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001211dc:;
    {
        cpu->r[4] = rd32(0x001211e4u + + 0x6cu);
    }
L_001211e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001211e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001211ecu, cpu->r[4], 0, 0);
    }
L_001211e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121240;
        }
    }
L_001211ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001211f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121208;
        }
    }
L_001211f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001211f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001211fcu)) return;
        }
    }
L_001211fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121200:;
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
L_00121204:;
    {
        return fn_00114a58(cpu);
    }
L_00121208:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012120c:;
    {
        cpu->r[14] = 0x00121210u; fn_0010da28(cpu);
    }
L_00121210:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121218u)) return;
        }
    }
L_00121218:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0012121c:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00121220:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00121224:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121228u)) return;
        }
    }
L_00121228:;
    {
        cpu->r[3] = rd32(0x00121230u + + 0x24u);
    }
L_0012122c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00121230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121234:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00121238:;
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
L_0012123c:;
    {
        return fn_000f34e8(cpu);
    }
L_00121240:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121244:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00121248:;
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
L_0012124c:;
    {
        return fn_000eb59c(cpu);
    }
}

/* _ZN22GS_SelectCarDecalsMenu12UpdateColorsEv @ 00121258 (arm) */
void fn_00121258(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121258:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x958u);
    }
L_0012125c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121260:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00121264:;
    {
        cpu->r[5] = rd32(0x0012126cu + + 0xa4u);
    }
L_00121268:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012126c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00121274u, cpu->r[5], 0, 0);
    }
L_00121270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121300;
        }
    }
L_00121274:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121278:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_0012127c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00121280:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121284:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121288u)) return;
        }
    }
L_00121288:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x950u);
    }
L_0012128c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00121290:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00121294:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121298:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[14], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0012129c:;
    {
        cpu->r[12] = 0x00001bbeu;
    }
L_001212a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_001212a4:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[0]);
    }
L_001212a8:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_001212ac:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001212b0:;
    {
        cpu->r[14] = 0x001212b4u; fn_000b0c4c(cpu);
    }
L_001212b4:;
    {
        cpu->r[3] = rd32(0x001212bcu + + 0x58u);
    }
L_001212b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001212bc:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001212c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001212c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_001212c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_001212cc:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001212d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x000019c0u, 0, 0);
    }
L_001212d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000003du, 0, 0);
    }
L_001212d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001212dc:;
    {
        cpu->r[14] = 0x001212e0u; imp_memcpy(cpu); /* memcpy */
    }
L_001212e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00001b80u, 0, 0);
    }
L_001212e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_001212e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001212ec:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001212f0:;
    {
        cpu->r[14] = 0x001212f4u; imp_memcpy(cpu); /* memcpy */
    }
L_001212f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001212f8:;
    {
        wr8(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001212fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121300u)) return;
    }
L_00121300:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121304:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_00121308:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012130c:;
    {
        goto L_00121288;
    }
}

/* _ZN22GS_SelectCarDecalsMenu17ApplyMenuSettingsEv @ 00121318 (arm) */
void fn_00121318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121318:;
    {
        cpu->r[3] = rd32(0x00121320u + + 0x60u);
    }
L_0012131c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121320:;
    {
        cpu->r[3] = add_flags(cpu, 0x00121328u, cpu->r[3], 0, 0);
    }
L_00121324:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00121328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_0012132c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00121330:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00121334:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_00121338:;
    {
        cpu->r[3] = 0x000005c8u;
    }
L_0012133c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_00121340:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00121344:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_00121348:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_0012134c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121350:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00121354:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[5]);
    }
L_00121358:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012135c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00121360:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00121364:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00121368:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012136c:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[3]);
    }
L_00121370:;
    {
        cpu->r[14] = 0x00121374u; fn_0009b4d0(cpu);
    }
L_00121374:;
    {
        wr8(cpu->r[4] + + 0x958u, cpu->r[5]);
    }
L_00121378:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[0]);
    }
L_0012137c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121380u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenu8DoActionEii @ 00121384 (arm) */
void fn_00121384(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121384:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00121388:;
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
L_0012138c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00121390:;
    {
        cpu->r[5] = rd32(0x00121398u + + 0x1a8u);
    }
L_00121394:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00121398:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012139c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001213a4u, cpu->r[5], 0, 0);
    }
L_001213a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001213ac;
        }
    }
L_001213a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001213a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001213acu)) return;
    }
L_001213ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001213b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001213b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001214e8;
        }
    }
L_001213b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001213bc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001213c0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001213c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
        }
    }
L_001213c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001213cc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[7] = v;
        }
    }
L_001213d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_001213d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
        }
    }
L_001213d8:;
    {
        cpu->r[14] = 0x001213dcu; fn_0009b4d0(cpu);
    }
L_001213dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_001213e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001213e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001213e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_001213ec:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001213a4;
        }
    }
L_001213f0:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_001213f4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001213f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001214f8;
        }
    }
L_001213fc:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_00121400:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00121404:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001213a4;
        }
    }
L_00121408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012140c:;
    {
        cpu->r[8] = 0x00001bbdu;
    }
L_00121410:;
    {
        cpu->r[14] = 0x00121414u; fn_0012101c(cpu);
    }
L_00121414:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_00121418:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012141c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_00121420:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00121424:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_00121428:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012142c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[0] + cpu->r[8]);
    }
L_00121430:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000012u, 1, 1);
    }
L_00121434:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[0] + cpu->r[8], cpu->r[10]);
        }
    }
L_00121438:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_0012143c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[0] + cpu->r[8]);
        }
    }
L_00121440:;
    {
        cpu->r[14] = 0x00121444u; fn_000a42ac(cpu);
    }
L_00121444:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121418;
        }
    }
L_0012144c:;
    {
        cpu->r[8] = rd32(0x00121454u + + 0xf0u);
    }
L_00121450:;
    {
        cpu->r[3] = 0x00001bbeu;
    }
L_00121454:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121458:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_0012145c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00121460:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00121464:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_00121468:;
    {
        cpu->r[14] = 0x0012146cu; fn_000a4364(cpu);
    }
L_0012146c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012149c;
        }
    }
L_00121474:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00121478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012147c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012149c;
        }
    }
L_00121480:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_00121484:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00121488:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0012148c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00121490:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00121494:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00121498:;
    {
        cpu->r[14] = 0x0012149cu; fn_000fd248(cpu);
    }
L_0012149c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001214a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001214a4:;
    {
        wr8(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001214a8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001214ac:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001214b0:;
    {
        cpu->r[1] = 0x00001c38u;
    }
L_001214b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001214b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001214bc:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[6]);
    }
L_001214c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_001214c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001214c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_001214cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_001214d0:;
    {
        cpu->r[14] = 0x001214d4u; fn_000933e0(cpu);
    }
L_001214d4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001214d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001214dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001214e0:;
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
L_001214e4:;
    {
        return fn_0009e9e8(cpu);
    }
L_001214e8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001214ec:;
    {
        cpu->r[14] = 0x001214f4u;
    }
L_001214f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001214f4u)) return;
    }
L_001214f4:;
    {
        goto L_001213a4;
    }
L_001214f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001214fc:;
    {
        cpu->r[8] = 0x00001bbdu;
    }
L_00121500:;
    {
        cpu->r[14] = 0x00121504u; fn_0012101c(cpu);
    }
L_00121504:;
    {
        cpu->r[10] = 0x00000012u;
    }
L_00121508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012150c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_00121510:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00121514:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_00121518:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012151c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[0] + cpu->r[8]);
    }
L_00121520:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00121524:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[0] + cpu->r[8], cpu->r[10]);
        }
    }
L_00121528:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_0012152c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[0] + cpu->r[8]);
        }
    }
L_00121530:;
    {
        cpu->r[14] = 0x00121534u; fn_000a42ac(cpu);
    }
L_00121534:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121538:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121508;
        }
    }
L_0012153c:;
    {
        goto L_0012144c;
    }
}

/* _ZN22GS_SelectCarDecalsMenuC1Eb @ 00121548 (arm) */
void fn_00121548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121548:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012154c:;
    {
        cpu->r[4] = rd32(0x00121554u + + 0x20u);
    }
L_00121550:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121554:;
    {
        cpu->r[14] = 0x00121558u; fn_001100c0(cpu);
    }
L_00121558:;
    {
        cpu->r[3] = rd32(0x00121560u + + 0x18u);
    }
L_0012155c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121564u, cpu->r[4], 0, 0);
    }
L_00121560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121564:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012156c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00121570:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121574u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenuC2Eb @ 0012157c (arm) */
void fn_0012157c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012157c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121580:;
    {
        cpu->r[4] = rd32(0x00121588u + + 0x20u);
    }
L_00121584:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121588:;
    {
        cpu->r[14] = 0x0012158cu; fn_001100c0(cpu);
    }
L_0012158c:;
    {
        cpu->r[3] = rd32(0x00121594u + + 0x18u);
    }
L_00121590:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121598u, cpu->r[4], 0, 0);
    }
L_00121594:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121598:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012159c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001215a0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001215a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001215a8u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenuD0Ev @ 001215b0 (arm) */
void fn_001215b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001215b0:;
    {
        cpu->r[3] = rd32(0x001215b8u + + 0x2cu);
    }
L_001215b4:;
    {
        cpu->r[2] = rd32(0x001215bcu + + 0x2cu);
    }
L_001215b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001215c0u, cpu->r[3], 0, 0);
    }
L_001215bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001215c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001215c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001215c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001215cc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001215d0:;
    {
        cpu->r[14] = 0x001215d4u; fn_000ec21c(cpu);
    }
L_001215d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001215d8:;
    {
        cpu->r[14] = 0x001215dcu; fn_0018ba20(cpu);
    }
L_001215dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001215e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001215e4u)) return;
    }
}

/* _ZN22GS_SelectCarDecalsMenu6RenderEv @ 001215ec (arm) */
void fn_001215ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001215ec:;
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
L_001215f0:;
    {
        cpu->r[5] = rd32(0x001215f8u + + 0x2c4u);
    }
L_001215f4:;
    {
        cpu->r[7] = rd32(0x001215fcu + + 0x2c4u);
    }
L_001215f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001215fc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00121604u, cpu->r[5], 0, 0);
    }
L_00121600:;
    {
        cpu->r[3] = rd32(0x00121608u + + 0x2bcu);
    }
L_00121604:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121608:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012160c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121610:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00121614:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_00121618:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012161c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121808;
        }
    }
L_00121620:;
    {
        cpu->r[6] = rd32(0x00121628u + + 0x2a0u);
    }
L_00121624:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00121628:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012162c:;
    {
        cpu->r[14] = 0x00121630u; fn_00096a08(cpu);
    }
L_00121630:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121634:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121638:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012163c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121640:;
    {
        cpu->r[14] = 0x00121644u; fn_0018aa44(cpu);
    }
L_00121644:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00121648:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0012164c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00121650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012184c;
        }
    }
L_00121654:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00121658:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012165c:;
    {
        cpu->r[14] = 0x00121660u; fn_00096a08(cpu);
    }
L_00121660:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121664:;
    {
        cpu->r[8] = 0x00001c4cu;
    }
L_00121668:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012166c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121670:;
    {
        cpu->r[14] = 0x00121674u; fn_0018aa44(cpu);
    }
L_00121674:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00121678:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_0012167c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00121680:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00121684:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121688:;
    {
        cpu->r[14] = 0x0012168cu; fn_00113570(cpu);
    }
L_0012168c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121690:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00121694:;
    {
        cpu->r[14] = 0x00121698u; fn_000978a8(cpu);
    }
L_00121698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012169c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001216a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_001216a4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_001216a8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_001216ac:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001216b0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001216b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001216b8:;
    {
        cpu->r[14] = 0x001216bcu; fn_0012f780(cpu);
    }
L_001216bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001216c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001216c4:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_001216c8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001216cc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001216d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001216d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001216d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001216dc:;
    {
        cpu->r[14] = 0x001216e0u; fn_000a8a2c(cpu);
    }
L_001216e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001216e4:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_001216e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001216ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001216f0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001216f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001216f8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_001216fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00121700:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_00121704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_00121708:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0012170c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00121710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00121714:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000170u, cpu->r[12], 1, 0);
    }
L_00121718:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000003cu;
        }
    }
L_0012171c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_00121720:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00121724:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00121728:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0012172c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000050u, cpu->r[3], 1, 0);
    }
L_00121730:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00121734:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00121738:;
    {
        cpu->r[14] = 0x0012173cu; fn_000ad8a0(cpu);
    }
L_0012173c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000500u, 0, 0);
    }
L_00121740:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00121744:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_00121748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012174c:;
    {
        cpu->r[14] = 0x00121754u;
    }
L_00121750:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121754u)) return;
    }
L_00121754:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_00121758:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_0012175c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00121760:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00121764:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00121768:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012176c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00121770:;
    {
        cpu->r[14] = 0x00121774u; fn_000ad19c(cpu);
    }
L_00121774:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00121778:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0012177c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121780:;
    {
        cpu->r[14] = 0x00121784u; fn_000a439c(cpu);
    }
L_00121784:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00121788:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121888;
        }
    }
L_0012178c:;
    {
        cpu->r[3] = rd32(0x00121794u + + 0x138u);
    }
L_00121790:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121794:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00121798:;
    {
        cpu->r[14] = 0x0012179cu; fn_000a4364(cpu);
    }
L_0012179c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001217a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001217dc;
        }
    }
L_001217a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001217a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001217ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001217dc;
        }
    }
L_001217b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001217b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001217b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001217bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001217c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001217c4:;
    {
        cpu->r[14] = 0x001217ccu;
    }
L_001217c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001217ccu)) return;
    }
L_001217cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001217d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001217d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001217d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001217b4;
        }
    }
L_001217dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001217e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001217e4:;
    {
        cpu->r[14] = 0x001217ecu;
    }
L_001217e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001217ecu)) return;
    }
L_001217ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001217f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001217f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001217f8:;
    {
        cpu->r[14] = 0x00121800u;
    }
L_001217fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121800u)) return;
    }
L_00121800:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00121804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121808u)) return;
    }
L_00121808:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012180c:;
    {
        cpu->r[14] = 0x00121810u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00121810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121620;
        }
    }
L_00121818:;
    {
        cpu->r[6] = rd32(0x00121820u + + 0xa8u);
    }
L_0012181c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121820:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00121824:;
    {
        cpu->r[14] = 0x00121828u; fn_0018aa20(cpu);
    }
L_00121828:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012182c:;
    {
        cpu->r[14] = 0x00121830u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00121830:;
    {
        cpu->r[3] = rd32(0x00121838u + + 0x98u);
    }
L_00121834:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00121838:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012183c:;
    {
        cpu->r[3] = rd32(0x00121844u + + 0x90u);
    }
L_00121840:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121844:;
    {
        cpu->r[14] = 0x00121848u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00121848:;
    {
        goto L_00121624;
    }
L_0012184c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00121850:;
    {
        cpu->r[14] = 0x00121854u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00121854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121654;
        }
    }
L_0012185c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121860:;
    {
        cpu->r[14] = 0x00121864u; fn_0018aa20(cpu);
    }
L_00121864:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00121868:;
    {
        cpu->r[14] = 0x0012186cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012186c:;
    {
        cpu->r[3] = rd32(0x00121874u + + 0x5cu);
    }
L_00121870:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121874:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121878:;
    {
        cpu->r[3] = rd32(0x00121880u + + 0x54u);
    }
L_0012187c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121880:;
    {
        cpu->r[14] = 0x00121884u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00121884:;
    {
        goto L_00121654;
    }
L_00121888:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012188c:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00121890:;
    {
        cpu->r[2] = 0x55000000u;
    }
L_00121894:;
    {
        cpu->r[14] = 0x00121898u; fn_0010dda8(cpu);
    }
L_00121898:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012189c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001218a0:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_001218a4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001218a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001218ac:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001218b0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001218b4:;
    {
        cpu->r[14] = 0x001218b8u; fn_000ad8a0(cpu);
    }
L_001218b8:;
    {
        goto L_0012178c;
    }
}

/* _ZN20GS_SelectCarRimsMenu8isKindOfEi @ 001218d8 (arm) */
void fn_001218d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001218d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002bu, 1, 1);
    }
L_001218dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001218e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001218e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_41 @ 001218e8 (arm) */
void fn_001218e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001218e8:;
    {
        cpu->r[3] = rd32(0x001218f0u + + 0x50u);
    }
L_001218ec:;
    {
        cpu->r[1] = rd32(0x001218f4u + + 0x50u);
    }
L_001218f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001218f8u, cpu->r[3], 0, 0);
    }
L_001218f4:;
    {
        cpu->r[0] = rd32(0x001218fcu + + 0x4cu);
    }
L_001218f8:;
    {
        cpu->r[2] = rd32(0x00121900u + + 0x4cu);
    }
L_001218fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00121900:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00121904:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012190cu, cpu->r[2], 0, 0);
    }
L_00121908:;
    {
        cpu->r[3] = rd32(0x00121910u + + 0x40u);
    }
L_0012190c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00121910:;
    {
        cpu->r[3] = add_flags(cpu, 0x00121918u, cpu->r[3], 0, 0);
    }
L_00121914:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00121918:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000096u, 1, 0);
    }
L_0012191c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_00121920:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_00121924:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[12]);
    }
L_00121928:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0012192c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00121930:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_00121934:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00121938:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_0012193c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_SelectCarRimsMenuD1Ev @ 00121954 (arm) */
void fn_00121954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121954:;
    {
        cpu->r[3] = rd32(0x0012195cu + + 0x24u);
    }
L_00121958:;
    {
        cpu->r[2] = rd32(0x00121960u + + 0x24u);
    }
L_0012195c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00121964u, cpu->r[3], 0, 0);
    }
L_00121960:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00121964:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00121968:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012196c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00121970:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00121974:;
    {
        cpu->r[14] = 0x00121978u; fn_000ec21c(cpu);
    }
L_00121978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012197c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00121980u)) return;
    }
}

/* _ZN20GS_SelectCarRimsMenu11DoBarActionEii @ 00121988 (arm) */
void fn_00121988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121988:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0012198c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00121990:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00121994:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00121998:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012199c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121a1c;
        }
    }
L_001219a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001219a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_001219a8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_001219ac:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001219b0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001219b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001219b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001219bc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001219c0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_001219c4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001219c8:;
    {
        cpu->r[14] = 0x001219ccu; fn_00093f34(cpu);
    }
L_001219cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001219d0:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_001219d4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001219d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001219dc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001219e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_001219e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_001219e8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001219ec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001219f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001219f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001219f8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001219fc:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00121a00:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00121a04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00121a08:;
    {
        cpu->r[14] = 0x00121a0cu; fn_000fd248(cpu);
    }
L_00121a0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00121a10:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00121a14:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00121a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121a24;
        }
    }
L_00121a1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00121a20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00121a24u)) return;
    }
L_00121a24:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_00121a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00121a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121a1c;
        }
    }
L_00121a30:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00121a34:;
    {
        cpu->r[14] = 0x00121a38u; fn_00093f34(cpu);
    }
L_00121a38:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00121a3c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00121a40:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00121a44:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00121a48:;
    {
        goto L_00121a1c;
    }
}

/* _ZN20GS_SelectCarRimsMenu6UpdateEv @ 00121a4c (arm) */
void fn_00121a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121a4c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121a50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121a54:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00121a58:;
    {
        cpu->r[14] = 0x00121a60u;
    }
L_00121a5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121a60u)) return;
    }
L_00121a60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_00121a64:;
    {
        cpu->r[4] = rd32(0x00121a6cu + + 0x54u);
    }
L_00121a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00121a6c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121a74u, cpu->r[4], 0, 0);
    }
L_00121a70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121a80;
        }
    }
L_00121a74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121a78:;
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
L_00121a7c:;
    {
        return fn_00114a58(cpu);
    }
L_00121a80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00121a84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121a88u)) return;
        }
    }
L_00121a88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121a8c:;
    {
        cpu->r[14] = 0x00121a90u; fn_0010da28(cpu);
    }
L_00121a90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121a94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121a98u)) return;
        }
    }
L_00121a98:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00121a9c:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00121aa0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00121aa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121aa8u)) return;
        }
    }
L_00121aa8:;
    {
        cpu->r[3] = rd32(0x00121ab0u + + 0x14u);
    }
L_00121aac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00121ab0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121ab4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00121ab8:;
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
L_00121abc:;
    {
        return fn_000f34e8(cpu);
    }
}

/* _ZN20GS_SelectCarRimsMenu12UpdateColorsEv @ 00121ac8 (arm) */
void fn_00121ac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121ac8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x95cu);
    }
L_00121acc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121ad0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00121ad4:;
    {
        cpu->r[5] = rd32(0x00121adcu + + 0xa4u);
    }
L_00121ad8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121adc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00121ae4u, cpu->r[5], 0, 0);
    }
L_00121ae0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121b70;
        }
    }
L_00121ae4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121ae8:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_00121aec:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00121af0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121af4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121af8u)) return;
        }
    }
L_00121af8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x950u);
    }
L_00121afc:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00121b00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00121b04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121b08:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[14], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00121b0c:;
    {
        cpu->r[12] = 0x00001bbeu;
    }
L_00121b10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_00121b14:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[0]);
    }
L_00121b18:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_00121b1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00121b20:;
    {
        cpu->r[14] = 0x00121b24u; fn_000b0c4c(cpu);
    }
L_00121b24:;
    {
        cpu->r[3] = rd32(0x00121b2cu + + 0x58u);
    }
L_00121b28:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121b2c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00121b30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121b34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001b80u, 0, 0);
    }
L_00121b38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_00121b3c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00121b40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x000019c0u, 0, 0);
    }
L_00121b44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000003du, 0, 0);
    }
L_00121b48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121b4c:;
    {
        cpu->r[14] = 0x00121b50u; imp_memcpy(cpu); /* memcpy */
    }
L_00121b50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00001b80u, 0, 0);
    }
L_00121b54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_00121b58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00121b5c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00121b60:;
    {
        cpu->r[14] = 0x00121b64u; imp_memcpy(cpu); /* memcpy */
    }
L_00121b64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00121b68:;
    {
        wr8(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00121b6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121b70u)) return;
    }
L_00121b70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121b74:;
    {
        cpu->r[2] = 0x00001bbeu;
    }
L_00121b78:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00121b7c:;
    {
        goto L_00121af8;
    }
}

/* _ZN20GS_SelectCarRimsMenu17ApplyMenuSettingsEv @ 00121b88 (arm) */
void fn_00121b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121b88:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00121b8c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00121b90:;
    {
        cpu->r[3] = rd32(0x00121b98u + + 0x5cu);
    }
L_00121b94:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_00121b98:;
    {
        cpu->r[1] = 0x000005c8u;
    }
L_00121b9c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_00121ba0:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00121ba4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00121bacu, cpu->r[3], 0, 0);
    }
L_00121ba8:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00121bac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121bb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_00121bb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121bb8:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00121bbc:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00121bc0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00121bc4:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[5]);
    }
L_00121bc8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_00121bcc:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_00121bd0:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_00121bd4:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[0]);
    }
L_00121bd8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121bdc:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00121be0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_00121be4:;
    {
        cpu->r[14] = 0x00121be8u; fn_0009b4d0(cpu);
    }
L_00121be8:;
    {
        wr8(cpu->r[4] + + 0x95cu, cpu->r[5]);
    }
L_00121bec:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_00121bf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121bf4u)) return;
    }
}

/* _ZN20GS_SelectCarRimsMenu8DoActionEii @ 00121bf8 (arm) */
void fn_00121bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121bf8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00121bfc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00121c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00121c04:;
    {
        cpu->r[5] = rd32(0x00121c0cu + + 0x11cu);
    }
L_00121c08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00121c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121c10:;
    {
        cpu->r[5] = add_flags(cpu, 0x00121c18u, cpu->r[5], 0, 0);
    }
L_00121c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121c20;
        }
    }
L_00121c18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00121c1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121c20u)) return;
    }
L_00121c20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00121c24:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00121c28:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00121ce8;
        }
    }
L_00121c2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00121c30:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00121c34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00121c38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
        }
    }
L_00121c3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00121c40:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[7] = v;
        }
    }
L_00121c44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_00121c48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
        }
    }
L_00121c4c:;
    {
        cpu->r[14] = 0x00121c50u; fn_0009b4d0(cpu);
    }
L_00121c50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_00121c54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00121c58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00121c5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_00121c60:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00121c18;
        }
    }
L_00121c64:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_00121c68:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00121c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121cf8;
        }
    }
L_00121c70:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_00121c74:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00121c78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121c18;
        }
    }
L_00121c7c:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_00121c80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_00121c84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00121c88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121c8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00121c90:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00121c94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_00121c98:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[7]);
        }
    }
L_00121c9c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00121ca0:;
    {
        cpu->r[14] = 0x00121ca4u; fn_000a2660(cpu);
    }
L_00121ca4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121c80;
        }
    }
L_00121cac:;
    {
        cpu->r[0] = rd32(0x00121cb4u + + 0x78u);
    }
L_00121cb0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00121cb4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00121cb8:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00121cbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00121cc0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00121cc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00121cc8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00121ccc:;
    {
        cpu->r[14] = 0x00121cd0u; fn_000fd248(cpu);
    }
L_00121cd0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00121cd4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[6]);
    }
L_00121cd8:;
    {
        wr8(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00121cdc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00121ce0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00121ce4:;
    {
        goto L_00121c18;
    }
L_00121ce8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00121cec:;
    {
        cpu->r[14] = 0x00121cf4u;
    }
L_00121cf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121cf4u)) return;
    }
L_00121cf4:;
    {
        goto L_00121c18;
    }
L_00121cf8:;
    {
        cpu->r[7] = 0x00000012u;
    }
L_00121cfc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x954u);
    }
L_00121d00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121d04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00121d08:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00121d0c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00121d10:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[7]);
        }
    }
L_00121d14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000013u;
        }
    }
L_00121d18:;
    {
        cpu->r[14] = 0x00121d1cu; fn_000a2660(cpu);
    }
L_00121d1c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121d20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121cfc;
        }
    }
L_00121d24:;
    {
        goto L_00121cac;
    }
}

/* _ZN20GS_SelectCarRimsMenuC1Eb @ 00121d30 (arm) */
void fn_00121d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121d30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121d34:;
    {
        cpu->r[4] = rd32(0x00121d3cu + + 0x20u);
    }
L_00121d38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121d3c:;
    {
        cpu->r[14] = 0x00121d40u; fn_001100c0(cpu);
    }
L_00121d40:;
    {
        cpu->r[3] = rd32(0x00121d48u + + 0x18u);
    }
L_00121d44:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121d4cu, cpu->r[4], 0, 0);
    }
L_00121d48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121d4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00121d54:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00121d58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121d5cu)) return;
    }
}

/* _ZN20GS_SelectCarRimsMenuC2Eb @ 00121d64 (arm) */
void fn_00121d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121d64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00121d68:;
    {
        cpu->r[4] = rd32(0x00121d70u + + 0x20u);
    }
L_00121d6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121d70:;
    {
        cpu->r[14] = 0x00121d74u; fn_001100c0(cpu);
    }
L_00121d74:;
    {
        cpu->r[3] = rd32(0x00121d7cu + + 0x18u);
    }
L_00121d78:;
    {
        cpu->r[4] = add_flags(cpu, 0x00121d80u, cpu->r[4], 0, 0);
    }
L_00121d7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00121d80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00121d84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00121d88:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00121d8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121d90u)) return;
    }
}

/* _ZN20GS_SelectCarRimsMenuD0Ev @ 00121d98 (arm) */
void fn_00121d98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121d98:;
    {
        cpu->r[3] = rd32(0x00121da0u + + 0x2cu);
    }
L_00121d9c:;
    {
        cpu->r[2] = rd32(0x00121da4u + + 0x2cu);
    }
L_00121da0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00121da8u, cpu->r[3], 0, 0);
    }
L_00121da4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00121da8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00121dac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00121db4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00121db8:;
    {
        cpu->r[14] = 0x00121dbcu; fn_000ec21c(cpu);
    }
L_00121dbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121dc0:;
    {
        cpu->r[14] = 0x00121dc4u; fn_0018ba20(cpu);
    }
L_00121dc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121dc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00121dccu)) return;
    }
}

/* _ZN20GS_SelectCarRimsMenu6RenderEv @ 00121dd4 (arm) */
void fn_00121dd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00121dd4:;
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
L_00121dd8:;
    {
        cpu->r[5] = rd32(0x00121de0u + + 0x22cu);
    }
L_00121ddc:;
    {
        cpu->r[8] = rd32(0x00121de4u + + 0x22cu);
    }
L_00121de0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00121de4:;
    {
        cpu->r[5] = add_flags(cpu, 0x00121decu, cpu->r[5], 0, 0);
    }
L_00121de8:;
    {
        cpu->r[3] = rd32(0x00121df0u + + 0x224u);
    }
L_00121dec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00121df0:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00121df4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121df8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00121dfc:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_00121e00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00121e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121f58;
        }
    }
L_00121e08:;
    {
        cpu->r[6] = rd32(0x00121e10u + + 0x208u);
    }
L_00121e0c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00121e10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121e14:;
    {
        cpu->r[14] = 0x00121e18u; fn_00096a08(cpu);
    }
L_00121e18:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121e1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121e20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00121e24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00121e28:;
    {
        cpu->r[14] = 0x00121e2cu; fn_0018aa44(cpu);
    }
L_00121e2c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00121e30:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00121e34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00121e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121f9c;
        }
    }
L_00121e3c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00121e40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121e44:;
    {
        cpu->r[14] = 0x00121e48u; fn_00096a08(cpu);
    }
L_00121e48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121e4c:;
    {
        cpu->r[10] = 0x00001c4cu;
    }
L_00121e50:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00121e54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121e58:;
    {
        cpu->r[14] = 0x00121e5cu; fn_0018aa44(cpu);
    }
L_00121e5c:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00121e60:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00121e64:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00121e68:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00121e6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121e70:;
    {
        cpu->r[14] = 0x00121e74u; fn_00113570(cpu);
    }
L_00121e74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121e78:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_00121e7c:;
    {
        cpu->r[14] = 0x00121e80u; fn_000978a8(cpu);
    }
L_00121e80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121e84:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00121e88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_00121e8c:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_00121e90:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_00121e94:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00121e98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00121e9c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00121ea0:;
    {
        cpu->r[14] = 0x00121ea4u; fn_0012f780(cpu);
    }
L_00121ea4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000500u, 0, 0);
    }
L_00121ea8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00121eac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_00121eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121eb4:;
    {
        cpu->r[14] = 0x00121ebcu;
    }
L_00121eb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121ebcu)) return;
    }
L_00121ebc:;
    {
        cpu->r[2] = 0x000000c4u;
    }
L_00121ec0:;
    {
        cpu->r[3] = 0x0000003bu;
    }
L_00121ec4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00121ec8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00121ecc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00121ed0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00121ed4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121ed8:;
    {
        cpu->r[14] = 0x00121edcu; fn_000ad19c(cpu);
    }
L_00121edc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00121ee0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00121ee4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00121ee8:;
    {
        cpu->r[14] = 0x00121eecu; fn_000a439c(cpu);
    }
L_00121eec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00121ef0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00121fd8;
        }
    }
L_00121ef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00121ef8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00121efc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00121f2c;
        }
    }
L_00121f00:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00121f04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00121f08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00121f0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121f10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00121f14:;
    {
        cpu->r[14] = 0x00121f1cu;
    }
L_00121f18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121f1cu)) return;
    }
L_00121f1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00121f20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00121f24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00121f28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00121f04;
        }
    }
L_00121f2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121f30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00121f34:;
    {
        cpu->r[14] = 0x00121f3cu;
    }
L_00121f38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121f3cu)) return;
    }
L_00121f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121f40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00121f44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00121f48:;
    {
        cpu->r[14] = 0x00121f50u;
    }
L_00121f4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00121f50u)) return;
    }
L_00121f50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00121f54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00121f58u)) return;
    }
L_00121f58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00121f5c:;
    {
        cpu->r[14] = 0x00121f60u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00121f60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121e08;
        }
    }
L_00121f68:;
    {
        cpu->r[6] = rd32(0x00121f70u + + 0xa8u);
    }
L_00121f6c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00121f70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00121f74:;
    {
        cpu->r[14] = 0x00121f78u; fn_0018aa20(cpu);
    }
L_00121f78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00121f7c:;
    {
        cpu->r[14] = 0x00121f80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00121f80:;
    {
        cpu->r[3] = rd32(0x00121f88u + + 0x94u);
    }
L_00121f84:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00121f88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121f8c:;
    {
        cpu->r[3] = rd32(0x00121f94u + + 0x8cu);
    }
L_00121f90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121f94:;
    {
        cpu->r[14] = 0x00121f98u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00121f98:;
    {
        goto L_00121e0c;
    }
L_00121f9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121fa0:;
    {
        cpu->r[14] = 0x00121fa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00121fa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00121fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00121e3c;
        }
    }
L_00121fac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00121fb0:;
    {
        cpu->r[14] = 0x00121fb4u; fn_0018aa20(cpu);
    }
L_00121fb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00121fb8:;
    {
        cpu->r[14] = 0x00121fbcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00121fbc:;
    {
        cpu->r[3] = rd32(0x00121fc4u + + 0x58u);
    }
L_00121fc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00121fc4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121fc8:;
    {
        cpu->r[3] = rd32(0x00121fd0u + + 0x50u);
    }
L_00121fcc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00121fd0:;
    {
        cpu->r[14] = 0x00121fd4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00121fd4:;
    {
        goto L_00121e3c;
    }
L_00121fd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00121fdc:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00121fe0:;
    {
        cpu->r[2] = 0x55000000u;
    }
L_00121fe4:;
    {
        cpu->r[14] = 0x00121fe8u; fn_0010dda8(cpu);
    }
L_00121fe8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00121fec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00121ff0:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_00121ff4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00121ff8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00121ffc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00122000:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00122004:;
    {
        cpu->r[14] = 0x00122008u; fn_000ad8a0(cpu);
    }
L_00122008:;
    {
        goto L_00121ef4;
    }
}

/* _ZN21GS_SelectLanguageMenu17ApplyMenuSettingsEv @ 00122024 (arm) */
void fn_00122024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122024:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x950u);
    }
L_00122028:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012202c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00122030:;
    {
        cpu->r[5] = rd32(0x00122038u + + 0xd8u);
    }
L_00122034:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122038:;
    {
        cpu->r[5] = add_flags(cpu, 0x00122040u, cpu->r[5], 0, 0);
    }
L_0012203c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001220ec;
        }
    }
L_00122040:;
    {
        cpu->r[3] = rd32(0x00122048u + + 0xccu);
    }
L_00122044:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122048:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_0012204c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00122050:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122058u, cpu->r[3], 0, 0);
    }
L_00122054:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_00122058:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_0012205c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00122060:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_00122064:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012206c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001220c0;
        }
    }
L_00122070:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00122074:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00122078:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0012207c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00122080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122084:;
    {
        cpu->r[14] = 0x0012208cu;
    }
L_00122088:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012208cu)) return;
    }
L_0012208c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122090:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001220b4;
        }
    }
L_00122098:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0012209c:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_001220a0:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001220a4:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[3]);
    }
L_001220a8:;
    {
        cpu->r[3] = rd32(0x001220b0u + + 0x68u);
    }
L_001220ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001220b0:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_001220b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001220b8:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_001220bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001220c0u)) return;
    }
L_001220c0:;
    {
        cpu->r[3] = rd32(0x001220c8u + + 0x54u);
    }
L_001220c4:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001220c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001220cc:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[1]);
    }
L_001220d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001220d8u, cpu->r[3], 0, 0);
    }
L_001220d4:;
    {
        cpu->r[1] = 0x00000403u;
    }
L_001220d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000c0u, 0, 0);
    }
L_001220dc:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_001220e0:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_001220e4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001220e8:;
    {
        goto L_00122078;
    }
L_001220ec:;
    {
        cpu->r[2] = rd32(0x001220f4u + + 0x2cu);
    }
L_001220f0:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_001220f4:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001220f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00122100u, cpu->r[2], 0, 0);
    }
L_001220fc:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_00122100:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00122104:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00122108:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_0012210c:;
    {
        goto L_00122064;
    }
}

/* _ZN21GS_SelectLanguageMenu8isKindOfEi @ 00122124 (arm) */
void fn_00122124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122124:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_00122128:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012212c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00122130:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_42 @ 00122134 (arm) */
void fn_00122134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122134:;
    {
        cpu->r[3] = rd32(0x0012213cu + + 0x20u);
    }
L_00122138:;
    {
        cpu->r[1] = rd32(0x00122140u + + 0x20u);
    }
L_0012213c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122144u, cpu->r[3], 0, 0);
    }
L_00122140:;
    {
        cpu->r[2] = rd32(0x00122148u + + 0x1cu);
    }
L_00122144:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00122148:;
    {
        cpu->r[2] = add_flags(cpu, 0x00122150u, cpu->r[2], 0, 0);
    }
L_0012214c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00122150:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00122154:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00122158:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_SelectLanguageMenuD1Ev @ 00122168 (arm) */
void fn_00122168(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122168:;
    {
        cpu->r[3] = rd32(0x00122170u + + 0x24u);
    }
L_0012216c:;
    {
        cpu->r[2] = rd32(0x00122174u + + 0x24u);
    }
L_00122170:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122178u, cpu->r[3], 0, 0);
    }
L_00122174:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00122178:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0012217c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00122184:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00122188:;
    {
        cpu->r[14] = 0x0012218cu; fn_000ec21c(cpu);
    }
L_0012218c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122190:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00122194u)) return;
    }
}

/* _ZN21GS_SelectLanguageMenu24ProcessOnMouseButtonDownEv @ 0012219c (arm) */
void fn_0012219c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012219c:;
    {
        cpu->r[3] = rd32(0x001221a4u + + 0x24u);
    }
L_001221a0:;
    {
        cpu->r[2] = rd32(0x001221a8u + + 0x24u);
    }
L_001221a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001221acu, cpu->r[3], 0, 0);
    }
L_001221a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001221ac:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001221b0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001221b4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_001221b8:;
    {
        cpu->r[14] = 0x001221bcu; fn_00110498(cpu);
    }
L_001221bc:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001221c0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001221c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001221c8u)) return;
    }
}

/* _ZN21GS_SelectLanguageMenu8DoActionEii @ 001221d0 (arm) */
void fn_001221d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001221d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001221d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001221d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001221dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001221e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001221e4u)) return;
        }
    }
L_001221e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001221e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001221ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012223c;
        }
    }
L_001221f0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001221f4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001221f8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001221fc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00122200:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
        }
    }
L_00122204:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00122208:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0012220c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_00122210:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_00122214:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_00122218:;
    {
        cpu->r[14] = 0x0012221cu; fn_00093f34(cpu);
    }
L_0012221c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00122220:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_00122224:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_00122228:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0012222c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00122230:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00122234:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00122238:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012223cu)) return;
    }
L_0012223c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00122240:;
    {
        cpu->r[14] = 0x00122248u;
    }
L_00122244:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122248u)) return;
    }
L_00122248:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012224cu)) return;
    }
}

/* _ZN21GS_SelectLanguageMenu11DoBarActionEii @ 0012224c (arm) */
void fn_0012224c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012224c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00122250:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00122254:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00122258:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012225c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001222f4;
        }
    }
L_00122264:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00122268:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0012226c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00122270:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00122274:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00122278:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012227c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00122280:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00122284:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00122288:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0012228c:;
    {
        cpu->r[14] = 0x00122290u; fn_00093f34(cpu);
    }
L_00122290:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00122294:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00122298:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012229c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001222a0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001222a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_001222a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_001222ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001222b0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001222b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001222b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001222bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001222c0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001222c4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001222c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001222cc:;
    {
        cpu->r[14] = 0x001222d0u; fn_000fd248(cpu);
    }
L_001222d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001222d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_001222d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122308;
        }
    }
L_001222dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001222fc;
        }
    }
L_001222e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001222e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122308;
        }
    }
L_001222e8:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001222ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001222f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122328;
        }
    }
L_001222f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001222f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001222fcu)) return;
    }
L_001222fc:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00122300:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00122304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122318;
        }
    }
L_00122308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012230c:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00122310:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00122314:;
    {
        goto L_001222f4;
    }
L_00122318:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_0012231c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00122320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001222f4;
        }
    }
L_00122324:;
    {
        goto L_00122308;
    }
L_00122328:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012232c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00122330:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00122334:;
    {
        cpu->r[14] = 0x00122338u; fn_00093f34(cpu);
    }
L_00122338:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0012233c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00122340:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00122344:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00122348:;
    {
        goto L_001222f4;
    }
}

/* _ZN21GS_SelectLanguageMenuC1Ebb @ 0012234c (arm) */
void fn_0012234c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012234c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00122350:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00122354:;
    {
        cpu->r[5] = rd32(0x0012235cu + + 0x28u);
    }
L_00122358:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0012235c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122360:;
    {
        cpu->r[14] = 0x00122364u; fn_001100c0(cpu);
    }
L_00122364:;
    {
        cpu->r[3] = rd32(0x0012236cu + + 0x1cu);
    }
L_00122368:;
    {
        cpu->r[5] = add_flags(cpu, 0x00122370u, cpu->r[5], 0, 0);
    }
L_0012236c:;
    {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[4]);
    }
L_00122370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122374:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122378:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0012237c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00122380:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00122384u)) return;
    }
}

/* _ZN21GS_SelectLanguageMenu6UpdateEv @ 0012238c (arm) */
void fn_0012238c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012238c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00122390:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00122394:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00122398:;
    {
        cpu->r[5] = rd32(0x001223a0u + + 0x8d8u);
    }
L_0012239c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001223a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001223a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001223acu, cpu->r[5], 0, 0);
    }
L_001223a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f8;
        }
    }
L_001223ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001223b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001223c8;
        }
    }
L_001223b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001223b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224f0;
        }
    }
L_001223bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001223c0:;
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
L_001223c4:;
    {
        return fn_00114a58(cpu);
    }
L_001223c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc4u);
    }
L_001223cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 0);
    }
L_001223d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000089u, 1, 1);
    }
L_001223d4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
        }
    }
L_001223d8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001225b4;
        }
    }
L_001223dc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001223e0:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_001223e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001223e8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_001223ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000086u, 1, 1);
    }
L_001223f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122574;
        }
    }
L_001223f4:;
    {
        cpu->r[6] = 0x00000009u;
    }
L_001223f8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001223fc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122400:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122404:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00122408:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0012240c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00122410:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00122414:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00122418:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012241c:;
    {
        cpu->r[14] = 0x00122420u; fn_000fd248(cpu);
    }
L_00122420:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_00122424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_00122428:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_0012242c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00122430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012244c;
        }
    }
L_00122434:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122438:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0012243c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00122440:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00122444:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00122448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224e8;
        }
    }
L_0012244c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_00122450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122990;
        }
    }
L_00122454:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122458:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0012245c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00122460:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00122464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00122468:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0012246c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122990;
        }
    }
L_00122470:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 0);
    }
L_00122474:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00122478:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0012269c;
        }
    }
L_0012247c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122480:;
    {
        cpu->r[8] = 0x00001bc4u;
    }
L_00122484:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00122488:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0012248c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_00122490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012269c;
        }
    }
L_00122494:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_00122498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012269c;
        }
    }
L_0012249c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_001224a0:;
    {
        cpu->r[14] = 0x001224a4u; fn_000979a0(cpu);
    }
L_001224a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001224a8:;
    {
        cpu->r[14] = 0x001224acu; fn_00093f60(cpu);
    }
L_001224ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001224b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001224b4:;
    {
        cpu->r[14] = 0x001224b8u; fn_0009e9e8(cpu);
    }
L_001224b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001224bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001224c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001224c4:;
    {
        cpu->r[14] = 0x001224c8u; fn_000af09c(cpu);
    }
L_001224c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001224cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001227ec;
        }
    }
L_001224d0:;
    {
        cpu->r[14] = 0x001224d4u; fn_000979a0(cpu);
    }
L_001224d4:;
    {
        cpu->r[14] = 0x001224d8u; fn_00093f98(cpu);
    }
L_001224d8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001224dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012293c;
        }
    }
L_001224e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001224e4:;
    {
        cpu->r[14] = 0x001224e8u; fn_00114784(cpu);
    }
L_001224e8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001224ec:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001224f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001224f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001224f8u)) return;
    }
L_001224f8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001224fc:;
    {
        cpu->r[14] = 0x00122500u; fn_000eb59c(cpu);
    }
L_00122500:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122504:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00122508:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012250c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00122510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_00122514:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_00122518:;
    {
        cpu->r[5] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012251c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00122520:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224f0;
        }
    }
L_00122524:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_00122528:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012252c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00122530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_00122534:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_00122538:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0012253c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_00122544:;
    {
        cpu->r[14] = 0x00122548u; fn_000c1cd8(cpu);
    }
L_00122548:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012254c:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_00122550:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00122554:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00122558:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012255c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00122560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_00122564:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_00122568:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012256c:;
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
L_00122570:;
    {
        return fn_000bd908(cpu);
    }
L_00122574:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001225e0;
        }
    }
L_00122578:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0012257c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122b80;
        }
    }
L_00122580:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00122644;
        }
    }
L_00122584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_00122588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122b90;
        }
    }
L_0012258c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00122590:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_00122594:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
        }
    }
L_00122598:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00122400;
        }
    }
L_0012259c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001225a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122664;
        }
    }
L_001225a4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001225a8:;
    {
        cpu->r[6] = 0x00000007u;
    }
L_001225ac:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001225b0:;
    {
        goto L_00122400;
    }
L_001225b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000008au, 1, 1);
    }
L_001225b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001223dc;
        }
    }
L_001225bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000087u, 1, 1);
    }
L_001225c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001223dc;
        }
    }
L_001225c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001225c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001223dc;
        }
    }
L_001225cc:;
    {
        cpu->r[14] = 0x001225d0u; fn_0010da28(cpu);
    }
L_001225d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001225d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001224f0;
        }
    }
L_001225d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001225dc:;
    {
        goto L_001223ec;
    }
L_001225e0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001225e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001225e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122ab0;
        }
    }
L_001225ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00122674;
        }
    }
L_001225f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_001225f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122b30;
        }
    }
L_001225f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00122bc0;
        }
    }
L_001225fc:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00122600:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00122604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122664;
        }
    }
L_00122608:;
    {
        cpu->r[0] = rd32(0x00122610u + + 0x66cu);
    }
L_0012260c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00122610:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00122614:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00122618:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0012261c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00122620:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00122624:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00122628:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012262c:;
    {
        cpu->r[14] = 0x00122630u; fn_000fd248(cpu);
    }
L_00122630:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122634:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00122638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012263c:;
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
L_00122640:;
    {
        return fn_000f34e8(cpu);
    }
L_00122644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00122648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122b20;
        }
    }
L_0012264c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00122650:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00122654:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
        }
    }
L_00122658:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00122400;
        }
    }
L_0012265c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00122660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122acc;
        }
    }
L_00122664:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x78u);
    }
L_00122668:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_0012266c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224f0;
        }
    }
L_00122670:;
    {
        goto L_00122400;
    }
L_00122674:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000089u, 1, 1);
    }
L_00122678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122bb0;
        }
    }
L_0012267c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000008au, 1, 1);
    }
L_00122680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122ba0;
        }
    }
L_00122684:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000087u, 1, 1);
    }
L_00122688:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122664;
        }
    }
L_0012268c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122690:;
    {
        cpu->r[6] = 0x00000008u;
    }
L_00122694:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122698:;
    {
        goto L_00122400;
    }
L_0012269c:;
    {
        cpu->r[14] = 0x001226a0u; fn_00097ad0(cpu);
    }
L_001226a0:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001226a4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001226a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001226ac:;
    {
        cpu->r[14] = 0x001226b0u; fn_00096a08(cpu);
    }
L_001226b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001226b4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001226b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001226bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001226c0:;
    {
        cpu->r[14] = 0x001226c4u; fn_0018aa58(cpu);
    }
L_001226c4:;
    {
        cpu->r[7] = 0x00001bc4u;
    }
L_001226c8:;
    {
        cpu->r[14] = 0x001226ccu; fn_00097ad0(cpu);
    }
L_001226cc:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001226d0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001226d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001226d8:;
    {
        cpu->r[14] = 0x001226dcu; fn_00096a08(cpu);
    }
L_001226dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001226e0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001226e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001226e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001226ec:;
    {
        cpu->r[14] = 0x001226f0u; fn_0018aa58(cpu);
    }
L_001226f0:;
    {
        cpu->r[14] = 0x001226f4u; fn_00097ad0(cpu);
    }
L_001226f4:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001226f8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001226fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122700:;
    {
        cpu->r[14] = 0x00122704u; fn_00096a08(cpu);
    }
L_00122704:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122708:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0012270c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122710:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122714:;
    {
        cpu->r[14] = 0x00122718u; fn_0018aa58(cpu);
    }
L_00122718:;
    {
        cpu->r[14] = 0x0012271cu; fn_00097ad0(cpu);
    }
L_0012271c:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_00122720:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122724:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122728:;
    {
        cpu->r[14] = 0x0012272cu; fn_00096a08(cpu);
    }
L_0012272c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122730:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122734:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122738:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012273c:;
    {
        cpu->r[14] = 0x00122740u; fn_0018aa58(cpu);
    }
L_00122740:;
    {
        cpu->r[14] = 0x00122744u; fn_00097ad0(cpu);
    }
L_00122744:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00122748:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0012274c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122750:;
    {
        cpu->r[14] = 0x00122754u; fn_00096a08(cpu);
    }
L_00122754:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122758:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0012275c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122760:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122764:;
    {
        cpu->r[14] = 0x00122768u; fn_0018aa58(cpu);
    }
L_00122768:;
    {
        cpu->r[14] = 0x0012276cu; fn_00097ad0(cpu);
    }
L_0012276c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00122770:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122774:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122778:;
    {
        cpu->r[14] = 0x0012277cu; fn_00096a08(cpu);
    }
L_0012277c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122780:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122784:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122788:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012278c:;
    {
        cpu->r[14] = 0x00122790u; fn_0018aa58(cpu);
    }
L_00122790:;
    {
        cpu->r[14] = 0x00122794u; fn_00097ad0(cpu);
    }
L_00122794:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00122798:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0012279c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001227a0:;
    {
        cpu->r[14] = 0x001227a4u; fn_00096a08(cpu);
    }
L_001227a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001227a8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001227ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001227b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001227b4:;
    {
        cpu->r[14] = 0x001227b8u; fn_0018aa58(cpu);
    }
L_001227b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001227bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001227c0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_001227c4:;
    {
        cpu->r[14] = 0x001227c8u; fn_000979a0(cpu);
    }
L_001227c8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001227cc:;
    {
        cpu->r[14] = 0x001227d0u; fn_00093f60(cpu);
    }
L_001227d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001227d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001227d8:;
    {
        cpu->r[14] = 0x001227dcu; fn_0009e9e8(cpu);
    }
L_001227dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001227e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001227e4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001227e8:;
    {
        cpu->r[14] = 0x001227ecu; fn_000af09c(cpu);
    }
L_001227ec:;
    {
        cpu->r[14] = 0x001227f0u; fn_00097ad0(cpu);
    }
L_001227f0:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001227f4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001227f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001227fc:;
    {
        cpu->r[14] = 0x00122800u; fn_00096a08(cpu);
    }
L_00122800:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00122804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00122808:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012280c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122810:;
    {
        cpu->r[14] = 0x00122814u; fn_0018aa58(cpu);
    }
L_00122814:;
    {
        cpu->r[14] = 0x00122818u; fn_00097ad0(cpu);
    }
L_00122818:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0012281c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122820:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122824:;
    {
        cpu->r[14] = 0x00122828u; fn_00096a08(cpu);
    }
L_00122828:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012282c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00122830:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122834:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122838:;
    {
        cpu->r[14] = 0x0012283cu; fn_0018aa58(cpu);
    }
L_0012283c:;
    {
        cpu->r[14] = 0x00122840u; fn_00097ad0(cpu);
    }
L_00122840:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00122844:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122848:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012284c:;
    {
        cpu->r[14] = 0x00122850u; fn_00096a08(cpu);
    }
L_00122850:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00122854:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00122858:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012285c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122860:;
    {
        cpu->r[14] = 0x00122864u; fn_0018aa58(cpu);
    }
L_00122864:;
    {
        cpu->r[14] = 0x00122868u; fn_00097ad0(cpu);
    }
L_00122868:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_0012286c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122870:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122874:;
    {
        cpu->r[14] = 0x00122878u; fn_00096a08(cpu);
    }
L_00122878:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012287c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00122880:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122884:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122888:;
    {
        cpu->r[14] = 0x0012288cu; fn_0018aa58(cpu);
    }
L_0012288c:;
    {
        cpu->r[14] = 0x00122890u; fn_00097ad0(cpu);
    }
L_00122890:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00122894:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122898:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012289c:;
    {
        cpu->r[14] = 0x001228a0u; fn_00096a08(cpu);
    }
L_001228a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001228a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001228a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001228ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001228b0:;
    {
        cpu->r[14] = 0x001228b4u; fn_0018aa58(cpu);
    }
L_001228b4:;
    {
        cpu->r[14] = 0x001228b8u; fn_00097ad0(cpu);
    }
L_001228b8:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001228bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001228c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001228c4:;
    {
        cpu->r[14] = 0x001228c8u; fn_00096a08(cpu);
    }
L_001228c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001228cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001228d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001228d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001228d8:;
    {
        cpu->r[14] = 0x001228dcu; fn_0018aa58(cpu);
    }
L_001228dc:;
    {
        cpu->r[14] = 0x001228e0u; fn_00097ad0(cpu);
    }
L_001228e0:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001228e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001228e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001228ec:;
    {
        cpu->r[14] = 0x001228f0u; fn_00096a08(cpu);
    }
L_001228f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001228f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001228f8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001228fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122900:;
    {
        cpu->r[14] = 0x00122904u; fn_0018aa58(cpu);
    }
L_00122904:;
    {
        cpu->r[14] = 0x00122908u; fn_00097ad0(cpu);
    }
L_00122908:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012290c:;
    {
        cpu->r[14] = 0x00122910u; fn_0018b5c8(cpu);
    }
L_00122910:;
    {
        cpu->r[14] = 0x00122914u; fn_00097ad0(cpu);
    }
L_00122914:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00122918:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012291c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122920:;
    {
        cpu->r[14] = 0x00122924u; fn_00096a08(cpu);
    }
L_00122924:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122928:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012292c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122930:;
    {
        cpu->r[14] = 0x00122934u; fn_0018aa44(cpu);
    }
L_00122934:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[0]);
    }
L_00122938:;
    {
        goto L_001224d0;
    }
L_0012293c:;
    {
        cpu->r[14] = 0x00122940u; fn_000979a0(cpu);
    }
L_00122940:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00122944:;
    {
        cpu->r[14] = 0x00122948u; fn_00093f90(cpu);
    }
L_00122948:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0012294c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122950:;
    {
        cpu->r[14] = 0x00122954u; fn_0018ba6c(cpu);
    }
L_00122954:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00122958:;
    {
        cpu->r[2] = 0x0000094fu;
    }
L_0012295c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122960:;
    {
        cpu->r[14] = 0x00122964u; imp_memset(cpu); /* memset */
    }
L_00122964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122968:;
    {
        cpu->r[14] = 0x0012296cu; fn_0010ffa8(cpu);
    }
L_0012296c:;
    {
        cpu->r[3] = rd32(0x00122974u + + 0x30cu);
    }
L_00122970:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122974:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00122978:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012297c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00122980:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00122984:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122988:;
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
L_0012298c:;
    {
        return fn_000f36dc(cpu);
    }
L_00122990:;
    {
        cpu->r[14] = 0x00122994u; fn_00097ad0(cpu);
    }
L_00122994:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00122998:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0012299c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001229a0:;
    {
        cpu->r[14] = 0x001229a4u; fn_00096a08(cpu);
    }
L_001229a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001229a8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001229ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001229b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001229b4:;
    {
        cpu->r[14] = 0x001229b8u; fn_0018aa58(cpu);
    }
L_001229b8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001229bc:;
    {
        cpu->r[14] = 0x001229c0u; fn_00097ad0(cpu);
    }
L_001229c0:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001229c4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001229c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001229cc:;
    {
        cpu->r[14] = 0x001229d0u; fn_00096a08(cpu);
    }
L_001229d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001229d4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001229d8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001229dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001229e0:;
    {
        cpu->r[14] = 0x001229e4u; fn_0018aa58(cpu);
    }
L_001229e4:;
    {
        cpu->r[14] = 0x001229e8u; fn_00097ad0(cpu);
    }
L_001229e8:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001229ec:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001229f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001229f4:;
    {
        cpu->r[14] = 0x001229f8u; fn_00096a08(cpu);
    }
L_001229f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001229fc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122a00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122a04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122a08:;
    {
        cpu->r[14] = 0x00122a0cu; fn_0018aa58(cpu);
    }
L_00122a0c:;
    {
        cpu->r[14] = 0x00122a10u; fn_00097ad0(cpu);
    }
L_00122a10:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_00122a14:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122a18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122a1c:;
    {
        cpu->r[14] = 0x00122a20u; fn_00096a08(cpu);
    }
L_00122a20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122a24:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122a28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122a2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122a30:;
    {
        cpu->r[14] = 0x00122a34u; fn_0018aa58(cpu);
    }
L_00122a34:;
    {
        cpu->r[14] = 0x00122a38u; fn_00097ad0(cpu);
    }
L_00122a38:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00122a3c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122a40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122a44:;
    {
        cpu->r[14] = 0x00122a48u; fn_00096a08(cpu);
    }
L_00122a48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122a4c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122a50:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122a54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122a58:;
    {
        cpu->r[14] = 0x00122a5cu; fn_0018aa58(cpu);
    }
L_00122a5c:;
    {
        cpu->r[14] = 0x00122a60u; fn_00097ad0(cpu);
    }
L_00122a60:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00122a64:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122a68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122a6c:;
    {
        cpu->r[14] = 0x00122a70u; fn_00096a08(cpu);
    }
L_00122a70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122a74:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122a78:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122a7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122a80:;
    {
        cpu->r[14] = 0x00122a84u; fn_0018aa58(cpu);
    }
L_00122a84:;
    {
        cpu->r[14] = 0x00122a88u; fn_00097ad0(cpu);
    }
L_00122a88:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00122a8c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00122a90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122a94:;
    {
        cpu->r[14] = 0x00122a98u; fn_00096a08(cpu);
    }
L_00122a98:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122a9c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00122aa0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00122aa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122aa8:;
    {
        cpu->r[14] = 0x00122aacu; fn_0018aa58(cpu);
    }
L_00122aac:;
    {
        goto L_00122470;
    }
L_00122ab0:;
    {
        cpu->r[3] = rd32(0x00122ab8u + + 0x1c4u);
    }
L_00122ab4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00122ab8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122abc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00122ac0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122ac4:;
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
L_00122ac8:;
    {
        return fn_000f34e8(cpu);
    }
L_00122acc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122ad0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122ad4:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00122ad8:;
    {
        cpu->r[14] = 0x00122ae0u;
    }
L_00122adc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122ae0u)) return;
    }
L_00122ae0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122ae4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224e8;
        }
    }
L_00122ae8:;
    {
        cpu->r[3] = rd32(0x00122af0u + + 0x18cu);
    }
L_00122aec:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_00122af0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122af4:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00122af8:;
    {
        cpu->r[14] = 0x00122afcu; fn_0018ba6c(cpu);
    }
L_00122afc:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122b00:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00122b04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00122b08:;
    {
        cpu->r[14] = 0x00122b0cu; fn_0012234c(cpu);
    }
L_00122b0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122b10:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122b14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122b18:;
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
L_00122b1c:;
    {
        return fn_000f36dc(cpu);
    }
L_00122b20:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122b24:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00122b28:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122b2c:;
    {
        goto L_00122400;
    }
L_00122b30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122b34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122b38:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_00122b3c:;
    {
        cpu->r[14] = 0x00122b44u;
    }
L_00122b40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122b44u)) return;
    }
L_00122b44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122b48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224e8;
        }
    }
L_00122b4c:;
    {
        cpu->r[3] = rd32(0x00122b54u + + 0x128u);
    }
L_00122b50:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00122b54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122b58:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00122b5c:;
    {
        cpu->r[14] = 0x00122b60u; fn_0018ba6c(cpu);
    }
L_00122b60:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122b64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00122b68:;
    {
        cpu->r[14] = 0x00122b6cu; fn_00127fd8(cpu);
    }
L_00122b6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122b70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122b74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122b78:;
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
L_00122b7c:;
    {
        return fn_000f36dc(cpu);
    }
L_00122b80:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122b84:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_00122b88:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122b8c:;
    {
        goto L_00122400;
    }
L_00122b90:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122b94:;
    {
        cpu->r[6] = 0x00000004u;
    }
L_00122b98:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122b9c:;
    {
        goto L_00122400;
    }
L_00122ba0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122ba4:;
    {
        cpu->r[6] = 0x00000006u;
    }
L_00122ba8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122bac:;
    {
        goto L_00122400;
    }
L_00122bb0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00122bb4:;
    {
        cpu->r[6] = 0x00000005u;
    }
L_00122bb8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00122bbc:;
    {
        goto L_00122400;
    }
L_00122bc0:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00122bc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00122bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122c28;
        }
    }
L_00122bcc:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00122bd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00122bd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00122664;
        }
    }
L_00122bd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122bdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122be0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00122be4:;
    {
        cpu->r[14] = 0x00122becu;
    }
L_00122be8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122becu)) return;
    }
L_00122bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122bf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224e8;
        }
    }
L_00122bf4:;
    {
        cpu->r[3] = rd32(0x00122bfcu + + 0x80u);
    }
L_00122bf8:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00122bfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122c00:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00122c04:;
    {
        cpu->r[14] = 0x00122c08u; fn_0018ba6c(cpu);
    }
L_00122c08:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122c0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00122c10:;
    {
        cpu->r[14] = 0x00122c14u; fn_00124ea8(cpu);
    }
L_00122c14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122c18:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122c1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122c20:;
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
L_00122c24:;
    {
        return fn_000f36dc(cpu);
    }
L_00122c28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122c2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122c30:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00122c34:;
    {
        cpu->r[14] = 0x00122c3cu;
    }
L_00122c38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122c3cu)) return;
    }
L_00122c3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001224e8;
        }
    }
L_00122c44:;
    {
        cpu->r[3] = rd32(0x00122c4cu + + 0x30u);
    }
L_00122c48:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00122c4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122c50:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00122c54:;
    {
        cpu->r[14] = 0x00122c58u; fn_0018ba6c(cpu);
    }
L_00122c58:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122c5c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00122c60:;
    {
        cpu->r[14] = 0x00122c64u; fn_001038b0(cpu);
    }
L_00122c64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122c68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122c6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122c70:;
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
L_00122c74:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN21GS_SelectLanguageMenuC2Ebb @ 00122c84 (arm) */
void fn_00122c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122c84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00122c88:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00122c8c:;
    {
        cpu->r[5] = rd32(0x00122c94u + + 0x28u);
    }
L_00122c90:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00122c94:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00122c98:;
    {
        cpu->r[14] = 0x00122c9cu; fn_001100c0(cpu);
    }
L_00122c9c:;
    {
        cpu->r[3] = rd32(0x00122ca4u + + 0x1cu);
    }
L_00122ca0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00122ca8u, cpu->r[5], 0, 0);
    }
L_00122ca4:;
    {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[4]);
    }
L_00122ca8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122cac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122cb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00122cb4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00122cb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00122cbcu)) return;
    }
}

/* _ZN21GS_SelectLanguageMenuD0Ev @ 00122cc4 (arm) */
void fn_00122cc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122cc4:;
    {
        cpu->r[3] = rd32(0x00122cccu + + 0x2cu);
    }
L_00122cc8:;
    {
        cpu->r[2] = rd32(0x00122cd0u + + 0x2cu);
    }
L_00122ccc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122cd4u, cpu->r[3], 0, 0);
    }
L_00122cd0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00122cd4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00122cd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122cdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00122ce0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00122ce4:;
    {
        cpu->r[14] = 0x00122ce8u; fn_000ec21c(cpu);
    }
L_00122ce8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122cec:;
    {
        cpu->r[14] = 0x00122cf0u; fn_0018ba20(cpu);
    }
L_00122cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122cf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00122cf8u)) return;
    }
}

/* _ZN21GS_SelectLanguageMenu6CreateEv @ 00122d00 (arm) */
void fn_00122d00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122d00:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00122d04:;
    {
        cpu->r[4] = rd32(0x00122d0cu + + 0x68u);
    }
L_00122d08:;
    {
        cpu->r[3] = rd32(0x00122d10u + + 0x68u);
    }
L_00122d0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00122d10:;
    {
        cpu->r[4] = add_flags(cpu, 0x00122d18u, cpu->r[4], 0, 0);
    }
L_00122d14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00122d18:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00122d1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00122d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122d4c;
        }
    }
L_00122d24:;
    {
        cpu->r[7] = rd32(0x00122d2cu + + 0x50u);
    }
L_00122d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00122d2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00122d30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00122d34:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00122d38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00122d3c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_00122d40:;
    {
        cpu->r[14] = 0x00122d44u; fn_001101ac(cpu);
    }
L_00122d44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00122d48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00122d4cu)) return;
    }
L_00122d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122d50:;
    {
        cpu->r[14] = 0x00122d54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00122d54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122d58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122d24;
        }
    }
L_00122d5c:;
    {
        cpu->r[7] = rd32(0x00122d64u + + 0x18u);
    }
L_00122d60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00122d64:;
    {
        cpu->r[14] = 0x00122d68u; fn_00094228(cpu);
    }
L_00122d68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00122d6c:;
    {
        cpu->r[14] = 0x00122d70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00122d70:;
    {
        goto L_00122d28;
    }
}

/* _ZN21GS_SelectLanguageMenu6RenderEv @ 00122d80 (arm) */
void fn_00122d80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122d80:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00122d84:;
    {
        cpu->r[5] = rd32(0x00122d8cu + + 0xfcu);
    }
L_00122d88:;
    {
        cpu->r[3] = rd32(0x00122d90u + + 0xfcu);
    }
L_00122d8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00122d90:;
    {
        cpu->r[5] = add_flags(cpu, 0x00122d98u, cpu->r[5], 0, 0);
    }
L_00122d94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122d98:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122d9c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00122da0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00122da4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122e44;
        }
    }
L_00122da8:;
    {
        cpu->r[6] = rd32(0x00122db0u + + 0xe0u);
    }
L_00122dac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00122db0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00122db4:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00122db8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00122dbc:;
    {
        cpu->r[14] = 0x00122dc0u; fn_0018aa44(cpu);
    }
L_00122dc0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00122dc4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122dc8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00122dcc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00122dd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00122dd4:;
    {
        cpu->r[14] = 0x00122dd8u; fn_000ad8a0(cpu);
    }
L_00122dd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00122ddc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00122de0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00122e0c;
        }
    }
L_00122de4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00122de8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122dec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122df0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00122df4:;
    {
        cpu->r[14] = 0x00122dfcu;
    }
L_00122df8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122dfcu)) return;
    }
L_00122dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00122e00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00122e04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00122e08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00122de4;
        }
    }
L_00122e0c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00122e10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122e28;
        }
    }
L_00122e18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122e20:;
    {
        cpu->r[14] = 0x00122e28u;
    }
L_00122e24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122e28u)) return;
    }
L_00122e28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00122e2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00122e30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00122e34:;
    {
        cpu->r[14] = 0x00122e3cu;
    }
L_00122e38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00122e3cu)) return;
    }
L_00122e3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00122e40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00122e44u)) return;
    }
L_00122e44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00122e48:;
    {
        cpu->r[14] = 0x00122e4cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00122e4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122da8;
        }
    }
L_00122e54:;
    {
        cpu->r[6] = rd32(0x00122e5cu + + 0x34u);
    }
L_00122e58:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00122e5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122e60:;
    {
        cpu->r[14] = 0x00122e64u; fn_0018aa20(cpu);
    }
L_00122e64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00122e68:;
    {
        cpu->r[14] = 0x00122e6cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00122e6c:;
    {
        cpu->r[3] = rd32(0x00122e74u + + 0x20u);
    }
L_00122e70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00122e74:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122e78:;
    {
        cpu->r[3] = rd32(0x00122e80u + + 0x18u);
    }
L_00122e7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122e80:;
    {
        cpu->r[14] = 0x00122e84u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00122e84:;
    {
        goto L_00122dac;
    }
}

/* _ZN21GS_SelectLocationMenu8isKindOfEi @ 00122e9c (arm) */
void fn_00122e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122e9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000014u, 1, 1);
    }
L_00122ea0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00122ea4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00122ea8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_43 @ 00122eac (arm) */
void fn_00122eac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122eac:;
    {
        cpu->r[3] = rd32(0x00122eb4u + + 0x6cu);
    }
L_00122eb0:;
    {
        cpu->r[1] = rd32(0x00122eb8u + + 0x6cu);
    }
L_00122eb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122ebcu, cpu->r[3], 0, 0);
    }
L_00122eb8:;
    {
        cpu->r[0] = rd32(0x00122ec0u + + 0x68u);
    }
L_00122ebc:;
    {
        cpu->r[2] = rd32(0x00122ec4u + + 0x68u);
    }
L_00122ec0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00122ec4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00122ec8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00122ed0u, cpu->r[2], 0, 0);
    }
L_00122ecc:;
    {
        cpu->r[3] = rd32(0x00122ed4u + + 0x5cu);
    }
L_00122ed0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00122ed4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00122edcu, cpu->r[3], 0, 0);
    }
L_00122ed8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00122edc:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00122ee0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x000000b4u, 1, 0);
    }
L_00122ee4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00122ee8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], 0x00000028u, 1, 0);
    }
L_00122eec:;
    {
        wr32(cpu->r[3] + + 0x9cu, cpu->r[1]);
    }
L_00122ef0:;
    {
        wr32(cpu->r[3] + + 0xa0u, cpu->r[12]);
    }
L_00122ef4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 0);
    }
L_00122ef8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x000000eau, 1, 0);
    }
L_00122efc:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[0]);
    }
L_00122f00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000009cu, 0, 0);
    }
L_00122f04:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[12]);
    }
L_00122f08:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_00122f0c:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[1]);
    }
L_00122f10:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00122f14:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_00122f18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00122f1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_SelectLocationMenu6UpdateEv @ 00122f34 (arm) */
void fn_00122f34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00122f34:;
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
L_00122f38:;
    {
        cpu->r[5] = rd32(0x00122f40u + + 0x57cu);
    }
L_00122f3c:;
    {
        cpu->r[6] = rd32(0x00122f44u + + 0x57cu);
    }
L_00122f40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00122f44:;
    {
        cpu->r[5] = add_flags(cpu, 0x00122f4cu, cpu->r[5], 0, 0);
    }
L_00122f48:;
    {
        cpu->r[9] = rd32(0x00122f50u + + 0x574u);
    }
L_00122f4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_00122f50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00122f54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00122f58:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00122f5c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00122f60:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_00122f64:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00122f68:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_00122f6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00122f84;
        }
    }
L_00122f74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_00122f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122f7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00122f80:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x94fu, cpu->r[3]);
        }
    }
L_00122f84:;
    {
        cpu->r[14] = 0x00122f88u; fn_00096d08(cpu);
    }
L_00122f88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00122f8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00122f90:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002adu;
        }
    }
L_00122f94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000afu;
        }
    }
L_00122f98:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x8cu, cpu->r[2]);
        }
    }
L_00122f9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002aau;
        }
    }
L_00122fa0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x8cu, cpu->r[2]);
        }
    }
L_00122fa4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000acu;
        }
    }
L_00122fa8:;
    {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
    }
L_00122fac:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x960u);
    }
L_00122fb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122fb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001231e8;
        }
    }
L_00122fb8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x94fu);
    }
L_00122fbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122fc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001230c0;
        }
    }
L_00122fc4:;
    {
        cpu->r[3] = rd32(0x00122fccu + + 0x4fcu);
    }
L_00122fc8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00122fcc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00122fd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_00122fd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00122fd8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00122fdc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
        }
    }
L_00122fe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x988u);
    }
L_00122fe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00122fe8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_00122fec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00122ff0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = rd8(cpu->r[3] + + 0x96cu);
        }
    }
L_00122ff4:;
    {
        cpu->r[14] = 0x00122ff8u; fn_00096bb8(cpu);
    }
L_00122ff8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00122ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123068;
        }
    }
L_00123000:;
    {
        cpu->r[3] = rd32(0x00123008u + + 0x4c4u);
    }
L_00123004:;
    {
        cpu->r[2] = 0x000004f9u;
    }
L_00123008:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0012300c:;
    {
        cpu->r[12] = 0x000000b7u;
    }
L_00123010:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123018u, cpu->r[3], 0, 0);
    }
L_00123014:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_00123018:;
    {
        wr32(cpu->r[3] + + 0xa4u, cpu->r[12]);
    }
L_0012301c:;
    {
        wr32(cpu->r[3] + + 0x94u, cpu->r[2]);
    }
L_00123020:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x90u);
    }
L_00123024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00123028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0012302c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00123030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_00123034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00123038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001230b0;
        }
    }
L_0012303c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00123040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012321c;
        }
    }
L_00123044:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00123048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001231dc;
        }
    }
L_0012304c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00123050:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00123054:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00123058:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0012305c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001234b8;
        }
    }
L_00123060:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00123064:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00123068u)) return;
    }
L_00123068:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012306c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123000;
        }
    }
L_00123070:;
    {
        cpu->r[3] = rd32(0x00123078u + + 0x458u);
    }
L_00123074:;
    {
        cpu->r[12] = 0x000002b7u;
    }
L_00123078:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0012307c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00123080:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123088u, cpu->r[3], 0, 0);
    }
L_00123084:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_00123088:;
    {
        wr32(cpu->r[3] + + 0xa4u, cpu->r[12]);
    }
L_0012308c:;
    {
        wr32(cpu->r[3] + + 0x94u, cpu->r[0]);
    }
L_00123090:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x90u);
    }
L_00123094:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00123098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0012309c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001230a0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001230a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001230a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001230ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012303c;
        }
    }
L_001230b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001230b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001230b8:;
    {
        cpu->r[14] = 0x001230bcu; fn_000eb59c(cpu);
    }
L_001230bc:;
    {
        goto L_0012304c;
    }
L_001230c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001230c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001230c8:;
    {
        wr8(cpu->r[4] + + 0x94fu, cpu->r[2]);
    }
L_001230cc:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_001230d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001230d4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001230d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001230dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001230e0:;
    {
        cpu->r[10] = 0x00000014u;
    }
L_001230e4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001230e8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001230ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001230f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x964u);
        }
    }
L_001230f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001230f8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x964u, cpu->r[2]);
        }
    }
L_001230fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x438u);
    }
L_00123100:;
    {
        cpu->r[14] = 0x0000009cu;
    }
L_00123104:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123108:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0012310c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00123110:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_00123114:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12] + cpu->r[1]; cpu->r[1] = v;
    }
L_00123118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0012311c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x6cu);
    }
L_00123120:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00123124:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123128:;
    {
        cpu->r[14] = 0x0012312cu; fn_00096d54(cpu);
    }
L_0012312c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123130:;
    {
        wr8(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_00123134:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00123138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x7170u << 16);
        }
    }
L_0012313c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123170;
        }
    }
L_00123140:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00123144:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00123148:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 1);
    }
L_0012314c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_00123150:;
    {
        cpu->r[2] = rd16(cpu->r[3] + cpu->r[10]);
    }
L_00123154:;
    {
        uint32_t v = cpu->r[2] | cpu->r[0]; cpu->r[0] = v;
    }
L_00123158:;
    {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[0]);
    }
L_0012315c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_00123160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012318c;
        }
    }
L_00123164:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123168:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012316c:;
    {
        goto L_001230fc;
    }
L_00123170:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123174:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_00123178:;
    {
        cpu->r[14] = 0x0012317cu; fn_0010dfc0(cpu);
    }
L_0012317c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00123180:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00123184:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_00123188:;
    {
        goto L_00123140;
    }
L_0012318c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123190:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123194:;
    {
        cpu->r[14] = 0x00123198u; fn_000a21a4(cpu);
    }
L_00123198:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0012319c:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[0]);
    }
L_001231a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001231a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00123280;
        }
    }
L_001231a8:;
    {
        cpu->r[3] = rd32(0x001231b0u + + 0x318u);
    }
L_001231ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001231b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001231b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001231b8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x988u);
    }
L_001231bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001231c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001231c4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001231c8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_001231cc:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_001231d0:;
    {
        cpu->r[2] = 0x00001c98u;
    }
L_001231d4:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[12]);
    }
L_001231d8:;
    {
        goto L_00122fc8;
    }
L_001231dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001231e0:;
    {
        cpu->r[14] = 0x001231e4u; fn_00114a58(cpu);
    }
L_001231e4:;
    {
        goto L_0012304c;
    }
L_001231e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001231ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001231f0:;
    {
        cpu->r[14] = 0x001231f4u; fn_000ec594(cpu);
    }
L_001231f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001231f8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001231fc:;
    {
        cpu->r[14] = 0x00123200u; fn_000ec594(cpu);
    }
L_00123200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123204:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00123208:;
    {
        cpu->r[14] = 0x0012320cu; fn_000ec594(cpu);
    }
L_0012320c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123210:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00123214:;
    {
        cpu->r[14] = 0x00123218u; fn_000ec594(cpu);
    }
L_00123218:;
    {
        goto L_00122fb8;
    }
L_0012321c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123220:;
    {
        cpu->r[14] = 0x00123224u; fn_0010da28(cpu);
    }
L_00123224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012304c;
        }
    }
L_0012322c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00123230:;
    {
        cpu->r[2] = 0x00000412u;
    }
L_00123234:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00123238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001232bc;
        }
    }
L_0012323c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00123240:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00123244:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012304c;
        }
    }
L_00123248:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0012324c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123450;
        }
    }
L_00123250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x988u);
    }
L_00123254:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000012cu, 0, 0);
    }
L_0012325c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00123260:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_00123264:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00123268:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0012326c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123270:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00123274:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00123278:;
    {
        cpu->r[14] = 0x0012327cu; fn_000f34e8(cpu);
    }
L_0012327c:;
    {
        goto L_0012304c;
    }
L_00123280:;
    {
        cpu->r[1] = rd32(0x00123288u + + 0x24cu);
    }
L_00123284:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00123288:;
    {
        cpu->r[2] = rd32(0x00123290u + + 0x248u);
    }
L_0012328c:;
    {
        cpu->r[14] = 0x00000239u;
    }
L_00123290:;
    {
        cpu->r[3] = rd32(0x00123298u + + 0x244u);
    }
L_00123294:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012329cu, cpu->r[1], 0, 0);
    }
L_00123298:;
    {
        cpu->r[12] = rd32(0x001232a0u + + 0x240u);
    }
L_0012329c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001232a4u, cpu->r[2], 0, 0);
    }
L_001232a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001232a8u, cpu->r[3], 0, 0);
    }
L_001232a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001232a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001232b0u, cpu->r[12], 0, 0);
    }
L_001232ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001232b0:;
    {
        cpu->r[14] = 0x001232b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001232b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x988u);
    }
L_001232b8:;
    {
        goto L_001231a8;
    }
L_001232bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001232c0:;
    {
        cpu->r[7] = 0x00001c4cu;
    }
L_001232c4:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_001232c8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001232cc:;
    {
        cpu->r[6] = 0x00005fa8u;
    }
L_001232d0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001232d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001232d8:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001232dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001232e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_001232e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_001232e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_001232ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001232f0:;
    {
        cpu->r[14] = 0x001232f4u; imp_memcpy(cpu); /* memcpy */
    }
L_001232f4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_001232f8:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_001232fc:;
    {
        cpu->r[1] = 0x00005f53u;
    }
L_00123300:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x438u);
    }
L_00123304:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_00123308:;
    {
        cpu->r[8] = rd8(cpu->r[11] + cpu->r[1]);
    }
L_0012330c:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_00123310:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00123314:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_00123318:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0012331c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x34u);
    }
L_00123320:;
    {
        wr32(cpu->r[11] + cpu->r[1], cpu->r[10]);
    }
L_00123324:;
    {
        wr32(cpu->r[11] + cpu->r[6], cpu->r[2]);
    }
L_00123328:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x34u);
    }
L_0012332c:;
    {
        wr32(cpu->r[11] + cpu->r[6], cpu->r[3]);
    }
L_00123330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123498;
        }
    }
L_00123334:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00123338:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0012333c:;
    {
        cpu->r[3] = rd32(0x00123344u + + 0x1a0u);
    }
L_00123340:;
    {
        uint32_t wb_tmp = cpu->r[12] + - 0x18u;
        wr32(cpu->r[12] + - 0x18u, cpu->r[8]);
        cpu->r[12] = wb_tmp;
    }
L_00123344:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00123348:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_0012334c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123354u, cpu->r[3], 0, 0);
    }
L_00123350:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_00123354:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00123358:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_0012335c:;
    {
        wr32(cpu->r[2], cpu->r[8]);
    }
L_00123360:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[7]);
    }
L_00123364:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00123368:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0012336c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00123370:;
    {
        cpu->r[14] = 0x00123374u; imp_sprintf(cpu); /* sprintf */
    }
L_00123374:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0012337c:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x2cu;
        wr32(cpu->r[7] + - 0x2cu, cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_00123380:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00123384:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00123388:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_0012338c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00123390:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_00123394:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_00123398:;
    {
        wr32(cpu->r[2], cpu->r[8]);
    }
L_0012339c:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[6]);
    }
L_001233a0:;
    {
        cpu->r[14] = 0x001233a4u; imp_sprintf(cpu); /* sprintf */
    }
L_001233a4:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_001233a8:;
    {
        cpu->r[14] = 0x001233acu; fn_0018ba6c(cpu);
    }
L_001233ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001233b0:;
    {
        cpu->r[14] = 0x001233b4u; fn_001c695c(cpu);
    }
L_001233b4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001233b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001233bc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001233c0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001233c4:;
    {
        cpu->r[14] = 0x001233ccu;
    }
L_001233c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001233ccu)) return;
    }
L_001233cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001233d0:;
    {
        cpu->r[14] = 0x00006788u;
    }
L_001233d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001233d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_001233dc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001233e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_001233e4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001233e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_001233ec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001233f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001233f4:;
    {
        cpu->r[12] = 0x00000006u;
    }
L_001233f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001233fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00123400:;
    {
        cpu->r[14] = 0x00123404u; fn_001c4994(cpu);
    }
L_00123404:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00123408:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012340c:;
    {
        cpu->r[14] = 0x00123414u;
    }
L_00123410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00123414u)) return;
    }
L_00123414:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00123418:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012341c:;
    {
        cpu->r[14] = 0x00123420u; fn_001933d4(cpu);
    }
L_00123420:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123424:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_00123428:;
    {
        cpu->r[0] = 0x000009c8u;
    }
L_0012342c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00123430:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[10]);
    }
L_00123434:;
    {
        cpu->r[14] = 0x00123438u; fn_0018ba6c(cpu);
    }
L_00123438:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0012343c:;
    {
        cpu->r[14] = 0x00123440u; fn_0019bd08(cpu);
    }
L_00123440:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123444:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00123448:;
    {
        cpu->r[14] = 0x0012344cu; fn_000f361c(cpu);
    }
L_0012344c:;
    {
        goto L_0012304c;
    }
L_00123450:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123454:;
    {
        cpu->r[0] = 0x00001c50u;
    }
L_00123458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012345c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123460:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[2]);
    }
L_00123464:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00123468:;
    {
        wr32(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0012346c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x438u);
    }
L_00123470:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x34u);
    }
L_00123474:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_00123478:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0012347c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x988u);
    }
L_00123480:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000012cu, 0, 0);
    }
L_00123484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00123488:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0012348c:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_00123490:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00123494:;
    {
        goto L_0012326c;
    }
L_00123498:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_0012349c:;
    {
        cpu->r[14] = 0x001234a0u; fn_0018ba6c(cpu);
    }
L_001234a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001234a4:;
    {
        cpu->r[14] = 0x001234a8u; fn_001afc34(cpu);
    }
L_001234a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001234ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001234b0:;
    {
        cpu->r[14] = 0x001234b4u; fn_000f361c(cpu);
    }
L_001234b4:;
    {
        goto L_0012304c;
    }
L_001234b8:;
    {
        cpu->r[14] = 0x001234bcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001234bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 1, 9u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_001234c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001234c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001234c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 4, 12u, &shc); cpu->r[0] = v;
        }
    }
L_001234cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[2] = v;
        set_nz(cpu, v);
        }
    }
L_001234d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 3, 2u, &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_001234d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[14] + (-cpu->r[0]);
        wr16(cpu->r[14], cpu->r[10]);
        cpu->r[14] = wb_tmp;
        }
    }
L_001234d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[14] + (-cpu->r[0]);
        wr16(cpu->r[14], cpu->r[10]);
        cpu->r[14] = wb_tmp;
        }
    }
L_001234dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[14] + (-cpu->r[8]);
        wr16(cpu->r[14], 0x001234e4u);
        cpu->r[14] = wb_tmp;
        }
    }
L_001234e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[14] & shifter(cpu->r[12], 2, 17u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001234e4u)) return;
        }
    }
L_001234e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 7u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN21GS_SelectLocationMenu8DoActionEii @ 001234e8 (arm) */
void fn_001234e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001234e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001234ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001234f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001234f4:;
    {
        cpu->r[5] = rd32(0x001234fcu + + 0x418u);
    }
L_001234f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001234fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123500:;
    {
        cpu->r[5] = add_flags(cpu, 0x00123508u, cpu->r[5], 0, 0);
    }
L_00123504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123510;
        }
    }
L_00123508:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012350c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00123510u)) return;
    }
L_00123510:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00123514:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00123518:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00123608;
        }
    }
L_0012351c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00123520:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00123524:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00123528:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_0012352c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[12];
        }
    }
L_00123530:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00123534:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_00123538:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0012353c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_00123540:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000600u, 1, 0);
    }
L_00123544:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_00123548:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[6]);
    }
L_0012354c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00123550:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001235bc;
        }
    }
L_00123554:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_00123558:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0012355c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012365c;
        }
    }
L_00123560:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_00123564:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00123568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001236e4;
        }
    }
L_0012356c:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_00123570:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00123574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123738;
        }
    }
L_00123578:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_0012357c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00123580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001237a8;
        }
    }
L_00123584:;
    {
        cpu->r[3] = 0x000004f9u;
    }
L_00123588:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0012358c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123508;
        }
    }
L_00123590:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00123594:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00123598:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0012359c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001235a0:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_001235a4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001235a8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001235ac:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001235b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001235b4:;
    {
        cpu->r[14] = 0x001235b8u; fn_000fd248(cpu);
    }
L_001235b8:;
    {
        goto L_00123508;
    }
L_001235bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001235c0:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x96cu);
    }
L_001235c4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001235c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123618;
        }
    }
L_001235cc:;
    {
        cpu->r[0] = rd32(0x001235d4u + + 0x344u);
    }
L_001235d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001235d4:;
    {
        cpu->r[14] = rd32(0x001235dcu + + 0x340u);
    }
L_001235d8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001235dc:;
    {
        cpu->r[1] = 0x00000098u;
    }
L_001235e0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001235e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001235e8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001235ec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001235f0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001235f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001235f8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[14]);
    }
L_001235fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00123600:;
    {
        cpu->r[14] = 0x00123604u; fn_000fd248(cpu);
    }
L_00123604:;
    {
        goto L_00123508;
    }
L_00123608:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0012360c:;
    {
        cpu->r[14] = 0x00123614u;
    }
L_00123610:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00123614u)) return;
    }
L_00123614:;
    {
        goto L_00123508;
    }
L_00123618:;
    {
        cpu->r[3] = rd32(0x00123620u + + 0x2f8u);
    }
L_0012361c:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_00123620:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x78u);
    }
L_00123624:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00123628:;
    {
        cpu->r[0] = rd32(0x00123630u + + 0x2ecu);
    }
L_0012362c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123630:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00123634:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00123638:;
    {
        cpu->r[5] = rd32(cpu->r[7]);
    }
L_0012363c:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00123640:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[12]);
    }
L_00123644:;
    {
        cpu->r[4] = 0x00001c98u;
    }
L_00123648:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x490u);
    }
L_0012364c:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[12]);
    }
L_00123650:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00123654:;
    {
        cpu->r[14] = 0x00123658u; fn_000fd248(cpu);
    }
L_00123658:;
    {
        goto L_00123508;
    }
L_0012365c:;
    {
        cpu->r[6] = rd32(0x00123664u + + 0x2b4u);
    }
L_00123660:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00123664:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x958u);
    }
L_00123668:;
    {
        wr32(cpu->r[0] + + 0x964u, cpu->r[3]);
    }
L_0012366c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123670:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00123674:;
    {
        goto L_0012367c;
    }
L_00123678:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_0012367c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00123680:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[1]);
    }
L_00123684:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00123688:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0012368c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x98cu);
        }
    }
L_00123690:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00123694:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x958u, cpu->r[1]);
        }
    }
L_00123698:;
    {
        cpu->r[14] = 0x0012369cu; fn_00096bb8(cpu);
    }
L_0012369c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001236a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123678;
        }
    }
L_001236a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001236a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001236ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_001236b0:;
    {
        cpu->r[14] = 0x001236b4u; fn_0009fad4(cpu);
    }
L_001236b4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001236b8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001236bc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001236c0:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_001236c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001236c8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001236cc:;
    {
        cpu->r[14] = 0x001236d0u; fn_000fd248(cpu);
    }
L_001236d0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001236d4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001236d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001236dc:;
    {
        wr8(cpu->r[4] + + 0x94fu, cpu->r[3]);
    }
L_001236e0:;
    {
        goto L_00123508;
    }
L_001236e4:;
    {
        cpu->r[6] = rd32(0x001236ecu + + 0x22cu);
    }
L_001236e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001236ec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x958u);
    }
L_001236f0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001236f4:;
    {
        wr32(cpu->r[0] + + 0x964u, cpu->r[3]);
    }
L_001236f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001236fc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00123700:;
    {
        goto L_00123708;
    }
L_00123704:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x98cu);
    }
L_0012370c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00123710:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00123714:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00123718:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[1]);
    }
L_0012371c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_00123720:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x958u, cpu->r[7]);
        }
    }
L_00123724:;
    {
        cpu->r[14] = 0x00123728u; fn_00096bb8(cpu);
    }
L_00123728:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012372c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123704;
        }
    }
L_00123730:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00123734:;
    {
        goto L_001236a8;
    }
L_00123738:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0012373c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00123740:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00123744:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00123748:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0012374c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00123750:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00123754:;
    {
        cpu->r[14] = 0x00123758u; fn_000fd288(cpu);
    }
L_00123758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012375c:;
    {
        cpu->r[1] = 0x00001c50u;
    }
L_00123760:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123764:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00123768:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[2]);
    }
L_0012376c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_00123770:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_00123774:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00123778:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0012377c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00123780:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[6]);
    }
L_00123784:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_00123788:;
    {
        cpu->r[14] = 0x0012378cu; fn_00093f34(cpu);
    }
L_0012378c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00123790:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00123794:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00123798:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0012379c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001237a0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001237a4:;
    {
        goto L_00123508;
    }
L_001237a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001237ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001237b0:;
    {
        cpu->r[6] = rd32(0x001237b8u + + 0x160u);
    }
L_001237b4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001237b8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001237bc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001237c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001237c4:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_001237c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001237cc:;
    {
        cpu->r[14] = 0x001237d0u; fn_000fd288(cpu);
    }
L_001237d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001237d4:;
    {
        cpu->r[12] = 0x00001c50u;
    }
L_001237d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_001237dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001237e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001237e4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x960u);
    }
L_001237e8:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001237ec:;
    {
        cpu->r[12] = 0x00001be0u;
    }
L_001237f0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x438u);
    }
L_001237f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001237f8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x988u);
    }
L_001237fc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[14]; cpu->r[2] = v;
    }
L_00123800:;
    {
        cpu->r[14] = 0x00001c98u;
    }
L_00123804:;
    {
        wr32(cpu->r[0] + cpu->r[14], cpu->r[7]);
    }
L_00123808:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x34u);
    }
L_0012380c:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_00123810:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[14]);
    }
L_00123814:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x988u);
    }
L_00123818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000012cu, 0, 0);
    }
L_0012381c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00123820:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00123824:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00123828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001238cc;
        }
    }
L_0012382c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00123830:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_00123834:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00123838:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0012383c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00123840:;
    {
        cpu->r[3] = 0x00001be8u;
    }
L_00123844:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00123848:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_0012384c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00123850:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00123854:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00123858:;
    {
        cpu->r[7] = 0x00001c50u;
    }
L_0012385c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00123860:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00123864:;
    {
        cpu->r[14] = 0x00123868u; fn_00097724(cpu);
    }
L_00123868:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0012386c:;
    {
        cpu->r[14] = 0x00123870u; fn_000979a0(cpu);
    }
L_00123870:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123874:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00123878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0012387c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00123880:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001b8u, 0, 0);
    }
L_00123884:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x4u);
    }
L_00123888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012388c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001238e8;
        }
    }
L_00123890:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00123894:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00123898:;
    {
        cpu->r[14] = 0x0012389cu; fn_000f35e4(cpu);
    }
L_0012389c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001238a0:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001238a4:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001238a8:;
    {
        cpu->r[14] = 0x001238acu; fn_0018ba6c(cpu);
    }
L_001238ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001238b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001238b4:;
    {
        cpu->r[14] = 0x001238b8u; fn_000f22d4(cpu);
    }
L_001238b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001238bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001238c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001238c4:;
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
L_001238c8:;
    {
        return fn_000f361c(cpu);
    }
L_001238cc:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_001238d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001238d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001238d8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001238dc:;
    {
        cpu->r[14] = 0x001238e0u; fn_00096220(cpu);
    }
L_001238e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001238e4:;
    {
        goto L_00123854;
    }
L_001238e8:;
    {
        cpu->r[14] = 0x001238ecu; fn_000979a0(cpu);
    }
L_001238ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001238f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001238f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001238f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001238fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_00123900:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00123904:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00123908:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0012390c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123910:;
    {
        goto L_00123890;
    }
}

/* _ZN21GS_SelectLocationMenuD1Ev @ 00123920 (arm) */
void fn_00123920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123920:;
    {
        cpu->r[3] = rd32(0x00123928u + + 0x24u);
    }
L_00123924:;
    {
        cpu->r[2] = rd32(0x0012392cu + + 0x24u);
    }
L_00123928:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123930u, cpu->r[3], 0, 0);
    }
L_0012392c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00123930:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00123934:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123938:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0012393c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00123940:;
    {
        cpu->r[14] = 0x00123944u; fn_000ec21c(cpu);
    }
L_00123944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123948:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012394cu)) return;
    }
}

/* _ZN21GS_SelectLocationMenuD0Ev @ 00123954 (arm) */
void fn_00123954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123954:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00123958:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012395c:;
    {
        cpu->r[14] = 0x00123960u; fn_00123920(cpu);
    }
L_00123960:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123964:;
    {
        cpu->r[14] = 0x00123968u; fn_0018ba20(cpu);
    }
L_00123968:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012396c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00123970u)) return;
    }
}

/* _ZN21GS_SelectLocationMenuD2Ev @ 00123970 (arm) */
void fn_00123970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123970:;
    {
        cpu->r[3] = rd32(0x00123978u + + 0x24u);
    }
L_00123974:;
    {
        cpu->r[2] = rd32(0x0012397cu + + 0x24u);
    }
L_00123978:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123980u, cpu->r[3], 0, 0);
    }
L_0012397c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00123980:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00123984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123988:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0012398c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00123990:;
    {
        cpu->r[14] = 0x00123994u; fn_000ec21c(cpu);
    }
L_00123994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123998:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012399cu)) return;
    }
}

/* _ZN21GS_SelectLocationMenuC1Eiibbiib @ 001239a4 (arm) */
void fn_001239a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001239a4:;
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
L_001239a8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001239ac:;
    {
        cpu->r[5] = rd32(0x001239b4u + + 0x118u);
    }
L_001239b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001239b4:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x20u);
    }
L_001239b8:;
    {
        cpu->r[7] = 0x00001bd0u;
    }
L_001239bc:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x2cu);
    }
L_001239c0:;
    {
        cpu->r[14] = 0x001239c4u; fn_001100c0(cpu);
    }
L_001239c4:;
    {
        cpu->r[12] = rd32(0x001239ccu + + 0x104u);
    }
L_001239c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001239d0u, cpu->r[5], 0, 0);
    }
L_001239cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001239d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001239d4:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[2]);
    }
L_001239d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001239dc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001239e0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001239e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001239e8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000960u;
        wr32(cpu->r[1], cpu->r[12]);
        cpu->r[1] = wb_tmp;
    }
L_001239ec:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001239f0:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001239f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001239f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001239fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00123a00:;
    {
        wr32(cpu->r[14] + + 0x8u, cpu->r[2]);
    }
L_00123a04:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_00123a08:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_00123a0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00123a10:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00123a14:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_00123a18:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00123a1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00123a20:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00123a24:;
    {
        wr8(cpu->r[4] + + 0x960u, cpu->r[10]);
    }
L_00123a28:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_00123a2c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x474u);
    }
L_00123a30:;
    {
        wr8(cpu->r[4] + + 0x950u, cpu->r[8]);
    }
L_00123a34:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[2]);
    }
L_00123a38:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00123a3c:;
    {
        cpu->r[14] = 0x00123a40u; fn_00096b5c(cpu);
    }
L_00123a40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00123a44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00123a48:;
    {
        cpu->r[14] = 0x00123a4cu; fn_00096bb8(cpu);
    }
L_00123a4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123a50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123ab0;
        }
    }
L_00123a54:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123a58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00123a5c:;
    {
        cpu->r[14] = 0x00123a60u; fn_00096cb4(cpu);
    }
L_00123a60:;
    {
        cpu->r[1] = rd32(0x00123a68u + + 0x6cu);
    }
L_00123a64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123a68:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_00123a6c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00123a70:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00123a74:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x438u);
    }
L_00123a78:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_00123a7c:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00123a80:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00123a84:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_00123a88:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x34u);
    }
L_00123a8c:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[1]);
    }
L_00123a90:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_00123a94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00123a98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00123a9c:;
    {
        cpu->r[14] = 0x00123aa0u; fn_0009fad4(cpu);
    }
L_00123aa0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00123aa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123aa8:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_00123aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00123ab0u)) return;
    }
L_00123ab0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123ab4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00123ab8:;
    {
        cpu->r[14] = 0x00123abcu; fn_00096b5c(cpu);
    }
L_00123abc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123ac0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00123ac4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_00123ac8:;
    {
        goto L_00123a94;
    }
}

/* _ZN21GS_SelectLocationMenuC2Eiibbiib @ 00123ad8 (arm) */
void fn_00123ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123ad8:;
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
L_00123adc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00123ae0:;
    {
        cpu->r[5] = rd32(0x00123ae8u + + 0x118u);
    }
L_00123ae4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123ae8:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x20u);
    }
L_00123aec:;
    {
        cpu->r[7] = 0x00001bd0u;
    }
L_00123af0:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x2cu);
    }
L_00123af4:;
    {
        cpu->r[14] = 0x00123af8u; fn_001100c0(cpu);
    }
L_00123af8:;
    {
        cpu->r[12] = rd32(0x00123b00u + + 0x104u);
    }
L_00123afc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00123b04u, cpu->r[5], 0, 0);
    }
L_00123b00:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00123b04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123b08:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[2]);
    }
L_00123b0c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00123b10:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00123b14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123b18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00123b1c:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000960u;
        wr32(cpu->r[1], cpu->r[12]);
        cpu->r[1] = wb_tmp;
    }
L_00123b20:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00123b24:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_00123b28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00123b2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00123b30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00123b34:;
    {
        wr32(cpu->r[14] + + 0x8u, cpu->r[2]);
    }
L_00123b38:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_00123b3c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_00123b40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00123b44:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00123b48:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_00123b4c:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00123b50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00123b54:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00123b58:;
    {
        wr8(cpu->r[4] + + 0x960u, cpu->r[10]);
    }
L_00123b5c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_00123b60:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x474u);
    }
L_00123b64:;
    {
        wr8(cpu->r[4] + + 0x950u, cpu->r[8]);
    }
L_00123b68:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[2]);
    }
L_00123b6c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00123b70:;
    {
        cpu->r[14] = 0x00123b74u; fn_00096b5c(cpu);
    }
L_00123b74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00123b78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00123b7c:;
    {
        cpu->r[14] = 0x00123b80u; fn_00096bb8(cpu);
    }
L_00123b80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123b84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123be4;
        }
    }
L_00123b88:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123b8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00123b90:;
    {
        cpu->r[14] = 0x00123b94u; fn_00096cb4(cpu);
    }
L_00123b94:;
    {
        cpu->r[1] = rd32(0x00123b9cu + + 0x6cu);
    }
L_00123b98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123b9c:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_00123ba0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00123ba4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00123ba8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x438u);
    }
L_00123bac:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_00123bb0:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00123bb4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00123bb8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_00123bbc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x34u);
    }
L_00123bc0:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[1]);
    }
L_00123bc4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_00123bc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00123bcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00123bd0:;
    {
        cpu->r[14] = 0x00123bd4u; fn_0009fad4(cpu);
    }
L_00123bd4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00123bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123bdc:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_00123be0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00123be4u)) return;
    }
L_00123be4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123be8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00123bec:;
    {
        cpu->r[14] = 0x00123bf0u; fn_00096b5c(cpu);
    }
L_00123bf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123bf4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00123bf8:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_00123bfc:;
    {
        goto L_00123bc8;
    }
}

/* _ZN21GS_SelectLocationMenu17ApplyMenuSettingsEv @ 00123c0c (arm) */
void fn_00123c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123c0c:;
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
L_00123c10:;
    {
        cpu->r[5] = rd32(0x00123c18u + + 0x218u);
    }
L_00123c14:;
    {
        cpu->r[2] = rd32(0x00123c1cu + + 0x218u);
    }
L_00123c18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123c1c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00123c24u, cpu->r[5], 0, 0);
    }
L_00123c20:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00123c24:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00123c28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00123c2c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00123c30:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00123c34:;
    {
        cpu->r[14] = 0x00123c3cu;
    }
L_00123c38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00123c3cu)) return;
    }
L_00123c3c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x950u);
    }
L_00123c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00123c44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123d54;
        }
    }
L_00123c48:;
    {
        cpu->r[3] = rd32(0x00123c50u + + 0x1e8u);
    }
L_00123c4c:;
    {
        cpu->r[2] = rd32(0x00123c54u + + 0x1e8u);
    }
L_00123c50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123c54:;
    {
        cpu->r[2] = add_flags(cpu, 0x00123c5cu, cpu->r[2], 0, 0);
    }
L_00123c58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00123c5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_00123c60:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00123c64:;
    {
        wr32(cpu->r[2] + + 0x9cu, cpu->r[1]);
    }
L_00123c68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123d7c;
        }
    }
L_00123c6c:;
    {
        cpu->r[3] = rd32(0x00123c74u + + 0x1ccu);
    }
L_00123c70:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00123c74:;
    {
        cpu->r[6] = rd32(0x00123c7cu + + 0x1c8u);
    }
L_00123c78:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00123c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123c84u, cpu->r[3], 0, 0);
    }
L_00123c80:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_00123c84:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00123c88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000a8u, 0, 0);
    }
L_00123c8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123c90:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00123c94:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_00123c98:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_00123c9c:;
    {
        wr8(cpu->r[4] + + 0x94fu, cpu->r[3]);
    }
L_00123ca0:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_00123ca4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123ca8:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_00123cac:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[2]);
    }
L_00123cb0:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00123cb4:;
    {
        cpu->r[14] = 0x00123cb8u; imp_memset(cpu); /* memset */
    }
L_00123cb8:;
    {
        cpu->r[3] = rd32(0x00123cc0u + + 0x188u);
    }
L_00123cbc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123cc0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00123cc4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00123cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123db4;
        }
    }
L_00123ccc:;
    {
        cpu->r[7] = rd32(0x00123cd4u + + 0x178u);
    }
L_00123cd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123cd4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00123cd8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123cdc:;
    {
        cpu->r[14] = 0x00123ce0u; fn_0018aa44(cpu);
    }
L_00123ce0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123ce4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123df8;
        }
    }
L_00123ce8:;
    {
        cpu->r[0] = rd32(0x00123cf0u + + 0x160u);
    }
L_00123cec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123cf0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123cf4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00123cf8:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x24u);
    }
L_00123cfc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00123d00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00123d04:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00123d08:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x438u);
    }
L_00123d0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00123d10:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[1]);
    }
L_00123d14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00123d18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000009cu, 0, 0);
    }
L_00123d1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00123d20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000030u, 1, 1);
    }
L_00123d24:;
    {
        cpu->r[0] = rd8(cpu->r[7] + cpu->r[0]);
    }
L_00123d28:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00123d2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00123d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123d0c;
        }
    }
L_00123d34:;
    {
        cpu->r[3] = rd32(0x00123d3cu + + 0x118u);
    }
L_00123d38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00123d3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00123d40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123d48u, cpu->r[3], 0, 0);
    }
L_00123d44:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[1]);
    }
L_00123d48:;
    {
        wr32(cpu->r[3] + + 0x94u, cpu->r[2]);
    }
L_00123d4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00123d50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00123d54u)) return;
    }
L_00123d54:;
    {
        cpu->r[3] = rd32(0x00123d5cu + + 0xdcu);
    }
L_00123d58:;
    {
        cpu->r[2] = rd32(0x00123d60u + + 0xf8u);
    }
L_00123d5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123d60:;
    {
        cpu->r[2] = add_flags(cpu, 0x00123d68u, cpu->r[2], 0, 0);
    }
L_00123d64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00123d68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_00123d6c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00123d70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003cu, 0, 0);
    }
L_00123d74:;
    {
        wr32(cpu->r[2] + + 0x9cu, cpu->r[1]);
    }
L_00123d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00123c6c;
        }
    }
L_00123d7c:;
    {
        cpu->r[2] = rd32(0x00123d84u + + 0xd8u);
    }
L_00123d80:;
    {
        cpu->r[1] = 0x00000276u;
    }
L_00123d84:;
    {
        cpu->r[3] = rd32(0x00123d8cu + + 0xd4u);
    }
L_00123d88:;
    {
        cpu->r[2] = add_flags(cpu, 0x00123d90u, cpu->r[2], 0, 0);
    }
L_00123d8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123d94u, cpu->r[3], 0, 0);
    }
L_00123d90:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_00123d94:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00123d98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000023u, 1, 0);
    }
L_00123d9c:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[1]);
    }
L_00123da0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000012u, 1, 0);
    }
L_00123da4:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[0]);
    }
L_00123da8:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[2]);
    }
L_00123dac:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[1]);
    }
L_00123db0:;
    {
        goto L_00123c6c;
    }
L_00123db4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00123db8:;
    {
        cpu->r[14] = 0x00123dbcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00123dbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00123dc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123ccc;
        }
    }
L_00123dc4:;
    {
        cpu->r[7] = rd32(0x00123dccu + + 0x80u);
    }
L_00123dc8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123dcc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00123dd0:;
    {
        cpu->r[14] = 0x00123dd4u; fn_0018aa20(cpu);
    }
L_00123dd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00123dd8:;
    {
        cpu->r[14] = 0x00123ddcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00123ddc:;
    {
        cpu->r[3] = rd32(0x00123de4u + + 0x80u);
    }
L_00123de0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00123de4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123de8:;
    {
        cpu->r[3] = rd32(0x00123df0u + + 0x78u);
    }
L_00123dec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123df0:;
    {
        cpu->r[14] = 0x00123df4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00123df4:;
    {
        goto L_00123cd0;
    }
L_00123df8:;
    {
        cpu->r[1] = rd32(0x00123e00u + + 0x6cu);
    }
L_00123dfc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00123e00:;
    {
        cpu->r[12] = rd32(0x00123e08u + + 0x68u);
    }
L_00123e04:;
    {
        cpu->r[14] = 0x000000afu;
    }
L_00123e08:;
    {
        cpu->r[2] = rd32(0x00123e10u + + 0x64u);
    }
L_00123e0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00123e14u, cpu->r[1], 0, 0);
    }
L_00123e10:;
    {
        cpu->r[3] = rd32(0x00123e18u + + 0x60u);
    }
L_00123e14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00123e1cu, cpu->r[12], 0, 0);
    }
L_00123e18:;
    {
        cpu->r[2] = add_flags(cpu, 0x00123e20u, cpu->r[2], 0, 0);
    }
L_00123e1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00123e20:;
    {
        cpu->r[3] = add_flags(cpu, 0x00123e28u, cpu->r[3], 0, 0);
    }
L_00123e24:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00123e28:;
    {
        cpu->r[14] = 0x00123e2cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00123e2c:;
    {
        goto L_00123ce8;
    }
}
