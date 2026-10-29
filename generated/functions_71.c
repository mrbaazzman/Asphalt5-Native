#include "functions.h"

/* _ZN27GS_MultiplayerEndRaceScreen11InitSpritesEv @ 001acc10 (arm) */
void fn_001acc10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acc10:;
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
L_001acc14:;
    {
        cpu->r[4] = rd32(0x001acc1cu + + 0x2b0u);
    }
L_001acc18:;
    {
        cpu->r[7] = rd32(0x001acc20u + + 0x2b0u);
    }
L_001acc1c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001acc20:;
    {
        cpu->r[4] = add_flags(cpu, 0x001acc28u, cpu->r[4], 0, 0);
    }
L_001acc24:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001acc28:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001acc2c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acc30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acd48;
        }
    }
L_001acc34:;
    {
        cpu->r[6] = rd32(0x001acc3cu + + 0x298u);
    }
L_001acc38:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001acc3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001acc40:;
    {
        cpu->r[14] = 0x001acc44u; fn_00096a08(cpu);
    }
L_001acc44:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acc48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acc4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001acc50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acc54:;
    {
        cpu->r[14] = 0x001acc58u; fn_0018aa44(cpu);
    }
L_001acc58:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001acc5c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001acc60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acc64:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_001acc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ace90;
        }
    }
L_001acc6c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001acc70:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001acc74:;
    {
        cpu->r[14] = 0x001acc78u; fn_00096a08(cpu);
    }
L_001acc78:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acc7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acc80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001acc84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acc88:;
    {
        cpu->r[14] = 0x001acc8cu; fn_0018aa44(cpu);
    }
L_001acc8c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001acc90:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001acc94:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acc98:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_001acc9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ace54;
        }
    }
L_001acca0:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001acca4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001acca8:;
    {
        cpu->r[14] = 0x001accacu; fn_00096a08(cpu);
    }
L_001accac:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001accb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001accb4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001accb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001accbc:;
    {
        cpu->r[14] = 0x001accc0u; fn_0018aa44(cpu);
    }
L_001accc0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001accc4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001accc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acccc:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_001accd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ace18;
        }
    }
L_001accd4:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001accd8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001accdc:;
    {
        cpu->r[14] = 0x001acce0u; fn_00096a08(cpu);
    }
L_001acce0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acce4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acce8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001accec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001accf0:;
    {
        cpu->r[14] = 0x001accf4u; fn_0018aa44(cpu);
    }
L_001accf4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001accf8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001accfc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acd00:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_001acd04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acddc;
        }
    }
L_001acd08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acd0c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001acd10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acd14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acd18:;
    {
        cpu->r[14] = 0x001acd1cu; fn_0018aa44(cpu);
    }
L_001acd1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001acd20:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001acd24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acd28:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_001acd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acd8c;
        }
    }
L_001acd30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001acd34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acd38:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001acd3c:;
    {
        cpu->r[14] = 0x001acd40u; fn_0018aa44(cpu);
    }
L_001acd40:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001acd44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001acd48u)) return;
    }
L_001acd48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acd4c:;
    {
        cpu->r[14] = 0x001acd50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001acd50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001acd54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acc34;
        }
    }
L_001acd58:;
    {
        cpu->r[6] = rd32(0x001acd60u + + 0x174u);
    }
L_001acd5c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acd60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001acd64:;
    {
        cpu->r[14] = 0x001acd68u; fn_0018aa20(cpu);
    }
L_001acd68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acd6c:;
    {
        cpu->r[14] = 0x001acd70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001acd70:;
    {
        cpu->r[3] = rd32(0x001acd78u + + 0x160u);
    }
L_001acd74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001acd78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acd7c:;
    {
        cpu->r[3] = rd32(0x001acd84u + + 0x158u);
    }
L_001acd80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acd84:;
    {
        cpu->r[14] = 0x001acd88u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001acd88:;
    {
        goto L_001acc38;
    }
L_001acd8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001acd90:;
    {
        cpu->r[14] = 0x001acd94u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001acd94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001acd98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acd30;
        }
    }
L_001acd9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acda0:;
    {
        cpu->r[14] = 0x001acda4u; fn_0018aa20(cpu);
    }
L_001acda4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001acda8:;
    {
        cpu->r[14] = 0x001acdacu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001acdac:;
    {
        cpu->r[3] = rd32(0x001acdb4u + + 0x124u);
    }
L_001acdb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acdb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acdb8:;
    {
        cpu->r[3] = rd32(0x001acdc0u + + 0x11cu);
    }
L_001acdbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acdc0:;
    {
        cpu->r[14] = 0x001acdc4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001acdc4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001acdc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001acdcc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001acdd0:;
    {
        cpu->r[14] = 0x001acdd4u; fn_0018aa44(cpu);
    }
L_001acdd4:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001acdd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001acddcu)) return;
    }
L_001acddc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001acde0:;
    {
        cpu->r[14] = 0x001acde4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001acde4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001acde8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acd08;
        }
    }
L_001acdec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acdf0:;
    {
        cpu->r[14] = 0x001acdf4u; fn_0018aa20(cpu);
    }
L_001acdf4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001acdf8:;
    {
        cpu->r[14] = 0x001acdfcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001acdfc:;
    {
        cpu->r[3] = rd32(0x001ace04u + + 0xd4u);
    }
L_001ace00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ace04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace08:;
    {
        cpu->r[3] = rd32(0x001ace10u + + 0xccu);
    }
L_001ace0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace10:;
    {
        cpu->r[14] = 0x001ace14u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ace14:;
    {
        goto L_001acd08;
    }
L_001ace18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ace1c:;
    {
        cpu->r[14] = 0x001ace20u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ace20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ace24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001accd4;
        }
    }
L_001ace28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ace2c:;
    {
        cpu->r[14] = 0x001ace30u; fn_0018aa20(cpu);
    }
L_001ace30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ace34:;
    {
        cpu->r[14] = 0x001ace38u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ace38:;
    {
        cpu->r[3] = rd32(0x001ace40u + + 0x98u);
    }
L_001ace3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ace40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace44:;
    {
        cpu->r[3] = rd32(0x001ace4cu + + 0x90u);
    }
L_001ace48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace4c:;
    {
        cpu->r[14] = 0x001ace50u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ace50:;
    {
        goto L_001accd4;
    }
L_001ace54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ace58:;
    {
        cpu->r[14] = 0x001ace5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ace5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ace60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acca0;
        }
    }
L_001ace64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ace68:;
    {
        cpu->r[14] = 0x001ace6cu; fn_0018aa20(cpu);
    }
L_001ace6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ace70:;
    {
        cpu->r[14] = 0x001ace74u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ace74:;
    {
        cpu->r[3] = rd32(0x001ace7cu + + 0x5cu);
    }
L_001ace78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ace7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace80:;
    {
        cpu->r[3] = rd32(0x001ace88u + + 0x54u);
    }
L_001ace84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ace88:;
    {
        cpu->r[14] = 0x001ace8cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ace8c:;
    {
        goto L_001acca0;
    }
L_001ace90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ace94:;
    {
        cpu->r[14] = 0x001ace98u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ace98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ace9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acc6c;
        }
    }
L_001acea0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001acea4:;
    {
        cpu->r[14] = 0x001acea8u; fn_0018aa20(cpu);
    }
L_001acea8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001aceac:;
    {
        cpu->r[14] = 0x001aceb0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001aceb0:;
    {
        cpu->r[3] = rd32(0x001aceb8u + + 0x20u);
    }
L_001aceb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aceb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acebc:;
    {
        cpu->r[3] = rd32(0x001acec4u + + 0x18u);
    }
L_001acec0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001acec4:;
    {
        cpu->r[14] = 0x001acec8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001acec8:;
    {
        goto L_001acc6c;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen6RenderEv @ 001acee0 (arm) */
void fn_001acee0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acee0:;
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
L_001acee4:;
    {
        cpu->r[8] = rd32(0x001aceecu + + 0x800u);
    }
L_001acee8:;
    {
        cpu->r[10] = rd32(0x001acef0u + + 0x800u);
    }
L_001aceec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002acu, 1, 0);
    }
L_001acef0:;
    {
        cpu->r[8] = add_flags(cpu, 0x001acef8u, cpu->r[8], 0, 0);
    }
L_001acef4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001acef8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001acefc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001acf00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acf04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad510;
        }
    }
L_001acf08:;
    {
        cpu->r[4] = rd32(0x001acf10u + + 0x7e4u);
    }
L_001acf0c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001acf10:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001acf14:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001acf18:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001acf1c:;
    {
        cpu->r[14] = 0x001acf20u; fn_0018aa44(cpu);
    }
L_001acf20:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001acf24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001acf28:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001acf2c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001acf30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001acf34:;
    {
        cpu->r[14] = 0x001acf38u; fn_000ad8a0(cpu);
    }
L_001acf38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001acf3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001acf40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001acf6c;
        }
    }
L_001acf44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001acf48:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001acf4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001acf50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acf54:;
    {
        cpu->r[14] = 0x001acf5cu;
    }
L_001acf58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001acf5cu)) return;
    }
L_001acf5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001acf60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001acf64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001acf68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001acf44;
        }
    }
L_001acf6c:;
    {
        cpu->r[11] = rd32(0x001acf74u + + 0x784u);
    }
L_001acf70:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001acf74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001acf78:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001acf7c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001acf80:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001acf84:;
    {
        cpu->r[14] = 0x001acf8cu;
    }
L_001acf88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001acf8cu)) return;
    }
L_001acf8c:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001acf90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb0u);
    }
L_001acf94:;
    {
        cpu->r[1] = 0x000000beu;
    }
L_001acf98:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001acf9c:;
    {
        cpu->r[3] = 0x0000002au;
    }
L_001acfa0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001acfa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001acfa8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001acfac:;
    {
        cpu->r[14] = 0x001acfb0u; fn_000ad8a0(cpu);
    }
L_001acfb0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001acfb4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb0u);
    }
L_001acfb8:;
    {
        cpu->r[3] = 0x0000008bu;
    }
L_001acfbc:;
    {
        cpu->r[1] = 0x000000bfu;
    }
L_001acfc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001acfc4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001acfc8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001acfcc:;
    {
        cpu->r[14] = 0x001acfd0u; fn_000ad8a0(cpu);
    }
L_001acfd0:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001acfd4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001acfd8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001acfdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad594;
        }
    }
L_001acfe0:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001acfe4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001acfe8:;
    {
        cpu->r[14] = 0x001acfecu; fn_00096a08(cpu);
    }
L_001acfec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001acff0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001acff4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001acff8:;
    {
        cpu->r[14] = 0x001acffcu; fn_0018aa44(cpu);
    }
L_001acffc:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad6b4;
        }
    }
L_001ad004:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001ad008:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ad00c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ad010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad554;
        }
    }
L_001ad014:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ad018:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ad01c:;
    {
        cpu->r[14] = 0x001ad020u; fn_00096a08(cpu);
    }
L_001ad020:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad024:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ad028:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ad02c:;
    {
        cpu->r[0] = rd32(0x001ad034u + + 0x6c8u);
    }
L_001ad030:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001ad034:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad038:;
    {
        cpu->r[14] = 0x001ad03cu; fn_0018aa44(cpu);
    }
L_001ad03c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ad040:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001ad044:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001ad048:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001ad04c:;
    {
        cpu->r[14] = 0x001ad050u; fn_00097d9c(cpu);
    }
L_001ad050:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad204;
        }
    }
L_001ad058:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001ad05c:;
    {
        cpu->r[14] = 0x001ad060u; fn_00097ce0(cpu);
    }
L_001ad060:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001ad064:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ad068:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ad06c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001ad070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad630;
        }
    }
L_001ad074:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad078:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ad07c:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_001ad080:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad084:;
    {
        cpu->r[14] = 0x001ad088u; fn_0018aa44(cpu);
    }
L_001ad088:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002a0u, 0, 0);
    }
L_001ad08c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ad090:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002a4u, 0, 0);
    }
L_001ad094:;
    {
        cpu->r[14] = 0x001ad098u; fn_000a8d10(cpu);
    }
L_001ad098:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001ad09c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001ad0a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ad0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad5f4;
        }
    }
L_001ad0a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ad0ac:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad0b0:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_001ad0b4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001ad0b8:;
    {
        cpu->r[14] = 0x001ad0bcu; fn_0018aa44(cpu);
    }
L_001ad0bc:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001ad0c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2a4u);
    }
L_001ad0c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ad0c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2a0u);
    }
L_001ad0cc:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001ad0d0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001ad0d4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001ad0d8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001ad0dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001ad0e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001ad0e4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000051u, cpu->r[3], 1, 0);
    }
L_001ad0e8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 1u, &shc), cpu->r[12], 1, 0);
    }
L_001ad0ec:;
    {
        cpu->r[14] = 0x001ad0f0u; fn_000ad8a0(cpu);
    }
L_001ad0f0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001ad0f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ad0f8:;
    {
        cpu->r[1] = 0x0000058au;
    }
L_001ad0fc:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_001ad100:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001ad104:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001ad108:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad10c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001ad110:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000294u, 0, 0);
    }
L_001ad114:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001ad118:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000009du, 1, 0);
    }
L_001ad11c:;
    {
        cpu->r[14] = 0x001ad120u; fn_000ad200(cpu);
    }
L_001ad120:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ad124:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_001ad128:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_001ad12c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001ad130:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001ad134:;
    {
        cpu->r[2] = rd32(0x001ad13cu + + 0x5c4u);
    }
L_001ad138:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ad13c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ad144u, cpu->r[2], 0, 0);
    }
L_001ad140:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ad144:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ad148:;
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
L_001ad14c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001ad150:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_001ad154:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_001ad158:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_001ad15c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001ad160:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x4u);
    }
L_001ad164:;
    {
        cpu->r[12] = 0x0000173cu;
    }
L_001ad168:;
    {
        cpu->r[7] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001ad16c:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001ad170:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ad174:;
    {
        cpu->r[14] = 0x001ad178u; fn_000962d0(cpu);
    }
L_001ad178:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_001ad17c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad674;
        }
    }
L_001ad180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000200u, 0, 0);
    }
L_001ad184:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000200u, 0, 0);
    }
L_001ad188:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_001ad18c:;
    {
        wr16(cpu->r[3] + + 0x32u, cpu->r[4]);
    }
L_001ad190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_001ad194:;
    {
        wr16(cpu->r[12] + + 0x30u, cpu->r[3]);
    }
L_001ad198:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ad5d4;
        }
    }
L_001ad19c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000002a8u, 0, 0);
    }
L_001ad1a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ad1a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001ad1a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_001ad1ac:;
    {
        cpu->r[0] = rd32(cpu->r[7] + - 0x18u);
    }
L_001ad1b0:;
    {
        cpu->r[14] = 0x001ad1b4u; fn_000aeb58(cpu);
    }
L_001ad1b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ad1b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad1bc:;
    {
        cpu->r[14] = 0x001ad1c0u; fn_000ae228(cpu);
    }
L_001ad1c0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001ad1c4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001ad1c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad1cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ad1d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ad1d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ad1d8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ad1dc:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_001ad1e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ad1e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ad1e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001ad1ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ad1f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001ad1f4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001ad1f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000043u, 1, 0);
    }
L_001ad1fc:;
    {
        cpu->r[14] = 0x001ad200u; fn_000ad19c(cpu);
    }
L_001ad200:;
    {
        goto L_001ad230;
    }
L_001ad204:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001ad208:;
    {
        cpu->r[1] = 0x0000058bu;
    }
L_001ad20c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001ad210:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_001ad214:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ad218:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_001ad21c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001ad220:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad224:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001ad228:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001ad22c:;
    {
        cpu->r[14] = 0x001ad230u; fn_000ad200(cpu);
    }
L_001ad230:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001ad234:;
    {
        cpu->r[2] = 0x00000227u;
    }
L_001ad238:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_001ad23c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ad240:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_001ad244:;
    {
        cpu->r[3] = 0x00000242u;
    }
L_001ad248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001ad24c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000e2u;
        }
    }
L_001ad250:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000fdu;
        }
    }
L_001ad254:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001ad258:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001ad25c:;
    {
        cpu->r[14] = 0x001ad260u; imp__Znaj(cpu); /* _Znaj */
    }
L_001ad260:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ad264:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_001ad268:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001ad26c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001ad270:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ad274:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001ad278:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001ad27c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ad280:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001ad284:;
    {
        cpu->r[0] = 0x00008cbcu;
    }
L_001ad288:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001ad28c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001ad290:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001ad294:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001ad298:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ad4f8;
        }
    }
L_001ad29c:;
    {
        cpu->r[12] = 0x00008cb8u;
    }
L_001ad2a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001ad2a4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001ad2a8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001ad2ac:;
    {
        cpu->r[12] = 0x00008cc0u;
    }
L_001ad2b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ad2b4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001ad2b8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_001ad2bc:;
    {
        cpu->r[12] = rd32(0x001ad2c4u + + 0x440u);
    }
L_001ad2c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_001ad2c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001ad2c8:;
    {
        cpu->r[11] = 0x0000173cu;
    }
L_001ad2cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ad2d4u, cpu->r[12], 0, 0);
    }
L_001ad2d0:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001ad2d4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001ad2d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_001ad2dc:;
    {
        goto L_001ad394;
    }
L_001ad2e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ad2e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x000018c0u, 0, 0);
    }
L_001ad2e8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000032u, 0, 0);
    }
L_001ad2ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001ad2f0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001ad2f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad474;
        }
    }
L_001ad2f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ad2fc:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_001ad300:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ad304:;
    {
        cpu->r[14] = 0x001ad308u; imp_memset(cpu); /* memset */
    }
L_001ad308:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ad30c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ad310:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ad314:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ad318:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ad31c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ad320:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001ad324:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001ad328:;
    {
        cpu->r[14] = 0x001ad32cu; fn_000f38e8(cpu);
    }
L_001ad32c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001ad330:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ad334:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ad338:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ad33c:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001ad340:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001ad344:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001ad348:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000adu, 0, 0);
    }
L_001ad34c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad350:;
    {
        cpu->r[14] = 0x001ad354u; fn_000ad19c(cpu);
    }
L_001ad354:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ad358:;
    {
        cpu->r[1] = 0x00008cbcu;
    }
L_001ad35c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ad360:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001ad364:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ad368:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001ad36c:;
    {
        cpu->r[12] = 0x00008cc4u;
    }
L_001ad370:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001ad374:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ad378:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001ad37c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001ad380:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ad384:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_001ad388:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001ad38c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001ad390:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ad4f8;
        }
    }
L_001ad394:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ad398:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad39c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_001ad3a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_001ad3a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001ad3a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
        }
    }
L_001ad3ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ad3b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
        }
    }
L_001ad3b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_001ad3b8:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001ad3bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_001ad3c0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001ad3c4:;
    {
        cpu->r[14] = 0x001ad3c8u; imp_memset(cpu); /* memset */
    }
L_001ad3c8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ad3cc:;
    {
        cpu->r[0] = 0x00000066u;
    }
L_001ad3d0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4] + cpu->r[8]; cpu->r[8] = v;
    }
L_001ad3d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00006300u, 0, 0);
    }
L_001ad3d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000f4u, 0, 0);
    }
L_001ad3dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ad3e0:;
    {
        cpu->r[14] = 0x001ad3e4u; fn_000ae12c(cpu);
    }
L_001ad3e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ad3e8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ad3ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001ad3f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad3f4:;
    {
        cpu->r[14] = 0x001ad3f8u; imp_memcpy(cpu); /* memcpy */
    }
L_001ad3f8:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_001ad3fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad400:;
    {
        cpu->r[14] = 0x001ad404u; fn_000ae3a0(cpu);
    }
L_001ad404:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ad408:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001ad40c:;
    {
        cpu->r[12] = 0x000000a0u;
    }
L_001ad410:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad414:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001ad418:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[0], cpu->r[1]);
        }
    }
L_001ad41c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ad420:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ad424:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad428:;
    {
        cpu->r[14] = 0x001ad42cu; fn_00099114(cpu);
    }
L_001ad42c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ad430:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001ad434:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ad438:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001ad43c:;
    {
        cpu->r[14] = 0x001ad440u; fn_000ae830(cpu);
    }
L_001ad440:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001ad444:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ad448:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ad44c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ad450:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001ad454:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001ad458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000adu, 0, 0);
    }
L_001ad45c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001ad460:;
    {
        cpu->r[14] = 0x001ad464u; fn_000ad19c(cpu);
    }
L_001ad464:;
    {
        cpu->r[0] = 0x00001740u;
    }
L_001ad468:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_001ad46c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ad470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ad2e0;
        }
    }
L_001ad474:;
    {
        cpu->r[3] = 0x00001cedu;
    }
L_001ad478:;
    {
        cpu->r[8] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001ad47c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ad480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ad4bc;
        }
    }
L_001ad484:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ad488:;
    {
        cpu->r[0] = 0x000004a1u;
    }
L_001ad48c:;
    {
        cpu->r[14] = 0x001ad490u; fn_000aeb58(cpu);
    }
L_001ad490:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001ad494:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ad498:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001ad49c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001ad4a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001ad4a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad4a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000adu, 0, 0);
    }
L_001ad4ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ad4b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ad4b4:;
    {
        cpu->r[14] = 0x001ad4b8u; fn_000ad19c(cpu);
    }
L_001ad4b8:;
    {
        goto L_001ad354;
    }
L_001ad4bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ad4c0:;
    {
        cpu->r[0] = 0x000004a2u;
    }
L_001ad4c4:;
    {
        cpu->r[14] = 0x001ad4c8u; fn_000aeb58(cpu);
    }
L_001ad4c8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001ad4cc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001ad4d0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001ad4d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ad4d8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001ad4dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ad4e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000adu, 0, 0);
    }
L_001ad4e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ad4e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ad4ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ad4f0:;
    {
        cpu->r[14] = 0x001ad4f4u; fn_000ad19c(cpu);
    }
L_001ad4f4:;
    {
        goto L_001ad354;
    }
L_001ad4f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ad4fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad508;
        }
    }
L_001ad504:;
    {
        cpu->r[14] = 0x001ad508u; fn_0018ba20(cpu);
    }
L_001ad508:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002acu, 0, 0);
    }
L_001ad50c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ad510u)) return;
    }
L_001ad510:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad514:;
    {
        cpu->r[14] = 0x001ad518u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ad518:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad51c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acf08;
        }
    }
L_001ad520:;
    {
        cpu->r[4] = rd32(0x001ad528u + + 0x1ccu);
    }
L_001ad524:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad528:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad52c:;
    {
        cpu->r[14] = 0x001ad530u; fn_0018aa20(cpu);
    }
L_001ad530:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad534:;
    {
        cpu->r[14] = 0x001ad538u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ad538:;
    {
        cpu->r[3] = rd32(0x001ad540u + + 0x1c8u);
    }
L_001ad53c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad540:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad544:;
    {
        cpu->r[3] = rd32(0x001ad54cu + + 0x1c0u);
    }
L_001ad548:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad54c:;
    {
        cpu->r[14] = 0x001ad550u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ad550:;
    {
        goto L_001acf0c;
    }
L_001ad554:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad558:;
    {
        cpu->r[14] = 0x001ad55cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ad55c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad014;
        }
    }
L_001ad564:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad568:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad56c:;
    {
        cpu->r[14] = 0x001ad570u; fn_0018aa20(cpu);
    }
L_001ad570:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad574:;
    {
        cpu->r[14] = 0x001ad578u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ad578:;
    {
        cpu->r[3] = rd32(0x001ad580u + + 0x188u);
    }
L_001ad57c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad580:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad584:;
    {
        cpu->r[3] = rd32(0x001ad58cu + + 0x180u);
    }
L_001ad588:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad58c:;
    {
        cpu->r[14] = 0x001ad590u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ad590:;
    {
        goto L_001ad014;
    }
L_001ad594:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad598:;
    {
        cpu->r[14] = 0x001ad59cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ad59c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001acfe0;
        }
    }
L_001ad5a4:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001ad5a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad5ac:;
    {
        cpu->r[14] = 0x001ad5b0u; fn_0018aa20(cpu);
    }
L_001ad5b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad5b4:;
    {
        cpu->r[14] = 0x001ad5b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ad5b8:;
    {
        cpu->r[3] = rd32(0x001ad5c0u + + 0x148u);
    }
L_001ad5bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ad5c0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad5c4:;
    {
        cpu->r[3] = rd32(0x001ad5ccu + + 0x140u);
    }
L_001ad5c8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad5cc:;
    {
        cpu->r[14] = 0x001ad5d0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ad5d0:;
    {
        goto L_001acfe0;
    }
L_001ad5d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ad5d8:;
    {
        cpu->r[0] = 0x00000672u;
    }
L_001ad5dc:;
    {
        cpu->r[14] = 0x001ad5e0u; fn_000aeb58(cpu);
    }
L_001ad5e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_001ad5e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ad5e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad5ec:;
    {
        cpu->r[14] = 0x001ad5f0u; fn_000ae228(cpu);
    }
L_001ad5f0:;
    {
        goto L_001ad1c0;
    }
L_001ad5f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ad5f8:;
    {
        cpu->r[14] = 0x001ad5fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ad5fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad0a8;
        }
    }
L_001ad604:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad608:;
    {
        cpu->r[14] = 0x001ad60cu; fn_0018aa20(cpu);
    }
L_001ad60c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ad610:;
    {
        cpu->r[14] = 0x001ad614u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ad614:;
    {
        cpu->r[3] = rd32(0x001ad61cu + + 0xecu);
    }
L_001ad618:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad61c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad620:;
    {
        cpu->r[3] = rd32(0x001ad628u + + 0xe4u);
    }
L_001ad624:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad628:;
    {
        cpu->r[14] = 0x001ad62cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ad62c:;
    {
        goto L_001ad0a8;
    }
L_001ad630:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ad634:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001ad638:;
    {
        cpu->r[14] = 0x001ad63cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ad63c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad074;
        }
    }
L_001ad644:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad648:;
    {
        cpu->r[14] = 0x001ad64cu; fn_0018aa20(cpu);
    }
L_001ad64c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ad650:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ad654:;
    {
        cpu->r[14] = 0x001ad658u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ad658:;
    {
        cpu->r[3] = rd32(0x001ad660u + + 0xa8u);
    }
L_001ad65c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad660:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad664:;
    {
        cpu->r[3] = rd32(0x001ad66cu + + 0xa0u);
    }
L_001ad668:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ad66c:;
    {
        cpu->r[14] = 0x001ad670u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ad670:;
    {
        goto L_001ad074;
    }
L_001ad674:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ad678:;
    {
        cpu->r[0] = 0x00000672u;
    }
L_001ad67c:;
    {
        cpu->r[14] = 0x001ad680u; fn_000aeb58(cpu);
    }
L_001ad680:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ad684:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_001ad688:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001ad68c:;
    {
        cpu->r[0] = 0x000006a6u;
    }
L_001ad690:;
    {
        cpu->r[14] = 0x001ad694u; fn_000aeb58(cpu);
    }
L_001ad694:;
    {
        cpu->r[1] = rd32(0x001ad69cu + + 0x74u);
    }
L_001ad698:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ad69c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001ad6a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ad6a8u, cpu->r[1], 0, 0);
    }
L_001ad6a4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001ad6a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ad6ac:;
    {
        cpu->r[14] = 0x001ad6b0u; fn_000ae830(cpu);
    }
L_001ad6b0:;
    {
        goto L_001ad1c0;
    }
L_001ad6b4:;
    {
        cpu->r[1] = rd32(0x001ad6bcu + + 0x58u);
    }
L_001ad6b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001ad6bc:;
    {
        cpu->r[2] = rd32(0x001ad6c4u + + 0x54u);
    }
L_001ad6c0:;
    {
        cpu->r[14] = 0x00000070u;
    }
L_001ad6c4:;
    {
        cpu->r[3] = rd32(0x001ad6ccu + + 0x50u);
    }
L_001ad6c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ad6d0u, cpu->r[1], 0, 0);
    }
L_001ad6cc:;
    {
        cpu->r[12] = rd32(0x001ad6d4u + + 0x4cu);
    }
L_001ad6d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ad6d8u, cpu->r[2], 0, 0);
    }
L_001ad6d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad6dcu, cpu->r[3], 0, 0);
    }
L_001ad6d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001ad6dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ad6e4u, cpu->r[12], 0, 0);
    }
L_001ad6e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad6e4:;
    {
        cpu->r[14] = 0x001ad6e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001ad6e8:;
    {
        goto L_001ad004;
    }
}

/* check_wifi @ 001ad724 (arm) */
void fn_001ad724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad724:;
    {
        cpu->r[3] = rd32(0x001ad72cu + + 0x18u);
    }
L_001ad728:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ad72c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ad730:;
    {
        cpu->r[2] = rd32(0x001ad738u + + 0x10u);
    }
L_001ad734:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad73cu, cpu->r[3], 0, 0);
    }
L_001ad738:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ad73c:;
    {
        wr8(cpu->r[3], cpu->r[0]);
    }
L_001ad740:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_MultiplayerMenu17ApplyMenuSettingsEv @ 001ad74c (arm) */
void fn_001ad74c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad74c:;
    {
        cpu->r[2] = rd32(0x001ad754u + + 0xa8u);
    }
L_001ad750:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001ad754:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_001ad758:;
    {
        cpu->r[3] = rd32(0x001ad760u + + 0xa0u);
    }
