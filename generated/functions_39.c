#include "functions.h"

/* _ZN12RaceRecorder21RecordTrafficPositionEi @ 000fbe50 (arm) */
void fn_000fbe50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fbe50:;
    {
        cpu->r[3] = rd32(0x000fbe58u + + 0x22cu);
    }
L_000fbe54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000013u, 1, 1);
    }
L_000fbe58:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fbe5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbe64u, cpu->r[3], 0, 0);
    }
L_000fbe60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fbe64:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000fbe68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fbe6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fbf48;
        }
    }
L_000fbe70:;
    {
        cpu->r[1] = rd32(0x000fbe78u + + 0x210u);
    }
L_000fbe74:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000fbe78:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000fbe7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fbe80:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000fbe84:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000fbe88:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000fbe8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000fbe90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fbe94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fbf50;
        }
    }
L_000fbe98:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fbe9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbeb4;
        }
    }
L_000fbea0:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbea4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbea8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbeac:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fbeb0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbee8;
        }
    }
L_000fbeb4:;
    {
        cpu->r[1] = rd32(0x000fbebcu + + 0x1d0u);
    }
L_000fbeb8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbebc:;
    {
        cpu->r[12] = rd32(0x000fbec4u + + 0x1ccu);
    }
L_000fbec0:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbec4:;
    {
        cpu->r[2] = rd32(0x000fbeccu + + 0x1c8u);
    }
L_000fbec8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbed0u, cpu->r[1], 0, 0);
    }
L_000fbecc:;
    {
        cpu->r[3] = rd32(0x000fbed4u + + 0x1c4u);
    }
L_000fbed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbed8u, cpu->r[12], 0, 0);
    }
L_000fbed4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbedcu, cpu->r[2], 0, 0);
    }
L_000fbed8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbedc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbee4u, cpu->r[3], 0, 0);
    }
L_000fbee0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbee4:;
    {
        cpu->r[14] = 0x000fbee8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbee8:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000fbeec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fbef0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbef4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001bcu, 0, 0);
    }
L_000fbef8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000001d0u, 0, 0);
    }
L_000fbefc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
    }
L_000fbf00:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbf04:;
    {
        cpu->r[6] = 0x00000680u;
    }
L_000fbf08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000001e4u, 0, 0);
    }
L_000fbf0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000fbf10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fbf14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fbf18:;
    {
        uint32_t v = cpu->r[6] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_000fbf1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000fbf20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
    }
L_000fbf24:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x3dcu);
    }
L_000fbf28:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x3d4u);
    }
L_000fbf2c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x3d8u);
    }
L_000fbf30:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[6]);
    }
L_000fbf34:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[7]);
    }
L_000fbf38:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[12]);
    }
L_000fbf3c:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[7]);
    }
L_000fbf40:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
    }
L_000fbf44:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[6]);
    }
L_000fbf48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fbf4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fbf50u)) return;
    }
L_000fbf50:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fbf54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbf6c;
        }
    }
L_000fbf58:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbf5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbf60:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbf64:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fbf68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbfa0;
        }
    }
L_000fbf6c:;
    {
        cpu->r[1] = rd32(0x000fbf74u + + 0x128u);
    }
L_000fbf70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbf74:;
    {
        cpu->r[12] = rd32(0x000fbf7cu + + 0x124u);
    }
L_000fbf78:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbf7c:;
    {
        cpu->r[2] = rd32(0x000fbf84u + + 0x120u);
    }
L_000fbf80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbf88u, cpu->r[1], 0, 0);
    }
L_000fbf84:;
    {
        cpu->r[3] = rd32(0x000fbf8cu + + 0x11cu);
    }
L_000fbf88:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbf90u, cpu->r[12], 0, 0);
    }
L_000fbf8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbf94u, cpu->r[2], 0, 0);
    }
L_000fbf90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbf94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbf9cu, cpu->r[3], 0, 0);
    }
L_000fbf98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbf9c:;
    {
        cpu->r[14] = 0x000fbfa0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbfa0:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000fbfa4:;
    {
        cpu->r[1] = 0x00000680u;
    }
L_000fbfa8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbfac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
    }
L_000fbfb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbfb4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000fbfb8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4] + cpu->r[3]; cpu->r[1] = v;
    }
L_000fbfbc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x62cu);
    }
L_000fbfc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fbfc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000fbfc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0x41cu);
        }
    }
L_000fbfcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_000fbfd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[1] + + 0x424u);
        }
    }
L_000fbfd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000fbfd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[1] + + 0x420u);
        }
    }
L_000fbfdc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000fbfe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc00c;
        }
    }
L_000fbfe4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fbfe8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000fbfec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000fbff0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000fbff4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fbff8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fbffc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_000fc000:;
    {
        uint32_t v = cpu->r[6] | 0x00000080u; cpu->r[6] = v;
    }
L_000fc004:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[6]);
    }
L_000fc008:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000fc00c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
    }
L_000fc010:;
    {
        cpu->r[12] = rd32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000fc014:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000fc018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc044;
        }
    }
L_000fc01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fc020:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000fc024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fc028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000fc02c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fc030:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fc034:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[6]);
    }
L_000fc038:;
    {
        uint32_t v = cpu->r[12] | 0x00000040u; cpu->r[12] = v;
    }
L_000fc03c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_000fc040:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[1]);
    }
L_000fc044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fc048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fc04c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fc050:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000fc054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fbf48;
        }
    }
L_000fc058:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fc05c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000fc060:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000fc064:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000fc068:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fc06c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_000fc070:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[12]);
    }
L_000fc074:;
    {
        uint32_t v = cpu->r[0] | 0x00000020u; cpu->r[0] = v;
    }
L_000fc078:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_000fc07c:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000fc080:;
    {
        goto L_000fbf48;
    }
}

/* _ZN10IFileReadI5FTellEv @ 000fc0ac (arm) */
void fn_000fc0ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000fc0b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI5FSeekEjj @ 000fc0b4 (arm) */
void fn_000fc0b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000fc0b8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000fc0bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI12SetCacheSizeEi @ 000fc0c0 (arm) */
void fn_000fc0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI8fileSizeEv @ 000fc0c4 (arm) */
void fn_000fc0c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0c4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc0c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI9FillCacheEv @ 000fc0cc (arm) */
void fn_000fc0cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI4SkipEi @ 000fc0d0 (arm) */
void fn_000fc0d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fc0d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
        }
    }
L_000fc0d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
        }
    }
L_000fc0dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
        }
    }
L_000fc0e0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000fc0e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10IFileReadI7ReleaseEv @ 000fc0e8 (arm) */
void fn_000fc0e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc0e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc0ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc0f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_000fc0f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc0f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc0fcu)) return;
        }
    }
L_000fc0fc:;
    {
        cpu->r[14] = 0x000fc100u; fn_0018ba60(cpu);
    }
L_000fc100:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc104:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_000fc108:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc10cu)) return;
    }
}

/* _ZN10IFileReadIC1Ev @ 000fc10c (arm) */
void fn_000fc10c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc10c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc110:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_000fc114:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc118:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_000fc11c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc120:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000fc124:;
    {
        cpu->r[14] = 0x000fc128u; fn_000fc0e8(cpu);
    }
L_000fc128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc12c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc130u)) return;
    }
}

/* _ZN10IFileReadIC2Ev @ 000fc130 (arm) */
void fn_000fc130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc130:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc134:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_000fc138:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc13c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_000fc140:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc144:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000fc148:;
    {
        cpu->r[14] = 0x000fc14cu; fn_000fc0e8(cpu);
    }
L_000fc14c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc150:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc154u)) return;
    }
}

/* _ZN10IFileReadI4ReadEPvj @ 000fc154 (arm) */
void fn_000fc154(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc154:;
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
L_000fc158:;
    {
        cpu->r[3] = rd32(0x000fc160u + + 0x27cu);
    }
L_000fc15c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000134u, 1, 0);
    }
L_000fc160:;
    {
        cpu->r[12] = rd32(0x000fc168u + + 0x278u);
    }
L_000fc164:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc16cu, cpu->r[3], 0, 0);
    }
L_000fc168:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000fc16c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000fc170:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fc174:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000fc178:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000fc17c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_000fc180:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000fc184:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000fc188:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000fc18c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000fc190:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000fc194:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_000fc198:;
    {
        wr32(cpu->r[13] + + 0x12cu, cpu->r[2]);
    }
L_000fc19c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000fc39c;
        }
    }
L_000fc1a0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x30u);
    }
L_000fc1a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fc1a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc354;
        }
    }
L_000fc1ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000fc1b0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[9] = v;
    }
L_000fc1b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000fc1b8:;
    {
        uint32_t v = cpu->r[3] & ~ 0xff000000u; cpu->r[1] = v;
    }
L_000fc1bc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 20u, &shc); cpu->r[2] = v;
    }
L_000fc1c0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00f00000u; cpu->r[1] = v;
    }
L_000fc1c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000fc1c8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[1]);
    }
L_000fc1cc:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000fc1d0:;
    {
        wr8(cpu->r[5] + + 0x18u, cpu->r[2]);
    }
L_000fc1d4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000fc1d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fc36c;
        }
    }
L_000fc1dc:;
    {
        cpu->r[3] = rd32(0x000fc1e4u + + 0x200u);
    }
L_000fc1e0:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_000fc1e4:;
    {
        cpu->r[2] = rd32(0x000fc1ecu + + 0x1fcu);
    }
L_000fc1e8:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_000fc1ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc1f4u, cpu->r[3], 0, 0);
    }
L_000fc1f0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000fc1f4:;
    {
        cpu->r[3] = rd32(0x000fc1fcu + + 0x1f0u);
    }
L_000fc1f8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000fc1fc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000fc200:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc208u, cpu->r[3], 0, 0);
    }
L_000fc204:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000fc208:;
    {
        cpu->r[3] = rd32(0x000fc210u + + 0x1e0u);
    }
L_000fc20c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc214u, cpu->r[3], 0, 0);
    }
L_000fc210:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000fc214:;
    {
        cpu->r[3] = rd32(0x000fc21cu + + 0x1d8u);
    }
L_000fc218:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc220u, cpu->r[3], 0, 0);
    }
L_000fc21c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000fc220:;
    {
        goto L_000fc2e4;
    }
L_000fc224:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_000fc228:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[4]);
    }
L_000fc22c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fc324;
        }
    }
L_000fc230:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000063u, 1, 1);
    }
L_000fc234:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fc300;
        }
    }
L_000fc238:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fc23c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000fc240:;
    {
        cpu->r[12] = rd32(0x000fc248u + + 0x1b0u);
    }
L_000fc244:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fc248:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fc250u, cpu->r[3], 0, 0);
    }
L_000fc24c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fc250:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000fc254:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fc25cu, cpu->r[12], 0, 0);
    }
L_000fc258:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fc25c:;
    {
        cpu->r[14] = 0x000fc260u; imp_sprintf(cpu); /* sprintf */
    }
L_000fc260:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_000fc264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc278;
        }
    }
L_000fc26c:;
    {
        cpu->r[14] = 0x000fc270u; fn_0018ba60(cpu);
    }
L_000fc270:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc274:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_000fc278:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fc27c:;
    {
        cpu->r[14] = 0x000fc280u; fn_00073f80(cpu);
    }
L_000fc280:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 1);
    }
L_000fc284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000fc288:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00100000u;
        }
    }
L_000fc28c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
        }
    }
L_000fc290:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & ~ 0xff000000u; cpu->r[1] = v;
        }
    }
L_000fc294:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_000fc298:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & ~ 0x00f00000u; cpu->r[1] = v;
        }
    }
L_000fc29c:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_000fc2a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = sub_flags(cpu, 0x00100000u, cpu->r[1], 1, 0);
        }
    }
L_000fc2a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x20u, cpu->r[1]);
        }
    }
L_000fc2a8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
        }
    }
L_000fc2ac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000fc2b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000fc2b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000fc2b8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_000fc2bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_000fc2c0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_000fc2c4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
        }
    }
L_000fc2c8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000fc2cc:;
    {
        cpu->r[14] = 0x000fc2d0u; imp_memcpy(cpu); /* memcpy */
    }
L_000fc2d0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x18u);
    }
L_000fc2d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000fc2d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000fc2dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fc368;
        }
    }
L_000fc2e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_000fc2e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x34u);
    }
L_000fc2e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000fc2ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fc224;
        }
    }
L_000fc2f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_000fc2f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_000fc2f8:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00100000u, cpu->r[1], 1, 0);
    }
L_000fc2fc:;
    {
        goto L_000fc2ac;
    }
L_000fc300:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000fc304:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000fc308:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000fc30c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fc310:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000fc314:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000fc318:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fc31c:;
    {
        cpu->r[14] = 0x000fc320u; imp_sprintf(cpu); /* sprintf */
    }
L_000fc320:;
    {
        goto L_000fc260;
    }
L_000fc324:;
    {
        cpu->r[1] = rd32(0x000fc32cu + + 0xd0u);
    }
L_000fc328:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000fc32c:;
    {
        cpu->r[2] = rd32(0x000fc334u + + 0xccu);
    }
L_000fc330:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fc334:;
    {
        cpu->r[12] = rd32(0x000fc33cu + + 0xc8u);
    }
L_000fc338:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fc340u, cpu->r[1], 0, 0);
    }
L_000fc33c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fc344u, cpu->r[2], 0, 0);
    }
L_000fc340:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000fc344:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fc34cu, cpu->r[12], 0, 0);
    }
L_000fc348:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fc34c:;
    {
        cpu->r[14] = 0x000fc350u; imp_sprintf(cpu); /* sprintf */
    }
L_000fc350:;
    {
        goto L_000fc260;
    }
L_000fc354:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x28u);
    }
L_000fc358:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fc35c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000fc360:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000fc364:;
    {
        cpu->r[14] = 0x000fc368u; imp_memcpy(cpu); /* memcpy */
    }
L_000fc368:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000fc36c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000fc370:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000fc374:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000fc378:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_000fc37c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000fc380:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000fc384:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x12cu);
    }
L_000fc388:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000fc38c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fc390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fc3d8;
        }
    }
L_000fc394:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_000fc398:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc39cu)) return;
    }
L_000fc39c:;
    {
        cpu->r[1] = rd32(0x000fc3a4u + + 0x64u);
    }
L_000fc3a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fc3a4:;
    {
        cpu->r[2] = rd32(0x000fc3acu + + 0x60u);
    }
L_000fc3a8:;
    {
        cpu->r[14] = 0x000001deu;
    }
L_000fc3ac:;
    {
        cpu->r[3] = rd32(0x000fc3b4u + + 0x5cu);
    }
L_000fc3b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fc3b8u, cpu->r[1], 0, 0);
    }
L_000fc3b4:;
    {
        cpu->r[12] = rd32(0x000fc3bcu + + 0x58u);
    }
L_000fc3b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fc3c0u, cpu->r[2], 0, 0);
    }
L_000fc3bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc3c4u, cpu->r[3], 0, 0);
    }
L_000fc3c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fc3c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fc3ccu, cpu->r[12], 0, 0);
    }
L_000fc3c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fc3cc:;
    {
        cpu->r[14] = 0x000fc3d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fc3d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000fc3d4:;
    {
        goto L_000fc1a0;
    }
L_000fc3d8:;
    {
        cpu->r[14] = 0x000fc3dcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000fc3dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[12], 3, 5u, &shc); cpu->r[14] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000fc3e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[0], 1, (cpu->r[13] & 0xffu), &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[12], 1, 25u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 2, (cpu->r[13] & 0xffu), &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[0], 3, 26u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[12], 2, (cpu->r[13] & 0xffu), &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc3f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[8]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000fc3fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[0]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000fc400:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[8]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000fc404:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[8], 4, 23u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc408:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[9]; cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
L_000fc40c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[9]; cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
L_000fc410:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 4, 21u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000fc414:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[4]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
}

/* _ZN10IFileReadI12OpenResourceEPvb @ 000fc418 (arm) */
void fn_000fc418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc418:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fc41c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000fc420:;
    {
        cpu->r[1] = rd32(0x000fc428u + + 0xd4u);
    }
L_000fc424:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000fc428:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc42c:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[3]);
    }
L_000fc430:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fc438u, cpu->r[1], 0, 0);
    }
L_000fc434:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fc438:;
    {
        cpu->r[14] = 0x000fc43cu; imp_strstr(cpu); /* strstr */
    }
L_000fc43c:;
    {
        cpu->r[5] = rd32(0x000fc444u + + 0xbcu);
    }
L_000fc440:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fc448u, cpu->r[5], 0, 0);
    }
L_000fc444:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc4ac;
        }
    }
L_000fc44c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fc450:;
    {
        wr8(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_000fc454:;
    {
        cpu->r[3] = rd32(0x000fc45cu + + 0xa8u);
    }
L_000fc458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_000fc45c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fc460:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fc464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fc468:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00004cc2u;
        }
    }
L_000fc46c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000c047u;
        }
    }
L_000fc470:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x06b2u << 16);
        }
    }
L_000fc474:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0567u << 16);
        }
    }
L_000fc478:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc47c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000fc480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc490;
        }
    }
L_000fc484:;
    {
        cpu->r[14] = 0x000fc488u; fn_0018ba60(cpu);
    }
L_000fc488:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc48c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_000fc490:;
    {
        cpu->r[0] = 0x00100000u;
    }
L_000fc494:;
    {
        cpu->r[14] = 0x000fc498u; imp__Znaj(cpu); /* _Znaj */
    }
L_000fc498:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000fc49c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc4a0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_000fc4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc4a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc4acu)) return;
    }
L_000fc4ac:;
    {
        wr8(cpu->r[4] + + 0x30u, cpu->r[7]);
    }
L_000fc4b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fc4b4:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_000fc4b8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[6]);
    }
L_000fc4bc:;
    {
        cpu->r[14] = 0x000fc4c0u; fn_00073e10(cpu);
    }
L_000fc4c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_000fc4c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fc4c8:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000fc4cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc4dc;
        }
    }
L_000fc4d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fc4d4:;
    {
        cpu->r[14] = 0x000fc4d8u; fn_0018ba60(cpu);
    }
L_000fc4d8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_000fc4dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000fc4e0:;
    {
        cpu->r[14] = 0x000fc4e4u; fn_00073f80(cpu);
    }
L_000fc4e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000fc4e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fc4ec:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000fc4f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000fc4f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fc49c;
        }
    }
L_000fc4f8:;
    {
        goto L_000fc4a4;
    }
}

/* _ZN10IFileReadI4OpenEPvb @ 000fc508 (arm) */
void fn_000fc508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc508:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fc50c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fc510:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_000fc514:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000fc518:;
    {
        cpu->r[14] = 0x000fc51cu; fn_0018ba6c(cpu);
    }
L_000fc51c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc520:;
    {
        cpu->r[14] = 0x000fc524u; fn_000fc10c(cpu);
    }
L_000fc524:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fc528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc544;
        }
    }
L_000fc52c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fc530:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fc534:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc538:;
    {
        cpu->r[14] = 0x000fc53cu; fn_000fc418(cpu);
    }
L_000fc53c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc54c;
        }
    }
L_000fc544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc548:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc54cu)) return;
    }
L_000fc54c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc550:;
    {
        cpu->r[14] = 0x000fc554u; fn_000fc0e8(cpu);
    }
L_000fc554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc558:;
    {
        cpu->r[14] = 0x000fc55cu; fn_0018ba20(cpu);
    }
L_000fc55c:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000fc560:;
    {
        goto L_000fc544;
    }
}

/* _ZN10IFileReadI5CloseERPS_ @ 000fc564 (arm) */
void fn_000fc564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc564:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fc568:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc56c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc570:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc574:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc578u)) return;
        }
    }
L_000fc578:;
    {
        cpu->r[14] = 0x000fc57cu; fn_000fc0e8(cpu);
    }
L_000fc57c:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000fc580:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000fc584:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc588u)) return;
        }
    }
L_000fc588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fc58c:;
    {
        cpu->r[14] = 0x000fc590u; fn_000fc0e8(cpu);
    }
L_000fc590:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fc594:;
    {
        cpu->r[14] = 0x000fc598u; fn_0018ba20(cpu);
    }
L_000fc598:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc59c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000fc5a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc5a4u)) return;
    }
}

/* _ZN8LZMAFileC2Ev @ 000fc5a4 (arm) */
void fn_000fc5a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fc5a8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fc5ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8LZMAFileC1Ev @ 000fc5b0 (arm) */
void fn_000fc5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fc5b4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fc5b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8LZMAFile12OpenAttachedEP10IFileReadI @ 000fc5bc (arm) */
void fn_000fc5bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5bc:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000fc5c0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000fc5c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8LZMAFile13CloseAttachedEv @ 000fc5c8 (arm) */
void fn_000fc5c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc5cc:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000fc5d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8LZMAFile5fseekEjj @ 000fc5d4 (arm) */
void fn_000fc5d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5d4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc5d8:;
    {
        return fn_000fc0b4(cpu);
    }
}

/* _ZN8LZMAFile5ftellEv @ 000fc5dc (arm) */
void fn_000fc5dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5dc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc5e0:;
    {
        return fn_000fc0ac(cpu);
    }
}

/* _ZN8LZMAFile8fileSizeEv @ 000fc5e4 (arm) */
void fn_000fc5e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5e4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc5e8:;
    {
        return fn_000fc0c4(cpu);
    }
}

/* _ZN8LZMAFile4skipEi @ 000fc5ec (arm) */
void fn_000fc5ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5ec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc5f0:;
    {
        return fn_000fc0d0(cpu);
    }
}

/* _ZN8LZMAFile4readEPvj @ 000fc5f4 (arm) */
void fn_000fc5f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5f4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fc5f8:;
    {
        return fn_000fc154(cpu);
    }
}

/* _ZN8LZMAFile9readFloatEv @ 000fc5fc (arm) */
void fn_000fc5fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc5fc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fc600:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fc608u + + 0x1cu);
    }
L_000fc604:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fc608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc60c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000fc610:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base - 4u;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[1] = ea;
    }
L_000fc614:;
    {
        cpu->r[14] = 0x000fc618u; fn_000fc5f4(cpu);
    }
L_000fc618:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fc61c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fc620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc624u)) return;
    }
}

/* _ZN8LZMAFile7readIntEv @ 000fc628 (arm) */
void fn_000fc628(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc628:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fc62c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fc630:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc634:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc638:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000fc63c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_000fc640:;
    {
        cpu->r[14] = 0x000fc644u; fn_000fc5f4(cpu);
    }
L_000fc644:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fc648:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fc64c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc650u)) return;
    }
}

/* _ZN8LZMAFile9readShortEv @ 000fc650 (arm) */
void fn_000fc650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc650:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fc654:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fc658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc65c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc660:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000fc664:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x2u;
        wr16(cpu->r[1] + - 0x2u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_000fc668:;
    {
        cpu->r[14] = 0x000fc66cu; fn_000fc5f4(cpu);
    }
L_000fc66c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x6u);
    }
L_000fc670:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fc674:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc678u)) return;
    }
}

/* _ZN8LZMAFile8readCharEv @ 000fc678 (arm) */
void fn_000fc678(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc678:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fc67c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fc680:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc684:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc688:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fc68c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x1u;
        wr8(cpu->r[1] + - 0x1u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_000fc690:;
    {
        cpu->r[14] = 0x000fc694u; fn_000fc5f4(cpu);
    }
L_000fc694:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[13] + + 0x7u);
    }
L_000fc698:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fc69c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc6a0u)) return;
    }
}

/* _Z13LZMAFile_freePvS_ @ 000fc6a0 (arm) */
void fn_000fc6a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc6a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fc6a4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000fc6a8:;
    {
        return fn_0018ba60(cpu);
    }
}

/* _Z15LZMAFile_mallocPvjj @ 000fc6ac (arm) */
void fn_000fc6ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc6ac:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[0] = v;
    }
L_000fc6b0:;
    {
        imp__Znaj(cpu); /* tail _Znaj */ return;
    }
}

/* _ZN8LZMAFile6AttachEP10IFileReadI @ 000fc6b4 (arm) */
void fn_000fc6b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc6b4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fc6b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fc6bc:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000fc6c0:;
    {
        cpu->r[14] = 0x000fc6c4u; fn_0018ba6c(cpu);
    }
L_000fc6c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc6c8:;
    {
        cpu->r[14] = 0x000fc6ccu; fn_000fc5b0(cpu);
    }
L_000fc6cc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fc6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc6e8;
        }
    }
L_000fc6d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fc6d8:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_000fc6dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fc6e0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fc6e4:;
    {
        cpu->r[14] = 0x000fc6e8u; fn_000fc0b4(cpu);
    }
L_000fc6e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc6ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc6f0u)) return;
    }
}

/* _ZN8LZMAFileD1Ev @ 000fc6f0 (arm) */
void fn_000fc6f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc6f0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000fc6f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc6f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fc6fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc708;
        }
    }
L_000fc704:;
    {
        cpu->r[14] = 0x000fc708u; fn_000fc564(cpu);
    }
L_000fc708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc70c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc710u)) return;
    }
}

/* _ZN8LZMAFile5CloseERPS_ @ 000fc710 (arm) */
void fn_000fc710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc710:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fc714:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000fc718:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fc71c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fc720:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc724u)) return;
        }
    }
L_000fc724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc728:;
    {
        cpu->r[14] = 0x000fc72cu; fn_000fc6f0(cpu);
    }
L_000fc72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc730:;
    {
        cpu->r[14] = 0x000fc734u; fn_0018ba20(cpu);
    }
L_000fc734:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc738:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000fc73c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc740u)) return;
    }
}

/* _ZN8LZMAFile4OpenEPc @ 000fc740 (arm) */
void fn_000fc740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc740:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000fc744:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fc748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fc74c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000fc750:;
    {
        cpu->r[14] = 0x000fc754u; fn_0018ba6c(cpu);
    }
L_000fc754:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc758:;
    {
        cpu->r[14] = 0x000fc75cu; fn_000fc5b0(cpu);
    }
L_000fc75c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fc760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc79c;
        }
    }
L_000fc764:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fc768:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fc76c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000fc770:;
    {
        cpu->r[14] = 0x000fc774u; fn_000fc508(cpu);
    }
L_000fc774:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fc778:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000fc77c:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000fc780:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fc784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc794;
        }
    }
L_000fc788:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fc78c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fc790:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc794u)) return;
    }
L_000fc794:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000fc798:;
    {
        cpu->r[14] = 0x000fc79cu; fn_000fc710(cpu);
    }
L_000fc79c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000fc7a0:;
    {
        goto L_000fc788;
    }
}

/* _ZN8LZMAFileD2Ev @ 000fc7a4 (arm) */
void fn_000fc7a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7a4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000fc7a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc7ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fc7b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc7bc;
        }
    }
L_000fc7b8:;
    {
        cpu->r[14] = 0x000fc7bcu; fn_000fc564(cpu);
    }
L_000fc7bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc7c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc7c4u)) return;
    }
}

/* _ZN10ISoundFileD1Ev @ 000fc7c4 (arm) */
void fn_000fc7c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundFile14GetFilePointerEv @ 000fc7c8 (arm) */
void fn_000fc7c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc7cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x38u);
    }
L_000fc7d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundFile17GetFileDescriptorEv @ 000fc7d4 (arm) */
void fn_000fc7d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc7d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_000fc7dc:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xeu);
    }
L_000fc7e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundFile5ftellEv @ 000fc7e4 (arm) */
void fn_000fc7e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc7e8:;
    {
        return fn_000fc0ac(cpu);
    }
}

/* _ZN10CSoundFile4seekEli @ 000fc7ec (arm) */
void fn_000fc7ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc7f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fc7f4:;
    {
        return fn_000fc0b4(cpu);
    }
}

/* _ZN10CSoundFile4readEPvi @ 000fc7f8 (arm) */
void fn_000fc7f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc7f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc7fc:;
    {
        return fn_000fc154(cpu);
    }
}

/* _ZN10ISoundFileD0Ev @ 000fc800 (arm) */
void fn_000fc800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc800:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc804:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc808:;
    {
        cpu->r[14] = 0x000fc80cu; fn_0018ba20(cpu);
    }
L_000fc80c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc810:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc814u)) return;
    }
}

/* _ZN10CSoundFileD1Ev @ 000fc814 (arm) */
void fn_000fc814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc814:;
    {
        cpu->r[3] = rd32(0x000fc81cu + + 0x3cu);
    }
L_000fc818:;
    {
        cpu->r[2] = rd32(0x000fc820u + + 0x3cu);
    }
L_000fc81c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc824u, cpu->r[3], 0, 0);
    }
L_000fc820:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc824:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc828:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fc82c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fc830:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc834:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fc838:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fc83c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc850;
        }
    }
L_000fc840:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000fc844:;
    {
        cpu->r[14] = 0x000fc848u; fn_000fc564(cpu);
    }
L_000fc848:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc84c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000fc850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc854:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc858u)) return;
    }
}

/* _ZN10CSoundFileD0Ev @ 000fc860 (arm) */
void fn_000fc860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc868:;
    {
        cpu->r[14] = 0x000fc86cu; fn_000fc814(cpu);
    }