L_001ad75c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ad764u, cpu->r[2], 0, 0);
    }
L_001ad760:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ad764:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ad768:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001ad76c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ad770:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_001ad774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad7ec;
        }
    }
L_001ad778:;
    {
        cpu->r[3] = rd32(0x001ad780u + + 0x84u);
    }
L_001ad77c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad784u, cpu->r[3], 0, 0);
    }
L_001ad780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001ad784:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001ad788:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ad78c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ad790:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[1]);
    }
L_001ad794:;
    {
        cpu->r[1] = 0x0000045du;
    }
L_001ad798:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_001ad79c:;
    {
        cpu->r[0] = 0x00001c4cu;
    }
L_001ad7a0:;
    {
        cpu->r[1] = rd32(0x001ad7a8u + + 0x60u);
    }
L_001ad7a4:;
    {
        cpu->r[12] = 0x0000150du;
    }
L_001ad7a8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001ad7ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_001ad7b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001ad7b4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ad7b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x000019c0u, 0, 0);
    }
L_001ad7bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_001ad7c0:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_001ad7c4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001ad7c8:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_001ad7cc:;
    {
        cpu->r[14] = 0x001ad7d0u; imp_memcpy(cpu); /* memcpy */
    }
L_001ad7d0:;
    {
        cpu->r[3] = 0x0000040cu;
    }
L_001ad7d4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001ad7d8:;
    {
        cpu->r[3] = 0x0000040du;
    }
L_001ad7dc:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001ad7e0:;
    {
        cpu->r[3] = 0x0000040eu;
    }
L_001ad7e4:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001ad7e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ad7ecu)) return;
    }
L_001ad7ec:;
    {
        cpu->r[3] = rd32(0x001ad7f4u + + 0x18u);
    }
L_001ad7f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad7f8u, cpu->r[3], 0, 0);
    }
L_001ad7f4:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001ad7f8:;
    {
        goto L_001ad788;
    }
}

/* _ZN18GS_MultiplayerMenu8isKindOfEi @ 001ad810 (arm) */
void fn_001ad810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad810:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_001ad814:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ad818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ad81c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_78 @ 001ad820 (arm) */
void fn_001ad820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad820:;
    {
        cpu->r[3] = rd32(0x001ad828u + + 0x20u);
    }
L_001ad824:;
    {
        cpu->r[1] = rd32(0x001ad82cu + + 0x20u);
    }
L_001ad828:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad830u, cpu->r[3], 0, 0);
    }
L_001ad82c:;
    {
        cpu->r[2] = rd32(0x001ad834u + + 0x1cu);
    }
L_001ad830:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ad834:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ad83cu, cpu->r[2], 0, 0);
    }
L_001ad838:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ad83c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001ad840:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001ad844:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_MultiplayerMenuD1Ev @ 001ad854 (arm) */
void fn_001ad854(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad854:;
    {
        cpu->r[3] = rd32(0x001ad85cu + + 0x24u);
    }
L_001ad858:;
    {
        cpu->r[2] = rd32(0x001ad860u + + 0x24u);
    }
L_001ad85c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ad864u, cpu->r[3], 0, 0);
    }
L_001ad860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ad864:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ad868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ad86c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ad870:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ad874:;
    {
        cpu->r[14] = 0x001ad878u; fn_000ec21c(cpu);
    }
L_001ad878:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ad87c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ad880u)) return;
    }
}

/* _ZN18GS_MultiplayerMenu6ResumeEv @ 001ad888 (arm) */
void fn_001ad888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad888:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN18GS_MultiplayerMenu8DoActionEii @ 001ad88c (arm) */
void fn_001ad88c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ad88c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ad890:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ad894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ad898:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001ad89c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ad8a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad8ac;
        }
    }
L_001ad8a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001ad8a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ad8acu)) return;
    }
L_001ad8ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001ad8b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ad8b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ad984;
        }
    }
L_001ad8b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001ad8bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001ad8c0:;
    {
        cpu->r[3] = 0x0000040cu;
    }
L_001ad8c4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001ad8c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_001ad8cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001ad8d0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001ad8d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001ad8d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001ad8dc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ad8e0:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001ad8e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad994;
        }
    }
L_001ad8e8:;
    {
        cpu->r[3] = 0x0000040du;
    }
L_001ad8ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ad8f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad994;
        }
    }
L_001ad8f4:;
    {
        cpu->r[3] = 0x0000040eu;
    }
L_001ad8f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ad8fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ad8a4;
        }
    }
L_001ad900:;
    {
        cpu->r[14] = 0x001ad904u; fn_000a622c(cpu);
    }
L_001ad904:;
    {
        cpu->r[14] = rd32(0x001ad90cu + + 0xf4u);
    }
L_001ad908:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ad90c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001ad910:;
    {
        cpu->r[14] = add_flags(cpu, 0x001ad918u, cpu->r[14], 0, 0);
    }
L_001ad914:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ad918:;
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
L_001ad91c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001ad920:;
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
    }
L_001ad924:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001ad928:;
    {
        cpu->r[14] = 0x001ad92cu; fn_000979a0(cpu);
    }
L_001ad92c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001ad930:;
    {
        cpu->r[14] = 0x001ad934u; fn_000979a0(cpu);
    }
L_001ad934:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001ad938:;
    {
        cpu->r[1] = rd32(0x001ad940u + + 0xc4u);
    }
L_001ad93c:;
    {
        cpu->r[2] = rd32(0x001ad944u + + 0xc4u);
    }
L_001ad940:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001ad944:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ad94cu, cpu->r[1], 0, 0);
    }
L_001ad948:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ad950u, cpu->r[2], 0, 0);
    }
L_001ad94c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001ad950:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001ad954:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[14]; cpu->r[12] = v;
    }
L_001ad958:;
    {
        cpu->r[12] = rd32(cpu->r[12] + - 0x20u);
    }
L_001ad95c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad960:;
    {
        cpu->r[14] = 0x001ad964u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001ad964:;
    {
        cpu->r[14] = 0x001ad968u; fn_000979a0(cpu);
    }
L_001ad968:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001ad96c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ad970:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001ad974:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x20u);
    }
L_001ad978:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001ad97c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001ad980:;
    {
        return fn_0007232c(cpu);
    }
L_001ad984:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ad988:;
    {
        cpu->r[14] = 0x001ad990u;
    }
L_001ad98c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ad990u)) return;
    }
L_001ad990:;
    {
        goto L_001ad8a4;
    }
L_001ad994:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001ad998:;
    {
        cpu->r[14] = 0x001ad99cu; fn_00093f34(cpu);
    }
L_001ad99c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ad9a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ad9a4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ad9a8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ad9ac:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_001ad9b0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_001ad9b4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001ad9b8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ad9bc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ad9c0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ad9c4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ad9c8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001ad9cc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ad9d0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[12]);
    }
L_001ad9d4:;
    {
        cpu->r[14] = 0x001ad9d8u; fn_000fd248(cpu);
    }
L_001ad9d8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001ad9dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ad9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ad8a4;
        }
    }
L_001ad9e4:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ad9e8:;
    {
        cpu->r[14] = 0x001ad9ecu; fn_00093f34(cpu);
    }
L_001ad9ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ad9f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ad9f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ad9f8:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[2]);
    }
L_001ad9fc:;
    {
        goto L_001ad8a4;
    }
}

/* _ZN18GS_MultiplayerMenu6RenderEv @ 001ada0c (arm) */
void fn_001ada0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ada0c:;
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
L_001ada10:;
    {
        cpu->r[5] = rd32(0x001ada18u + + 0x31cu);
    }
L_001ada14:;
    {
        cpu->r[3] = rd32(0x001ada1cu + + 0x31cu);
    }
L_001ada18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ada1c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ada24u, cpu->r[5], 0, 0);
    }
L_001ada20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001ada24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ada28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ada2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ada30:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x404u);
    }
L_001ada34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ada38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ada48;
        }
    }
L_001ada3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001ada40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ada44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ada48u)) return;
    }
L_001ada48:;
    {
        cpu->r[14] = 0x001ada4cu; fn_0010d9cc(cpu);
    }
L_001ada4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ada50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adac8;
        }
    }
L_001ada54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001ada58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ada5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001adac0;
        }
    }
L_001ada60:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ada64:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ada68:;
    {
        cpu->r[14] = 0x001ada6cu; fn_00093f34(cpu);
    }
L_001ada6c:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 8u, &shc), cpu->r[6], 1, 0);
    }
L_001ada70:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ada74:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ada78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ada7c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ada80:;
    {
        cpu->r[14] = 0x001ada84u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ada84:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000feu, 1, 1);
    }
L_001ada88:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00ff0000u;
        }
    }
L_001ada8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001adacc;
        }
    }
L_001ada90:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ada94:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ada98:;
    {
        cpu->r[14] = 0x001ada9cu; fn_00093f34(cpu);
    }
L_001ada9c:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 8u, &shc), cpu->r[6], 1, 0);
    }
L_001adaa0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001adaa4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001adaa8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001adaac:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001adab0:;
    {
        cpu->r[14] = 0x001adab4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001adab4:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001adab8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[6] = v;
    }
L_001adabc:;
    {
        goto L_001adacc;
    }
L_001adac0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001adac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adcd0;
        }
    }
L_001adac8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001adacc:;
    {
        cpu->r[3] = rd32(0x001adad4u + + 0x268u);
    }
L_001adad0:;
    {
        cpu->r[10] = rd32(0x001adad8u + + 0x268u);
    }
L_001adad4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001adad8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001adadc:;
    {
        cpu->r[14] = 0x001adae0u; fn_0012f780(cpu);
    }
L_001adae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001adae4:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001adae8:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001adaec:;
    {
        cpu->r[14] = 0x001adaf0u; fn_00113570(cpu);
    }
L_001adaf0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001adaf4:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001adaf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001adafc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
        }
    }
L_001adb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adb44;
        }
    }
L_001adb04:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001adb08:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001adb0c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001adb10:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_001adb14:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001adb18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001adb1c:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[6]);
    }
L_001adb20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001adb24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001adb28:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001adb2c:;
    {
        cpu->r[14] = 0x001adb34u;
    }
L_001adb30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001adb34u)) return;
    }
L_001adb34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001adb38:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[8]);
    }
L_001adb3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001adb40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001adb14;
        }
    }
L_001adb44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001adb48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001adb4c:;
    {
        cpu->r[14] = 0x001adb54u;
    }
L_001adb50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001adb54u)) return;
    }
L_001adb54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001adb58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001adb5c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001adb60:;
    {
        cpu->r[14] = 0x001adb68u;
    }
L_001adb64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001adb68u)) return;
    }
L_001adb68:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_001adb6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001adb70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001adcbc;
        }
    }
L_001adb74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001adb78:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_001adb7c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x950u);
    }
L_001adb80:;
    {
        cpu->r[7] = rd8(cpu->r[3]);
    }
L_001adb84:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x48u);
    }
L_001adb88:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001adb8c:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[10]);
    }
L_001adb90:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[8]);
    }
L_001adb94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adc30;
        }
    }
L_001adb98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001adb9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_001adba0:;
    {
        cpu->r[14] = 0x001adba4u; fn_000aeb58(cpu);
    }
L_001adba4:;
    {
        cpu->r[2] = rd32(0x001adbacu + + 0x198u);
    }
L_001adba8:;
    {
        uint32_t v = cpu->r[6] & 0x00ff0000u; cpu->r[7] = v;
    }
L_001adbac:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001adbb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001adbb4:;
    {
        cpu->r[10] = 0x0000014au;
    }
L_001adbb8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001adbbc:;
    {
        cpu->r[11] = 0x00000165u;
    }
L_001adbc0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001adbc4:;
    {
        cpu->r[3] = 0x000000f0u;
    }
L_001adbc8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001adbcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001adbd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001adbd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_001adbd8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001adbdc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001adbe0:;
    {
        cpu->r[14] = 0x001adbe4u; fn_000ad19c(cpu);
    }
L_001adbe4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001adbe8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001adbec:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x950u);
    }
L_001adbf0:;
    {
        cpu->r[14] = 0x001adbf4u; fn_000aeb58(cpu);
    }
L_001adbf4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001adbf8:;
    {
        cpu->r[3] = 0x00000186u;
    }
L_001adbfc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001adc00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001adc04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001adc08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001adc0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_001adc10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001adc14:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001adc18:;
    {
        cpu->r[14] = 0x001adc1cu; fn_000ad19c(cpu);
    }
L_001adc1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001adc20:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_001adc24:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[8]);
    }
L_001adc28:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[2]);
    }
L_001adc2c:;
    {
        goto L_001ada3c;
    }
L_001adc30:;
    {
        cpu->r[3] = 0x00008c00u;
    }
L_001adc34:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[10]);
    }
L_001adc38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001adc3c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001adc40:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[3]);
    }
L_001adc44:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001adc48:;
    {
        cpu->r[14] = 0x001adc4cu; fn_000aeb58(cpu);
    }
L_001adc4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001adc50:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001adc54:;
    {
        cpu->r[3] = 0x000001f4u;
    }
L_001adc58:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001adc5c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001adc60:;
    {
        cpu->r[14] = 0x001adc64u; fn_000a9818(cpu);
    }
L_001adc64:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001adc68:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001adc6c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x950u);
    }
L_001adc70:;
    {
        cpu->r[14] = 0x001adc74u; fn_000aeb58(cpu);
    }
L_001adc74:;
    {
        cpu->r[3] = rd32(0x001adc7cu + + 0xc8u);
    }
L_001adc78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001adc7c:;
    {
        cpu->r[12] = 0x000000c8u;
    }
L_001adc80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001adc84:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001adc88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001adc8c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001adc90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001adc94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001adc98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_001adc9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001adca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001adca4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001adca8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000046u, 1, 0);
    }
L_001adcac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001adcb0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001adcb4:;
    {
        cpu->r[14] = 0x001adcb8u; fn_000ac4bc(cpu);
    }
L_001adcb8:;
    {
        goto L_001adc1c;
    }
L_001adcbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001adcc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001adcc4:;
    {
        cpu->r[14] = 0x001adcccu;
    }
L_001adcc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001adcccu)) return;
    }
L_001adccc:;
    {
        goto L_001adb74;
    }
L_001adcd0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001adcd4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001adcd8:;
    {
        cpu->r[14] = 0x001adcdcu; fn_00093f34(cpu);
    }
L_001adcdc:;
    {
        cpu->r[7] = (~0x000000feu);
    }
L_001adce0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[8]; cpu->r[8] = v;
    }
L_001adce4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001adce8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001adcec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001adcf0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001adcf4:;
    {
        cpu->r[14] = 0x001adcf8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001adcf8:;
    {
        add_flags(cpu, cpu->r[0], 0x000000feu, 0, 1);
    }
L_001adcfc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001adacc;
        }
    }
L_001add00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001add04:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001add08:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_001add0c:;
    {
        cpu->r[14] = 0x001add10u; fn_00093f34(cpu);
    }
L_001add10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001add14:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001add18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001add1c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001add20:;
    {
        cpu->r[14] = 0x001add24u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001add24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000ffu, 0, 0);
    }
L_001add28:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[6] = v;
    }
L_001add2c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 16u, &shc); cpu->r[6] = v;
    }
L_001add30:;
    {
        goto L_001adacc;
    }
}

/* _ZN18GS_MultiplayerMenuC2Eb @ 001add48 (arm) */
void fn_001add48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001add48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001add4c:;
    {
        cpu->r[4] = rd32(0x001add54u + + 0x9cu);
    }
L_001add50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001add54:;
    {
        cpu->r[14] = 0x001add58u; fn_001100c0(cpu);
    }
L_001add58:;
    {
        cpu->r[2] = rd32(0x001add60u + + 0x94u);
    }
L_001add5c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001add64u, cpu->r[4], 0, 0);
    }
L_001add60:;
    {
        cpu->r[3] = rd32(0x001add68u + + 0x90u);
    }
L_001add64:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001add68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001add6c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001add70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001add74:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001add78:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001add7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001addac;
        }
    }
L_001add80:;
    {
        cpu->r[6] = rd32(0x001add88u + + 0x74u);
    }
L_001add84:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001add88:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001add8c:;
    {
        cpu->r[14] = 0x001add90u; fn_00096a08(cpu);
    }
L_001add90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001add94:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001add98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001add9c:;
    {
        cpu->r[14] = 0x001adda0u; fn_0018aa44(cpu);
    }
L_001adda0:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001adda4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001adda8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001addacu)) return;
    }
L_001addac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001addb0:;
    {
        cpu->r[14] = 0x001addb4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001addb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001addb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001add80;
        }
    }
L_001addbc:;
    {
        cpu->r[6] = rd32(0x001addc4u + + 0x38u);
    }
L_001addc0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001addc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001addc8:;
    {
        cpu->r[14] = 0x001addccu; fn_0018aa20(cpu);
    }
L_001addcc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001addd0:;
    {
        cpu->r[14] = 0x001addd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001addd4:;
    {
        cpu->r[3] = rd32(0x001adddcu + + 0x24u);
    }
L_001addd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001adddc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001adde0:;
    {
        cpu->r[3] = rd32(0x001adde8u + + 0x1cu);
    }
L_001adde4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001adde8:;
    {
        cpu->r[14] = 0x001addecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001addec:;
    {
        goto L_001add84;
    }
}

/* _ZN18GS_MultiplayerMenuD0Ev @ 001ade08 (arm) */
void fn_001ade08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ade08:;
    {
        cpu->r[3] = rd32(0x001ade10u + + 0x2cu);
    }
L_001ade0c:;
    {
        cpu->r[2] = rd32(0x001ade14u + + 0x2cu);
    }
L_001ade10:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ade18u, cpu->r[3], 0, 0);
    }
L_001ade14:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ade18:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ade1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ade20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ade24:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ade28:;
    {
        cpu->r[14] = 0x001ade2cu; fn_000ec21c(cpu);
    }
L_001ade2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ade30:;
    {
        cpu->r[14] = 0x001ade34u; fn_0018ba20(cpu);
    }
L_001ade34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ade38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ade3cu)) return;
    }
}

/* _ZN18GS_MultiplayerMenuC1Eb @ 001ade44 (arm) */
void fn_001ade44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ade44:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ade48:;
    {
        cpu->r[4] = rd32(0x001ade50u + + 0x9cu);
    }
L_001ade4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ade50:;
    {
        cpu->r[14] = 0x001ade54u; fn_001100c0(cpu);
    }
L_001ade54:;
    {
        cpu->r[2] = rd32(0x001ade5cu + + 0x94u);
    }
L_001ade58:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ade60u, cpu->r[4], 0, 0);
    }
L_001ade5c:;
    {
        cpu->r[3] = rd32(0x001ade64u + + 0x90u);
    }
L_001ade60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001ade64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ade68:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001ade6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001ade70:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001ade74:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ade78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adea8;
        }
    }
L_001ade7c:;
    {
        cpu->r[6] = rd32(0x001ade84u + + 0x74u);
    }
L_001ade80:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ade84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ade88:;
    {
        cpu->r[14] = 0x001ade8cu; fn_00096a08(cpu);
    }
L_001ade8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ade90:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ade94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ade98:;
    {
        cpu->r[14] = 0x001ade9cu; fn_0018aa44(cpu);
    }
L_001ade9c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001adea0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001adea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001adea8u)) return;
    }
L_001adea8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001adeac:;
    {
        cpu->r[14] = 0x001adeb0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001adeb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001adeb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ade7c;
        }
    }
L_001adeb8:;
    {
        cpu->r[6] = rd32(0x001adec0u + + 0x38u);
    }
L_001adebc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001adec0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001adec4:;
    {
        cpu->r[14] = 0x001adec8u; fn_0018aa20(cpu);
    }
L_001adec8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001adecc:;
    {
        cpu->r[14] = 0x001aded0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001aded0:;
    {
        cpu->r[3] = rd32(0x001aded8u + + 0x24u);
    }
L_001aded4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aded8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001adedc:;
    {
        cpu->r[3] = rd32(0x001adee4u + + 0x1cu);
    }
L_001adee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001adee4:;
    {
        cpu->r[14] = 0x001adee8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001adee8:;
    {
        goto L_001ade80;
    }
}

/* _ZN18GS_MultiplayerMenu6UpdateEv @ 001adf04 (arm) */
void fn_001adf04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001adf04:;
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
L_001adf08:;
    {
        cpu->r[4] = rd32(0x001adf10u + + 0x498u);
    }
L_001adf0c:;
    {
        cpu->r[5] = rd32(0x001adf14u + + 0x498u);
    }
L_001adf10:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001adf14:;
    {
        cpu->r[4] = add_flags(cpu, 0x001adf1cu, cpu->r[4], 0, 0);
    }
L_001adf18:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001adf1c:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001adf20:;
    {
        cpu->r[7] = rd8(cpu->r[10] + + 0x404u);
    }
L_001adf24:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001adf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adf9c;
        }
    }
L_001adf2c:;
    {
        cpu->r[7] = rd8(cpu->r[10] + + 0x405u);
    }
L_001adf30:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001adf34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001adfc0;
        }
    }
L_001adf38:;
    {
        cpu->r[7] = rd32(0x001adf40u + + 0x470u);
    }
L_001adf3c:;
    {
        cpu->r[3] = 0x00006780u;
    }
L_001adf40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001adf44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001adf48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001adf4c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001adf50:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001adf54:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001adf58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae0c4;
        }
    }
L_001adf5c:;
    {
        cpu->r[3] = rd32(0x001adf64u + + 0x450u);
    }
L_001adf60:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_001adf64:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001adf68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001adf6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x84u);
    }
L_001adf70:;
    {
        wr32(cpu->r[10] + cpu->r[1], cpu->r[3]);
    }
L_001adf74:;
    {
        cpu->r[12] = 0x0000150du;
    }
L_001adf78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001adf7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001adf80:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[3]);
    }
L_001adf84:;
    {
        cpu->r[14] = 0x001adf88u; fn_000f34e8(cpu);
    }
L_001adf88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001adf8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001adf90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001adf94:;
    {
        wr8(cpu->r[3] + + 0x405u, cpu->r[2]);
    }
L_001adf98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001adf9cu)) return;
    }
L_001adf9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001adfa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001adfa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae060;
        }
    }
L_001adfa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001adfac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae134;
        }
    }
L_001adfb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001adfb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001adfb8u)) return;
        }
    }
L_001adfb8:;
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
L_001adfbc:;
    {
        return fn_00114a58(cpu);
    }
L_001adfc0:;
    {
        cpu->r[14] = 0x001adfc4u; fn_001b0590(cpu);
    }
L_001adfc4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001adfc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae06c;
        }
    }
L_001adfcc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001adfd0:;
    {
        cpu->r[12] = 0x0000678cu;
    }
L_001adfd4:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001adfd8:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_001adfdc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001adfe0:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001adfe4:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[7]);
    }
L_001adfe8:;
    {
        cpu->r[12] = 0x00005f53u;
    }
L_001adfec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001adff0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001adff4:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[7]);
    }
L_001adff8:;
    {
        cpu->r[14] = 0x001adffcu; imp_memset(cpu); /* memset */
    }
L_001adffc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ae000:;
    {
        cpu->r[0] = 0x000009acu;
    }
L_001ae004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_001ae008:;
    {
        wr32(cpu->r[3] + + 0x268u, cpu->r[7]);
    }
L_001ae00c:;
    {
        wr32(cpu->r[3] + + 0x24cu, cpu->r[7]);
    }
L_001ae010:;
    {
        wr32(cpu->r[3] + + 0x250u, cpu->r[7]);
    }
L_001ae014:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[7]);
    }
L_001ae018:;
    {
        wr32(cpu->r[3] + + 0x258u, cpu->r[7]);
    }
L_001ae01c:;
    {
        wr32(cpu->r[3] + + 0x25cu, cpu->r[7]);
    }
L_001ae020:;
    {
        wr32(cpu->r[3] + + 0x260u, cpu->r[7]);
    }
L_001ae024:;
    {
        wr32(cpu->r[3] + + 0x264u, cpu->r[7]);
    }
L_001ae028:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae02c:;
    {
        cpu->r[14] = 0x001ae030u; fn_0018ba6c(cpu);
    }
L_001ae030:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ae034:;
    {
        cpu->r[14] = 0x001ae038u; fn_00199618(cpu);
    }
L_001ae038:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ae03c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae040:;
    {
        cpu->r[14] = 0x001ae044u; fn_000f361c(cpu);
    }
L_001ae044:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae048:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae04c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ae050:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001ae054:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ae058:;
    {
        wr8(cpu->r[3] + + 0x405u, cpu->r[2]);
    }
L_001ae05c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae060u)) return;
    }
L_001ae060:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae064:;
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
L_001ae068:;
    {
        return fn_000eb59c(cpu);
    }
L_001ae06c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae070:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001ae074:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae078:;
    {
        cpu->r[14] = 0x001ae07cu; fn_0018ba6c(cpu);
    }
L_001ae07c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ae080:;
    {
        cpu->r[14] = 0x001ae084u; fn_000a7570(cpu);
    }
L_001ae084:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ae088:;
    {
        cpu->r[0] = 0x000004a7u;
    }
L_001ae08c:;
    {
        cpu->r[14] = 0x001ae090u; fn_000aeb58(cpu);
    }
L_001ae090:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001ae094:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ae098:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ae09c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ae0a0:;
    {
        cpu->r[14] = 0x001ae0a4u; fn_000a7bb0(cpu);
    }
L_001ae0a4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae0a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae0ac:;
    {
        cpu->r[14] = 0x001ae0b0u; fn_000f361c(cpu);
    }
L_001ae0b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001ae0b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ae0b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ae0bc:;
    {
        wr8(cpu->r[3] + + 0x405u, cpu->r[2]);
    }
L_001ae0c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae0c4u)) return;
    }
L_001ae0c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ae0c8:;
    {
        cpu->r[14] = 0x001ae0ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ae0cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae0d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae1c8;
        }
    }
L_001ae0d4:;
    {
        cpu->r[8] = rd32(0x001ae0dcu + + 0x2d8u);
    }
L_001ae0d8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ae0dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001ae0e0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001ae0e4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001ae0e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x84u);
    }
L_001ae0ec:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ae0f0:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001ae0f4:;
    {
        wr32(cpu->r[10] + cpu->r[2], cpu->r[3]);
    }
L_001ae0f8:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001ae0fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001ae100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001adf74;
        }
    }
L_001ae104:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ae108:;
    {
        cpu->r[14] = 0x001ae10cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ae10c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae124;
        }
    }
L_001ae114:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ae118:;
    {
        cpu->r[14] = 0x001ae11cu; fn_00094228(cpu);
    }
L_001ae11c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ae120:;
    {
        cpu->r[14] = 0x001ae124u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ae124:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ae128:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x84u);
    }
L_001ae12c:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001ae130:;
    {
        goto L_001adf74;
    }
L_001ae134:;
    {
        cpu->r[14] = 0x001ae138u; fn_0010da28(cpu);
    }
L_001ae138:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae13c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae140u)) return;
        }
    }
L_001ae140:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_001ae144:;
    {
        cpu->r[2] = 0x0000040du;
    }
L_001ae148:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ae14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae278;
        }
    }
L_001ae150:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ae1b0;
        }
    }
L_001ae154:;
    {
        cpu->r[2] = 0x0000040eu;
    }
L_001ae158:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ae15c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae160u)) return;
        }
    }
L_001ae160:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001ae164:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ae168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae1bc;
        }
    }
L_001ae16c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae170:;
    {
        cpu->r[3] = 0x00006780u;
    }
L_001ae174:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_001ae178:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[7]);
    }
L_001ae17c:;
    {
        cpu->r[14] = 0x001ae180u; fn_000979a0(cpu);
    }
L_001ae180:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001ae184:;
    {
        cpu->r[4] = rd32(cpu->r[8]);
    }
L_001ae188:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x84u);
    }
L_001ae18c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001ae190:;
    {
        cpu->r[14] = 0x001ae194u; fn_000979a0(cpu);
    }
L_001ae194:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001ae198:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ae19c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x84u);
    }
L_001ae1a0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001ae1a4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001ae1a8:;
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
L_001ae1ac:;
    {
        return fn_000f34e8(cpu);
    }
L_001ae1b0:;
    {
        cpu->r[2] = 0x0000040cu;
    }
L_001ae1b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ae1b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae1e0;
        }
    }
L_001ae1bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae1c0:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae1c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae1c8u)) return;
    }
L_001ae1c8:;
    {
        cpu->r[8] = rd32(0x001ae1d0u + + 0x1e4u);
    }
L_001ae1cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001ae1d0:;
    {
        cpu->r[14] = 0x001ae1d4u; fn_00094228(cpu);
    }
L_001ae1d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ae1d8:;
    {
        cpu->r[14] = 0x001ae1dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ae1dc:;
    {
        goto L_001ae0d8;
    }
L_001ae1e0:;
    {
        cpu->r[3] = rd32(0x001ae1e8u + + 0x1d0u);
    }
L_001ae1e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ae1e8:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001ae1ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae1f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae1f4u)) return;
        }
    }
L_001ae1f4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae1f8:;
    {
        cpu->r[3] = 0x000063c1u;
    }
L_001ae1fc:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001ae200:;
    {
        cpu->r[2] = 0x0000675fu;
    }
L_001ae204:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001ae208:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_001ae20c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae210:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001ae214:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_001ae218:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_001ae21c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001ae220:;
    {
        cpu->r[3] = 0x0000675eu;
    }
L_001ae224:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001ae228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae350;
        }
    }