L_000fc86c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc870:;
    {
        cpu->r[14] = 0x000fc874u; fn_0018ba20(cpu);
    }
L_000fc874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc878:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc87cu)) return;
    }
}

/* _ZN10CSoundFileD2Ev @ 000fc87c (arm) */
void fn_000fc87c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc87c:;
    {
        cpu->r[3] = rd32(0x000fc884u + + 0x3cu);
    }
L_000fc880:;
    {
        cpu->r[2] = rd32(0x000fc888u + + 0x3cu);
    }
L_000fc884:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc88cu, cpu->r[3], 0, 0);
    }
L_000fc888:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fc88c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc890:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fc894:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fc898:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc89c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fc8a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fc8a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc8b8;
        }
    }
L_000fc8a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000fc8ac:;
    {
        cpu->r[14] = 0x000fc8b0u; fn_000fc564(cpu);
    }
L_000fc8b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fc8b4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000fc8b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc8bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc8c0u)) return;
    }
}

/* _ZN10CSoundFileC1EPcb @ 000fc8c8 (arm) */
void fn_000fc8c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc8c8:;
    {
        cpu->r[3] = rd32(0x000fc8d0u + + 0x78u);
    }
L_000fc8cc:;
    {
        cpu->r[12] = rd32(0x000fc8d4u + + 0x78u);
    }
L_000fc8d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc8d8u, cpu->r[3], 0, 0);
    }
L_000fc8d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc8d8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000fc8dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc8e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fc8e4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000fc8e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fc8ec:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000fc8f0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_000fc8f4:;
    {
        cpu->r[14] = 0x000fc8f8u; fn_000fc508(cpu);
    }
L_000fc8f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc8fc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000fc900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc910;
        }
    }
L_000fc904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc908:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc90c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc910u)) return;
    }
L_000fc910:;
    {
        cpu->r[1] = rd32(0x000fc918u + + 0x38u);
    }
L_000fc914:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fc918:;
    {
        cpu->r[2] = rd32(0x000fc920u + + 0x34u);
    }
L_000fc91c:;
    {
        cpu->r[14] = 0x00000048u;
    }
L_000fc920:;
    {
        cpu->r[3] = rd32(0x000fc928u + + 0x30u);
    }
L_000fc924:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fc92cu, cpu->r[1], 0, 0);
    }
L_000fc928:;
    {
        cpu->r[12] = rd32(0x000fc930u + + 0x2cu);
    }
L_000fc92c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fc934u, cpu->r[2], 0, 0);
    }
L_000fc930:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc938u, cpu->r[3], 0, 0);
    }
L_000fc934:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fc938:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fc940u, cpu->r[12], 0, 0);
    }
L_000fc93c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fc940:;
    {
        cpu->r[14] = 0x000fc944u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fc944:;
    {
        goto L_000fc904;
    }
}

/* _Z15CreateSoundFilePcb @ 000fc960 (arm) */
void fn_000fc960(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc960:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fc964:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fc968:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_000fc96c:;
    {
        cpu->r[14] = 0x000fc970u; fn_0018ba6c(cpu);
    }
L_000fc970:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fc974:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fc978:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc97c:;
    {
        cpu->r[14] = 0x000fc980u; fn_000fc8c8(cpu);
    }
L_000fc980:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc988u)) return;
    }
}

/* _ZN10CSoundFileC2EPcb @ 000fc988 (arm) */
void fn_000fc988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fc988:;
    {
        cpu->r[3] = rd32(0x000fc990u + + 0x78u);
    }
L_000fc98c:;
    {
        cpu->r[12] = rd32(0x000fc994u + + 0x78u);
    }
L_000fc990:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc998u, cpu->r[3], 0, 0);
    }
L_000fc994:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fc998:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000fc99c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fc9a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fc9a4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000fc9a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fc9ac:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000fc9b0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_000fc9b4:;
    {
        cpu->r[14] = 0x000fc9b8u; fn_000fc508(cpu);
    }
L_000fc9b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fc9bc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000fc9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fc9d0;
        }
    }
L_000fc9c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fc9c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fc9cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fc9d0u)) return;
    }
L_000fc9d0:;
    {
        cpu->r[1] = rd32(0x000fc9d8u + + 0x38u);
    }
L_000fc9d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fc9d8:;
    {
        cpu->r[2] = rd32(0x000fc9e0u + + 0x34u);
    }
L_000fc9dc:;
    {
        cpu->r[14] = 0x00000048u;
    }
L_000fc9e0:;
    {
        cpu->r[3] = rd32(0x000fc9e8u + + 0x30u);
    }
L_000fc9e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fc9ecu, cpu->r[1], 0, 0);
    }
L_000fc9e8:;
    {
        cpu->r[12] = rd32(0x000fc9f0u + + 0x2cu);
    }
L_000fc9ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fc9f4u, cpu->r[2], 0, 0);
    }
L_000fc9f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fc9f8u, cpu->r[3], 0, 0);
    }
L_000fc9f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fc9f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fca00u, cpu->r[12], 0, 0);
    }
L_000fc9fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fca00:;
    {
        cpu->r[14] = 0x000fca04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fca04:;
    {
        goto L_000fc9c4;
    }
}

/* _ZN16SoundFileManagerD1Ev @ 000fca20 (arm) */
void fn_000fca20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fca20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fca24:;
    {
        cpu->r[4] = rd32(0x000fca2cu + + 0x6cu);
    }
L_000fca28:;
    {
        cpu->r[5] = rd32(0x000fca30u + + 0x6cu);
    }
L_000fca2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fca30:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fca38u, cpu->r[4], 0, 0);
    }
L_000fca34:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fca38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fca3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fca40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fca44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fca60;
        }
    }
L_000fca48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fca4c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fca50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fca54:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fca58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fca5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fca60u)) return;
    }
L_000fca60:;
    {
        cpu->r[1] = rd32(0x000fca68u + + 0x38u);
    }
L_000fca64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fca68:;
    {
        cpu->r[12] = rd32(0x000fca70u + + 0x34u);
    }
L_000fca6c:;
    {
        cpu->r[14] = 0x00000023u;
    }
L_000fca70:;
    {
        cpu->r[2] = rd32(0x000fca78u + + 0x30u);
    }
L_000fca74:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fca7cu, cpu->r[1], 0, 0);
    }
L_000fca78:;
    {
        cpu->r[3] = rd32(0x000fca80u + + 0x2cu);
    }
L_000fca7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fca84u, cpu->r[12], 0, 0);
    }
L_000fca80:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fca88u, cpu->r[2], 0, 0);
    }
L_000fca84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000fca88:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fca90u, cpu->r[3], 0, 0);
    }
L_000fca8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fca90:;
    {
        cpu->r[14] = 0x000fca94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fca94:;
    {
        goto L_000fca48;
    }
}

/* _ZN16SoundFileManagerD2Ev @ 000fcab0 (arm) */
void fn_000fcab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcab0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fcab4:;
    {
        cpu->r[4] = rd32(0x000fcabcu + + 0x6cu);
    }
L_000fcab8:;
    {
        cpu->r[5] = rd32(0x000fcac0u + + 0x6cu);
    }
L_000fcabc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fcac0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fcac8u, cpu->r[4], 0, 0);
    }
L_000fcac4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fcac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fcacc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fcad0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fcad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcaf0;
        }
    }
L_000fcad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fcadc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fcae0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fcae4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fcae8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcaec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcaf0u)) return;
    }
L_000fcaf0:;
    {
        cpu->r[1] = rd32(0x000fcaf8u + + 0x38u);
    }
L_000fcaf4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcaf8:;
    {
        cpu->r[12] = rd32(0x000fcb00u + + 0x34u);
    }
L_000fcafc:;
    {
        cpu->r[14] = 0x00000023u;
    }
L_000fcb00:;
    {
        cpu->r[2] = rd32(0x000fcb08u + + 0x30u);
    }
L_000fcb04:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcb0cu, cpu->r[1], 0, 0);
    }
L_000fcb08:;
    {
        cpu->r[3] = rd32(0x000fcb10u + + 0x2cu);
    }
L_000fcb0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcb14u, cpu->r[12], 0, 0);
    }
L_000fcb10:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcb18u, cpu->r[2], 0, 0);
    }
L_000fcb14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000fcb18:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcb20u, cpu->r[3], 0, 0);
    }
L_000fcb1c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcb20:;
    {
        cpu->r[14] = 0x000fcb24u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcb24:;
    {
        goto L_000fcad8;
    }
}

/* _ZN16SoundFileManagerC1Ev @ 000fcb40 (arm) */
void fn_000fcb40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcb40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fcb44:;
    {
        cpu->r[4] = rd32(0x000fcb4cu + + 0x64u);
    }
L_000fcb48:;
    {
        cpu->r[6] = rd32(0x000fcb50u + + 0x64u);
    }
L_000fcb4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fcb50:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fcb58u, cpu->r[4], 0, 0);
    }
L_000fcb54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fcb58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fcb5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fcb60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fcb64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcb9c;
        }
    }
L_000fcb68:;
    {
        cpu->r[1] = rd32(0x000fcb70u + + 0x48u);
    }
L_000fcb6c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcb70:;
    {
        cpu->r[12] = rd32(0x000fcb78u + + 0x44u);
    }
L_000fcb74:;
    {
        cpu->r[14] = 0x0000001cu;
    }
L_000fcb78:;
    {
        cpu->r[2] = rd32(0x000fcb80u + + 0x40u);
    }
L_000fcb7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcb84u, cpu->r[1], 0, 0);
    }
L_000fcb80:;
    {
        cpu->r[3] = rd32(0x000fcb88u + + 0x3cu);
    }
L_000fcb84:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcb8cu, cpu->r[12], 0, 0);
    }
L_000fcb88:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcb90u, cpu->r[2], 0, 0);
    }
L_000fcb8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_000fcb90:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcb98u, cpu->r[3], 0, 0);
    }
L_000fcb94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcb98:;
    {
        cpu->r[14] = 0x000fcb9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcb9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fcba0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fcba4:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_000fcba8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcbac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcbb0u)) return;
    }
}

/* _ZN16SoundFileManagerC2Ev @ 000fcbc8 (arm) */
void fn_000fcbc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcbc8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fcbcc:;
    {
        cpu->r[4] = rd32(0x000fcbd4u + + 0x64u);
    }
L_000fcbd0:;
    {
        cpu->r[6] = rd32(0x000fcbd8u + + 0x64u);
    }
L_000fcbd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fcbd8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fcbe0u, cpu->r[4], 0, 0);
    }
L_000fcbdc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fcbe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fcbe4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fcbe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fcbec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcc24;
        }
    }
L_000fcbf0:;
    {
        cpu->r[1] = rd32(0x000fcbf8u + + 0x48u);
    }
L_000fcbf4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcbf8:;
    {
        cpu->r[12] = rd32(0x000fcc00u + + 0x44u);
    }
L_000fcbfc:;
    {
        cpu->r[14] = 0x0000001cu;
    }
L_000fcc00:;
    {
        cpu->r[2] = rd32(0x000fcc08u + + 0x40u);
    }
L_000fcc04:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcc0cu, cpu->r[1], 0, 0);
    }
L_000fcc08:;
    {
        cpu->r[3] = rd32(0x000fcc10u + + 0x3cu);
    }
L_000fcc0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcc14u, cpu->r[12], 0, 0);
    }
L_000fcc10:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcc18u, cpu->r[2], 0, 0);
    }
L_000fcc14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_000fcc18:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcc20u, cpu->r[3], 0, 0);
    }
L_000fcc1c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcc20:;
    {
        cpu->r[14] = 0x000fcc24u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcc24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fcc28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fcc2c:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_000fcc30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcc34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcc38u)) return;
    }
}

/* _ZN16SoundFileManager13OpenSoundFileEiib @ 000fcc50 (arm) */
void fn_000fcc50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcc50:;
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
L_000fcc54:;
    {
        cpu->r[4] = rd32(0x000fcc5cu + + 0x108u);
    }
L_000fcc58:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000fcc5c:;
    {
        cpu->r[3] = rd32(0x000fcc64u + + 0x104u);
    }
L_000fcc60:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fcc68u, cpu->r[4], 0, 0);
    }
L_000fcc64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fcc68:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000fcc6c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000fcc70:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fcc74:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000fcc78:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fcc7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcce8;
        }
    }
L_000fcc80:;
    {
        cpu->r[5] = rd32(0x000fcc88u + + 0xe4u);
    }
L_000fcc84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fcc88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fcc8c:;
    {
        cpu->r[14] = 0x000fcc90u; fn_00189f5c(cpu);
    }
L_000fcc90:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000fcc94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fcc98:;
    {
        cpu->r[14] = 0x000fcc9cu; fn_00189800(cpu);
    }
L_000fcc9c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fcca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcd2c;
        }
    }
L_000fcca4:;
    {
        cpu->r[3] = rd32(0x000fccacu + + 0xc4u);
    }
L_000fcca8:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_000fccac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fccb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fccb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fccb8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000fccbc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_000fccc0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000fccc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000fccc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fcccc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000fccd0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000fccd4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
        }
    }
L_000fccd8:;
    {
        cpu->r[14] = 0x000fccdcu; fn_000fc0d0(cpu);
    }
L_000fccdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fcce0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcce4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcce8u)) return;
    }
L_000fcce8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fccec:;
    {
        cpu->r[14] = 0x000fccf0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fccf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fccf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcc80;
        }
    }
L_000fccf8:;
    {
        cpu->r[5] = rd32(0x000fcd00u + + 0x6cu);
    }
L_000fccfc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000fcd00:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fcd04:;
    {
        cpu->r[14] = 0x000fcd08u; fn_00189f48(cpu);
    }
L_000fcd08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fcd0c:;
    {
        cpu->r[14] = 0x000fcd10u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fcd10:;
    {
        cpu->r[3] = rd32(0x000fcd18u + + 0x5cu);
    }
L_000fcd14:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fcd18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fcd1c:;
    {
        cpu->r[3] = rd32(0x000fcd24u + + 0x54u);
    }
L_000fcd20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fcd24:;
    {
        cpu->r[14] = 0x000fcd28u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fcd28:;
    {
        goto L_000fcc84;
    }
L_000fcd2c:;
    {
        cpu->r[1] = rd32(0x000fcd34u + + 0x48u);
    }
L_000fcd30:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcd34:;
    {
        cpu->r[12] = rd32(0x000fcd3cu + + 0x44u);
    }
L_000fcd38:;
    {
        cpu->r[14] = 0x0000002fu;
    }
L_000fcd3c:;
    {
        cpu->r[2] = rd32(0x000fcd44u + + 0x40u);
    }
L_000fcd40:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcd48u, cpu->r[1], 0, 0);
    }
L_000fcd44:;
    {
        cpu->r[3] = rd32(0x000fcd4cu + + 0x3cu);
    }
L_000fcd48:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcd50u, cpu->r[12], 0, 0);
    }
L_000fcd4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcd54u, cpu->r[2], 0, 0);
    }
L_000fcd50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_000fcd54:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcd5cu, cpu->r[3], 0, 0);
    }
L_000fcd58:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcd5c:;
    {
        cpu->r[14] = 0x000fcd60u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcd60:;
    {
        goto L_000fcca4;
    }
}

/* _ZN10CSoundFileC1Eiib @ 000fcd8c (arm) */
void fn_000fcd8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcd8c:;
    {
        cpu->r[12] = rd32(0x000fcd94u + + 0xd8u);
    }
L_000fcd90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fcd94:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000fcd98:;
    {
        cpu->r[3] = rd32(0x000fcda0u + + 0xd0u);
    }
L_000fcd9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcda4u, cpu->r[12], 0, 0);
    }
L_000fcda0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000fcda4:;
    {
        cpu->r[1] = rd32(0x000fcdacu + + 0xc8u);
    }
L_000fcda8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fcdac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fcdb0:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fcdb4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000fcdb8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000fcdbc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000fcdc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000fcdc4:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_000fcdc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fcdcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fce30;
        }
    }
L_000fcdd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fcdd4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000fcdd8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fcddc:;
    {
        cpu->r[14] = 0x000fcde0u; fn_000fcc50(cpu);
    }
L_000fcde0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fcde4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000fcde8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcdf8;
        }
    }
L_000fcdec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fcdf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcdf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcdf8u)) return;
    }
L_000fcdf8:;
    {
        cpu->r[1] = rd32(0x000fce00u + + 0x78u);
    }
L_000fcdfc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fce00:;
    {
        cpu->r[12] = rd32(0x000fce08u + + 0x74u);
    }
L_000fce04:;
    {
        cpu->r[14] = 0x0000003fu;
    }
L_000fce08:;
    {
        cpu->r[2] = rd32(0x000fce10u + + 0x70u);
    }
L_000fce0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fce14u, cpu->r[1], 0, 0);
    }
L_000fce10:;
    {
        cpu->r[3] = rd32(0x000fce18u + + 0x6cu);
    }
L_000fce14:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fce1cu, cpu->r[12], 0, 0);
    }
L_000fce18:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fce20u, cpu->r[2], 0, 0);
    }
L_000fce1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_000fce20:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fce28u, cpu->r[3], 0, 0);
    }
L_000fce24:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fce28:;
    {
        cpu->r[14] = 0x000fce2cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fce2c:;
    {
        goto L_000fcdec;
    }
L_000fce30:;
    {
        cpu->r[1] = rd32(0x000fce38u + + 0x50u);
    }
L_000fce34:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fce38:;
    {
        cpu->r[12] = rd32(0x000fce40u + + 0x4cu);
    }
L_000fce3c:;
    {
        cpu->r[14] = 0x0000002eu;
    }
L_000fce40:;
    {
        cpu->r[2] = rd32(0x000fce48u + + 0x48u);
    }
L_000fce44:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fce4cu, cpu->r[1], 0, 0);
    }
L_000fce48:;
    {
        cpu->r[3] = rd32(0x000fce50u + + 0x44u);
    }
L_000fce4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fce54u, cpu->r[12], 0, 0);
    }
L_000fce50:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fce58u, cpu->r[2], 0, 0);
    }
L_000fce54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000044u, 0, 0);
    }
L_000fce58:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fce60u, cpu->r[3], 0, 0);
    }
L_000fce5c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fce60:;
    {
        cpu->r[14] = 0x000fce64u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fce64:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000fce68:;
    {
        goto L_000fcdd0;
    }
}

/* _Z15CreateSoundFileiib @ 000fce98 (arm) */
void fn_000fce98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fce98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fce9c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fcea0:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_000fcea4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000fcea8:;
    {
        cpu->r[14] = 0x000fceacu; fn_0018ba6c(cpu);
    }
L_000fceac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fceb0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fceb4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fceb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fcebc:;
    {
        cpu->r[14] = 0x000fcec0u; fn_000fcd8c(cpu);
    }
L_000fcec0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fcec4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcec8u)) return;
    }
}

/* _ZN10CSoundFileC2Eiib @ 000fcec8 (arm) */
void fn_000fcec8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcec8:;
    {
        cpu->r[12] = rd32(0x000fced0u + + 0xd8u);
    }
L_000fcecc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fced0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000fced4:;
    {
        cpu->r[3] = rd32(0x000fcedcu + + 0xd0u);
    }
L_000fced8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcee0u, cpu->r[12], 0, 0);
    }
L_000fcedc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000fcee0:;
    {
        cpu->r[1] = rd32(0x000fcee8u + + 0xc8u);
    }
L_000fcee4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fcee8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fceec:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fcef0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000fcef4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000fcef8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000fcefc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000fcf00:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_000fcf04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fcf08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcf6c;
        }
    }
L_000fcf0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fcf10:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000fcf14:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fcf18:;
    {
        cpu->r[14] = 0x000fcf1cu; fn_000fcc50(cpu);
    }
L_000fcf1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fcf20:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000fcf24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fcf34;
        }
    }
L_000fcf28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fcf2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fcf30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fcf34u)) return;
    }
L_000fcf34:;
    {
        cpu->r[1] = rd32(0x000fcf3cu + + 0x78u);
    }
L_000fcf38:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcf3c:;
    {
        cpu->r[12] = rd32(0x000fcf44u + + 0x74u);
    }
L_000fcf40:;
    {
        cpu->r[14] = 0x0000003fu;
    }
L_000fcf44:;
    {
        cpu->r[2] = rd32(0x000fcf4cu + + 0x70u);
    }
L_000fcf48:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcf50u, cpu->r[1], 0, 0);
    }
L_000fcf4c:;
    {
        cpu->r[3] = rd32(0x000fcf54u + + 0x6cu);
    }
L_000fcf50:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcf58u, cpu->r[12], 0, 0);
    }
L_000fcf54:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcf5cu, cpu->r[2], 0, 0);
    }
L_000fcf58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_000fcf5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcf64u, cpu->r[3], 0, 0);
    }
L_000fcf60:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcf64:;
    {
        cpu->r[14] = 0x000fcf68u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcf68:;
    {
        goto L_000fcf28;
    }
L_000fcf6c:;
    {
        cpu->r[1] = rd32(0x000fcf74u + + 0x50u);
    }
L_000fcf70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fcf74:;
    {
        cpu->r[12] = rd32(0x000fcf7cu + + 0x4cu);
    }
L_000fcf78:;
    {
        cpu->r[14] = 0x0000002eu;
    }
L_000fcf7c:;
    {
        cpu->r[2] = rd32(0x000fcf84u + + 0x48u);
    }
L_000fcf80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fcf88u, cpu->r[1], 0, 0);
    }
L_000fcf84:;
    {
        cpu->r[3] = rd32(0x000fcf8cu + + 0x44u);
    }
L_000fcf88:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fcf90u, cpu->r[12], 0, 0);
    }
L_000fcf8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fcf94u, cpu->r[2], 0, 0);
    }
L_000fcf90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000044u, 0, 0);
    }
L_000fcf94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fcf9cu, cpu->r[3], 0, 0);
    }
L_000fcf98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fcf9c:;
    {
        cpu->r[14] = 0x000fcfa0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fcfa0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000fcfa4:;
    {
        goto L_000fcf0c;
    }
}

/* _ZN10IUpdatableD1Ev @ 000fcfd4 (arm) */
void fn_000fcfd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcfd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12SoundManager14SetSoundStatusEb @ 000fcfd8 (arm) */
void fn_000fcfd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcfd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12SoundManager11SamplePauseEiii @ 000fcfdc (arm) */
void fn_000fcfdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fcfdc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fcfe0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fcfe4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fcfe8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fcfec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fcff0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_000fcff4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fcff8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fcffc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fd000:;
    {
        cpu->r[14] = 0x000fd008u;
    }
L_000fd004:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd008u)) return;
    }
L_000fd008:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000fd00c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd010u)) return;
    }
}

/* _ZN12SoundManager12SampleResumeEiii @ 000fd010 (arm) */
void fn_000fd010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd010:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000fd014:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd018:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000fd01c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd020u)) return;
        }
    }
L_000fd020:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd024:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fd028:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fd02c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fd030:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_000fd034:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fd038:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fd03c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fd040:;
    {
        cpu->r[14] = 0x000fd048u;
    }
L_000fd044:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd048u)) return;
    }
L_000fd048:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000fd04c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd050u)) return;
    }
}

/* _ZN12SoundManager10initializeEv @ 000fd050 (arm) */
void fn_000fd050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd050:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12SoundManager18MarkCacheSoundDataEibi @ 000fd054 (arm) */
void fn_000fd054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd054:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd058:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fd05c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fd060:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fd064:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000fd068:;
    {
        wr8(cpu->r[1] + + 0x15u, cpu->r[2]);
    }
L_000fd06c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12SoundManager16loadNeededSoundsEv @ 000fd070 (arm) */
void fn_000fd070(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd070:;
    {
        return fn_0018e4a4(cpu);
    }
}

/* _ZN12SoundManager19MarkSoundForLoadingEibbi @ 000fd074 (arm) */
void fn_000fd074(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd074:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fd078:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000fd07c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000fd080:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd084:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x98u);
    }
L_000fd088:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fd08c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000fd090:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000fd094:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000fd098:;
    {
        sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_000fd09c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd0a0u)) return;
        }
    }
L_000fd0a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fd0a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fd0b8;
        }
    }
L_000fd0a8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000fd0ac:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000fd0b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000fd0b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fd0e0;
        }
    }
L_000fd0b8:;
    {
        cpu->r[0] = rd32(0x000fd0c0u + + 0x60u);
    }
L_000fd0bc:;
    {
        cpu->r[2] = 0x0000012fu;
    }
L_000fd0c0:;
    {
        cpu->r[1] = rd32(0x000fd0c8u + + 0x5cu);
    }
L_000fd0c4:;
    {
        cpu->r[3] = rd32(0x000fd0ccu + + 0x5cu);
    }
L_000fd0c8:;
    {
        cpu->r[0] = add_flags(cpu, 0x000fd0d0u, cpu->r[0], 0, 0);
    }
L_000fd0cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd0d4u, cpu->r[1], 0, 0);
    }
L_000fd0d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd0d8u, cpu->r[3], 0, 0);
    }
L_000fd0d4:;
    {
        cpu->r[14] = 0x000fd0d8u; imp_printf(cpu); /* printf */
    }
L_000fd0d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_000fd0dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000fd0e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fd0e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000fd0e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fd0ec:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000fd0f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000fd0f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000fd0f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0034u << 16);
    }
L_000fd0fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0034u << 16);
    }
L_000fd100:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_000fd104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_000fd108:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_000fd10c:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[8]);
    }
L_000fd110:;
    {
        { uint32_t v = cpu->r[1] & 0x00800000u; set_nz(cpu, v); }
    }
L_000fd114:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[7] | 0x00800000u; cpu->r[7] = v;
        }
    }
L_000fd118:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_000fd11c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd120u)) return;
    }
}

/* _ZN12SoundManager10SetSndUsedEibi @ 000fd12c (arm) */
void fn_000fd12c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd12c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fd130:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000fd134:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000fd138:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd13c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x98u);
    }
L_000fd140:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fd144:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000fd148:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000fd14c:;
    {
        sub_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_000fd150:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd154u)) return;
        }
    }
L_000fd154:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fd158:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fd16c;
        }
    }
L_000fd15c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000fd160:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000fd164:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000fd168:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fd194;
        }
    }
L_000fd16c:;
    {
        cpu->r[0] = rd32(0x000fd174u + + 0x34u);
    }
L_000fd170:;
    {
        cpu->r[2] = 0x00000120u;
    }
L_000fd174:;
    {
        cpu->r[1] = rd32(0x000fd17cu + + 0x30u);
    }
L_000fd178:;
    {
        cpu->r[3] = rd32(0x000fd180u + + 0x30u);
    }
L_000fd17c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000fd184u, cpu->r[0], 0, 0);
    }
L_000fd180:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd188u, cpu->r[1], 0, 0);
    }
L_000fd184:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd18cu, cpu->r[3], 0, 0);
    }
L_000fd188:;
    {
        cpu->r[14] = 0x000fd18cu; imp_printf(cpu); /* printf */
    }
L_000fd18c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_000fd190:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000fd194:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fd198:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000fd19c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000fd1a0:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_000fd1a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd1a8u)) return;
    }
}

/* _ZN12SoundManager18SampleFrequencySetEiif @ 000fd1b4 (arm) */
void fn_000fd1b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd1b4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fd1b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fd1bc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fd1c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fd1c4:;
    {
        cpu->r[14] = 0x000fd1c8u; fn_0018bf2c(cpu);
    }
L_000fd1c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fd1cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd1d0u)) return;
    }
}

/* _ZN12SoundManager16setVolumeSoundIdEiif @ 000fd1d0 (arm) */
void fn_000fd1d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd1d0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000fd1d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd1dcu + + 0x20u);
    }
L_000fd1d8:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000fd1dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fd1e0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fd1e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fd1e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fd1ec:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000fd1f0:;
    {
        cpu->r[14] = 0x000fd1f4u; fn_0018bfec(cpu);
    }
L_000fd1f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fd1f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd1fcu)) return;
    }
}

/* _ZN12SoundManager15SampleSetVolumeEiifi @ 000fd200 (arm) */
void fn_000fd200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd200:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000fd204:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd20cu + + 0x8u);
    }
L_000fd208:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000fd20c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000fd210:;
    {
        return fn_0018bfec(cpu);
    }
}

/* _ZN12SoundManager10SampleStopEi @ 000fd218 (arm) */
void fn_000fd218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd218:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd21c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fd220:;
    {
        return fn_0018cc30(cpu);
    }
}

/* _ZN12SoundManager13SamplePlayingEiii @ 000fd224 (arm) */
void fn_000fd224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd224:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd228:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd22c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fd230:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000fd234:;
    {
        cpu->r[14] = 0x000fd238u; fn_0018c1bc(cpu);
    }
L_000fd238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fd23c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_000fd240:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000fd244:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd248u)) return;
    }
}

/* _ZN12SoundManager11SampleStartEibii @ 000fd248 (arm) */
void fn_000fd248(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd248:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fd24c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd254u + + 0x30u);
    }
L_000fd250:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000fd254:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd258:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fd25c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fd260:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fd264:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000fd268:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000fd26c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd270:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000fd274:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000fd278:;
    {
        cpu->r[14] = 0x000fd27cu; fn_0018e570(cpu);
    }