L_001ae22c:;
    {
        cpu->r[14] = 0x001ae230u; fn_001b0590(cpu);
    }
L_001ae230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae374;
        }
    }
L_001ae238:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae23c:;
    {
        cpu->r[3] = 0x00005f54u;
    }
L_001ae240:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001ae244:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001ae248:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001ae24c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001ae250:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001ae254:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001ae258:;
    {
        cpu->r[14] = 0x001ae25cu; fn_0018ba6c(cpu);
    }
L_001ae25c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ae260:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ae264:;
    {
        cpu->r[14] = 0x001ae268u; fn_001aeb50(cpu);
    }
L_001ae268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae26c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae270:;
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
L_001ae274:;
    {
        return fn_000f361c(cpu);
    }
L_001ae278:;
    {
        cpu->r[14] = 0x001ae27cu; fn_001b0590(cpu);
    }
L_001ae27c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae308;
        }
    }
L_001ae284:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae288:;
    {
        cpu->r[12] = 0x0000678cu;
    }
L_001ae28c:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001ae290:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_001ae294:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001ae298:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001ae29c:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[7]);
    }
L_001ae2a0:;
    {
        cpu->r[12] = 0x00005f53u;
    }
L_001ae2a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001ae2a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae2ac:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[7]);
    }
L_001ae2b0:;
    {
        cpu->r[14] = 0x001ae2b4u; imp_memset(cpu); /* memset */
    }
L_001ae2b4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ae2b8:;
    {
        cpu->r[0] = 0x000009acu;
    }
L_001ae2bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_001ae2c0:;
    {
        wr32(cpu->r[3] + + 0x268u, cpu->r[7]);
    }
L_001ae2c4:;
    {
        wr32(cpu->r[3] + + 0x24cu, cpu->r[7]);
    }
L_001ae2c8:;
    {
        wr32(cpu->r[3] + + 0x250u, cpu->r[7]);
    }
L_001ae2cc:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[7]);
    }
L_001ae2d0:;
    {
        wr32(cpu->r[3] + + 0x258u, cpu->r[7]);
    }
L_001ae2d4:;
    {
        wr32(cpu->r[3] + + 0x25cu, cpu->r[7]);
    }
L_001ae2d8:;
    {
        wr32(cpu->r[3] + + 0x260u, cpu->r[7]);
    }
L_001ae2dc:;
    {
        wr32(cpu->r[3] + + 0x264u, cpu->r[7]);
    }
L_001ae2e0:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae2e4:;
    {
        cpu->r[14] = 0x001ae2e8u; fn_0018ba6c(cpu);
    }
L_001ae2e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae2ec:;
    {
        cpu->r[14] = 0x001ae2f0u; fn_00199618(cpu);
    }
L_001ae2f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ae2f4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ae2f8:;
    {
        cpu->r[14] = 0x001ae2fcu; fn_000f361c(cpu);
    }
L_001ae2fc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae300:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae308u)) return;
    }
L_001ae308:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae30c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001ae310:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae314:;
    {
        cpu->r[14] = 0x001ae318u; fn_0018ba6c(cpu);
    }
L_001ae318:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae31c:;
    {
        cpu->r[14] = 0x001ae320u; fn_000a7570(cpu);
    }
L_001ae320:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae324:;
    {
        cpu->r[0] = 0x000004a7u;
    }
L_001ae328:;
    {
        cpu->r[14] = 0x001ae32cu; fn_000aeb58(cpu);
    }
L_001ae32c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae330:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ae334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae338:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001ae33c:;
    {
        cpu->r[14] = 0x001ae340u; fn_000a7bb0(cpu);
    }
L_001ae340:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ae344:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ae348:;
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
L_001ae34c:;
    {
        return fn_000f361c(cpu);
    }
L_001ae350:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_001ae354:;
    {
        cpu->r[14] = 0x001ae358u; fn_0018ba6c(cpu);
    }
L_001ae358:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ae35c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ae360:;
    {
        cpu->r[14] = 0x001ae364u; fn_001abc1c(cpu);
    }
L_001ae364:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae368:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae36c:;
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
L_001ae370:;
    {
        return fn_000f361c(cpu);
    }
L_001ae374:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ae378:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001ae37c:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_001ae380:;
    {
        cpu->r[14] = 0x001ae384u; fn_0018ba6c(cpu);
    }
L_001ae384:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae388:;
    {
        cpu->r[14] = 0x001ae38cu; fn_000a7570(cpu);
    }
L_001ae38c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae390:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001ae394:;
    {
        cpu->r[14] = 0x001ae398u; fn_000aeb58(cpu);
    }
L_001ae398:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae39c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ae3a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae3a4:;
    {
        goto L_001ae338;
    }
}

/* _ZN23GS_MultiplayerMenuLocal8isKindOfEi @ 001ae3bc (arm) */
void fn_001ae3bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae3bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000051u, 1, 1);
    }
L_001ae3c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ae3c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ae3c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_79 @ 001ae3cc (arm) */
void fn_001ae3cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae3cc:;
    {
        cpu->r[3] = rd32(0x001ae3d4u + + 0x20u);
    }
L_001ae3d0:;
    {
        cpu->r[1] = rd32(0x001ae3d8u + + 0x20u);
    }
L_001ae3d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ae3dcu, cpu->r[3], 0, 0);
    }
L_001ae3d8:;
    {
        cpu->r[2] = rd32(0x001ae3e0u + + 0x1cu);
    }
L_001ae3dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ae3e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ae3e8u, cpu->r[2], 0, 0);
    }
L_001ae3e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ae3e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001ae3ec:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001ae3f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_MultiplayerMenuLocalD1Ev @ 001ae400 (arm) */
void fn_001ae400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae400:;
    {
        cpu->r[3] = rd32(0x001ae408u + + 0x24u);
    }
L_001ae404:;
    {
        cpu->r[2] = rd32(0x001ae40cu + + 0x24u);
    }
L_001ae408:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ae410u, cpu->r[3], 0, 0);
    }
L_001ae40c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ae410:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ae414:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae418:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ae41c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ae420:;
    {
        cpu->r[14] = 0x001ae424u; fn_000ec21c(cpu);
    }
L_001ae424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae428:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae42cu)) return;
    }
}

/* _ZN23GS_MultiplayerMenuLocal8DoActionEii @ 001ae434 (arm) */
void fn_001ae434(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae434:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ae438:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ae43c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ae440:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ae444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae454;
        }
    }
L_001ae44c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae450:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae454u)) return;
    }
L_001ae454:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001ae458:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ae45c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ae508;
        }
    }
L_001ae460:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001ae464:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001ae468:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_001ae46c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001ae470:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_001ae474:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001ae478:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001ae47c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001ae480:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001ae484:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ae488:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001ae48c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae49c;
        }
    }
L_001ae490:;
    {
        cpu->r[3] = 0x00000413u;
    }
L_001ae494:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ae498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae44c;
        }
    }
L_001ae49c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001ae4a0:;
    {
        cpu->r[14] = 0x001ae4a4u; fn_00093f34(cpu);
    }
L_001ae4a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ae4a8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ae4ac:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ae4b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ae4b4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_001ae4b8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_001ae4bc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001ae4c0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ae4c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ae4c8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae4cc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae4d0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001ae4d4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae4d8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[12]);
    }
L_001ae4dc:;
    {
        cpu->r[14] = 0x001ae4e0u; fn_000fd248(cpu);
    }
L_001ae4e0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001ae4e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae4e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae44c;
        }
    }
L_001ae4ec:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ae4f0:;
    {
        cpu->r[14] = 0x001ae4f4u; fn_00093f34(cpu);
    }
L_001ae4f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae4f8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae4fc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae500:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001ae504:;
    {
        goto L_001ae44c;
    }
L_001ae508:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ae50c:;
    {
        cpu->r[14] = 0x001ae514u;
    }
L_001ae510:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae514u)) return;
    }
L_001ae514:;
    {
        goto L_001ae44c;
    }
}

/* _ZN23GS_MultiplayerMenuLocal6RenderEv @ 001ae518 (arm) */
void fn_001ae518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae518:;
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
L_001ae51c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ae520:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ae524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae528:;
    {
        cpu->r[14] = 0x001ae52cu; fn_0010d9cc(cpu);
    }
L_001ae52c:;
    {
        cpu->r[6] = rd32(0x001ae534u + + 0x2ccu);
    }
L_001ae530:;
    {
        cpu->r[6] = add_flags(cpu, 0x001ae538u, cpu->r[6], 0, 0);
    }
L_001ae534:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae5b0;
        }
    }
L_001ae53c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001ae540:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae5a8;
        }
    }
L_001ae548:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ae54c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ae550:;
    {
        cpu->r[14] = 0x001ae554u; fn_00093f34(cpu);
    }
L_001ae554:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 8u, &shc), cpu->r[5], 1, 0);
    }
L_001ae558:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae55c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ae564:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae568:;
    {
        cpu->r[14] = 0x001ae56cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ae56c:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000feu, 1, 1);
    }
L_001ae570:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = 0x00ff0000u;
        }
    }
L_001ae574:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ae5b4;
        }
    }
L_001ae578:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ae57c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ae580:;
    {
        cpu->r[14] = 0x001ae584u; fn_00093f34(cpu);
    }
L_001ae584:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 8u, &shc), cpu->r[5], 1, 0);
    }
L_001ae588:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae58c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae590:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ae594:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae598:;
    {
        cpu->r[14] = 0x001ae59cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ae59c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001ae5a0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[8] = v;
    }
L_001ae5a4:;
    {
        goto L_001ae5b4;
    }
L_001ae5a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ae5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae79c;
        }
    }
L_001ae5b0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ae5b4:;
    {
        cpu->r[3] = rd32(0x001ae5bcu + + 0x248u);
    }
L_001ae5b8:;
    {
        cpu->r[9] = rd32(0x001ae5c0u + + 0x248u);
    }
L_001ae5bc:;
    {
        cpu->r[10] = rd32(0x001ae5c4u + + 0x248u);
    }
L_001ae5c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ae5c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001ae5c8:;
    {
        cpu->r[14] = 0x001ae5ccu; fn_0012f780(cpu);
    }
L_001ae5cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001ae5d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ae5d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae5d8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001ae5dc:;
    {
        cpu->r[14] = 0x001ae5e0u; fn_00113570(cpu);
    }
L_001ae5e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae5e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ae5e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ae5ec:;
    {
        cpu->r[14] = 0x001ae5f4u;
    }
L_001ae5f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae5f4u)) return;
    }
L_001ae5f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ae5f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae5fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae600:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ae604:;
    {
        cpu->r[14] = 0x001ae60cu;
    }
L_001ae608:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae60cu)) return;
    }
L_001ae60c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001ae610:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001ae614:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae6dc;
        }
    }
L_001ae61c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ae620:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_001ae624:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ae628:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x48u);
    }
L_001ae62c:;
    {
        wr32(cpu->r[8] + + 0x48u, cpu->r[3]);
    }
L_001ae630:;
    {
        wr32(cpu->r[8] + + 0x4cu, cpu->r[7]);
    }
L_001ae634:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x48u);
    }
L_001ae638:;
    {
        cpu->r[2] = 0x00008c00u;
    }
L_001ae63c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_001ae640:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae644:;
    {
        wr32(cpu->r[8] + + 0x48u, cpu->r[2]);
    }
L_001ae648:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001ae64c:;
    {
        wr32(cpu->r[8] + + 0x4cu, cpu->r[3]);
    }
L_001ae650:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ae654:;
    {
        cpu->r[14] = 0x001ae658u; fn_000aeb58(cpu);
    }
L_001ae658:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ae65c:;
    {
        cpu->r[3] = 0x000001f4u;
    }
L_001ae660:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ae664:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ae668:;
    {
        cpu->r[14] = 0x001ae66cu; fn_000a9818(cpu);
    }
L_001ae66c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae670:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001ae674:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ae678:;
    {
        cpu->r[14] = 0x001ae67cu; fn_000aeb58(cpu);
    }
L_001ae67c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001ae680:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ae684:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001ae688:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ae68c:;
    {
        cpu->r[14] = 0x000000c8u;
    }
L_001ae690:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ae694:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001ae698:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_001ae69c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ae6a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001ae6a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001ae6a8:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001ae6ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001ae6b0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001ae6b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ae6b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ae6bc:;
    {
        cpu->r[14] = 0x001ae6c0u; fn_000ac4bc(cpu);
    }
L_001ae6c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ae6c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_001ae6c8:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[7]);
    }
L_001ae6cc:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[2]);
    }
L_001ae6d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ae6d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ae6d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae6dcu)) return;
    }
L_001ae6dc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001ae6e0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001ae6e4:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001ae6e8:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_001ae6ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae6f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ae6f4:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[8]);
    }
L_001ae6f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae6fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ae700:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ae704:;
    {
        cpu->r[14] = 0x001ae70cu;
    }
L_001ae708:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae70cu)) return;
    }
L_001ae70c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ae710:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[5]);
    }
L_001ae714:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ae718:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ae6ec;
        }
    }
L_001ae71c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001ae720:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ae724:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001ae728:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x48u);
    }
L_001ae72c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae730:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ae734:;
    {
        wr32(cpu->r[8] + + 0x48u, cpu->r[3]);
    }
L_001ae738:;
    {
        wr32(cpu->r[8] + + 0x4cu, cpu->r[7]);
    }
L_001ae73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae634;
        }
    }
L_001ae740:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae744:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_001ae748:;
    {
        cpu->r[14] = 0x001ae74cu; fn_000aeb58(cpu);
    }
L_001ae74c:;
    {
        cpu->r[2] = 0x00000190u;
    }
L_001ae750:;
    {
        cpu->r[3] = 0x000000c8u;
    }
L_001ae754:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001ae758:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ae75c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001ae760:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ae764:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ae768:;
    {
        cpu->r[14] = 0x001ae76cu; fn_000ad19c(cpu);
    }
L_001ae76c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ae770:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001ae774:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ae778:;
    {
        cpu->r[14] = 0x001ae77cu; fn_000aeb58(cpu);
    }
L_001ae77c:;
    {
        cpu->r[2] = 0x00000190u;
    }
L_001ae780:;
    {
        cpu->r[3] = 0x00000172u;
    }
L_001ae784:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001ae788:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ae78c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ae790:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ae794:;
    {
        cpu->r[14] = 0x001ae798u; fn_000ad19c(cpu);
    }
L_001ae798:;
    {
        goto L_001ae6c0;
    }
L_001ae79c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ae7a0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ae7a4:;
    {
        cpu->r[14] = 0x001ae7a8u; fn_00093f34(cpu);
    }
L_001ae7a8:;
    {
        cpu->r[5] = (~0x000000feu);
    }
L_001ae7ac:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[7] = v;
    }
L_001ae7b0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae7b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae7b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ae7bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae7c0:;
    {
        cpu->r[14] = 0x001ae7c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ae7c4:;
    {
        add_flags(cpu, cpu->r[0], 0x000000feu, 0, 1);
    }
L_001ae7c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ae5b0;
        }
    }
L_001ae7cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ae7d0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ae7d4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_001ae7d8:;
    {
        cpu->r[14] = 0x001ae7dcu; fn_00093f34(cpu);
    }
L_001ae7dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ae7e0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ae7e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ae7e8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ae7ec:;
    {
        cpu->r[14] = 0x001ae7f0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ae7f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000ffu, 0, 0);
    }
L_001ae7f4:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[8] = v;
    }
L_001ae7f8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 16u, &shc); cpu->r[8] = v;
    }
L_001ae7fc:;
    {
        goto L_001ae5b4;
    }
}

/* _ZN23GS_MultiplayerMenuLocal6UpdateEv @ 001ae810 (arm) */
void fn_001ae810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae810:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ae814:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ae818:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ae81c:;
    {
        cpu->r[6] = rd32(0x001ae824u + + 0x154u);
    }
L_001ae820:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ae824:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ae828:;
    {
        cpu->r[6] = add_flags(cpu, 0x001ae830u, cpu->r[6], 0, 0);
    }
L_001ae82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae890;
        }
    }
L_001ae830:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ae834:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae84c;
        }
    }
L_001ae838:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae83c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ae888;
        }
    }
L_001ae840:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae844:;
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
L_001ae848:;
    {
        return fn_00114a58(cpu);
    }
L_001ae84c:;
    {
        cpu->r[14] = 0x001ae850u; fn_0010da28(cpu);
    }
L_001ae850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ae854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae888;
        }
    }
L_001ae858:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001ae85c:;
    {
        cpu->r[3] = 0x00000413u;
    }
L_001ae860:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001ae864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae928;
        }
    }
L_001ae868:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_001ae86c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001ae870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae914;
        }
    }
L_001ae874:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_001ae878:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001ae87c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ae880:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001ae884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae8a0;
        }
    }
L_001ae888:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae88c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ae890u)) return;
    }
L_001ae890:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae894:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae898:;
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
L_001ae89c:;
    {
        return fn_000eb59c(cpu);
    }
L_001ae8a0:;
    {
        cpu->r[3] = rd32(0x001ae8a8u + + 0xd4u);
    }
L_001ae8a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ae8a8:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001ae8ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae888;
        }
    }
L_001ae8b4:;
    {
        cpu->r[3] = rd32(0x001ae8bcu + + 0xc4u);
    }
L_001ae8b8:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_001ae8bc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ae8c0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ae8c4:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001ae8c8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001ae8cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ae8d0:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_001ae8d4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001ae8d8:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001ae8dc:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_001ae8e0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001ae8e4:;
    {
        cpu->r[14] = 0x001ae8e8u; fn_0018ba6c(cpu);
    }
L_001ae8e8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ae8ec:;
    {
        cpu->r[2] = 0x000004c0u;
    }
L_001ae8f0:;
    {
        cpu->r[3] = 0x00000416u;
    }
L_001ae8f4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ae8f8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001ae8fc:;
    {
        cpu->r[14] = 0x001ae900u; fn_00101900(cpu);
    }
L_001ae900:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ae904:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ae908:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae90c:;
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
L_001ae910:;
    {
        return fn_000f361c(cpu);
    }
L_001ae914:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ae918:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ae91c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ae920:;
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
L_001ae924:;
    {
        return fn_000f34e8(cpu);
    }
L_001ae928:;
    {
        cpu->r[3] = rd32(0x001ae930u + + 0x4cu);
    }
L_001ae92c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ae930:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001ae934:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ae938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ae888;
        }
    }
L_001ae93c:;
    {
        cpu->r[3] = rd32(0x001ae944u + + 0x3cu);
    }
L_001ae940:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001ae944:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ae948:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ae94c:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_001ae950:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ae954:;
    {
        wr8(cpu->r[3], cpu->r[8]);
    }
L_001ae958:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_001ae95c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001ae960:;
    {
        cpu->r[14] = 0x001ae964u; fn_0018ba6c(cpu);
    }
L_001ae964:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ae968:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001ae96c:;
    {
        cpu->r[2] = 0x000004c0u;
    }
L_001ae970:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ae974:;
    {
        goto L_001ae8f8;
    }
}

/* _ZN23GS_MultiplayerMenuLocal17ApplyMenuSettingsEv @ 001ae984 (arm) */
void fn_001ae984(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ae984:;
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
L_001ae988:;
    {
        cpu->r[4] = rd32(0x001ae990u + + 0x1acu);
    }
L_001ae98c:;
    {
        cpu->r[10] = rd32(0x001ae994u + + 0x1acu);
    }
L_001ae990:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ae994:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ae99cu, cpu->r[4], 0, 0);
    }
L_001ae998:;
    {
        cpu->r[9] = rd32(0x001ae9a0u + + 0x1a4u);
    }
L_001ae99c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001ae9a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ae9a4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001ae9a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001ae9ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001ae9b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001ae9b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001ae9b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001ae9bc:;
    {
        cpu->r[7] = rd32(cpu->r[11]);
    }
L_001ae9c0:;
    {
        cpu->r[14] = cpu->r[6];
    }
L_001ae9c4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001ae9c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x0001e000u, 0, 0);
    }
L_001ae9cc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001ae9d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000024cu, 0, 0);
    }
L_001ae9d4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_001ae9d8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_001ae9dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001ae9e0:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001ae9e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001ae9e8:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001ae9ec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001ae9f0:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001ae9f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001ae9f8:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001ae9fc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001aea00:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001aea04:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001aea08:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001aea0c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001aea10:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_001aea14:;
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
L_001aea18:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_001aea1c:;
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
L_001aea20:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001aea24:;
    {
        cpu->r[1] = 0x0000e6bau;
    }
L_001aea28:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001aea2c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001aea30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_001aea34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aea38:;
    {
        cpu->r[14] = 0x001aea3cu; imp_memcpy(cpu); /* memcpy */
    }
L_001aea3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aea40:;
    {
        cpu->r[14] = 0x001aea44u; fn_00193964(cpu);
    }
L_001aea44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aea48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aeb18;
        }
    }
L_001aea4c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001aea50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aea54:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001aea58:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001aea5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_001aea60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000024cu, 0, 0);
    }
L_001aea64:;
    {
        cpu->r[14] = 0x001aea68u; imp_memcpy(cpu); /* memcpy */
    }
L_001aea68:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001aea6c:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_001aea70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aea74:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001aea78:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001aea7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001aea80:;
    {
        cpu->r[14] = 0x001aea84u; imp_memcpy(cpu); /* memcpy */
    }
L_001aea84:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001aea88:;
    {
        cpu->r[1] = 0x00005f54u;
    }
L_001aea8c:;
    {
        cpu->r[0] = rd32(0x001aea94u + + 0xb4u);
    }
L_001aea90:;
    {
        cpu->r[3] = rd32(0x001aea98u + + 0xb4u);
    }
L_001aea94:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001aea98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aea9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001aeaa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aeaa8u, cpu->r[3], 0, 0);
    }
L_001aeaa4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001aeaa8:;
    {
        wr32(cpu->r[5] + + 0x8e8u, cpu->r[3]);
    }
L_001aeaac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000675fu;
        }
    }
L_001aeab0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000675eu;
        }
    }
L_001aeab4:;
    {
        wr32(cpu->r[5] + + 0x8ecu, cpu->r[0]);
    }
L_001aeab8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001aeabc:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
        }
    }
L_001aeac0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000675eu;
        }
    }
L_001aeac4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
        }
    }
L_001aeac8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000675fu;
        }
    }
L_001aeacc:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_001aead0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000040fu;
        }
    }
L_001aead4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_001aead8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000410u;
        }
    }
L_001aeadc:;
    {
        wr32(cpu->r[5] + + 0x8e0u, cpu->r[3]);
    }
L_001aeae0:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001aeae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001aeae8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001aeaec:;
    {
        wr32(cpu->r[5] + + 0x8d8u, cpu->r[1]);
    }
L_001aeaf0:;
    {
        cpu->r[1] = 0x00000413u;
    }
L_001aeaf4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aeaf8:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[1]);
    }
L_001aeafc:;
    {
        cpu->r[1] = 0x00000412u;
    }
L_001aeb00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001aeb04:;
    {
        wr32(cpu->r[5] + + 0x8d4u, cpu->r[12]);
    }
L_001aeb08:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[1]);
    }
L_001aeb0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aeb38;
        }
    }
L_001aeb10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001aeb14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aeb18u)) return;
    }
L_001aeb18:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_001aeb1c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001aeb20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x000019c0u, 0, 0);
    }
L_001aeb24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e000u, 0, 0);
    }
L_001aeb28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_001aeb2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001aeb30:;
    {
        cpu->r[14] = 0x001aeb34u; imp_memcpy(cpu); /* memcpy */
    }
L_001aeb34:;
    {
        goto L_001aea4c;
    }
L_001aeb38:;
    {
        cpu->r[14] = 0x001aeb3cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001aeb3c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 4, (cpu->r[10] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001aeb40:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001aeb44:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001aeb48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 12u, &shc); cpu->r[0] = v;
        }
    }
L_001aeb4c:;
    {
        if (cond_test(cpu, 1)) {
        guest_unimplemented(cpu, 0x001aeb4cu); return;
        }
    }
}

/* _ZN23GS_MultiplayerMenuLocalC1Eb @ 001aeb50 (arm) */
void fn_001aeb50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aeb50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aeb54:;
    {
        cpu->r[4] = rd32(0x001aeb5cu + + 0x38u);
    }
L_001aeb58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aeb5c:;
    {
        cpu->r[14] = 0x001aeb60u; fn_001add48(cpu);
    }
L_001aeb60:;
    {
        cpu->r[2] = rd32(0x001aeb68u + + 0x30u);
    }
L_001aeb64:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aeb6cu, cpu->r[4], 0, 0);
    }
L_001aeb68:;
    {
        cpu->r[3] = rd32(0x001aeb70u + + 0x2cu);
    }
L_001aeb6c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aeb70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aeb74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aeb78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aeb7c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001aeb80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aeb84:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aeb88:;
    {
        cpu->r[3] = 0x00006785u;
    }
L_001aeb8c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001aeb90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aeb94u)) return;
    }
}

/* _ZN23GS_MultiplayerMenuLocalC2Eb @ 001aeba0 (arm) */
void fn_001aeba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aeba0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aeba4:;
    {
        cpu->r[4] = rd32(0x001aebacu + + 0x38u);
    }
L_001aeba8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aebac:;
    {
        cpu->r[14] = 0x001aebb0u; fn_001add48(cpu);
    }
L_001aebb0:;
    {
        cpu->r[2] = rd32(0x001aebb8u + + 0x30u);
    }
L_001aebb4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aebbcu, cpu->r[4], 0, 0);
    }
L_001aebb8:;
    {
        cpu->r[3] = rd32(0x001aebc0u + + 0x2cu);
    }
L_001aebbc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aebc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aebc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aebc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aebcc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001aebd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aebd4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aebd8:;
    {
        cpu->r[3] = 0x00006785u;
    }
L_001aebdc:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001aebe0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aebe4u)) return;
    }
}

/* _ZN23GS_MultiplayerMenuLocalD0Ev @ 001aebf0 (arm) */
void fn_001aebf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aebf0:;
    {
        cpu->r[3] = rd32(0x001aebf8u + + 0x2cu);
    }
L_001aebf4:;
    {
        cpu->r[2] = rd32(0x001aebfcu + + 0x2cu);
    }
L_001aebf8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aec00u, cpu->r[3], 0, 0);
    }
L_001aebfc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aec00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aec04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aec08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aec0c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aec10:;
    {
        cpu->r[14] = 0x001aec14u; fn_000ec21c(cpu);
    }
L_001aec14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aec18:;
    {
        cpu->r[14] = 0x001aec1cu; fn_0018ba20(cpu);
    }
L_001aec1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aec20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aec24u)) return;
    }
}

/* _ZN23GS_PushNotificationList17ApplyMenuSettingsEv @ 001aec2c (arm) */
void fn_001aec2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aec2c:;
    {
        cpu->r[3] = rd32(0x001aec34u + + 0x34u);
    }
L_001aec30:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001aec34:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_001aec38:;
    {
        cpu->r[1] = rd32(0x001aec40u + + 0x2cu);
    }
L_001aec3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aec44u, cpu->r[3], 0, 0);
    }
L_001aec40:;
    {
        cpu->r[2] = rd32(0x001aec48u + + 0x28u);
    }
L_001aec44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aec48:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aec50u, cpu->r[2], 0, 0);
    }
L_001aec4c:;
    {
        cpu->r[1] = 0x0000041au;
    }
L_001aec50:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001aec54:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_001aec58:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aec5c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_001aec60:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001aec64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_PushNotificationList8DoActionEii @ 001aec74 (arm) */
void fn_001aec74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aec74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aec78:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x94u);
    }
L_001aec7c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_001aec80:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001aec84:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aec88u)) return;
        }
    }
L_001aec88:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001aec8c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001aec90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aecd4;
        }
    }
L_001aec94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001aec98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001aec9c:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aeca0u)) return;
        }
    }
L_001aeca0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x950u);
    }
L_001aeca4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x954u);
    }
L_001aeca8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x200u);
    }
L_001aecac:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001aecb0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001aecb4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001aecb8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
        }
    }
L_001aecbc:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
        }
    }
L_001aecc0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001aecc4:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_001aecc8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001aeccc:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_001aecd0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aecd4u)) return;
    }
L_001aecd4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001aecd8:;
    {
        cpu->r[14] = 0x001aece0u;
    }
L_001aecdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aece0u)) return;
    }
L_001aece0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aece4u)) return;
    }
}

/* init_array_80 @ 001aece4 (arm) */
void fn_001aece4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aece4:;
    {
        cpu->r[3] = rd32(0x001aececu + + 0x44u);
    }
L_001aece8:;
    {
        cpu->r[1] = rd32(0x001aecf0u + + 0x44u);
    }
L_001aecec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aecf4u, cpu->r[3], 0, 0);
    }
L_001aecf0:;
    {
        cpu->r[2] = rd32(0x001aecf8u + + 0x40u);
    }
L_001aecf4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aecf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aed00u, cpu->r[2], 0, 0);
    }
L_001aecfc:;
    {
        cpu->r[1] = rd32(0x001aed04u + + 0x38u);
    }
L_001aed00:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001aed04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aed08:;
    {
        cpu->r[3] = rd32(0x001aed10u + + 0x30u);
    }
L_001aed0c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001aed10:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001aed14:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aed1cu, cpu->r[3], 0, 0);
    }
L_001aed18:;
    {
        wr32(cpu->r[3] + + 0xe4u, cpu->r[0]);
    }
L_001aed1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000032u, 1, 0);
    }
L_001aed20:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001aed24:;
    {
        wr32(cpu->r[3] + + 0xe8u, cpu->r[0]);
    }
L_001aed28:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001aed2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_PushNotificationListD1Ev @ 001aed44 (arm) */
void fn_001aed44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aed44:;
    {
        cpu->r[3] = rd32(0x001aed4cu + + 0x24u);
    }
L_001aed48:;
    {
        cpu->r[2] = rd32(0x001aed50u + + 0x24u);
    }
L_001aed4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aed54u, cpu->r[3], 0, 0);
    }
L_001aed50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aed54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aed58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aed5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aed60:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aed64:;
    {
        cpu->r[14] = 0x001aed68u; fn_000ec21c(cpu);
    }
L_001aed68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aed6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aed70u)) return;
    }
}

/* _ZN23GS_PushNotificationList6UpdateEv @ 001aed78 (arm) */
void fn_001aed78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aed78:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_001aed7c:;
    {
        cpu->r[3] = rd32(0x001aed84u + + 0xc4u);
    }
L_001aed80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aed84:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x200u);
    }
L_001aed88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aed90u, cpu->r[3], 0, 0);
    }
L_001aed8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aed90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001aed94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001aed98:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
        }
    }
L_001aed9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aedb0;
        }
    }
L_001aeda0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x958u);
    }
L_001aeda4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001aeda8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001aedac:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
        }
    }
L_001aedb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001aedb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001aedb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aedd4;
        }
    }
L_001aedbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001aedc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aede0;
        }
    }
L_001aedc4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001aedc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001aedcc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001aedd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aedd4u)) return;
    }
L_001aedd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aedd8:;
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
L_001aeddc:;
    {
        return fn_00128a5c(cpu);
    }
L_001aede0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001aede4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001aede8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_001aedec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001aee1c;
        }
    }
L_001aedf0:;
    {
        cpu->r[1] = 0x000004b9u;
    }
L_001aedf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001aedf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aedfcu)) return;
        }
    }
L_001aedfc:;
    {
        cpu->r[2] = rd32(0x001aee04u + + 0x48u);
    }
L_001aee00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aee04:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001aee08:;
    {
        cpu->r[14] = 0x001aee0cu; fn_00096928(cpu);
    }
L_001aee0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aee10:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aee14:;
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
L_001aee18:;
    {
        return fn_000f34e8(cpu);
    }
L_001aee1c:;
    {
        cpu->r[2] = rd32(0x001aee24u + + 0x28u);
    }
L_001aee20:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_001aee24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aee28:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001aee2c:;
    {
        cpu->r[14] = 0x001aee30u; fn_0018ba6c(cpu);
    }
L_001aee30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aee34:;
    {
        cpu->r[14] = 0x001aee38u; fn_001afc34(cpu);
    }
L_001aee38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aee3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aee40:;
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
L_001aee44:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN23GS_PushNotificationListC1Ev @ 001aee50 (arm) */
void fn_001aee50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aee50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aee54:;
    {
        cpu->r[5] = rd32(0x001aee5cu + + 0x50u);
    }
L_001aee58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aee5c:;
    {
        cpu->r[14] = 0x001aee60u; fn_0010ffa8(cpu);
    }
L_001aee60:;
    {
        cpu->r[2] = rd32(0x001aee68u + + 0x48u);
    }
L_001aee64:;
    {
        cpu->r[5] = add_flags(cpu, 0x001aee6cu, cpu->r[5], 0, 0);
    }
L_001aee68:;
    {
        cpu->r[3] = rd32(0x001aee70u + + 0x44u);
    }
L_001aee6c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001aee70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aee74:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aee78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aee7c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001aee80:;
    {
        cpu->r[14] = 0x001aee84u; fn_0009992c(cpu);
    }
L_001aee84:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001aee88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001aee8c:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001aee90:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001aee94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aee98:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001aee9c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001aeea0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_001aeea4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001aeea8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aeeacu)) return;
    }
}

/* _ZN23GS_PushNotificationListC2Ev @ 001aeeb8 (arm) */
void fn_001aeeb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aeeb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aeebc:;
    {
        cpu->r[5] = rd32(0x001aeec4u + + 0x50u);
    }
L_001aeec0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aeec4:;
    {
        cpu->r[14] = 0x001aeec8u; fn_0010ffa8(cpu);
    }
L_001aeec8:;
    {
        cpu->r[2] = rd32(0x001aeed0u + + 0x48u);
    }
L_001aeecc:;
    {
        cpu->r[5] = add_flags(cpu, 0x001aeed4u, cpu->r[5], 0, 0);
    }
L_001aeed0:;
    {
        cpu->r[3] = rd32(0x001aeed8u + + 0x44u);
    }
L_001aeed4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001aeed8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aeedc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aeee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aeee4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001aeee8:;
    {
        cpu->r[14] = 0x001aeeecu; fn_0009992c(cpu);
    }
L_001aeeec:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001aeef0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001aeef4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001aeef8:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001aeefc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aef00:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001aef04:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001aef08:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_001aef0c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001aef10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aef14u)) return;
    }
}

/* _ZN23GS_PushNotificationListD0Ev @ 001aef20 (arm) */
void fn_001aef20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aef20:;
    {
        cpu->r[3] = rd32(0x001aef28u + + 0x2cu);
    }
L_001aef24:;
    {
        cpu->r[2] = rd32(0x001aef2cu + + 0x2cu);
    }
L_001aef28:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aef30u, cpu->r[3], 0, 0);
    }
L_001aef2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aef30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aef34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aef38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aef3c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aef40:;
    {
        cpu->r[14] = 0x001aef44u; fn_000ec21c(cpu);
    }
L_001aef44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aef48:;
    {
        cpu->r[14] = 0x001aef4cu; fn_0018ba20(cpu);
    }
L_001aef4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aef50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aef54u)) return;
    }
}

/* _ZN23GS_PushNotificationList6ResumeEv @ 001aef5c (arm) */
void fn_001aef5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aef5c:;
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
L_001aef60:;
    {
        cpu->r[4] = rd32(0x001aef68u + + 0x1b0u);
    }
L_001aef64:;
    {
        cpu->r[3] = rd32(0x001aef6cu + + 0x1b0u);
    }
L_001aef68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001aef6c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aef74u, cpu->r[4], 0, 0);
    }
L_001aef70:;
    {
        cpu->r[7] = rd32(0x001aef78u + + 0x1a8u);
    }
L_001aef74:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001aef78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aef7c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001aef80:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001aef84:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001aef88:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[3]);
    }
L_001aef8c:;
    {
        cpu->r[14] = 0x001aef90u; fn_001142a0(cpu);
    }
L_001aef90:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001aef94:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001aef98:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001aef9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af098;
        }
    }
L_001aefa0:;
    {
        cpu->r[5] = rd32(0x001aefa8u + + 0x17cu);
    }
L_001aefa4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aefa8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aefac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001aefb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001aefb4:;
    {
        cpu->r[14] = 0x001aefb8u; fn_0018aa44(cpu);
    }
L_001aefb8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aefbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af090;
        }
    }
L_001aefc0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001aefc4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001aefc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001aefcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af0dc;
        }
    }
L_001aefd0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001aefd4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_001aefd8:;
    {
        cpu->r[14] = 0x001aefdcu; fn_00096a08(cpu);
    }
L_001aefdc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001aefe0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aefe4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001aefe8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001aefec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aeff0:;
    {
        cpu->r[14] = 0x001aeff4u; fn_0018aa44(cpu);
    }
L_001aeff4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aeff8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001aeffc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001af000:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001af004:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001af008:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001af00c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001af010:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001af014:;
    {
        cpu->r[5] = 0x00000032u;
    }
L_001af018:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001af01c:;
    {
        cpu->r[14] = 0x001af020u; fn_000a8a2c(cpu);
    }
L_001af020:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001af024:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001af028:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001af02c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af030:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001af034:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_001af038:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_001af03c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001af040:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001af044:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001af048:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_001af04c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001af050:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001af054:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001af058:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001af05c:;
    {
        cpu->r[14] = 0x001af060u; fn_000a8a2c(cpu);
    }
L_001af060:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8e8u);
    }
L_001af064:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001af068:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001af06c:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001af070:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
    }
L_001af074:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_001af078:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001af07c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001af080:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001af084:;
    {
        cpu->r[14] = 0x001af088u; fn_000ec75c(cpu);
    }
L_001af088:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000a8u, 1, 1);
    }
L_001af08c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af060;
        }
    }
L_001af090:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001af094:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001af098u)) return;
    }
L_001af098:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af09c:;
    {
        cpu->r[14] = 0x001af0a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001af0a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aefa0;
        }
    }
L_001af0a8:;
    {
        cpu->r[5] = rd32(0x001af0b0u + + 0x74u);
    }
L_001af0ac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001af0b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af0b4:;
    {
        cpu->r[14] = 0x001af0b8u; fn_0018aa20(cpu);
    }
L_001af0b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af0bc:;
    {
        cpu->r[14] = 0x001af0c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001af0c0:;
    {
        cpu->r[3] = rd32(0x001af0c8u + + 0x60u);
    }
L_001af0c4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af0c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001af0cc:;
    {
        cpu->r[3] = rd32(0x001af0d4u + + 0x58u);
    }
L_001af0d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001af0d4:;
    {
        cpu->r[14] = 0x001af0d8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001af0d8:;
    {
        goto L_001aefa4;
    }
L_001af0dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001af0e0:;
    {
        cpu->r[14] = 0x001af0e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001af0e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af0e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aefd0;
        }
    }
L_001af0ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af0f0:;
    {
        cpu->r[14] = 0x001af0f4u; fn_0018aa20(cpu);
    }
L_001af0f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001af0f8:;
    {
        cpu->r[14] = 0x001af0fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001af0fc:;
    {
        cpu->r[3] = rd32(0x001af104u + + 0x24u);
    }
L_001af100:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af104:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001af108:;
    {
        cpu->r[3] = rd32(0x001af110u + + 0x1cu);
    }
L_001af10c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001af110:;
    {
        cpu->r[14] = 0x001af114u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001af114:;
    {
        goto L_001aefd0;
    }
}

/* _ZN23GS_PushNotificationList6RenderEv @ 001af130 (arm) */
void fn_001af130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af130:;
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
L_001af134:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001af138:;
    {
        cpu->r[7] = rd32(0x001af140u + + 0x2b4u);
    }
L_001af13c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001af140:;
    {
        cpu->r[8] = rd32(0x001af148u + + 0x2b0u);
    }
L_001af144:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001af148:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001af14c:;
    {
        cpu->r[7] = add_flags(cpu, 0x001af154u, cpu->r[7], 0, 0);
    }
L_001af150:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001af154:;
    {
        cpu->r[14] = 0x001af158u; fn_00113570(cpu);
    }
L_001af158:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001af15c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af160:;
    {
        cpu->r[14] = 0x001af168u;
    }
L_001af164:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af168u)) return;
    }
L_001af168:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001af16c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001af170:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001af174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af370;
        }
    }
L_001af178:;
    {
        cpu->r[5] = rd32(0x001af180u + + 0x27cu);
    }
L_001af17c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001af180:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af184:;
    {
        cpu->r[14] = 0x001af188u; fn_00096a08(cpu);
    }
L_001af188:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_001af18c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001af190:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001af194:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af198:;
    {
        cpu->r[14] = 0x001af19cu; fn_0018aa44(cpu);
    }
L_001af19c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001af1a0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001af1a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001af1a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001af1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af3b4;
        }
    }
L_001af1b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001af1b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_001af1b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001af1bc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001af1c0:;
    {
        cpu->r[14] = 0x001af1c4u; fn_0018aa44(cpu);
    }
L_001af1c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_001af1c8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001af1cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001af1d0:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[2]);
    }
L_001af1d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001af1d8:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_001af1dc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001af1e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af1e4:;
    {
        cpu->r[14] = 0x001af1e8u; fn_000ec44c(cpu);
    }
L_001af1e8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001af1ec:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001af1f0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001af1f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001af1fcu + + 0x1f4u);
    }
L_001af1f8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0]);
    }
L_001af1fc:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_001af200:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001af204:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af208:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001af20c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001af210:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001af214:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001af218:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001af21c:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_001af220:;
    {
        cpu->r[14] = 0x001af224u; fn_000a89b8(cpu);
    }
L_001af224:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001af228:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001af22c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001af230:;
    {
        cpu->r[0] = 0x0000062eu;
    }
L_001af234:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001af238:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_001af23c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 1, 1u, &shc), 0, 0);
    }
L_001af240:;
    {
        cpu->r[14] = 0x001af244u; fn_000aeb58(cpu);
    }
L_001af244:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001af248:;
    {
        cpu->r[12] = 0x00000021u;
    }
L_001af24c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001af250:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001af254:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_001af258:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001af25c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001af260:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001af264:;
    {
        cpu->r[14] = 0x001af268u; fn_000ad19c(cpu);
    }
L_001af268:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af26c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001af270:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001af274:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001af278:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001af27c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001af280:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001af284:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001af288:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001af28c:;
    {
        cpu->r[14] = 0x001af290u; fn_000a89b8(cpu);
    }
L_001af290:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001af294:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af298:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001af29c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001af2a0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001af2a4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001af2a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001af2ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001af2b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001af2b4:;
    {
        cpu->r[14] = 0x001af2b8u; fn_000a89b8(cpu);
    }
L_001af2b8:;
    {
        cpu->r[3] = rd32(0x001af2c0u + + 0x140u);
    }
L_001af2bc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001af2c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001af2c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001af2c8:;
    {
        cpu->r[14] = 0x001af2ccu; fn_000962d0(cpu);
    }
L_001af2cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_001af2d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000bbbbu;
        }
    }
L_001af2d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0xff000000u;
        }
    }
L_001af2d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
        }
    }
L_001af2dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffbbu << 16);
        }
    }
L_001af2e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
        }
    }
L_001af2e4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x48u, cpu->r[3]);
        }
    }
L_001af2e8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[2]);
        }
    }
L_001af2ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x48u, cpu->r[2]);
        }
    }
L_001af2f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
        }
    }
L_001af2f4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af2f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001af2fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x954u);
    }
L_001af300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af304:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001af308:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x200u);
    }
L_001af30c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001af310:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001af314:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001af318:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = 0x00800000u;
        }
    }
L_001af31c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001af320:;
    {
        cpu->r[14] = 0x001af328u;
    }
L_001af324:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af328u)) return;
    }
L_001af328:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_001af32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af2f4;
        }
    }
L_001af330:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_001af334:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001af338:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[2]);
    }
L_001af33c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_001af340:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_001af344:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001af348:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001af364;
        }
    }
L_001af34c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af350:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001af354:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001af358:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001af35c:;
    {
        cpu->r[14] = 0x001af364u;
    }
L_001af360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af364u)) return;
    }
L_001af364:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001af368:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001af36c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001af370u)) return;
    }
L_001af370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001af374:;
    {
        cpu->r[14] = 0x001af378u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001af378:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af37c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af178;
        }
    }
L_001af380:;
    {
        cpu->r[5] = rd32(0x001af388u + + 0x74u);
    }
L_001af384:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_001af388:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af38c:;
    {
        cpu->r[14] = 0x001af390u; fn_0018aa20(cpu);
    }
L_001af390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001af394:;
    {
        cpu->r[14] = 0x001af398u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001af398:;
    {
        cpu->r[3] = rd32(0x001af3a0u + + 0x64u);
    }
L_001af39c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af3a0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001af3a4:;
    {
        cpu->r[3] = rd32(0x001af3acu + + 0x5cu);
    }
L_001af3a8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001af3ac:;
    {
        cpu->r[14] = 0x001af3b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001af3b0:;
    {
        goto L_001af17c;
    }
L_001af3b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af3b8:;
    {
        cpu->r[14] = 0x001af3bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001af3bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af1b0;
        }
    }
L_001af3c4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af3c8:;
    {
        cpu->r[14] = 0x001af3ccu; fn_0018aa20(cpu);
    }
L_001af3cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001af3d0:;
    {
        cpu->r[14] = 0x001af3d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001af3d4:;
    {
        cpu->r[3] = rd32(0x001af3dcu + + 0x28u);
    }
L_001af3d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001af3dc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001af3e0:;
    {
        cpu->r[3] = rd32(0x001af3e8u + + 0x20u);
    }
L_001af3e4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001af3e8:;
    {
        cpu->r[14] = 0x001af3ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001af3ec:;
    {
        goto L_001af1b0;
    }
}

/* _ZN20GS_ServerWaitingRoom8isKindOfEi @ 001af40c (arm) */
void fn_001af40c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af40c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000050u, 1, 1);
    }
L_001af410:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001af414:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001af418:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ServerWaitingRoom17ApplyMenuSettingsEv @ 001af41c (arm) */
void fn_001af41c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af41c:;
    {
        cpu->r[3] = rd32(0x001af424u + + 0x30u);
    }
L_001af420:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001af424:;
    {
        cpu->r[12] = rd32(0x001af42cu + + 0x2cu);
    }
L_001af428:;
    {
        cpu->r[3] = add_flags(cpu, 0x001af430u, cpu->r[3], 0, 0);
    }
L_001af42c:;
    {
        cpu->r[2] = rd32(0x001af434u + + 0x28u);
    }
L_001af430:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001af434:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001af438:;
    {
        cpu->r[2] = add_flags(cpu, 0x001af440u, cpu->r[2], 0, 0);
    }
L_001af43c:;
    {
        cpu->r[12] = 0x0000062fu;
    }
L_001af440:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001af444:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[12]);
    }
L_001af448:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_001af44c:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_001af450:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ServerWaitingRoom8DoActionEii @ 001af460 (arm) */
void fn_001af460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af460:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_001af464:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001af468:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001af46c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001af470:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001af474u)) return;
        }
    }
L_001af474:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001af478:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001af47c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[1]);
        }
    }
L_001af480:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001af484:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
        }
    }
L_001af488:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001af48cu)) return;
        }
    }
L_001af48c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001af490:;
    {
        cpu->r[14] = 0x001af498u;
    }
L_001af494:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af498u)) return;
    }
L_001af498:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001af49cu)) return;
    }
}

/* init_array_81 @ 001af49c (arm) */
void fn_001af49c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af49c:;
    {
        cpu->r[3] = rd32(0x001af4a4u + + 0x44u);
    }
L_001af4a0:;
    {
        cpu->r[1] = rd32(0x001af4a8u + + 0x44u);
    }
L_001af4a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001af4acu, cpu->r[3], 0, 0);
    }
L_001af4a8:;
    {
        cpu->r[2] = rd32(0x001af4b0u + + 0x40u);
    }
L_001af4ac:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001af4b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001af4b8u, cpu->r[2], 0, 0);
    }
L_001af4b4:;
    {
        cpu->r[1] = rd32(0x001af4bcu + + 0x38u);
    }
L_001af4b8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001af4bc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001af4c0:;
    {
        cpu->r[3] = rd32(0x001af4c8u + + 0x30u);
    }
L_001af4c4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001af4c8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001af4cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001af4d4u, cpu->r[3], 0, 0);
    }
L_001af4d0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001af4d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_001af4d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001af4dc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001af4e0:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001af4e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ServerWaitingRoom6ResumeEv @ 001af4fc (arm) */
void fn_001af4fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af4fc:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN20GS_ServerWaitingRoom25MP_ServerSendStartLoadingEi @ 001af500 (arm) */
void fn_001af500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af500:;
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
L_001af504:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001af508:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001af50c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001af510:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001af514:;
    {
        cpu->r[14] = 0x001af518u; fn_0018ba6c(cpu);
    }
L_001af518:;
    {
        cpu->r[1] = 0x00000336u;
    }
L_001af51c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001af520:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001af524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001af528:;
    {
        cpu->r[14] = 0x001af52cu; fn_001b374c(cpu);
    }
L_001af52c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af530:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001af534:;
    {
        cpu->r[14] = 0x001af538u; fn_001b34f4(cpu);
    }
L_001af538:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af53c:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[11]);
    }
L_001af540:;
    {
        cpu->r[14] = 0x001af544u; fn_001b34f4(cpu);
    }
L_001af544:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af548:;
    {
        cpu->r[3] = 0x00005fbcu;
    }
L_001af54c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af550:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001af554:;
    {
        cpu->r[14] = 0x001af558u; fn_001b3528(cpu);
    }
L_001af558:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001af55c:;
    {
        cpu->r[14] = 0x001af560u; imp__Znaj(cpu); /* _Znaj */
    }
L_001af560:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001af564:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001af568:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001af56c:;
    {
        cpu->r[14] = 0x001af570u; imp_memset(cpu); /* memset */
    }
L_001af570:;
    {
        cpu->r[0] = 0x00000031u;
    }
L_001af574:;
    {
        cpu->r[14] = 0x001af578u; imp__Znaj(cpu); /* _Znaj */
    }
L_001af578:;
    {
        cpu->r[3] = rd32(0x001af580u + + 0x184u);
    }
L_001af57c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001af584u, cpu->r[3], 0, 0);
    }
L_001af580:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001af584:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001af588:;
    {
        goto L_001af610;
    }
L_001af58c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af590:;
    {
        cpu->r[3] = 0x00000066u;
    }
L_001af594:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001af598:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_001af59c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_001af5a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000f4u, 0, 0);
    }
L_001af5a4:;
    {
        cpu->r[14] = 0x001af5a8u; fn_000ae4b0(cpu);
    }
L_001af5a8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001af5ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001af5b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af5b4:;
    {
        cpu->r[14] = 0x001af5b8u; fn_001b3694(cpu);
    }
L_001af5b8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af5bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af5c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001af5c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_001af5c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001af5cc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x5u);
    }
L_001af5d0:;
    {
        cpu->r[14] = 0x001af5d4u; fn_001b34f4(cpu);
    }
L_001af5d4:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af5d8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001af5dc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001af5e0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_001af5e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_001af5e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001af5ec:;
    {
        cpu->r[14] = 0x001af5f0u; fn_0009320c(cpu);
    }
L_001af5f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001af5f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af5f8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001af5fc:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_001af600:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001af604:;
    {
        cpu->r[14] = 0x001af608u; fn_001b3694(cpu);
    }
L_001af608:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001af60c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af690;
        }
    }
L_001af610:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_001af614:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001af618:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001af61c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001af620:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001af624:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001af58c;
        }
    }
L_001af628:;
    {
        cpu->r[14] = 0x001af62cu; imp_sprintf(cpu); /* sprintf */
    }
L_001af62c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001af630:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001af634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af638:;
    {
        cpu->r[14] = 0x001af63cu; fn_001b3694(cpu);
    }
L_001af63c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af640:;
    {
        cpu->r[3] = 0x00000066u;
    }
L_001af644:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001af648:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_001af64c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_001af650:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001af654:;
    {
        cpu->r[14] = 0x001af658u; fn_000ae3d0(cpu);
    }
L_001af658:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af65c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af660:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001af664:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001680u, 0, 0);
    }
L_001af668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_001af66c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x5u);
    }
L_001af670:;
    {
        cpu->r[14] = 0x001af674u; fn_001b34f4(cpu);
    }
L_001af674:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_001af678:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001af67c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001af680:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7] + cpu->r[3]; cpu->r[7] = v;
    }
L_001af684:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00001680u, 0, 0);
    }
L_001af688:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002du, 0, 0);
    }
L_001af68c:;
    {
        goto L_001af5ec;
    }
L_001af690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af694:;
    {
        cpu->r[14] = 0x001af698u; fn_001b360c(cpu);
    }
L_001af698:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x950u);
    }
L_001af69c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af6a0:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001af6a4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001af6a8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x24u);
    }
L_001af6ac:;
    {
        cpu->r[14] = 0x001af6b0u; fn_001b3618(cpu);
    }
L_001af6b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001af6b4:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_001af6b8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001af6bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001af6c0:;
    {
        cpu->r[14] = 0x001af6c4u; guest_call(cpu, cpu->r[6]);
    }
L_001af6c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af6c8:;
    {
        cpu->r[14] = 0x001af6ccu; fn_001b3618(cpu);
    }
L_001af6cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001af6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af6dc;
        }
    }
L_001af6d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001af6d8:;
    {
        cpu->r[14] = 0x001af6dcu; fn_0018ba20(cpu);
    }
L_001af6dc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001af6e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af6ec;
        }
    }
L_001af6e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001af6e8:;
    {
        cpu->r[14] = 0x001af6ecu; fn_0018ba20(cpu);
    }
L_001af6ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af6f0:;
    {
        cpu->r[14] = 0x001af6f4u; fn_001b36e4(cpu);
    }
L_001af6f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af6f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001af6fc:;
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
L_001af700:;
    {
        return fn_0018ba20(cpu);
    }
}

/* _ZN20GS_ServerWaitingRoom6UpdateEv @ 001af708 (arm) */
void fn_001af708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001af708:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x950u);
    }
L_001af70c:;
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
L_001af710:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001af714:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001af718:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001af71c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001af720:;
    {
        cpu->r[14] = 0x001af728u;
    }
L_001af724:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af728u)) return;
    }
L_001af728:;
    {
        cpu->r[5] = rd32(0x001af730u + + 0x3f0u);
    }
L_001af72c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001af734u, cpu->r[5], 0, 0);
    }
L_001af730:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af880;
        }
    }
L_001af738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af73c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x208u);
    }
L_001af740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001af744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af818;
        }
    }
L_001af748:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001af74c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af750:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x88u);
    }
L_001af754:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001af758:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001af75c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001af760:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001af764:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001af768:;
    {
        cpu->r[12] = 0x10000000u;
    }
L_001af76c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001af770:;
    {
        cpu->r[14] = 0x001af778u;
    }
L_001af774:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af778u)) return;
    }
L_001af778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af77c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_001af780:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x208u);
    }
L_001af784:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001af788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af7ec;
        }
    }
L_001af78c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_001af790:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[6]);
    }
L_001af794:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001af7ec;
        }
    }
L_001af798:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001af79c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_001af7a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af7ac;
        }
    }
L_001af7a4:;
    {
        goto L_001af7e4;
    }
L_001af7a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af7ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001af7b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001af7b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001af7b8:;
    {
        cpu->r[14] = 0x001af7c0u;
    }
L_001af7bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af7c0u)) return;
    }
L_001af7c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af7c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001af7c8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001af7cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001af7d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001af7d4:;
    {
        cpu->r[14] = 0x001af7dcu;
    }
L_001af7d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af7dcu)) return;
    }
L_001af7dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_001af7e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af7a8;
        }
    }
L_001af7e4:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001af7e8:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001af7ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001af7f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001af7f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af8ac;
        }
    }
L_001af7f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001af7fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af850;
        }
    }
L_001af800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001af804:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af878;
        }
    }
L_001af808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af80c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001af810:;
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
L_001af814:;
    {
        return fn_00114a58(cpu);
    }
L_001af818:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001af81c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af820:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_001af824:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001af828:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001af82c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001af830:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001af834:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001af838:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_001af83c:;
    {
        uint32_t v = cpu->r[12] & ~ 0x10000000u; cpu->r[12] = v;
    }
L_001af840:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001af844:;
    {
        cpu->r[14] = 0x001af84cu;
    }
L_001af848:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af84cu)) return;
    }
L_001af84c:;
    {
        goto L_001af778;
    }
L_001af850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af854:;
    {
        cpu->r[14] = 0x001af858u; fn_0010da28(cpu);
    }
L_001af858:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001af85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af878;
        }
    }
L_001af860:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001af864:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001af868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af8ec;
        }
    }
L_001af86c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001af870:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001af874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af8c8;
        }
    }
L_001af878:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001af87c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001af880u)) return;
    }
L_001af880:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001af884:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af888:;
    {
        cpu->r[14] = 0x001af88cu; fn_0018ba6c(cpu);
    }
L_001af88c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001af890:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001af894:;
    {
        cpu->r[14] = 0x001af898u; fn_001aaf48(cpu);
    }
L_001af898:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001af89c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001af8a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001af8a4:;
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
L_001af8a8:;
    {
        return fn_000f361c(cpu);
    }
L_001af8ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af8b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001af8b4:;
    {
        cpu->r[14] = 0x001af8b8u; fn_000eb59c(cpu);
    }
L_001af8b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001af8bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001af8c0:;
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
L_001af8c4:;
    {
        return fn_00128a5c(cpu);
    }
L_001af8c8:;
    {
        cpu->r[3] = rd32(0x001af8d0u + + 0x254u);
    }
L_001af8cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001af8d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001af8d4:;
    {
        cpu->r[14] = 0x001af8d8u; fn_00096928(cpu);
    }
L_001af8d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af8dc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001af8e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001af8e4:;
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
L_001af8e8:;
    {
        return fn_000f34e8(cpu);
    }
L_001af8ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af8f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001af8f4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001af8f8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001af8fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001af900:;
    {
        cpu->r[14] = 0x001af904u; fn_000fd224(cpu);
    }
L_001af904:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001af908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001afafc;
        }
    }
L_001af90c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af910:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x208u);
    }
L_001af914:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001af918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001af880;
        }
    }
L_001af91c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001af920:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001af924:;
    {
        cpu->r[14] = 0x001af92cu;
    }
L_001af928:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af92cu)) return;
    }
L_001af92c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af930:;
    {
        cpu->r[14] = 0x001af934u; fn_001b28c4(cpu);
    }
L_001af934:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af938:;
    {
        cpu->r[11] = 0x000063e8u;
    }