L_000fd27c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000fd280:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd284u)) return;
    }
}

/* _ZN12SoundManager23SampleStartIfNotPlayingEibii @ 000fd288 (arm) */
void fn_000fd288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd288:;
    {
        return fn_000fd248(cpu);
    }
}

/* _ZN12SoundManager14playInPositionEiRK8Vector3dbf @ 000fd28c (arm) */
void fn_000fd28c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd28c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fd290:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000fd294:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_000fd298:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000fd29c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0x8u);
    }
L_000fd2a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fd2a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000fd2a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000fd2ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14]);
    }
L_000fd2b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd2b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0x4u);
    }
L_000fd2b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000fd2bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd2c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000fd2c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd2ccu + + 0x18u);
    }
L_000fd2c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000fd2cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd2d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_000fd2d4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd2d8:;
    {
        cpu->r[14] = 0x000fd2dcu; fn_0018e570(cpu);
    }
L_000fd2dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000fd2e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd2e4u)) return;
    }
}

/* _ZN12SoundManager14SetMusicVolumeEf @ 000fd2e8 (arm) */
void fn_000fd2e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd2e8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000fd2ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd2f4u + + 0x8u);
    }
L_000fd2f0:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000fd2f4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000fd2f8:;
    {
        return fn_0018c0f4(cpu);
    }
}

/* _ZN12SoundManager12SetSfxVolumeEf @ 000fd300 (arm) */
void fn_000fd300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd300:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000fd304:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd30cu + + 0x8u);
    }
L_000fd308:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000fd30c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000fd310:;
    {
        return fn_0018c158(cpu);
    }
}

/* _ZN12SoundManager15SetMasterVolumeEf @ 000fd318 (arm) */
void fn_000fd318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd318:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd31c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000fd320:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000fd324:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd32cu + + 0x94u);
    }
L_000fd328:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000fd32c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fd330:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000fd334:;
    {
        cpu->r[4] = rd32(0x000fd33cu + + 0x88u);
    }
L_000fd338:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fd340u, cpu->r[4], 0, 0);
    }
L_000fd33c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,16);
    }
L_000fd340:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fd344:;
    {
        cpu->r[14] = 0x000fd348u; fn_000924c4(cpu);
    }
L_000fd348:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fd34c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000fd350:;
    {
        cpu->r[14] = 0x000fd354u; fn_0018c0f4(cpu);
    }
L_000fd354:;
    {
        cpu->r[3] = rd32(0x000fd35cu + + 0x6cu);
    }
L_000fd358:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fd35c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000fd360:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fd364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd398;
        }
    }
L_000fd368:;
    {
        cpu->r[6] = rd32(0x000fd370u + + 0x5cu);
    }
L_000fd36c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fd370:;
    {
        cpu->r[14] = 0x000fd374u; fn_00093f98(cpu);
    }
L_000fd374:;
    {
        cpu->r[3] = rd32(0x000fd37cu + + 0x54u);
    }
L_000fd378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fd37c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000fd380:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000fd384:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd38cu + + 0x34u);
    }
L_000fd388:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000fd38c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd390:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000fd394:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd398u)) return;
    }
L_000fd398:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fd39c:;
    {
        cpu->r[14] = 0x000fd3a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fd3a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fd3a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd368;
        }
    }
L_000fd3a8:;
    {
        cpu->r[6] = rd32(0x000fd3b0u + + 0x1cu);
    }
L_000fd3ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fd3b0:;
    {
        cpu->r[14] = 0x000fd3b4u; fn_00094228(cpu);
    }
L_000fd3b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fd3b8:;
    {
        cpu->r[14] = 0x000fd3bcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fd3bc:;
    {
        goto L_000fd36c;
    }
}

/* _ZN12SoundManager14updatePositionEiiRK8Vector3di @ 000fd3d4 (arm) */
void fn_000fd3d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd3d4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000fd3d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000fd3dc:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000fd3e0:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000fd3e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_000fd3e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000fd3ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000fd3f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd3f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_000fd3f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fd3fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fd400:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000fd404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fd408:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fd40c:;
    {
        cpu->r[14] = 0x000fd410u; fn_0018beb8(cpu);
    }
L_000fd410:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000fd414:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd418u)) return;
    }
}

/* _ZThn192_N12SoundManager6updateEv @ 000fd418 (arm) */
void fn_000fd418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd418:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000c0u, 1, 0);
    }
L_000fd41c:;
    {
        return fn_000fd420(cpu);
    }
}

/* _ZN12SoundManager6updateEv @ 000fd420 (arm) */
void fn_000fd420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd420:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd428:;
    {
        cpu->r[14] = 0x000fd42cu; fn_0009b4d0(cpu);
    }
L_000fd42c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000fd430:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_000fd434:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000fd43cu + + 0x14u);
    }
L_000fd438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd43c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000fd440:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000fd444:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fd448:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000fd44c:;
    {
        return fn_0018bd58(cpu);
    }
}

/* _ZN12SoundManager4initEv @ 000fd454 (arm) */
void fn_000fd454(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd454:;
    {
        return fn_0018dc3c(cpu);
    }
}

/* _ZN10IUpdatableD0Ev @ 000fd458 (arm) */
void fn_000fd458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd458:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd45c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd460:;
    {
        cpu->r[14] = 0x000fd464u; fn_0018ba20(cpu);
    }
L_000fd464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd468:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd46cu)) return;
    }
}

/* _ZThn192_N12SoundManagerD1Ev @ 000fd46c (arm) */
void fn_000fd46c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd46c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000c0u, 1, 0);
    }
L_000fd470:;
    {
        return fn_000fd474(cpu);
    }
}

/* _ZN12SoundManagerD1Ev @ 000fd474 (arm) */
void fn_000fd474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd474:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd478:;
    {
        cpu->r[5] = rd32(0x000fd480u + + 0xacu);
    }
L_000fd47c:;
    {
        cpu->r[6] = rd32(0x000fd484u + + 0xacu);
    }
L_000fd480:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fd484:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fd48cu, cpu->r[5], 0, 0);
    }
L_000fd488:;
    {
        cpu->r[3] = rd32(0x000fd490u + + 0xa4u);
    }
L_000fd48c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd490:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd494:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd498:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000fd49c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_000fd4a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd4a4:;
    {
        wr32(cpu->r[0] + + 0xc0u, cpu->r[1]);
    }
L_000fd4a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fd4ac:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000fd4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd4f4;
        }
    }
L_000fd4b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd4b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd4bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd4c0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fd4c4:;
    {
        cpu->r[14] = 0x000fd4c8u; fn_0018d7ac(cpu);
    }
L_000fd4c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c5u, 0, 0);
    }
L_000fd4cc:;
    {
        cpu->r[14] = 0x000fd4d0u; fn_000fca20(cpu);
    }
L_000fd4d0:;
    {
        cpu->r[3] = rd32(0x000fd4d8u + + 0x60u);
    }
L_000fd4d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd4d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd4dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd4e0:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_000fd4e4:;
    {
        cpu->r[14] = 0x000fd4e8u; fn_0018d95c(cpu);
    }
L_000fd4e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd4ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fd4f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd4f4u)) return;
    }
L_000fd4f4:;
    {
        cpu->r[1] = rd32(0x000fd4fcu + + 0x40u);
    }
L_000fd4f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fd4fc:;
    {
        cpu->r[2] = rd32(0x000fd504u + + 0x3cu);
    }
L_000fd500:;
    {
        cpu->r[14] = 0x00000031u;
    }
L_000fd504:;
    {
        cpu->r[3] = rd32(0x000fd50cu + + 0x38u);
    }
L_000fd508:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd510u, cpu->r[1], 0, 0);
    }
L_000fd50c:;
    {
        cpu->r[12] = rd32(0x000fd514u + + 0x34u);
    }
L_000fd510:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fd518u, cpu->r[2], 0, 0);
    }
L_000fd514:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd51cu, cpu->r[3], 0, 0);
    }
L_000fd518:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fd51c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fd524u, cpu->r[12], 0, 0);
    }
L_000fd520:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fd524:;
    {
        cpu->r[14] = 0x000fd528u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fd528:;
    {
        goto L_000fd4b4;
    }
}

/* _ZThn192_N12SoundManagerD0Ev @ 000fd54c (arm) */
void fn_000fd54c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd54c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000c0u, 1, 0);
    }
L_000fd550:;
    {
        return fn_000fd554(cpu);
    }
}

/* _ZN12SoundManagerD0Ev @ 000fd554 (arm) */
void fn_000fd554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd554:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd558:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd55c:;
    {
        cpu->r[14] = 0x000fd560u; fn_000fd474(cpu);
    }
L_000fd560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd564:;
    {
        cpu->r[14] = 0x000fd568u; fn_0018ba20(cpu);
    }
L_000fd568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd56c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd570u)) return;
    }
}

/* _ZN12SoundManagerD2Ev @ 000fd570 (arm) */
void fn_000fd570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd570:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd574:;
    {
        cpu->r[5] = rd32(0x000fd57cu + + 0xacu);
    }
L_000fd578:;
    {
        cpu->r[6] = rd32(0x000fd580u + + 0xacu);
    }
L_000fd57c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fd580:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fd588u, cpu->r[5], 0, 0);
    }
L_000fd584:;
    {
        cpu->r[3] = rd32(0x000fd58cu + + 0xa4u);
    }
L_000fd588:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd58c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd594:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000fd598:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_000fd59c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd5a0:;
    {
        wr32(cpu->r[0] + + 0xc0u, cpu->r[1]);
    }
L_000fd5a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fd5a8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000fd5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd5f0;
        }
    }
L_000fd5b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd5b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd5b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd5bc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fd5c0:;
    {
        cpu->r[14] = 0x000fd5c4u; fn_0018d7ac(cpu);
    }
L_000fd5c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c5u, 0, 0);
    }
L_000fd5c8:;
    {
        cpu->r[14] = 0x000fd5ccu; fn_000fca20(cpu);
    }
L_000fd5cc:;
    {
        cpu->r[3] = rd32(0x000fd5d4u + + 0x60u);
    }
L_000fd5d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd5d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd5d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd5dc:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_000fd5e0:;
    {
        cpu->r[14] = 0x000fd5e4u; fn_0018d95c(cpu);
    }
L_000fd5e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd5e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fd5ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd5f0u)) return;
    }
L_000fd5f0:;
    {
        cpu->r[1] = rd32(0x000fd5f8u + + 0x40u);
    }
L_000fd5f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fd5f8:;
    {
        cpu->r[2] = rd32(0x000fd600u + + 0x3cu);
    }
L_000fd5fc:;
    {
        cpu->r[14] = 0x00000031u;
    }
L_000fd600:;
    {
        cpu->r[3] = rd32(0x000fd608u + + 0x38u);
    }
L_000fd604:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd60cu, cpu->r[1], 0, 0);
    }
L_000fd608:;
    {
        cpu->r[12] = rd32(0x000fd610u + + 0x34u);
    }
L_000fd60c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fd614u, cpu->r[2], 0, 0);
    }
L_000fd610:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd618u, cpu->r[3], 0, 0);
    }
L_000fd614:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fd618:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fd620u, cpu->r[12], 0, 0);
    }
L_000fd61c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fd620:;
    {
        cpu->r[14] = 0x000fd624u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fd624:;
    {
        goto L_000fd5b0;
    }
}

/* _ZN12SoundManagerC1Ev @ 000fd648 (arm) */
void fn_000fd648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd648:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd64c:;
    {
        cpu->r[5] = rd32(0x000fd654u + + 0x90u);
    }
L_000fd650:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fd654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd658:;
    {
        cpu->r[14] = 0x000fd65cu; fn_0018c560(cpu);
    }
L_000fd65c:;
    {
        cpu->r[3] = rd32(0x000fd664u + + 0x84u);
    }
L_000fd660:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fd668u, cpu->r[5], 0, 0);
    }
L_000fd664:;
    {
        cpu->r[6] = rd32(0x000fd66cu + + 0x80u);
    }
L_000fd668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c5u, 0, 0);
    }
L_000fd66c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_000fd674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd678:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[2]);
    }
L_000fd67c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000fd680:;
    {
        cpu->r[14] = 0x000fd684u; fn_000fcb40(cpu);
    }
L_000fd684:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd688:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fd68c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fd690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd6c8;
        }
    }
L_000fd694:;
    {
        cpu->r[1] = rd32(0x000fd69cu + + 0x54u);
    }
L_000fd698:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fd69c:;
    {
        cpu->r[12] = rd32(0x000fd6a4u + + 0x50u);
    }
L_000fd6a0:;
    {
        cpu->r[14] = 0x00000025u;
    }
L_000fd6a4:;
    {
        cpu->r[2] = rd32(0x000fd6acu + + 0x4cu);
    }
L_000fd6a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd6b0u, cpu->r[1], 0, 0);
    }
L_000fd6ac:;
    {
        cpu->r[3] = rd32(0x000fd6b4u + + 0x48u);
    }
L_000fd6b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fd6b8u, cpu->r[12], 0, 0);
    }
L_000fd6b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fd6bcu, cpu->r[2], 0, 0);
    }
L_000fd6b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000fd6bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd6c4u, cpu->r[3], 0, 0);
    }
L_000fd6c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fd6c4:;
    {
        cpu->r[14] = 0x000fd6c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fd6c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd6cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd6d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd6d4:;
    {
        wr8(cpu->r[4] + + 0xc4u, cpu->r[2]);
    }
L_000fd6d8:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_000fd6dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fd6e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd6e4u)) return;
    }
}

/* _ZN12SoundManagerC2Ev @ 000fd700 (arm) */
void fn_000fd700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd700:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd704:;
    {
        cpu->r[5] = rd32(0x000fd70cu + + 0x90u);
    }
L_000fd708:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fd70c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd710:;
    {
        cpu->r[14] = 0x000fd714u; fn_0018c560(cpu);
    }
L_000fd714:;
    {
        cpu->r[3] = rd32(0x000fd71cu + + 0x84u);
    }
L_000fd718:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fd720u, cpu->r[5], 0, 0);
    }
L_000fd71c:;
    {
        cpu->r[6] = rd32(0x000fd724u + + 0x80u);
    }
L_000fd720:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c5u, 0, 0);
    }
L_000fd724:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd728:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_000fd72c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fd730:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[2]);
    }
L_000fd734:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000fd738:;
    {
        cpu->r[14] = 0x000fd73cu; fn_000fcb40(cpu);
    }
L_000fd73c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd740:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fd744:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fd748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd780;
        }
    }
L_000fd74c:;
    {
        cpu->r[1] = rd32(0x000fd754u + + 0x54u);
    }
L_000fd750:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fd754:;
    {
        cpu->r[12] = rd32(0x000fd75cu + + 0x50u);
    }
L_000fd758:;
    {
        cpu->r[14] = 0x00000025u;
    }
L_000fd75c:;
    {
        cpu->r[2] = rd32(0x000fd764u + + 0x4cu);
    }
L_000fd760:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fd768u, cpu->r[1], 0, 0);
    }
L_000fd764:;
    {
        cpu->r[3] = rd32(0x000fd76cu + + 0x48u);
    }
L_000fd768:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fd770u, cpu->r[12], 0, 0);
    }
L_000fd76c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fd774u, cpu->r[2], 0, 0);
    }
L_000fd770:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000fd774:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd77cu, cpu->r[3], 0, 0);
    }
L_000fd778:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fd77c:;
    {
        cpu->r[14] = 0x000fd780u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fd780:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fd784:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fd788:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd78c:;
    {
        wr8(cpu->r[4] + + 0xc4u, cpu->r[2]);
    }
L_000fd790:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_000fd794:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fd798:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd79cu)) return;
    }
}

/* _ZN10gxMainMenu12SetMenuStateEi @ 000fd7b8 (arm) */
void fn_000fd7b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd7b8:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[1]);
    }
L_000fd7bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10gxMainMenu12GetMenuStateEv @ 000fd7c0 (arm) */
void fn_000fd7c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd7c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd7c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GS_AboutMenu8isKindOfEi @ 000fd7c8 (arm) */
void fn_000fd7c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd7c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000039u, 1, 1);
    }
L_000fd7cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000fd7d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000fd7d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_10 @ 000fd7d8 (arm) */
void fn_000fd7d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd7d8:;
    {
        cpu->r[3] = rd32(0x000fd7e0u + + 0x20u);
    }
L_000fd7dc:;
    {
        cpu->r[1] = rd32(0x000fd7e4u + + 0x20u);
    }
L_000fd7e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd7e8u, cpu->r[3], 0, 0);
    }
L_000fd7e4:;
    {
        cpu->r[2] = rd32(0x000fd7ecu + + 0x1cu);
    }
L_000fd7e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fd7ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fd7f4u, cpu->r[2], 0, 0);
    }
L_000fd7f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fd7f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000fd7f8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000fd7fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GS_AboutMenuD1Ev @ 000fd80c (arm) */
void fn_000fd80c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd80c:;
    {
        cpu->r[3] = rd32(0x000fd814u + + 0x24u);
    }
L_000fd810:;
    {
        cpu->r[2] = rd32(0x000fd818u + + 0x24u);
    }
L_000fd814:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd81cu, cpu->r[3], 0, 0);
    }
L_000fd818:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd81c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fd820:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fd828:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fd82c:;
    {
        cpu->r[14] = 0x000fd830u; fn_000ec21c(cpu);
    }
L_000fd830:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd834:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd838u)) return;
    }
}

/* _ZN12GS_AboutMenu22ProcessOnMouseButtonUpEv @ 000fd840 (arm) */
void fn_000fd840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd840:;
    {
        cpu->r[3] = rd32(0x000fd848u + + 0x30u);
    }
L_000fd844:;
    {
        cpu->r[2] = rd32(0x000fd84cu + + 0x30u);
    }
L_000fd848:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fd84c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000fd850:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fd858u, cpu->r[3], 0, 0);
    }
L_000fd854:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fd858:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fd85c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_000fd860:;
    {
        cpu->r[14] = 0x000fd864u; fn_00110c40(cpu);
    }
L_000fd864:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fd868:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000fd86c:;
    {
        wr8(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_000fd870:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000fd874:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd878u)) return;
    }
}

/* _ZN12GS_AboutMenu18ProcessOnMouseDragEv @ 000fd880 (arm) */
void fn_000fd880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd880:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fd884:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_000fd888:;
    {
        return fn_00110818(cpu);
    }
}

/* _ZN12GS_AboutMenu24ProcessOnMouseButtonDownEv @ 000fd88c (arm) */
void fn_000fd88c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd88c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd890:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd894:;
    {
        cpu->r[14] = 0x000fd898u; fn_00110498(cpu);
    }
L_000fd898:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fd89c:;
    {
        wr8(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_000fd8a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd8a4u)) return;
    }
}

/* _ZN12GS_AboutMenu8DoActionEii @ 000fd8a4 (arm) */
void fn_000fd8a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd8a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd8a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fd8ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000fd8b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd8b4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd8b8u)) return;
        }
    }
L_000fd8b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_000fd8bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000fd8c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fd918;
        }
    }
L_000fd8c4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_000fd8c8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000fd8cc:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_000fd8d0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000fd8d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_000fd8d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_000fd8dc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_000fd8e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_000fd8e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000fd8e8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000fd8ec:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_000fd8f0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd8f4u)) return;
        }
    }
L_000fd8f4:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_000fd8f8:;
    {
        cpu->r[14] = 0x000fd8fcu; fn_00093f34(cpu);
    }
L_000fd8fc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000fd900:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000fd904:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000fd908:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000fd90c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fd910:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_000fd914:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd918u)) return;
    }
L_000fd918:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000fd91c:;
    {
        cpu->r[14] = 0x000fd924u;
    }
L_000fd920:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd924u)) return;
    }
L_000fd924:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fd928u)) return;
    }
}

/* _ZN12GS_AboutMenu6UpdateEv @ 000fd928 (arm) */
void fn_000fd928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fd928:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fd92c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000fd930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000fd934:;
    {
        cpu->r[5] = rd32(0x000fd93cu + + 0x158u);
    }
L_000fd938:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fd93c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fd940:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fd948u, cpu->r[5], 0, 0);
    }
L_000fd944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fd964;
        }
    }
L_000fd948:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000fd94c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fda3c;
        }
    }
L_000fd950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fd954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fda34;
        }
    }
L_000fd958:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fd95c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_000fd960:;
    {
        return fn_00114a58(cpu);
    }
L_000fd964:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fd968:;
    {
        cpu->r[14] = 0x000fd96cu; fn_000eb59c(cpu);
    }
L_000fd96c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_000fd970:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_000fd974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fd978:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000fd97c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000fd980:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_000fd984:;
    {
        cpu->r[14] = 0x000fd988u; fn_0010efe4(cpu);
    }
L_000fd988:;
    {
        cpu->r[3] = rd32(0x000fd990u + + 0x108u);
    }
L_000fd98c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fd990:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_000fd994:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fd998:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00006667u;
        }
    }
L_000fd99c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_000fd9a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
        }
    }
L_000fd9a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_000fd9a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
        }
    }
L_000fd9ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_000fd9b0:;
    {
        if (cond_test(cpu, 1)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
        }
    }
L_000fd9b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_000fd9b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 3u, &shc), cpu->r[3], 1, 0);
        }
    }
L_000fd9bc:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_000fd9c0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000fd9c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000fd9c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_000fd9cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fd9e0;
        }
    }
L_000fd9d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fd9d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000009u);
        }
    }
L_000fd9d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_000fd9dc:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_000fd9e0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x960u);
    }
L_000fd9e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_000fd9e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fd9ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000fd9f0:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_000fd9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fda34;
        }
    }
L_000fd9f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x968u);
    }
L_000fd9fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fda00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fda10;
        }
    }
L_000fda04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x96cu);
    }
L_000fda08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fda0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fda34;
        }
    }
L_000fda10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000fda14:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_000fda18:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_000fda1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000fda20:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_000fda24:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000fda28:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000fda2c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000fda30:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_000fda34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fda38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fda3cu)) return;
    }
L_000fda3c:;
    {
        cpu->r[14] = 0x000fda40u; fn_0010da28(cpu);
    }
L_000fda40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fda44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fda34;
        }
    }
L_000fda48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_000fda4c:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_000fda50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fda54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fda34;
        }
    }
L_000fda58:;
    {
        cpu->r[0] = rd32(0x000fda60u + + 0x3cu);
    }
L_000fda5c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fda60:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000fda64:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000fda68:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000fda6c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000fda70:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fda74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000fda78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fda7c:;
    {
        cpu->r[14] = 0x000fda80u; fn_000fd248(cpu);
    }
L_000fda80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fda84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fda88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fda8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_000fda90:;
    {
        return fn_000f34e8(cpu);
    }
}

/* _ZN12GS_AboutMenuC1Eiii @ 000fdaa0 (arm) */
void fn_000fdaa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fdaa0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fdaa4:;
    {
        cpu->r[4] = rd32(0x000fdaacu + + 0x38u);
    }
L_000fdaa8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fdaac:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000fdab0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000fdab4:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000fdab8:;
    {
        cpu->r[14] = 0x000fdabcu; fn_0010ffa8(cpu);
    }
L_000fdabc:;
    {
        cpu->r[2] = rd32(0x000fdac4u + + 0x24u);
    }
L_000fdac0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fdac8u, cpu->r[4], 0, 0);
    }
L_000fdac4:;
    {
        wr32(cpu->r[7] + + 0x8e0u, cpu->r[5]);
    }
L_000fdac8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fdacc:;
    {
        wr32(cpu->r[7] + + 0x954u, cpu->r[6]);
    }
L_000fdad0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000fdad4:;
    {
        wr32(cpu->r[7] + + 0x958u, cpu->r[8]);
    }
L_000fdad8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fdadc:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_000fdae0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fdae4u)) return;
    }
}

/* _ZN12GS_AboutMenuC2Eiii @ 000fdaec (arm) */
void fn_000fdaec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fdaec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fdaf0:;
    {
        cpu->r[4] = rd32(0x000fdaf8u + + 0x38u);
    }
L_000fdaf4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fdaf8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000fdafc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000fdb00:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000fdb04:;
    {
        cpu->r[14] = 0x000fdb08u; fn_0010ffa8(cpu);
    }
L_000fdb08:;
    {
        cpu->r[2] = rd32(0x000fdb10u + + 0x24u);
    }
L_000fdb0c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fdb14u, cpu->r[4], 0, 0);
    }
L_000fdb10:;
    {
        wr32(cpu->r[7] + + 0x8e0u, cpu->r[5]);
    }
L_000fdb14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fdb18:;
    {
        wr32(cpu->r[7] + + 0x954u, cpu->r[6]);
    }
L_000fdb1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000fdb20:;
    {
        wr32(cpu->r[7] + + 0x958u, cpu->r[8]);
    }
L_000fdb24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fdb28:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_000fdb2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fdb30u)) return;
    }
}

/* _ZN12GS_AboutMenuD0Ev @ 000fdb38 (arm) */
void fn_000fdb38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fdb38:;
    {
        cpu->r[3] = rd32(0x000fdb40u + + 0x2cu);
    }
L_000fdb3c:;
    {
        cpu->r[2] = rd32(0x000fdb44u + + 0x2cu);
    }
L_000fdb40:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fdb48u, cpu->r[3], 0, 0);
    }
L_000fdb44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fdb48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fdb4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fdb50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fdb54:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fdb58:;
    {
        cpu->r[14] = 0x000fdb5cu; fn_000ec21c(cpu);
    }
L_000fdb5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fdb60:;
    {
        cpu->r[14] = 0x000fdb64u; fn_0018ba20(cpu);
    }
L_000fdb64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fdb68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fdb6cu)) return;
    }
}

/* _ZN12GS_AboutMenu6RenderEv @ 000fdb74 (arm) */
void fn_000fdb74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fdb74:;
    {
        cpu->r[1] = rd32(0x000fdb7cu + + 0x6d8u);
    }
L_000fdb78:;
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
L_000fdb7c:;
    {
        cpu->r[7] = rd32(0x000fdb84u + + 0x6d4u);
    }
L_000fdb80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fdb88u, cpu->r[1], 0, 0);
    }
L_000fdb84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000008d0u, 1, 0);
    }
L_000fdb88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_000fdb8c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fdb90:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_000fdb94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000fdb98:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000fdb9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fdba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe0fc;
        }
    }
L_000fdba4:;
    {
        cpu->r[5] = rd32(0x000fdbacu + + 0x6b0u);
    }
L_000fdba8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdbac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000fdbb0:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000fdbb4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000fdbb8:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_000fdbbc:;
    {
        cpu->r[14] = 0x000fdbc0u; fn_0018aa44(cpu);
    }
L_000fdbc0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000fdbc4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000fdbc8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000fdbcc:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000fdbd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000fdbd4:;
    {
        cpu->r[14] = 0x000fdbd8u; fn_000ad8a0(cpu);
    }
L_000fdbd8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8d4u);
    }
L_000fdbdc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000fdbe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fdc0c;
        }
    }
L_000fdbe4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000fdbe8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fdbec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fdbf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fdbf4:;
    {
        cpu->r[14] = 0x000fdbfcu;
    }
L_000fdbf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fdbfcu)) return;
    }
L_000fdbfc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8d4u);
    }
L_000fdc00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000fdc04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000fdc08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fdbe4;
        }
    }
L_000fdc0c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x8cau);
    }
L_000fdc10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fdc14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fe240;
        }
    }
L_000fdc18:;
    {
        cpu->r[0] = rd32(0x000fdc20u + + 0x640u);
    }
L_000fdc1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdc20:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000fdc24:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000fdc28:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fdc2c:;
    {
        cpu->r[14] = 0x000fdc30u; fn_000962d0(cpu);
    }
L_000fdc30:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fdc34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fdc38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000fdc3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fdc40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000004u);
        }
    }
L_000fdc44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000fdc48:;
    {
        cpu->r[14] = 0x000fdc50u;
    }
L_000fdc4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fdc50u)) return;
    }
L_000fdc50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdc54:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000fdc58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000fdc5c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fdc60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe188;
        }
    }
L_000fdc64:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000fdc68:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_000fdc6c:;
    {
        cpu->r[14] = 0x000fdc70u; fn_00096a08(cpu);
    }
L_000fdc70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdc74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fdc78:;
    {
        cpu->r[8] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_000fdc7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fdc80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fdc84:;
    {
        cpu->r[14] = 0x000fdc88u; fn_0018aa44(cpu);
    }
L_000fdc88:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000fdc8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fdc90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdc94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_000fdc98:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000fdc9c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_000fdca0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_000fdca4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000fdca8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fdcac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe148;
        }
    }
L_000fdcb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdcb4:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000fdcb8:;
    {
        cpu->r[12] = rd32(0x000fdcc0u + + 0x5a4u);
    }
L_000fdcbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fdcc0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000fdcc4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000fdcc8:;
    {
        cpu->r[14] = 0x000fdcccu; fn_0018aa44(cpu);
    }
L_000fdccc:;
    {
        cpu->r[3] = rd32(0x000fdcd4u + + 0x594u);
    }
L_000fdcd0:;
    {
        cpu->r[14] = rd32(0x000fdcd8u + + 0x594u);
    }