L_001af93c:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_001af940:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001af944:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001af948:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_001af94c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001af950:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_001af954:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001af958:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001af95c:;
    {
        cpu->r[14] = 0x001af964u;
    }
L_001af960:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001af964u)) return;
    }
L_001af964:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001af968:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00006300u, 0, 0);
    }
L_001af96c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001af970:;
    {
        cpu->r[14] = 0x001af974u; fn_000ae3d0(cpu);
    }
L_001af974:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001af978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001af9fc;
        }
    }
L_001af97c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001af980:;
    {
        cpu->r[9] = 0x00000066u;
    }
L_001af984:;
    {
        cpu->r[10] = 0x00000032u;
    }
L_001af988:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af98c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001af990:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af994:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_001af998:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_001af99c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001af9a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_001af9a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001af9a8:;
    {
        cpu->r[14] = 0x001af9acu; fn_000ae3d0(cpu);
    }
L_001af9ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
    }
L_001af9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af9b4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001af9b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001af9bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_001af9c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001af9c4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x104u);
    }
L_001af9c8:;
    {
        wr8(cpu->r[3] + + 0x5u, cpu->r[2]);
    }
L_001af9cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001af9d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001af9d4:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_001af9d8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001af9dc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001af9e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_001af9e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000104u, 0, 0);
    }
L_001af9e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001af9ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001af9f0:;
    {
        cpu->r[14] = 0x001af9f4u; fn_00093230(cpu);
    }
L_001af9f4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001af9f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001af988;
        }
    }
L_001af9fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001afa00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001afa04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001afa3c;
        }
    }
L_001afa08:;
    {
        cpu->r[1] = rd32(0x001afa10u + + 0x118u);
    }
L_001afa0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001afa10:;
    {
        cpu->r[2] = rd32(0x001afa18u + + 0x114u);
    }
L_001afa14:;
    {
        cpu->r[14] = 0x000000fau;
    }
L_001afa18:;
    {
        cpu->r[3] = rd32(0x001afa20u + + 0x110u);
    }
L_001afa1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001afa24u, cpu->r[1], 0, 0);
    }
L_001afa20:;
    {
        cpu->r[12] = rd32(0x001afa28u + + 0x10cu);
    }
L_001afa24:;
    {
        cpu->r[2] = add_flags(cpu, 0x001afa2cu, cpu->r[2], 0, 0);
    }
L_001afa28:;
    {
        cpu->r[3] = add_flags(cpu, 0x001afa30u, cpu->r[3], 0, 0);
    }
L_001afa2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001afa30:;
    {
        cpu->r[12] = add_flags(cpu, 0x001afa38u, cpu->r[12], 0, 0);
    }
L_001afa34:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001afa38:;
    {
        cpu->r[14] = 0x001afa3cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001afa3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001afa40:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001afa44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001afa48:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000008u, cpu->r[3], 1, 0);
    }
L_001afa4c:;
    {
        cpu->r[14] = 0x001afa50u; fn_00097ed0(cpu);
    }
L_001afa50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afa54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001afa58:;
    {
        cpu->r[14] = 0x001afa5cu; fn_001af500(cpu);
    }
L_001afa5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001afa60:;
    {
        cpu->r[2] = 0x00005fa8u;
    }
L_001afa64:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001afa68:;
    {
        cpu->r[2] = rd32(0x001afa70u + + 0xb4u);
    }
L_001afa6c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001afa70:;
    {
        cpu->r[2] = 0x00005facu;
    }
L_001afa74:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001afa78:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001afa7c:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_001afa80:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001afa84:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_001afa88:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001afa8c:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_001afa90:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_001afa94:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_001afa98:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001afa9c:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001afaa0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001afaa4:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_001afaa8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001afaac:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001afab0:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_001afab4:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[6]);
    }
L_001afab8:;
    {
        cpu->r[2] = 0x000063ecu;
    }
L_001afabc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[5]);
    }
L_001afac0:;
    {
        cpu->r[14] = 0x001afac4u; fn_00099968(cpu);
    }
L_001afac4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001afac8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001afacc:;
    {
        cpu->r[14] = 0x001afad0u; fn_000f35e4(cpu);
    }
L_001afad0:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001afad4:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_001afad8:;
    {
        cpu->r[14] = 0x001afadcu; fn_0018ba6c(cpu);
    }
L_001afadc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001afae0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001afae4:;
    {
        cpu->r[14] = 0x001afae8u; fn_000f22d4(cpu);
    }
L_001afae8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001afaec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001afaf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001afaf4:;
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
L_001afaf8:;
    {
        return fn_000f361c(cpu);
    }
L_001afafc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001afb00:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001afb04:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001afb08:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001afb0c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001afb10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001afb14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001afb18:;
    {
        cpu->r[14] = 0x001afb1cu; fn_000fd248(cpu);
    }
L_001afb1c:;
    {
        goto L_001af90c;
    }
}

/* _ZN20GS_ServerWaitingRoomD1Ev @ 001afb38 (arm) */
void fn_001afb38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afb38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001afb3c:;
    {
        cpu->r[4] = rd32(0x001afb44u + + 0x54u);
    }
L_001afb40:;
    {
        cpu->r[2] = rd32(0x001afb48u + + 0x54u);
    }
L_001afb44:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001afb48:;
    {
        cpu->r[4] = add_flags(cpu, 0x001afb50u, cpu->r[4], 0, 0);
    }
L_001afb4c:;
    {
        cpu->r[3] = rd32(0x001afb54u + + 0x4cu);
    }
L_001afb50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001afb54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001afb58:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001afb5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afb60:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001afb64:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_001afb68:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001afb6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001afb70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001afb78;
        }
    }
L_001afb74:;
    {
        cpu->r[14] = 0x001afb78u; fn_00096928(cpu);
    }
L_001afb78:;
    {
        cpu->r[3] = rd32(0x001afb80u + + 0x24u);
    }
L_001afb7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001afb80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001afb84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afb88:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001afb8c:;
    {
        cpu->r[14] = 0x001afb90u; fn_000ec21c(cpu);
    }
L_001afb90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001afb94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001afb98u)) return;
    }
}

/* _ZN20GS_ServerWaitingRoomD0Ev @ 001afba8 (arm) */
void fn_001afba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afba8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001afbac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001afbb0:;
    {
        cpu->r[14] = 0x001afbb4u; fn_001afb38(cpu);
    }
L_001afbb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afbb8:;
    {
        cpu->r[14] = 0x001afbbcu; fn_0018ba20(cpu);
    }
L_001afbbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afbc0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001afbc4u)) return;
    }
}

/* _ZN20GS_ServerWaitingRoomD2Ev @ 001afbc4 (arm) */
void fn_001afbc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afbc4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001afbc8:;
    {
        cpu->r[4] = rd32(0x001afbd0u + + 0x54u);
    }
L_001afbcc:;
    {
        cpu->r[2] = rd32(0x001afbd4u + + 0x54u);
    }
L_001afbd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001afbd4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001afbdcu, cpu->r[4], 0, 0);
    }
L_001afbd8:;
    {
        cpu->r[3] = rd32(0x001afbe0u + + 0x4cu);
    }
L_001afbdc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001afbe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001afbe4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001afbe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afbec:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001afbf0:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_001afbf4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001afbf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001afbfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001afc04;
        }
    }
L_001afc00:;
    {
        cpu->r[14] = 0x001afc04u; fn_00096928(cpu);
    }
L_001afc04:;
    {
        cpu->r[3] = rd32(0x001afc0cu + + 0x24u);
    }
L_001afc08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001afc0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001afc10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afc14:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001afc18:;
    {
        cpu->r[14] = 0x001afc1cu; fn_000ec21c(cpu);
    }
L_001afc1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001afc20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001afc24u)) return;
    }
}

/* _ZN20GS_ServerWaitingRoomC1Ev @ 001afc34 (arm) */
void fn_001afc34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afc34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001afc38:;
    {
        cpu->r[5] = rd32(0x001afc40u + + 0x4cu);
    }
L_001afc3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001afc40:;
    {
        cpu->r[14] = 0x001afc44u; fn_0010ffa8(cpu);
    }
L_001afc44:;
    {
        cpu->r[2] = rd32(0x001afc4cu + + 0x44u);
    }
L_001afc48:;
    {
        cpu->r[5] = add_flags(cpu, 0x001afc50u, cpu->r[5], 0, 0);
    }
L_001afc4c:;
    {
        cpu->r[3] = rd32(0x001afc54u + + 0x40u);
    }
L_001afc50:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001afc54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001afc58:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001afc5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afc60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001afc64:;
    {
        cpu->r[14] = 0x001afc68u; fn_0009b704(cpu);
    }
L_001afc68:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001afc6c:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_001afc70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001afc74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afc78:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001afc7c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001afc80:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001afc84:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_001afc88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001afc8cu)) return;
    }
}

/* _ZN20GS_ServerWaitingRoomC2Ev @ 001afc98 (arm) */
void fn_001afc98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afc98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001afc9c:;
    {
        cpu->r[5] = rd32(0x001afca4u + + 0x4cu);
    }
L_001afca0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001afca4:;
    {
        cpu->r[14] = 0x001afca8u; fn_0010ffa8(cpu);
    }
L_001afca8:;
    {
        cpu->r[2] = rd32(0x001afcb0u + + 0x44u);
    }
L_001afcac:;
    {
        cpu->r[5] = add_flags(cpu, 0x001afcb4u, cpu->r[5], 0, 0);
    }
L_001afcb0:;
    {
        cpu->r[3] = rd32(0x001afcb8u + + 0x40u);
    }
L_001afcb4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001afcb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001afcbc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001afcc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001afcc4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001afcc8:;
    {
        cpu->r[14] = 0x001afcccu; fn_0009b704(cpu);
    }
L_001afccc:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001afcd0:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_001afcd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001afcd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afcdc:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001afce0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001afce4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001afce8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_001afcec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001afcf0u)) return;
    }
}

/* _ZN20GS_ServerWaitingRoom6RenderEv @ 001afcfc (arm) */
void fn_001afcfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001afcfc:;
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
L_001afd00:;
    {
        cpu->r[2] = rd32(0x001afd08u + + 0x81cu);
    }
L_001afd04:;
    {
        cpu->r[8] = rd32(0x001afd0cu + + 0x81cu);
    }
L_001afd08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000224u, 1, 0);
    }
L_001afd0c:;
    {
        cpu->r[1] = rd32(0x001afd14u + + 0x818u);
    }
L_001afd10:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001afd14:;
    {
        cpu->r[8] = add_flags(cpu, 0x001afd1cu, cpu->r[8], 0, 0);
    }
L_001afd18:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_001afd1c:;
    {
        cpu->r[2] = rd32(0x001afd24u + + 0x80cu);
    }
L_001afd20:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001afd24:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_001afd28:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001afd2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001afd30:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001afd34:;
    {
        wr32(cpu->r[13] + + 0x21cu, cpu->r[3]);
    }
L_001afd38:;
    {
        cpu->r[14] = 0x001afd3cu; fn_0012f780(cpu);
    }
L_001afd3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_001afd40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001afd44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001afd48:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001afd4c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001afd50:;
    {
        cpu->r[14] = 0x001afd54u; fn_00113570(cpu);
    }
L_001afd54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_001afd58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001afd5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001afd8c;
        }
    }
L_001afd60:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001afd64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001afd68:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001afd6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001afd70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001afd74:;
    {
        cpu->r[14] = 0x001afd7cu;
    }
L_001afd78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001afd7cu)) return;
    }
L_001afd7c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_001afd80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001afd84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001afd88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001afd64;
        }
    }
L_001afd8c:;
    {
        cpu->r[2] = rd32(0x001afd94u + + 0x7a0u);
    }
L_001afd90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001afd94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001afd98:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001afd9c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001afda0:;
    {
        cpu->r[14] = 0x001afda8u;
    }
L_001afda4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001afda8u)) return;
    }
L_001afda8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001afdac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001afdb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001afdb4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001afdb8:;
    {
        cpu->r[14] = 0x001afdc0u;
    }
L_001afdbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001afdc0u)) return;
    }
L_001afdc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001afdc4:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001afdc8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001afdcc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001afdd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0488;
        }
    }
L_001afdd4:;
    {
        cpu->r[1] = rd32(0x001afddcu + + 0x75cu);
    }
L_001afdd8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001afddc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001afde0:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001afde4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001afde8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001afdec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001afdf0:;
    {
        cpu->r[14] = 0x001afdf4u; fn_0018aa44(cpu);
    }
L_001afdf4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001afdf8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001afdfc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001afe00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001afe04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b044c;
        }
    }
L_001afe08:;
    {
        cpu->r[3] = rd32(0x001afe10u + + 0x72cu);
    }
L_001afe0c:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001afe10:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001afe14:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001afe18:;
    {
        cpu->r[11] = rd32(0x001afe20u + + 0x720u);
    }
L_001afe1c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001afe20:;
    {
        cpu->r[14] = 0x001afe24u; fn_00096a08(cpu);
    }
L_001afe24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001afe28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001afe2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001afe30:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001afe34:;
    {
        cpu->r[14] = 0x001afe38u; fn_0018aa44(cpu);
    }
L_001afe38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001afe3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001afe40:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_001afe44:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001afe48:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001afe4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_001afe50:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001afe54:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001afe58:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001afe5c:;
    {
        cpu->r[1] = rd32(0x001afe64u + + 0x6e0u);
    }
L_001afe60:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001afe64:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001afe68:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001afe6c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001afe70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0360;
        }
    }
L_001afe74:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001afe78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001afe7c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_001afe80:;
    {
        cpu->r[14] = 0x001afe84u; fn_0018aa44(cpu);
    }
L_001afe84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001afe88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001afe8c:;
    {
        cpu->r[3] = 0x0000003cu;
    }
L_001afe90:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001afe94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001afe98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001afe9c:;
    {
        cpu->r[14] = 0x001afea0u; fn_000ad8a0(cpu);
    }
L_001afea0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001afea4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001afea8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001afe68;
        }
    }
L_001afeac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001afeb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001afeb4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001afeb8:;
    {
        cpu->r[1] = 0x00000451u;
    }
L_001afebc:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_001afec0:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001afec4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001afec8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001afecc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001afed0:;
    {
        cpu->r[14] = 0x001afed4u; fn_000ad200(cpu);
    }
L_001afed4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001afed8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001afedc:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_001afee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_001afee4:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_001afee8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001afeec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001afef0:;
    {
        cpu->r[14] = 0x001afef4u; fn_000ad200(cpu);
    }
L_001afef4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001afef8:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_001afefc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001aff00:;
    {
        cpu->r[1] = 0x0000046du;
    }
L_001aff04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_001aff08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001aff0c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001aff10:;
    {
        cpu->r[14] = 0x001aff14u; fn_000ad200(cpu);
    }
L_001aff14:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x950u);
    }
L_001aff18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x208u);
    }
L_001aff1c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001aff20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b042c;
        }
    }
L_001aff24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000001e8u, 0, 0);
    }
L_001aff28:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001aff2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001aff30:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001aff34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001aff38:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_001aff3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001aff40:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001aff44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001aff48:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001aff4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001aff50:;
    {
        cpu->r[11] = 0x00000055u;
    }
L_001aff54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001aff58:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_001aff5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001aff60:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_001aff64:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001aff68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001aff6c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001aff70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001aff74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001aff78:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001aff7c:;
    {
        cpu->r[3] = rd32(0x001aff84u + + 0x5bcu);
    }
L_001aff80:;
    {
        cpu->r[1] = rd32(0x001aff88u + + 0x5bcu);
    }
L_001aff84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001aff88:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001aff8c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001aff90:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001aff94:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001aff98:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001aff9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b01f0;
        }
    }
L_001affa0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001affa4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001affa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001affac:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001affb0:;
    {
        cpu->r[14] = 0x001affb4u; fn_0018aa44(cpu);
    }
L_001affb4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001affb8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001affbc:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001affc0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001affc4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001affc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001affcc:;
    {
        cpu->r[14] = 0x001affd0u; fn_000ad8a0(cpu);
    }
L_001affd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001affd4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001affd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aff94;
        }
    }
L_001affdc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001affe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b023c;
        }
    }
L_001affe4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x950u);
    }
L_001affe8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x0000000eu, 0, 0);
    }
L_001affec:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001afff0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001afff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b01d4;
        }
    }
L_001afff8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001afffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0000:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b0004:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000184u, 0, 0);
    }
L_001b0008:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001b000c:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0010:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001b0014:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b0018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b001c:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001b0020:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b0024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001b0028:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b002c:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0030:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_001b0034:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001b0038:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b003c:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001b0040:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0044:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_001b0048:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b004c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b0050:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001b0054:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001b0058:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[4]);
    }
L_001b005c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b0060:;
    {
        cpu->r[14] = 0x001b0064u; imp_strlen(cpu); /* strlen */
    }
L_001b0064:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b0068:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b006c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b0070:;
    {
        cpu->r[14] = 0x001b0074u; imp_memcpy(cpu); /* memcpy */
    }
L_001b0074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b0078:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_001b007c:;
    {
        cpu->r[14] = 0x001b0080u; imp_strrchr(cpu); /* strrchr */
    }
L_001b0080:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001b0084:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b0088:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b008c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[4]);
        }
    }
L_001b0090:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0094:;
    {
        cpu->r[14] = 0x001b0098u; imp_memset(cpu); /* memset */
    }
L_001b0098:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b009c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b00a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001b00a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001b00a8:;
    {
        cpu->r[14] = 0x001b00acu; fn_000ae3d0(cpu);
    }
L_001b00ac:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b00b0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001b00b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b00b8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b00bc:;
    {
        cpu->r[12] = 0x000000aau;
    }
L_001b00c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b00c4:;
    {
        cpu->r[14] = 0x001b00c8u; fn_00099114(cpu);
    }
L_001b00c8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x104u);
    }
L_001b00cc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b00d0:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_001b00d4:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_001b00d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b00dc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_001b00e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_001b00e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b00e8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001b00ec:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001b00f0:;
    {
        cpu->r[5] = rd32(cpu->r[14] + + 0xcu);
    }
L_001b00f4:;
    {
        cpu->r[14] = 0x001b00f8u; imp_memset(cpu); /* memset */
    }
L_001b00f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b00fc:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b0100:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0104:;
    {
        cpu->r[14] = 0x001b0108u; fn_000aeb58(cpu);
    }
L_001b0108:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001b010c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b0110:;
    {
        cpu->r[12] = 0x000000b2u;
    }
L_001b0114:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b0118:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b011c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0120:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_001b0124:;
    {
        cpu->r[14] = 0x001b0128u; fn_00099114(cpu);
    }
L_001b0128:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b012c:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001b0130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0134:;
    {
        cpu->r[14] = 0x001b0138u; imp_memset(cpu); /* memset */
    }
L_001b0138:;
    {
        cpu->r[1] = rd32(0x001b0140u + + 0x408u);
    }
L_001b013c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0140:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b0144:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b014cu, cpu->r[1], 0, 0);
    }
L_001b0148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000012u, 0, 0);
    }
L_001b014c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001b0150:;
    {
        cpu->r[14] = 0x001b0154u; fn_000ae830(cpu);
    }
L_001b0154:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b0158:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b015c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b0160:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000002du, 0, 0);
    }
L_001b0164:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001b0168:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b016c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b0170:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001b0174:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001b0178:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000011u, 0, 0);
    }
L_001b017c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001b0180:;
    {
        cpu->r[14] = 0x001b0184u; fn_000ad19c(cpu);
    }
L_001b0184:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_001b0188:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b018c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b0190:;
    {
        cpu->r[6] = rd8(cpu->r[10] + + 0x50u);
    }
L_001b0194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_001b0198:;
    {
        wr8(cpu->r[10] + + 0x50u, cpu->r[4]);
    }
L_001b019c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b01a0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001b01a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001b01a8:;
    {
        cpu->r[14] = 0x001b01acu; fn_000ad19c(cpu);
    }
L_001b01ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_001b01b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b01b4:;
    {
        wr8(cpu->r[10] + + 0x50u, cpu->r[6]);
    }
L_001b01b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b01bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_001b01c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b01c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001b01c8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001b01cc:;
    {
        cpu->r[14] = 0x001b01d0u; fn_000ad19c(cpu);
    }
L_001b01d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x950u);
    }
L_001b01d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x208u);
    }
L_001b01d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001b01dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b01e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001b01e4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b03a4;
        }
    }
L_001b01e8:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001b01ec:;
    {
        goto L_001aff74;
    }
L_001b01f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b01f4:;
    {
        cpu->r[14] = 0x001b01f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001b01f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b01fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001affa0;
        }
    }
L_001b0200:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b0204:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001b0208:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b020c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b0210:;
    {
        cpu->r[14] = 0x001b0214u; fn_0018aa20(cpu);
    }
L_001b0214:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0218:;
    {
        cpu->r[14] = 0x001b021cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001b021c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b0220:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b0224:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b0228:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b022c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001b0230:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0234:;
    {
        cpu->r[14] = 0x001b0238u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001b0238:;
    {
        goto L_001affa0;
    }
L_001b023c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b0240:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001b0244:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x950u);
    }
L_001b0248:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000184u, 0, 0);
    }
L_001b024c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b0250:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0254:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b0258:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001b025c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b0260:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b0264:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0268:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001b026c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b0270:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b0274:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0278:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_001b027c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b0280:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001b0284:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0288:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b028c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001b0290:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001b0294:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_001b0298:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b029c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b02a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001b02a4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[4]);
    }
L_001b02a8:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b02ac:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001b02b0:;
    {
        cpu->r[14] = 0x001b02b8u;
    }
L_001b02b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b02b8u)) return;
    }
L_001b02b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x950u);
    }
L_001b02bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b02c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b02c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b02c8:;
    {
        cpu->r[14] = 0x001b02d0u;
    }
L_001b02cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b02d0u)) return;
    }
L_001b02d0:;
    {
        cpu->r[14] = 0x001b02d4u; imp_strlen(cpu); /* strlen */
    }
L_001b02d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b02d8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b02dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b02e0:;
    {
        cpu->r[14] = 0x001b02e4u; imp_memcpy(cpu); /* memcpy */
    }
L_001b02e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b02e8:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_001b02ec:;
    {
        cpu->r[14] = 0x001b02f0u; imp_strrchr(cpu); /* strrchr */
    }
L_001b02f0:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001b02f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b02f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b02fc:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[5]);
        }
    }
L_001b0300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0304:;
    {
        cpu->r[14] = 0x001b0308u; imp_memset(cpu); /* memset */
    }
L_001b0308:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b030c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b0310:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001b0314:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001b0318:;
    {
        cpu->r[14] = 0x001b031cu; fn_000ae3d0(cpu);
    }
L_001b031c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b0320:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001b0324:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b0328:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b032c:;
    {
        cpu->r[12] = 0x000000a0u;
    }
L_001b0330:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b0334:;
    {
        cpu->r[14] = 0x001b0338u; fn_00099114(cpu);
    }
L_001b0338:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b033c:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001b0340:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_001b0344:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b0348:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b034c:;
    {
        cpu->r[14] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_001b0350:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_001b0354:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x444u);
    }
L_001b0358:;
    {
        uint32_t v = cpu->r[3] * cpu->r[14]; cpu->r[3] = v;
    }
L_001b035c:;
    {
        goto L_001b00e8;
    }
L_001b0360:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0364:;
    {
        cpu->r[14] = 0x001b0368u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001b0368:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b036c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001afe74;
        }
    }
L_001b0370:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_001b0374:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b0378:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b037c:;
    {
        cpu->r[14] = 0x001b0380u; fn_0018aa20(cpu);
    }
L_001b0380:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0384:;
    {
        cpu->r[14] = 0x001b0388u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001b0388:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b038c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001b0390:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b0394:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b0398:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b039c:;
    {
        cpu->r[14] = 0x001b03a0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001b03a0:;
    {
        goto L_001afe74;
    }
L_001b03a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b03a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b042c;
        }
    }
L_001b03ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b03b0:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001b03b4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b03b8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001b03bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b04a4;
        }
    }
L_001b03c0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001b03c4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b03c8:;
    {
        cpu->r[14] = 0x001b03ccu; fn_00096a08(cpu);
    }
L_001b03cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b03d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b03d4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001b03d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b03dc:;
    {
        cpu->r[14] = 0x001b03e0u; fn_0018aa44(cpu);
    }
L_001b03e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b03e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b03e8:;
    {
        cpu->r[0] = 0x0000041fu;
    }
L_001b03ec:;
    {
        cpu->r[14] = 0x001b03f0u; fn_000aeb58(cpu);
    }
L_001b03f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_001b03f4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b03f8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b03fc:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_001b0400:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001b0404:;
    {
        cpu->r[3] = rd32(0x001b040cu + + 0x140u);
    }
L_001b0408:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001b040c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001b0410:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0414:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001b0418:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b041c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000046u, 1, 0);
    }
L_001b0420:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b0424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0428:;
    {
        cpu->r[14] = 0x001b042cu; fn_000ad19c(cpu);
    }
L_001b042c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001b0430:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x21cu);
    }
L_001b0434:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001b0438:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b043c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b0440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0520;
        }
    }
L_001b0444:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_001b0448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b044cu)) return;
    }
L_001b044c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0450:;
    {
        cpu->r[14] = 0x001b0454u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001b0454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001afe08;
        }
    }
L_001b045c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0460:;
    {
        cpu->r[14] = 0x001b0464u; fn_0018aa20(cpu);
    }
L_001b0464:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0468:;
    {
        cpu->r[14] = 0x001b046cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001b046c:;
    {
        cpu->r[3] = rd32(0x001b0474u + + 0xccu);
    }
L_001b0470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0474:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0478:;
    {
        cpu->r[3] = rd32(0x001b0480u + + 0xc4u);
    }
L_001b047c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0480:;
    {
        cpu->r[14] = 0x001b0484u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001b0484:;
    {
        goto L_001afe08;
    }
L_001b0488:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b048c:;
    {
        cpu->r[14] = 0x001b0490u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001b0490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b04e8;
        }
    }
L_001b0498:;
    {
        cpu->r[2] = rd32(0x001b04a0u + + 0x98u);
    }
L_001b049c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001b04a0:;
    {
        goto L_001afddc;
    }
L_001b04a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b04a8:;
    {
        cpu->r[14] = 0x001b04acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001b04ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b04b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b03c0;
        }
    }
L_001b04b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b04b8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b04bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b04c0:;
    {
        cpu->r[14] = 0x001b04c4u; fn_0018aa20(cpu);
    }
L_001b04c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b04c8:;
    {
        cpu->r[14] = 0x001b04ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001b04cc:;
    {
        cpu->r[3] = rd32(0x001b04d4u + + 0x6cu);
    }
L_001b04d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b04d4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b04d8:;
    {
        cpu->r[3] = rd32(0x001b04e0u + + 0x64u);
    }
L_001b04dc:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b04e0:;
    {
        cpu->r[14] = 0x001b04e4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001b04e4:;
    {
        goto L_001b03c0;
    }
L_001b04e8:;
    {
        cpu->r[3] = rd32(0x001b04f0u + + 0x48u);
    }
L_001b04ec:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b04f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001b04f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b04f8:;
    {
        cpu->r[14] = 0x001b04fcu; fn_0018aa20(cpu);
    }
L_001b04fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0500:;
    {
        cpu->r[14] = 0x001b0504u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001b0504:;
    {
        cpu->r[3] = rd32(0x001b050cu + + 0x34u);
    }
L_001b0508:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b050c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0510:;
    {
        cpu->r[3] = rd32(0x001b0518u + + 0x2cu);
    }
L_001b0514:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001b0518:;
    {
        cpu->r[14] = 0x001b051cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001b051c:;
    {
        goto L_001afddc;
    }
L_001b0520:;
    {
        cpu->r[14] = 0x001b0524u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b0524:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001b0528:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[12]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b052c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b0530:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_001b0534:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001b0538:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_001b053c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[8]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001b0540:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001b0544:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001b0548:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        wr16(cpu->r[7], 0x001b0550u);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b054c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
}

/* _ZN5Comms14GetNbIntefacesEv @ 001b0550 (arm) */
void fn_001b0550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0550:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b0554:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms7SendByeEv @ 001b0558 (arm) */
void fn_001b0558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0558:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork8IsActiveEv @ 001b055c (arm) */
void fn_001b055c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b055c:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b0560:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b0564:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0568:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b056c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork11StartClientEv @ 001b0570 (arm) */
void fn_001b0570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0570:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b0574:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b0578:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b057c:;
    {
        wr8(cpu->r[3] + + 0x317u, cpu->r[2]);
    }
L_001b0580:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork24IsUnblockingConnectErrorEv @ 001b0584 (arm) */
void fn_001b0584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0584:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b0588:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001b058c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13GetPowerStatev @ 001b0590 (arm) */
void fn_001b0590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0590:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b0594:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork13GetPowerStateEv @ 001b0598 (arm) */
void fn_001b0598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0598:;
    {
        return fn_001b0590(cpu);
    }
}

/* _ZN13CLinuxNetwork13SetPowerStateEb @ 001b059c (arm) */
void fn_001b059c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b059c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork21IsConnectionAvailableEv @ 001b05a0 (arm) */
void fn_001b05a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b05a0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b05a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CLinuxNetwork13SendKeepAliveEv @ 001b05a8 (arm) */
void fn_001b05a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b05a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b05ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b05b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b05b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b05b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b05bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b05e4;
        }
    }
L_001b05c0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x317u);
    }
L_001b05c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b05c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b05e4;
        }
    }
L_001b05cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x320u);
    }
L_001b05d0:;
    {
        cpu->r[2] = 0x000002edu;
    }