L_000fdcd4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_000fdcd8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000fdcdc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdce0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000fdce4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fdce8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fdcec:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000fdcf0:;
    {
        cpu->r[14] = 0x000fdcf4u; fn_0012f780(cpu);
    }
L_000fdcf4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdcf8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000fdcfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000fdd00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000fdd04:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000fdd08:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000fdd0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fdd10:;
    {
        cpu->r[2] = 0x00000041u;
    }
L_000fdd14:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000fdd18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fdd1c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000005au, 1, 0);
    }
L_000fdd20:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fdd24:;
    {
        cpu->r[14] = 0x000fdd28u; fn_0012fa2c(cpu);
    }
L_000fdd28:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x954u);
    }
L_000fdd2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x958u);
    }
L_000fdd30:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x950u);
    }
L_000fdd34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000fdd38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
        }
    }
L_000fdd3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fdeb0;
        }
    }
L_000fdd40:;
    {
        cpu->r[3] = rd32(0x000fdd48u + + 0x528u);
    }
L_000fdd44:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000fdd48:;
    {
        cpu->r[0] = rd32(0x000fdd50u + + 0x524u);
    }
L_000fdd4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fdd54u, cpu->r[3], 0, 0);
    }
L_000fdd50:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000fdd54:;
    {
        cpu->r[3] = rd32(0x000fdd5cu + + 0x51cu);
    }
L_000fdd58:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_000fdd5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fdd64u, cpu->r[3], 0, 0);
    }
L_000fdd60:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000fdd64:;
    {
        cpu->r[3] = rd32(0x000fdd6cu + + 0x510u);
    }
L_000fdd68:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdd6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fdd74u, cpu->r[3], 0, 0);
    }
L_000fdd70:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000fdd74:;
    {
        cpu->r[3] = rd32(0x000fdd7cu + + 0x504u);
    }
L_000fdd78:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fdd80u, cpu->r[3], 0, 0);
    }
L_000fdd7c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_000fdd80:;
    {
        goto L_000fde20;
    }
L_000fdd84:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000fdd88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fdd8c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000fdd90:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000fdd94:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[14]);
    }
L_000fdd98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fdd9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 0);
    }
L_000fdda0:;
    {
        cpu->r[14] = 0x000fdda4u; fn_000a9818(cpu);
    }
L_000fdda4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000fdda8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000fddac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fddb0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000fddb4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fddb8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000fddbc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000fddc0:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000fddc4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000fddc8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000fddcc:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000fddd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000fddd4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000fddd8:;
    {
        cpu->r[14] = 0x000fdddcu; fn_000ac4bc(cpu);
    }
L_000fdddc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fdde0:;
    {
        cpu->r[0] = 0x000005b2u;
    }
L_000fdde4:;
    {
        cpu->r[3] = 0x0000f780u;
    }
L_000fdde8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_000fddec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_000fddf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_000fddf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_000fddf8:;
    {
        cpu->r[1] = rd16(cpu->r[1]);
    }
L_000fddfc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000fde00:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_000fde04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000fde08:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[5]; cpu->r[5] = v;
    }
L_000fde0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, 0x00000005u, cpu->r[3], 1, 0);
        }
    }
L_000fde10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[5]; cpu->r[5] = v;
        }
    }
L_000fde14:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x958u);
    }
L_000fde18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000fde1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fdeb0;
        }
    }
L_000fde20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fde24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fde28:;
    {
        cpu->r[14] = 0x000fde2cu; fn_000aeb58(cpu);
    }
L_000fde2c:;
    {
        cpu->r[3] = 0x000005afu;
    }
L_000fde30:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000fde34:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000fde38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fdd84;
        }
    }
L_000fde3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fde40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000850u, 0, 0);
    }
L_000fde44:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000fde48:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000880u, 0, 0);
    }
L_000fde4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000cu, 0, 0);
    }
L_000fde50:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000fde54:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_000fde58:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fde5c:;
    {
        cpu->r[14] = 0x000fde60u; fn_000962d0(cpu);
    }
L_000fde60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000fde64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000fde68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000fde6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000fde70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe1d0;
        }
    }
L_000fde74:;
    {
        cpu->r[14] = 0x000fde78u; fn_000ae830(cpu);
    }
L_000fde78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fde7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fde80:;
    {
        cpu->r[14] = 0x000fde84u; fn_000aeb58(cpu);
    }
L_000fde84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000fde88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fde8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fde90:;
    {
        cpu->r[14] = 0x000fde94u; fn_000ae740(cpu);
    }
L_000fde94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000fde98:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fde9c:;
    {
        cpu->r[14] = 0x000fdea0u; fn_000ae1a4(cpu);
    }
L_000fdea0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fdea4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000fdea8:;
    {
        cpu->r[14] = 0x000fdeacu; fn_000ae248(cpu);
    }
L_000fdeac:;
    {
        goto L_000fdd84;
    }
L_000fdeb0:;
    {
        cpu->r[7] = 0x00000676u;
    }
L_000fdeb4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000fdeb8:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000fdebc:;
    {
        cpu->r[1] = 0x0000f780u;
    }
L_000fdec0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000008c0u, 0, 0);
    }
L_000fdec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000008c0u, 0, 0);
    }
L_000fdec8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_000fdecc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000fded0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fded4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_000fded8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000fdedc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000fdee0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_000fdee4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fdee8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fdeec:;
    {
        cpu->r[14] = 0x000fdef0u; fn_000aeb58(cpu);
    }
L_000fdef0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], 0x00000670u, 1, 0);
    }
L_000fdef4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_000fdef8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000fdefc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000fdf00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_000fdf04:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_000fdf08:;
    {
        cpu->r[11] = 0x0000f780u;
    }
L_000fdf0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fdf10:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0xffffu << 16);
    }
L_000fdf14:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000fdf18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000fdf1c:;
    {
        cpu->r[14] = 0x000fdf20u; fn_000a8d10(cpu);
    }
L_000fdf20:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x4u);
    }
L_000fdf24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8ccu);
    }
L_000fdf28:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fdf2c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fdf30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000fdf34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000fdf38:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000fdf3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000fdf40:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000fdf44:;
    {
        cpu->r[14] = 0x000fdf48u; fn_000ad8a0(cpu);
    }
L_000fdf48:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fdf4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000fdf50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fdf54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fdf58:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8c8u);
    }
L_000fdf5c:;
    {
        cpu->r[9] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000fdf60:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x54u);
    }
L_000fdf64:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_000fdf68:;
    {
        cpu->r[14] = rd32(cpu->r[9]);
    }
L_000fdf6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000fdf70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000fdf74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_000fdf78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fdf7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], 0x00000014u, 1, 0);
    }
L_000fdf80:;
    {
        cpu->r[14] = 0x000fdf84u; fn_000a9818(cpu);
    }
L_000fdf84:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000fdf88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000fdf8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fdf90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fdf94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000fdf98:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000fdf9c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000fdfa0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000fdfa4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[12]);
        wr32(ea + 12u, cpu->r[14]);
    }
L_000fdfa8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_000fdfac:;
    {
        cpu->r[14] = 0x000fdfb0u; fn_000ac4bc(cpu);
    }
L_000fdfb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fdfb4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_000fdfb8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000fdfbc:;
    {
        cpu->r[0] = 0x00000696u;
    }
L_000fdfc0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x54u);
    }
L_000fdfc4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_000fdfc8:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000fdfcc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_000fdfd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000fdfd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fdfd8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[6]; cpu->r[5] = v;
    }
L_000fdfdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fdee4;
        }
    }
L_000fdfe0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000fdfe4:;
    {
        cpu->r[0] = 0x000006a3u;
    }
L_000fdfe8:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_000fdfec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_000fdff0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000fdff4:;
    {
        cpu->r[14] = 0x000fdff8u; fn_000aeb58(cpu);
    }
L_000fdff8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000fdffc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000fe000:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_000fe004:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 0);
    }
L_000fe008:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fe00c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe010:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fe014:;
    {
        cpu->r[14] = 0x000fe018u; fn_000a9818(cpu);
    }
L_000fe018:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000fe01c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fe020:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000fe024:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe028:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000fe02c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000fe030:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000fe034:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000fe038:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000fe03c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_000fe040:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000fe044:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000fe048:;
    {
        cpu->r[14] = 0x000fe04cu; fn_000ac4bc(cpu);
    }
L_000fe04c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fe050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_000fe054:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000fe058:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_000fe05c:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_000fe060:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_000fe064:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fe068:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[5]; cpu->r[5] = v;
    }
L_000fe06c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000040u, 1, 1);
    }
L_000fe070:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fe0d8;
        }
    }
L_000fe074:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe078:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000fe07c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000fe080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fe084:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 0);
    }
L_000fe088:;
    {
        wr32(cpu->r[6] + + 0x950u, cpu->r[3]);
    }
L_000fe08c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_000fe090:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_000fe094:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000fe098:;
    {
        cpu->r[14] = 0x000fe09cu; fn_0012f780(cpu);
    }
L_000fe09c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe0a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000fe0a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000fe0a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000fe0ac:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000fe0b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe0b4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000fe0b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fe0bc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000fe0c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fe0c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fe0c8:;
    {
        cpu->r[14] = 0x000fe0ccu; fn_0012fa2c(cpu);
    }
L_000fe0cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000fe0d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_000fe0d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe0d8u)) return;
    }
L_000fe0d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe0dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000fe0e0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x950u);
    }
L_000fe0e4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000fe0e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fe0ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 0);
    }
L_000fe0f0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000fe0f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fe084;
        }
    }
L_000fe0f8:;
    {
        goto L_000fe08c;
    }
L_000fe0fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe100:;
    {
        cpu->r[14] = 0x000fe104u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fdba4;
        }
    }
L_000fe10c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe110:;
    {
        cpu->r[5] = rd32(0x000fe118u + + 0x144u);
    }
L_000fe114:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_000fe118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe11c:;
    {
        cpu->r[14] = 0x000fe120u; fn_0018aa20(cpu);
    }
L_000fe120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe124:;
    {
        cpu->r[14] = 0x000fe128u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe128:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe12c:;
    {
        cpu->r[3] = rd32(0x000fe134u + + 0x150u);
    }
L_000fe130:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe134:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fe138:;
    {
        cpu->r[3] = rd32(0x000fe140u + + 0x148u);
    }
L_000fe13c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fe140:;
    {
        cpu->r[14] = 0x000fe144u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe144:;
    {
        goto L_000fdba8;
    }
L_000fe148:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fe14c:;
    {
        cpu->r[14] = 0x000fe150u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe150:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fdcb0;
        }
    }
L_000fe158:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe15c:;
    {
        cpu->r[14] = 0x000fe160u; fn_0018aa20(cpu);
    }
L_000fe160:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fe164:;
    {
        cpu->r[14] = 0x000fe168u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe168:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe16c:;
    {
        cpu->r[3] = rd32(0x000fe174u + + 0x110u);
    }
L_000fe170:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe174:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fe178:;
    {
        cpu->r[3] = rd32(0x000fe180u + + 0x108u);
    }
L_000fe17c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fe180:;
    {
        cpu->r[14] = 0x000fe184u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe184:;
    {
        goto L_000fdcb0;
    }
L_000fe188:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe18c:;
    {
        cpu->r[14] = 0x000fe190u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe190:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fdc64;
        }
    }
L_000fe198:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe19c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000fe1a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe1a4:;
    {
        cpu->r[14] = 0x000fe1a8u; fn_0018aa20(cpu);
    }
L_000fe1a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe1ac:;
    {
        cpu->r[14] = 0x000fe1b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe1b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000fe1b4:;
    {
        cpu->r[3] = rd32(0x000fe1bcu + + 0xc8u);
    }
L_000fe1b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe1bc:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fe1c0:;
    {
        cpu->r[3] = rd32(0x000fe1c8u + + 0xc0u);
    }
L_000fe1c4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000fe1c8:;
    {
        cpu->r[14] = 0x000fe1ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe1cc:;
    {
        goto L_000fdc64;
    }
L_000fe1d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000fe1d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000850u, 0, 0);
    }
L_000fe1d8:;
    {
        cpu->r[2] = rd32(0x000fe1e0u + + 0xacu);
    }
L_000fe1dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fe1e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fe1e8u, cpu->r[12], 0, 0);
    }
L_000fe1e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000fe1e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fe1f0u, cpu->r[2], 0, 0);
    }
L_000fe1ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000880u, 0, 0);
    }
L_000fe1f0:;
    {
        cpu->r[14] = 0x000fe1f4u; fn_000ae830(cpu);
    }
L_000fe1f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fe1f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe1fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000cu, 0, 0);
    }
L_000fe200:;
    {
        cpu->r[14] = 0x000fe204u; fn_000aeb58(cpu);
    }
L_000fe204:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000fe208:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_000fe20c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000fe210:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fe214:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fe218:;
    {
        cpu->r[14] = 0x000fe21cu; fn_000ae740(cpu);
    }
L_000fe21c:;
    {
        cpu->r[1] = rd32(0x000fe224u + + 0x6cu);
    }
L_000fe220:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fe224:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fe22cu, cpu->r[1], 0, 0);
    }
L_000fe228:;
    {
        cpu->r[14] = 0x000fe22cu; fn_000ae1a4(cpu);
    }
L_000fe22c:;
    {
        cpu->r[1] = rd32(0x000fe234u + + 0x60u);
    }
L_000fe230:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000fe234:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fe23cu, cpu->r[1], 0, 0);
    }
L_000fe238:;
    {
        cpu->r[14] = 0x000fe23cu; fn_000ae248(cpu);
    }
L_000fe23c:;
    {
        goto L_000fdd84;
    }
L_000fe240:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fe244:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe248:;
    {
        cpu->r[14] = 0x000fe250u;
    }
L_000fe24c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe250u)) return;
    }
L_000fe250:;
    {
        goto L_000fdc18;
    }
}

/* _ZN12GS_AboutMenu17ApplyMenuSettingsEv @ 000fe298 (arm) */
void fn_000fe298(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe298:;
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
L_000fe29c:;
    {
        cpu->r[4] = rd32(0x000fe2a4u + + 0x190u);
    }
L_000fe2a0:;
    {
        cpu->r[7] = rd32(0x000fe2a8u + + 0x190u);
    }
L_000fe2a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fe2a8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fe2b0u, cpu->r[4], 0, 0);
    }
L_000fe2ac:;
    {
        cpu->r[1] = rd32(0x000fe2b4u + + 0x188u);
    }
L_000fe2b0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000fe2b4:;
    {
        wr32(cpu->r[5] + + 0x8d4u, cpu->r[0]);
    }
L_000fe2b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000fe2bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fe2c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000fe2c4:;
    {
        cpu->r[3] = rd32(0x000fe2ccu + + 0x174u);
    }
L_000fe2c8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000fe2cc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000fe2d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe2d8u, cpu->r[3], 0, 0);
    }
L_000fe2d4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe2d8:;
    {
        wr32(cpu->r[5] + + 0x8e8u, cpu->r[3]);
    }
L_000fe2dc:;
    {
        wr32(cpu->r[5] + + 0x8ecu, cpu->r[2]);
    }
L_000fe2e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 0);
    }
L_000fe2e4:;
    {
        wr32(cpu->r[5] + + 0x8d8u, cpu->r[2]);
    }
L_000fe2e8:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_000fe2ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe34c;
        }
    }
L_000fe2f0:;
    {
        cpu->r[6] = rd32(0x000fe2f8u + + 0x14cu);
    }
L_000fe2f4:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000fe2f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000fe2fc:;
    {
        cpu->r[14] = 0x000fe300u; fn_00096a08(cpu);
    }
L_000fe300:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fe304:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fe308:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fe30c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe310:;
    {
        cpu->r[14] = 0x000fe314u; fn_0018aa44(cpu);
    }
L_000fe314:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe3d0;
        }
    }
L_000fe31c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000fe320:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000fe324:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe390;
        }
    }
L_000fe32c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fe330:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fe334:;
    {
        cpu->r[14] = 0x000fe338u; fn_0018b5c8(cpu);
    }
L_000fe338:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fe33c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000fe340:;
    {
        cpu->r[14] = 0x000fe348u;
    }
L_000fe344:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe348u)) return;
    }
L_000fe348:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe34cu)) return;
    }
L_000fe34c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe350:;
    {
        cpu->r[14] = 0x000fe354u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe2f0;
        }
    }
L_000fe35c:;
    {
        cpu->r[6] = rd32(0x000fe364u + + 0xe0u);
    }
L_000fe360:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fe364:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe368:;
    {
        cpu->r[14] = 0x000fe36cu; fn_0018aa20(cpu);
    }
L_000fe36c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe370:;
    {
        cpu->r[14] = 0x000fe374u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe374:;
    {
        cpu->r[3] = rd32(0x000fe37cu + + 0xccu);
    }
L_000fe378:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe37c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe380:;
    {
        cpu->r[3] = rd32(0x000fe388u + + 0xc4u);
    }
L_000fe384:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe388:;
    {
        cpu->r[14] = 0x000fe38cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe38c:;
    {
        goto L_000fe2f4;
    }
L_000fe390:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fe394:;
    {
        cpu->r[14] = 0x000fe398u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe32c;
        }
    }
L_000fe3a0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fe3a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe3a8:;
    {
        cpu->r[14] = 0x000fe3acu; fn_0018aa20(cpu);
    }
L_000fe3ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fe3b0:;
    {
        cpu->r[14] = 0x000fe3b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe3b4:;
    {
        cpu->r[3] = rd32(0x000fe3bcu + + 0x8cu);
    }
L_000fe3b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe3bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe3c0:;
    {
        cpu->r[3] = rd32(0x000fe3c8u + + 0x84u);
    }
L_000fe3c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe3c8:;
    {
        cpu->r[14] = 0x000fe3ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe3cc:;
    {
        goto L_000fe32c;
    }
L_000fe3d0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000fe3d4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000fe3d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe3f8;
        }
    }
L_000fe3e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000fe3e4:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000fe3e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fe3ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fe3f0:;
    {
        cpu->r[14] = 0x000fe3f4u; fn_0018aa58(cpu);
    }
L_000fe3f4:;
    {
        goto L_000fe31c;
    }
L_000fe3f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe3fc:;
    {
        cpu->r[14] = 0x000fe400u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe3e0;
        }
    }
L_000fe408:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe40c:;
    {
        cpu->r[14] = 0x000fe410u; fn_0018aa20(cpu);
    }
L_000fe410:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe414:;
    {
        cpu->r[14] = 0x000fe418u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe418:;
    {
        cpu->r[3] = rd32(0x000fe420u + + 0x28u);
    }
L_000fe41c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe420:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe424:;
    {
        cpu->r[3] = rd32(0x000fe42cu + + 0x20u);
    }
L_000fe428:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe42c:;
    {
        cpu->r[14] = 0x000fe430u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe430:;
    {
        goto L_000fe3e0;
    }
}

/* _ZN11GS_AskSound8isKindOfEi @ 000fe450 (arm) */
void fn_000fe450(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe450:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000038u, 1, 1);
    }
L_000fe454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000fe458:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000fe45c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_AskSound17ApplyMenuSettingsEv @ 000fe460 (arm) */
void fn_000fe460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe460:;
    {
        cpu->r[3] = rd32(0x000fe468u + + 0x28u);
    }
L_000fe464:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe468:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000fe46c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[1]);
    }
L_000fe470:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe478u, cpu->r[3], 0, 0);
    }
L_000fe474:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_000fe478:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_000fe47c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000fe480:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_000fe484:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_000fe488:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_000fe48c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_11 @ 000fe494 (arm) */
void fn_000fe494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe494:;
    {
        cpu->r[3] = rd32(0x000fe49cu + + 0x48u);
    }
L_000fe498:;
    {
        cpu->r[1] = rd32(0x000fe4a0u + + 0x48u);
    }
L_000fe49c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe4a4u, cpu->r[3], 0, 0);
    }
L_000fe4a0:;
    {
        cpu->r[2] = rd32(0x000fe4a8u + + 0x44u);
    }
L_000fe4a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fe4a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fe4b0u, cpu->r[2], 0, 0);
    }
L_000fe4ac:;
    {
        cpu->r[1] = rd32(0x000fe4b4u + + 0x3cu);
    }
L_000fe4b0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fe4b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fe4b8:;
    {
        cpu->r[3] = rd32(0x000fe4c0u + + 0x34u);
    }
L_000fe4bc:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000fe4c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe4c8u, cpu->r[3], 0, 0);
    }
L_000fe4c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 0);
    }
L_000fe4c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_000fe4cc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x000000e6u, 1, 0);
    }
L_000fe4d0:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_000fe4d4:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_000fe4d8:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[12]);
    }
L_000fe4dc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_000fe4e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_AskSoundD1Ev @ 000fe4f8 (arm) */
void fn_000fe4f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe4f8:;
    {
        cpu->r[3] = rd32(0x000fe500u + + 0x24u);
    }
L_000fe4fc:;
    {
        cpu->r[2] = rd32(0x000fe504u + + 0x24u);
    }
L_000fe500:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe508u, cpu->r[3], 0, 0);
    }
L_000fe504:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fe508:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fe50c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fe510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fe514:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fe518:;
    {
        cpu->r[14] = 0x000fe51cu; fn_000ec21c(cpu);
    }
L_000fe51c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe520:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe524u)) return;
    }
}

/* _ZN11GS_AskSound13GetMenuStringEi @ 000fe52c (arm) */
void fn_000fe52c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe52c:;
    {
        return fn_0010e02c(cpu);
    }
}

/* _ZN11GS_AskSound8DoActionEii @ 000fe530 (arm) */
void fn_000fe530(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe530:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000fe534:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fe538:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fe53c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fe540:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000fe54c;
        }
    }
L_000fe544:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fe548:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe54cu)) return;
    }
L_000fe54c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_000fe550:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000fe554:;
    {
        cpu->r[14] = 0x000fe558u; fn_00093f34(cpu);
    }
L_000fe558:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fe55c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000fe560:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000fe564:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[1]);
    }
L_000fe568:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000fe56c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000fe570:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fe574:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_000fe578:;
    {
        goto L_000fe544;
    }
}

/* _ZN11GS_AskSoundD0Ev @ 000fe57c (arm) */
void fn_000fe57c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe57c:;
    {
        cpu->r[3] = rd32(0x000fe584u + + 0x2cu);
    }
L_000fe580:;
    {
        cpu->r[2] = rd32(0x000fe588u + + 0x2cu);
    }
L_000fe584:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe58cu, cpu->r[3], 0, 0);
    }
L_000fe588:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fe58c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fe590:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fe594:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fe598:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fe59c:;
    {
        cpu->r[14] = 0x000fe5a0u; fn_000ec21c(cpu);
    }
L_000fe5a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe5a4:;
    {
        cpu->r[14] = 0x000fe5a8u; fn_0018ba20(cpu);
    }
L_000fe5a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe5ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe5b0u)) return;
    }
}

/* _ZN11GS_AskSound6RenderEv @ 000fe5b8 (arm) */
void fn_000fe5b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe5b8:;
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
L_000fe5bc:;
    {
        cpu->r[5] = rd32(0x000fe5c4u + + 0x1b0u);
    }
L_000fe5c0:;
    {
        cpu->r[8] = rd32(0x000fe5c8u + + 0x1b0u);
    }
L_000fe5c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_000fe5c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fe5d0u, cpu->r[5], 0, 0);
    }
L_000fe5cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fe5d0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000fe5d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fe5d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe5dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe6f0;
        }
    }
L_000fe5e0:;
    {
        cpu->r[7] = rd32(0x000fe5e8u + + 0x194u);
    }
L_000fe5e4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fe5e8:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000fe5ec:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000fe5f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fe5f4:;
    {
        cpu->r[14] = 0x000fe5f8u; fn_0018aa44(cpu);
    }
L_000fe5f8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000fe5fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fe600:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000fe604:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000fe608:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000fe60c:;
    {
        cpu->r[14] = 0x000fe610u; fn_000ad8a0(cpu);
    }
L_000fe610:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_000fe614:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000fe618:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fe644;
        }
    }
L_000fe61c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fe620:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000fe624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe628:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fe62c:;
    {
        cpu->r[14] = 0x000fe634u;
    }
L_000fe630:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe634u)) return;
    }
L_000fe634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_000fe638:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000fe63c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000fe640:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fe61c;
        }
    }
L_000fe644:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000fe648:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fe64c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe734;
        }
    }
L_000fe654:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fe658:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000fe65c:;
    {
        cpu->r[14] = 0x000fe660u; fn_00096a08(cpu);
    }
L_000fe660:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fe664:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fe668:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fe66c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fe670:;
    {
        cpu->r[14] = 0x000fe674u; fn_0018aa44(cpu);
    }
L_000fe674:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000fe678:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe67c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_000fe680:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fe684:;
    {
        cpu->r[0] = 0x000004d8u;
    }
L_000fe688:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[2]);
    }
L_000fe68c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_000fe690:;
    {
        cpu->r[14] = 0x000fe694u; fn_000aeb58(cpu);
    }
L_000fe694:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fe698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fe69c:;
    {
        cpu->r[14] = 0x000fe6a0u; fn_000ae740(cpu);
    }
L_000fe6a0:;
    {
        cpu->r[3] = rd32(0x000fe6a8u + + 0xd8u);
    }
L_000fe6a4:;
    {
        cpu->r[2] = rd32(0x000fe6acu + + 0xd8u);
    }
L_000fe6a8:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_000fe6ac:;
    {
        cpu->r[12] = 0x00005556u;
    }
L_000fe6b0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000fe6b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fe6b8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x5555u << 16);
    }
L_000fe6bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000fe6c0:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000fe6c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe6c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000fe6cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fe6d0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000fe6d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fe6d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[3]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000fe6dc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000fe6e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000fe6e4:;
    {
        cpu->r[14] = 0x000fe6e8u; fn_000ad19c(cpu);
    }
L_000fe6e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000fe6ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe6f0u)) return;
    }
L_000fe6f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe6f4:;
    {
        cpu->r[14] = 0x000fe6f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe6f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe5e0;
        }
    }
L_000fe700:;
    {
        cpu->r[7] = rd32(0x000fe708u + + 0x74u);
    }
L_000fe704:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fe708:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe70c:;
    {
        cpu->r[14] = 0x000fe710u; fn_0018aa20(cpu);
    }
L_000fe710:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe714:;
    {
        cpu->r[14] = 0x000fe718u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe718:;
    {
        cpu->r[3] = rd32(0x000fe720u + + 0x68u);
    }
L_000fe71c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fe720:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fe724:;
    {
        cpu->r[3] = rd32(0x000fe72cu + + 0x60u);
    }
L_000fe728:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fe72c:;
    {
        cpu->r[14] = 0x000fe730u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe730:;
    {
        goto L_000fe5e4;
    }
L_000fe734:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe738:;
    {
        cpu->r[14] = 0x000fe73cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe73c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe654;
        }
    }
L_000fe744:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fe748:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe74c:;
    {
        cpu->r[14] = 0x000fe750u; fn_0018aa20(cpu);
    }
L_000fe750:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe754:;
    {
        cpu->r[14] = 0x000fe758u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe758:;
    {
        cpu->r[3] = rd32(0x000fe760u + + 0x28u);
    }
L_000fe75c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fe760:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fe764:;
    {
        cpu->r[3] = rd32(0x000fe76cu + + 0x20u);
    }
L_000fe768:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fe76c:;
    {
        cpu->r[14] = 0x000fe770u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fe770:;
    {
        goto L_000fe654;
    }
}

/* _ZN11GS_AskSound6UpdateEv @ 000fe790 (arm) */
void fn_000fe790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe790:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fe794:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fe798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fe79c:;
    {
        cpu->r[4] = rd32(0x000fe7a4u + + 0x144u);
    }
L_000fe7a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000fe7a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fe7a8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_000fe7ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fe7b4u, cpu->r[4], 0, 0);
    }
L_000fe7b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe7b4u)) return;
        }
    }
L_000fe7b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000fe7b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe7bcu)) return;
        }
    }
L_000fe7bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_000fe7c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fe7c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000fe7c8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[3]);
        }
    }
L_000fe7cc:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe7d0u)) return;
        }
    }
L_000fe7d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc4u);
    }
L_000fe7d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000fe7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe8b8;
        }
    }
L_000fe7dc:;
    {
        cpu->r[14] = 0x000fe7e0u; fn_000979a0(cpu);
    }
L_000fe7e0:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000fe7e4:;
    {
        cpu->r[14] = 0x000fe7e8u; fn_00093f90(cpu);
    }
L_000fe7e8:;
    {
        cpu->r[3] = rd32(0x000fe7f0u + + 0xfcu);
    }
L_000fe7ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fe7f0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe7f4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000fe7f8:;
    {
        cpu->r[14] = 0x000fe7fcu; fn_000a3410(cpu);
    }
L_000fe7fc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000fe800:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe804:;
    {
        cpu->r[14] = 0x000fe808u; fn_00099b28(cpu);
    }
L_000fe808:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fe80c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fe810:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000fe814:;
    {
        cpu->r[14] = 0x000fe818u; fn_000a2764(cpu);
    }