L_001b05d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b05d8:;
    {
        wr32(cpu->r[0] + + 0x320u, cpu->r[3]);
    }
L_001b05dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b05e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b05ec;
        }
    }
L_001b05e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b05e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b05ecu)) return;
    }
L_001b05ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b05f0:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001b05f4:;
    {
        cpu->r[3] = 0x0000001au;
    }
L_001b05f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b05fc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr8(cpu->r[1] + - 0x4u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_001b0600:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_001b0604:;
    {
        cpu->r[14] = 0x001b060cu;
    }
L_001b0608:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b060cu)) return;
    }
L_001b060c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b0610:;
    {
        wr32(cpu->r[4] + + 0x320u, cpu->r[3]);
    }
L_001b0614:;
    {
        goto L_001b05e4;
    }
}

/* _ZN13CLinuxNetwork10FindDeviceEPv @ 001b0618 (arm) */
void fn_001b0618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0618:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b061c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b0620:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b0624:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b0628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b066c;
        }
    }
L_001b062c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0630:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b0634:;
    {
        goto L_001b0644;
    }
L_001b0638:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b063c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001b0640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b066c;
        }
    }
L_001b0644:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b0648:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b064c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b0650:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b0654:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x138u);
    }
L_001b0658:;
    {
        cpu->r[14] = 0x001b065cu; imp_memcmp(cpu); /* memcmp */
    }
L_001b065c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0638;
        }
    }
L_001b0664:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0668:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b066cu)) return;
    }
L_001b066c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b0670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0674u)) return;
    }
}

/* _ZN13CLinuxNetwork8SendDataEPhjj @ 001b0674 (arm) */
void fn_001b0674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0674:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001b0678:;
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
L_001b067c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001b0680:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_001b0684:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b0688:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b068c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001b0690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b076c;
        }
    }
L_001b0694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b0698:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xc0u);
    }
L_001b069c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b06a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b06ac;
        }
    }
L_001b06a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b06a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b06acu)) return;
    }
L_001b06ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x000012c0u, 0, 0);
    }
L_001b06b0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001b06b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b06b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000003eu, 0, 0);
    }
L_001b06bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b06c0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b06c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b06c8:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_001b06cc:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[8]);
    }
L_001b06d0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[11]);
    }
L_001b06d4:;
    {
        cpu->r[14] = 0x001b06d8u; imp_memset(cpu); /* memset */
    }
L_001b06d8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001b06dc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b06e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_001b06e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b06e8:;
    {
        uint32_t v = cpu->r[14] & 0x0000001fu; cpu->r[9] = v;
    }
L_001b06ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
    }
L_001b06f0:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 5u, &shc); cpu->r[14] = v;
    }
L_001b06f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_001b06f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b06fc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b0700:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_001b0704:;
    {
        cpu->r[12] = rd32(cpu->r[14] + - 0x88u);
    }
L_001b0708:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[11], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001b070c:;
    {
        wr32(cpu->r[14] + - 0x88u, cpu->r[12]);
    }
L_001b0710:;
    {
        cpu->r[14] = 0x001b0714u; imp_select(cpu); /* select */
    }
L_001b0714:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0718:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b071c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0820;
        }
    }
L_001b0720:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b07f0;
        }
    }
L_001b0728:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001b072c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b0730:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b0734:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b0738:;
    {
        cpu->r[14] = 0x001b073cu; imp_send(cpu); /* send */
    }
L_001b073c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0740:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_001b0744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b06a4;
        }
    }
L_001b0748:;
    {
        cpu->r[14] = 0x001b074cu; imp___errno(cpu); /* __errno */
    }
L_001b074c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b0750:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001b0754:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0834;
        }
    }
L_001b0758:;
    {
        cpu->r[14] = 0x001b075cu; imp___errno(cpu); /* __errno */
    }
L_001b075c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b0760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b0764:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b0768:;
    {
        goto L_001b06a4;
    }
L_001b076c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b0770:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b0774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b0778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b06a4;
        }
    }
L_001b077c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b0780:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001b0784:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001b0788:;
    {
        goto L_001b07a0;
    }
L_001b078c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b0790:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[4]);
    }
L_001b0794:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001b0798:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001b079c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b07e8;
        }
    }
L_001b07a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001b07a4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b07a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b07ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b078c;
        }
    }
L_001b07b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b07b4:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001b07b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b07bc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b07c0:;
    {
        cpu->r[14] = 0x001b07c8u;
    }
L_001b07c4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b07c8u)) return;
    }
L_001b07c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b07cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x200u);
    }
L_001b07d0:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[4]);
    }
L_001b07d4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001b07d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b07dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_001b07e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001b07e4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b07a0;
        }
    }
L_001b07e8:;
    {
        uint32_t v = cpu->r[8] ^ 0x00000001u; cpu->r[0] = v;
    }
L_001b07ec:;
    {
        goto L_001b06a4;
    }
L_001b07f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b07f4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b07f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b07fc:;
    {
        cpu->r[14] = 0x001b0804u;
    }
L_001b0800:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0804u)) return;
    }
L_001b0804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0808:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b080c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b0810:;
    {
        cpu->r[14] = 0x001b0818u;
    }
L_001b0814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0818u)) return;
    }
L_001b0818:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b081c:;
    {
        goto L_001b06a4;
    }
L_001b0820:;
    {
        cpu->r[14] = 0x001b0824u; imp___errno(cpu); /* __errno */
    }
L_001b0824:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b0828:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b082c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b0830:;
    {
        goto L_001b06a4;
    }
L_001b0834:;
    {
        cpu->r[14] = 0x001b0838u; imp___errno(cpu); /* __errno */
    }
L_001b0838:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b083c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000068u, 1, 1);
    }
L_001b0840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0758;
        }
    }
L_001b0844:;
    {
        cpu->r[14] = 0x001b0848u; imp___errno(cpu); /* __errno */
    }
L_001b0848:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b084c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000071u, 1, 1);
    }
L_001b0850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0758;
        }
    }
L_001b0854:;
    {
        cpu->r[14] = 0x001b0858u; imp___errno(cpu); /* __errno */
    }
L_001b0858:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b085c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_001b0860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0758;
        }
    }
L_001b0864:;
    {
        cpu->r[14] = 0x001b0868u; imp___errno(cpu); /* __errno */
    }
L_001b0868:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b086c:;
    {
        goto L_001b0758;
    }
}

/* _ZN13CLinuxNetwork32CheckAndRemoveUnconnectedDevicesEv @ 001b0870 (arm) */
void fn_001b0870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0870:;
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
L_001b0874:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b0878:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000009cu, 1, 0);
    }
L_001b087c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b0880:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b0884:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001b0888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b088c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b0890:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_001b0894:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_001b0898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001b089c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xc0u);
    }
L_001b08a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b08a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b08bc;
        }
    }
L_001b08a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b08ac:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_001b08b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b0898;
        }
    }
L_001b08b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001b08b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b08bcu)) return;
    }
L_001b08bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x000012c0u, 0, 0);
    }
L_001b08c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b08c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000003eu, 0, 0);
    }
L_001b08c8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b08cc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b08d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_001b08d4:;
    {
        cpu->r[14] = 0x001b08d8u; imp_memset(cpu); /* memset */
    }
L_001b08d8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001b08dc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001b08e0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b08e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001b08e8:;
    {
        uint32_t v = cpu->r[12] & 0x0000001fu; cpu->r[8] = v;
    }
L_001b08ec:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 5u, &shc); cpu->r[12] = v;
    }
L_001b08f0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001b08f4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001b08f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001b08fc:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001b0900:;
    {
        cpu->r[14] = rd32(cpu->r[12] + - 0x84u);
    }
L_001b0904:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[10], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001b0908:;
    {
        wr32(cpu->r[12] + - 0x84u, cpu->r[14]);
    }
L_001b090c:;
    {
        cpu->r[14] = 0x001b0910u; imp_select(cpu); /* select */
    }
L_001b0910:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b08b4;
        }
    }
L_001b0918:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001b091c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b0920:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b0924:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001b0928:;
    {
        cpu->r[14] = 0x001b092cu; imp_send(cpu); /* send */
    }
L_001b092c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b08a8;
        }
    }
L_001b0934:;
    {
        cpu->r[14] = 0x001b0938u; imp___errno(cpu); /* __errno */
    }
L_001b0938:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b093c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001b0940:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0984;
        }
    }
L_001b0944:;
    {
        cpu->r[14] = 0x001b0948u; imp___errno(cpu); /* __errno */
    }
L_001b0948:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b094c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000068u, 1, 1);
    }
L_001b0950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0984;
        }
    }
L_001b0954:;
    {
        cpu->r[14] = 0x001b0958u; imp___errno(cpu); /* __errno */
    }
L_001b0958:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b095c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000071u, 1, 1);
    }
L_001b0960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0984;
        }
    }
L_001b0964:;
    {
        cpu->r[14] = 0x001b0968u; imp___errno(cpu); /* __errno */
    }
L_001b0968:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b096c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_001b0970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0984;
        }
    }
L_001b0974:;
    {
        cpu->r[14] = 0x001b0978u; imp___errno(cpu); /* __errno */
    }
L_001b0978:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b097c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000065u, 1, 1);
    }
L_001b0980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b08a8;
        }
    }
L_001b0984:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x208u);
    }
L_001b0988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b098c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0a4c;
        }
    }
L_001b0990:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001b0994:;
    {
        wr32(cpu->r[5] + + 0x208u, cpu->r[3]);
    }
L_001b0998:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b099c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0a4c;
        }
    }
L_001b09a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001b09a4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001b09a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b09ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b09c4;
        }
    }
L_001b09b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b09b4:;
    {
        cpu->r[14] = 0x001b09b8u; fn_001b33dc(cpu);
    }
L_001b09b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b09bc:;
    {
        cpu->r[14] = 0x001b09c0u; fn_0018ba20(cpu);
    }
L_001b09c0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[7]);
    }
L_001b09c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001b09c8:;
    {
        cpu->r[14] = 0x001b09ccu; imp_close(cpu); /* close */
    }
L_001b09cc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_001b09d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0a3c;
        }
    }
L_001b09d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000012c0u, 0, 0);
    }
L_001b09d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000011u, 0, 0);
    }
L_001b09dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003fu, 0, 0);
    }
L_001b09e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c1u, 0, 0);
    }
L_001b09e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001b09e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b09ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b09f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b09f4:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_001b09f8:;
    {
        cpu->r[10] = rd8(cpu->r[1]);
    }
L_001b09fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b0a00:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_001b0a04:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001fu, 1, 1);
    }
L_001b0a08:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_001b0a0c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xa0u);
    }
L_001b0a10:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x120u);
    }
L_001b0a14:;
    {
        wr8(cpu->r[1] + - 0x1u, cpu->r[10]);
    }
L_001b0a18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b0a1c:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[8]);
    }
L_001b0a20:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[6]);
    }
L_001b0a24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001b0a28:;
    {
        wr32(cpu->r[3] + + 0x9cu, cpu->r[4]);
    }
L_001b0a2c:;
    {
        wr32(cpu->r[3] + + 0x11cu, cpu->r[12]);
    }
L_001b0a30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b0a34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b09f8;
        }
    }
L_001b0a38:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_001b0a3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x200u);
    }
L_001b0a40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001b0a44:;
    {
        wr32(cpu->r[5] + + 0x200u, cpu->r[3]);
    }
L_001b0a48:;
    {
        goto L_001b08ac;
    }
L_001b0a4c:;
    {
        wr8(cpu->r[5] + + 0x316u, cpu->r[7]);
    }
L_001b0a50:;
    {
        goto L_001b09a0;
    }
}

/* _ZN13CLinuxNetwork20ConnectionClosedWithEj @ 001b0a54 (arm) */
void fn_001b0a54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0a54:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b0a58:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x000012c0u, 0, 0);
    }
L_001b0a5c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x0000003eu, 0, 0);
    }
L_001b0a60:;
    {
        cpu->r[5] = rd32(0x001b0a68u + + 0xc0u);
    }
L_001b0a64:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b0a68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0a6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001b0a70:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b0a78u, cpu->r[5], 0, 0);
    }
L_001b0a74:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001b0a78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0a7cu)) return;
        }
    }
L_001b0a7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x208u);
    }
L_001b0a80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b0a84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0b14;
        }
    }
L_001b0a88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b0a8c:;
    {
        wr8(cpu->r[4] + + 0x316u, cpu->r[3]);
    }
L_001b0a90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001b0a94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b0a98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001b0a9c:;
    {
        wr8(cpu->r[3] + + 0xc0u, cpu->r[2]);
    }
L_001b0aa0:;
    {
        cpu->r[14] = 0x001b0aa4u; imp_close(cpu); /* close */
    }
L_001b0aa4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0aa8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_001b0aac:;
    {
        cpu->r[3] = rd32(0x001b0ab4u + + 0x78u);
    }
L_001b0ab0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b0ab4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b0ab8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001b0abc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001b0ac0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b0ac4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0ac8u)) return;
        }
    }
L_001b0ac8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b0acc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001b0ad0:;
    {
        if (cond_test(cpu, 3)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0ad4u)) return;
        }
    }
L_001b0ad4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001b0ad8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001b0adc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b0b00;
        }
    }
L_001b0ae0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000003fu, 0, 0);
    }
L_001b0ae4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001b0ae8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001b0aec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b0af0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001b0af4:;
    {
        wr32(cpu->r[8] + - 0x4u, cpu->r[3]);
    }
L_001b0af8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001b0afc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b0ae8;
        }
    }
L_001b0b00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000012c0u, 0, 0);
    }
L_001b0b04:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0b08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003eu, 0, 0);
    }
L_001b0b0c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_001b0b10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0b14u)) return;
    }
L_001b0b14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001b0b18:;
    {
        wr32(cpu->r[0] + + 0x208u, cpu->r[3]);
    }
L_001b0b1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b0b20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0a90;
        }
    }
L_001b0b24:;
    {
        goto L_001b0a88;
    }
}

/* _ZN13CLinuxNetwork13StopListeningEv @ 001b0b30 (arm) */
void fn_001b0b30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0b30:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b0b34:;
    {
        cpu->r[5] = 0x00004c78u;
    }
L_001b0b38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0b3c:;
    {
        cpu->r[6] = 0x00004c7cu;
    }
L_001b0b40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001b0b44:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_001b0b48:;
    {
        cpu->r[14] = 0x001b0b4cu; imp_close(cpu); /* close */
    }
L_001b0b4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b0b50:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[7]);
    }
L_001b0b54:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001b0b58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0b64;
        }
    }
L_001b0b5c:;
    {
        cpu->r[14] = 0x001b0b60u; imp_close(cpu); /* close */
    }
L_001b0b60:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_001b0b64:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b0b68:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b0b6c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b0b70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0b74u)) return;
    }
}

/* _ZN13CLinuxNetwork12RemoveDeviceEj @ 001b0b74 (arm) */
void fn_001b0b74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0b74:;
    {
        return fn_001b2f18(cpu);
    }
}

/* _ZN13CLinuxNetwork7CleanUpEv @ 001b0b78 (arm) */
void fn_001b0b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0b78:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b0b7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00004b00u, 0, 0);
    }
L_001b0b80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b0b84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b0b88:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001b0b8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000f8u, 0, 0);
    }
L_001b0b90:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001b0b94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b0b98:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0ba8;
        }
    }
L_001b0ba0:;
    {
        cpu->r[14] = 0x001b0ba4u; imp_close(cpu); /* close */
    }
L_001b0ba4:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_001b0ba8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_001b0bac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b0bb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0b90;
        }
    }
L_001b0bb4:;
    {
        cpu->r[4] = 0x00004c78u;
    }
L_001b0bb8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001b0bbc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0bc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0bd0;
        }
    }
L_001b0bc4:;
    {
        cpu->r[14] = 0x001b0bc8u; imp_close(cpu); /* close */
    }
L_001b0bc8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0bcc:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[3]);
    }
L_001b0bd0:;
    {
        cpu->r[4] = 0x00004c7cu;
    }
L_001b0bd4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001b0bd8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0bec;
        }
    }
L_001b0be0:;
    {
        cpu->r[14] = 0x001b0be4u; imp_close(cpu); /* close */
    }
L_001b0be4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0be8:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[3]);
    }
L_001b0bec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b0bf0:;
    {
        cpu->r[14] = 0x001b0bf4u; fn_001b2988(cpu);
    }
L_001b0bf4:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b0bf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b0bfc:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001b0c00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0c04u)) return;
    }
}

/* _ZN13CLinuxNetworkD1Ev @ 001b0c04 (arm) */
void fn_001b0c04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0c04:;
    {
        cpu->r[3] = rd32(0x001b0c0cu + + 0x2cu);
    }
L_001b0c08:;
    {
        cpu->r[2] = rd32(0x001b0c10u + + 0x2cu);
    }
L_001b0c0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b0c14u, cpu->r[3], 0, 0);
    }
L_001b0c10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b0c14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b0c18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0c1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b0c20:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001b0c24:;
    {
        cpu->r[14] = 0x001b0c28u; fn_001b0b78(cpu);
    }
L_001b0c28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c2c:;
    {
        cpu->r[14] = 0x001b0c30u; fn_001b2b88(cpu);
    }
L_001b0c30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0c38u)) return;
    }
}

/* _ZN13CLinuxNetworkD0Ev @ 001b0c40 (arm) */
void fn_001b0c40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0c40:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b0c44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0c48:;
    {
        cpu->r[14] = 0x001b0c4cu; fn_001b0c04(cpu);
    }
L_001b0c4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c50:;
    {
        cpu->r[14] = 0x001b0c54u; fn_0018ba20(cpu);
    }
L_001b0c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0c5cu)) return;
    }
}

/* _ZN13CLinuxNetworkD2Ev @ 001b0c5c (arm) */
void fn_001b0c5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0c5c:;
    {
        cpu->r[3] = rd32(0x001b0c64u + + 0x2cu);
    }
L_001b0c60:;
    {
        cpu->r[2] = rd32(0x001b0c68u + + 0x2cu);
    }
L_001b0c64:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b0c6cu, cpu->r[3], 0, 0);
    }
L_001b0c68:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b0c6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b0c70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0c74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b0c78:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001b0c7c:;
    {
        cpu->r[14] = 0x001b0c80u; fn_001b0b78(cpu);
    }
L_001b0c80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c84:;
    {
        cpu->r[14] = 0x001b0c88u; fn_001b2b88(cpu);
    }
L_001b0c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b0c8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0c90u)) return;
    }
}

/* _ZN13CLinuxNetwork10DisconnectEv @ 001b0c98 (arm) */
void fn_001b0c98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0c98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b0c9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b0ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b0ca4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b0ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0cdc;
        }
    }
L_001b0cac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b0cb0:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_001b0cb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000012c0u, 0, 0);
    }
L_001b0cb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b0cbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000003eu, 0, 0);
    }
L_001b0cc0:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_001b0cc4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001b0cc8:;
    {
        cpu->r[14] = 0x001b0cccu; imp_close(cpu); /* close */
    }
L_001b0ccc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x200u);
    }
L_001b0cd0:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_001b0cd4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001b0cd8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b0cb4;
        }
    }
L_001b0cdc:;
    {
        cpu->r[4] = 0x00004c78u;
    }
L_001b0ce0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001b0ce4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0cf8;
        }
    }
L_001b0cec:;
    {
        cpu->r[14] = 0x001b0cf0u; imp_close(cpu); /* close */
    }
L_001b0cf0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0cf4:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_001b0cf8:;
    {
        cpu->r[4] = 0x00004c7cu;
    }
L_001b0cfc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001b0d00:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0d14;
        }
    }
L_001b0d08:;
    {
        cpu->r[14] = 0x001b0d0cu; imp_close(cpu); /* close */
    }
L_001b0d0c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b0d10:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_001b0d14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b0d18:;
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
L_001b0d1c:;
    {
        return fn_001b2988(cpu);
    }
}

/* _ZN13CLinuxNetwork18SetLocalDeviceNameEPc @ 001b0d20 (arm) */
void fn_001b0d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0d20:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001b0d24:;
    {
        cpu->r[3] = 0x00007490u;
    }
L_001b0d28:;
    {
        cpu->r[1] = rd32(0x001b0d30u + + 0xcu);
    }
L_001b0d2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b0d30:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b0d38u, cpu->r[1], 0, 0);
    }
L_001b0d34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20cu);
    }
L_001b0d38:;
    {
        imp_sprintf(cpu); /* tail sprintf */ return;
    }
}

/* _ZN13CLinuxNetwork18GetLocalDeviceNameEv @ 001b0d40 (arm) */
void fn_001b0d40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0d40:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b0d44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b0d48:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_001b0d4c:;
    {
        cpu->r[6] = rd32(0x001b0d54u + + 0xc0u);
    }
L_001b0d50:;
    {
        cpu->r[14] = 0x001b0d54u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b0d54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b0d58:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b0d60u, cpu->r[6], 0, 0);
    }
L_001b0d5c:;
    {
        cpu->r[7] = rd8(cpu->r[3]);
    }
L_001b0d60:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b0d64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b0d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0d84;
        }
    }
L_001b0d6c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b0d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0d7c;
        }
    }
L_001b0d74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0d78:;
    {
        cpu->r[14] = 0x001b0d7cu; fn_0018ba20(cpu);
    }
L_001b0d7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b0d80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0d84u)) return;
    }
L_001b0d84:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_001b0d88:;
    {
        cpu->r[14] = 0x001b0d8cu; imp_gethostname(cpu); /* gethostname */
    }
L_001b0d8c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0e00;
        }
    }
L_001b0d94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0d98:;
    {
        cpu->r[1] = 0x0000002eu;
    }
L_001b0d9c:;
    {
        cpu->r[14] = 0x001b0da0u; imp_strchr(cpu); /* strchr */
    }
L_001b0da0:;
    {
        cpu->r[3] = rd32(0x001b0da8u + + 0x70u);
    }
L_001b0da4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b0da8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0dac:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[7]);
        }
    }
L_001b0db0:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001b0db4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b0db8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0de0;
        }
    }
L_001b0dbc:;
    {
        cpu->r[1] = rd32(0x001b0dc4u + + 0x58u);
    }
L_001b0dc0:;
    {
        cpu->r[3] = 0x00007490u;
    }
L_001b0dc4:;
    {
        cpu->r[2] = rd32(0x001b0dccu + + 0x54u);
    }
L_001b0dc8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b0dd0u, cpu->r[1], 0, 0);
    }
L_001b0dcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b0dd0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b0dd8u, cpu->r[2], 0, 0);
    }
L_001b0dd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b0dd8:;
    {
        cpu->r[14] = 0x001b0ddcu; imp_sprintf(cpu); /* sprintf */
    }
L_001b0ddc:;
    {
        goto L_001b0d6c;
    }
L_001b0de0:;
    {
        cpu->r[1] = rd32(0x001b0de8u + + 0x3cu);
    }
L_001b0de4:;
    {
        cpu->r[3] = 0x00007490u;
    }
L_001b0de8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b0dec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b0df0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b0df8u, cpu->r[1], 0, 0);
    }
L_001b0df4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b0df8:;
    {
        cpu->r[14] = 0x001b0dfcu; imp_sprintf(cpu); /* sprintf */
    }
L_001b0dfc:;
    {
        goto L_001b0d6c;
    }
L_001b0e00:;
    {
        cpu->r[14] = 0x001b0e04u; imp___errno(cpu); /* __errno */
    }
L_001b0e04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b0e08:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001b0e0c:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001b0e10:;
    {
        goto L_001b0d6c;
    }
}

/* _ZN13CLinuxNetwork7ConnectEPc @ 001b0e28 (arm) */
void fn_001b0e28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b0e28:;
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
L_001b0e2c:;
    {
        cpu->r[4] = rd32(0x001b0e34u + + 0x1e8u);
    }
L_001b0e30:;
    {
        cpu->r[6] = rd32(0x001b0e38u + + 0x1e8u);
    }
L_001b0e34:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b0e38:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b0e40u, cpu->r[4], 0, 0);
    }
L_001b0e3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001b0e40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b0e44:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b0e48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b0e4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b0e50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b0e54:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001b0e58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b0e68;
        }
    }
L_001b0e5c:;
    {
        cpu->r[7] = rd8(cpu->r[0] + + 0x317u);
    }
L_001b0e60:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b0e64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0e88;
        }
    }
L_001b0e68:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b0e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b0e70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b0e74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b0e78:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b0e7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1018;
        }
    }
L_001b0e80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001b0e84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b0e88u)) return;
    }
L_001b0e88:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b0e8c:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001b0e90:;
    {
        wr8(cpu->r[5] + + 0x315u, cpu->r[8]);
    }
L_001b0e94:;
    {
        cpu->r[14] = 0x001b0e98u; imp_gethostbyname(cpu); /* gethostbyname */
    }
L_001b0e98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b0e9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0e68;
        }
    }
L_001b0ea0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b0ea4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001b0ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001b0eac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001b0eb0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001b0eb4:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001b0eb8:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[7]);
        cpu->r[2] = wb_tmp;
    }
L_001b0ebc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001b0ec0:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_001b0ec4:;
    {
        cpu->r[9] = 0x00004bf8u;
    }
L_001b0ec8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_001b0ecc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001b0ed0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001b0ed4:;
    {
        cpu->r[14] = 0x001b0ed8u; imp_memcpy(cpu); /* memcpy */
    }
L_001b0ed8:;
    {
        cpu->r[0] = rd32(0x001b0ee0u + + 0x144u);
    }
L_001b0edc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b0ee4u, cpu->r[0], 0, 0);
    }
L_001b0ee0:;
    {
        cpu->r[14] = 0x001b0ee4u; imp_atoi(cpu); /* atoi */
    }
L_001b0ee4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b0ee8:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001b0eec:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001b0ef0:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x4u);
    }
L_001b0ef4:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[3] = v;
    }
L_001b0ef8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001b0efc:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_001b0f00:;
    {
        cpu->r[14] = 0x001b0f04u; imp_socket(cpu); /* socket */
    }
L_001b0f04:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0f08:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[0]);
    }
L_001b0f0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fa4;
        }
    }
L_001b0f10:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b0f14:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b0f18:;
    {
        cpu->r[14] = 0x001b0f1cu; imp_connect(cpu); /* connect */
    }
L_001b0f1c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fa4;
        }
    }
L_001b0f24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001b0f28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001b0f2c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b0f30:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001b0f34:;
    {
        cpu->r[14] = 0x001b0f38u; imp_send(cpu); /* send */
    }
L_001b0f38:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fa4;
        }
    }
L_001b0f40:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001b0f44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000000du, 0, 0);
    }
L_001b0f48:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_001b0f4c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001b0f50:;
    {
        cpu->r[14] = 0x001b0f54u; imp_send(cpu); /* send */
    }
L_001b0f54:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fa4;
        }
    }
L_001b0f5c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x20cu);
    }
L_001b0f60:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b0f64:;
    {
        cpu->r[14] = 0x001b0f68u; imp_strlen(cpu); /* strlen */
    }
L_001b0f68:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b0f6c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001b0f70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b0f74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001b0f78:;
    {
        cpu->r[14] = 0x001b0f7cu; imp_send(cpu); /* send */
    }
L_001b0f7c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b0f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fa4;
        }
    }
L_001b0f84:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x317u);
    }
L_001b0f88:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b0f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b0fc4;
        }
    }
L_001b0f90:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b0f94:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b0f98:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b0f9c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001b0fa0:;
    {
        goto L_001b0e6c;
    }
L_001b0fa4:;
    {
        wr8(cpu->r[5] + + 0x315u, cpu->r[7]);
    }
L_001b0fa8:;
    {
        cpu->r[14] = 0x001b0facu; imp___errno(cpu); /* __errno */
    }
L_001b0fac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b0fb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0fb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b0fb8:;
    {
        cpu->r[14] = 0x001b0fbcu; fn_001b0b78(cpu);
    }
L_001b0fbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b0fc0:;
    {
        goto L_001b0e6c;
    }
L_001b0fc4:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001b0fc8:;
    {
        cpu->r[14] = 0x001b0fccu; fn_0018ba6c(cpu);
    }
L_001b0fcc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b0fd0:;
    {
        cpu->r[14] = 0x001b0fd4u; fn_001b33e0(cpu);
    }
L_001b0fd4:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001b0fd8:;
    {
        cpu->r[14] = 0x001b0fdcu; fn_0018ba6c(cpu);
    }
L_001b0fdc:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001b0fe0:;
    {
        uint32_t base = cpu->r[10];
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
L_001b0fe4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001b0fe8:;
    {
        wr32(cpu->r[9] + + 0x138u, cpu->r[12]);
    }
L_001b0fec:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b0ff0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001b0ff4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b0ff8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b0ffc:;
    {
        cpu->r[14] = 0x001b1004u;
    }
L_001b1000:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1004u)) return;
    }
L_001b1004:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b1008:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b100c:;
    {
        cpu->r[14] = 0x001b1010u; fn_001b2880(cpu);
    }
L_001b1010:;
    {
        wr32(cpu->r[5] + + 0x200u, cpu->r[8]);
    }
L_001b1014:;
    {
        goto L_001b0f90;
    }
L_001b1018:;
    {
        cpu->r[14] = 0x001b101cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b101c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[9] = (uint32_t)v;
        cpu->r[10] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b1020:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b1024:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 17u, &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN13CLinuxNetwork7ConnectEi @ 001b1028 (arm) */
void fn_001b1028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b1028:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x317u);
    }
L_001b102c:;
    {
        cpu->r[3] = rd32(0x001b1034u + + 0x240u);
    }
L_001b1030:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1034:;
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
L_001b1038:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b1040u, cpu->r[3], 0, 0);
    }
L_001b103c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001b1040:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b1044:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001b1048:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b11f0;
        }
    }
L_001b104c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001b1050:;
    {
        cpu->r[1] = rd32(0x001b1058u + + 0x220u);
    }
L_001b1054:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b1058:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001b105c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x138u);
    }
L_001b1060:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001b1064:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001b1068:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001b106c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1070:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b11fc;
        }
    }
L_001b1074:;
    {
        cpu->r[2] = rd32(0x001b107cu + + 0x200u);
    }
L_001b1078:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b107c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001b1080:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b124c;
        }
    }
L_001b1088:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b108c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001b1090:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001b1094:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001b1098:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001b109c:;
    {
        wr16(cpu->r[6] + + 0x2u, cpu->r[3]);
    }
L_001b10a0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001b10e8;
        }
    }
L_001b10a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000012c0u, 0, 0);
    }
L_001b10a8:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_001b10ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003eu, 0, 0);
    }
L_001b10b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001b10b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + - 0x4u);
    }
L_001b10b8:;
    {
        cpu->r[14] = 0x001b10bcu; imp_close(cpu); /* close */
    }
L_001b10bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001b10c0:;
    {
        wr32(cpu->r[7] + - 0x4u, cpu->r[10]);
    }
L_001b10c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b10c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b10cc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001b10d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b10e0;
        }
    }
L_001b10d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b10d8:;
    {
        cpu->r[14] = 0x001b10e0u;
    }
L_001b10dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b10e0u)) return;
    }
L_001b10e0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001b10e4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001b10b4;
        }
    }
L_001b10e8:;
    {
        cpu->r[5] = 0x00004c7cu;
    }
L_001b10ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b10f0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b10f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1104;
        }
    }
L_001b10f8:;
    {
        cpu->r[14] = 0x001b10fcu; imp_close(cpu); /* close */
    }
L_001b10fc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b1100:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001b1104:;
    {
        cpu->r[0] = rd16(cpu->r[6]);
    }
L_001b1108:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b110c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001b1110:;
    {
        cpu->r[5] = 0x00004bf8u;
    }
L_001b1114:;
    {
        cpu->r[14] = 0x001b1118u; imp_socket(cpu); /* socket */
    }
L_001b1118:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b111c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_001b1120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b11dc;
        }
    }
L_001b1124:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b1128:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001b112c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001b1130:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b1134:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_001b1138:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001b113c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b1140:;
    {
        cpu->r[14] = 0x001b1144u; imp_setsockopt(cpu); /* setsockopt */
    }
L_001b1144:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b1148:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b114c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b1150:;
    {
        cpu->r[14] = 0x001b1154u; imp_connect(cpu); /* connect */
    }
L_001b1154:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1230;
        }
    }
L_001b115c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b1160:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001b1164:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b1168:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b116c:;
    {
        cpu->r[14] = 0x001b1170u; imp_send(cpu); /* send */
    }
L_001b1170:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b120c;
        }
    }
L_001b1178:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b117c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_001b1180:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_001b1184:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b1188:;
    {
        cpu->r[14] = 0x001b118cu; imp_send(cpu); /* send */
    }
L_001b118c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b120c;
        }
    }
L_001b1194:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b1198:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b119c:;
    {
        cpu->r[14] = 0x001b11a0u; imp_strlen(cpu); /* strlen */
    }
L_001b11a0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b11a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b11a8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b11ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b11b0:;
    {
        cpu->r[14] = 0x001b11b4u; imp_send(cpu); /* send */
    }
L_001b11b4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b11b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b125c;
        }
    }
L_001b11bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b11c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b11c4:;
    {
        cpu->r[14] = 0x001b11c8u; fn_001b2880(cpu);
    }
L_001b11c8:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b11cc:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b11d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b11d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b11d8:;
    {
        goto L_001b11f4;
    }
L_001b11dc:;
    {
        cpu->r[14] = 0x001b11e0u; imp___errno(cpu); /* __errno */
    }
L_001b11e0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b11e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b11e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b11ec:;
    {
        cpu->r[14] = 0x001b11f0u; fn_001b0b78(cpu);
    }
L_001b11f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b11f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b11f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b11fcu)) return;
    }
L_001b11fc:;
    {
        cpu->r[0] = rd32(0x001b1204u + + 0x7cu);
    }
L_001b1200:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b1208u, cpu->r[0], 0, 0);
    }
L_001b1204:;
    {
        cpu->r[14] = 0x001b1208u; imp_atoi(cpu); /* atoi */
    }
L_001b1208:;
    {
        goto L_001b1088;
    }
L_001b120c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001b1210:;
    {
        wr8(cpu->r[4] + + 0x315u, cpu->r[7]);
    }
L_001b1214:;
    {
        cpu->r[14] = 0x001b1218u; imp___errno(cpu); /* __errno */
    }
L_001b1218:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b121c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1220:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1224:;
    {
        cpu->r[14] = 0x001b1228u; fn_001b0b78(cpu);
    }
L_001b1228:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b122c:;
    {
        goto L_001b11f4;
    }
L_001b1230:;
    {
        cpu->r[14] = 0x001b1234u; imp___errno(cpu); /* __errno */
    }
L_001b1234:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b1238:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b123c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1240:;
    {
        cpu->r[14] = 0x001b1244u; fn_001b0b78(cpu);
    }
L_001b1244:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b1248:;
    {
        goto L_001b11f4;
    }
L_001b124c:;
    {
        cpu->r[0] = rd32(0x001b1254u + + 0x30u);
    }
L_001b1250:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b1258u, cpu->r[0], 0, 0);
    }
L_001b1254:;
    {
        cpu->r[14] = 0x001b1258u; imp_atoi(cpu); /* atoi */
    }
L_001b1258:;
    {
        goto L_001b1088;
    }
L_001b125c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1260:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001b1264:;
    {
        wr8(cpu->r[4] + + 0x315u, cpu->r[7]);
    }
L_001b1268:;
    {
        cpu->r[14] = 0x001b126cu; fn_001b0b78(cpu);
    }
L_001b126c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1270:;
    {
        goto L_001b11f4;
    }
}

/* _ZN13CLinuxNetwork23UpdateUnblockingConnectEv @ 001b1288 (arm) */
void fn_001b1288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b1288:;
    {
        cpu->r[3] = 0x00004bf4u;
    }
L_001b128c:;
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
L_001b1290:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b1294:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000009cu, 1, 0);
    }
L_001b1298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b129c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001b12a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b13fc;
        }
    }
L_001b12a4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b12a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b12ac:;
    {
        cpu->r[6] = 0x00004bf8u;
    }
L_001b12b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b12b4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b12b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b12bc:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[5]);
    }
L_001b12c0:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001b12c4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[5]);
    }
L_001b12c8:;
    {
        cpu->r[14] = 0x001b12ccu; imp_memset(cpu); /* memset */
    }
L_001b12cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b12d0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b12d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_001b12d8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001b12dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001b12e0:;
    {
        uint32_t v = cpu->r[12] & 0x0000001fu; cpu->r[8] = v;
    }
L_001b12e4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 5u, &shc); cpu->r[12] = v;
    }
L_001b12e8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_001b12ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b12f0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b12f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001b12f8:;
    {
        cpu->r[14] = rd32(cpu->r[12] + - 0x90u);
    }
L_001b12fc:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[7], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001b1300:;
    {
        wr32(cpu->r[12] + - 0x90u, cpu->r[14]);
    }
L_001b1304:;
    {
        cpu->r[14] = 0x001b1308u; imp_select(cpu); /* select */
    }
L_001b1308:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b130c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b1408;
        }
    }
L_001b1310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b13fc;
        }
    }
L_001b1314:;
    {
        cpu->r[10] = 0x00000004u;
    }
L_001b1318:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b131c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1320:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b1324:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b1328:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_001b132c:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[10]);
    }
L_001b1330:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b1334:;
    {
        cpu->r[14] = 0x001b1338u; imp_getsockopt(cpu); /* getsockopt */
    }
L_001b1338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b133c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b1408;
        }
    }
L_001b1340:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x94u);
    }
L_001b1344:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b1348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1408;
        }
    }
L_001b134c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b1350:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001b1354:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b1358:;
    {
        cpu->r[14] = 0x001b135cu; imp_fcntl(cpu); /* fcntl */
    }
L_001b135c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1360:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b1424;
        }
    }
L_001b1364:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000800u; cpu->r[2] = v;
    }
L_001b1368:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b136c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b1370:;
    {
        cpu->r[14] = 0x001b1374u; imp_fcntl(cpu); /* fcntl */
    }
L_001b1374:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1378:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b1424;
        }
    }
L_001b137c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b1380:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001b1384:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b1388:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b138c:;
    {
        cpu->r[14] = 0x001b1390u; imp_send(cpu); /* send */
    }
L_001b1390:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1420;
        }
    }
L_001b1398:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b139c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_001b13a0:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_001b13a4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b13a8:;
    {
        cpu->r[14] = 0x001b13acu; imp_send(cpu); /* send */
    }
L_001b13ac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b13b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1420;
        }
    }
L_001b13b4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b13b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b13bc:;
    {
        cpu->r[14] = 0x001b13c0u; imp_strlen(cpu); /* strlen */
    }
L_001b13c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b13c4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b13c8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b13cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001b13d0:;
    {
        cpu->r[14] = 0x001b13d4u; imp_send(cpu); /* send */
    }
L_001b13d4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b13d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b143c;
        }
    }
L_001b13dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b13e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b13e4:;
    {
        cpu->r[14] = 0x001b13e8u; fn_001b2880(cpu);
    }
L_001b13e8:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b13ec:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b13f0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b13f4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b13f8:;
    {
        goto L_001b1400;
    }
L_001b13fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b1400:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001b1404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1408u)) return;
    }
L_001b1408:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b140c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1410:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001b1414:;
    {
        cpu->r[14] = 0x001b1418u; fn_001b0b78(cpu);
    }
L_001b1418:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b141c:;
    {
        goto L_001b1400;
    }
L_001b1420:;
    {
        wr8(cpu->r[4] + + 0x315u, cpu->r[8]);
    }
L_001b1424:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b1428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b142c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001b1430:;
    {
        cpu->r[14] = 0x001b1434u; fn_001b0b78(cpu);
    }
L_001b1434:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b1438:;
    {
        goto L_001b1400;
    }
L_001b143c:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b1440:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1444:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b1448:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b144c:;
    {
        wr8(cpu->r[4] + + 0x315u, cpu->r[5]);
    }
L_001b1450:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b1454:;
    {
        cpu->r[14] = 0x001b1458u; fn_001b0b78(cpu);
    }
L_001b1458:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b145c:;
    {
        goto L_001b1400;
    }
}

/* _ZN13CLinuxNetwork22StartUnblockingConnectEi @ 001b1460 (arm) */
void fn_001b1460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b1460:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x317u);
    }
L_001b1464:;
    {
        cpu->r[3] = rd32(0x001b146cu + + 0x1d8u);
    }
L_001b1468:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b146c:;
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
L_001b1470:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b1478u, cpu->r[3], 0, 0);
    }
L_001b1474:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001b1478:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b147c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001b1480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b15e0;
        }
    }
L_001b1484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001b1488:;
    {
        cpu->r[1] = 0x0000748cu;
    }
L_001b148c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001b1490:;
    {
        cpu->r[2] = rd32(0x001b1498u + + 0x1b0u);
    }
L_001b1494:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b1498:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001b149c:;
    {
        cpu->r[0] = 0x00004bf4u;
    }
L_001b14a0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001b14a4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x138u);
    }
L_001b14a8:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001b14ac:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[8]);
    }
L_001b14b0:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001b14b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b14b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1600;
        }
    }
L_001b14bc:;
    {
        cpu->r[2] = rd32(0x001b14c4u + + 0x188u);
    }
L_001b14c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b14c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001b14c8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b14cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1610;
        }
    }
L_001b14d0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b14d4:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001b14d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001b14dc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001b14e0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001b14e4:;
    {
        wr16(cpu->r[6] + + 0x2u, cpu->r[3]);
    }
L_001b14e8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001b1530;
        }
    }
L_001b14ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000012c0u, 0, 0);
    }
L_001b14f0:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_001b14f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003eu, 0, 0);
    }
L_001b14f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001b14fc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + - 0x4u);
    }
L_001b1500:;
    {
        cpu->r[14] = 0x001b1504u; imp_close(cpu); /* close */
    }
L_001b1504:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001b1508:;
    {
        wr32(cpu->r[7] + - 0x4u, cpu->r[10]);
    }
L_001b150c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b1510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1514:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001b1518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1528;
        }
    }
L_001b151c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b1520:;
    {
        cpu->r[14] = 0x001b1528u;
    }
L_001b1524:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1528u)) return;
    }
L_001b1528:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001b152c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001b14fc;
        }
    }
L_001b1530:;
    {
        cpu->r[5] = 0x00004c7cu;
    }
L_001b1534:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b1538:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b153c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b154c;
        }
    }
L_001b1540:;
    {
        cpu->r[14] = 0x001b1544u; imp_close(cpu); /* close */
    }
L_001b1544:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b1548:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001b154c:;
    {
        cpu->r[0] = rd16(cpu->r[6]);
    }
L_001b1550:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b1554:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001b1558:;
    {
        cpu->r[5] = 0x00004bf8u;
    }
L_001b155c:;
    {
        cpu->r[14] = 0x001b1560u; imp_socket(cpu); /* socket */
    }
L_001b1560:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1564:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_001b1568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b15e8;
        }
    }
L_001b156c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001b1570:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b1574:;
    {
        cpu->r[14] = 0x001b1578u; imp_fcntl(cpu); /* fcntl */
    }
L_001b1578:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b157c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b15e8;
        }
    }
L_001b1580:;
    {
        uint32_t v = cpu->r[0] | 0x00000800u; cpu->r[2] = v;
    }
L_001b1584:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001b1588:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b158c:;
    {
        cpu->r[14] = 0x001b1590u; imp_fcntl(cpu); /* fcntl */
    }
L_001b1590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1594:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b15e8;
        }
    }
L_001b1598:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b159c:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001b15a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b15a4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001b15a8:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_001b15ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b15b0:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001b15b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b15b8:;
    {
        cpu->r[14] = 0x001b15bcu; imp_setsockopt(cpu); /* setsockopt */
    }
L_001b15bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b15c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b15c4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b15c8:;
    {
        cpu->r[14] = 0x001b15ccu; imp_connect(cpu); /* connect */
    }
L_001b15cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b15d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b1620;
        }
    }
L_001b15d4:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b15d8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001b15dc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b15e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b15e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b15e8u)) return;
    }
L_001b15e8:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b15ec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b15f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b15f4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b15f8:;
    {
        cpu->r[14] = 0x001b15fcu; fn_001b0b78(cpu);
    }
L_001b15fc:;
    {
        goto L_001b15e0;
    }
L_001b1600:;
    {
        cpu->r[0] = rd32(0x001b1608u + + 0x48u);
    }
L_001b1604:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b160cu, cpu->r[0], 0, 0);
    }
L_001b1608:;
    {
        cpu->r[14] = 0x001b160cu; imp_atoi(cpu); /* atoi */
    }
L_001b160c:;
    {
        goto L_001b14d0;
    }
L_001b1610:;
    {
        cpu->r[0] = rd32(0x001b1618u + + 0x3cu);
    }
L_001b1614:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b161cu, cpu->r[0], 0, 0);
    }
L_001b1618:;
    {
        cpu->r[14] = 0x001b161cu; imp_atoi(cpu); /* atoi */
    }
L_001b161c:;
    {
        goto L_001b14d0;
    }
L_001b1620:;
    {
        cpu->r[14] = 0x001b1624u; imp___errno(cpu); /* __errno */
    }
L_001b1624:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b1628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000073u, 1, 1);
    }
L_001b162c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b15d4;
        }
    }
L_001b1630:;
    {
        cpu->r[3] = 0x0000748cu;
    }
L_001b1634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1638:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001b163c:;
    {
        cpu->r[14] = 0x001b1640u; fn_001b0b78(cpu);
    }
L_001b1640:;
    {
        goto L_001b15e0;
    }
}

/* _ZN13CLinuxNetwork12InitDiscoverEb @ 001b1658 (arm) */
void fn_001b1658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b1658:;
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
L_001b165c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001b1660:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b1664:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b1668:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001b166c:;
    {
        cpu->r[1] = rd32(0x001b1674u + + 0x148u);
    }
L_001b1670:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b1674:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b1678:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b167c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b1684u, cpu->r[1], 0, 0);
    }
L_001b1680:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1684:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1688:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b168c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001b1690:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1694:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_001b1698:;
    {
        wr32(cpu->r[12], cpu->r[4]);
    }
L_001b169c:;
    {
        cpu->r[5] = 0x00000011u;
    }
L_001b16a0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001b16a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001b16a8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001b16ac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_001b16b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001b16b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001b16b8:;
    {
        cpu->r[14] = 0x001b16bcu; imp_getaddrinfo(cpu); /* getaddrinfo */
    }
L_001b16bc:;
    {
        cpu->r[10] = rd32(0x001b16c4u + + 0xfcu);
    }
L_001b16c0:;
    {
        cpu->r[10] = add_flags(cpu, 0x001b16c8u, cpu->r[10], 0, 0);
    }
L_001b16c4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b16c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1768;
        }
    }
L_001b16cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b16d0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001b16d4:;
    {
        cpu->r[14] = 0x001b16d8u; imp_socket(cpu); /* socket */
    }
L_001b16d8:;
    {
        cpu->r[2] = 0x00004c7cu;
    }
L_001b16dc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b16e0:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_001b16e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1798;
        }
    }
L_001b16e8:;
    {
        cpu->r[3] = rd32(0x001b16f0u + + 0xd4u);
    }
L_001b16ec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_001b16f0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001b16f4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b16f8:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001b16fc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001b1700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b1704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1778;
        }
    }
L_001b1708:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b170c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1724;
        }
    }
L_001b1710:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b1714:;
    {
        cpu->r[14] = 0x001b1718u; imp_freeaddrinfo(cpu); /* freeaddrinfo */
    }
L_001b1718:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b171c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001b1720:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1724u)) return;
    }
L_001b1724:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b1728:;
    {
        cpu->r[2] = 0x00004c7cu;
    }
L_001b172c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001b1730:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001b1734:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_001b1738:;
    {
        cpu->r[14] = 0x001b173cu; imp_bind(cpu); /* bind */
    }
L_001b173c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1740:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1710;
        }
    }
L_001b1744:;
    {
        cpu->r[14] = 0x001b1748u; imp___errno(cpu); /* __errno */
    }
L_001b1748:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b174c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b1750:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1754:;
    {
        cpu->r[14] = 0x001b1758u; imp_freeaddrinfo(cpu); /* freeaddrinfo */
    }
L_001b1758:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b175c:;
    {
        cpu->r[14] = 0x001b1760u; fn_001b0b78(cpu);
    }
L_001b1760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b1764:;
    {
        goto L_001b171c;
    }
L_001b1768:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b176c:;
    {
        cpu->r[14] = 0x001b1770u; fn_001b0b78(cpu);
    }
L_001b1770:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1774:;
    {
        goto L_001b171c;
    }
L_001b1778:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b177c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001b1780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001b1784:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001b1788:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b178c:;
    {
        cpu->r[14] = 0x001b1790u; imp_setsockopt(cpu); /* setsockopt */
    }
L_001b1790:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1794:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1708;
        }
    }
L_001b1798:;
    {
        cpu->r[14] = 0x001b179cu; imp___errno(cpu); /* __errno */
    }
L_001b179c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b17a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b17a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b17a8:;
    {
        cpu->r[14] = 0x001b17acu; imp_freeaddrinfo(cpu); /* freeaddrinfo */
    }
L_001b17ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b17b0:;
    {
        cpu->r[14] = 0x001b17b4u; fn_001b0b78(cpu);
    }
L_001b17b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b17b8:;
    {
        goto L_001b171c;
    }
}

/* _ZN13CLinuxNetwork11StartServerEb @ 001b17c8 (arm) */
void fn_001b17c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b17c8:;
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
L_001b17cc:;
    {
        cpu->r[5] = rd32(0x001b17d4u + + 0x198u);
    }
L_001b17d0:;
    {
        cpu->r[8] = rd32(0x001b17d8u + + 0x198u);
    }
L_001b17d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000138u, 1, 0);
    }
L_001b17d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b17e0u, cpu->r[5], 0, 0);
    }
L_001b17dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b17e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b17e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b17e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001b17ec:;
    {
        wr8(cpu->r[0] + + 0x317u, cpu->r[1]);
    }
L_001b17f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b17f4:;
    {
        wr32(cpu->r[13] + + 0x134u, cpu->r[3]);
    }
L_001b17f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1944;
        }
    }
L_001b17fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001b1800:;
    {
        cpu->r[1] = rd32(0x001b1808u + + 0x16cu);
    }
L_001b1804:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001b1808:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b180c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b1814u, cpu->r[1], 0, 0);
    }
L_001b1810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1814:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001b181c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1820:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001b1824:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1828:;
    {
        cpu->r[14] = 0x00000006u;
    }
L_001b182c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_001b1830:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_001b1834:;
    {
        wr32(cpu->r[12], cpu->r[4]);
    }
L_001b1838:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_001b183c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_001b1840:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_001b1844:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001b1848:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001b184c:;
    {
        cpu->r[14] = 0x001b1850u; imp_getaddrinfo(cpu); /* getaddrinfo */
    }
L_001b1850:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1854:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1934;
        }
    }
L_001b1858:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b185c:;
    {
        cpu->r[4] = 0x00004c78u;
    }
L_001b1860:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001b1864:;
    {
        cpu->r[14] = 0x001b1868u; imp_socket(cpu); /* socket */
    }
L_001b1868:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b186c:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[0]);
    }
L_001b1870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1910;
        }
    }
L_001b1874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000138u, 0, 0);
    }
L_001b1878:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b187c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b1880:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001b1884:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x10cu;
        wr32(cpu->r[3] + - 0x10cu, cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_001b1888:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b188c:;
    {
        cpu->r[14] = 0x001b1890u; imp_setsockopt(cpu); /* setsockopt */
    }
L_001b1890:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1910;
        }
    }
L_001b1898:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b189c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001b18a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_001b18a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001b18a8:;
    {
        cpu->r[14] = 0x001b18acu; imp_bind(cpu); /* bind */
    }
L_001b18ac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b18b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1910;
        }
    }
L_001b18b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b18b8:;
    {
        cpu->r[3] = 0x00000100u;
    }
L_001b18bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001b18c0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_001b18c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b18c8:;
    {
        cpu->r[14] = 0x001b18ccu; imp_inet_ntop(cpu); /* inet_ntop */
    }
L_001b18cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b18d0:;
    {
        cpu->r[14] = 0x001b18d4u; imp_freeaddrinfo(cpu); /* freeaddrinfo */
    }
L_001b18d4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001b18d8:;
    {
        cpu->r[1] = 0x00000080u;
    }
L_001b18dc:;
    {
        cpu->r[14] = 0x001b18e0u; imp_listen(cpu); /* listen */
    }
L_001b18e0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b18e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00007480u;
        }
    }
L_001b18e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001b18ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[6]);
        }
    }
L_001b18f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b194c;
        }
    }
L_001b18f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001b18f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x134u);
    }
L_001b18fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1900:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b1904:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1968;
        }
    }
L_001b1908:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000138u, 0, 0);
    }
L_001b190c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1910u)) return;
    }
L_001b1910:;
    {
        cpu->r[14] = 0x001b1914u; imp___errno(cpu); /* __errno */
    }
L_001b1914:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b1918:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b191c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1920:;
    {
        cpu->r[14] = 0x001b1924u; imp_freeaddrinfo(cpu); /* freeaddrinfo */
    }
L_001b1924:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1928:;
    {
        cpu->r[14] = 0x001b192cu; fn_001b0b78(cpu);
    }
L_001b192c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b1930:;
    {
        goto L_001b18f4;
    }
L_001b1934:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1938:;
    {
        cpu->r[14] = 0x001b193cu; fn_001b0b78(cpu);
    }
L_001b193c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1940:;
    {
        goto L_001b18f4;
    }
L_001b1944:;
    {
        cpu->r[14] = 0x001b1948u; fn_001b1658(cpu);
    }
L_001b1948:;
    {
        goto L_001b17fc;
    }
L_001b194c:;
    {
        cpu->r[14] = 0x001b1950u; imp___errno(cpu); /* __errno */
    }
L_001b1950:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b1954:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1958:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b195c:;
    {
        cpu->r[14] = 0x001b1960u; fn_001b0b78(cpu);
    }
L_001b1960:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b1964:;
    {
        goto L_001b18f4;
    }
L_001b1968:;
    {
        cpu->r[14] = 0x001b196cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b196c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_001b1970:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b1974:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * 0x001b197cu; cpu->r[7] = v;
        }
    }
}

/* _ZN13CLinuxNetwork15DiscoverServersEv @ 001b1978 (arm) */
void fn_001b1978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b1978:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b197c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b1980:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b1984:;
    {
        cpu->r[14] = 0x001b1988u; fn_001b1658(cpu);
    }
L_001b1988:;
    {
        cpu->r[14] = 0x001b198cu; fn_0009b4d0(cpu);
    }
L_001b198c:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b1990:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b1994:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b1998:;
    {
        cpu->r[3] = 0x00007488u;
    }
L_001b199c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b19a0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b19a4:;
    {
        cpu->r[3] = 0x00007484u;
    }
L_001b19a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001b19ac:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b19b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b19b4u)) return;
    }
}

/* _ZN13CLinuxNetwork6updateEv @ 001b19b4 (arm) */
void fn_001b19b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b19b4:;
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
L_001b19b8:;
    {
        cpu->r[6] = rd32(0x001b19c0u + + 0xb30u);
    }
L_001b19bc:;
    {
        cpu->r[8] = rd32(0x001b19c4u + + 0xb30u);
    }
L_001b19c0:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b19c4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b19ccu, cpu->r[6], 0, 0);
    }
L_001b19c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000104u, 1, 0);
    }
L_001b19cc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b19d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b19d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001b19d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_001b19dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b19e0:;
    {
        wr32(cpu->r[13] + + 0xfcu, cpu->r[3]);
    }
L_001b19e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1d60;
        }
    }
L_001b19e8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_001b19ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1bcc;
        }
    }
L_001b19f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001b19f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1a28;
        }
    }
L_001b19f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b19fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b1a00:;
    {
        cpu->r[14] = 0x001b1a08u;
    }
L_001b1a04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1a08u)) return;
    }
L_001b1a08:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b1a0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001b1a10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xfcu);
    }
L_001b1a14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b1a18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b1a1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b24ec;
        }
    }
L_001b1a20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_001b1a24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1a28u)) return;
    }
L_001b1a28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x208u);
    }
L_001b1a2c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001b1a30:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[10]);
    }
L_001b1a34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001b1a38:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[10]);
    }
L_001b1a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1ebc;
        }
    }
L_001b1a40:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b1a44:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b1a48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1a4c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b1a50:;
    {
        cpu->r[14] = 0x001b1a54u; imp_memset(cpu); /* memset */
    }
L_001b1a54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1a58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b1a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1a60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001b1a64:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b1a68:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1a6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1acc;
        }
    }
L_001b1a74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x000012c0u, 0, 0);
    }
L_001b1a78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1a7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003eu, 0, 0);
    }
L_001b1a80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b1a84:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b1a88:;
    {
        uint32_t v = cpu->r[2] & 0x0000001fu; cpu->r[14] = v;
    }
L_001b1a8c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1a90:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b1a94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1a98:;
    {
        cpu->r[12] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1a9c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001b1aa0:;
    {
        wr32(cpu->r[2] + - 0xecu, cpu->r[12]);
    }
L_001b1aa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b1acc;
        }
    }
L_001b1aa8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001b1aac:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[10]);
    }
L_001b1ab0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001b1ab4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b1ae0;
        }
    }
L_001b1ab8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001b1abc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b1ac0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1ac4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1ac8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1a74;
        }
    }
L_001b1acc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001b1ad0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b1ad4:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[10]);
    }
L_001b1ad8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001b1adc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b1ab8;
        }
    }
L_001b1ae0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1ae8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b1aec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b1af0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1af4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001b1af8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b1afc:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001b1b00:;
    {
        cpu->r[14] = 0x001b1b04u; imp_select(cpu); /* select */
    }
L_001b1b04:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24c4;
        }
    }
L_001b1b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1b10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b1ec4;
        }
    }
L_001b1b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1b18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b1b1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1ec4;
        }
    }
L_001b1b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00004c00u, 0, 0);
    }
L_001b1b24:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001b1b28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000080u, 0, 0);
    }
L_001b1b2c:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_001b1b30:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001b1b34:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001b1b38:;
    {
        goto L_001b1b50;
    }
L_001b1b3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b1b40:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_001b1b44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001b1b48:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001b1b4c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b1ec4;
        }
    }
L_001b1b50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001b1b54:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1b58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1b5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1b3c;
        }
    }
L_001b1b60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000012c0u, 0, 0);
    }
L_001b1b64:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1b68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003eu, 0, 0);
    }
L_001b1b6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b1b70:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[1] = v;
    }
L_001b1b74:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1b78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1b7c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1b80:;
    {
        uint32_t v = cpu->r[2] & shifter(cpu->r[9], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b1b84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1b3c;
        }
    }
L_001b1b88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b1b8c:;
    {
        cpu->r[2] = 0x00002800u;
    }