L_000fe818:;
    {
        cpu->r[14] = 0x000fe81cu; fn_000979a0(cpu);
    }
L_000fe81c:;
    {
        cpu->r[14] = 0x000fe820u; fn_00093fb8(cpu);
    }
L_000fe820:;
    {
        cpu->r[14] = 0x000fe824u; fn_000a0ea4(cpu);
    }
L_000fe824:;
    {
        cpu->r[3] = rd32(0x000fe82cu + + 0xc4u);
    }
L_000fe828:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe82c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000fe830:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fe834:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe890;
        }
    }
L_000fe838:;
    {
        cpu->r[7] = rd32(0x000fe840u + + 0xb4u);
    }
L_000fe83c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xcu);
    }
L_000fe840:;
    {
        cpu->r[2] = 0x000084f9u;
    }
L_000fe844:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000fe848:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000fe84c:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[2]);
    }
L_000fe850:;
    {
        wr8(cpu->r[3] + + 0x39u, cpu->r[2]);
    }
L_000fe854:;
    {
        cpu->r[14] = 0x000fe858u; fn_0018ba6c(cpu);
    }
L_000fe858:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe85c:;
    {
        cpu->r[2] = 0x0000094fu;
    }
L_000fe860:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fe864:;
    {
        cpu->r[14] = 0x000fe868u; imp_memset(cpu); /* memset */
    }
L_000fe868:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fe86c:;
    {
        cpu->r[14] = 0x000fe870u; fn_0010ffa8(cpu);
    }
L_000fe870:;
    {
        cpu->r[3] = rd32(0x000fe878u + + 0x80u);
    }
L_000fe874:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe878:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fe87c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe880:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000fe884:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000fe888:;
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
L_000fe88c:;
    {
        return fn_000f36dc(cpu);
    }
L_000fe890:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe894:;
    {
        cpu->r[14] = 0x000fe898u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fe898:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fe89c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fe838;
        }
    }
L_000fe8a0:;
    {
        cpu->r[7] = rd32(0x000fe8a8u + + 0x4cu);
    }
L_000fe8a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000fe8a8:;
    {
        cpu->r[14] = 0x000fe8acu; fn_00094228(cpu);
    }
L_000fe8ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fe8b0:;
    {
        cpu->r[14] = 0x000fe8b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fe8b4:;
    {
        goto L_000fe83c;
    }
L_000fe8b8:;
    {
        cpu->r[14] = 0x000fe8bcu; fn_000979a0(cpu);
    }
L_000fe8bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe8c0:;
    {
        cpu->r[14] = 0x000fe8c4u; fn_00093f90(cpu);
    }
L_000fe8c4:;
    {
        cpu->r[3] = rd32(0x000fe8ccu + + 0x20u);
    }
L_000fe8c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe8cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe8d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fe8d4:;
    {
        cpu->r[14] = 0x000fe8d8u; fn_000a3410(cpu);
    }
L_000fe8d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000fe8dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000fe8e0:;
    {
        cpu->r[14] = 0x000fe8e4u; fn_0018cbe8(cpu);
    }
L_000fe8e4:;
    {
        goto L_000fe824;
    }
}

/* _ZN20GS_AutoloadNextTrack17ApplyMenuSettingsEv @ 000fe8fc (arm) */
void fn_000fe8fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe8fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fe900:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000fe904:;
    {
        cpu->r[1] = 0x00000586u;
    }
L_000fe908:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_000fe90c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_000fe910:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_000fe914:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_000fe918:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_000fe91c:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_000fe920:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_000fe924:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_AutoloadNextTrack6RenderEv @ 000fe928 (arm) */
void fn_000fe928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe928:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fe92c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000fe930:;
    {
        cpu->r[14] = 0x000fe938u;
    }
L_000fe934:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe938u)) return;
    }
L_000fe938:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fe93cu)) return;
    }
}

/* _ZN20GS_AutoloadNextTrack8DoActionEii @ 000fe93c (arm) */
void fn_000fe93c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe93c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_12 @ 000fe940 (arm) */
void fn_000fe940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe940:;
    {
        cpu->r[3] = rd32(0x000fe948u + + 0x20u);
    }
L_000fe944:;
    {
        cpu->r[1] = rd32(0x000fe94cu + + 0x20u);
    }
L_000fe948:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe950u, cpu->r[3], 0, 0);
    }
L_000fe94c:;
    {
        cpu->r[2] = rd32(0x000fe954u + + 0x1cu);
    }
L_000fe950:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fe954:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fe95cu, cpu->r[2], 0, 0);
    }
L_000fe958:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fe95c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000fe960:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000fe964:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_AutoloadNextTrack6UpdateEv @ 000fe974 (arm) */
void fn_000fe974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe974:;
    {
        cpu->r[3] = rd32(0x000fe97cu + + 0x30u);
    }
L_000fe978:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fe97c:;
    {
        cpu->r[2] = rd32(0x000fe984u + + 0x2cu);
    }
L_000fe980:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fe988u, cpu->r[3], 0, 0);
    }
L_000fe984:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fe988:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fe98c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fe990:;
    {
        cpu->r[14] = 0x000fe994u; fn_00099b14(cpu);
    }
L_000fe994:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe998:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fe99c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fe9a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fe9a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000fe9a8:;
    {
        return fn_0009b14c(cpu);
    }
}

/* _ZN20GS_AutoloadNextTrack16RenderBackgroundEv @ 000fe9b4 (arm) */
void fn_000fe9b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fe9b4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000fe9b8:;
    {
        cpu->r[4] = rd32(0x000fe9c0u + + 0x50u);
    }
L_000fe9bc:;
    {
        cpu->r[3] = rd32(0x000fe9c4u + + 0x50u);
    }
L_000fe9c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fe9c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fe9ccu, cpu->r[4], 0, 0);
    }
L_000fe9c8:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_000fe9cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe9d0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000fe9d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fe9d8:;
    {
        cpu->r[14] = 0x000fe9dcu; fn_0012dd58(cpu);
    }
L_000fe9dc:;
    {
        cpu->r[12] = rd32(0x000fe9e4u + + 0x34u);
    }
L_000fe9e0:;
    {
        cpu->r[3] = rd32(0x000fe9e8u + + 0x34u);
    }
L_000fe9e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fe9e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fe9ec:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fe9f0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000fe9f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fe9f8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000fe9fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fea00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fea04:;
    {
        cpu->r[14] = 0x000fea08u; fn_00130908(cpu);
    }
L_000fea08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fea0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fea10u)) return;
    }
}

/* _ZN20GS_AutoloadNextTrackD1Ev @ 000fea20 (arm) */
void fn_000fea20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fea20:;
    {
        cpu->r[3] = rd32(0x000fea28u + + 0x24u);
    }
L_000fea24:;
    {
        cpu->r[2] = rd32(0x000fea2cu + + 0x24u);
    }
L_000fea28:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fea30u, cpu->r[3], 0, 0);
    }
L_000fea2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fea30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fea34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fea38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fea3c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fea40:;
    {
        cpu->r[14] = 0x000fea44u; fn_000ec21c(cpu);
    }
L_000fea44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fea48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fea4cu)) return;
    }
}

/* _ZN20GS_AutoloadNextTrackD0Ev @ 000fea54 (arm) */
void fn_000fea54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fea54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fea58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fea5c:;
    {
        cpu->r[14] = 0x000fea60u; fn_000fea20(cpu);
    }
L_000fea60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fea64:;
    {
        cpu->r[14] = 0x000fea68u; fn_0018ba20(cpu);
    }
L_000fea68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fea6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fea70u)) return;
    }
}

/* _ZN20GS_AutoloadNextTrackD2Ev @ 000fea70 (arm) */
void fn_000fea70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fea70:;
    {
        cpu->r[3] = rd32(0x000fea78u + + 0x24u);
    }
L_000fea74:;
    {
        cpu->r[2] = rd32(0x000fea7cu + + 0x24u);
    }
L_000fea78:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fea80u, cpu->r[3], 0, 0);
    }
L_000fea7c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fea80:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fea84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fea88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fea8c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000fea90:;
    {
        cpu->r[14] = 0x000fea94u; fn_000ec21c(cpu);
    }
L_000fea94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fea98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fea9cu)) return;
    }
}

/* _ZN20GS_AutoloadNextTrackC1Ev @ 000feaa4 (arm) */
void fn_000feaa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feaa4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000feaa8:;
    {
        cpu->r[5] = rd32(0x000feab0u + + 0x40u);
    }
L_000feaac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000feab0:;
    {
        cpu->r[14] = 0x000feab4u; fn_0010ffa8(cpu);
    }
L_000feab4:;
    {
        cpu->r[3] = rd32(0x000feabcu + + 0x38u);
    }
L_000feab8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000feac0u, cpu->r[5], 0, 0);
    }
L_000feabc:;
    {
        cpu->r[2] = rd32(0x000feac4u + + 0x34u);
    }
L_000feac0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000feac4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000feac8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000feacc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fead0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000fead4:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000fead8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000feadc:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000feae0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000feae4:;
    {
        cpu->r[14] = 0x000feae8u; fn_000c0d80(cpu);
    }
L_000feae8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000feaec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000feaf0u)) return;
    }
}

/* _ZN20GS_AutoloadNextTrackC2Ev @ 000feafc (arm) */
void fn_000feafc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feafc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000feb00:;
    {
        cpu->r[5] = rd32(0x000feb08u + + 0x40u);
    }
L_000feb04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000feb08:;
    {
        cpu->r[14] = 0x000feb0cu; fn_0010ffa8(cpu);
    }
L_000feb0c:;
    {
        cpu->r[3] = rd32(0x000feb14u + + 0x38u);
    }
L_000feb10:;
    {
        cpu->r[5] = add_flags(cpu, 0x000feb18u, cpu->r[5], 0, 0);
    }
L_000feb14:;
    {
        cpu->r[2] = rd32(0x000feb1cu + + 0x34u);
    }
L_000feb18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000feb1c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000feb20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000feb24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000feb28:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000feb2c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000feb30:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000feb34:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000feb38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000feb3c:;
    {
        cpu->r[14] = 0x000feb40u; fn_000c0d80(cpu);
    }
L_000feb40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000feb44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000feb48u)) return;
    }
}

/* _ZN13GS_AwardsMenu8DoActionEii @ 000feb54 (arm) */
void fn_000feb54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feb54:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_000feb58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000feb5c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000feb60:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000feb64:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000feb68u)) return;
        }
    }
L_000feb68:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_000feb6c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000feb70:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000feb74u)) return;
        }
    }
L_000feb74:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000feb78:;
    {
        cpu->r[14] = 0x000feb80u;
    }
L_000feb7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000feb80u)) return;
    }
L_000feb80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000feb84u)) return;
    }
}

/* _ZN13GS_AwardsMenu8isKindOfEi @ 000feb84 (arm) */
void fn_000feb84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feb84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000013u, 1, 1);
    }
L_000feb88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000feb8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000feb90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_13 @ 000feb94 (arm) */
void fn_000feb94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feb94:;
    {
        cpu->r[3] = rd32(0x000feb9cu + + 0x20u);
    }
L_000feb98:;
    {
        cpu->r[1] = rd32(0x000feba0u + + 0x20u);
    }
L_000feb9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000feba4u, cpu->r[3], 0, 0);
    }
L_000feba0:;
    {
        cpu->r[2] = rd32(0x000feba8u + + 0x1cu);
    }
L_000feba4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000feba8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000febb0u, cpu->r[2], 0, 0);
    }
L_000febac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000febb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000febb4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000febb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_AwardsMenuD1Ev @ 000febc8 (arm) */
void fn_000febc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000febc8:;
    {
        cpu->r[3] = rd32(0x000febd0u + + 0x24u);
    }
L_000febcc:;
    {
        cpu->r[2] = rd32(0x000febd4u + + 0x24u);
    }
L_000febd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000febd8u, cpu->r[3], 0, 0);
    }
L_000febd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000febd8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000febdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000febe0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000febe4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000febe8:;
    {
        cpu->r[14] = 0x000febecu; fn_000ec21c(cpu);
    }
L_000febec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000febf0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000febf4u)) return;
    }
}

/* _ZN13GS_AwardsMenu22ProcessOnMouseButtonUpEv @ 000febfc (arm) */
void fn_000febfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000febfc:;
    {
        cpu->r[3] = rd32(0x000fec04u + + 0x30u);
    }
L_000fec00:;
    {
        cpu->r[2] = rd32(0x000fec08u + + 0x30u);
    }
L_000fec04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fec08:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000fec0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fec14u, cpu->r[3], 0, 0);
    }
L_000fec10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fec14:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fec18:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_000fec1c:;
    {
        cpu->r[14] = 0x000fec20u; fn_00110c40(cpu);
    }
L_000fec20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fec24:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000fec28:;
    {
        wr8(cpu->r[5] + + 0x954u, cpu->r[3]);
    }
L_000fec2c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000fec30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fec34u)) return;
    }
}

/* _ZN13GS_AwardsMenu18ProcessOnMouseDragEv @ 000fec3c (arm) */
void fn_000fec3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fec3c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fec40:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_000fec44:;
    {
        return fn_00110818(cpu);
    }
}

/* _ZN13GS_AwardsMenu24ProcessOnMouseButtonDownEv @ 000fec48 (arm) */
void fn_000fec48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fec48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fec4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fec50:;
    {
        cpu->r[14] = 0x000fec54u; fn_00110498(cpu);
    }
L_000fec54:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fec58:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_000fec5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fec60u)) return;
    }
}

/* _ZN13GS_AwardsMenu11DoBarActionEii @ 000fec60 (arm) */
void fn_000fec60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fec60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_000fec64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fec68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000fec6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fec70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fec74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fecfc;
        }
    }
L_000fec78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fec7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_000fec80:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_000fec84:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_000fec88:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000fec8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000fec90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fec94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000fec98:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_000fec9c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_000feca0:;
    {
        cpu->r[14] = 0x000feca4u; fn_00093f34(cpu);
    }
L_000feca4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_000feca8:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_000fecac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fecb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fecb4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000fecb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_000fecbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_000fecc0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000fecc4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000fecc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000feccc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000fecd0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fecd4:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_000fecd8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000fecdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fece0:;
    {
        cpu->r[14] = 0x000fece4u; fn_000fd248(cpu);
    }
L_000fece4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_000fece8:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_000fecec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fecf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fed04;
        }
    }
L_000fecf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_000fecf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fed10;
        }
    }
L_000fecfc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fed00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fed04u)) return;
    }
L_000fed04:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_000fed08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fed0c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fed20;
        }
    }
L_000fed10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fed14:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_000fed18:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_000fed1c:;
    {
        goto L_000fecfc;
    }
L_000fed20:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_000fed24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fed28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fecfc;
        }
    }
L_000fed2c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fed30:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_000fed34:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_000fed38:;
    {
        cpu->r[14] = 0x000fed3cu; fn_00093f34(cpu);
    }
L_000fed3c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000fed40:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000fed44:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000fed48:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_000fed4c:;
    {
        goto L_000fecfc;
    }
}

/* _ZN13GS_AwardsMenu17ApplyMenuSettingsEv @ 000fed50 (arm) */
void fn_000fed50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fed50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fed54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fed58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000fed5c:;
    {
        cpu->r[5] = rd32(0x000fed64u + + 0x13cu);
    }
L_000fed60:;
    {
        cpu->r[14] = 0x000fed64u; fn_000a607c(cpu);
    }
L_000fed64:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_000fed68:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fed70u, cpu->r[5], 0, 0);
    }
L_000fed6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fed70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fee58;
        }
    }
L_000fed74:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000fed78:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_000fed7c:;
    {
        cpu->r[2] = rd32(0x000fed84u + + 0x120u);
    }
L_000fed80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fed84:;
    {
        cpu->r[1] = 0x000005d0u;
    }
L_000fed88:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_000fed8c:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_000fed90:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000fed94:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000fed98:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[1]);
    }
L_000fed9c:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_000feda0:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_000feda4:;
    {
        cpu->r[3] = rd32(0x000fedacu + + 0xfcu);
    }
L_000feda8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fedac:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000fedb0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fedb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fee14;
        }
    }
L_000fedb8:;
    {
        cpu->r[6] = rd32(0x000fedc0u + + 0xecu);
    }
L_000fedbc:;
    {
        cpu->r[1] = 0x00000046u;
    }
L_000fedc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fedc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fedc8:;
    {
        cpu->r[14] = 0x000fedccu; fn_0018aa44(cpu);
    }
L_000fedcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fedd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fedd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fedd8:;
    {
        cpu->r[14] = 0x000feddcu; fn_000a8d10(cpu);
    }
L_000feddc:;
    {
        cpu->r[1] = rd32(0x000fede4u + + 0xccu);
    }
L_000fede0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000fede4:;
    {
        cpu->r[3] = 0x00000026u;
    }
L_000fede8:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_000fedec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000fedf0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000fedf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000fedf8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000fedfc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_000fee00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000fee04:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_000fee08:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_000fee0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000fee10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fee14u)) return;
    }
L_000fee14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fee18:;
    {
        cpu->r[14] = 0x000fee1cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fee1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fee20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fedb8;
        }
    }
L_000fee24:;
    {
        cpu->r[6] = rd32(0x000fee2cu + + 0x80u);
    }
L_000fee28:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fee2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fee30:;
    {
        cpu->r[14] = 0x000fee34u; fn_0018aa20(cpu);
    }
L_000fee34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fee38:;
    {
        cpu->r[14] = 0x000fee3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fee3c:;
    {
        cpu->r[3] = rd32(0x000fee44u + + 0x70u);
    }
L_000fee40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000fee44:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fee48:;
    {
        cpu->r[3] = rd32(0x000fee50u + + 0x68u);
    }
L_000fee4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fee50:;
    {
        cpu->r[14] = 0x000fee54u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000fee54:;
    {
        goto L_000fedbc;
    }
L_000fee58:;
    {
        cpu->r[3] = 0x000005d0u;
    }
L_000fee5c:;
    {
        cpu->r[1] = rd32(0x000fee64u + + 0x58u);
    }
L_000fee60:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_000fee64:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000fee68:;
    {
        cpu->r[2] = rd32(0x000fee70u + + 0x50u);
    }
L_000fee6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fee74u, cpu->r[1], 0, 0);
    }
L_000fee70:;
    {
        cpu->r[3] = rd32(0x000fee78u + + 0x4cu);
    }
L_000fee74:;
    {
        cpu->r[12] = rd32(0x000fee7cu + + 0x4cu);
    }
L_000fee78:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fee80u, cpu->r[2], 0, 0);
    }
L_000fee7c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[0]);
    }
L_000fee80:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fee88u, cpu->r[3], 0, 0);
    }
L_000fee84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fee88:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fee90u, cpu->r[12], 0, 0);
    }
L_000fee8c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fee90:;
    {
        cpu->r[12] = 0x00000037u;
    }
L_000fee94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000fee98:;
    {
        cpu->r[14] = 0x000fee9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fee9c:;
    {
        goto L_000feda4;
    }
}

/* _ZN13GS_AwardsMenuC1Eb @ 000feecc (arm) */
void fn_000feecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000feecc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000feed0:;
    {
        cpu->r[4] = rd32(0x000feed8u + + 0x28u);
    }
L_000feed4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000feed8:;
    {
        cpu->r[14] = 0x000feedcu; fn_0010ffa8(cpu);
    }
L_000feedc:;
    {
        cpu->r[3] = rd32(0x000feee4u + + 0x20u);
    }
L_000feee0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000feee8u, cpu->r[4], 0, 0);
    }
L_000feee4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000feee8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000feeec:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_000feef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000feef4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000feef8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000feefc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fef00u)) return;
    }
}

/* _ZN13GS_AwardsMenu6UpdateEv @ 000fef08 (arm) */
void fn_000fef08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fef08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_000fef0c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fef10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000fef14:;
    {
        cpu->r[4] = rd32(0x000fef1cu + + 0x264u);
    }
L_000fef18:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fef1c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000fef24u, cpu->r[4], 0, 0);
    }
L_000fef20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fef74;
        }
    }
L_000fef24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000fef28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fef3c;
        }
    }
L_000fef2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fef30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fef34u)) return;
        }
    }
L_000fef34:;
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
L_000fef38:;
    {
        return fn_00114a58(cpu);
    }
L_000fef3c:;
    {
        cpu->r[14] = 0x000fef40u; fn_0010da28(cpu);
    }
L_000fef40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fef44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fef48u)) return;
        }
    }
L_000fef48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_000fef4c:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_000fef50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fef54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff130;
        }
    }
L_000fef58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ff06c;
        }
    }
L_000fef5c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_000fef60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000fef64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff118;
        }
    }
L_000fef68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000fef6c:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_000fef70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fef74u)) return;
    }
L_000fef74:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000fef78:;
    {
        cpu->r[14] = 0x000fef7cu; fn_000eb59c(cpu);
    }
L_000fef7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fef80:;
    {
        cpu->r[14] = 0x000fef84u; fn_0010efe4(cpu);
    }
L_000fef84:;
    {
        cpu->r[3] = rd32(0x000fef8cu + + 0x1f8u);
    }
L_000fef88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fef8c:;
    {
        cpu->r[3] = rd32(0x000fef94u + + 0x1f4u);
    }
L_000fef90:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000fef94:;
    {
        cpu->r[2] = 0x0000029eu;
    }
L_000fef98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fef9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000320u, 1, 1);
    }
L_000fefa0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000002d8u;
        }
    }
L_000fefa4:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_000fefa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fefac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ff04c;
        }
    }
L_000fefb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x958u);
    }
L_000fefb4:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000fefb8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000fefbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_000fefc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000fefc4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000fefc8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000fefcc:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 3u, &shc), cpu->r[3], 1, 0);
    }
L_000fefd0:;
    {
        wr32(cpu->r[6] + + 0x958u, cpu->r[3]);
    }
L_000fefd4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000fefd8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000fefdc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_000fefe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000feff4;
        }
    }
L_000fefe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fefe8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_000fefec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_000feff0:;
    {
        wr32(cpu->r[6] + + 0x958u, cpu->r[3]);
    }
L_000feff4:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x954u);
    }
L_000feff8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x950u);
    }
L_000feffc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ff000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000ff004:;
    {
        wr32(cpu->r[6] + + 0x950u, cpu->r[3]);
    }
L_000ff008:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff00cu)) return;
        }
    }
L_000ff00c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x95cu);
    }
L_000ff010:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ff014:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ff024;
        }
    }
L_000ff018:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x960u);
    }
L_000ff01c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ff020:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff024u)) return;
        }
    }
L_000ff024:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000ff028:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_000ff02c:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_000ff030:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000ff034:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_000ff038:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000ff03c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000ff040:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000ff044:;
    {
        wr32(cpu->r[6] + + 0x950u, cpu->r[3]);
    }
L_000ff048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff04cu)) return;
    }
L_000ff04c:;
    {
        cpu->r[1] = rd32(0x000ff054u + + 0x138u);
    }
L_000ff050:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000ff054:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_000ff058:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000ff05c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_000ff060:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x958u, cpu->r[3]);
        }
    }
L_000ff064:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fefd4;
        }
    }
L_000ff068:;
    {
        goto L_000fefb0;
    }
L_000ff06c:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_000ff070:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ff074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff0cc;
        }
    }
L_000ff078:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_000ff07c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fef68;
        }
    }
L_000ff080:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ff084:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff088:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_000ff08c:;
    {
        cpu->r[14] = 0x000ff094u;
    }
L_000ff090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff094u)) return;
    }
L_000ff094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fef68;
        }
    }
L_000ff09c:;
    {
        cpu->r[3] = rd32(0x000ff0a4u + + 0xecu);
    }
L_000ff0a0:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_000ff0a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff0a8:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000ff0ac:;
    {
        cpu->r[14] = 0x000ff0b0u; fn_0018ba6c(cpu);
    }
L_000ff0b0:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_000ff0b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ff0b8:;
    {
        cpu->r[14] = 0x000ff0bcu; fn_000feecc(cpu);
    }
L_000ff0bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff0c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff0c4:;
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
L_000ff0c8:;
    {
        return fn_000f36dc(cpu);
    }
L_000ff0cc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ff0d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff0d4:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_000ff0d8:;
    {
        cpu->r[14] = 0x000ff0e0u;
    }
L_000ff0dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff0e0u)) return;
    }
L_000ff0e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff0e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fef68;
        }
    }
L_000ff0e8:;
    {
        cpu->r[3] = rd32(0x000ff0f0u + + 0xa0u);
    }
L_000ff0ec:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000ff0f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff0f4:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000ff0f8:;
    {
        cpu->r[14] = 0x000ff0fcu; fn_0018ba6c(cpu);
    }
L_000ff0fc:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_000ff100:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ff104:;
    {
        cpu->r[14] = 0x000ff108u; fn_001275dc(cpu);
    }
L_000ff108:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff10c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff110:;
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
L_000ff114:;
    {
        return fn_000f36dc(cpu);
    }
L_000ff118:;
    {
        cpu->r[3] = rd32(0x000ff120u + + 0x70u);
    }
L_000ff11c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ff120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff124:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ff128:;
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
L_000ff12c:;
    {
        return fn_000f34e8(cpu);
    }
L_000ff130:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ff134:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff138:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000ff13c:;
    {
        cpu->r[14] = 0x000ff144u;
    }
L_000ff140:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff144u)) return;
    }
L_000ff144:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff148:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fef68;
        }
    }
L_000ff14c:;
    {
        cpu->r[3] = rd32(0x000ff154u + + 0x3cu);
    }
L_000ff150:;
    {
        cpu->r[0] = 0x00000e50u;
    }
L_000ff154:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff158:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000ff15c:;
    {
        cpu->r[14] = 0x000ff160u; fn_0018ba6c(cpu);
    }
L_000ff160:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_000ff164:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000ff168:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ff16c:;
    {
        cpu->r[14] = 0x000ff170u; fn_001266e0(cpu);
    }
L_000ff170:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff174:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff178:;
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
L_000ff17c:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN13GS_AwardsMenuC2Eb @ 000ff194 (arm) */
void fn_000ff194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff194:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ff198:;
    {
        cpu->r[4] = rd32(0x000ff1a0u + + 0x28u);
    }
L_000ff19c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ff1a0:;
    {
        cpu->r[14] = 0x000ff1a4u; fn_0010ffa8(cpu);
    }
L_000ff1a4:;
    {
        cpu->r[3] = rd32(0x000ff1acu + + 0x20u);
    }
L_000ff1a8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ff1b0u, cpu->r[4], 0, 0);
    }
L_000ff1ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ff1b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff1b4:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_000ff1b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff1bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000ff1c0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000ff1c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff1c8u)) return;
    }
}

/* _ZN13GS_AwardsMenuD0Ev @ 000ff1d0 (arm) */
void fn_000ff1d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff1d0:;
    {
        cpu->r[3] = rd32(0x000ff1d8u + + 0x2cu);
    }
L_000ff1d4:;
    {
        cpu->r[2] = rd32(0x000ff1dcu + + 0x2cu);
    }
L_000ff1d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ff1e0u, cpu->r[3], 0, 0);
    }
L_000ff1dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ff1e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ff1e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ff1e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ff1ec:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ff1f0:;
    {
        cpu->r[14] = 0x000ff1f4u; fn_000ec21c(cpu);
    }
L_000ff1f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff1f8:;
    {
        cpu->r[14] = 0x000ff1fcu; fn_0018ba20(cpu);
    }
L_000ff1fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff200:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff204u)) return;
    }
}

/* _ZN13GS_AwardsMenu6RenderEv @ 000ff20c (arm) */
void fn_000ff20c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff20c:;
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
L_000ff210:;
    {
        cpu->r[7] = rd32(0x000ff218u + + 0x724u);
    }
L_000ff214:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000174u, 1, 0);
    }
L_000ff218:;
    {
        cpu->r[5] = rd32(0x000ff220u + + 0x720u);
    }
L_000ff21c:;
    {
        cpu->r[7] = add_flags(cpu, 0x000ff224u, cpu->r[7], 0, 0);
    }
L_000ff220:;
    {
        cpu->r[2] = rd32(0x000ff228u + + 0x71cu);
    }
L_000ff224:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_000ff228:;
    {
        cpu->r[0] = rd32(0x000ff230u + + 0x718u);
    }
L_000ff22c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff230:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000ff234:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000ff238:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000ff23c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ff240:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ff244:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff248:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_000ff24c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_000ff250:;
    {
        wr32(cpu->r[13] + + 0x16cu, cpu->r[3]);
    }
L_000ff254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff7c8;
        }
    }
L_000ff258:;
    {
        cpu->r[4] = rd32(0x000ff260u + + 0x6ecu);
    }
L_000ff25c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff260:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000ff264:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff268:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff26c:;
    {
        cpu->r[14] = 0x000ff270u; fn_0018aa44(cpu);
    }
L_000ff270:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff274:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ff278:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff27c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000ff280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff8fc;
        }
    }
L_000ff284:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff288:;
    {
        cpu->r[1] = 0x00000046u;
    }