L_001b1b90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b1b94:;
    {
        cpu->r[14] = 0x001b1b98u; imp_recv(cpu); /* recv */
    }
L_001b1b98:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2478;
        }
    }
L_001b1ba0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1ba4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b2474;
        }
    }
L_001b1ba8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b1bac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b1bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1bb4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b1bb8:;
    {
        cpu->r[14] = 0x001b1bbcu; fn_001b2ff8(cpu);
    }
L_001b1bbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1bc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b235c;
        }
    }
L_001b1bc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1bc8:;
    {
        goto L_001b1b3c;
    }
L_001b1bcc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b1bd0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b1bd4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b1bd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1bdc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b1be0:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_001b1be4:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[5]);
    }
L_001b1be8:;
    {
        cpu->r[14] = 0x001b1becu; imp_memset(cpu); /* memset */
    }
L_001b1bec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1bf0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001b1bf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b1bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1c84;
        }
    }
L_001b1bfc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b1c00:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001b1c04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001b1c08:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1c0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1c6c;
        }
    }
L_001b1c14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000012c0u, 0, 0);
    }
L_001b1c18:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1c1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003eu, 0, 0);
    }
L_001b1c20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b1c24:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b1c28:;
    {
        uint32_t v = cpu->r[2] & 0x0000001fu; cpu->r[10] = v;
    }
L_001b1c2c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1c30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001b1c34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1c38:;
    {
        cpu->r[14] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1c3c:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[12], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001b1c40:;
    {
        wr32(cpu->r[2] + - 0xecu, cpu->r[14]);
    }
L_001b1c44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001b1c6c;
        }
    }
L_001b1c48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b1c4c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001b1c50:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001b1c54:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b1c80;
        }
    }
L_001b1c58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001b1c5c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b1c60:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1c64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1c14;
        }
    }
L_001b1c6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b1c70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b1c74:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001b1c78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001b1c7c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b1c58;
        }
    }
L_001b1c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b1c84:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b1c88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1c8c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001b1c90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b1c94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b1c98:;
    {
        cpu->r[14] = 0x001b1c9cu; imp_select(cpu); /* select */
    }
L_001b1c9c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b235c;
        }
    }
L_001b1ca4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1cac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1cb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b1cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1cb8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00004c00u, 0, 0);
    }
L_001b1cbc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001b1cc0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000080u, 0, 0);
    }
L_001b1cc4:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001b1cc8:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001b1ccc:;
    {
        goto L_001b1ce4;
    }
L_001b1cd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b1cd4:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_001b1cd8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001b1cdc:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001b1ce0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b19f8;
        }
    }
L_001b1ce4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001b1ce8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b1cec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1cd0;
        }
    }
L_001b1cf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000012c0u, 0, 0);
    }
L_001b1cf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1cfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003eu, 0, 0);
    }
L_001b1d00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b1d04:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[1] = v;
    }
L_001b1d08:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1d0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1d10:;
    {
        cpu->r[2] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1d14:;
    {
        uint32_t v = cpu->r[2] & shifter(cpu->r[10], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b1d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1cd0;
        }
    }
L_001b1d1c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b1d20:;
    {
        cpu->r[2] = 0x00002800u;
    }
L_001b1d24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b1d28:;
    {
        cpu->r[14] = 0x001b1d2cu; imp_recv(cpu); /* recv */
    }
L_001b1d2c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b23b8;
        }
    }
L_001b1d34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1d38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b236c;
        }
    }
L_001b1d3c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b1d40:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b1d44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1d48:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b1d4c:;
    {
        cpu->r[14] = 0x001b1d50u; fn_001b2ff8(cpu);
    }
L_001b1d50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b235c;
        }
    }
L_001b1d58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b1d5c:;
    {
        goto L_001b1cd0;
    }
L_001b1d60:;
    {
        cpu->r[7] = 0x00007488u;
    }
L_001b1d64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_001b1d68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b1d6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b225c;
        }
    }
L_001b1d70:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b1d74:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b1d78:;
    {
        cpu->r[7] = 0x00004c7cu;
    }
L_001b1d7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b1d80:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b1d84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b1d88:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_001b1d8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1d90:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[5]);
    }
L_001b1d94:;
    {
        cpu->r[14] = 0x001b1d98u; imp_memset(cpu); /* memset */
    }
L_001b1d98:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001b1d9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b1da0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b1da4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b1da8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_001b1dac:;
    {
        uint32_t v = cpu->r[14] & 0x0000001fu; cpu->r[10] = v;
    }
L_001b1db0:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 5u, &shc); cpu->r[14] = v;
    }
L_001b1db4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b1db8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b1dbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_001b1dc0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001b1dc4:;
    {
        cpu->r[9] = rd32(cpu->r[12] + - 0xecu);
    }
L_001b1dc8:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[14], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001b1dcc:;
    {
        wr32(cpu->r[12] + - 0xecu, cpu->r[14]);
    }
L_001b1dd0:;
    {
        cpu->r[14] = 0x001b1dd4u; imp_select(cpu); /* select */
    }
L_001b1dd4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b23e0;
        }
    }
L_001b1ddc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00004c00u, 0, 0);
    }
L_001b1de8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001b1dec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000080u, 0, 0);
    }
L_001b1df0:;
    {
        cpu->r[2] = 0x00002800u;
    }
L_001b1df4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1df8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b1dfc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001b1e00:;
    {
        cpu->r[11] = 0x00000010u;
    }
L_001b1e04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001b1e08:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[11]);
    }
L_001b1e0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_001b1e10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001b1e14:;
    {
        cpu->r[14] = 0x001b1e18u; imp_recvfrom(cpu); /* recvfrom */
    }
L_001b1e18:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1e1c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b1e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b23f0;
        }
    }
L_001b1e24:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1e28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b1e2c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001b1e30:;
    {
        cpu->r[14] = 0x001b1e34u; imp_memcmp(cpu); /* memcmp */
    }
L_001b1e34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b19f8;
        }
    }
L_001b1e3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1e40:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b1e44:;
    {
        cpu->r[14] = 0x001b1e48u; fn_001b0618(cpu);
    }
L_001b1e48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1e4c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001b19f8;
        }
    }
L_001b1e50:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001b1e54:;
    {
        cpu->r[14] = 0x001b1e58u; fn_0018ba6c(cpu);
    }
L_001b1e58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b1e5c:;
    {
        cpu->r[14] = 0x001b1e60u; fn_001b33e0(cpu);
    }
L_001b1e60:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b1e64:;
    {
        cpu->r[14] = 0x001b1e68u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b1e68:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b1e6c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001b1e70:;
    {
        wr32(cpu->r[5] + + 0x138u, cpu->r[0]);
    }
L_001b1e74:;
    {
        cpu->r[14] = 0x001b1e78u; imp_memcpy(cpu); /* memcpy */
    }
L_001b1e78:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b1e7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000100u, 0, 0);
    }
L_001b1e80:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_001b1e84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000084u, 0, 0);
    }
L_001b1e88:;
    {
        cpu->r[14] = 0x001b1e8cu; imp_memcpy(cpu); /* memcpy */
    }
L_001b1e8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b1e90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b1e94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x000000bau, 0, 0);
    }
L_001b1e98:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], 0x0000003au, 1, 0);
    }
L_001b1e9c:;
    {
        cpu->r[14] = 0x001b1ea0u; imp_memcpy(cpu); /* memcpy */
    }
L_001b1ea0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b1ea4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b1ea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b1eac:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001b1eb0:;
    {
        cpu->r[14] = 0x001b1eb8u;
    }
L_001b1eb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b1eb8u)) return;
    }
L_001b1eb8:;
    {
        goto L_001b19f8;
    }
L_001b1ebc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b1ec0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b1ec4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b1ec8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b1ecc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b1ed0:;
    {
        cpu->r[14] = 0x001b1ed4u; imp_memset(cpu); /* memset */
    }
L_001b1ed4:;
    {
        cpu->r[3] = 0x00004c78u;
    }
L_001b1ed8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1edc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b1ee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b1ee4:;
    {
        cpu->r[3] = 0x00004c7cu;
    }
L_001b1ee8:;
    {
        uint32_t v = cpu->r[2] & 0x0000001fu; cpu->r[14] = v;
    }
L_001b1eec:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001b1ef0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1ef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b1ef8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1efc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001b1f00:;
    {
        cpu->r[0] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1f04:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001b1f08:;
    {
        wr32(cpu->r[2] + - 0xecu, cpu->r[0]);
    }
L_001b1f0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2364;
        }
    }
L_001b1f10:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 5u, &shc); cpu->r[2] = v;
    }
L_001b1f14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1f18:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001b1f1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b1f20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b1f24:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[3] = v;
    }
L_001b1f28:;
    {
        cpu->r[14] = rd32(cpu->r[2] + - 0xecu);
    }
L_001b1f2c:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001b1f30:;
    {
        wr32(cpu->r[2] + - 0xecu, cpu->r[1]);
    }
L_001b1f34:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001b2364;
        }
    }
L_001b1f38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b1f3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b1f40:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b1f44:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001b1f48:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001b1f4c:;
    {
        cpu->r[14] = 0x001b1f50u; imp_select(cpu); /* select */
    }
L_001b1f50:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1f54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24a8;
        }
    }
L_001b1f58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b1f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b1f60:;
    {
        cpu->r[3] = 0x00004c78u;
    }
L_001b1f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1f68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b1f6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b1f70:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[2] = v;
    }
L_001b1f74:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 5u, &shc); cpu->r[3] = v;
    }
L_001b1f78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b1f7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0xecu);
    }
L_001b1f80:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001b1f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2134;
        }
    }
L_001b1f88:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b1f8c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001b1f90:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001b1f94:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[2]);
    }
L_001b1f98:;
    {
        goto L_001b1fac;
    }
L_001b1f9c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001b1fa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b1fa4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
    }
L_001b1fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24d4;
        }
    }
L_001b1fac:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xc0u);
    }
L_001b1fb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b1fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1f9c;
        }
    }
L_001b1fb8:;
    {
        cpu->r[3] = 0x00004c78u;
    }
L_001b1fbc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_001b1fc0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b1fc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_001b1fc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001b1fcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], 0x000012c0u, 0, 0);
    }
L_001b1fd0:;
    {
        cpu->r[14] = 0x001b1fd4u; imp_accept(cpu); /* accept */
    }
L_001b1fd4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000003eu, 0, 0);
    }
L_001b1fd8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b1fdc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b1fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24c4;
        }
    }
L_001b1fe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b1fe8:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001b1fec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00004c00u, 0, 0);
    }
L_001b1ff0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001b1ff4:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x64u;
        wr32(cpu->r[3] + - 0x64u, cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001b1ff8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b1ffc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000080u, 0, 0);
    }
L_001b2000:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001b2004:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b2008:;
    {
        cpu->r[14] = 0x001b200cu; imp_setsockopt(cpu); /* setsockopt */
    }
L_001b200c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b2010:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b2014:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b2018:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b201c:;
    {
        cpu->r[14] = 0x001b2020u; imp_recv(cpu); /* recv */
    }
L_001b2020:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24a8;
        }
    }
L_001b2028:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001b202c:;
    {
        cpu->r[14] = 0x001b2030u; fn_0018ba6c(cpu);
    }
L_001b2030:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b2034:;
    {
        cpu->r[14] = 0x001b2038u; fn_001b33e0(cpu);
    }
L_001b2038:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001b203c:;
    {
        cpu->r[14] = 0x001b2040u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b2040:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b2044:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b2048:;
    {
        wr32(cpu->r[10] + + 0x138u, cpu->r[0]);
    }
L_001b204c:;
    {
        cpu->r[14] = 0x001b2050u; imp_memcpy(cpu); /* memcpy */
    }
L_001b2050:;
    {
        cpu->r[3] = 0x00004c80u;
    }
L_001b2054:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_001b2058:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b205c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001b2060:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2064:;
    {
        wr8(cpu->r[10] + + 0x104u, cpu->r[0]);
    }
L_001b2068:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b206c:;
    {
        cpu->r[14] = 0x001b2070u; imp_recv(cpu); /* recv */
    }
L_001b2070:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2074:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001b2078:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001b207c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24c4;
        }
    }
L_001b2080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001b2084:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b2088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00004c00u, 0, 0);
    }
L_001b208c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_001b2090:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x80u);
    }
L_001b2094:;
    {
        wr8(cpu->r[2] + + 0x105u, cpu->r[1]);
    }
L_001b2098:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b209c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2080;
        }
    }
L_001b20a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b20a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b20a8:;
    {
        cpu->r[2] = 0x00002800u;
    }
L_001b20ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b20b0:;
    {
        cpu->r[14] = 0x001b20b4u; imp_recv(cpu); /* recv */
    }
L_001b20b4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b20b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24c4;
        }
    }
L_001b20bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000ffu, 1, 1);
    }
L_001b20c0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001b20c4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[5] = 0x000000ffu;
        }
    }
L_001b20c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b20cc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b20d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b20d4:;
    {
        cpu->r[14] = 0x001b20d8u; imp_memcpy(cpu); /* memcpy */
    }
L_001b20d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b20dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b20e0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b20e4:;
    {
        wr8(cpu->r[10] + cpu->r[5], cpu->r[3]);
    }
L_001b20e8:;
    {
        cpu->r[14] = 0x001b20ecu; fn_001b2880(cpu);
    }
L_001b20ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b20f0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b20f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b20f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b20fc:;
    {
        cpu->r[14] = 0x001b2104u;
    }
L_001b2100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2104u)) return;
    }
L_001b2104:;
    {
        cpu->r[14] = 0x001b2108u; fn_0009b4d0(cpu);
    }
L_001b2108:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b210c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], 0x00000058u, 0, 0);
    }
L_001b2110:;
    {
        cpu->r[2] = 0x00000016u;
    }
L_001b2114:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001b2118:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x60u;
        wr8(cpu->r[1] + - 0x60u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001b211c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b2120:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001b2124:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[0]);
    }
L_001b2128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b212c:;
    {
        cpu->r[14] = 0x001b2134u;
    }
L_001b2130:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2134u)) return;
    }
L_001b2134:;
    {
        cpu->r[3] = rd32(0x001b213cu + + 0x3bcu);
    }
L_001b2138:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b213c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b2140:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001b2144:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001b2148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b214c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b215c;
        }
    }
L_001b2150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x208u);
    }
L_001b2154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001b2158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b215c:;
    {
        cpu->r[5] = 0x00004c7cu;
    }
L_001b2160:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b2164:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b216c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[3] = v;
    }
L_001b2170:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_001b2174:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[2] = v;
    }
L_001b2178:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b217c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b2180:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0xecu);
    }
L_001b2184:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001b2188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b19f8;
        }
    }
L_001b218c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00004c00u, 0, 0);
    }
L_001b2190:;
    {
        cpu->r[2] = 0x00002800u;
    }
L_001b2194:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000080u, 0, 0);
    }
L_001b2198:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b219c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b21a0:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001b21a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_001b21a8:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[12]);
    }
L_001b21ac:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001b21b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001b21b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001b21b8:;
    {
        cpu->r[14] = 0x001b21bcu; imp_recvfrom(cpu); /* recvfrom */
    }
L_001b21bc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b21c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24c4;
        }
    }
L_001b21c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b21c8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b21cc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001b21d0:;
    {
        cpu->r[14] = 0x001b21d4u; imp_memcmp(cpu); /* memcmp */
    }
L_001b21d4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b21d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b19f8;
        }
    }
L_001b21dc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001b21e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000084u, 0, 0);
    }
L_001b21e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001b21e8:;
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
L_001b21ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b21f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001b21f4:;
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
L_001b21f8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001b21fc:;
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
L_001b2200:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001b2204:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001b2208:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[0]);
        cpu->r[12] = wb_tmp;
    }
L_001b220c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000000bau, 0, 0);
    }
L_001b2210:;
    {
        wr16(cpu->r[12], cpu->r[1]);
    }
L_001b2214:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b2218:;
    {
        cpu->r[14] = 0x001b221cu; imp_strcpy(cpu); /* strcpy */
    }
L_001b221c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20cu);
    }
L_001b2220:;
    {
        cpu->r[14] = 0x001b2224u; imp_strlen(cpu); /* strlen */
    }
L_001b2224:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001b2228:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001b222c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b2230:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001b2234:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001b2238:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000003au, 0, 0);
    }
L_001b223c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b2240:;
    {
        cpu->r[14] = 0x001b2244u; imp_sendto(cpu); /* sendto */
    }
L_001b2244:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b19f8;
        }
    }
L_001b224c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2250:;
    {
        cpu->r[14] = 0x001b2254u; fn_001b0b78(cpu);
    }
L_001b2254:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b2258:;
    {
        goto L_001b1a0c;
    }
L_001b225c:;
    {
        cpu->r[10] = 0x00007484u;
    }
L_001b2260:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_001b2264:;
    {
        cpu->r[14] = 0x001b2268u; fn_00071ffc(cpu);
    }
L_001b2268:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_001b226c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b1d70;
        }
    }
L_001b2270:;
    {
        cpu->r[14] = 0x001b2274u; fn_00071ffc(cpu);
    }
L_001b2274:;
    {
        cpu->r[3] = rd32(0x001b227cu + + 0x27cu);
    }
L_001b2278:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001b227c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b2280:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001b2284:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_001b2288:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b228c:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001b2290:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001b2294:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b2298:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bb0u, 0, 0);
    }
L_001b229c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001b22a0:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[0]);
    }
L_001b22a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b242c;
        }
    }
L_001b22a8:;
    {
        cpu->r[3] = rd32(0x001b22b0u + + 0x24cu);
    }
L_001b22ac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b22b0:;
    {
        cpu->r[3] = rd32(0x001b22b8u + + 0x248u);
    }
L_001b22b4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001b22b8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b22bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b22c0:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_001b22c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001b22c8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_001b22cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000003u; set_nz(cpu, v); }
    }
L_001b22d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2404;
        }
    }
L_001b22d4:;
    {
        cpu->r[14] = 0x001b22d8u; imp_gethostbyname(cpu); /* gethostbyname */
    }
L_001b22d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b22dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b22e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b24dc;
        }
    }
L_001b22e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_001b22e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b22ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001b22f0:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[3]);
    }
L_001b22f4:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_001b22f8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001b22fc:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_001b2300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001b2304:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001b2308:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001b230c:;
    {
        wr16(cpu->r[13] + + 0xecu, cpu->r[1]);
    }
L_001b2310:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001b2314:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001b2318:;
    {
        cpu->r[14] = 0x001b231cu; imp_memcpy(cpu); /* memcpy */
    }
L_001b231c:;
    {
        cpu->r[3] = rd32(0x001b2324u + + 0x1e0u);
    }
L_001b2320:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b2324:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001b2328:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001b232c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001b2330:;
    {
        wr16(cpu->r[13] + + 0xeeu, cpu->r[3]);
    }
L_001b2334:;
    {
        cpu->r[0] = 0x00004c7cu;
    }
L_001b2338:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b233c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001b2340:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2344:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001b2348:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001b234c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001b2350:;
    {
        cpu->r[14] = 0x001b2354u; imp_sendto(cpu); /* sendto */
    }
L_001b2354:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1d70;
        }
    }
L_001b235c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b2360:;
    {
        goto L_001b1a0c;
    }
L_001b2364:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001b2368:;
    {
        goto L_001b1f38;
    }
L_001b236c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1d58;
        }
    }
L_001b2370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2374:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b2378:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b237c:;
    {
        cpu->r[14] = 0x001b2384u;
    }
L_001b2380:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2384u)) return;
    }
L_001b2384:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b2388:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b238c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2390:;
    {
        cpu->r[14] = 0x001b2398u;
    }
L_001b2394:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2398u)) return;
    }
L_001b2398:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x316u);
    }
L_001b239c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b23a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b1d58;
        }
    }
L_001b23a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b23a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b23ac:;
    {
        cpu->r[14] = 0x001b23b0u; fn_001b2e6c(cpu);
    }
L_001b23b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b23b4:;
    {
        goto L_001b1cd0;
    }
L_001b23b8:;
    {
        cpu->r[14] = 0x001b23bcu; imp___errno(cpu); /* __errno */
    }
L_001b23bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b23c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000068u, 1, 1);
    }
L_001b23c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2370;
        }
    }
L_001b23c8:;
    {
        cpu->r[14] = 0x001b23ccu; imp___errno(cpu); /* __errno */
    }
L_001b23cc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b23d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000006eu, 1, 1);
    }
L_001b23d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2370;
        }
    }
L_001b23d8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b23dc:;
    {
        goto L_001b1a0c;
    }
L_001b23e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b23e4:;
    {
        cpu->r[14] = 0x001b23e8u; fn_001b0b78(cpu);
    }
L_001b23e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b23ec:;
    {
        goto L_001b1a0c;
    }
L_001b23f0:;
    {
        cpu->r[14] = 0x001b23f4u; imp___errno(cpu); /* __errno */
    }
L_001b23f4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b23f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b23fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b2400:;
    {
        goto L_001b1a0c;
    }
L_001b2404:;
    {
        cpu->r[14] = 0x001b2408u; imp_inet_addr(cpu); /* inet_addr */
    }
L_001b2408:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b240c:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[0]);
    }
L_001b2410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b235c;
        }
    }
L_001b2414:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b2418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_001b241c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001b2420:;
    {
        cpu->r[14] = 0x001b2424u; imp_gethostbyaddr(cpu); /* gethostbyaddr */
    }
L_001b2424:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b2428:;
    {
        goto L_001b22dc;
    }
L_001b242c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_001b2430:;
    {
        cpu->r[0] = rd32(0x001b2438u + + 0xd0u);
    }
L_001b2434:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001b2438:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b243c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b2444u, cpu->r[0], 0, 0);
    }
L_001b2440:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[3]);
    }
L_001b2444:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_001b2448:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001b244c:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_001b2450:;
    {
        wr16(cpu->r[13] + + 0xecu, cpu->r[5]);
    }
L_001b2454:;
    {
        cpu->r[14] = 0x001b2458u; imp_atoi(cpu); /* atoi */
    }
L_001b2458:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b245c:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_001b2460:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001b2464:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_001b2468:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001b246c:;
    {
        wr16(cpu->r[13] + + 0xeeu, cpu->r[0]);
    }
L_001b2470:;
    {
        goto L_001b2334;
    }
L_001b2474:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b1bc4;
        }
    }
L_001b2478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b247c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b2480:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b2484:;
    {
        cpu->r[14] = 0x001b248cu;
    }
L_001b2488:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b248cu)) return;
    }
L_001b248c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b2490:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b2494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2498:;
    {
        cpu->r[14] = 0x001b24a0u;
    }
L_001b249c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b24a0u)) return;
    }
L_001b24a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b24a4:;
    {
        goto L_001b1b3c;
    }
L_001b24a8:;
    {
        cpu->r[14] = 0x001b24acu; imp___errno(cpu); /* __errno */
    }
L_001b24ac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b24b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b24b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b24b8:;
    {
        cpu->r[14] = 0x001b24bcu; fn_001b0b78(cpu);
    }
L_001b24bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b24c0:;
    {
        goto L_001b1a0c;
    }
L_001b24c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b24c8:;
    {
        cpu->r[14] = 0x001b24ccu; fn_001b0b78(cpu);
    }
L_001b24cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b24d0:;
    {
        goto L_001b1a0c;
    }
L_001b24d4:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b24d8:;
    {
        goto L_001b1fb8;
    }
L_001b24dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_001b24e0:;
    {
        cpu->r[14] = 0x001b24e4u; imp_herror(cpu); /* herror */
    }
L_001b24e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b24e8:;
    {
        goto L_001b1a0c;
    }
L_001b24ec:;
    {
        cpu->r[14] = 0x001b24f0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b24f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 1, 20u, &shc); cpu->r[8] = v;
        }
    }
L_001b24f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b24f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001b24fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 10u, &shc); cpu->r[0] = v;
        }
    }
L_001b2500:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 4, 14u, &shc); cpu->r[0] = v;
        }
    }
L_001b2504:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 13u, &shc); cpu->r[0] = v;
        }
    }
L_001b2508:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 6u, &shc); cpu->r[13] = v;
        }
    }
}

/* _Z10GetLocalIPPc @ 001b250c (arm) */
void fn_001b250c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b250c:;
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
L_001b2510:;
    {
        cpu->r[6] = rd32(0x001b2518u + + 0x130u);
    }
L_001b2514:;
    {
        cpu->r[10] = rd32(0x001b251cu + + 0x130u);
    }
L_001b2518:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000fb0u, 1, 0);
    }
L_001b251c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b2524u, cpu->r[6], 0, 0);
    }
L_001b2520:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b2524:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001b2528:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001b252c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001b2530:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b2534:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001b2538:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001b253c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b2540:;
    {
        cpu->r[12] = 0x00000fa0u;
    }
L_001b2544:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b2548:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001b254c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001b2550:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001b2554:;
    {
        wr32(cpu->r[13] + + 0xfb4u, cpu->r[3]);
    }
L_001b2558:;
    {
        cpu->r[14] = 0x001b255cu; imp_socket(cpu); /* socket */
    }
L_001b255c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b2560:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b2564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2624;
        }
    }
L_001b2568:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001b256c:;
    {
        cpu->r[1] = 0x00008912u;
    }
L_001b2570:;
    {
        cpu->r[14] = 0x001b2574u; imp_ioctl(cpu); /* ioctl */
    }
L_001b2574:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b2578:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b2624;
        }
    }
L_001b257c:;
    {
        cpu->r[3] = rd32(0x001b2584u + + 0xccu);
    }
L_001b2580:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001b2584:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b258cu, cpu->r[3], 0, 0);
    }
L_001b2588:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001b258c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b2590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001b2594:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001b2598:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b261c;
        }
    }
L_001b259c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b25a0:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_001b25a4:;
    {
        cpu->r[14] = 0x001b25a8u; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001b25a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001b25ac:;
    {
        cpu->r[3] = rd16(cpu->r[4] + - 0x10u);
    }
L_001b25b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001b25b4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b25b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b258c;
        }
    }
L_001b25bc:;
    {
        cpu->r[1] = 0x0000003au;
    }
L_001b25c0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b25c4:;
    {
        cpu->r[14] = 0x001b25c8u; imp_strchr(cpu); /* strchr */
    }
L_001b25c8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001b25cc:;
    {
        cpu->r[1] = 0x00008913u;
    }
L_001b25d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b25d4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[9]);
        }
    }
L_001b25d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b25dc:;
    {
        cpu->r[14] = 0x001b25e0u; imp_ioctl(cpu); /* ioctl */
    }
L_001b25e0:;
    {
        cpu->r[3] = rd16(cpu->r[4] + - 0x10u);
    }
L_001b25e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001b25e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b258c;
        }
    }
L_001b25ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b25f0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001b25f4:;
    {
        cpu->r[14] = 0x001b25f8u; imp_strcmp(cpu); /* strcmp */
    }
L_001b25f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b25fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b258c;
        }
    }
L_001b2600:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b2604:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b2608:;
    {
        cpu->r[14] = 0x001b260cu; imp_strcpy(cpu); /* strcpy */
    }
L_001b260c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b2610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001b2614:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001b2618:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b259c;
        }
    }
L_001b261c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b2620:;
    {
        cpu->r[14] = 0x001b2624u; imp_close(cpu); /* close */
    }
L_001b2624:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001b2628:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xfb4u);
    }
L_001b262c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b2630:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b2634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2644;
        }
    }
L_001b2638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000003bcu, 0, 0);
    }
L_001b263c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000c00u, 0, 0);
    }
L_001b2640:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2644u)) return;
    }
L_001b2644:;
    {
        cpu->r[14] = 0x001b2648u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b2648:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[4]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[8] << 32) | cpu->r[7]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b264c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b2650:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 4u, &shc); cpu->r[13] = v;
        }
    }
}

/* _ZN13CLinuxNetworkC1Ev @ 001b2654 (arm) */
void fn_001b2654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2654:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b2658:;
    {
        cpu->r[5] = rd32(0x001b2660u + + 0x84u);
    }
L_001b265c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2660:;
    {
        cpu->r[14] = 0x001b2664u; fn_001b3280(cpu);
    }
L_001b2664:;
    {
        cpu->r[3] = rd32(0x001b266cu + + 0x7cu);
    }
L_001b2668:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b2670u, cpu->r[5], 0, 0);
    }
L_001b266c:;
    {
        cpu->r[1] = 0x0000fffeu;
    }
L_001b2670:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b2674:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b2678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b267c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b2680:;
    {
        cpu->r[14] = 0x001b2684u; fn_000964c8(cpu);
    }
L_001b2684:;
    {
        cpu->r[12] = 0x00004bf4u;
    }
L_001b2688:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b268c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2690:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b2694:;
    {
        cpu->r[12] = 0x00004c78u;
    }
L_001b2698:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001b269c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b26a0:;
    {
        cpu->r[12] = 0x00004c7cu;
    }
L_001b26a4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b26a8:;
    {
        cpu->r[1] = 0x00007490u;
    }
L_001b26ac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_001b26b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001b26b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b26b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00004b00u, 0, 0);
    }
L_001b26bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001b26c0:;
    {
        wr32(cpu->r[1] + + 0xf8u, cpu->r[2]);
    }
L_001b26c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b26b0;
        }
    }
L_001b26c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000214u, 0, 0);
    }
L_001b26cc:;
    {
        cpu->r[14] = 0x001b26d0u; fn_001b250c(cpu);
    }
L_001b26d0:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b26d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b26d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b26dc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b26e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b26e4u)) return;
    }
}