L_000ff28c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff290:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff294:;
    {
        cpu->r[14] = 0x000ff298u; fn_0018aa44(cpu);
    }
L_000ff298:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff29c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ff2a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff2a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000ff2a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff8c0;
        }
    }
L_000ff2ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff2b0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000ff2b4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xcu);
    }
L_000ff2b8:;
    {
        cpu->r[14] = 0x000ff2bcu; fn_00096a08(cpu);
    }
L_000ff2bc:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff2c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff2c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff2c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff2cc:;
    {
        cpu->r[14] = 0x000ff2d0u; fn_0018aa44(cpu);
    }
L_000ff2d0:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff2d4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ff2d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff2dc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_000ff2e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff884;
        }
    }
L_000ff2e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff2e8:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000ff2ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_000ff2f0:;
    {
        cpu->r[14] = 0x000ff2f4u; fn_00096a08(cpu);
    }
L_000ff2f4:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff2f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff2fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff304:;
    {
        cpu->r[14] = 0x000ff308u; fn_0018aa44(cpu);
    }
L_000ff308:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff30c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ff310:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff314:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000ff318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff848;
        }
    }
L_000ff31c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff320:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ff324:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_000ff328:;
    {
        cpu->r[14] = 0x000ff32cu; fn_00096a08(cpu);
    }
L_000ff32c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff330:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff334:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff338:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff33c:;
    {
        cpu->r[14] = 0x000ff340u; fn_0018aa44(cpu);
    }
L_000ff340:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ff344:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000ff348:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ff34c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_000ff350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff80c;
        }
    }
L_000ff354:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff358:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000ff35c:;
    {
        cpu->r[11] = rd32(0x000ff364u + + 0x5ecu);
    }
L_000ff360:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0xcu);
    }
L_000ff364:;
    {
        cpu->r[14] = 0x000ff368u; fn_00096a08(cpu);
    }
L_000ff368:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff36c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff370:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff374:;
    {
        cpu->r[14] = 0x000ff378u; fn_0018aa44(cpu);
    }
L_000ff378:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000ff37c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000ff380:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ff384:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_000ff388:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff38c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x48u);
    }
L_000ff390:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[1]);
    }
L_000ff394:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff398:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_000ff39c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ff3a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x54u);
    }
L_000ff3a4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_000ff3a8:;
    {
        cpu->r[14] = 0x000ff3acu; fn_000962d0(cpu);
    }
L_000ff3ac:;
    {
        cpu->r[3] = rd32(0x000ff3b4u + + 0x5a0u);
    }
L_000ff3b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff3b4:;
    {
        cpu->r[12] = rd32(0x000ff3bcu + + 0x59cu);
    }
L_000ff3b8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000ff3bc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000ff3c0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_000ff3c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000ff3c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_000ff3cc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0x54u, cpu->r[0]);
        }
    }
L_000ff3d0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000ff3d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ff3d8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000ff3dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000ff3e0:;
    {
        cpu->r[14] = 0x000ff3e4u; fn_000ad8a0(cpu);
    }
L_000ff3e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff3e8:;
    {
        cpu->r[1] = 0x99000000u;
    }
L_000ff3ec:;
    {
        cpu->r[14] = 0x000ff3f0u; fn_0012dd58(cpu);
    }
L_000ff3f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ff3f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_000ff3f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff3fc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000ff400:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000ff404:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000ff408:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff40c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ff410:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000ff414:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000ff418:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ff41c:;
    {
        cpu->r[14] = 0x000ff420u; fn_00130908(cpu);
    }
L_000ff420:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff424:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8d4u);
    }
L_000ff428:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ff42c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ff45c;
        }
    }
L_000ff430:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ff434:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff438:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000ff43c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff440:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ff444:;
    {
        cpu->r[14] = 0x000ff44cu;
    }
L_000ff448:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff44cu)) return;
    }
L_000ff44c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_000ff450:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ff454:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ff458:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ff434;
        }
    }
L_000ff45c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff460:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ff464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000ff468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000124u, 0, 0);
    }
L_000ff46c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ff470:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ff474:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x950u);
    }
L_000ff478:;
    {
        cpu->r[14] = 0x000ff47cu; fn_000a8d10(cpu);
    }
L_000ff47c:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000ff480:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_000ff484:;
    {
        cpu->r[14] = 0x000ff488u; imp_glEnable(cpu); /* glEnable */
    }
L_000ff488:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_000ff48c:;
    {
        cpu->r[3] = 0x000002e2u;
    }
L_000ff490:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ff494:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_000ff498:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff49c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000ff4a0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000ff4a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000ff4a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000014cu, 0, 0);
    }
L_000ff4ac:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_000ff4b0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_000ff4b4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ff4b8:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000ff4bc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000ff4c0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000026u, 1, 0);
    }
L_000ff4c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ff4c8:;
    {
        cpu->r[14] = 0x000ff4ccu; fn_0012fa2c(cpu);
    }
L_000ff4cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff4d0:;
    {
        cpu->r[14] = 0x000ff4d4u; fn_0012f780(cpu);
    }
L_000ff4d4:;
    {
        cpu->r[3] = rd32(0x000ff4dcu + + 0x480u);
    }
L_000ff4d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000ff4dc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000ff4e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ff4e8u, cpu->r[3], 0, 0);
    }
L_000ff4e4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000ff4e8:;
    {
        goto L_000ff6a4;
    }
L_000ff4ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000ff4f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff4f4:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000ff4f8:;
    {
        cpu->r[14] = 0x000ff4fcu; fn_000a6118(cpu);
    }
L_000ff4fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff500:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff504:;
    {
        cpu->r[14] = 0x000ff508u; fn_00098aec(cpu);
    }
L_000ff508:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff50c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ff510:;
    {
        cpu->r[14] = 0x000ff514u; imp_strcpy(cpu); /* strcpy */
    }
L_000ff514:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000ff518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff51c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000ff520:;
    {
        cpu->r[14] = 0x000ff524u; fn_000a5e30(cpu);
    }
L_000ff524:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff528:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff52c:;
    {
        cpu->r[14] = 0x000ff530u; fn_00098aec(cpu);
    }
L_000ff530:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff534:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ff538:;
    {
        cpu->r[14] = 0x000ff53cu; imp_strcpy(cpu); /* strcpy */
    }
L_000ff53c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ff540:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ff544:;
    {
        cpu->r[14] = 0x000ff548u; fn_000ae1a4(cpu);
    }
L_000ff548:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ff54c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ff550:;
    {
        cpu->r[14] = 0x000ff554u; fn_000ae248(cpu);
    }
L_000ff554:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ff558:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ff55c:;
    {
        cpu->r[14] = 0x000ff560u; fn_000ae248(cpu);
    }
L_000ff560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff564:;
    {
        cpu->r[14] = 0x000ff568u; fn_000a5ee4(cpu);
    }
L_000ff568:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff6d4;
        }
    }
L_000ff570:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ff574:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000ff578:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ff57c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ff580:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ff584:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ff588:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff58c:;
    {
        cpu->r[14] = 0x000ff590u; fn_000ad8a0(cpu);
    }
L_000ff590:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_000ff594:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000ff598:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x0000005fu, 0, 0);
    }
L_000ff59c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ff5a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000ff5a4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ff5a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000002u, 0, 0);
    }
L_000ff5ac:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000ff5b0:;
    {
        cpu->r[14] = 0x000ff5b4u; fn_000962d0(cpu);
    }
L_000ff5b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000004eu, 0, 0);
    }
L_000ff5b8:;
    {
        cpu->r[2] = 0x00000065u;
    }
L_000ff5bc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ff5c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ff5c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff5c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000ff5cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff5d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_000ff5d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000005u;
        }
    }
L_000ff5d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000ff5dc:;
    {
        cpu->r[14] = 0x000ff5e0u; fn_000ad200(cpu);
    }
L_000ff5e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ff5e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ff5e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_000ff5ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ff5f0:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_000ff5f4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000ff5f8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ff5fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x128u);
    }
L_000ff600:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000ff604:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ff608:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ff60c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_000ff610:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff614:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000023u;
        }
    }
L_000ff618:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000055u;
        }
    }
L_000ff61c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000ff620:;
    {
        cpu->r[14] = 0x000ff624u; fn_000ad19c(cpu);
    }
L_000ff624:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ff628:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ff62c:;
    {
        cpu->r[14] = 0x000ff630u; fn_000aeb58(cpu);
    }
L_000ff630:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000ff634:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x128u);
    }
L_000ff638:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000320u, 1, 1);
    }
L_000ff63c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ff640:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x0000006eu;
        }
    }
L_000ff644:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x000000b4u;
        }
    }
L_000ff648:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000ff64c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff650:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff654:;
    {
        cpu->r[14] = 0x000ff658u; fn_000a9818(cpu);
    }
L_000ff658:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ff65c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ff660:;
    {
        cpu->r[14] = 0x000ff664u; fn_000aeb58(cpu);
    }
L_000ff664:;
    {
        cpu->r[3] = 0x00000065u;
    }
L_000ff668:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ff66c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000019u, 0, 0);
    }
L_000ff670:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff674:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ff678:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000ff67c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ff680:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ff684:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_000ff688:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ff68c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff690:;
    {
        cpu->r[14] = 0x000ff694u; fn_000ac4bc(cpu);
    }
L_000ff694:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_000ff698:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x124u);
    }
L_000ff69c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff700;
        }
    }
L_000ff6a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_000ff6a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff6a8:;
    {
        cpu->r[14] = 0x000ff6acu; fn_000a6118(cpu);
    }
L_000ff6ac:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ff6b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff6b4:;
    {
        cpu->r[14] = 0x000ff6b8u; fn_000a5e30(cpu);
    }
L_000ff6b8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_000ff6bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ff4ec;
        }
    }
L_000ff6c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000ff6c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff6c8:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000ff6cc:;
    {
        cpu->r[14] = 0x000ff6d0u; fn_000a5e30(cpu);
    }
L_000ff6d0:;
    {
        goto L_000ff4fc;
    }
L_000ff6d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ff6d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ff6dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ff6e0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ff6e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ff6e8:;
    {
        cpu->r[12] = 0x00770000u;
    }
L_000ff6ec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x44u);
    }
L_000ff6f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ff6f4:;
    {
        cpu->r[14] = 0x000ff6f8u; fn_000ad8a0(cpu);
    }
L_000ff6f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff6fc:;
    {
        goto L_000ff594;
    }
L_000ff700:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ff704:;
    {
        cpu->r[1] = 0x00000024u;
    }
L_000ff708:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ff70c:;
    {
        cpu->r[3] = 0x00000026u;
    }
L_000ff710:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ff714:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff718:;
    {
        cpu->r[14] = 0x000ff71cu; fn_000ad8a0(cpu);
    }
L_000ff71c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_000ff720:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ff724:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ff728:;
    {
        cpu->r[1] = 0x00000023u;
    }
L_000ff72c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ff730:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000ff734:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ff738:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ff73c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000049u, 1, 0);
    }
L_000ff740:;
    {
        cpu->r[14] = 0x000ff744u; fn_000ad8a0(cpu);
    }
L_000ff744:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000ff748:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ff74c:;
    {
        wr32(cpu->r[1] + + 0x54u, cpu->r[0]);
    }
L_000ff750:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff754:;
    {
        cpu->r[14] = 0x000ff758u; fn_0012f780(cpu);
    }
L_000ff758:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000ff75c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ff760:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ff764:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ff768:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff76c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ff770:;
    {
        cpu->r[14] = 0x000ff774u; fn_0012fa2c(cpu);
    }
L_000ff774:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ff778:;
    {
        cpu->r[14] = 0x000ff77cu; fn_0012f780(cpu);
    }
L_000ff77c:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000ff780:;
    {
        cpu->r[14] = 0x000ff784u; imp_glDisable(cpu); /* glDisable */
    }
L_000ff784:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff788:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ff78c:;
    {
        cpu->r[14] = 0x000ff794u;
    }
L_000ff790:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff794u)) return;
    }
L_000ff794:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ff798:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ff79c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ff7a0:;
    {
        cpu->r[14] = 0x000ff7a8u;
    }
L_000ff7a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff7a8u)) return;
    }
L_000ff7a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_000ff7ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000ff7b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x16cu);
    }
L_000ff7b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ff7b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000ff7bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ff938;
        }
    }
L_000ff7c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000174u, 0, 0);
    }
L_000ff7c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff7c8u)) return;
    }
L_000ff7c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff7cc:;
    {
        cpu->r[14] = 0x000ff7d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff7d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff7d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff258;
        }
    }
L_000ff7d8:;
    {
        cpu->r[4] = rd32(0x000ff7e0u + + 0x16cu);
    }
L_000ff7dc:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000ff7e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff7e4:;
    {
        cpu->r[14] = 0x000ff7e8u; fn_0018aa20(cpu);
    }
L_000ff7e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff7ec:;
    {
        cpu->r[14] = 0x000ff7f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff7f0:;
    {
        cpu->r[3] = rd32(0x000ff7f8u + + 0x168u);
    }
L_000ff7f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff7f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff7fc:;
    {
        cpu->r[3] = rd32(0x000ff804u + + 0x160u);
    }
L_000ff800:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff804:;
    {
        cpu->r[14] = 0x000ff808u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff808:;
    {
        goto L_000ff25c;
    }
L_000ff80c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff810:;
    {
        cpu->r[14] = 0x000ff814u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff814:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff354;
        }
    }
L_000ff81c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff820:;
    {
        cpu->r[14] = 0x000ff824u; fn_0018aa20(cpu);
    }
L_000ff824:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ff828:;
    {
        cpu->r[14] = 0x000ff82cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff82c:;
    {
        cpu->r[3] = rd32(0x000ff834u + + 0x12cu);
    }
L_000ff830:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff834:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff838:;
    {
        cpu->r[3] = rd32(0x000ff840u + + 0x124u);
    }
L_000ff83c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff840:;
    {
        cpu->r[14] = 0x000ff844u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff844:;
    {
        goto L_000ff354;
    }
L_000ff848:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff84c:;
    {
        cpu->r[14] = 0x000ff850u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff31c;
        }
    }
L_000ff858:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff85c:;
    {
        cpu->r[14] = 0x000ff860u; fn_0018aa20(cpu);
    }
L_000ff860:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff864:;
    {
        cpu->r[14] = 0x000ff868u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff868:;
    {
        cpu->r[3] = rd32(0x000ff870u + + 0xf0u);
    }
L_000ff86c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff870:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff874:;
    {
        cpu->r[3] = rd32(0x000ff87cu + + 0xe8u);
    }
L_000ff878:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff87c:;
    {
        cpu->r[14] = 0x000ff880u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff880:;
    {
        goto L_000ff31c;
    }
L_000ff884:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff888:;
    {
        cpu->r[14] = 0x000ff88cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff88c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff2e4;
        }
    }
L_000ff894:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff898:;
    {
        cpu->r[14] = 0x000ff89cu; fn_0018aa20(cpu);
    }
L_000ff89c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff8a0:;
    {
        cpu->r[14] = 0x000ff8a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff8a4:;
    {
        cpu->r[3] = rd32(0x000ff8acu + + 0xb4u);
    }
L_000ff8a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff8ac:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff8b0:;
    {
        cpu->r[3] = rd32(0x000ff8b8u + + 0xacu);
    }
L_000ff8b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff8b8:;
    {
        cpu->r[14] = 0x000ff8bcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff8bc:;
    {
        goto L_000ff2e4;
    }
L_000ff8c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff8c4:;
    {
        cpu->r[14] = 0x000ff8c8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff8c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff8cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff2ac;
        }
    }
L_000ff8d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff8d4:;
    {
        cpu->r[14] = 0x000ff8d8u; fn_0018aa20(cpu);
    }
L_000ff8d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff8dc:;
    {
        cpu->r[14] = 0x000ff8e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff8e0:;
    {
        cpu->r[3] = rd32(0x000ff8e8u + + 0x78u);
    }
L_000ff8e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff8e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff8ec:;
    {
        cpu->r[3] = rd32(0x000ff8f4u + + 0x70u);
    }
L_000ff8f0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff8f4:;
    {
        cpu->r[14] = 0x000ff8f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff8f8:;
    {
        goto L_000ff2ac;
    }
L_000ff8fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff900:;
    {
        cpu->r[14] = 0x000ff904u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ff904:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ff908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ff284;
        }
    }
L_000ff90c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff910:;
    {
        cpu->r[14] = 0x000ff914u; fn_0018aa20(cpu);
    }
L_000ff914:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ff918:;
    {
        cpu->r[14] = 0x000ff91cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ff91c:;
    {
        cpu->r[3] = rd32(0x000ff924u + + 0x3cu);
    }
L_000ff920:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ff924:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff928:;
    {
        cpu->r[3] = rd32(0x000ff930u + + 0x34u);
    }
L_000ff92c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ff930:;
    {
        cpu->r[14] = 0x000ff934u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ff934:;
    {
        goto L_000ff284;
    }
L_000ff938:;
    {
        cpu->r[14] = 0x000ff93cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000ff93c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[4] + (-cpu->r[4]);
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[4]);
        cpu->r[4] = wb_tmp;
        }
    }
L_000ff940:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_000ff944:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_000ff948:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000ff94c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_000ff950:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_000ff954:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_000ff958:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_000ff95c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 1, 22u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x000ff960u)) return;
        set_nz(cpu, v);
        }
    }
L_000ff960:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_000ff964:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN15GS_CarColorMenu8isKindOfEi @ 000ff968 (arm) */
void fn_000ff968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff968:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000015u, 1, 1);
    }
L_000ff96c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ff970:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000ff974:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_14 @ 000ff978 (arm) */
void fn_000ff978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff978:;
    {
        cpu->r[3] = rd32(0x000ff980u + + 0x20u);
    }
L_000ff97c:;
    {
        cpu->r[1] = rd32(0x000ff984u + + 0x20u);
    }
L_000ff980:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ff988u, cpu->r[3], 0, 0);
    }
L_000ff984:;
    {
        cpu->r[2] = rd32(0x000ff98cu + + 0x1cu);
    }
L_000ff988:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ff98c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ff994u, cpu->r[2], 0, 0);
    }
L_000ff990:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ff994:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000ff998:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000ff99c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_CarColorMenuD1Ev @ 000ff9ac (arm) */
void fn_000ff9ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff9ac:;
    {
        cpu->r[3] = rd32(0x000ff9b4u + + 0x24u);
    }
L_000ff9b0:;
    {
        cpu->r[2] = rd32(0x000ff9b8u + + 0x24u);
    }
L_000ff9b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ff9bcu, cpu->r[3], 0, 0);
    }
L_000ff9b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ff9bc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ff9c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ff9c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ff9c8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ff9cc:;
    {
        cpu->r[14] = 0x000ff9d0u; fn_000ec21c(cpu);
    }
L_000ff9d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ff9d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ff9d8u)) return;
    }
}

/* _ZN15GS_CarColorMenu6ResumeEv @ 000ff9e0 (arm) */
void fn_000ff9e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ff9e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ff9e4:;
    {
        cpu->r[4] = rd32(0x000ff9ecu + + 0x5cu);
    }
L_000ff9e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ff9ec:;
    {
        cpu->r[14] = 0x000ff9f0u; fn_001142a0(cpu);
    }
L_000ff9f0:;
    {
        cpu->r[3] = rd32(0x000ff9f8u + + 0x54u);
    }
L_000ff9f4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ff9fcu, cpu->r[4], 0, 0);
    }
L_000ff9f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ff9fc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ffa00:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_000ffa04:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ffa08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ffa0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ffa34;
        }
    }
L_000ffa10:;
    {
        cpu->r[2] = 0x00001938u;
    }
L_000ffa14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ffa18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ffa1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ffa34;
        }
    }
L_000ffa20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ffa24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ffa28:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ffa2c:;
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
L_000ffa30:;
    {
        return fn_000ec4f0(cpu);
    }
L_000ffa34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ffa38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ffa3c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ffa40:;
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
L_000ffa44:;
    {
        return fn_000ec594(cpu);
    }
}

/* _ZN15GS_CarColorMenu8DoActionEii @ 000ffa50 (arm) */
void fn_000ffa50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ffa50:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_000ffa54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ffa58:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000ffa5c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ffa60:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffa64u)) return;
        }
    }
L_000ffa64:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_000ffa68:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000ffa6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ffac4;
        }
    }
L_000ffa70:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_000ffa74:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000ffa78:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000ffa7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_000ffa80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_000ffa84:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_000ffa88:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000ffa8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_000ffa90:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_000ffa94:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000ffa98:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_000ffa9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ffad4;
        }
    }
L_000ffaa0:;
    {
        cpu->r[2] = 0x000004f9u;
    }
L_000ffaa4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000ffaa8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_000ffaac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
        }
    }
L_000ffab0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffab4u)) return;
        }
    }
L_000ffab4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000540u, 1, 1);
    }
L_000ffab8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_000ffabc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
        }
    }
L_000ffac0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffac4u)) return;
    }
L_000ffac4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ffac8:;
    {
        cpu->r[14] = 0x000ffad0u;
    }
L_000ffacc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffad0u)) return;
    }
L_000ffad0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffad4u)) return;
    }
L_000ffad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000ffad8:;
    {
        return fn_0010df70(cpu);
    }
}

/* _ZN15GS_CarColorMenu9SetLightsEv @ 000ffadc (arm) */
void fn_000ffadc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ffadc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000ffae0:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000ffae4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000ffae8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ffaf0u + + 0x124u);
    }
L_000ffaec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000ffaf0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000ffaf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ffafcu + + 0x11cu);
    }
L_000ffaf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ffb00u + + 0x11cu);
    }
L_000ffafc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ffb00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ffb04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ffb08:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000ffb10u + + 0x110u);
    }
L_000ffb0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb28:;
    {
        cpu->r[3] = 0x00000404u;
    }
L_000ffb2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb30:;
    {
        wr16(cpu->r[13], cpu->r[3]);
    }
L_000ffb34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb38:;
    {
        cpu->r[3] = (~0x0000007fu);
    }
L_000ffb3c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000ffb40:;
    {
        wr8(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000ffb44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000ffb48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000ffb4c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb50:;
    {
        cpu->r[14] = 0x000ffb54u; fn_00147e80(cpu);
    }
L_000ffb54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ffb58:;
    {
        cpu->r[0] = 0x00000b53u;
    }
L_000ffb5c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000ffb64u + + 0xc0u);
    }
L_000ffb60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffb68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffb6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffb70:;
    {
        cpu->r[14] = 0x000ffb74u; imp_glLightModelfv(cpu); /* glLightModelfv */
    }
L_000ffb74:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ffb78:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000ffb7c:;
    {
        cpu->r[1] = 0x00001203u;
    }
L_000ffb80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ffb88u + + 0xa0u);
    }
L_000ffb84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000ffb88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffb8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000ffb90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffb94:;
    {
        cpu->r[14] = 0x000ffb98u; imp_glLightfv(cpu); /* glLightfv */
    }
L_000ffb98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ffb9c:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000ffba0:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_000ffba4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ffbacu + + 0x80u);
    }
L_000ffba8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffbac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbb0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffbc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffbc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffbcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000ffbd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffbd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ffbd8:;
    {
        cpu->r[14] = 0x000ffbdcu; imp_glLightfv(cpu); /* glLightfv */
    }
L_000ffbdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ffbe0:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000ffbe4:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_000ffbe8:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_000ffbec:;
    {
        cpu->r[14] = 0x000ffbf0u; imp_glLightfv(cpu); /* glLightfv */
    }
L_000ffbf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000ffbf4:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000ffbf8:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_000ffbfc:;
    {
        cpu->r[14] = 0x000ffc00u; imp_glLightfv(cpu); /* glLightfv */
    }
L_000ffc00:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000ffc04:;
    {
        cpu->r[14] = 0x000ffc08u; imp_glEnable(cpu); /* glEnable */
    }
L_000ffc08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000ffc0c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000ffc10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffc14u)) return;
    }
}

/* _ZN15GS_CarColorMenu17ApplyMenuSettingsEv @ 000ffc30 (arm) */
void fn_000ffc30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ffc30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000ffc34:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000ffc38:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_000ffc3c:;
    {
        cpu->r[3] = 0x000005c9u;
    }
L_000ffc40:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_000ffc44:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000ffc48:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_000ffc4c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_000ffc50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ffc54:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ffc58:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[5]);
    }
L_000ffc5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ffc60:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ffc64:;
    {
        cpu->r[3] = rd32(0x000ffc6cu + + 0x28u);
    }
L_000ffc68:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[5]);
    }
L_000ffc6c:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_000ffc70:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ffc78u, cpu->r[3], 0, 0);
    }
L_000ffc74:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_000ffc78:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ffc7c:;
    {
        cpu->r[14] = 0x000ffc84u;
    }
L_000ffc80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffc84u)) return;
    }
L_000ffc84:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[5]);
    }
L_000ffc88:;
    {
        cpu->r[14] = 0x000ffc8cu; fn_0009b4d0(cpu);
    }
L_000ffc8c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_000ffc90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffc94u)) return;
    }
}

/* _ZN15GS_CarColorMenuD0Ev @ 000ffc98 (arm) */
void fn_000ffc98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ffc98:;
    {
        cpu->r[3] = rd32(0x000ffca0u + + 0x2cu);
    }
L_000ffc9c:;
    {
        cpu->r[2] = rd32(0x000ffca4u + + 0x2cu);
    }
L_000ffca0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ffca8u, cpu->r[3], 0, 0);
    }
L_000ffca4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ffca8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ffcac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ffcb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ffcb4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ffcb8:;
    {
        cpu->r[14] = 0x000ffcbcu; fn_000ec21c(cpu);
    }
L_000ffcbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ffcc0:;
    {
        cpu->r[14] = 0x000ffcc4u; fn_0018ba20(cpu);
    }
L_000ffcc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ffcc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ffcccu)) return;
    }
}

/* _ZN15GS_CarColorMenu18RenderColorButtonsEv @ 000ffcd8 (arm) */
void fn_000ffcd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ffcd8:;
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
L_000ffcdc:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000ffce0:;
    {
        cpu->r[11] = rd32(0x000ffce8u + + 0x264u);
    }
L_000ffce4:;
    {
        cpu->r[3] = rd32(0x000ffcecu + + 0x264u);
    }
L_000ffce8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ffcec:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ffcf4u, cpu->r[11], 0, 0);
    }
L_000ffcf0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ffcf4:;
    {
        cpu->r[4] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000ffcf8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ffcfc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ffd00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fff08;
        }
    }
L_000ffd04:;
    {
        cpu->r[0] = rd32(0x000ffd0cu + + 0x248u);
    }
L_000ffd08:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_000ffd0c:;
    {
        cpu->r[1] = 0x00001934u;
    }
L_000ffd10:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_000ffd14:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000ffd18:;
    {
        cpu->r[0] = 0x00001938u;
    }
L_000ffd1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ffd20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ffd24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ffd28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000ffd2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000ffd30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_000ffd34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000ffd38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ffd3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000ffd40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000ffd44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ffd48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ffefc;
        }
    }
L_000ffd4c:;
    {
        cpu->r[1] = rd32(0x000ffd54u + + 0x204u);
    }
L_000ffd50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000ffd54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000ffd58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ffd5c:;
    {
        cpu->r[6] = 0x0000005au;
    }
L_000ffd60:;
    {
        cpu->r[10] = 0x0000000au;
    }
L_000ffd64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000ffd68:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000ffd70u + + 0x1d8u);
    }
L_000ffd6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000ffd70:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000ffd74:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x000ffd7cu + + 0x1b4u);
    }
L_000ffd78:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x000ffd80u + + 0x1b8u);
    }
L_000ffd7c:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x000ffd84u + + 0x1bcu);
    }
L_000ffd80:;
    {
        goto L_000ffe84;
    }
L_000ffd84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ffd88:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000046u, 0, 0);
    }
L_000ffd8c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_000ffd90:;
    {
        cpu->r[0] = 0x00001c3cu;
    }
L_000ffd94:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ffd98:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000ffd9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000ffda0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00001940u, 0, 0);
    }
L_000ffda4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001940u, 0, 0);
    }
L_000ffda8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ffdac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ffdb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000ffdb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffdb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ffdbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffdc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ffdc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ffdc8:;
    {
        vfp_vadd(cpu, 13, 15, 18);
    }
L_000ffdcc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000ffdd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ffdd4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ffdd8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ffddc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ffde0:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_000ffde4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000ffde8:;
    {
        *vfp_d(cpu,6) = *vfp_d(cpu,8);
    }
L_000ffdec:;
    {
        *vfp_d(cpu, 6) = -(*vfp_d(cpu, 6) - *vfp_d(cpu, 7) * *vfp_d(cpu, 8));
    }
L_000ffdf0:;
    {
        *vfp_d(cpu,7) = *vfp_d(cpu,6);
    }
L_000ffdf4:;
    {
        *vfp_d(cpu,6) = *vfp_d(cpu,11);
    }
L_000ffdf8:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7) * *vfp_d(cpu, 10);
    }
L_000ffdfc:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_000ffe00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ffe04:;
    {
        cpu->r[14] = 0x000ffe08u; fn_0012b848(cpu);
    }
L_000ffe08:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_000ffe0c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ffe10:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ffe14:;
    {
        cpu->r[1] = 0x000000e0u;
    }
L_000ffe18:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ffe1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ffe20:;
    {
        cpu->r[14] = 0x000ffe24u; fn_000ad8a0(cpu);
    }
L_000ffe24:;
    {
        cpu->r[14] = rd8(cpu->r[13] + + 0x2du);
    }
L_000ffe28:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ffe2c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xb0u);
    }
L_000ffe30:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ffe34:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x2cu);
    }
L_000ffe38:;
    {
        cpu->r[1] = 0x000000e1u;
    }
L_000ffe3c:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 8u, &shc); cpu->r[14] = v;
    }
L_000ffe40:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x2eu);
    }
L_000ffe44:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ffe48:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[14] = v;
    }
L_000ffe4c:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_000ffe50:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x48u);
    }
L_000ffe54:;
    {
        uint32_t v = cpu->r[14] | cpu->r[9]; cpu->r[14] = v;
    }
L_000ffe58:;
    {
        wr32(cpu->r[12] + + 0x48u, cpu->r[14]);
    }
L_000ffe5c:;
    {
        wr32(cpu->r[12] + + 0x4cu, cpu->r[8]);
    }
L_000ffe60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ffe64:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ffe68:;
    {
        cpu->r[14] = 0x000ffe6cu; fn_000ad8a0(cpu);
    }
L_000ffe6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ffe70:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000ffe74:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xb0u);
    }
L_000ffe78:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000ffe7c:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[2]);
    }
L_000ffe80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ffefc;
        }
    }
L_000ffe84:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_000ffe88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000ffe8c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_000ffe90:;
    {
        cpu->r[8] = 0x000000a0u;
    }
L_000ffe94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ffd84;
        }
    }
L_000ffe98:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ffe9c:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_000ffea0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_000ffea4:;
    {
        cpu->r[6] = 0x0000005au;
    }
L_000ffea8:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_000ffeac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000ffeb0:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_000ffeb4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1acu);
    }
L_000ffeb8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1a8u);
    }
L_000ffebc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000104u, 1, 0);
    }
L_000ffec0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_000ffec4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[2] = v;
    }
L_000ffec8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000ffecc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1b0u);
    }
L_000ffed0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1acu);
    }
L_000ffed4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_000ffed8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[2] = v;
    }
L_000ffedc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000ffee0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000ffee4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1b4u);
    }
L_000ffee8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1b0u);
    }
L_000ffeec:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000ffef0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[3] = v;
    }
L_000ffef4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000ffef8:;
    {
        goto L_000ffdc8;
    }
L_000ffefc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000fff00:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000fff04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fff08u)) return;
    }
L_000fff08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fff0c:;
    {
        cpu->r[14] = 0x000fff10u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fff10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fff14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ffd04;
        }
    }
L_000fff18:;
    {
        cpu->r[3] = rd32(0x000fff20u + + 0x3cu);
    }
L_000fff1c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000fff20:;
    {
        cpu->r[14] = 0x000fff24u; fn_00094228(cpu);
    }
L_000fff24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fff28:;
    {
        cpu->r[14] = 0x000fff2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fff2c:;
    {
        goto L_000ffd04;
    }
}

/* _ZN15GS_CarColorMenu6RenderEv @ 000fff60 (arm) */
void fn_000fff60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fff60:;
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
L_000fff64:;
    {
        cpu->r[5] = rd32(0x000fff6cu + + 0x3d4u);
    }
L_000fff68:;
    {
        cpu->r[8] = rd32(0x000fff70u + + 0x3d4u);
    }
L_000fff6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000012cu, 1, 0);
    }
L_000fff70:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fff78u, cpu->r[5], 0, 0);
    }
L_000fff74:;
    {
        cpu->r[3] = rd32(0x000fff7cu + + 0x3ccu);
    }
L_000fff78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fff7c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000fff80:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fff84:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000fff88:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000fff8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fff90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001001b4;
        }
    }
L_000fff94:;
    {
        cpu->r[7] = rd32(0x000fff9cu + + 0x3b0u);
    }
L_000fff98:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000fff9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fffa0:;
    {
        cpu->r[14] = 0x000fffa4u; fn_00096a08(cpu);
    }
L_000fffa4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fffa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fffac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fffb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000fffb4:;
    {
        cpu->r[14] = 0x000fffb8u; fn_0018aa44(cpu);
    }
L_000fffb8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000fffbc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000fffc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fffc4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000fffc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001001f8;
        }
    }
L_000fffcc:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000fffd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fffd4:;
    {
        cpu->r[14] = 0x000fffd8u; fn_00096a08(cpu);
    }
L_000fffd8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000fffdc:;
    {
        cpu->r[10] = 0x00001c4cu;
    }
L_000fffe0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000fffe4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fffe8:;
    {
        cpu->r[14] = 0x000fffecu; fn_0018aa44(cpu);
    }
L_000fffec:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_000ffff0:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_000ffff4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ffff8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ffffc:;
    {
        cpu->r[14] = 0x00100000u; fn_00113570(cpu);
    }
L_00100000:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100004:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_00100008:;
    {
        cpu->r[14] = 0x0010000cu; fn_000978a8(cpu);
    }
L_0010000c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100010:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x954u);
    }
L_00100014:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00100018:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010001c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_00100020:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_00100024:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_00100028:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010002c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00100030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100234;
        }
    }
L_00100034:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x955u);
    }
L_00100038:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0010003c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001002e0;
        }
    }
L_00100040:;
    {
        cpu->r[8] = rd32(0x00100048u + + 0x308u);
    }
L_00100044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00100048:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010004c:;
    {
        cpu->r[14] = 0x00100050u; fn_0012f780(cpu);
    }
L_00100050:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00100054:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_00100058:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_0010005c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00100060:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00100064:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00100068:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0010006c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_00100070:;
    {
        cpu->r[14] = 0x00100074u; fn_000a8a2c(cpu);
    }
L_00100074:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100078:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_0010007c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x118u);
    }
L_00100080:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x120u);
    }
L_00100084:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x124u);
    }
L_00100088:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0010008c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x11cu);
    }
L_00100090:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00100094:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00100098:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_0010009c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001000a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001000a4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[14] = v;
    }
L_001000a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001000ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_001000b0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001000b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x0000003cu;
        }
    }
L_001000b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[6];
        }
    }
L_001000bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
    }
L_001000c0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001000c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001000c8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x0000003bu, cpu->r[3], 1, 0);
    }
L_001000cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001000d0:;
    {
        cpu->r[14] = 0x001000d4u; fn_000ad8a0(cpu);
    }
L_001000d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001000d8:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001000dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001000e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x444u);
    }
L_001000e4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_001000e8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_001000ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001000f0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001000f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001000f8:;
    {
        cpu->r[14] = 0x001000fcu; fn_000aeb58(cpu);
    }
L_001000fc:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00100100:;
    {
        cpu->r[3] = 0x0000003bu;
    }
L_00100104:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00100108:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0010010c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00100110:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00100114:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00100118:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010011c:;
    {
        cpu->r[14] = 0x00100120u; fn_000ad19c(cpu);
    }
L_00100120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00100124:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00100128:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00100154;
        }
    }
L_0010012c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00100130:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00100134:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100138:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010013c:;
    {
        cpu->r[14] = 0x00100144u;
    }
L_00100140:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00100144u)) return;
    }
L_00100144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00100148:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0010014c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00100150:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010012c;
        }
    }
L_00100154:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100158:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010015c:;
    {
        cpu->r[14] = 0x00100164u;
    }
L_00100160:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00100164u)) return;
    }
L_00100164:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00100168:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010016c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100170:;
    {
        cpu->r[14] = 0x00100178u;
    }
L_00100174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00100178u)) return;
    }
L_00100178:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010017c:;
    {
        cpu->r[14] = 0x00100180u; fn_000ffcd8(cpu);
    }
L_00100180:;
    {
        cpu->r[2] = rd32(0x00100188u + + 0x1ccu);
    }
L_00100184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100188:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010018c:;
    {
        cpu->r[2] = rd32(0x00100194u + cpu->r[2]);
    }
L_00100190:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00100194:;
    {
        cpu->r[14] = 0x0010019cu;
    }
L_00100198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x90u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010019cu)) return;
    }
L_0010019c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001001a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001001a4:;
    {
        cpu->r[14] = 0x001001acu;
    }
L_001001a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x94u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001001acu)) return;
    }
L_001001ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_001001b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001001b4u)) return;
    }
L_001001b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001001b8:;
    {
        cpu->r[14] = 0x001001bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001001bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001001c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fff94;
        }
    }
L_001001c4:;
    {
        cpu->r[7] = rd32(0x001001ccu + + 0x180u);
    }
L_001001c8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001001cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001001d0:;
    {
        cpu->r[14] = 0x001001d4u; fn_0018aa20(cpu);
    }
L_001001d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001001d8:;
    {
        cpu->r[14] = 0x001001dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001001dc:;
    {
        cpu->r[3] = rd32(0x001001e4u + + 0x174u);
    }
L_001001e0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001001e4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001001e8:;
    {
        cpu->r[3] = rd32(0x001001f0u + + 0x16cu);
    }
L_001001ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001001f0:;
    {
        cpu->r[14] = 0x001001f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001001f4:;
    {
        goto L_000fff98;
    }
L_001001f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001001fc:;
    {
        cpu->r[14] = 0x00100200u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00100200:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00100204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fffcc;
        }
    }
L_00100208:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010020c:;
    {
        cpu->r[14] = 0x00100210u; fn_0018aa20(cpu);
    }
L_00100210:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00100214:;
    {
        cpu->r[14] = 0x00100218u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100218:;
    {
        cpu->r[3] = rd32(0x00100220u + + 0x138u);
    }
L_0010021c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00100220:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00100224:;
    {
        cpu->r[3] = rd32(0x0010022cu + + 0x130u);
    }
L_00100228:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010022c:;
    {
        cpu->r[14] = 0x00100230u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00100230:;
    {
        goto L_000fffcc;
    }
L_00100234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100238:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0010023c:;
    {
        cpu->r[2] = 0x55000000u;
    }
L_00100240:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00100244:;
    {
        cpu->r[14] = 0x00100248u; fn_0010dda8(cpu);
    }
L_00100248:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0010024c:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_00100250:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00100254:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00100258:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010025c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00100260:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00100264:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00100268:;
    {
        cpu->r[14] = 0x0010026cu; fn_000ad8a0(cpu);
    }
L_0010026c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00100270:;
    {
        cpu->r[0] = 0x00000605u;
    }
L_00100274:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00100278:;
    {
        cpu->r[14] = 0x0010027cu; fn_000aeb58(cpu);
    }
L_0010027c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00100280:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00100284:;
    {
        cpu->r[8] = rd32(0x0010028cu + + 0xc4u);
    }
L_00100288:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0010028c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100290:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00100294:;
    {
        cpu->r[14] = 0x00100298u; fn_000a0cf8(cpu);
    }
L_00100298:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010029c:;
    {
        cpu->r[1] = rd32(0x001002a4u + + 0xbcu);
    }
L_001002a0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001002a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001002acu, cpu->r[1], 0, 0);
    }
L_001002a8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001002ac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001002b0:;
    {
        cpu->r[14] = 0x001002b4u; fn_000ae830(cpu);
    }
L_001002b4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001002b8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001002bc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001002c0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001002c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001002c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001002cc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001002d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001002d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001002d8:;
    {
        cpu->r[14] = 0x001002dcu; fn_000ad19c(cpu);
    }
L_001002dc:;
    {
        goto L_00100044;
    }
L_001002e0:;
    {
        cpu->r[3] = rd32(0x001002e8u + + 0x7cu);
    }
L_001002e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001002e8:;
    {
        cpu->r[8] = rd32(0x001002f0u + + 0x60u);
    }
L_001002ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001002f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001002f4:;
    {
        cpu->r[9] = rd32(cpu->r[3]);
    }
L_001002f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001002fc:;
    {
        cpu->r[14] = 0x00100300u; fn_00096e14(cpu);
    }
L_00100300:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00100304:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00100308:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010030c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00100310:;
    {
        cpu->r[14] = 0x00100314u; fn_000f3d88(cpu);
    }
L_00100314:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100318:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0010031c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00100320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00100324:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_00100328:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010032c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00100330:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00100334:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00100338:;
    {
        cpu->r[14] = 0x0010033cu; fn_000ad19c(cpu);
    }
L_0010033c:;
    {
        goto L_00100044;
    }
}

/* _ZN15GS_CarColorMenu9LoadColorEv @ 00100368 (arm) */
void fn_00100368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100368:;
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
L_0010036c:;
    {
        cpu->r[4] = rd32(0x00100374u + + 0x1c0u);
    }
L_00100370:;
    {
        cpu->r[3] = rd32(0x00100378u + + 0x1c0u);
    }
L_00100374:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00100378:;
    {
        cpu->r[4] = add_flags(cpu, 0x00100380u, cpu->r[4], 0, 0);
    }
L_0010037c:;
    {
        cpu->r[10] = rd32(0x00100384u + + 0x1b8u);
    }
L_00100380:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00100384:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00100388:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0010038c:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_00100390:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00100394:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00100398:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010039c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0xb58u);
    }
L_001003a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100440;
        }
    }
L_001003a4:;
    {
        cpu->r[6] = rd32(0x001003acu + + 0x194u);
    }
L_001003a8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[8] = v;
    }
L_001003ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001003b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001003b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001003b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001003bc:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1f9u);
    }
L_001003c0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1fau);
    }
L_001003c4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1f8u);
    }
L_001003c8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1fbu);
    }
L_001003cc:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001003d0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_001003d4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_001003d8:;
    {
        wr32(cpu->r[7] + + 0x960u, cpu->r[3]);
    }
L_001003dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001003e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001003e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001003e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001003ec:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1f5u);
    }
L_001003f0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1f6u);
    }
L_001003f4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1f4u);
    }
L_001003f8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1f7u);
    }
L_001003fc:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00100400:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00100404:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00100408:;
    {
        wr32(cpu->r[7] + + 0x964u, cpu->r[3]);
    }
L_0010040c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_00100410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00100414:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_00100418:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0010041c:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x1fdu);
    }
L_00100420:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1fcu);
    }
L_00100424:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x1feu);
    }
L_00100428:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x1ffu);
    }
L_0010042c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00100430:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00100434:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00100438:;
    {
        wr32(cpu->r[7] + + 0x968u, cpu->r[3]);
    }
L_0010043c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100440u)) return;
    }
L_00100440:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00100444:;
    {
        cpu->r[14] = 0x00100448u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00100448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010044c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010051c;
        }
    }
L_00100450:;
    {
        cpu->r[6] = rd32(0x00100458u + + 0xe8u);
    }
L_00100454:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[8] = v;
    }
L_00100458:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010045c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_00100460:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00100464:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_00100468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0010046c:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_00100470:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1f9u);
    }
L_00100474:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00100478:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1f8u);
    }
L_0010047c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1fau);
    }
L_00100480:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1fbu);
    }
L_00100484:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00100488:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0010048c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00100490:;
    {
        wr32(cpu->r[7] + + 0x960u, cpu->r[3]);
    }
L_00100494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001003dc;
        }
    }
L_00100498:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0010049c:;
    {
        cpu->r[14] = 0x001004a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001004a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001004a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001004b8;
        }
    }
L_001004a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001004ac:;
    {
        cpu->r[14] = 0x001004b0u; fn_00094228(cpu);
    }
L_001004b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001004b4:;
    {
        cpu->r[14] = 0x001004b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001004b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001004bc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001004c0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001004c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001004c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_001004cc:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_001004d0:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1f5u);
    }
L_001004d4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1f6u);
    }
L_001004d8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001004dc:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1f4u);
    }
L_001004e0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1f7u);
    }
L_001004e4:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001004e8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_001004ec:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_001004f0:;
    {
        wr32(cpu->r[7] + + 0x964u, cpu->r[3]);
    }
L_001004f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010040c;
        }
    }
L_001004f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001004fc:;
    {
        cpu->r[14] = 0x00100500u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00100500:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00100504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010040c;
        }
    }
L_00100508:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0010050c:;
    {
        cpu->r[14] = 0x00100510u; fn_00094228(cpu);
    }
L_00100510:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00100514:;
    {
        cpu->r[14] = 0x00100518u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100518:;
    {
        goto L_0010040c;
    }
L_0010051c:;
    {
        cpu->r[6] = rd32(0x00100524u + + 0x1cu);
    }
L_00100520:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00100524:;
    {
        cpu->r[14] = 0x00100528u; fn_00094228(cpu);
    }
L_00100528:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010052c:;
    {
        cpu->r[14] = 0x00100530u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100530:;
    {
        goto L_00100454;
    }
}

/* _ZN15GS_CarColorMenu11DoBarActionEii @ 00100544 (arm) */
void fn_00100544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100544:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00100548:;
    {
        cpu->r[4] = rd32(0x00100550u + + 0x1f8u);
    }
L_0010054c:;
    {
        cpu->r[6] = rd32(0x00100554u + + 0x1f8u);
    }
L_00100550:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_00100554:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010055cu, cpu->r[4], 0, 0);
    }
L_00100558:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0010055c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00100560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00100564:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00100568:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010056c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00100570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001005fc;
        }
    }
L_00100574:;
    {
        cpu->r[7] = rd32(0x0010057cu + + 0x1d4u);
    }
L_00100578:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0010057c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8ecu);
    }
L_00100580:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00100584:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[1]);
    }
L_00100588:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010058c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00100590:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00100594:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00100598:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_0010059c:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_001005a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001005a4:;
    {
        cpu->r[2] = 0x00001938u;
    }
L_001005a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001005ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001005b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100618;
        }
    }
L_001005b4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001005b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001005bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010062c;
        }
    }
L_001005c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001005c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001005c8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001005cc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001005d0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001005d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001005d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001005dc:;
    {
        cpu->r[14] = 0x001005e0u; fn_000fd248(cpu);
    }
L_001005e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_001005e4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001005e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001005ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010065c;
        }
    }
L_001005f0:;
    {
        cpu->r[2] = 0x00000665u;
    }
L_001005f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001005f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100668;
        }
    }
L_001005fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00100600:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00100604:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00100608:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0010060c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100744;
        }
    }
L_00100610:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00100614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100618u)) return;
    }
L_00100618:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010061c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00100620:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00100624:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
        }
    }
L_00100628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001005fc;
        }
    }
L_0010062c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00100630:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00100634:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00100638:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010063c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00100640:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00100644:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00100648:;
    {
        cpu->r[14] = 0x0010064cu; fn_000fd248(cpu);
    }
L_0010064c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00100650:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00100654:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00100658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001005f0;
        }
    }
L_0010065c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00100660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00100664:;
    {
        goto L_00100690;
    }
L_00100668:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010066c:;
    {
        cpu->r[14] = 0x00100670u; fn_00100368(cpu);
    }
L_00100670:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00100674:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_00100678:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010067c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00100680:;
    {
        cpu->r[2] = 0x00001938u;
    }
L_00100684:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00100688:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010068c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001005fc;
        }
    }
L_00100690:;
    {
        cpu->r[2] = 0x00006774u;
    }
L_00100694:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00100698:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x40u);
    }
L_0010069c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001006a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001006dc;
        }
    }
L_001006a4:;
    {
        cpu->r[1] = 0x00001c38u;
    }
L_001006a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_001006ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001006b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_001006b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001006b8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_001006bc:;
    {
        cpu->r[14] = 0x001006c0u; fn_000933e0(cpu);
    }
L_001006c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001006c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001006c8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001006cc:;
    {
        cpu->r[14] = 0x001006d0u; fn_0009e9e8(cpu);
    }
L_001006d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001006d4:;
    {
        cpu->r[14] = 0x001006d8u; fn_0010df70(cpu);
    }
L_001006d8:;
    {
        goto L_001005fc;
    }
L_001006dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001006e0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001006e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001006e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001006ec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001006f0:;
    {
        cpu->r[1] = rd32(0x001006f8u + + 0x5cu);
    }
L_001006f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001006f8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001006fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00100704u, cpu->r[1], 0, 0);
    }
L_00100700:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00100704:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00100708:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x18u;
        wr32(cpu->r[8] + - 0x18u, cpu->r[2]);
        cpu->r[8] = wb_tmp;
    }
L_0010070c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00100710:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00100714:;
    {
        cpu->r[14] = 0x00100718u; imp_sprintf(cpu); /* sprintf */
    }
L_00100718:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010071c:;
    {
        cpu->r[14] = 0x00100720u; imp_strlen(cpu); /* strlen */
    }
L_00100720:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00100724:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00100728:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0010072c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00100730:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00100734:;
    {
        cpu->r[14] = 0x00100738u; fn_001c44d0(cpu);
    }
L_00100738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010073c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00100740:;
    {
        goto L_001006a4;
    }
L_00100744:;
    {
        cpu->r[14] = 0x00100748u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00100748:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[4] + (-cpu->r[12]);
        cpu->r[9] = rd16(cpu->r[4]);
        cpu->r[4] = wb_tmp;
        }
    }
L_0010074c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00100750:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_00100754:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + (-cpu->r[12]);
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[2]);
        cpu->r[2] = wb_tmp;
        }
    }
}

/* _ZN15GS_CarColorMenuC1Eb @ 00100758 (arm) */
void fn_00100758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100758:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010075c:;
    {
        cpu->r[5] = rd32(0x00100764u + + 0x30u);
    }
L_00100760:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00100764:;
    {
        cpu->r[14] = 0x00100768u; fn_001100c0(cpu);
    }
L_00100768:;
    {
        cpu->r[3] = rd32(0x00100770u + + 0x28u);
    }
L_0010076c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00100774u, cpu->r[5], 0, 0);
    }
L_00100770:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00100774:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100778:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_0010077c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00100780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00100784:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00100788:;
    {
        cpu->r[14] = 0x0010078cu; fn_00100368(cpu);
    }
L_0010078c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100794u)) return;
    }
}

/* _ZN15GS_CarColorMenuC2Eb @ 0010079c (arm) */
void fn_0010079c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010079c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001007a0:;
    {
        cpu->r[5] = rd32(0x001007a8u + + 0x30u);
    }
L_001007a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001007a8:;
    {
        cpu->r[14] = 0x001007acu; fn_001100c0(cpu);
    }
L_001007ac:;
    {
        cpu->r[3] = rd32(0x001007b4u + + 0x28u);
    }
L_001007b0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001007b8u, cpu->r[5], 0, 0);
    }
L_001007b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001007b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001007bc:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_001007c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001007c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001007c8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001007cc:;
    {
        cpu->r[14] = 0x001007d0u; fn_00100368(cpu);
    }
L_001007d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001007d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001007d8u)) return;
    }
}

/* _ZN15GS_CarColorMenu18UpdateColorButtonsEv @ 001007e0 (arm) */
void fn_001007e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001007e0:;
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
L_001007e4:;
    {
        cpu->r[4] = rd32(0x001007ecu + + 0x308u);
    }
L_001007e8:;
    {
        cpu->r[3] = rd32(0x001007f0u + + 0x308u);
    }
L_001007ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001007f0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001007f8u, cpu->r[4], 0, 0);
    }
L_001007f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001007f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001007fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00100800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00100804:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001008d4;
        }
    }
L_00100808:;
    {
        cpu->r[3] = rd32(0x00100810u + + 0x2ecu);
    }
L_0010080c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00100810:;
    {
        cpu->r[3] = rd32(0x00100818u + + 0x2e8u);
    }
L_00100814:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00100818:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010081c:;
    {
        cpu->r[3] = rd32(0x00100824u + + 0x2e0u);
    }
L_00100820:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00100824:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_00100828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010082c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00100830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001008dc;
        }
    }
L_00100834:;
    {
        cpu->r[2] = rd32(0x0010083cu + + 0x2ccu);
    }
L_00100838:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010083c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00100840:;
    {
        cpu->r[11] = rd32(cpu->r[3]);
    }
L_00100844:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_00100848:;
    {
        cpu->r[9] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0010084c:;
    {
        cpu->r[3] = 0x00001934u;
    }
L_00100850:;
    {
        cpu->r[12] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00100854:;
    {
        cpu->r[3] = 0x00001938u;
    }
L_00100858:;
    {
        cpu->r[7] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0010085c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 1);
    }
L_00100860:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = 0x00000005u;
        }
    }
L_00100864:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00100868:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[12];
        }
    }
L_0010086c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_00100870:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00100874:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001008d4;
        }
    }
L_00100878:;
    {
        cpu->r[0] = rd32(0x00100880u + + 0x28cu);
    }
L_0010087c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00100880:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_00100884:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00100888:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0010088c:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_00100890:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000104u, 1, 0);
    }
L_00100894:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00100898:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_0010089c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x0000005au;
        }
    }
L_001008a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001008a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000055u, 0, 0);
    }
L_001008a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001008c4;
        }
    }
L_001008ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001008b0:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
        }
    }
L_001008b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_001008b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001008c4;
        }
    }
L_001008bc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001008c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00100904;
        }
    }
L_001008c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001008c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000046u, 0, 0);
    }
L_001008cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001008d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100894;
        }
    }
L_001008d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001008d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001008dcu)) return;
    }
L_001008dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001008e0:;
    {
        cpu->r[14] = 0x001008e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001008e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001008e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100834;
        }
    }
L_001008ec:;
    {
        cpu->r[3] = rd32(0x001008f4u + + 0x21cu);
    }
L_001008f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001008f4:;
    {
        cpu->r[14] = 0x001008f8u; fn_00094228(cpu);
    }
L_001008f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001008fc:;
    {
        cpu->r[14] = 0x00100900u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100900:;
    {
        goto L_00100834;
    }
L_00100904:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00100908:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00100a50;
        }
    }
L_0010090c:;
    {
        cpu->r[3] = 0x00001b90u;
    }
L_00100910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00100914:;
    {
        cpu->r[2] = rd8(cpu->r[11] + cpu->r[3]);
    }
L_00100918:;
    {
        cpu->r[3] = 0x00001b8cu;
    }
L_0010091c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00100920:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_00100924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00001940u, 0, 0);
    }
L_00100928:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0010092c:;
    {
        cpu->r[3] = 0x00001948u;
    }
L_00100930:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00100934:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00100938:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 3, 8u, &shc); cpu->r[2] = v;
    }
L_0010093c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00100940:;
    {
        cpu->r[2] = 0x00001944u;
    }
L_00100944:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_00100948:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_0010094c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00100950:;
    {
        vfp_sync_flags(cpu);
    }
L_00100954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100aa0;
        }
    }
L_00100958:;
    {
        cpu->r[0] = 0x00001b90u;
    }
L_0010095c:;
    {
        cpu->r[14] = 0x00001b8cu;
    }
L_00100960:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00100964:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00100968:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 24u, &shc); cpu->r[1] = v;
    }
L_0010096c:;
    {
        wr8(cpu->r[11] + cpu->r[0], cpu->r[1]);
    }
L_00100970:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 24u, &shc); cpu->r[1] = v;
    }
L_00100974:;
    {
        cpu->r[7] = rd8(cpu->r[11] + cpu->r[14]);
    }
L_00100978:;
    {
        cpu->r[8] = rd8(cpu->r[11] + cpu->r[0]);
    }
L_0010097c:;
    {
        cpu->r[2] = 0x00001b94u;
    }
L_00100980:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_00100984:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00100988:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_0010098c:;
    {
        wr32(cpu->r[11] + cpu->r[14], cpu->r[6]);
    }
L_00100990:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[9] = v;
    }
L_00100994:;
    {
        wr32(cpu->r[11] + cpu->r[0], cpu->r[12]);
    }
L_00100998:;
    {
        wr32(cpu->r[11] + cpu->r[2], cpu->r[9]);
    }
L_0010099c:;
    {
        cpu->r[2] = 0x00001b98u;
    }
L_001009a0:;
    {
        cpu->r[10] = 0x00001c38u;
    }
L_001009a4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[3] = v;
    }
L_001009a8:;
    {
        wr8(cpu->r[11] + cpu->r[2], cpu->r[3]);
    }
L_001009ac:;
    {
        cpu->r[3] = 0x00001bbeu;
    }
L_001009b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001009b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00001b80u, 0, 0);
    }
L_001009b8:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001009bc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001009c0:;
    {
        wr8(cpu->r[11] + cpu->r[3], cpu->r[9]);
    }
L_001009c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_001009c8:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_001009cc:;
    {
        cpu->r[14] = 0x001009d0u; fn_000b0c4c(cpu);
    }
L_001009d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001009d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001009d8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001009dc:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001009e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x000019c0u, 0, 0);
    }
L_001009e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00001b80u, 0, 0);
    }
L_001009e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_001009ec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000003du, 0, 0);
    }
L_001009f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001009f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001009f8:;
    {
        cpu->r[14] = 0x001009fcu; imp_memcpy(cpu); /* memcpy */
    }
L_001009fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00100a00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100a04:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00100a08:;
    {
        cpu->r[14] = 0x00100a0cu; imp_memcpy(cpu); /* memcpy */
    }
L_00100a0c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_00100a10:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00100a14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100a18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xb58u);
    }
L_00100a1c:;
    {
        cpu->r[14] = 0x00100a20u; fn_000933e0(cpu);
    }
L_00100a20:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00100a24:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00100a28:;
    {
        cpu->r[14] = 0x00100a2cu; fn_0009e9e8(cpu);
    }
L_00100a2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00100a30:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00100a34:;
    {
        cpu->r[1] = 0x00000099u;
    }
L_00100a38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_00100a3c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00100a40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00100a44:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00100a48:;
    {
        cpu->r[14] = 0x00100a4cu; fn_000fd248(cpu);
    }
L_00100a4c:;
    {
        goto L_001008d4;
    }
L_00100a50:;
    {
        cpu->r[1] = 0x00001b98u;
    }
L_00100a54:;
    {
        cpu->r[3] = 0x00001b94u;
    }
L_00100a58:;
    {
        cpu->r[2] = 0x00001b90u;
    }
L_00100a5c:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[1]);
    }
L_00100a60:;
    {
        cpu->r[12] = rd8(cpu->r[11] + cpu->r[3]);
    }
L_00100a64:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_00100a68:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00100a6c:;
    {
        cpu->r[1] = 0x00001b8cu;
    }
L_00100a70:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00100a74:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 24u, &shc); cpu->r[12] = v;
    }
L_00100a78:;
    {
        cpu->r[2] = rd8(cpu->r[11] + cpu->r[2]);
    }
L_00100a7c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00100a80:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_00100a84:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 3, 8u, &shc); cpu->r[12] = v;
    }
L_00100a88:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[12];
    }
L_00100a8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00100a90:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[2] = v;
    }
L_00100a94:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00100a98:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00100a9c:;
    {
        goto L_0010094c;
    }
L_00100aa0:;
    {
        cpu->r[2] = 0x00001b94u;
    }
L_00100aa4:;
    {
        cpu->r[0] = 0x00001b90u;
    }
L_00100aa8:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[2]);
    }
L_00100aac:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_00100ab0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_00100ab4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 3, 8u, &shc); cpu->r[1] = v;
    }
L_00100ab8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00100abc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00100ac0:;
    {
        vfp_sync_flags(cpu);
    }
L_00100ac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100958;
        }
    }
L_00100ac8:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00100acc:;
    {
        cpu->r[2] = 0x00001b98u;
    }
L_00100ad0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00100ad4:;
    {
        cpu->r[2] = rd8(cpu->r[11] + cpu->r[2]);
    }
L_00100ad8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00100adc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 8u, &shc); cpu->r[2] = v;
    }
L_00100ae0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00100ae4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_00100ae8:;
    {
        vfp_sync_flags(cpu);
    }
L_00100aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001008d4;
        }
    }
L_00100af0:;
    {
        goto L_00100958;
    }
}

/* _ZN15GS_CarColorMenu6UpdateEv @ 00100b14 (arm) */
void fn_00100b14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100b14:;
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
L_00100b18:;
    {
        cpu->r[5] = rd32(0x00100b20u + + 0x320u);
    }
L_00100b1c:;
    {
        cpu->r[8] = rd32(0x00100b24u + + 0x320u);
    }
L_00100b20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00100b24:;
    {
        cpu->r[5] = add_flags(cpu, 0x00100b2cu, cpu->r[5], 0, 0);
    }
L_00100b28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100b2c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00100b30:;
    {
        cpu->r[3] = 0x000082e8u;
    }
L_00100b34:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00100b38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00100b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100be8;
        }
    }
L_00100b40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100b44:;
    {
        cpu->r[7] = 0x00001c4cu;
    }
L_00100b48:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00100b4c:;
    {
        cpu->r[14] = 0x00100b50u; fn_000978a8(cpu);
    }
L_00100b50:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_00100b54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00100b58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00100b5c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00100b60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100b64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00100b68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x444u);
    }
L_00100b6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00100b70:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00100b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100d6c;
        }
    }
L_00100b78:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00100b7c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00100b80:;
    {
        cpu->r[14] = 0x00100b84u; fn_000a439c(cpu);
    }
L_00100b84:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00100b88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00100b8c:;
    {
        cpu->r[10] = 0x00001c4cu;
    }
L_00100b90:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[0]);
    }
L_00100b94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100b98:;
    {
        cpu->r[14] = 0x00100b9cu; fn_000a587c(cpu);
    }
L_00100b9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100ba0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00100ba4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00100ba8:;
    {
        wr8(cpu->r[4] + + 0x955u, cpu->r[0]);
    }
L_00100bac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00100bb0:;
    {
        cpu->r[14] = 0x00100bb8u;
    }
L_00100bb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00100bb8u)) return;
    }
L_00100bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100bbc:;
    {
        cpu->r[14] = 0x00100bc0u; fn_001007e0(cpu);
    }
L_00100bc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_00100bc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00100bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100cfc;
        }
    }
L_00100bcc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00100bd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100c44;
        }
    }
L_00100bd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00100bd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100bdcu)) return;
        }
    }
L_00100bdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100be0:;
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
L_00100be4:;
    {
        return fn_00114a58(cpu);
    }
L_00100be8:;
    {
        cpu->r[10] = rd32(0x00100bf0u + + 0x258u);
    }
L_00100bec:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00100bf0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00100bf4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00100bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100d08;
        }
    }
L_00100bfc:;
    {
        cpu->r[6] = rd32(0x00100c04u + + 0x248u);
    }
L_00100c00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00100c04:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x58u);
    }
L_00100c08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00030c00u, 0, 0);
    }
L_00100c0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000140u, 0, 0);
    }
L_00100c10:;
    {
        wr32(cpu->r[3] + + 0x58u, cpu->r[2]);
    }
L_00100c14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00100c18:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x5cu);
    }
L_00100c1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00030c00u, 0, 0);
    }
L_00100c20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000140u, 0, 0);
    }
L_00100c24:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_00100c28:;
    {
        cpu->r[14] = 0x00100c2cu; fn_000a2d7c(cpu);
    }
L_00100c2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100c30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00100c34:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00100c38:;
    {
        cpu->r[3] = 0x000082e8u;
    }
L_00100c3c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00100c40:;
    {
        goto L_00100b40;
    }
L_00100c44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100c48:;
    {
        cpu->r[14] = 0x00100c4cu; fn_0010da28(cpu);
    }
L_00100c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00100c50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100c54u)) return;
        }
    }
L_00100c54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00100c58:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_00100c5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00100c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100de8;
        }
    }
L_00100c64:;
    {
        cpu->r[2] = 0x00000665u;
    }
L_00100c68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00100c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100da8;
        }
    }
L_00100c70:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00100c74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00100c78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100c7cu)) return;
        }
    }
L_00100c7c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x954u);
    }
L_00100c80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00100c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100c94;
        }
    }
L_00100c88:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x955u);
    }
L_00100c8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00100c90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100cb8;
        }
    }
L_00100c94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100c98:;
    {
        cpu->r[14] = 0x00001c4cu;
    }
L_00100c9c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x958u);
    }
L_00100ca0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00100ca4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00100ca8:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00100cac:;
    {
        wr32(cpu->r[2] + cpu->r[14], cpu->r[12]);
    }
L_00100cb0:;
    {
        cpu->r[14] = 0x00100cb8u;
    }
L_00100cb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00100cb8u)) return;
    }
L_00100cb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100cbc:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_00100cc0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00100cc4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00100cc8:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00100ccc:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_00100cd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100cd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_00100cd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_00100cdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_00100ce0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_00100ce4:;
    {
        cpu->r[14] = 0x00100ce8u; imp_memcpy(cpu); /* memcpy */
    }
L_00100ce8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100cec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00100cf0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00100cf4:;
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
L_00100cf8:;
    {
        return fn_000f34e8(cpu);
    }
L_00100cfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100d00:;
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
L_00100d04:;
    {
        return fn_000eb59c(cpu);
    }
L_00100d08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00100d0c:;
    {
        cpu->r[14] = 0x00100d10u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00100d10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00100d14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100d90;
        }
    }
L_00100d18:;
    {
        cpu->r[6] = rd32(0x00100d20u + + 0x12cu);
    }
L_00100d1c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00100d20:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00100d24:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00100d28:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x58u);
    }
L_00100d2c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00100d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00030c00u, 0, 0);
    }
L_00100d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000140u, 0, 0);
    }
L_00100d38:;
    {
        wr32(cpu->r[10] + + 0x58u, cpu->r[3]);
    }
L_00100d3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00100d60;
        }
    }
L_00100d40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00100d44:;
    {
        cpu->r[14] = 0x00100d48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00100d48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00100d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00100d60;
        }
    }
L_00100d50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00100d54:;
    {
        cpu->r[14] = 0x00100d58u; fn_00094228(cpu);
    }
L_00100d58:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00100d5c:;
    {
        cpu->r[14] = 0x00100d60u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100d60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100d64:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00100d68:;
    {
        goto L_00100c14;
    }
L_00100d6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100d70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00100d74:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00100d78:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00100d7c:;
    {
        cpu->r[14] = 0x00100d80u; fn_000a2fcc(cpu);
    }
L_00100d80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00100d84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100d88:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00100d8c:;
    {
        goto L_00100b78;
    }
L_00100d90:;
    {
        cpu->r[6] = rd32(0x00100d98u + + 0xb4u);
    }
L_00100d94:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00100d98:;
    {
        cpu->r[14] = 0x00100d9cu; fn_00094228(cpu);
    }
L_00100d9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00100da0:;
    {
        cpu->r[14] = 0x00100da4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00100da4:;
    {
        goto L_00100d1c;
    }
L_00100da8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100dac:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00100db0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100db4:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00100db8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00100dbc:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_00100dc0:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00100dc4:;
    {
        cpu->r[14] = 0x00100dc8u; fn_0018ba6c(cpu);
    }
L_00100dc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00100dcc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00100dd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00100dd4:;
    {
        cpu->r[14] = 0x00100dd8u; fn_001206ac(cpu);
    }
L_00100dd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00100ddc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00100de0:;
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
L_00100de4:;
    {
        return fn_000f361c(cpu);
    }
L_00100de8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100dec:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00100df0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00100df4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00100df8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_00100dfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00100e00:;
    {
        cpu->r[14] = 0x00100e04u; fn_000f35e4(cpu);
    }
L_00100e04:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00100e08:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00100e0c:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00100e10:;
    {
        cpu->r[14] = 0x00100e14u; fn_0018ba6c(cpu);
    }
L_00100e14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00100e18:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00100e1c:;
    {
        cpu->r[14] = 0x00100e20u; fn_000f22d4(cpu);
    }
L_00100e20:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00100e24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00100e28:;
    {
        cpu->r[14] = 0x00100e2cu; fn_000f361c(cpu);
    }
L_00100e2c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00100e30:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00100e34:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00100e38:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00100e3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00100e40u)) return;
    }
}

/* _ZN13GS_CareerMenu8isKindOfEi @ 00100e50 (arm) */
void fn_00100e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100e50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000037u, 1, 1);
    }
L_00100e54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00100e58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00100e5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_CareerMenu17ApplyMenuSettingsEv @ 00100e60 (arm) */
void fn_00100e60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100e60:;
    {
        cpu->r[3] = rd32(0x00100e68u + + 0x54u);
    }
L_00100e64:;
    {
        cpu->r[1] = rd32(0x00100e6cu + + 0x54u);
    }
L_00100e68:;
    {
        cpu->r[3] = add_flags(cpu, 0x00100e70u, cpu->r[3], 0, 0);
    }
L_00100e6c:;
    {
        cpu->r[12] = rd32(0x00100e74u + + 0x50u);
    }
L_00100e70:;
    {
        cpu->r[2] = rd32(0x00100e78u + + 0x50u);
    }
L_00100e74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00100e78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00100e7c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00100e80:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[12]);
    }
L_00100e84:;
    {
        cpu->r[2] = add_flags(cpu, 0x00100e8cu, cpu->r[2], 0, 0);
    }
L_00100e88:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00100e8c:;
    {
        cpu->r[12] = 0x00000401u;
    }
L_00100e90:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00100e94:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00100e98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000320u, 1, 1);
    }
L_00100e9c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_00100ea0:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[12]);
    }
L_00100ea4:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00100ea8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000149u;
        }
    }
L_00100eac:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00100eb0:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00100eb4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
        }
    }
L_00100eb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_15 @ 00100ecc (arm) */
void fn_00100ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100ecc:;
    {
        cpu->r[3] = rd32(0x00100ed4u + + 0x30u);
    }
L_00100ed0:;
    {
        cpu->r[0] = rd32(0x00100ed8u + + 0x30u);
    }
L_00100ed4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00100edcu, cpu->r[3], 0, 0);
    }
L_00100ed8:;
    {
        cpu->r[2] = rd32(0x00100ee0u + + 0x2cu);
    }
L_00100edc:;
    {
        cpu->r[1] = rd32(0x00100ee4u + + 0x2cu);
    }
L_00100ee0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00100ee4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00100eecu, cpu->r[2], 0, 0);
    }
L_00100ee8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00100ef0u, cpu->r[1], 0, 0);
    }
L_00100eec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00100ef0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_00100ef4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00100ef8:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[0]);
    }
L_00100efc:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00100f00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_CareerMenu6RenderEv @ 00100f14 (arm) */
void fn_00100f14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100f14:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00100f18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00100f1c:;
    {
        cpu->r[14] = 0x00100f20u; fn_00114138(cpu);
    }
L_00100f20:;
    {
        cpu->r[3] = rd32(0x00100f28u + + 0x18u);
    }
L_00100f24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100f28:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00100f2c:;
    {
        cpu->r[2] = rd32(0x00100f34u + cpu->r[3]);
    }
L_00100f30:;
    {
        cpu->r[14] = 0x00100f34u; fn_001141ec(cpu);
    }
L_00100f34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00100f38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00100f3c:;
    {
        return fn_0010e054(cpu);
    }
}

/* _ZN13GS_CareerMenu6UpdateEv @ 00100f44 (arm) */
void fn_00100f44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00100f44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00100f48:;
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
L_00100f4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00100f50:;
    {
        cpu->r[5] = rd32(0x00100f58u + + 0x2e4u);
    }
L_00100f54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00100f58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00100f5c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00100f64u, cpu->r[5], 0, 0);
    }
L_00100f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101138;
        }
    }
L_00100f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00100f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001010a8;
        }
    }
L_00100f6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00100f70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001010a0;
        }
    }
L_00100f74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00100f78:;
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
L_00100f7c:;
    {
        return fn_00114a58(cpu);
    }
L_00100f80:;
    {
        cpu->r[3] = 0x0000053du;
    }
L_00100f84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00100f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101148;
        }
    }
L_00100f8c:;
    {
        cpu->r[3] = 0x000005bau;
    }
L_00100f90:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00100f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001011e0;
        }
    }
L_00100f98:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_00100f9c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00100fa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001010a0;
        }
    }
L_00100fa4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0xcu);
    }
L_00100fa8:;
    {
        cpu->r[4] = 0x00001c50u;
    }
L_00100fac:;
    {
        cpu->r[7] = rd32(0x00100fb4u + + 0x28cu);
    }
L_00100fb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00100fb4:;
    {
        cpu->r[14] = 0x00100fb8u; fn_00096c6c(cpu);
    }
L_00100fb8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00100fbc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00100fc0:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_00100fc4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x438u);
    }
L_00100fc8:;
    {
        wr32(cpu->r[8] + cpu->r[4], cpu->r[0]);
    }
L_00100fcc:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_00100fd0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00100fd4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00100fd8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00100fdc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[8] = v;
    }
L_00100fe0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_00100fe4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x34u);
    }
L_00100fe8:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_00100fec:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_00100ff0:;
    {
        cpu->r[14] = 0x00100ff4u; fn_000a21a4(cpu);
    }
L_00100ff4:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_00100ff8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00100ffc:;
    {
        cpu->r[14] = 0x00001c98u;
    }
L_00101000:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x438u);
    }
L_00101004:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_00101008:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0010100c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00101010:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00101014:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00101018:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0010101c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x6cu);
    }
L_00101020:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[2]);
    }
L_00101024:;
    {
        cpu->r[14] = 0x00001be0u;
    }
L_00101028:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010102c:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[12]);
    }
L_00101030:;
    {
        cpu->r[14] = 0x00101034u; fn_00097724(cpu);
    }
L_00101034:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00101038:;
    {
        cpu->r[14] = 0x0010103cu; fn_000979a0(cpu);
    }
L_0010103c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00101040:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00101044:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00101048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010104c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001b8u, 0, 0);
    }
L_00101050:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x4u);
    }
L_00101054:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00101058:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00101214;
        }
    }
L_0010105c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00101060:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101064:;
    {
        cpu->r[14] = 0x00101068u; fn_000f35e4(cpu);
    }
L_00101068:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010106c:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00101070:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00101074:;
    {
        cpu->r[14] = 0x00101078u; fn_0018ba6c(cpu);
    }
L_00101078:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010107c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00101080:;
    {
        cpu->r[14] = 0x00101084u; fn_000f22d4(cpu);
    }
L_00101084:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00101088:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010108c:;
    {
        cpu->r[14] = 0x00101090u; fn_000f361c(cpu);
    }
L_00101090:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00101094:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00101098:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010109c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001010a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001010a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001010a8u)) return;
    }
L_001010a8:;
    {
        cpu->r[14] = 0x001010acu; fn_0010da28(cpu);
    }
L_001010ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001010b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001010a0;
        }
    }
L_001010b4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0xc4u);
    }
L_001010b8:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_001010bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001010c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001011c4;
        }
    }
L_001010c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00100f80;
        }
    }
L_001010c8:;
    {
        cpu->r[3] = 0x000004b5u;
    }
L_001010cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001010d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101180;
        }
    }
L_001010d4:;
    {
        cpu->r[3] = 0x000004b6u;
    }
L_001010d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001010dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001010a0;
        }
    }
L_001010e0:;
    {
        cpu->r[3] = rd32(0x001010e8u + + 0x158u);
    }
L_001010e4:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_001010e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001010ec:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001010f0:;
    {
        cpu->r[14] = 0x001010f4u; fn_0018ba6c(cpu);
    }
L_001010f4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001010f8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001010fc:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00101100:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00101104:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_00101108:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0010110c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00101110:;
    {
        cpu->r[4] = 0x000004bau;
    }
L_00101114:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00101118:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0010111c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00101120:;
    {
        cpu->r[14] = 0x00101124u; fn_001239a4(cpu);
    }
L_00101124:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00101128:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010112c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00101130:;
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
L_00101134:;
    {
        return fn_000f361c(cpu);
    }
L_00101138:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0010113c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00101140:;
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
L_00101144:;
    {
        return fn_000eb59c(cpu);
    }
L_00101148:;
    {
        cpu->r[3] = rd32(0x00101150u + + 0xf0u);
    }
L_0010114c:;
    {
        cpu->r[0] = 0x00000e50u;
    }
L_00101150:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00101154:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00101158:;
    {
        cpu->r[14] = 0x0010115cu; fn_0018ba6c(cpu);
    }
L_0010115c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101160:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00101164:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101168:;
    {
        cpu->r[14] = 0x0010116cu; fn_001266e0(cpu);
    }
L_0010116c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00101170:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00101174:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00101178:;
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
L_0010117c:;
    {
        return fn_000f361c(cpu);
    }
L_00101180:;
    {
        cpu->r[3] = rd32(0x00101188u + + 0xb8u);
    }
L_00101184:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_00101188:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010118c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00101190:;
    {
        cpu->r[14] = 0x00101194u; fn_0018ba6c(cpu);
    }
L_00101194:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00101198:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010119c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001011a0:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_001011a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001011a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001011ac:;
    {
        cpu->r[14] = 0x001011b0u; fn_00101900(cpu);
    }
L_001011b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001011b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001011b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001011bc:;
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
L_001011c0:;
    {
        return fn_000f361c(cpu);
    }
L_001011c4:;
    {
        cpu->r[3] = rd32(0x001011ccu + + 0x74u);
    }
L_001011c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001011cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001011d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001011d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001011d8:;
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
L_001011dc:;
    {
        return fn_000f34e8(cpu);
    }
L_001011e0:;
    {
        cpu->r[3] = rd32(0x001011e8u + + 0x58u);
    }
L_001011e4:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001011e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001011ec:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001011f0:;
    {
        cpu->r[14] = 0x001011f4u; fn_0018ba6c(cpu);
    }
L_001011f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001011f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001011fc:;
    {
        cpu->r[14] = 0x00101200u; fn_0010aafc(cpu);
    }
L_00101200:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00101204:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00101208:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010120c:;
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
L_00101210:;
    {
        return fn_000f361c(cpu);
    }
L_00101214:;
    {
        cpu->r[14] = 0x00101218u; fn_000979a0(cpu);
    }
L_00101218:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010121c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00101220:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00101224:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00101228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001b8u, 0, 0);
    }
L_0010122c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x4u);
    }
L_00101230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00101234:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00101238:;
    {
        goto L_0010105c;
    }
}

/* _ZN13GS_CareerMenu8DoActionEii @ 00101244 (arm) */
void fn_00101244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101244:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00101248:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010124c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00101250:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00101254:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101264;
        }
    }
L_0010125c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00101260:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101264u)) return;
    }
L_00101264:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00101268:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010126c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001012f0;
        }
    }
L_00101270:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00101274:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00101278:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_0010127c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00101280:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_00101284:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00101288:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_0010128c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_00101290:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_00101294:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00101298:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_0010129c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010125c;
        }
    }
L_001012a0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001012a4:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_001012a8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001012ac:;
    {
        cpu->r[14] = 0x001012b0u; fn_00093f34(cpu);
    }
L_001012b0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001012b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001012b8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001012bc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001012c0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001012c4:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001012c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101300;
        }
    }
L_001012cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001012d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001012d4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001012d8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001012dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001012e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001012e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001012e8:;
    {
        cpu->r[14] = 0x001012ecu; fn_000fd248(cpu);
    }
L_001012ec:;
    {
        goto L_0010125c;
    }
L_001012f0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001012f4:;
    {
        cpu->r[14] = 0x001012fcu;
    }
L_001012f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001012fcu)) return;
    }
L_001012fc:;
    {
        goto L_0010125c;
    }
L_00101300:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00101304:;
    {
        cpu->r[14] = 0x00101308u; fn_00093f34(cpu);
    }
L_00101308:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010130c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00101310:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00101314:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00101318:;
    {
        goto L_001012cc;
    }
}

/* _ZN13GS_CareerMenu11DoBarActionEii @ 0010131c (arm) */
void fn_0010131c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010131c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00101320:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00101324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00101328:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010132c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001013c4;
        }
    }
L_00101334:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00101338:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0010133c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00101340:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00101344:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00101348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0010134c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00101350:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00101354:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00101358:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010135c:;
    {
        cpu->r[14] = 0x00101360u; fn_00093f34(cpu);
    }
L_00101360:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00101364:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00101368:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010136c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00101370:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00101374:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00101378:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0010137c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00101380:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00101384:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101388:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010138c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00101390:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00101394:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00101398:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010139c:;
    {
        cpu->r[14] = 0x001013a0u; fn_000fd248(cpu);
    }
L_001013a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001013a4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001013a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001013ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001013e4;
        }
    }
L_001013b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001013cc;
        }
    }
L_001013b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000004b0u, 1, 0);
    }
L_001013b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 0);
    }
L_001013bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001013c0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001013e4;
        }
    }
L_001013c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001013c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001013ccu)) return;
    }
L_001013cc:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_001013d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001013d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001013e4;
        }
    }
L_001013d8:;
    {
        cpu->r[2] = 0x000005bau;
    }
L_001013dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001013e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001013c4;
        }
    }
L_001013e4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001013e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001013ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001013c4;
        }
    }
L_001013f0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001013f4:;
    {
        cpu->r[14] = 0x001013f8u; fn_00093f34(cpu);
    }
L_001013f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001013fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00101400:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00101404:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00101408:;
    {
        goto L_001013c4;
    }
}

/* _ZN13GS_CareerMenuD1Ev @ 0010140c (arm) */
void fn_0010140c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010140c:;
    {
        cpu->r[3] = rd32(0x00101414u + + 0x2cu);
    }
L_00101410:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00101414:;
    {
        cpu->r[2] = rd32(0x0010141cu + + 0x28u);
    }
L_00101418:;
    {
        cpu->r[3] = add_flags(cpu, 0x00101420u, cpu->r[3], 0, 0);
    }
L_0010141c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00101420:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00101424:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00101428:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010142c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00101430:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00101434:;
    {
        cpu->r[14] = 0x00101438u; fn_000ec21c(cpu);
    }
L_00101438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010143c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101440u)) return;
    }
}

/* _ZN13GS_CareerMenuD0Ev @ 00101448 (arm) */
void fn_00101448(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101448:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010144c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101450:;
    {
        cpu->r[14] = 0x00101454u; fn_0010140c(cpu);
    }
L_00101454:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101458:;
    {
        cpu->r[14] = 0x0010145cu; fn_0018ba20(cpu);
    }
L_0010145c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101460:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101464u)) return;
    }
}

/* _ZN13GS_CareerMenuD2Ev @ 00101464 (arm) */
void fn_00101464(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101464:;
    {
        cpu->r[3] = rd32(0x0010146cu + + 0x2cu);
    }
L_00101468:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010146c:;
    {
        cpu->r[2] = rd32(0x00101474u + + 0x28u);
    }
L_00101470:;
    {
        cpu->r[3] = add_flags(cpu, 0x00101478u, cpu->r[3], 0, 0);
    }
L_00101474:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00101478:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010147c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00101480:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00101488:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010148c:;
    {
        cpu->r[14] = 0x00101490u; fn_000ec21c(cpu);
    }
L_00101490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101494:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101498u)) return;
    }
}

/* _ZN13GS_CareerMenuC1Eb @ 001014a0 (arm) */
void fn_001014a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001014a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001014a4:;
    {
        cpu->r[4] = rd32(0x001014acu + + 0x20u);
    }
L_001014a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001014ac:;
    {
        cpu->r[14] = 0x001014b0u; fn_001100c0(cpu);
    }
L_001014b0:;
    {
        cpu->r[3] = rd32(0x001014b8u + + 0x18u);
    }
L_001014b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001014bcu, cpu->r[4], 0, 0);
    }
L_001014b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001014bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001014c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001014c4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001014c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001014ccu)) return;
    }
}

/* _ZN13GS_CareerMenuC2Eb @ 001014d4 (arm) */
void fn_001014d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001014d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001014d8:;
    {
        cpu->r[4] = rd32(0x001014e0u + + 0x20u);
    }
L_001014dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001014e0:;
    {
        cpu->r[14] = 0x001014e4u; fn_001100c0(cpu);
    }
L_001014e4:;
    {
        cpu->r[3] = rd32(0x001014ecu + + 0x18u);
    }
L_001014e8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001014f0u, cpu->r[4], 0, 0);
    }
L_001014ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001014f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001014f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001014f8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001014fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00101500u)) return;
    }
}

/* _ZN16GS_CarGarageMenu8isKindOfEi @ 00101508 (arm) */
void fn_00101508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101508:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000015u, 1, 1);
    }
L_0010150c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00101510:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00101514:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_16 @ 00101518 (arm) */
void fn_00101518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101518:;
    {
        cpu->r[2] = rd32(0x00101520u + + 0x34u);
    }
L_0010151c:;
    {
        cpu->r[0] = rd32(0x00101524u + + 0x34u);
    }
L_00101520:;
    {
        cpu->r[2] = add_flags(cpu, 0x00101528u, cpu->r[2], 0, 0);
    }
L_00101524:;
    {
        cpu->r[1] = rd32(0x0010152cu + + 0x30u);
    }
L_00101528:;
    {
        cpu->r[3] = rd32(0x00101530u + + 0x30u);
    }
L_0010152c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00101530:;
    {
        cpu->r[1] = add_flags(cpu, 0x00101538u, cpu->r[1], 0, 0);
    }
L_00101534:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010153cu, cpu->r[3], 0, 0);
    }
L_00101538:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010153c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_00101540:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_00101544:;
    {
        wr32(cpu->r[3] + + 0x88u, cpu->r[0]);
    }
L_00101548:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[0]);
    }
L_0010154c:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00101550:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_CarGarageMenuD1Ev @ 00101564 (arm) */
void fn_00101564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101564:;
    {
        cpu->r[3] = rd32(0x0010156cu + + 0x24u);
    }
L_00101568:;
    {
        cpu->r[2] = rd32(0x00101570u + + 0x24u);
    }
L_0010156c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00101574u, cpu->r[3], 0, 0);
    }
L_00101570:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00101574:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00101578:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010157c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00101580:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00101584:;
    {
        cpu->r[14] = 0x00101588u; fn_000ec21c(cpu);
    }
L_00101588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010158c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101590u)) return;
    }
}
