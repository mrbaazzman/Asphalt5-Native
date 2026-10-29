#include "functions.h"

/* _ZN14CAndroidSocket14SetNonBlockingEv @ 001d1ed4 (arm) */
void fn_001d1ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1ed4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d1ed8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001d1edc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1ee0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d1ee4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d1ee8:;
    {
        cpu->r[14] = 0x001d1eecu; imp_fcntl(cpu); /* fcntl */
    }
L_001d1eec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1ef0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1f50;
        }
    }
L_001d1ef4:;
    {
        uint32_t v = cpu->r[0] | 0x00000800u; cpu->r[2] = v;
    }
L_001d1ef8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001d1efc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d1f00:;
    {
        cpu->r[14] = 0x001d1f04u; imp_fcntl(cpu); /* fcntl */
    }
L_001d1f04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1f08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d1f0c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f10u)) return;
        }
    }
L_001d1f10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d1f14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1f18:;
    {
        cpu->r[14] = 0x001d1f20u;
    }
L_001d1f1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f20u)) return;
    }
L_001d1f20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1f24:;
    {
        cpu->r[0] = rd32(0x001d1f2cu + + 0x5cu);
    }
L_001d1f28:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1f30u, cpu->r[0], 0, 0);
    }
L_001d1f2c:;
    {
        cpu->r[14] = 0x001d1f30u; fn_001d0ac4(cpu);
    }
L_001d1f30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d1f34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1f38:;
    {
        cpu->r[14] = 0x001d1f40u;
    }
L_001d1f3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f40u)) return;
    }
L_001d1f40:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1f44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1f48:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d1f4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f50u)) return;
    }
L_001d1f50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d1f54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1f58:;
    {
        cpu->r[14] = 0x001d1f60u;
    }
L_001d1f5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f60u)) return;
    }
L_001d1f60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1f64:;
    {
        cpu->r[0] = rd32(0x001d1f6cu + + 0x20u);
    }
L_001d1f68:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1f70u, cpu->r[0], 0, 0);
    }
L_001d1f6c:;
    {
        cpu->r[14] = 0x001d1f70u; fn_001d0ac4(cpu);
    }
L_001d1f70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1f74:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d1f78:;
    {
        cpu->r[14] = 0x001d1f80u;
    }
L_001d1f7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f80u)) return;
    }
L_001d1f80:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1f84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1f88u)) return;
    }
}

/* _ZN14CAndroidSocket12GetLastErrorEv @ 001d1f90 (arm) */
void fn_001d1f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1f90:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d1f94:;
    {
        cpu->r[14] = 0x001d1f98u; imp___errno(cpu); /* __errno */
    }
L_001d1f98:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d1f9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1fa0u)) return;
    }
}

/* _Z26threadGetHostByNameProcessPv @ 001d1fa0 (arm) */
void fn_001d1fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1fa0:;
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
L_001d1fa4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d1fa8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d1fac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d1fb0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000004u;
        cpu->r[3] = rd32(cpu->r[5]);
        cpu->r[5] = wb_tmp;
    }
L_001d1fb4:;
    {
        cpu->r[4] = rd32(0x001d1fbcu + + 0xd8u);
    }
L_001d1fb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1fbc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d1fc0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1fc8u, cpu->r[4], 0, 0);
    }
L_001d1fc4:;
    {
        cpu->r[14] = 0x001d1fc8u; imp_gethostbyname(cpu); /* gethostbyname */
    }
L_001d1fc8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1fcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1fd0u)) return;
        }
    }
L_001d1fd0:;
    {
        cpu->r[3] = rd32(0x001d1fd8u + + 0xc0u);
    }
L_001d1fd4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d1fd8:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_001d1fdc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_001d1fe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d1ff4;
        }
    }
L_001d1fe4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001d1fe8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d1fec:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d1ff0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1ff4u)) return;
    }
L_001d1ff4:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001d1ff8:;
    {
        cpu->r[14] = 0x001d1ffcu; fn_0018ba6c(cpu);
    }
L_001d1ffc:;
    {
        cpu->r[12] = rd32(0x001d2004u + + 0x98u);
    }
L_001d2000:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d2004:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d2008:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001d200c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001d2010:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001d2014:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d2018:;
    {
        cpu->r[14] = 0x001d201cu; fn_001d0700(cpu);
    }
L_001d201c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001d2020:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_001d2024:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d2028:;
    {
        cpu->r[8] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001d202c:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[3]);
    }
L_001d2030:;
    {
        cpu->r[14] = 0x001d2034u; fn_001d0ce8(cpu);
    }
L_001d2034:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d2038:;
    {
        cpu->r[9] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d203c:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001d2040:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d2044:;
    {
        cpu->r[14] = 0x001d2048u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d2048:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d204c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d2050:;
    {
        wr32(cpu->r[9] + + 0x10u, cpu->r[0]);
    }
L_001d2054:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x10u);
    }
L_001d2058:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x10u);
    }
L_001d205c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001d2060:;
    {
        cpu->r[14] = 0x001d2064u; fn_001d0ce8(cpu);
    }
L_001d2064:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d2068:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d206c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d2070:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001d2074:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001d2078:;
    {
        cpu->r[0] = rd32(0x001d2080u + + 0x20u);
    }
L_001d207c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2084u, cpu->r[0], 0, 0);
    }
L_001d2080:;
    {
        cpu->r[14] = 0x001d2084u; fn_001d0ac4(cpu);
    }
L_001d2084:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001d2088:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d208c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d2090:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2094u)) return;
    }
}

/* _ZN14CAndroidSocket9GetHostIPEPc @ 001d20a4 (arm) */
void fn_001d20a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d20a4:;
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
L_001d20a8:;
    {
        cpu->r[4] = rd32(0x001d20b0u + + 0x13cu);
    }
L_001d20ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d20b0:;
    {
        cpu->r[8] = rd32(0x001d20b8u + + 0x138u);
    }
L_001d20b4:;
    {
        cpu->r[0] = rd32(0x001d20bcu + + 0x138u);
    }
L_001d20b8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d20c0u, cpu->r[4], 0, 0);
    }
L_001d20bc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d20c4u, cpu->r[0], 0, 0);
    }
L_001d20c0:;
    {
        cpu->r[14] = 0x001d20c4u; fn_001d0ac4(cpu);
    }
L_001d20c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001d20c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d20cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d20d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d2128;
        }
    }
L_001d20d4:;
    {
        cpu->r[3] = rd32(0x001d20dcu + + 0x11cu);
    }
L_001d20d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d20dc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d20e0:;
    {
        goto L_001d20f8;
    }
L_001d20e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001d20e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001d20ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d20f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001d20f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d2128;
        }
    }
L_001d20f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d20fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d2100:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d2104:;
    {
        cpu->r[14] = 0x001d2108u; fn_001d06e8(cpu);
    }
L_001d2108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d210c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d20e4;
        }
    }
L_001d2110:;
    {
        cpu->r[0] = rd32(0x001d2118u + + 0xe4u);
    }
L_001d2114:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d2118:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2120u, cpu->r[0], 0, 0);
    }
L_001d211c:;
    {
        cpu->r[14] = 0x001d2120u; fn_001d0ac4(cpu);
    }
L_001d2120:;
    {
        cpu->r[0] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d2124:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2128u)) return;
    }
L_001d2128:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d212c:;
    {
        cpu->r[14] = 0x001d2130u; imp_gethostbyname(cpu); /* gethostbyname */
    }
L_001d2130:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2134:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_001d2138:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d213cu)) return;
        }
    }
L_001d213c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001d2140:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_001d2144:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_001d2148:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d2154;
        }
    }
L_001d214c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d2150:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2154u)) return;
    }
L_001d2154:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001d2158:;
    {
        cpu->r[14] = 0x001d215cu; fn_0018ba6c(cpu);
    }
L_001d215c:;
    {
        cpu->r[12] = rd32(0x001d2164u + + 0x94u);
    }
L_001d2160:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d2164:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d2168:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001d216c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001d2170:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001d2174:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d2178:;
    {
        cpu->r[14] = 0x001d217cu; fn_001d0700(cpu);
    }
L_001d217c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001d2180:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001d2184:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d2188:;
    {
        cpu->r[8] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001d218c:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[3]);
    }
L_001d2190:;
    {
        cpu->r[14] = 0x001d2194u; fn_001d0ce8(cpu);
    }
L_001d2194:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d2198:;
    {
        cpu->r[10] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d219c:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001d21a0:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d21a4:;
    {
        cpu->r[14] = 0x001d21a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d21a8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d21ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d21b0:;
    {
        wr32(cpu->r[10] + + 0x10u, cpu->r[0]);
    }
L_001d21b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001d21b8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x10u);
    }
L_001d21bc:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001d21c0:;
    {
        cpu->r[14] = 0x001d21c4u; fn_001d0ce8(cpu);
    }
L_001d21c4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d21c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d21cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d21d0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001d21d4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001d21d8:;
    {
        cpu->r[0] = rd32(0x001d21e0u + + 0x20u);
    }
L_001d21dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d21e4u, cpu->r[0], 0, 0);
    }
L_001d21e0:;
    {
        cpu->r[14] = 0x001d21e4u; fn_001d0ac4(cpu);
    }
L_001d21e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d21e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d21ecu)) return;
    }
}

/* _ZN14CAndroidSocket13GetHostByNameEPc @ 001d2204 (arm) */
void fn_001d2204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2204:;
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
L_001d2208:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d220c:;
    {
        cpu->r[4] = rd32(0x001d2214u + + 0xf4u);
    }
L_001d2210:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d2214:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d221cu, cpu->r[4], 0, 0);
    }
L_001d2218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2294;
        }
    }
L_001d221c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d2220:;
    {
        cpu->r[14] = 0x001d2224u; fn_001d0434(cpu);
    }
L_001d2224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000400u, 1, 1);
    }
L_001d2228:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d2294;
        }
    }
L_001d222c:;
    {
        cpu->r[10] = rd32(0x001d2234u + + 0xd8u);
    }
L_001d2230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001d2234:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d223c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d2288;
        }
    }
L_001d2240:;
    {
        cpu->r[3] = rd32(0x001d2248u + + 0xc8u);
    }
L_001d2244:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d2248:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d224c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d2250:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d2254:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d2258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2274;
        }
    }
L_001d225c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2260:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d2264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2274;
        }
    }
L_001d2268:;
    {
        cpu->r[14] = 0x001d226cu; fn_001d06e8(cpu);
    }
L_001d226c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d229c;
        }
    }
L_001d2274:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001d2278:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001d227c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2280:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001d2284:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d224c;
        }
    }
L_001d2288:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x85cu);
    }
L_001d228c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d2290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d22b4;
        }
    }
L_001d2294:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d2298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d229cu)) return;
    }
L_001d229c:;
    {
        cpu->r[0] = rd32(0x001d22a4u + + 0x70u);
    }
L_001d22a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d22a4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d22acu, cpu->r[0], 0, 0);
    }
L_001d22a8:;
    {
        cpu->r[14] = 0x001d22acu; fn_001d0ac4(cpu);
    }
L_001d22ac:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d22b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d22b4u)) return;
    }
L_001d22b4:;
    {
        cpu->r[14] = 0x001d22b8u; fn_001d05bc(cpu);
    }
L_001d22b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000850u, 0, 0);
    }
L_001d22bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001d22c0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d22c4:;
    {
        wr32(cpu->r[5] + + 0x8ecu, cpu->r[3]);
    }
L_001d22c8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001d22cc:;
    {
        wr32(cpu->r[5] + + 0x864u, cpu->r[0]);
    }
L_001d22d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000008f0u, 0, 0);
    }
L_001d22d4:;
    {
        cpu->r[14] = 0x001d22d8u; imp_strlcpy(cpu); /* strlcpy */
    }
L_001d22d8:;
    {
        cpu->r[2] = rd32(0x001d22e0u + + 0x38u);
    }
L_001d22dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000008e0u, 0, 0);
    }
L_001d22e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d22e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001d22e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001d22ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001d22f0:;
    {
        cpu->r[14] = 0x001d22f4u; imp_pthread_create(cpu); /* pthread_create */
    }
L_001d22f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d22f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001d22fc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x85cu, cpu->r[3]);
        }
    }
L_001d2300:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d2294;
        }
    }
L_001d2304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2308u)) return;
    }
}

/* _ZN14CAndroidSocket9TransToIpERPc @ 001d231c (arm) */
void fn_001d231c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d231c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d2320:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d2324:;
    {
        cpu->r[0] = rd32(0x001d232cu + + 0x48u);
    }
L_001d2328:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2330u, cpu->r[0], 0, 0);
    }
L_001d232c:;
    {
        cpu->r[14] = 0x001d2330u; fn_001d0ac4(cpu);
    }
L_001d2330:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001d2334:;
    {
        cpu->r[14] = 0x001d2338u; fn_001d20a4(cpu);
    }
L_001d2338:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d233c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001d2340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2354;
        }
    }
L_001d2348:;
    {
        cpu->r[14] = 0x001d234cu; fn_0018ba20(cpu);
    }
L_001d234c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d2350:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001d2354:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d2358:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d235cu)) return;
        }
    }
L_001d235c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001d2360:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2364:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2368:;
    {
        cpu->r[14] = 0x001d236cu; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001d236c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001d2370:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2374u)) return;
    }
}

/* _ZN14CAndroidSocket7ClearupEv @ 001d2378 (arm) */
void fn_001d2378(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2378:;
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
L_001d237c:;
    {
        cpu->r[6] = rd32(0x001d2384u + + 0xc8u);
    }
L_001d2380:;
    {
        cpu->r[9] = rd32(0x001d2388u + + 0xc8u);
    }
L_001d2384:;
    {
        cpu->r[0] = rd32(0x001d238cu + + 0xc8u);
    }
L_001d2388:;
    {
        cpu->r[6] = add_flags(cpu, 0x001d2390u, cpu->r[6], 0, 0);
    }
L_001d238c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2394u, cpu->r[0], 0, 0);
    }
L_001d2390:;
    {
        cpu->r[14] = 0x001d2394u; fn_001d0ac4(cpu);
    }
L_001d2394:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001d2398:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d239c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d23a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d243c;
        }
    }
L_001d23a4:;
    {
        cpu->r[7] = rd32(0x001d23acu + + 0xacu);
    }
L_001d23a8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d23ac:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001d23b0:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001d23b4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001d23b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001d23bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001d23c0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d23c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d23c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d23d8;
        }
    }
L_001d23cc:;
    {
        cpu->r[14] = 0x001d23d0u; fn_0018ba20(cpu);
    }
L_001d23d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001d23d4:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001d23d8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d23dc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d23e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d23e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d23fc;
        }
    }
L_001d23e8:;
    {
        cpu->r[14] = 0x001d23ecu; fn_0018ba20(cpu);
    }
L_001d23ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001d23f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d23f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d23f8:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001d23fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d2400:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001d2404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2418;
        }
    }
L_001d2408:;
    {
        cpu->r[14] = 0x001d240cu; fn_0018ba20(cpu);
    }
L_001d240c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001d2410:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d2414:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[4]);
    }
L_001d2418:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d241c:;
    {
        cpu->r[14] = 0x001d2420u; fn_0018ba20(cpu);
    }
L_001d2420:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001d2424:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001d2428:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d242c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_001d2430:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001d2434:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001d2438:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d23b8;
        }
    }
L_001d243c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001d2440:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d2444:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d2448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d244cu)) return;
    }
}

/* _ZN14CAndroidSocket10GetLocalIPEPc @ 001d245c (arm) */
void fn_001d245c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d245c:;
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
L_001d2460:;
    {
        cpu->r[7] = rd32(0x001d2468u + + 0x144u);
    }
L_001d2464:;
    {
        cpu->r[9] = rd32(0x001d246cu + + 0x144u);
    }
L_001d2468:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000fb0u, 1, 0);
    }
L_001d246c:;
    {
        cpu->r[7] = add_flags(cpu, 0x001d2474u, cpu->r[7], 0, 0);
    }
L_001d2470:;
    {
        cpu->r[0] = rd32(0x001d2478u + + 0x13cu);
    }
L_001d2474:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001d2478:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001d247c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001d2480:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2488u, cpu->r[0], 0, 0);
    }
L_001d2484:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d2488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001d248c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001d2490:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2494:;
    {
        wr32(cpu->r[13] + + 0xfb4u, cpu->r[3]);
    }
L_001d2498:;
    {
        cpu->r[14] = 0x001d249cu; fn_001d0ac4(cpu);
    }
L_001d249c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001d24a0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d24a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d24a8:;
    {
        cpu->r[3] = 0x00000fa0u;
    }
L_001d24ac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001d24b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d24b4:;
    {
        cpu->r[14] = 0x001d24b8u; imp_socket(cpu); /* socket */
    }
L_001d24b8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001d24bc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001d24c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d25a0;
        }
    }
L_001d24c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d24c8:;
    {
        cpu->r[1] = 0x00008912u;
    }
L_001d24cc:;
    {
        cpu->r[14] = 0x001d24d0u; imp_ioctl(cpu); /* ioctl */
    }
L_001d24d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_001d24d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d25a0;
        }
    }
L_001d24d8:;
    {
        cpu->r[3] = rd32(0x001d24e0u + + 0xd8u);
    }
L_001d24dc:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001d24e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d24e8u, cpu->r[3], 0, 0);
    }
L_001d24e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d24e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d24ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d24f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d24f4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001d2574;
        }
    }
L_001d24f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001d24fc:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001d2500:;
    {
        cpu->r[14] = 0x001d2504u; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001d2504:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001d2508:;
    {
        cpu->r[3] = rd16(cpu->r[4] + - 0x10u);
    }
L_001d250c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001d2510:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d2514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d24e8;
        }
    }
L_001d2518:;
    {
        cpu->r[1] = 0x0000003au;
    }
L_001d251c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d2520:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d2524:;
    {
        cpu->r[14] = 0x001d2528u; fn_001cfbac(cpu);
    }
L_001d2528:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001d252c:;
    {
        cpu->r[1] = 0x00008913u;
    }
L_001d2530:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2534:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[11];
        }
    }
L_001d2538:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[3]);
        }
    }
L_001d253c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d2540:;
    {
        cpu->r[14] = 0x001d2544u; imp_ioctl(cpu); /* ioctl */
    }
L_001d2544:;
    {
        cpu->r[3] = rd16(cpu->r[4] + - 0x10u);
    }
L_001d2548:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001d254c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d24e8;
        }
    }
L_001d2550:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d2554:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d2558:;
    {
        cpu->r[14] = 0x001d255cu; fn_001d06e8(cpu);
    }
L_001d255c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d24e8;
        }
    }
L_001d2564:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d2568:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001d256c:;
    {
        cpu->r[14] = 0x001d2570u; fn_001d06dc(cpu);
    }
L_001d2570:;
    {
        goto L_001d24e8;
    }
L_001d2574:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d2578:;
    {
        cpu->r[14] = 0x001d257cu; imp_close(cpu); /* close */
    }
L_001d257c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d2580:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001d2584:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xfb4u);
    }
L_001d2588:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d258c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d2590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d25a8;
        }
    }
L_001d2594:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000003bcu, 0, 0);
    }
L_001d2598:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000c00u, 0, 0);
    }
L_001d259c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d25a0u)) return;
    }
L_001d25a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d25a4:;
    {
        goto L_001d2580;
    }
L_001d25a8:;
    {
        cpu->r[14] = 0x001d25acu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d25ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 31u, &shc); cpu->r[7] = v;
        }
    }
L_001d25b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d25b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[0]);
        wr16(cpu->r[5], 0x001d25bcu);
        cpu->r[5] = wb_tmp;
        }
    }
L_001d25b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 1, 5u, &shc); cpu->r[13] = v;
        }
    }
}

/* _ZN14CAndroidSocket7StartupEv @ 001d25bc (arm) */
void fn_001d25bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d25bc:;
    {
        cpu->r[0] = rd32(0x001d25c4u + + 0x54u);
    }
L_001d25c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d25c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d25ccu, cpu->r[0], 0, 0);
    }
L_001d25c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d25cc:;
    {
        cpu->r[4] = rd32(0x001d25d4u + + 0x48u);
    }
L_001d25d0:;
    {
        cpu->r[14] = 0x001d25d4u; fn_001d0ac4(cpu);
    }
L_001d25d4:;
    {
        cpu->r[2] = rd32(0x001d25dcu + + 0x44u);
    }
L_001d25d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d25e0u, cpu->r[4], 0, 0);
    }
L_001d25dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d25e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d25e4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d25e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001d25ec:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d25f0:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x10u;
        wr32(cpu->r[1] + - 0x10u, cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_001d25f4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001d25f8:;
    {
        cpu->r[0] = 0x0000000du;
    }
L_001d25fc:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[3]);
    }
L_001d2600:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_001d2604:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001d2608:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
    }
L_001d260c:;
    {
        cpu->r[14] = 0x001d2610u; imp_sigaction(cpu); /* sigaction */
    }
L_001d2610:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d2614:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2618u)) return;
    }
}

/* _ZN14CAndroidSocketD1Ev @ 001d2624 (arm) */
void fn_001d2624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2624:;
    {
        cpu->r[3] = rd32(0x001d262cu + + 0x48u);
    }
L_001d2628:;
    {
        cpu->r[2] = rd32(0x001d2630u + + 0x48u);
    }
L_001d262c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2634u, cpu->r[3], 0, 0);
    }
L_001d2630:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x85cu);
    }
L_001d2634:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d2638:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d263c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d2640:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d2644:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d2648:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d264c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d265c;
        }
    }
L_001d2650:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001d2654:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d2658:;
    {
        cpu->r[14] = 0x001d265cu; imp_pthread_join(cpu); /* pthread_join */
    }
L_001d265c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d2660:;
    {
        cpu->r[14] = 0x001d2664u; fn_001d171c(cpu);
    }
L_001d2664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d2668:;
    {
        cpu->r[14] = 0x001d266cu; fn_001b4c50(cpu);
    }
L_001d266c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d2670:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2674u)) return;
    }
}

/* _ZN14CAndroidSocketD0Ev @ 001d267c (arm) */
void fn_001d267c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d267c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d2680:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d2684:;
    {
        cpu->r[14] = 0x001d2688u; fn_001d2624(cpu);
    }
L_001d2688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d268c:;
    {
        cpu->r[14] = 0x001d2690u; fn_0018ba20(cpu);
    }
L_001d2690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d2694:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2698u)) return;
    }
}

/* _ZN14CAndroidSocketD2Ev @ 001d2698 (arm) */
void fn_001d2698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2698:;
    {
        cpu->r[3] = rd32(0x001d26a0u + + 0x48u);
    }
L_001d269c:;
    {
        cpu->r[2] = rd32(0x001d26a4u + + 0x48u);
    }
L_001d26a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d26a8u, cpu->r[3], 0, 0);
    }
L_001d26a4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x85cu);
    }
L_001d26a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d26ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d26b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d26b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d26b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d26bc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d26c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d26d0;
        }
    }
L_001d26c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001d26c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d26cc:;
    {
        cpu->r[14] = 0x001d26d0u; imp_pthread_join(cpu); /* pthread_join */
    }
L_001d26d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d26d4:;
    {
        cpu->r[14] = 0x001d26d8u; fn_001d171c(cpu);
    }
L_001d26d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d26dc:;
    {
        cpu->r[14] = 0x001d26e0u; fn_001b4c50(cpu);
    }
L_001d26e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d26e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d26e8u)) return;
    }
}

/* _ZN14CAndroidSocketC1EPciP23GLXPlayerSocketObserver @ 001d26f0 (arm) */
void fn_001d26f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d26f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d26f4:;
    {
        cpu->r[4] = rd32(0x001d26fcu + + 0x2cu);
    }
L_001d26f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d26fc:;
    {
        cpu->r[14] = 0x001d2700u; fn_001b49a8(cpu);
    }
L_001d2700:;
    {
        cpu->r[3] = rd32(0x001d2708u + + 0x24u);
    }
L_001d2704:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d270cu, cpu->r[4], 0, 0);
    }
L_001d2708:;
    {
        cpu->r[0] = rd32(0x001d2710u + + 0x20u);
    }
L_001d270c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d2710:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2718u, cpu->r[0], 0, 0);
    }
L_001d2714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d2718:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001d271c:;
    {
        cpu->r[14] = 0x001d2720u; fn_001d0ac4(cpu);
    }
L_001d2720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d2724:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2728u)) return;
    }
}

/* _ZN14CAndroidSocket6AcceptEv @ 001d2734 (arm) */
void fn_001d2734(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2734:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d2738:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001d273c:;
    {
        cpu->r[3] = rd32(0x001d2744u + + 0xb8u);
    }
L_001d2740:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001d2744:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d2748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d274c:;
    {
        cpu->r[12] = rd32(0x001d2754u + + 0xacu);
    }
L_001d2750:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2758u, cpu->r[3], 0, 0);
    }
L_001d2754:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d2758:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001d275c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d2760:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_001d2764:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001d2768:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d276c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001d2770:;
    {
        cpu->r[14] = 0x001d2774u; imp_accept(cpu); /* accept */
    }
L_001d2774:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d2778:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d277c:;
    {
        cpu->r[14] = 0x001d2780u; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001d2780:;
    {
        cpu->r[6] = rd16(cpu->r[13] + + 0x6u);
    }
L_001d2784:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d2788:;
    {
        cpu->r[0] = 0x00000cf0u;
    }
L_001d278c:;
    {
        cpu->r[14] = 0x001d2790u; fn_0018ba6c(cpu);
    }
L_001d2790:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d2794:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d2798:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001d279c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d27a0:;
    {
        cpu->r[14] = 0x001d27a4u; fn_001d26f0(cpu);
    }
L_001d27a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d27a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d27ac:;
    {
        cpu->r[14] = 0x001d27b0u; fn_001b46e4(cpu);
    }
L_001d27b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d27b4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d27b8:;
    {
        cpu->r[14] = 0x001d27bcu; fn_001b4b34(cpu);
    }
L_001d27bc:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 8u, &shc); cpu->r[3] = v;
    }
L_001d27c0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001d27c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d27c8:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_001d27cc:;
    {
        cpu->r[14] = 0x001d27d0u; fn_001b46dc(cpu);
    }
L_001d27d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d27d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d27d8:;
    {
        cpu->r[14] = 0x001d27dcu; fn_001b46f4(cpu);
    }
L_001d27dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d27e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d27e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d27e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d27ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d27f8;
        }
    }
L_001d27f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001d27f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d27f8u)) return;
    }
L_001d27f8:;
    {
        cpu->r[14] = 0x001d27fcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d27fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 25u, &shc); cpu->r[7] = v;
        }
    }
L_001d2800:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocketC2EPciP23GLXPlayerSocketObserver @ 001d2804 (arm) */
void fn_001d2804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2804:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d2808:;
    {
        cpu->r[4] = rd32(0x001d2810u + + 0x2cu);
    }
L_001d280c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d2810:;
    {
        cpu->r[14] = 0x001d2814u; fn_001b49a8(cpu);
    }
L_001d2814:;
    {
        cpu->r[3] = rd32(0x001d281cu + + 0x24u);
    }
L_001d2818:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d2820u, cpu->r[4], 0, 0);
    }
L_001d281c:;
    {
        cpu->r[0] = rd32(0x001d2824u + + 0x20u);
    }
L_001d2820:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d2824:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d282cu, cpu->r[0], 0, 0);
    }
L_001d2828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d282c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001d2830:;
    {
        cpu->r[14] = 0x001d2834u; fn_001d0ac4(cpu);
    }
L_001d2834:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d2838:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d283cu)) return;
    }
}

/* _Z9GetTimeDTdd @ 001d2848 (arm) */
void fn_001d2848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2848:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001d284c:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[3]<<32)|cpu->r[2];
    }
L_001d2850:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) - *vfp_d(cpu, 7);
    }
L_001d2854:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001d285cu + + 0x14u);
    }
L_001d2858:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,6), *vfp_d(cpu,7));
    }
L_001d285c:;
    {
        vfp_sync_flags(cpu);
    }
L_001d2860:;
    {
        if (cond_test(cpu, 5)) {
        uint64_t v = *(uint64_t*)vfp_d(cpu,7); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
        }
    }
L_001d2864:;
    {
        if (cond_test(cpu, 6)) {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
        }
    }
L_001d2868:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine13SuspendEngineEv @ 001d2878 (arm) */
void fn_001d2878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2878:;
    {
        cpu->r[3] = rd32(0x001d2880u + + 0x2cu);
    }
L_001d287c:;
    {
        cpu->r[2] = rd32(0x001d2884u + + 0x2cu);
    }
L_001d2880:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2888u, cpu->r[3], 0, 0);
    }
L_001d2884:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d2888:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d288c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d2894:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2898u)) return;
        }
    }
L_001d2898:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d289c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d28a0:;
    {
        cpu->r[14] = 0x001d28a8u;
    }
L_001d28a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d28a8u)) return;
    }
L_001d28a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d28acu)) return;
    }
}

/* _ZN3vox9VoxEngine12ResumeEngineEv @ 001d28b4 (arm) */
void fn_001d28b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d28b4:;
    {
        cpu->r[3] = rd32(0x001d28bcu + + 0x2cu);
    }
L_001d28b8:;
    {
        cpu->r[2] = rd32(0x001d28c0u + + 0x2cu);
    }
L_001d28bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d28c4u, cpu->r[3], 0, 0);
    }
L_001d28c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d28c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d28c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d28cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d28d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d28d4u)) return;
        }
    }
L_001d28d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d28d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d28dc:;
    {
        cpu->r[14] = 0x001d28e4u;
    }
L_001d28e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d28e4u)) return;
    }
L_001d28e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d28e8u)) return;
    }
}

/* _ZN3vox9VoxEngine17IsEngineSuspendedEv @ 001d28f0 (arm) */
void fn_001d28f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d28f0:;
    {
        cpu->r[3] = rd32(0x001d28f8u + + 0x30u);
    }
L_001d28f4:;
    {
        cpu->r[2] = rd32(0x001d28fcu + + 0x30u);
    }
L_001d28f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2900u, cpu->r[3], 0, 0);
    }
L_001d28fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d2900:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2904:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2908:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d290c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d2910:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2914u)) return;
        }
    }
L_001d2914:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d2918:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d291c:;
    {
        cpu->r[14] = 0x001d2924u;
    }
L_001d2920:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2924u)) return;
    }
L_001d2924:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2928u)) return;
    }
}

/* _ZN3vox9VoxEngine6UpdateEf @ 001d2930 (arm) */
void fn_001d2930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2930:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine13UpdateSourcesEv @ 001d2934 (arm) */
void fn_001d2934(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2934:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine14UpdateEmittersEf @ 001d2938 (arm) */
void fn_001d2938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2938:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine13SetMasterGainEff @ 001d293c (arm) */
void fn_001d293c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d293c:;
    {
        cpu->r[3] = rd32(0x001d2944u + + 0x2cu);
    }
L_001d2940:;
    {
        cpu->r[0] = rd32(0x001d2948u + + 0x2cu);
    }
L_001d2944:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d294cu, cpu->r[3], 0, 0);
    }
L_001d2948:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d294c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2950:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2954:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d2958:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d295cu)) return;
        }
    }
L_001d295c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d2960:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d2964:;
    {
        cpu->r[14] = 0x001d296cu;
    }
L_001d2968:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d296cu)) return;
    }
L_001d296c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2970u)) return;
    }
}

/* _ZN3vox9VoxEngine12SetGroupGainEjff @ 001d2978 (arm) */
void fn_001d2978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2978:;
    {
        cpu->r[0] = rd32(0x001d2980u + + 0x2cu);
    }
L_001d297c:;
    {
        cpu->r[12] = rd32(0x001d2984u + + 0x2cu);
    }
L_001d2980:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2988u, cpu->r[0], 0, 0);
    }
L_001d2984:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d2988:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d298c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001d2990:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d2994:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d2998u)) return;
        }
    }
L_001d2998:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d299c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001d29a0:;
    {
        cpu->r[14] = 0x001d29a8u;
    }
L_001d29a4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d29a8u)) return;
    }
L_001d29a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d29acu)) return;
    }
}

/* _ZN3vox9VoxEngine41RegisterForEmitterStateChangeNotificationERNS_13EmitterHandleEPFvS2_PvNS_18EmitterExternStateEES3_ @ 001d29b4 (arm) */
void fn_001d29b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d29b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine43UnregisterForEmitterStateChangeNotificationERNS_13EmitterHandleE @ 001d29b8 (arm) */
void fn_001d29b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d29b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine21UpdateSourcesThreadedEv @ 001d29bc (arm) */
void fn_001d29bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d29bc:;
    {
        cpu->r[3] = rd32(0x001d29c4u + + 0x2cu);
    }
L_001d29c0:;
    {
        cpu->r[2] = rd32(0x001d29c8u + + 0x2cu);
    }
L_001d29c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d29ccu, cpu->r[3], 0, 0);
    }
L_001d29c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d29cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d29d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d29d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d29d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d29dcu)) return;
        }
    }
L_001d29dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d29e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d29e4:;
    {
        cpu->r[14] = 0x001d29ecu;
    }
L_001d29e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d29ecu)) return;
    }
L_001d29ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d29f0u)) return;
    }
}

/* _ZN3vox9VoxEngine21UpdateSourcesThreadedEPvS1_ @ 001d29f8 (arm) */
void fn_001d29f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d29f8:;
    {
        return fn_001d29bc(cpu);
    }
}

/* _ZN3vox9VoxEngine12GetDebugInfoERNS_9DebugInfoE @ 001d29fc (arm) */
void fn_001d29fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d29fc:;
    {
        cpu->r[3] = rd32(0x001d2a04u + + 0x18u);
    }
L_001d2a00:;
    {
        cpu->r[2] = rd32(0x001d2a08u + + 0x18u);
    }
L_001d2a04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2a0cu, cpu->r[3], 0, 0);
    }
L_001d2a08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2a0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2a10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2a14:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2a18:;
    {
        return fn_001e1a38(cpu);
    }
}

/* _ZN3vox9VoxEngine10PrintDebugEv @ 001d2a24 (arm) */
void fn_001d2a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2a24:;
    {
        cpu->r[3] = rd32(0x001d2a2cu + + 0x18u);
    }
L_001d2a28:;
    {
        cpu->r[2] = rd32(0x001d2a30u + + 0x18u);
    }
L_001d2a2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2a34u, cpu->r[3], 0, 0);
    }
L_001d2a30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2a34:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2a38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2a3c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2a40:;
    {
        return fn_001e1b44(cpu);
    }
}

/* _ZN3vox9VoxEngine13SetOutputModeENS_13VoxOutputModeE @ 001d2a4c (arm) */
void fn_001d2a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2a4c:;
    {
        cpu->r[3] = rd32(0x001d2a54u + + 0x18u);
    }
L_001d2a50:;
    {
        cpu->r[2] = rd32(0x001d2a58u + + 0x18u);
    }
L_001d2a54:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2a5cu, cpu->r[3], 0, 0);
    }
L_001d2a58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2a5c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2a60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2a64:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2a68:;
    {
        return fn_001de184(cpu);
    }
}

/* _ZN3vox9VoxEngine13GetOutputModeEv @ 001d2a74 (arm) */
void fn_001d2a74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2a74:;
    {
        cpu->r[3] = rd32(0x001d2a7cu + + 0x20u);
    }
L_001d2a78:;
    {
        cpu->r[2] = rd32(0x001d2a80u + + 0x20u);
    }
L_001d2a7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2a84u, cpu->r[3], 0, 0);
    }
L_001d2a80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2a84:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2a88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2a94;
        }
    }
L_001d2a90:;
    {
        return fn_001de15c(cpu);
    }
L_001d2a94:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d2a98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine24SetInteractiveMusicStateERNS_13EmitterHandleEPKc @ 001d2aa4 (arm) */
void fn_001d2aa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2aa4:;
    {
        cpu->r[3] = rd32(0x001d2aacu + + 0x18u);
    }
L_001d2aa8:;
    {
        cpu->r[0] = rd32(0x001d2ab0u + + 0x18u);
    }
L_001d2aac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2ab4u, cpu->r[3], 0, 0);
    }
L_001d2ab0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2ab4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2ab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2abc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2ac0:;
    {
        return fn_001e1e24(cpu);
    }
}

/* _ZN3vox9VoxEngine22SetDSPEmitterParameterERNS_13EmitterHandleEiPv @ 001d2acc (arm) */
void fn_001d2acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2acc:;
    {
        cpu->r[0] = rd32(0x001d2ad4u + + 0x18u);
    }
L_001d2ad0:;
    {
        cpu->r[12] = rd32(0x001d2ad8u + + 0x18u);
    }
L_001d2ad4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2adcu, cpu->r[0], 0, 0);
    }
L_001d2ad8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2adc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2ae0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2ae4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2ae8:;
    {
        return fn_001e1eb0(cpu);
    }
}

/* _ZN3vox9VoxEngine18SetSFXPresetActiveEibf @ 001d2af4 (arm) */
void fn_001d2af4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2af4:;
    {
        cpu->r[0] = rd32(0x001d2afcu + + 0x18u);
    }
L_001d2af8:;
    {
        cpu->r[12] = rd32(0x001d2b00u + + 0x18u);
    }
L_001d2afc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2b04u, cpu->r[0], 0, 0);
    }
L_001d2b00:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2b04:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2b08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2b0c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2b10:;
    {
        return fn_001e0478(cpu);
    }
}

/* _ZN3vox9VoxEngine16SetRoutingVolumeEPcS1_NS_22VoxDSPGeneralParameter14BusRoutingTypeEfff @ 001d2b1c (arm) */
void fn_001d2b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2b1c:;
    {
        cpu->r[0] = rd32(0x001d2b24u + + 0x18u);
    }
L_001d2b20:;
    {
        cpu->r[12] = rd32(0x001d2b28u + + 0x18u);
    }
L_001d2b24:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2b2cu, cpu->r[0], 0, 0);
    }
L_001d2b28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2b2c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2b34:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2b38:;
    {
        return fn_001de158(cpu);
    }
}

/* _ZN3vox9VoxEngine20SetDynamicBusRoutingEPc @ 001d2b44 (arm) */
void fn_001d2b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2b44:;
    {
        cpu->r[3] = rd32(0x001d2b4cu + + 0x18u);
    }
L_001d2b48:;
    {
        cpu->r[2] = rd32(0x001d2b50u + + 0x18u);
    }
L_001d2b4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2b54u, cpu->r[3], 0, 0);
    }
L_001d2b50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2b54:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2b58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2b5c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2b60:;
    {
        return fn_001e04cc(cpu);
    }
}

/* _ZN3vox9VoxEngine19SetStaticBusRoutingEPc @ 001d2b6c (arm) */
void fn_001d2b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2b6c:;
    {
        cpu->r[3] = rd32(0x001d2b74u + + 0x18u);
    }
L_001d2b70:;
    {
        cpu->r[2] = rd32(0x001d2b78u + + 0x18u);
    }
L_001d2b74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2b7cu, cpu->r[3], 0, 0);
    }
L_001d2b78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2b7c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2b80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2b84:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2b88:;
    {
        return fn_001e0510(cpu);
    }
}

/* _ZN3vox9VoxEngine22Get3DGeneralParameteriEiRi @ 001d2b94 (arm) */
void fn_001d2b94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2b94:;
    {
        cpu->r[3] = rd32(0x001d2b9cu + + 0x18u);
    }
L_001d2b98:;
    {
        cpu->r[0] = rd32(0x001d2ba0u + + 0x18u);
    }
L_001d2b9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2ba4u, cpu->r[3], 0, 0);
    }
L_001d2ba0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2ba4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2ba8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2bac:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2bb0:;
    {
        return fn_001e0554(cpu);
    }
}

/* _ZN3vox9VoxEngine22Get3DGeneralParameterfEiRf @ 001d2bbc (arm) */
void fn_001d2bbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2bbc:;
    {
        cpu->r[3] = rd32(0x001d2bc4u + + 0x18u);
    }
L_001d2bc0:;
    {
        cpu->r[0] = rd32(0x001d2bc8u + + 0x18u);
    }
L_001d2bc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2bccu, cpu->r[3], 0, 0);
    }
L_001d2bc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2bcc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2bd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2bd4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2bd8:;
    {
        return fn_001e0588(cpu);
    }
}

/* _ZN3vox9VoxEngine21Get3DGeneralParameterERNS_22Vox3DGeneralParametersE @ 001d2be4 (arm) */
void fn_001d2be4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2be4:;
    {
        cpu->r[3] = rd32(0x001d2becu + + 0x18u);
    }
L_001d2be8:;
    {
        cpu->r[2] = rd32(0x001d2bf0u + + 0x18u);
    }
L_001d2bec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2bf4u, cpu->r[3], 0, 0);
    }
L_001d2bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2bf4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2bf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2bfc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2c00:;
    {
        return fn_001e05d0(cpu);
    }
}

/* _ZN3vox9VoxEngine24Get3DListenerOrientationERfS1_S1_S1_S1_S1_ @ 001d2c0c (arm) */
void fn_001d2c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2c0c:;
    {
        cpu->r[0] = rd32(0x001d2c14u + + 0x30u);
    }
L_001d2c10:;
    {
        cpu->r[12] = rd32(0x001d2c18u + + 0x30u);
    }
L_001d2c14:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2c1cu, cpu->r[0], 0, 0);
    }
L_001d2c18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001d2c1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2c20:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d2c24:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d2c28:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2c2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2c3c;
        }
    }
L_001d2c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001d2c38:;
    {
        return fn_001e0600(cpu);
    }
L_001d2c3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001d2c40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine21Get3DListenerVelocityERfS1_S1_ @ 001d2c4c (arm) */
void fn_001d2c4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2c4c:;
    {
        cpu->r[0] = rd32(0x001d2c54u + + 0x18u);
    }
L_001d2c50:;
    {
        cpu->r[12] = rd32(0x001d2c58u + + 0x18u);
    }
L_001d2c54:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2c5cu, cpu->r[0], 0, 0);
    }
L_001d2c58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2c5c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2c60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2c64:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2c68:;
    {
        return fn_001e0670(cpu);
    }
}

/* _ZN3vox9VoxEngine21Get3DListenerPositionERfS1_S1_ @ 001d2c74 (arm) */
void fn_001d2c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2c74:;
    {
        cpu->r[0] = rd32(0x001d2c7cu + + 0x18u);
    }
L_001d2c78:;
    {
        cpu->r[12] = rd32(0x001d2c80u + + 0x18u);
    }
L_001d2c7c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2c84u, cpu->r[0], 0, 0);
    }
L_001d2c80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2c84:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2c88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2c8c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2c90:;
    {
        return fn_001e06b4(cpu);
    }
}

/* _ZN3vox9VoxEngine22Set3DGeneralParameteriEii @ 001d2c9c (arm) */
void fn_001d2c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2c9c:;
    {
        cpu->r[3] = rd32(0x001d2ca4u + + 0x18u);
    }
L_001d2ca0:;
    {
        cpu->r[0] = rd32(0x001d2ca8u + + 0x18u);
    }
L_001d2ca4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2cacu, cpu->r[3], 0, 0);
    }
L_001d2ca8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2cac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2cb4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2cb8:;
    {
        return fn_001e06f8(cpu);
    }
}

/* _ZN3vox9VoxEngine22Set3DGeneralParameterfEif @ 001d2cc4 (arm) */
void fn_001d2cc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2cc4:;
    {
        cpu->r[3] = rd32(0x001d2cccu + + 0x18u);
    }
L_001d2cc8:;
    {
        cpu->r[0] = rd32(0x001d2cd0u + + 0x18u);
    }
L_001d2ccc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2cd4u, cpu->r[3], 0, 0);
    }
L_001d2cd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2cd4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2cd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2cdc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2ce0:;
    {
        return fn_001e0730(cpu);
    }
}

/* _ZN3vox9VoxEngine21Set3DGeneralParameterERKNS_22Vox3DGeneralParametersE @ 001d2cec (arm) */
void fn_001d2cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2cec:;
    {
        cpu->r[3] = rd32(0x001d2cf4u + + 0x18u);
    }
L_001d2cf0:;
    {
        cpu->r[2] = rd32(0x001d2cf8u + + 0x18u);
    }
L_001d2cf4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2cfcu, cpu->r[3], 0, 0);
    }
L_001d2cf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2cfc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2d04:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2d08:;
    {
        return fn_001e0780(cpu);
    }
}

/* _ZN3vox9VoxEngine24Set3DListenerOrientationEffffff @ 001d2d14 (arm) */
void fn_001d2d14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2d14:;
    {
        cpu->r[0] = rd32(0x001d2d1cu + + 0x18u);
    }
L_001d2d18:;
    {
        cpu->r[12] = rd32(0x001d2d20u + + 0x18u);
    }
L_001d2d1c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2d24u, cpu->r[0], 0, 0);
    }
L_001d2d20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2d24:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2d28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2d2c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2d30:;
    {
        return fn_001e07c0(cpu);
    }
}

/* _ZN3vox9VoxEngine21Set3DListenerVelocityEfff @ 001d2d3c (arm) */
void fn_001d2d3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2d3c:;
    {
        cpu->r[0] = rd32(0x001d2d44u + + 0x18u);
    }
L_001d2d40:;
    {
        cpu->r[12] = rd32(0x001d2d48u + + 0x18u);
    }
L_001d2d44:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2d4cu, cpu->r[0], 0, 0);
    }
L_001d2d48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2d4c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2d50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2d54:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2d58:;
    {
        return fn_001e0820(cpu);
    }
}

/* _ZN3vox9VoxEngine21Set3DListenerPositionEfff @ 001d2d64 (arm) */
void fn_001d2d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2d64:;
    {
        cpu->r[0] = rd32(0x001d2d6cu + + 0x18u);
    }
L_001d2d68:;
    {
        cpu->r[12] = rd32(0x001d2d70u + + 0x18u);
    }
L_001d2d6c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2d74u, cpu->r[0], 0, 0);
    }
L_001d2d70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2d74:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2d78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2d7c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2d80:;
    {
        return fn_001e0860(cpu);
    }
}

/* _ZN3vox9VoxEngine22Get3DEmitterParameteriERNS_13EmitterHandleEiRi @ 001d2d8c (arm) */
void fn_001d2d8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2d8c:;
    {
        cpu->r[0] = rd32(0x001d2d94u + + 0x18u);
    }
L_001d2d90:;
    {
        cpu->r[12] = rd32(0x001d2d98u + + 0x18u);
    }
L_001d2d94:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2d9cu, cpu->r[0], 0, 0);
    }
L_001d2d98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2d9c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2da0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2da4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2da8:;
    {
        return fn_001e1efc(cpu);
    }
}

/* _ZN3vox9VoxEngine22Get3DEmitterParameterfERNS_13EmitterHandleEiRf @ 001d2db4 (arm) */
void fn_001d2db4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2db4:;
    {
        cpu->r[0] = rd32(0x001d2dbcu + + 0x18u);
    }
L_001d2db8:;
    {
        cpu->r[12] = rd32(0x001d2dc0u + + 0x18u);
    }
L_001d2dbc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2dc4u, cpu->r[0], 0, 0);
    }
L_001d2dc0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2dc4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2dc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2dcc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2dd0:;
    {
        return fn_001e1f48(cpu);
    }
}

/* _ZN3vox9VoxEngine22Get3DEmitterParametersERNS_13EmitterHandleERNS_22Vox3DEmitterParametersE @ 001d2ddc (arm) */
void fn_001d2ddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2ddc:;
    {
        cpu->r[3] = rd32(0x001d2de4u + + 0x18u);
    }
L_001d2de0:;
    {
        cpu->r[0] = rd32(0x001d2de8u + + 0x18u);
    }
L_001d2de4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2decu, cpu->r[3], 0, 0);
    }
L_001d2de8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2dec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2df0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2df4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2df8:;
    {
        return fn_001e1f94(cpu);
    }
}

/* _ZN3vox9VoxEngine21Get3DEmitterDirectionERNS_13EmitterHandleERfS3_S3_ @ 001d2e04 (arm) */
void fn_001d2e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2e04:;
    {
        cpu->r[0] = rd32(0x001d2e0cu + + 0x28u);
    }
L_001d2e08:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d2e0c:;
    {
        cpu->r[4] = rd32(0x001d2e14u + + 0x24u);
    }
L_001d2e10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2e18u, cpu->r[0], 0, 0);
    }
L_001d2e14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001d2e18:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2e1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2e2c;
        }
    }
L_001d2e24:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2e28:;
    {
        return fn_001e204c(cpu);
    }
L_001d2e2c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2e30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine20Get3DEmitterVelocityERNS_13EmitterHandleERfS3_S3_ @ 001d2e3c (arm) */
void fn_001d2e3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2e3c:;
    {
        cpu->r[0] = rd32(0x001d2e44u + + 0x28u);
    }
L_001d2e40:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d2e44:;
    {
        cpu->r[4] = rd32(0x001d2e4cu + + 0x24u);
    }
L_001d2e48:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2e50u, cpu->r[0], 0, 0);
    }
L_001d2e4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001d2e50:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2e54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2e58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2e64;
        }
    }
L_001d2e5c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2e60:;
    {
        return fn_001e20ac(cpu);
    }
L_001d2e64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2e68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine20Get3DEmitterPositionERNS_13EmitterHandleERfS3_S3_ @ 001d2e74 (arm) */
void fn_001d2e74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2e74:;
    {
        cpu->r[0] = rd32(0x001d2e7cu + + 0x28u);
    }
L_001d2e78:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d2e7c:;
    {
        cpu->r[4] = rd32(0x001d2e84u + + 0x24u);
    }
L_001d2e80:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2e88u, cpu->r[0], 0, 0);
    }
L_001d2e84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001d2e88:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2e8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2e9c;
        }
    }
L_001d2e94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2e98:;
    {
        return fn_001e210c(cpu);
    }
L_001d2e9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d2ea0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine22Set3DEmitterParameteriERNS_13EmitterHandleEii @ 001d2eac (arm) */
void fn_001d2eac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2eac:;
    {
        cpu->r[0] = rd32(0x001d2eb4u + + 0x18u);
    }
L_001d2eb0:;
    {
        cpu->r[12] = rd32(0x001d2eb8u + + 0x18u);
    }
L_001d2eb4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2ebcu, cpu->r[0], 0, 0);
    }
L_001d2eb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2ebc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2ec0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2ec4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2ec8:;
    {
        return fn_001e216c(cpu);
    }
}

/* _ZN3vox9VoxEngine22Set3DEmitterParameterfERNS_13EmitterHandleEif @ 001d2ed4 (arm) */
void fn_001d2ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2ed4:;
    {
        cpu->r[0] = rd32(0x001d2edcu + + 0x18u);
    }
L_001d2ed8:;
    {
        cpu->r[12] = rd32(0x001d2ee0u + + 0x18u);
    }
L_001d2edc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2ee4u, cpu->r[0], 0, 0);
    }
L_001d2ee0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2ee4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2ee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2eec:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2ef0:;
    {
        return fn_001e21b8(cpu);
    }
}

/* _ZN3vox9VoxEngine22Set3DEmitterParametersERNS_13EmitterHandleERKNS_22Vox3DEmitterParametersE @ 001d2efc (arm) */
void fn_001d2efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2efc:;
    {
        cpu->r[3] = rd32(0x001d2f04u + + 0x18u);
    }
L_001d2f00:;
    {
        cpu->r[0] = rd32(0x001d2f08u + + 0x18u);
    }
L_001d2f04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2f0cu, cpu->r[3], 0, 0);
    }
L_001d2f08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d2f0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2f10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2f14:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2f18:;
    {
        return fn_001e2204(cpu);
    }
}

/* _ZN3vox9VoxEngine21Set3DEmitterDirectionERNS_13EmitterHandleEfff @ 001d2f24 (arm) */
void fn_001d2f24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2f24:;
    {
        cpu->r[0] = rd32(0x001d2f2cu + + 0x18u);
    }
L_001d2f28:;
    {
        cpu->r[12] = rd32(0x001d2f30u + + 0x18u);
    }
L_001d2f2c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2f34u, cpu->r[0], 0, 0);
    }
L_001d2f30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2f34:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2f38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2f3c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2f40:;
    {
        return fn_001e22bc(cpu);
    }
}

/* _ZN3vox9VoxEngine20Set3DEmitterVelocityERNS_13EmitterHandleEfff @ 001d2f4c (arm) */
void fn_001d2f4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2f4c:;
    {
        cpu->r[0] = rd32(0x001d2f54u + + 0x18u);
    }
L_001d2f50:;
    {
        cpu->r[12] = rd32(0x001d2f58u + + 0x18u);
    }
L_001d2f54:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2f5cu, cpu->r[0], 0, 0);
    }
L_001d2f58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2f5c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2f60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2f64:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2f68:;
    {
        return fn_001e2324(cpu);
    }
}

/* _ZN3vox9VoxEngine20Set3DEmitterPositionERNS_13EmitterHandleEfff @ 001d2f74 (arm) */
void fn_001d2f74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2f74:;
    {
        cpu->r[0] = rd32(0x001d2f7cu + + 0x18u);
    }
L_001d2f78:;
    {
        cpu->r[12] = rd32(0x001d2f80u + + 0x18u);
    }
L_001d2f7c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d2f84u, cpu->r[0], 0, 0);
    }
L_001d2f80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d2f84:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d2f88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2f8c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d2f90:;
    {
        return fn_001e238c(cpu);
    }
}

/* _ZN3vox9VoxEngine12GetGroupGainEi @ 001d2f9c (arm) */
void fn_001d2f9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2f9c:;
    {
        cpu->r[3] = rd32(0x001d2fa4u + + 0x20u);
    }
L_001d2fa0:;
    {
        cpu->r[2] = rd32(0x001d2fa8u + + 0x20u);
    }
L_001d2fa4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2facu, cpu->r[3], 0, 0);
    }
L_001d2fa8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2fac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2fb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2fb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2fbc;
        }
    }
L_001d2fb8:;
    {
        return fn_001e08a0(cpu);
    }
L_001d2fbc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d2fc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine13GetMasterGainEv @ 001d2fcc (arm) */
void fn_001d2fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2fcc:;
    {
        cpu->r[3] = rd32(0x001d2fd4u + + 0x20u);
    }
L_001d2fd0:;
    {
        cpu->r[2] = rd32(0x001d2fd8u + + 0x20u);
    }
L_001d2fd4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d2fdcu, cpu->r[3], 0, 0);
    }
L_001d2fd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d2fdc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d2fe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d2fe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d2fec;
        }
    }
L_001d2fe8:;
    {
        return fn_001e08dc(cpu);
    }
L_001d2fec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d2ff0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine9GetStatusERNS_13EmitterHandleE @ 001d2ffc (arm) */
void fn_001d2ffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d2ffc:;
    {
        cpu->r[3] = rd32(0x001d3004u + + 0x18u);
    }
L_001d3000:;
    {
        cpu->r[2] = rd32(0x001d3008u + + 0x18u);
    }
L_001d3004:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d300cu, cpu->r[3], 0, 0);
    }
L_001d3008:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d300c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3010:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3014:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3018:;
    {
        return fn_001e2510(cpu);
    }
}

/* _ZN3vox9VoxEngine6IsDoneERNS_13EmitterHandleE @ 001d3024 (arm) */
void fn_001d3024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3024:;
    {
        cpu->r[3] = rd32(0x001d302cu + + 0x20u);
    }
L_001d3028:;
    {
        cpu->r[2] = rd32(0x001d3030u + + 0x20u);
    }
L_001d302c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3034u, cpu->r[3], 0, 0);
    }
L_001d3030:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3034:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d303c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3044;
        }
    }
L_001d3040:;
    {
        return fn_001e2554(cpu);
    }
L_001d3044:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d3048:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine9IsPlayingERNS_13EmitterHandleE @ 001d3054 (arm) */
void fn_001d3054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3054:;
    {
        cpu->r[3] = rd32(0x001d305cu + + 0x18u);
    }
L_001d3058:;
    {
        cpu->r[2] = rd32(0x001d3060u + + 0x18u);
    }
L_001d305c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3064u, cpu->r[3], 0, 0);
    }
L_001d3060:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3064:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3068:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d306c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3070:;
    {
        return fn_001e259c(cpu);
    }
}

/* _ZN3vox9VoxEngine7IsAliveERNS_13EmitterHandleE @ 001d307c (arm) */
void fn_001d307c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d307c:;
    {
        cpu->r[3] = rd32(0x001d3084u + + 0x18u);
    }
L_001d3080:;
    {
        cpu->r[2] = rd32(0x001d3088u + + 0x18u);
    }
L_001d3084:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d308cu, cpu->r[3], 0, 0);
    }
L_001d3088:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d308c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3094:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3098:;
    {
        return fn_001e25e0(cpu);
    }
}

/* _ZN3vox9VoxEngine7IsValidERNS_13EmitterHandleE @ 001d30a4 (arm) */
void fn_001d30a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d30a4:;
    {
        cpu->r[3] = rd32(0x001d30acu + + 0x18u);
    }
L_001d30a8:;
    {
        cpu->r[2] = rd32(0x001d30b0u + + 0x18u);
    }
L_001d30ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d30b4u, cpu->r[3], 0, 0);
    }
L_001d30b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d30b4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d30b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d30bc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d30c0:;
    {
        return fn_001e2624(cpu);
    }
}

/* _ZN3vox9VoxEngine7IsReadyERNS_13EmitterHandleE @ 001d30cc (arm) */
void fn_001d30cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d30cc:;
    {
        cpu->r[3] = rd32(0x001d30d4u + + 0x18u);
    }
L_001d30d0:;
    {
        cpu->r[2] = rd32(0x001d30d8u + + 0x18u);
    }
L_001d30d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d30dcu, cpu->r[3], 0, 0);
    }
L_001d30d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d30dc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d30e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d30e4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d30e8:;
    {
        return fn_001e2660(cpu);
    }
}

/* _ZN3vox9VoxEngine13SetPlayCursorERNS_13EmitterHandleEf @ 001d30f4 (arm) */
void fn_001d30f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d30f4:;
    {
        cpu->r[3] = rd32(0x001d30fcu + + 0x18u);
    }
L_001d30f8:;
    {
        cpu->r[0] = rd32(0x001d3100u + + 0x18u);
    }
L_001d30fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3104u, cpu->r[3], 0, 0);
    }
L_001d3100:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3104:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d310c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3110:;
    {
        return fn_001e2484(cpu);
    }
}

/* _ZN3vox9VoxEngine13GetPlayCursorERNS_13EmitterHandleE @ 001d311c (arm) */
void fn_001d311c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d311c:;
    {
        cpu->r[3] = rd32(0x001d3124u + + 0x20u);
    }
L_001d3120:;
    {
        cpu->r[2] = rd32(0x001d3128u + + 0x20u);
    }
L_001d3124:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d312cu, cpu->r[3], 0, 0);
    }
L_001d3128:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d312c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3130:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d313c;
        }
    }
L_001d3138:;
    {
        return fn_001e24c8(cpu);
    }
L_001d313c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d3140:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine8GetGroupERNS_13EmitterHandleE @ 001d314c (arm) */
void fn_001d314c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d314c:;
    {
        cpu->r[3] = rd32(0x001d3154u + + 0x18u);
    }
L_001d3150:;
    {
        cpu->r[2] = rd32(0x001d3158u + + 0x18u);
    }
L_001d3154:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d315cu, cpu->r[3], 0, 0);
    }
L_001d3158:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d315c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3160:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3164:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3168:;
    {
        return fn_001e23f4(cpu);
    }
}

/* _ZN3vox9VoxEngine8SetGroupERNS_13EmitterHandleEi @ 001d3174 (arm) */
void fn_001d3174(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3174:;
    {
        cpu->r[3] = rd32(0x001d317cu + + 0x18u);
    }
L_001d3178:;
    {
        cpu->r[0] = rd32(0x001d3180u + + 0x18u);
    }
L_001d317c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3184u, cpu->r[3], 0, 0);
    }
L_001d3180:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3184:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d318c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3190:;
    {
        return fn_001e2438(cpu);
    }
}

/* _ZN3vox9VoxEngine17ResumeAllEmittersEjf @ 001d319c (arm) */
void fn_001d319c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d319c:;
    {
        cpu->r[3] = rd32(0x001d31a4u + + 0x18u);
    }
L_001d31a0:;
    {
        cpu->r[0] = rd32(0x001d31a8u + + 0x18u);
    }
L_001d31a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d31acu, cpu->r[3], 0, 0);
    }
L_001d31a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d31ac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d31b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d31b4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d31b8:;
    {
        return fn_001e6a24(cpu);
    }
}

/* _ZN3vox9VoxEngine16PauseAllEmittersEjf @ 001d31c4 (arm) */
void fn_001d31c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d31c4:;
    {
        cpu->r[3] = rd32(0x001d31ccu + + 0x18u);
    }
L_001d31c8:;
    {
        cpu->r[0] = rd32(0x001d31d0u + + 0x18u);
    }
L_001d31cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d31d4u, cpu->r[3], 0, 0);
    }
L_001d31d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d31d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d31d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d31dc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d31e0:;
    {
        return fn_001e781c(cpu);
    }
}

/* _ZN3vox9VoxEngine15StopAllEmittersEjf @ 001d31ec (arm) */
void fn_001d31ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d31ec:;
    {
        cpu->r[3] = rd32(0x001d31f4u + + 0x18u);
    }
L_001d31f0:;
    {
        cpu->r[0] = rd32(0x001d31f8u + + 0x18u);
    }
L_001d31f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d31fcu, cpu->r[3], 0, 0);
    }
L_001d31f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d31fc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3200:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3204:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3208:;
    {
        return fn_001e8e40(cpu);
    }
}

/* _ZN3vox9VoxEngine15PlayAllEmittersEjf @ 001d3214 (arm) */
void fn_001d3214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3214:;
    {
        cpu->r[3] = rd32(0x001d321cu + + 0x18u);
    }
L_001d3218:;
    {
        cpu->r[0] = rd32(0x001d3220u + + 0x18u);
    }
L_001d321c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3224u, cpu->r[3], 0, 0);
    }
L_001d3220:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3224:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d322c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3230:;
    {
        return fn_001e9114(cpu);
    }
}

/* _ZN3vox9VoxEngine14GetAllEmittersERSt6vectorINS_13EmitterHandleESaIS2_EE @ 001d323c (arm) */
void fn_001d323c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d323c:;
    {
        cpu->r[3] = rd32(0x001d3244u + + 0x18u);
    }
L_001d3240:;
    {
        cpu->r[2] = rd32(0x001d3248u + + 0x18u);
    }
L_001d3244:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d324cu, cpu->r[3], 0, 0);
    }
L_001d3248:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d324c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3254:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3258:;
    {
        return fn_001e6214(cpu);
    }
}

/* _ZN3vox9VoxEngine14GetAllEmittersEPNS_13EmitterHandleEi @ 001d3264 (arm) */
void fn_001d3264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3264:;
    {
        cpu->r[3] = rd32(0x001d326cu + + 0x18u);
    }
L_001d3268:;
    {
        cpu->r[0] = rd32(0x001d3270u + + 0x18u);
    }
L_001d326c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3274u, cpu->r[3], 0, 0);
    }
L_001d3270:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3274:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d327c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3280:;
    {
        return fn_001e2c30(cpu);
    }
}

/* _ZN3vox9VoxEngine6ResumeERNS_13EmitterHandleEf @ 001d328c (arm) */
void fn_001d328c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d328c:;
    {
        cpu->r[3] = rd32(0x001d3294u + + 0x18u);
    }
L_001d3290:;
    {
        cpu->r[0] = rd32(0x001d3298u + + 0x18u);
    }
L_001d3294:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d329cu, cpu->r[3], 0, 0);
    }
L_001d3298:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d329c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d32a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d32a4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d32a8:;
    {
        return fn_001e6bf8(cpu);
    }
}

/* _ZN3vox9VoxEngine5PauseERNS_13EmitterHandleEf @ 001d32b4 (arm) */
void fn_001d32b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d32b4:;
    {
        cpu->r[3] = rd32(0x001d32bcu + + 0x18u);
    }
L_001d32b8:;
    {
        cpu->r[0] = rd32(0x001d32c0u + + 0x18u);
    }
L_001d32bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d32c4u, cpu->r[3], 0, 0);
    }
L_001d32c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d32c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d32c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d32cc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d32d0:;
    {
        return fn_001e79f0(cpu);
    }
}

/* _ZN3vox9VoxEngine4StopERNS_13EmitterHandleEf @ 001d32dc (arm) */
void fn_001d32dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d32dc:;
    {
        cpu->r[3] = rd32(0x001d32e4u + + 0x18u);
    }
L_001d32e0:;
    {
        cpu->r[0] = rd32(0x001d32e8u + + 0x18u);
    }
L_001d32e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d32ecu, cpu->r[3], 0, 0);
    }
L_001d32e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d32ec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d32f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d32f4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d32f8:;
    {
        return fn_001e9014(cpu);
    }
}

/* _ZN3vox9VoxEngine4PlayERNS_13EmitterHandleEbf @ 001d3304 (arm) */
void fn_001d3304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3304:;
    {
        cpu->r[0] = rd32(0x001d330cu + + 0x18u);
    }
L_001d3308:;
    {
        cpu->r[12] = rd32(0x001d3310u + + 0x18u);
    }
L_001d330c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d3314u, cpu->r[0], 0, 0);
    }
L_001d3310:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d3314:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d3318:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d331c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3320:;
    {
        return fn_001e9300(cpu);
    }
}

/* _ZN3vox9VoxEngine8GetPitchERNS_13EmitterHandleE @ 001d332c (arm) */
void fn_001d332c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d332c:;
    {
        cpu->r[3] = rd32(0x001d3334u + + 0x20u);
    }
L_001d3330:;
    {
        cpu->r[2] = rd32(0x001d3338u + + 0x20u);
    }
L_001d3334:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d333cu, cpu->r[3], 0, 0);
    }
L_001d3338:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d333c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d334c;
        }
    }
L_001d3348:;
    {
        return fn_001e26a4(cpu);
    }
L_001d334c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d3350:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine8SetPitchERNS_13EmitterHandleEff @ 001d335c (arm) */
void fn_001d335c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d335c:;
    {
        cpu->r[0] = rd32(0x001d3364u + + 0x18u);
    }
L_001d3360:;
    {
        cpu->r[12] = rd32(0x001d3368u + + 0x18u);
    }
L_001d3364:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d336cu, cpu->r[0], 0, 0);
    }
L_001d3368:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d336c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d3370:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3374:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3378:;
    {
        return fn_001e6774(cpu);
    }
}

/* _ZN3vox9VoxEngine7SetLoopERNS_13EmitterHandleEb @ 001d3384 (arm) */
void fn_001d3384(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3384:;
    {
        cpu->r[3] = rd32(0x001d338cu + + 0x18u);
    }
L_001d3388:;
    {
        cpu->r[0] = rd32(0x001d3390u + + 0x18u);
    }
L_001d338c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3394u, cpu->r[3], 0, 0);
    }
L_001d3390:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3394:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d339c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d33a0:;
    {
        return fn_001e26ec(cpu);
    }
}

/* _ZN3vox9VoxEngine7GetGainERNS_13EmitterHandleE @ 001d33ac (arm) */
void fn_001d33ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d33ac:;
    {
        cpu->r[3] = rd32(0x001d33b4u + + 0x20u);
    }
L_001d33b0:;
    {
        cpu->r[2] = rd32(0x001d33b8u + + 0x20u);
    }
L_001d33b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d33bcu, cpu->r[3], 0, 0);
    }
L_001d33b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d33bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d33c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d33c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d33cc;
        }
    }
L_001d33c8:;
    {
        return fn_001e2730(cpu);
    }
L_001d33cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d33d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine7SetGainERNS_13EmitterHandleEff @ 001d33dc (arm) */
void fn_001d33dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d33dc:;
    {
        cpu->r[0] = rd32(0x001d33e4u + + 0x18u);
    }
L_001d33e0:;
    {
        cpu->r[12] = rd32(0x001d33e8u + + 0x18u);
    }
L_001d33e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d33ecu, cpu->r[0], 0, 0);
    }
L_001d33e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d33ec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d33f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d33f4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d33f8:;
    {
        return fn_001e6868(cpu);
    }
}

/* _ZN3vox9VoxEngine20SetAutoKillAfterDoneERNS_13EmitterHandleEb @ 001d3404 (arm) */
void fn_001d3404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3404:;
    {
        cpu->r[3] = rd32(0x001d340cu + + 0x18u);
    }
L_001d3408:;
    {
        cpu->r[0] = rd32(0x001d3410u + + 0x18u);
    }
L_001d340c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3414u, cpu->r[3], 0, 0);
    }
L_001d3410:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3414:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d341c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3420:;
    {
        return fn_001e2778(cpu);
    }
}

/* _ZN3vox9VoxEngine7GetDataERNS_13EmitterHandleE @ 001d342c (arm) */
void fn_001d342c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d342c:;
    {
        cpu->r[3] = rd32(0x001d3434u + + 0x50u);
    }
L_001d3430:;
    {
        cpu->r[1] = rd32(0x001d3438u + + 0x50u);
    }
L_001d3434:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d343cu, cpu->r[3], 0, 0);
    }
L_001d3438:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d343c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d3440:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3448:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d344c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d3450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3464;
        }
    }
L_001d3454:;
    {
        cpu->r[14] = 0x001d3458u; fn_001e3740(cpu);
    }
L_001d3458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d345c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d3460:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3464u)) return;
    }
L_001d3464:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d3468:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d346c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d3470:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d3474:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d3478:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d347c:;
    {
        cpu->r[14] = 0x001d3480u; fn_001e3520(cpu);
    }
L_001d3480:;
    {
        goto L_001d3458;
    }
}

/* _ZN3vox9VoxEngine11KillEmitterERNS_13EmitterHandleE @ 001d348c (arm) */
void fn_001d348c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d348c:;
    {
        cpu->r[3] = rd32(0x001d3494u + + 0x18u);
    }
L_001d3490:;
    {
        cpu->r[2] = rd32(0x001d3498u + + 0x18u);
    }
L_001d3494:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d349cu, cpu->r[3], 0, 0);
    }
L_001d3498:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d349c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d34a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d34a4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d34a8:;
    {
        return fn_001e4cdc(cpu);
    }
}

/* _ZN3vox9VoxEngine11GetUserDataERNS_13EmitterHandleE @ 001d34b4 (arm) */
void fn_001d34b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d34b4:;
    {
        cpu->r[3] = rd32(0x001d34bcu + + 0x24u);
    }
L_001d34b8:;
    {
        cpu->r[2] = rd32(0x001d34c0u + + 0x24u);
    }
L_001d34bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d34c4u, cpu->r[3], 0, 0);
    }
L_001d34c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d34c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d34c8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d34cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d34d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d34d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d34d8u)) return;
        }
    }
L_001d34d8:;
    {
        cpu->r[14] = 0x001d34dcu; fn_001e1d98(cpu);
    }
L_001d34dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d34e0u)) return;
    }
}

/* _ZN3vox9VoxEngine11SetUserDataERNS_13EmitterHandleERNS_21EmitterHandleUserDataE @ 001d34e8 (arm) */
void fn_001d34e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d34e8:;
    {
        cpu->r[3] = rd32(0x001d34f0u + + 0x18u);
    }
L_001d34ec:;
    {
        cpu->r[0] = rd32(0x001d34f4u + + 0x18u);
    }
L_001d34f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d34f8u, cpu->r[3], 0, 0);
    }
L_001d34f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d34f8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d34fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3500:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3504:;
    {
        return fn_001e1de0(cpu);
    }
}

/* _ZN3vox9VoxEngine18CreateEmitterAsyncERNS_10DataHandleEiPv @ 001d3510 (arm) */
void fn_001d3510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3510:;
    {
        cpu->r[1] = rd32(0x001d3518u + + 0x58u);
    }
L_001d3514:;
    {
        cpu->r[12] = rd32(0x001d351cu + + 0x58u);
    }
L_001d3518:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d3520u, cpu->r[1], 0, 0);
    }
L_001d351c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3520:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001d3524:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d352c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001d3530:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d3534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3550;
        }
    }
L_001d3538:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d353c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d3540:;
    {
        cpu->r[14] = 0x001d3544u; fn_001e40f8(cpu);
    }
L_001d3544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3548:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d354c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3550u)) return;
    }
L_001d3550:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d3554:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d3558:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d355c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d3560:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d3564:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d3568:;
    {
        cpu->r[14] = 0x001d356cu; fn_001e2888(cpu);
    }
L_001d356c:;
    {
        goto L_001d3544;
    }
}

/* _ZN3vox9VoxEngine13CreateEmitterERNS_10DataHandleEiPv @ 001d3578 (arm) */
void fn_001d3578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3578:;
    {
        cpu->r[1] = rd32(0x001d3580u + + 0x58u);
    }
L_001d357c:;
    {
        cpu->r[12] = rd32(0x001d3584u + + 0x58u);
    }
L_001d3580:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d3588u, cpu->r[1], 0, 0);
    }
L_001d3584:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3588:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001d358c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3590:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3594:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001d3598:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d359c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d35b8;
        }
    }
L_001d35a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d35a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d35a8:;
    {
        cpu->r[14] = 0x001d35acu; fn_001e97d4(cpu);
    }
L_001d35ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d35b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d35b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d35b8u)) return;
    }
L_001d35b8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d35bc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d35c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d35c4:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d35c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d35cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d35d0:;
    {
        cpu->r[14] = 0x001d35d4u; fn_001e2888(cpu);
    }
L_001d35d4:;
    {
        goto L_001d35ac;
    }
}

/* _ZN3vox9VoxEngine11GetDurationERNS_10DataHandleE @ 001d35e0 (arm) */
void fn_001d35e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d35e0:;
    {
        cpu->r[3] = rd32(0x001d35e8u + + 0x20u);
    }
L_001d35e4:;
    {
        cpu->r[2] = rd32(0x001d35ecu + + 0x20u);
    }
L_001d35e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d35f0u, cpu->r[3], 0, 0);
    }
L_001d35ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d35f0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d35f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d35f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3600;
        }
    }
L_001d35fc:;
    {
        return fn_001e30cc(cpu);
    }
L_001d3600:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d3604:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine7IsValidERNS_10DataHandleE @ 001d3610 (arm) */
void fn_001d3610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3610:;
    {
        cpu->r[3] = rd32(0x001d3618u + + 0x18u);
    }
L_001d3614:;
    {
        cpu->r[2] = rd32(0x001d361cu + + 0x18u);
    }
L_001d3618:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3620u, cpu->r[3], 0, 0);
    }
L_001d361c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3620:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3624:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3628:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d362c:;
    {
        return fn_001e3114(cpu);
    }
}

/* _ZN3vox9VoxEngine7IsReadyERNS_10DataHandleE @ 001d3638 (arm) */
void fn_001d3638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3638:;
    {
        cpu->r[3] = rd32(0x001d3640u + + 0x18u);
    }
L_001d363c:;
    {
        cpu->r[2] = rd32(0x001d3644u + + 0x18u);
    }
L_001d3640:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3648u, cpu->r[3], 0, 0);
    }
L_001d3644:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3648:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d364c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3650:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3654:;
    {
        return fn_001e3150(cpu);
    }
}

/* _ZN3vox9VoxEngine17GetAllDataSourcesERSt6vectorINS_10DataHandleESaIS2_EE @ 001d3660 (arm) */
void fn_001d3660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3660:;
    {
        cpu->r[3] = rd32(0x001d3668u + + 0x18u);
    }
L_001d3664:;
    {
        cpu->r[2] = rd32(0x001d366cu + + 0x18u);
    }
L_001d3668:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3670u, cpu->r[3], 0, 0);
    }
L_001d366c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3670:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3678:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d367c:;
    {
        return fn_001e5480(cpu);
    }
}

/* _ZN3vox9VoxEngine17GetAllDataSourcesEPNS_10DataHandleEi @ 001d3688 (arm) */
void fn_001d3688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3688:;
    {
        cpu->r[3] = rd32(0x001d3690u + + 0x18u);
    }
L_001d368c:;
    {
        cpu->r[0] = rd32(0x001d3694u + + 0x18u);
    }
L_001d3690:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3698u, cpu->r[3], 0, 0);
    }
L_001d3694:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3698:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d369c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d36a0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d36a4:;
    {
        return fn_001e5220(cpu);
    }
}

/* _ZN3vox9VoxEngine17GetEmitterHandlesERNS_10DataHandleERSt6vectorINS_13EmitterHandleESaIS4_EE @ 001d36b0 (arm) */
void fn_001d36b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d36b0:;
    {
        cpu->r[3] = rd32(0x001d36b8u + + 0x18u);
    }
L_001d36b4:;
    {
        cpu->r[0] = rd32(0x001d36bcu + + 0x18u);
    }
L_001d36b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d36c0u, cpu->r[3], 0, 0);
    }
L_001d36bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d36c0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d36c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d36c8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d36cc:;
    {
        return fn_001e6c3c(cpu);
    }
}

/* _ZN3vox9VoxEngine17GetEmitterHandlesERNS_10DataHandleEPNS_13EmitterHandleEi @ 001d36d8 (arm) */
void fn_001d36d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d36d8:;
    {
        cpu->r[0] = rd32(0x001d36e0u + + 0x18u);
    }
L_001d36dc:;
    {
        cpu->r[12] = rd32(0x001d36e4u + + 0x18u);
    }
L_001d36e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d36e8u, cpu->r[0], 0, 0);
    }
L_001d36e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d36e8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d36ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d36f0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d36f4:;
    {
        return fn_001e3194(cpu);
    }
}

/* _ZN3vox9VoxEngine17ReleaseDatasourceEj @ 001d3700 (arm) */
void fn_001d3700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3700:;
    {
        cpu->r[3] = rd32(0x001d3708u + + 0x18u);
    }
L_001d3704:;
    {
        cpu->r[2] = rd32(0x001d370cu + + 0x18u);
    }
L_001d3708:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3710u, cpu->r[3], 0, 0);
    }
L_001d370c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3710:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3714:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3718:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d371c:;
    {
        return fn_001e447c(cpu);
    }
}

/* _ZN3vox9VoxEngine17ReleaseDatasourceERNS_10DataHandleE @ 001d3728 (arm) */
void fn_001d3728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3728:;
    {
        cpu->r[3] = rd32(0x001d3730u + + 0x18u);
    }
L_001d372c:;
    {
        cpu->r[2] = rd32(0x001d3734u + + 0x18u);
    }
L_001d3730:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3738u, cpu->r[3], 0, 0);
    }
L_001d3734:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3738:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d373c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3740:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3744:;
    {
        return fn_001e3458(cpu);
    }
}

/* _ZN3vox9VoxEngine6GetUidERNS_10DataHandleE @ 001d3750 (arm) */
void fn_001d3750(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3750:;
    {
        cpu->r[3] = rd32(0x001d3758u + + 0x20u);
    }
L_001d3754:;
    {
        cpu->r[2] = rd32(0x001d375cu + + 0x20u);
    }
L_001d3758:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3760u, cpu->r[3], 0, 0);
    }
L_001d375c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3760:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3770;
        }
    }
L_001d376c:;
    {
        return fn_001e3014(cpu);
    }
L_001d3770:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d3774:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine6SetUidERNS_10DataHandleEi @ 001d3780 (arm) */
void fn_001d3780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3780:;
    {
        cpu->r[3] = rd32(0x001d3788u + + 0x18u);
    }
L_001d3784:;
    {
        cpu->r[0] = rd32(0x001d378cu + + 0x18u);
    }
L_001d3788:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3790u, cpu->r[3], 0, 0);
    }
L_001d378c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3790:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3798:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d379c:;
    {
        return fn_001e3054(cpu);
    }
}

/* _ZN3vox9VoxEngine17SetPriorityBankIdERNS_10DataHandleEi @ 001d37a8 (arm) */
void fn_001d37a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d37a8:;
    {
        cpu->r[3] = rd32(0x001d37b0u + + 0x18u);
    }
L_001d37ac:;
    {
        cpu->r[0] = rd32(0x001d37b4u + + 0x18u);
    }
L_001d37b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d37b8u, cpu->r[3], 0, 0);
    }
L_001d37b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d37b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d37bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d37c0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d37c4:;
    {
        return fn_001e3090(cpu);
    }
}

/* _ZN3vox9VoxEngine11GetUserDataERNS_10DataHandleE @ 001d37d0 (arm) */
void fn_001d37d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d37d0:;
    {
        cpu->r[3] = rd32(0x001d37d8u + + 0x24u);
    }
L_001d37d4:;
    {
        cpu->r[2] = rd32(0x001d37dcu + + 0x24u);
    }
L_001d37d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d37e0u, cpu->r[3], 0, 0);
    }
L_001d37dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d37e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d37e4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d37e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d37ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d37f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d37f4u)) return;
        }
    }
L_001d37f4:;
    {
        cpu->r[14] = 0x001d37f8u; fn_001e2f88(cpu);
    }
L_001d37f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d37fcu)) return;
    }
}

/* _ZN3vox9VoxEngine11SetUserDataERNS_10DataHandleERNS_18DataHandleUserDataE @ 001d3804 (arm) */
void fn_001d3804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3804:;
    {
        cpu->r[3] = rd32(0x001d380cu + + 0x18u);
    }
L_001d3808:;
    {
        cpu->r[0] = rd32(0x001d3810u + + 0x18u);
    }
L_001d380c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3814u, cpu->r[3], 0, 0);
    }
L_001d3810:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d3814:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3818:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d381c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d3820:;
    {
        return fn_001e2fd0(cpu);
    }
}

/* _ZN3vox9VoxEngine24ConvertToRamBufferSourceERNS_10DataHandleE @ 001d382c (arm) */
void fn_001d382c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d382c:;
    {
        cpu->r[3] = rd32(0x001d3834u + + 0x50u);
    }
L_001d3830:;
    {
        cpu->r[1] = rd32(0x001d3838u + + 0x50u);
    }
L_001d3834:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d383cu, cpu->r[3], 0, 0);
    }
L_001d3838:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d383c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d3840:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3844:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3848:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d384c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d3850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3864;
        }
    }
L_001d3854:;
    {
        cpu->r[14] = 0x001d3858u; fn_001e5c74(cpu);
    }
L_001d3858:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d385c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d3860:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3864u)) return;
    }
L_001d3864:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d3868:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d386c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d3870:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d3874:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d3878:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d387c:;
    {
        cpu->r[14] = 0x001d3880u; fn_001e3520(cpu);
    }
L_001d3880:;
    {
        goto L_001d3858;
    }
}

/* _ZN3vox9VoxEngine18ConvertToRawSourceERNS_10DataHandleE @ 001d388c (arm) */
void fn_001d388c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d388c:;
    {
        cpu->r[3] = rd32(0x001d3894u + + 0x50u);
    }
L_001d3890:;
    {
        cpu->r[1] = rd32(0x001d3898u + + 0x50u);
    }
L_001d3894:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d389cu, cpu->r[3], 0, 0);
    }
L_001d3898:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d389c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d38a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d38a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d38a8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d38ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d38b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d38c4;
        }
    }
L_001d38b4:;
    {
        cpu->r[14] = 0x001d38b8u; fn_001e5ef4(cpu);
    }
L_001d38b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d38bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d38c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d38c4u)) return;
    }
L_001d38c4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d38c8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d38cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d38d0:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d38d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d38d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d38dc:;
    {
        cpu->r[14] = 0x001d38e0u; fn_001e3520(cpu);
    }
L_001d38e0:;
    {
        goto L_001d38b8;
    }
}

/* _ZN3vox9VoxEngine19LoadDataSourceAsyncEiPviS1_iNS_21VoxSourceLoadingFlagsE @ 001d38ec (arm) */
void fn_001d38ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d38ec:;
    {
        cpu->r[1] = rd32(0x001d38f4u + + 0x70u);
    }
L_001d38f0:;
    {
        cpu->r[12] = rd32(0x001d38f8u + + 0x70u);
    }
L_001d38f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d38fcu, cpu->r[1], 0, 0);
    }
L_001d38f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d38fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001d3900:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3904:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3908:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001d390c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d3910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3944;
        }
    }
L_001d3914:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d3918:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d391c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d3920:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d3924:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d3928:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001d392c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d3930:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001d3934:;
    {
        cpu->r[14] = 0x001d3938u; fn_001e5728(cpu);
    }
L_001d3938:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d393c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d3940:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3944u)) return;
    }
L_001d3944:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d3948:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d394c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d3950:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d3954:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d3958:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d395c:;
    {
        cpu->r[14] = 0x001d3960u; fn_001e3520(cpu);
    }
L_001d3960:;
    {
        goto L_001d3938;
    }
}

/* _ZN3vox9VoxEngine14LoadDataSourceEiPviS1_i @ 001d396c (arm) */
void fn_001d396c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d396c:;
    {
        cpu->r[1] = rd32(0x001d3974u + + 0x68u);
    }
L_001d3970:;
    {
        cpu->r[12] = rd32(0x001d3978u + + 0x68u);
    }
L_001d3974:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d397cu, cpu->r[1], 0, 0);
    }
L_001d3978:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d397c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001d3980:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d3984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3988:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001d398c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d3990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d39bc;
        }
    }
L_001d3994:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d3998:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d399c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d39a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d39a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d39a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001d39ac:;
    {
        cpu->r[14] = 0x001d39b0u; fn_001e5990(cpu);
    }
L_001d39b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d39b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d39b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d39bcu)) return;
    }
L_001d39bc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d39c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d39c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d39c8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d39cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d39d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d39d4:;
    {
        cpu->r[14] = 0x001d39d8u; fn_001e3520(cpu);
    }
L_001d39d8:;
    {
        goto L_001d39b0;
    }
}

/* _ZN3vox9VoxEngine15SetPriorityBankEiiiNS_20PriorityBankBehaviorE @ 001d39e4 (arm) */
void fn_001d39e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d39e4:;
    {
        cpu->r[0] = rd32(0x001d39ecu + + 0x30u);
    }
L_001d39e8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d39ec:;
    {
        cpu->r[4] = rd32(0x001d39f4u + + 0x2cu);
    }
L_001d39f0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d39f8u, cpu->r[0], 0, 0);
    }
L_001d39f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d39f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001d39fc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d3a00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3a14;
        }
    }
L_001d3a08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d3a0c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d3a10:;
    {
        return fn_001e0b70(cpu);
    }
L_001d3a14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d3a18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine15AddPriorityBankEiiNS_20PriorityBankBehaviorE @ 001d3a24 (arm) */
void fn_001d3a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3a24:;
    {
        cpu->r[0] = rd32(0x001d3a2cu + + 0x20u);
    }
L_001d3a28:;
    {
        cpu->r[12] = rd32(0x001d3a30u + + 0x20u);
    }
L_001d3a2c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d3a34u, cpu->r[0], 0, 0);
    }
L_001d3a30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001d3a34:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d3a38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3a44;
        }
    }
L_001d3a40:;
    {
        return fn_001e89a8(cpu);
    }
L_001d3a44:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d3a48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine19RegisterDecoderTypeEPFPNS_16DecoderInterfaceEPvE @ 001d3a54 (arm) */
void fn_001d3a54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3a54:;
    {
        cpu->r[3] = rd32(0x001d3a5cu + + 0x20u);
    }
L_001d3a58:;
    {
        cpu->r[2] = rd32(0x001d3a60u + + 0x20u);
    }
L_001d3a5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3a64u, cpu->r[3], 0, 0);
    }
L_001d3a60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3a64:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3a74;
        }
    }
L_001d3a70:;
    {
        return fn_001ddf74(cpu);
    }
L_001d3a74:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d3a78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine18RegisterStreamTypeEPFPNS_15StreamInterfaceEPvE @ 001d3a84 (arm) */
void fn_001d3a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3a84:;
    {
        cpu->r[3] = rd32(0x001d3a8cu + + 0x20u);
    }
L_001d3a88:;
    {
        cpu->r[2] = rd32(0x001d3a90u + + 0x20u);
    }
L_001d3a8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3a94u, cpu->r[3], 0, 0);
    }
L_001d3a90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3a94:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d3a98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3aa4;
        }
    }
L_001d3aa0:;
    {
        return fn_001ddf50(cpu);
    }
L_001d3aa4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d3aa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox9VoxEngine16DestroyVoxEngineEv @ 001d3ab4 (arm) */
void fn_001d3ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3ab4:;
    {
        cpu->r[3] = rd32(0x001d3abcu + + 0x3cu);
    }
L_001d3ab8:;
    {
        cpu->r[2] = rd32(0x001d3ac0u + + 0x3cu);
    }
L_001d3abc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3ac4u, cpu->r[3], 0, 0);
    }
L_001d3ac0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3ac4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3ac8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d3acc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d3ad0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3ad4u)) return;
        }
    }
L_001d3ad4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d3ad8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d3adc:;
    {
        cpu->r[14] = 0x001d3ae4u;
    }
L_001d3ae0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3ae4u)) return;
    }
L_001d3ae4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001d3ae8:;
    {
        cpu->r[14] = 0x001d3aecu; fn_00097dc8(cpu);
    }
L_001d3aec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d3af0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001d3af4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3af8u)) return;
    }
}

/* _ZN3vox9VoxEngine8ShutdownEv @ 001d3b00 (arm) */
void fn_001d3b00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3b00:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3b04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3b08:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d3b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3b28;
        }
    }
L_001d3b14:;
    {
        cpu->r[14] = 0x001d3b18u; fn_001f416c(cpu);
    }
L_001d3b18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d3b1c:;
    {
        cpu->r[14] = 0x001d3b20u; fn_00097dc8(cpu);
    }
L_001d3b20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d3b24:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d3b28:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d3b2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3b30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3b34u)) return;
        }
    }
L_001d3b34:;
    {
        cpu->r[14] = 0x001d3b38u; fn_001f416c(cpu);
    }
L_001d3b38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d3b3c:;
    {
        cpu->r[14] = 0x001d3b40u; fn_00097dc8(cpu);
    }
L_001d3b40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d3b44:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d3b48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3b4cu)) return;
    }
}

/* _ZN3vox9VoxEngineD1Ev @ 001d3b4c (arm) */
void fn_001d3b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3b4c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d3b50:;
    {
        cpu->r[4] = rd32(0x001d3b58u + + 0x70u);
    }
L_001d3b54:;
    {
        cpu->r[3] = rd32(0x001d3b5cu + + 0x70u);
    }
L_001d3b58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d3b5c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d3b64u, cpu->r[4], 0, 0);
    }
L_001d3b60:;
    {
        cpu->r[6] = rd32(0x001d3b68u + + 0x68u);
    }
L_001d3b64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3b68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d3b6c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d3b70:;
    {
        cpu->r[14] = 0x001d3b74u; fn_001d3b00(cpu);
    }
L_001d3b74:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d3b78:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001d3b7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d3b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3b9c;
        }
    }
L_001d3b84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d3b88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d3b8c:;
    {
        cpu->r[14] = 0x001d3b94u;
    }
L_001d3b90:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3b94u)) return;
    }
L_001d3b94:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001d3b98:;
    {
        cpu->r[14] = 0x001d3b9cu; fn_00097dc8(cpu);
    }
L_001d3b9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001d3ba0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d3ba4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d3ba8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3bac:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d3bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3bc0;
        }
    }
L_001d3bb4:;
    {
        cpu->r[14] = 0x001d3bb8u; fn_001ebe28(cpu);
    }
L_001d3bb8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001d3bbc:;
    {
        cpu->r[14] = 0x001d3bc0u; fn_00097dc8(cpu);
    }
L_001d3bc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3bc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3bc8u)) return;
    }
}

/* _ZN3vox9VoxEngineD0Ev @ 001d3bd4 (arm) */
void fn_001d3bd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3bd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3bd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3bdc:;
    {
        cpu->r[14] = 0x001d3be0u; fn_001d3b4c(cpu);
    }
L_001d3be0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3be4:;
    {
        cpu->r[14] = 0x001d3be8u; fn_0018ba20(cpu);
    }
L_001d3be8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3bec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3bf0u)) return;
    }
}

/* _ZN3vox9VoxEngineD2Ev @ 001d3bf0 (arm) */
void fn_001d3bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3bf0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d3bf4:;
    {
        cpu->r[4] = rd32(0x001d3bfcu + + 0x70u);
    }
L_001d3bf8:;
    {
        cpu->r[3] = rd32(0x001d3c00u + + 0x70u);
    }
L_001d3bfc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d3c00:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d3c08u, cpu->r[4], 0, 0);
    }
L_001d3c04:;
    {
        cpu->r[6] = rd32(0x001d3c0cu + + 0x68u);
    }
L_001d3c08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3c0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d3c10:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d3c14:;
    {
        cpu->r[14] = 0x001d3c18u; fn_001d3b00(cpu);
    }
L_001d3c18:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d3c1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001d3c20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d3c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3c40;
        }
    }
L_001d3c28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d3c2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d3c30:;
    {
        cpu->r[14] = 0x001d3c38u;
    }
L_001d3c34:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3c38u)) return;
    }
L_001d3c38:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001d3c3c:;
    {
        cpu->r[14] = 0x001d3c40u; fn_00097dc8(cpu);
    }
L_001d3c40:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001d3c44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d3c48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d3c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d3c50:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d3c54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3c64;
        }
    }
L_001d3c58:;
    {
        cpu->r[14] = 0x001d3c5cu; fn_001ebe28(cpu);
    }
L_001d3c5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001d3c60:;
    {
        cpu->r[14] = 0x001d3c64u; fn_00097dc8(cpu);
    }
L_001d3c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3c68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3c6cu)) return;
    }
}

/* _ZN3vox9VoxEngineC1Ev @ 001d3c78 (arm) */
void fn_001d3c78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3c78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d3c7c:;
    {
        cpu->r[5] = rd32(0x001d3c84u + + 0x5cu);
    }
L_001d3c80:;
    {
        cpu->r[3] = rd32(0x001d3c88u + + 0x5cu);
    }
L_001d3c84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3c88:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d3c90u, cpu->r[5], 0, 0);
    }
L_001d3c8c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001d3c94u + + 0x44u);
    }
L_001d3c90:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001d3c94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3c98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d3c9c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001d3ca0:;
    {
        *(uint64_t*)G(cpu->r[0] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001d3ca4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d3ca8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d3cac:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d3cb0:;
    {
        cpu->r[14] = 0x001d3cb4u; fn_00097dd0(cpu);
    }
L_001d3cb4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d3cb8:;
    {
        cpu->r[14] = 0x001d3cbcu; fn_001ebe50(cpu);
    }
L_001d3cbc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[6]);
    }
L_001d3cc0:;
    {
        cpu->r[14] = 0x001d3cc4u; fn_001e8380(cpu);
    }
L_001d3cc4:;
    {
        cpu->r[3] = rd32(0x001d3cccu + + 0x1cu);
    }
L_001d3cc8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d3ccc:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d3cd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3cd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3cd8u)) return;
    }
}

/* _ZN3vox9VoxEngine12GetVoxEngineEv @ 001d3cf0 (arm) */
void fn_001d3cf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3cf0:;
    {
        cpu->r[3] = rd32(0x001d3cf8u + + 0x40u);
    }
L_001d3cf4:;
    {
        cpu->r[2] = rd32(0x001d3cfcu + + 0x40u);
    }
L_001d3cf8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3d00u, cpu->r[3], 0, 0);
    }
L_001d3cfc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d3d00:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3d04:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001d3d08:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d3d0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3d18;
        }
    }
L_001d3d10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3d14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3d18u)) return;
    }
L_001d3d18:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001d3d1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d3d20:;
    {
        cpu->r[14] = 0x001d3d24u; fn_00097dd0(cpu);
    }
L_001d3d24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d3d28:;
    {
        cpu->r[14] = 0x001d3d2cu; fn_001d3c78(cpu);
    }
L_001d3d2c:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001d3d30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3d34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3d38u)) return;
    }
}

/* _ZN3vox9VoxEngineC2Ev @ 001d3d40 (arm) */
void fn_001d3d40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3d40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d3d44:;
    {
        cpu->r[5] = rd32(0x001d3d4cu + + 0x5cu);
    }
L_001d3d48:;
    {
        cpu->r[3] = rd32(0x001d3d50u + + 0x5cu);
    }
L_001d3d4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3d50:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d3d58u, cpu->r[5], 0, 0);
    }
L_001d3d54:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001d3d5cu + + 0x44u);
    }
L_001d3d58:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001d3d5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3d60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d3d64:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001d3d68:;
    {
        *(uint64_t*)G(cpu->r[0] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001d3d6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d3d70:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d3d74:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d3d78:;
    {
        cpu->r[14] = 0x001d3d7cu; fn_00097dd0(cpu);
    }
L_001d3d7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d3d80:;
    {
        cpu->r[14] = 0x001d3d84u; fn_001ebe50(cpu);
    }
L_001d3d84:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[6]);
    }
L_001d3d88:;
    {
        cpu->r[14] = 0x001d3d8cu; fn_001e8380(cpu);
    }
L_001d3d8c:;
    {
        cpu->r[3] = rd32(0x001d3d94u + + 0x1cu);
    }
L_001d3d90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001d3d94:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d3d98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3d9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3da0u)) return;
    }
}

/* _Z8_GetTimev @ 001d3db8 (arm) */
void fn_001d3db8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3db8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001d3dbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001d3dc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3dc4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001d3dc8:;
    {
        cpu->r[14] = 0x001d3dccu; imp_gettimeofday(cpu); /* gettimeofday */
    }
L_001d3dcc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_001d3dd0:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_001d3dd4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001d3ddcu + + 0x1cu);
    }
L_001d3dd8:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_001d3ddc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_001d3de0:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_001d3de4:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_001d3de8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001d3dec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d3df0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3df4u)) return;
    }
}

/* _ZN3vox9VoxEngine22UpdateEmittersThreadedEv @ 001d3e00 (arm) */
void fn_001d3e00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3e00:;
    {
        cpu->r[3] = rd32(0x001d3e08u + + 0x70u);
    }
L_001d3e04:;
    {
        cpu->r[2] = rd32(0x001d3e0cu + + 0x70u);
    }
L_001d3e08:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d3e10u, cpu->r[3], 0, 0);
    }
L_001d3e0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d3e10:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001d3e14:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d3e18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3e1c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d3e20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d3e24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3e70;
        }
    }
L_001d3e28:;
    {
        cpu->r[14] = 0x001d3e2cu; fn_001d3db8(cpu);
    }
L_001d3e2c:;
    {
        *(uint64_t*)vfp_d(cpu,8) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001d3e30:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x10u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001d3e34:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_001d3e38:;
    {
        cpu->r[14] = 0x001d3e3cu; fn_001d2848(cpu);
    }
L_001d3e3c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[4] + + 0x10u);
    }
L_001d3e40:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001d3e44:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,8), *vfp_d(cpu,7));
    }
L_001d3e48:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d3e4c:;
    {
        vfp_sync_flags(cpu);
    }
L_001d3e50:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_d(cpu,8) = *vfp_d(cpu,7);
        }
    }
L_001d3e54:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 8);
    }
L_001d3e58:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001d3e5c:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001d3e60:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d3e64:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001d3e68:;
    {
        cpu->r[14] = 0x001d3e70u;
    }
L_001d3e6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3e70u)) return;
    }
L_001d3e70:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001d3e74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3e78u)) return;
    }
}

/* _ZN3vox9VoxEngine14UpdateThreadedEv @ 001d3e80 (arm) */
void fn_001d3e80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3e80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d3e84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d3e88:;
    {
        cpu->r[14] = 0x001d3e8cu; fn_001d29bc(cpu);
    }
L_001d3e8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d3e90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d3e94:;
    {
        return fn_001d3e00(cpu);
    }
}

/* _ZN3vox9VoxEngine14UpdateThreadedEPvS1_ @ 001d3e98 (arm) */
void fn_001d3e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3e98:;
    {
        return fn_001d3e80(cpu);
    }
}

/* _ZN3vox9VoxEngine22UpdateEmittersThreadedEPvS1_ @ 001d3e9c (arm) */
void fn_001d3e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3e9c:;
    {
        return fn_001d3e00(cpu);
    }
}

/* _ZN3vox9VoxEngine10InitializeEv @ 001d3ea0 (arm) */
void fn_001d3ea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d3ea0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d3ea4:;
    {
        cpu->r[4] = rd32(0x001d3eacu + + 0x120u);
    }
L_001d3ea8:;
    {
        cpu->r[3] = rd32(0x001d3eb0u + + 0x120u);
    }
L_001d3eac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001d3eb0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d3eb8u, cpu->r[4], 0, 0);
    }
L_001d3eb4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d3eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3ebc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d3ec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d3ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d3fc4;
        }
    }
L_001d3ec8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d3ecc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d3ed0:;
    {
        cpu->r[14] = 0x001d3ed8u;
    }
L_001d3ed4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3ed8u)) return;
    }
L_001d3ed8:;
    {
        cpu->r[3] = rd32(0x001d3ee0u + + 0xf4u);
    }
L_001d3edc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3ee0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3ee4:;
    {
        cpu->r[14] = 0x001d3ee8u; fn_001d3a84(cpu);
    }
L_001d3ee8:;
    {
        cpu->r[3] = rd32(0x001d3ef0u + + 0xe8u);
    }
L_001d3eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3ef0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3ef4:;
    {
        cpu->r[14] = 0x001d3ef8u; fn_001d3a84(cpu);
    }
L_001d3ef8:;
    {
        cpu->r[3] = rd32(0x001d3f00u + + 0xdcu);
    }
L_001d3efc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3f04:;
    {
        cpu->r[14] = 0x001d3f08u; fn_001d3a54(cpu);
    }
L_001d3f08:;
    {
        cpu->r[3] = rd32(0x001d3f10u + + 0xd0u);
    }
L_001d3f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3f14:;
    {
        cpu->r[14] = 0x001d3f18u; fn_001d3a54(cpu);
    }
L_001d3f18:;
    {
        cpu->r[3] = rd32(0x001d3f20u + + 0xc4u);
    }
L_001d3f1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3f24:;
    {
        cpu->r[14] = 0x001d3f28u; fn_001d3a54(cpu);
    }
L_001d3f28:;
    {
        cpu->r[3] = rd32(0x001d3f30u + + 0xb8u);
    }
L_001d3f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3f34:;
    {
        cpu->r[14] = 0x001d3f38u; fn_001d3a54(cpu);
    }
L_001d3f38:;
    {
        cpu->r[3] = rd32(0x001d3f40u + + 0xacu);
    }
L_001d3f3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d3f44:;
    {
        cpu->r[14] = 0x001d3f48u; fn_001d3a54(cpu);
    }
L_001d3f48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d3f4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3f50:;
    {
        cpu->r[14] = 0x001d3f54u; fn_001d3a54(cpu);
    }
L_001d3f54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3f58:;
    {
        cpu->r[0] = 0x00000068u;
    }
L_001d3f5c:;
    {
        cpu->r[14] = 0x001d3f60u; fn_00097dd0(cpu);
    }
L_001d3f60:;
    {
        cpu->r[1] = rd32(0x001d3f68u + + 0x88u);
    }
L_001d3f64:;
    {
        cpu->r[12] = rd32(0x001d3f6cu + + 0x88u);
    }
L_001d3f68:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d3f6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d3f70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001d3f74:;
    {
        cpu->r[12] = add_flags(cpu, 0x001d3f7cu, cpu->r[12], 0, 0);
    }
L_001d3f78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d3f7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d3f80:;
    {
        cpu->r[14] = 0x001d3f84u; fn_001f41a8(cpu);
    }
L_001d3f84:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_001d3f88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d3f8c:;
    {
        cpu->r[0] = 0x00000068u;
    }
L_001d3f90:;
    {
        cpu->r[14] = 0x001d3f94u; fn_00097dd0(cpu);
    }
L_001d3f94:;
    {
        cpu->r[1] = rd32(0x001d3f9cu + + 0x5cu);
    }
L_001d3f98:;
    {
        cpu->r[12] = rd32(0x001d3fa0u + + 0x5cu);
    }
L_001d3f9c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d3fa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d3fa4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001d3fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001d3fb0u, cpu->r[12], 0, 0);
    }
L_001d3fac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d3fb0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d3fb4:;
    {
        cpu->r[14] = 0x001d3fb8u; fn_001f41a8(cpu);
    }
L_001d3fb8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_001d3fbc:;
    {
        cpu->r[14] = 0x001d3fc0u; fn_001d3db8(cpu);
    }
L_001d3fc0:;
    {
        wr64(cpu->r[5] + + 0x10u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001d3fc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d3fc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d3fccu)) return;
    }
}

/* _ZN3vox16DecoderInterfaceD1Ev @ 001d4000 (arm) */
void fn_001d4000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4000:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderInterface4InitEv @ 001d4004 (arm) */
void fn_001d4004(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4004:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderInterface8ShutdownEv @ 001d4008 (arm) */
void fn_001d4008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4008:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterfaceD1Ev @ 001d400c (arm) */
void fn_001d400c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d400c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface4InitEv @ 001d4010 (arm) */
void fn_001d4010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4010:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface8ShutdownEv @ 001d4014 (arm) */
void fn_001d4014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4014:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface9DecodeRefERPvi @ 001d4018 (arm) */
void fn_001d4018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4018:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d401c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001d4020:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d4024:;
    {
        cpu->r[14] = 0x001d402cu;
    }
L_001d4028:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d402cu)) return;
    }
L_001d402c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4030u)) return;
    }
}

/* _ZN3vox22DecoderCursorInterface5ResetEv @ 001d4030 (arm) */
void fn_001d4030(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4030:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4034:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d4038:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d403c:;
    {
        cpu->r[14] = 0x001d4044u;
    }
L_001d4040:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4044u)) return;
    }
L_001d4044:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4048u)) return;
    }
}

/* _ZN3vox22DecoderCursorInterface14GetRewindLimitEv @ 001d4048 (arm) */
void fn_001d4048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4048:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d404c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface6RewindEi @ 001d4050 (arm) */
void fn_001d4050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4050:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface7SetLoopEb @ 001d4054 (arm) */
void fn_001d4054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4054:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_001d4058:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface15GetStreamCursorEv @ 001d405c (arm) */
void fn_001d405c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d405c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d4060:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderCursorInterface20AllowBufferReferenceEv @ 001d4064 (arm) */
void fn_001d4064(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4064:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d4068:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC87GetTypeEv @ 001d406c (arm) */
void fn_001d406c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d406c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001d4070:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC88GetParamEv @ 001d4074 (arm) */
void fn_001d4074(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4074:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d4078:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z8mpc_readP12mpc_reader_tPvi @ 001d407c (arm) */
void fn_001d407c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d407c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001d4080:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4084:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4088:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d408c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4090u)) return;
        }
    }
L_001d4090:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4094:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4098:;
    {
        cpu->r[14] = 0x001d40a0u;
    }
L_001d409c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40a0u)) return;
    }
L_001d40a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40a4u)) return;
    }
}

/* _Z8mpc_seekP12mpc_reader_ti @ 001d40a4 (arm) */
void fn_001d40a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d40a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001d40a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d40ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d40b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d40b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40b8u)) return;
        }
    }
L_001d40b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d40bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d40c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d40c4:;
    {
        cpu->r[14] = 0x001d40ccu;
    }
L_001d40c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40ccu)) return;
    }
L_001d40cc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001d40d0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d40d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40d8u)) return;
    }
}

/* _Z8mpc_tellP12mpc_reader_t @ 001d40d8 (arm) */
void fn_001d40d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d40d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001d40dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d40e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d40e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d40e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40ecu)) return;
        }
    }
L_001d40ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d40f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d40f4:;
    {
        cpu->r[14] = 0x001d40fcu;
    }
L_001d40f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d40fcu)) return;
    }
L_001d40fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4100u)) return;
    }
}

/* _Z11mpc_getsizeP12mpc_reader_t @ 001d4100 (arm) */
void fn_001d4100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4100:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001d4104:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4108:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d410c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4130;
        }
    }
L_001d4110:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d4114:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4130;
        }
    }
L_001d411c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4120:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4124:;
    {
        cpu->r[14] = 0x001d412cu;
    }
L_001d4128:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d412cu)) return;
    }
L_001d412c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4130u)) return;
    }
L_001d4130:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d4134:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4138u)) return;
    }
}

/* _Z11mpc_canseekP12mpc_reader_t @ 001d4138 (arm) */
void fn_001d4138(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4138:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d413c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC8C2EPNS_17DecoderMPC8ParamsE @ 001d4140 (arm) */
void fn_001d4140(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4140:;
    {
        cpu->r[3] = rd32(0x001d4148u + + 0x28u);
    }
L_001d4144:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d4148:;
    {
        cpu->r[2] = rd32(0x001d4150u + + 0x24u);
    }
L_001d414c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d4154u, cpu->r[3], 0, 0);
    }
L_001d4150:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d4154:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001d4158:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1]);
        }
    }
L_001d415c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d4160:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001d4164:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d4168:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001d416c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC8C1EPNS_17DecoderMPC8ParamsE @ 001d4178 (arm) */
void fn_001d4178(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4178:;
    {
        cpu->r[3] = rd32(0x001d4180u + + 0x28u);
    }
L_001d417c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d4180:;
    {
        cpu->r[2] = rd32(0x001d4188u + + 0x24u);
    }
L_001d4184:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d418cu, cpu->r[3], 0, 0);
    }
L_001d4188:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d418c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001d4190:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1]);
        }
    }
L_001d4194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d4198:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001d419c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d41a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001d41a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17DecoderMPC8Cursor7HasDataEv @ 001d41b0 (arm) */
void fn_001d41b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d41b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d41b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d41b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d41bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d41c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d41c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d41c8u)) return;
        }
    }
L_001d41c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d41cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d41d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d41d4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001d41e4;
        }
    }
L_001d41d8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001d41dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d41e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d41f4;
        }
    }
L_001d41e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d41e8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d41ec:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d41f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d41f4u)) return;
    }
L_001d41f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d41f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d41fc:;
    {
        cpu->r[14] = 0x001d4204u;
    }
L_001d4200:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4204u)) return;
    }
L_001d4204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d4208:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d420c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d4210:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d4214:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d4218:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d421cu)) return;
    }
}

/* _ZN3vox17DecoderMPC8Cursor19ConvertFloatToShortEPsPfi @ 001d421c (arm) */
void fn_001d421c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d421c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4220:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001d4224:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d427c;
        }
    }
L_001d4228:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001d422c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d4230:;
    {
        cpu->r[5] = 0x0000ffffu;
    }
L_001d4234:;
    {
        cpu->r[6] = 0x00007fffu;
    }
L_001d4238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001d4240u + + 0x44u);
    }
L_001d423c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d4240:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_001d4244:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001d4248:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001d424c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001d4250:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00008000u, 0, 0);
    }
L_001d4254:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d4258:;
    {
        if (cond_test(cpu, 10)) {
        wr16(cpu->r[1] + cpu->r[0], cpu->r[12]);
        }
    }
L_001d425c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d4270;
        }
    }
L_001d4260:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d4264:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[6];
        }
    }
L_001d4268:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = 0x00008000u;
        }
    }
L_001d426c:;
    {
        wr16(cpu->r[1] + cpu->r[0], cpu->r[12]);
    }
L_001d4270:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001d4274:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001d4278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d423c;
        }
    }
L_001d427c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001d4280:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17DecoderMPC8Cursor19ConvertFixedToShortEPsPii @ 001d4288 (arm) */
void fn_001d4288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4288:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC8D1Ev @ 001d428c (arm) */
void fn_001d428c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d428c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11DecoderMPC8D0Ev @ 001d4290 (arm) */
void fn_001d4290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4290:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4294:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4298:;
    {
        cpu->r[14] = 0x001d429cu; fn_0018ba20(cpu);
    }
L_001d429c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d42a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d42a4u)) return;
    }
}

/* _ZN3vox16DecoderInterfaceD0Ev @ 001d42a4 (arm) */
void fn_001d42a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d42a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d42a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d42ac:;
    {
        cpu->r[14] = 0x001d42b0u; fn_0018ba20(cpu);
    }
L_001d42b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d42b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d42b8u)) return;
    }
}

/* _ZN3vox22DecoderCursorInterfaceD0Ev @ 001d42b8 (arm) */
void fn_001d42b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d42b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d42bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d42c0:;
    {
        cpu->r[14] = 0x001d42c4u; fn_0018ba20(cpu);
    }
L_001d42c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d42c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d42ccu)) return;
    }
}

/* _ZN3vox17DecoderMPC8Cursor4SeekEj @ 001d42cc (arm) */
void fn_001d42cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d42cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d42d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d42d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d42d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d42e4;
        }
    }
L_001d42dc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d42e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d42e4u)) return;
    }
L_001d42e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d42e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001d42ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d42f0:;
    {
        cpu->r[14] = 0x001d42f4u; fn_001f509c(cpu);
    }
L_001d42f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d42f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d42dc;
        }
    }
L_001d42fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4300:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d4304:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4308u)) return;
    }
}

/* _ZN3vox17DecoderMPC8Cursor6DecodeEPvi @ 001d4308 (arm) */
void fn_001d4308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4308:;
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
L_001d430c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4310:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d4314:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d4318:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d431c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d4320:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d4324:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001d4328:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[1] = v;
    }
L_001d432c:;
    {
        cpu->r[14] = 0x001d4330u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001d4330:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d4334:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d4338:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001d433c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d4340:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001d4344:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d43f4;
        }
    }
L_001d4348:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_001d434c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_001d4350:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d43b4;
        }
    }
L_001d4354:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000020u, 1, 1);
    }
L_001d4358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4534;
        }
    }
L_001d435c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[12] = v;
    }
L_001d4360:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d4364:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d4368:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d436c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6]; cpu->r[3] = v;
    }
L_001d4370:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001d4374:;
    {
        cpu->r[14] = 0x001d4378u; fn_001d421c(cpu);
    }
L_001d4378:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d437c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d4380:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4384:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001d4388:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_001d438c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001d4390:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d4394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d4398:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d439c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d43a0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001d43a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001d43a8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_001d43ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d43b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d43b4u)) return;
    }
L_001d43b4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000020u, 1, 1);
    }
L_001d43b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4554;
        }
    }
L_001d43bc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[12] = v;
    }
L_001d43c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d43c4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[3] = v;
    }
L_001d43c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d43cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d43d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001d43d4:;
    {
        cpu->r[14] = 0x001d43d8u; fn_001d421c(cpu);
    }
L_001d43d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d43dc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
    }
L_001d43e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d43e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_001d43e8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_001d43ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001d43f0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[8]);
    }
L_001d43f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d43f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d43fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d4394;
        }
    }
L_001d4400:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_001d4404:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001d4408:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001d440c:;
    {
        goto L_001d4460;
    }
L_001d4410:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d4414:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_001d4418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4504;
        }
    }
L_001d441c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001d4420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4424:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[3] = v;
    }
L_001d4428:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d442c:;
    {
        cpu->r[14] = 0x001d4430u; fn_001d421c(cpu);
    }
L_001d4430:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d4434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001d443c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_001d4440:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d4444:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d4448:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d444c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d4450:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d4454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d44d8;
        }
    }
L_001d4458:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d445c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d4394;
        }
    }
L_001d4460:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001d4464:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d4468:;
    {
        cpu->r[14] = 0x001d446cu; fn_001f5a08(cpu);
    }
L_001d446c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001d4470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d4474:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d4478:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001d447c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001d4480:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_001d4484:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_001d4488:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d4410;
        }
    }
L_001d448c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d4490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000020u, 1, 1);
    }
L_001d4494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d451c;
        }
    }
L_001d4498:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_001d449c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001d44a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d44a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d44a8:;
    {
        cpu->r[14] = 0x001d44acu; fn_001d421c(cpu);
    }
L_001d44ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d44b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d44b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d44b8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001d44bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001d44c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001d44c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d44c8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[1]);
    }
L_001d44cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d44d0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d44d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4458;
        }
    }
L_001d44d8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001d44dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d44e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4394;
        }
    }
L_001d44e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d44e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d44ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d44f0:;
    {
        cpu->r[14] = 0x001d44f4u; fn_001f509c(cpu);
    }
L_001d44f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d44f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4394;
        }
    }
L_001d44fc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001d4500:;
    {
        goto L_001d4458;
    }
L_001d4504:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[3] = v;
    }
L_001d4508:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d450c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d4510:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001d4514:;
    {
        cpu->r[14] = 0x001d4518u; imp_memcpy(cpu); /* memcpy */
    }
L_001d4518:;
    {
        goto L_001d4430;
    }
L_001d451c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_001d4520:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d4524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d4528:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001d452c:;
    {
        cpu->r[14] = 0x001d4530u; imp_memcpy(cpu); /* memcpy */
    }
L_001d4530:;
    {
        goto L_001d44ac;
    }
L_001d4534:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[2] = v;
    }
L_001d4538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d453c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[1] = v;
    }
L_001d4540:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d4544:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001d4548:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d454c:;
    {
        cpu->r[14] = 0x001d4550u; imp_memcpy(cpu); /* memcpy */
    }
L_001d4550:;
    {
        goto L_001d4378;
    }
L_001d4554:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[1] = v;
    }
L_001d4558:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d455c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[2] = v;
    }
L_001d4560:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d4564:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d4568:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001d456c:;
    {
        cpu->r[14] = 0x001d4570u; imp_memcpy(cpu); /* memcpy */
    }
L_001d4570:;
    {
        goto L_001d43d8;
    }
}

/* _ZN3vox17DecoderMPC8CursorD1Ev @ 001d4574 (arm) */
void fn_001d4574(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4574:;
    {
        cpu->r[3] = rd32(0x001d457cu + + 0x40u);
    }
L_001d4578:;
    {
        cpu->r[2] = rd32(0x001d4580u + + 0x40u);
    }
L_001d457c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d4584u, cpu->r[3], 0, 0);
    }
L_001d4580:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4588:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001d458c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d4590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4594:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d4598:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d459c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d45a4;
        }
    }
L_001d45a0:;
    {
        cpu->r[14] = 0x001d45a4u; fn_001f5060(cpu);
    }
L_001d45a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d45a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d45ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d45b4;
        }
    }
L_001d45b0:;
    {
        cpu->r[14] = 0x001d45b4u; fn_00097dc8(cpu);
    }
L_001d45b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d45b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d45bcu)) return;
    }
}

/* _ZN3vox17DecoderMPC8CursorD0Ev @ 001d45c4 (arm) */
void fn_001d45c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d45c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d45c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d45cc:;
    {
        cpu->r[14] = 0x001d45d0u; fn_001d4574(cpu);
    }
L_001d45d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d45d4:;
    {
        cpu->r[14] = 0x001d45d8u; fn_0018ba20(cpu);
    }
L_001d45d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d45dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d45e0u)) return;
    }
}

/* _ZN3vox17DecoderMPC8CursorD2Ev @ 001d45e0 (arm) */
void fn_001d45e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d45e0:;
    {
        cpu->r[3] = rd32(0x001d45e8u + + 0x40u);
    }
L_001d45e4:;
    {
        cpu->r[2] = rd32(0x001d45ecu + + 0x40u);
    }
L_001d45e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d45f0u, cpu->r[3], 0, 0);
    }
L_001d45ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d45f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d45f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001d45f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d45fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4600:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d4604:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d4608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4610;
        }
    }
L_001d460c:;
    {
        cpu->r[14] = 0x001d4610u; fn_001f5060(cpu);
    }
L_001d4610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d4614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4620;
        }
    }
L_001d461c:;
    {
        cpu->r[14] = 0x001d4620u; fn_00097dc8(cpu);
    }
L_001d4620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4624:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4628u)) return;
    }
}

/* _ZN3vox11DecoderMPC813DestroyCursorEPNS_22DecoderCursorInterfaceE @ 001d4630 (arm) */
void fn_001d4630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4630:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4634:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d4638:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d463cu)) return;
        }
    }
L_001d463c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d4640:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4644:;
    {
        cpu->r[14] = 0x001d464cu;
    }
L_001d4648:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d464cu)) return;
    }
L_001d464c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4650:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d4654:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox17DecoderMPC8CursorC1EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d4658 (arm) */
void fn_001d4658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4658:;
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
L_001d465c:;
    {
        cpu->r[5] = rd32(0x001d4664u + + 0x164u);
    }
L_001d4660:;
    {
        cpu->r[14] = rd32(0x001d4668u + + 0x164u);
    }
L_001d4664:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d4668:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d4670u, cpu->r[5], 0, 0);
    }
L_001d466c:;
    {
        cpu->r[6] = rd32(0x001d4674u + + 0x15cu);
    }
L_001d4670:;
    {
        cpu->r[1] = rd32(0x001d4678u + + 0x15cu);
    }
L_001d4674:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4678:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d467c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000174u, 1, 0);
    }
L_001d4680:;
    {
        cpu->r[14] = rd32(0x001d4688u + + 0x150u);
    }
L_001d4684:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d4688:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d468c:;
    {
        cpu->r[0] = 0x00004800u;
    }
L_001d4690:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001d4694:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d4698:;
    {
        cpu->r[14] = rd32(0x001d46a0u + + 0x13cu);
    }
L_001d469c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d46a0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001d46a4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001d46a8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d46ac:;
    {
        cpu->r[14] = rd32(0x001d46b4u + + 0x12cu);
    }
L_001d46b0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001d46b4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[9]);
    }
L_001d46b8:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d46bc:;
    {
        cpu->r[14] = rd32(0x001d46c4u + + 0x120u);
    }
L_001d46c0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001d46c4:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001d46c8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d46cc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[8]);
    }
L_001d46d0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[11]);
    }
L_001d46d4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[14]);
    }
L_001d46d8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d46dc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d46e0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d46e4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d46e8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_001d46ec:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001d46f0:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001d46f4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d46f8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001d46fc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001d4700:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001d4704:;
    {
        wr32(cpu->r[13] + + 0x16cu, cpu->r[12]);
    }
L_001d4708:;
    {
        cpu->r[14] = 0x001d470cu; fn_00097dd4(cpu);
    }
L_001d470c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4710:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001d4714:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
        }
    }
L_001d4718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4728;
        }
    }
L_001d471c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001d4720:;
    {
        cpu->r[14] = 0x001d4724u; fn_001f6170(cpu);
    }
L_001d4724:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001d4728:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d472c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d47b0;
        }
    }
L_001d4730:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d4734:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4798;
        }
    }
L_001d473c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d4740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4798;
        }
    }
L_001d4748:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001d474c:;
    {
        cpu->r[14] = 0x001d4750u; fn_001f504c(cpu);
    }
L_001d4750:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d4754:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d4758:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001d475c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d4760:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001d4764:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4768:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13]);
        }
    }
L_001d476c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d4770:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d4774:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d4778:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d477c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4780:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x16cu);
    }
L_001d4784:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4788:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d478c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d47c4;
        }
    }
L_001d4790:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000174u, 0, 0);
    }
L_001d4794:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4798u)) return;
    }
L_001d4798:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d479c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d47a0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d47a4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d47a8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d47ac:;
    {
        goto L_001d4778;
    }
L_001d47b0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d47b4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d47b8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d47bc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d47c0:;
    {
        goto L_001d4778;
    }
L_001d47c4:;
    {
        cpu->r[14] = 0x001d47c8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d47c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 27u, &shc); cpu->r[5] = v;
        }
    }
L_001d47cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 4, 12u, &shc); cpu->r[0] = v;
        }
    }
L_001d47d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d47d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 17u, &shc); cpu->r[0] = v;
        }
    }
L_001d47d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 19u, &shc); cpu->r[0] = v;
        }
    }
L_001d47dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 20u, &shc); cpu->r[0] = v;
        }
    }
L_001d47e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 2, 19u, &shc); cpu->r[0] = v;
        }
    }
L_001d47e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[9]; cpu->r[0] = v;
        }
    }
}

/* _ZN3vox17DecoderMPC8CursorC2EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d47e8 (arm) */
void fn_001d47e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d47e8:;
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
L_001d47ec:;
    {
        cpu->r[5] = rd32(0x001d47f4u + + 0x164u);
    }
L_001d47f0:;
    {
        cpu->r[14] = rd32(0x001d47f8u + + 0x164u);
    }
L_001d47f4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d47f8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d4800u, cpu->r[5], 0, 0);
    }
L_001d47fc:;
    {
        cpu->r[6] = rd32(0x001d4804u + + 0x15cu);
    }
L_001d4800:;
    {
        cpu->r[1] = rd32(0x001d4808u + + 0x15cu);
    }
L_001d4804:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4808:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d480c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000174u, 1, 0);
    }
L_001d4810:;
    {
        cpu->r[14] = rd32(0x001d4818u + + 0x150u);
    }
L_001d4814:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d4818:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d481c:;
    {
        cpu->r[0] = 0x00004800u;
    }
L_001d4820:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001d4824:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d4828:;
    {
        cpu->r[14] = rd32(0x001d4830u + + 0x13cu);
    }
L_001d482c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4830:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001d4834:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001d4838:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d483c:;
    {
        cpu->r[14] = rd32(0x001d4844u + + 0x12cu);
    }
L_001d4840:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001d4844:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[9]);
    }
L_001d4848:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d484c:;
    {
        cpu->r[14] = rd32(0x001d4854u + + 0x120u);
    }
L_001d4850:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001d4854:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001d4858:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001d485c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[8]);
    }
L_001d4860:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[11]);
    }
L_001d4864:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[14]);
    }
L_001d4868:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d486c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d4870:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d4874:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d4878:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_001d487c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001d4880:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001d4884:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001d4888:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001d488c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001d4890:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001d4894:;
    {
        wr32(cpu->r[13] + + 0x16cu, cpu->r[12]);
    }
L_001d4898:;
    {
        cpu->r[14] = 0x001d489cu; fn_00097dd4(cpu);
    }
L_001d489c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d48a0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001d48a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
        }
    }
L_001d48a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d48b8;
        }
    }
L_001d48ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001d48b0:;
    {
        cpu->r[14] = 0x001d48b4u; fn_001f6170(cpu);
    }
L_001d48b4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001d48b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d48bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4940;
        }
    }
L_001d48c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d48c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d48c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4928;
        }
    }
L_001d48cc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d48d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d48d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4928;
        }
    }
L_001d48d8:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001d48dc:;
    {
        cpu->r[14] = 0x001d48e0u; fn_001f504c(cpu);
    }
L_001d48e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d48e4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d48e8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001d48ec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d48f0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001d48f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d48f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13]);
        }
    }
L_001d48fc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d4900:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d4904:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d4908:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d490c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4910:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x16cu);
    }
L_001d4914:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4918:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d491c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4954;
        }
    }
L_001d4920:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000174u, 0, 0);
    }
L_001d4924:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4928u)) return;
    }
L_001d4928:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d492c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d4930:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d4934:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d4938:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d493c:;
    {
        goto L_001d4908;
    }
L_001d4940:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d4944:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d4948:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d494c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d4950:;
    {
        goto L_001d4908;
    }
L_001d4954:;
    {
        cpu->r[14] = 0x001d4958u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d4958:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_001d495c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 4, 12u, &shc); cpu->r[0] = v;
        }
    }
L_001d4960:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d4964:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 17u, &shc); cpu->r[0] = v;
        }
    }
L_001d4968:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 19u, &shc); cpu->r[0] = v;
        }
    }
L_001d496c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 20u, &shc); cpu->r[0] = v;
        }
    }
L_001d4970:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 2, 19u, &shc); cpu->r[0] = v;
        }
    }
L_001d4974:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[9]; cpu->r[0] = v;
        }
    }
}

/* _ZN3vox11DecoderMPC815CreateNewCursorEPNS_21StreamCursorInterfaceE @ 001d4978 (arm) */
void fn_001d4978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4978:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d497c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d4980:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d4984:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d4988:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_001d498c:;
    {
        cpu->r[14] = 0x001d4990u; fn_00097dd0(cpu);
    }
L_001d4990:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d4994:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d4998:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d499c:;
    {
        cpu->r[14] = 0x001d49a0u; fn_001d4658(cpu);
    }
L_001d49a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d49a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d49a8u)) return;
    }
}

/* _ZN3vox18DecoderMPC8FactoryEPv @ 001d49a8 (arm) */
void fn_001d49a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d49a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d49ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d49b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d49b4:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001d49b8:;
    {
        cpu->r[14] = 0x001d49bcu; fn_00097dd0(cpu);
    }
L_001d49bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d49c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d49c4:;
    {
        cpu->r[14] = 0x001d49c8u; fn_001d4178(cpu);
    }
L_001d49c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d49cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d49d0u)) return;
    }
}

/* _ZN3vox12DecoderMSWav7GetTypeEv @ 001d49d0 (arm) */
void fn_001d49d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d49d0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d49d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12DecoderMSWav8GetParamEv @ 001d49d8 (arm) */
void fn_001d49d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d49d8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d49dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12DecoderMSWavC2Ev @ 001d49e0 (arm) */
void fn_001d49e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d49e0:;
    {
        cpu->r[3] = rd32(0x001d49e8u + + 0x24u);
    }
L_001d49e4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d49e8:;
    {
        cpu->r[1] = rd32(0x001d49f0u + + 0x20u);
    }
L_001d49ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d49f4u, cpu->r[3], 0, 0);
    }
L_001d49f0:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[12]);
    }
L_001d49f4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001d49f8:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_001d49fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d4a00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4a04:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d4a08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12DecoderMSWavC1Ev @ 001d4a14 (arm) */
void fn_001d4a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4a14:;
    {
        cpu->r[3] = rd32(0x001d4a1cu + + 0x24u);
    }
L_001d4a18:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d4a1c:;
    {
        cpu->r[1] = rd32(0x001d4a24u + + 0x20u);
    }
L_001d4a20:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d4a28u, cpu->r[3], 0, 0);
    }
L_001d4a24:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[12]);
    }
L_001d4a28:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001d4a2c:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_001d4a30:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d4a34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4a38:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d4a3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox18DecoderMSWavCursor6DecodeEPvi @ 001d4a48 (arm) */
void fn_001d4a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4a48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4a4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4a50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d4a58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a5cu)) return;
        }
    }
L_001d4a5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4a60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4a64:;
    {
        cpu->r[14] = 0x001d4a6cu;
    }
L_001d4a68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a6cu)) return;
    }
L_001d4a6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a70u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursor4SeekEj @ 001d4a70 (arm) */
void fn_001d4a70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4a70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4a74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4a7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d4a80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a84u)) return;
        }
    }
L_001d4a84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4a88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4a8c:;
    {
        cpu->r[14] = 0x001d4a94u;
    }
L_001d4a90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a94u)) return;
    }
L_001d4a94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4a98u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursor7SetLoopEb @ 001d4a98 (arm) */
void fn_001d4a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4a98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4a9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4aa0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x28u, cpu->r[1]);
        }
    }
L_001d4aa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox18DecoderMSWavCursor7HasDataEv @ 001d4aa8 (arm) */
void fn_001d4aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4aa8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4aac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4ab0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4ab4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d4ab8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4abcu)) return;
        }
    }
L_001d4abc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4ac0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4ac4:;
    {
        cpu->r[14] = 0x001d4accu;
    }
L_001d4ac8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4accu)) return;
    }
L_001d4acc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4ad0u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursor9ParseFileEv @ 001d4ad0 (arm) */
void fn_001d4ad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4ad0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d4ad4:;
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
L_001d4ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4adc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001d4ae0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4e50;
        }
    }
L_001d4ae8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4aec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4af0:;
    {
        cpu->r[14] = 0x001d4af8u;
    }
L_001d4af4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4af8u)) return;
    }
L_001d4af8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4afc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d4b00:;
    {
        cpu->r[6] = rd32(0x001d4b08u + + 0x350u);
    }
L_001d4b04:;
    {
        cpu->r[8] = rd32(0x001d4b0cu + + 0x350u);
    }
L_001d4b08:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d4b0c:;
    {
        cpu->r[10] = rd32(0x001d4b14u + + 0x34cu);
    }
L_001d4b10:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d4b14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d4b18:;
    {
        cpu->r[6] = add_flags(cpu, 0x001d4b20u, cpu->r[6], 0, 0);
    }
L_001d4b1c:;
    {
        cpu->r[8] = add_flags(cpu, 0x001d4b24u, cpu->r[8], 0, 0);
    }
L_001d4b20:;
    {
        cpu->r[10] = add_flags(cpu, 0x001d4b28u, cpu->r[10], 0, 0);
    }
L_001d4b24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001d4b28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4b2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4b30:;
    {
        cpu->r[14] = 0x001d4b38u;
    }
L_001d4b34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4b38u)) return;
    }
L_001d4b38:;
    {
        cpu->r[3] = rd32(0x001d4b40u + + 0x324u);
    }
L_001d4b3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d4b44u, cpu->r[3], 0, 0);
    }
L_001d4b40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001d4b44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4b48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4b4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4b50:;
    {
        cpu->r[14] = 0x001d4b58u;
    }
L_001d4b54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4b58u)) return;
    }
L_001d4b58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4b5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4cac;
        }
    }
L_001d4b60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4b64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4b68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4b6c:;
    {
        cpu->r[14] = 0x001d4b74u;
    }
L_001d4b70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4b74u)) return;
    }
L_001d4b74:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_001d4b78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4cd4;
        }
    }
L_001d4b7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4b80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d4b84:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001d4b88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4b8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4b90:;
    {
        cpu->r[14] = 0x001d4b98u;
    }
L_001d4b94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4b98u)) return;
    }
L_001d4b98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001d4b9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4cac;
        }
    }
L_001d4ba0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d4ba4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d4ba8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4bac:;
    {
        cpu->r[14] = 0x001d4bb0u; imp_strncmp(cpu); /* strncmp */
    }
L_001d4bb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4bb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4cf4;
        }
    }
L_001d4bb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d4bbc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d4bc0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4bc4:;
    {
        cpu->r[14] = 0x001d4bc8u; imp_strncmp(cpu); /* strncmp */
    }
L_001d4bc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4d34;
        }
    }
L_001d4bd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d4bd4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d4bd8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4bdc:;
    {
        cpu->r[14] = 0x001d4be0u; imp_strncmp(cpu); /* strncmp */
    }
L_001d4be0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4dc4;
        }
    }
L_001d4be8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d4bec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d4bf0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4bf4:;
    {
        cpu->r[14] = 0x001d4bf8u; imp_strncmp(cpu); /* strncmp */
    }
L_001d4bf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4bfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4da4;
        }
    }
L_001d4c00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4c04:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4c08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d4c0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_001d4c10:;
    {
        cpu->r[14] = 0x001d4c14u; imp_strncpy(cpu); /* strncpy */
    }
L_001d4c14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4c18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d4c1c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x38u);
    }
L_001d4c20:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_001d4c24:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d4c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4e04;
        }
    }
L_001d4c2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4c30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4c34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4c38:;
    {
        cpu->r[14] = 0x001d4c40u;
    }
L_001d4c3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4c40u)) return;
    }
L_001d4c40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4c44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_001d4c48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_001d4c4c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001d4c50:;
    {
        cpu->r[9] = rd32(cpu->r[9] + + 0x8u);
    }
L_001d4c54:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d4c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4c4c;
        }
    }
L_001d4c5c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001d4c60:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d4c64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001d4c68:;
    {
        cpu->r[14] = 0x001d4c6cu; fn_00097dd0(cpu);
    }
L_001d4c6c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[9]);
    }
L_001d4c70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d4c74:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[0]);
    }
L_001d4c78:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d4c7c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001d4c80:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001d4c84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4c88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4c8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d4c90:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x28u);
    }
L_001d4c94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4c98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4c9c:;
    {
        cpu->r[14] = 0x001d4ca4u;
    }
L_001d4ca0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4ca4u)) return;
    }
L_001d4ca4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001d4ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4b44;
        }
    }
L_001d4cac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4cb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d4cb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d4cb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4cbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4cc0:;
    {
        cpu->r[14] = 0x001d4cc8u;
    }
L_001d4cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4cc8u)) return;
    }
L_001d4cc8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d4ccc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d4cd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4cd4u)) return;
    }
L_001d4cd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4cd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d4cdc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d4ce0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4ce4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4ce8:;
    {
        cpu->r[14] = 0x001d4cf0u;
    }
L_001d4cec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4cf0u)) return;
    }
L_001d4cf0:;
    {
        goto L_001d4b7c;
    }
L_001d4cf4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d4cf8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4cfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4d00:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001d4d04:;
    {
        cpu->r[14] = 0x001d4d08u; imp_strncpy(cpu); /* strncpy */
    }
L_001d4d08:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4d10:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4d14:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d4d18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d4d1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4d20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4d24:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[14]);
    }
L_001d4d28:;
    {
        cpu->r[14] = 0x001d4d30u;
    }
L_001d4d2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4d30u)) return;
    }
L_001d4d30:;
    {
        goto L_001d4b44;
    }
L_001d4d34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4d38:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d4d3c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4d40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001d4d44:;
    {
        cpu->r[14] = 0x001d4d48u; imp_strncpy(cpu); /* strncpy */
    }
L_001d4d48:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4d4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4d50:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d4d54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d4d58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_001d4d5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4d60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4d64:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[14]);
    }
L_001d4d68:;
    {
        cpu->r[14] = 0x001d4d70u;
    }
L_001d4d6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4d70u)) return;
    }
L_001d4d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4d74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_001d4d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4d7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_001d4d80:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d4ca4;
        }
    }
L_001d4d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4d88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 0);
    }
L_001d4d8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d4d90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4d94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4d98:;
    {
        cpu->r[14] = 0x001d4da0u;
    }
L_001d4d9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4da0u)) return;
    }
L_001d4da0:;
    {
        goto L_001d4ca4;
    }
L_001d4da4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4da8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d4dac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d4db0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4db4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4db8:;
    {
        cpu->r[14] = 0x001d4dc0u;
    }
L_001d4dbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4dc0u)) return;
    }
L_001d4dc0:;
    {
        goto L_001d4ca4;
    }
L_001d4dc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4dc8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d4dcc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4dd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_001d4dd4:;
    {
        cpu->r[14] = 0x001d4dd8u; imp_strncpy(cpu); /* strncpy */
    }
L_001d4dd8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4ddc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4de0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4de4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d4de8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_001d4dec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4df0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4df4:;
    {
        wr32(cpu->r[12] + + 0x30u, cpu->r[14]);
    }
L_001d4df8:;
    {
        cpu->r[14] = 0x001d4e00u;
    }
L_001d4dfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4e00u)) return;
    }
L_001d4e00:;
    {
        goto L_001d4ca4;
    }
L_001d4e04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d4e08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4e0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4e10:;
    {
        cpu->r[14] = 0x001d4e18u;
    }
L_001d4e14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4e18u)) return;
    }
L_001d4e18:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d4e1c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d4e20:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001d4e24:;
    {
        cpu->r[14] = 0x001d4e28u; fn_00097dd0(cpu);
    }
L_001d4e28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4e2c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000008u, 1, 0);
    }
L_001d4e30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_001d4e34:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_001d4e38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4e3c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_001d4e40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d4e44:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001d4e48:;
    {
        wr32(cpu->r[3] + + 0x38u, cpu->r[0]);
    }
L_001d4e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4c88;
        }
    }
L_001d4e50:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d4e54:;
    {
        goto L_001d4ccc;
    }
}

/* _ZN3vox19DecoderMSWavFactoryEPv @ 001d4e68 (arm) */
void fn_001d4e68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4e68:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4e6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d4e70:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_001d4e74:;
    {
        cpu->r[14] = 0x001d4e78u; fn_00097dd0(cpu);
    }
L_001d4e78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4e7c:;
    {
        cpu->r[14] = 0x001d4e80u; fn_001d4a14(cpu);
    }
L_001d4e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4e84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4e88u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursorD1Ev @ 001d4e88 (arm) */
void fn_001d4e88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4e88:;
    {
        cpu->r[2] = rd32(0x001d4e90u + + 0x44u);
    }
L_001d4e8c:;
    {
        cpu->r[1] = rd32(0x001d4e94u + + 0x44u);
    }
L_001d4e90:;
    {
        cpu->r[2] = add_flags(cpu, 0x001d4e98u, cpu->r[2], 0, 0);
    }
L_001d4e94:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4e98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4e9c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001d4ea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4ea4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4ea8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4eac:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d4eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4ecc;
        }
    }
L_001d4eb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4eb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4ebc:;
    {
        cpu->r[14] = 0x001d4ec4u;
    }
L_001d4ec0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4ec4u)) return;
    }
L_001d4ec4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d4ec8:;
    {
        cpu->r[14] = 0x001d4eccu; fn_00097dc8(cpu);
    }
L_001d4ecc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4ed0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4ed4u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursorD0Ev @ 001d4edc (arm) */
void fn_001d4edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4edc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4ee0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4ee4:;
    {
        cpu->r[14] = 0x001d4ee8u; fn_001d4e88(cpu);
    }
L_001d4ee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4eec:;
    {
        cpu->r[14] = 0x001d4ef0u; fn_0018ba20(cpu);
    }
L_001d4ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4ef4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4ef8u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursorD2Ev @ 001d4ef8 (arm) */
void fn_001d4ef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4ef8:;
    {
        cpu->r[2] = rd32(0x001d4f00u + + 0x44u);
    }
L_001d4efc:;
    {
        cpu->r[1] = rd32(0x001d4f04u + + 0x44u);
    }
L_001d4f00:;
    {
        cpu->r[2] = add_flags(cpu, 0x001d4f08u, cpu->r[2], 0, 0);
    }
L_001d4f04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d4f08:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4f0c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001d4f10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d4f14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4f18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d4f1c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d4f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d4f3c;
        }
    }
L_001d4f24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d4f28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d4f2c:;
    {
        cpu->r[14] = 0x001d4f34u;
    }
L_001d4f30:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4f34u)) return;
    }
L_001d4f34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d4f38:;
    {
        cpu->r[14] = 0x001d4f3cu; fn_00097dc8(cpu);
    }
L_001d4f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4f40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4f44u)) return;
    }
}

/* _ZN3vox12DecoderMSWav13DestroyCursorEPNS_22DecoderCursorInterfaceE @ 001d4f4c (arm) */
void fn_001d4f4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4f4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d4f50:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d4f54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4f58u)) return;
        }
    }
L_001d4f58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d4f5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4f60:;
    {
        cpu->r[14] = 0x001d4f68u;
    }
L_001d4f64:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d4f68u)) return;
    }
L_001d4f68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d4f6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d4f70:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox18DecoderMSWavCursorC1EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d4f74 (arm) */
void fn_001d4f74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d4f74:;
    {
        cpu->r[3] = rd32(0x001d4f7cu + + 0x174u);
    }
L_001d4f78:;
    {
        cpu->r[12] = rd32(0x001d4f80u + + 0x174u);
    }
L_001d4f7c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001d4f80:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d4f88u, cpu->r[3], 0, 0);
    }
L_001d4f84:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d4f88:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001d4f8c:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[7]);
    }
L_001d4f90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001d4f94:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x40u);
    }
L_001d4f98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d4f9c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d4fa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d4fa4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001d4fa8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001d4fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d4fb0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_001d4fb4:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001d4fb8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[7]);
    }
L_001d4fbc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_001d4fc0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d4fc4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001d4fc8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[7]);
    }
L_001d4fcc:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[5]);
    }
L_001d4fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d50c4;
        }
    }
L_001d4fd4:;
    {
        cpu->r[1] = rd32(0x001d4fdcu + + 0x11cu);
    }
L_001d4fd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d4fdc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d4fe0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d4fe8u, cpu->r[1], 0, 0);
    }
L_001d4fe4:;
    {
        cpu->r[14] = 0x001d4fe8u; imp_strncmp(cpu); /* strncmp */
    }
L_001d4fe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d4fec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d4ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5044;
        }
    }
L_001d4ff4:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x14u);
    }
L_001d4ff8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d4ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d506c;
        }
    }
L_001d5000:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d5004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5098;
        }
    }
L_001d5008:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d500c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d5010:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
        }
    }
L_001d5014:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
        }
    }
L_001d5018:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[13];
        }
    }
L_001d501c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
        }
    }
L_001d5020:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
        }
    }
L_001d5024:;
    {
        if (cond_test(cpu, 2)) {
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
    }
L_001d5028:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
        }
    }
L_001d502c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
        }
    }
L_001d5030:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d5034:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d5038:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d503c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d5040:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5044u)) return;
    }
L_001d5044:;
    {
        cpu->r[1] = rd32(0x001d504cu + + 0xb0u);
    }
L_001d5048:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001d504c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d5050:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d5058u, cpu->r[1], 0, 0);
    }
L_001d5054:;
    {
        cpu->r[14] = 0x001d5058u; imp_strncmp(cpu); /* strncmp */
    }
L_001d5058:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x14u);
    }
L_001d505c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001d5060:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d5064:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d5068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5000;
        }
    }
L_001d506c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5008;
        }
    }
L_001d5074:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5078:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_001d507c:;
    {
        cpu->r[14] = 0x001d5080u; fn_00097dd0(cpu);
    }
L_001d5080:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d5084:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d5088:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d508c:;
    {
        cpu->r[14] = 0x001d5090u; fn_001ebbcc(cpu);
    }
L_001d5090:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d5094:;
    {
        goto L_001d500c;
    }
L_001d5098:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d509c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5008;
        }
    }
L_001d50a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d50a4:;
    {
        cpu->r[0] = 0x0000006cu;
    }
L_001d50a8:;
    {
        cpu->r[14] = 0x001d50acu; fn_00097dd0(cpu);
    }
L_001d50ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d50b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d50b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d50b8:;
    {
        cpu->r[14] = 0x001d50bcu; fn_001eb56c(cpu);
    }
L_001d50bc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d50c0:;
    {
        goto L_001d500c;
    }
L_001d50c4:;
    {
        cpu->r[14] = 0x001d50c8u; fn_001d4ad0(cpu);
    }
L_001d50c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d50cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
        }
    }
L_001d50d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_001d50d4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x40u, cpu->r[7]);
        }
    }
L_001d50d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d4fd4;
        }
    }
L_001d50dc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d50e0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d50e4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d50e8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d50ec:;
    {
        goto L_001d5038;
    }
}

/* _ZN3vox12DecoderMSWav15CreateNewCursorEPNS_21StreamCursorInterfaceE @ 001d5100 (arm) */
void fn_001d5100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5100:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5104:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d5108:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d510c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5110:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_001d5114:;
    {
        cpu->r[14] = 0x001d5118u; fn_00097dd0(cpu);
    }
L_001d5118:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d511c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d5120:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5124:;
    {
        cpu->r[14] = 0x001d5128u; fn_001d4f74(cpu);
    }
L_001d5128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d512c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5130u)) return;
    }
}

/* _ZN3vox18DecoderMSWavCursorC2EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d5130 (arm) */
void fn_001d5130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5130:;
    {
        cpu->r[3] = rd32(0x001d5138u + + 0x174u);
    }
L_001d5134:;
    {
        cpu->r[12] = rd32(0x001d513cu + + 0x174u);
    }
L_001d5138:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001d513c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5144u, cpu->r[3], 0, 0);
    }
L_001d5140:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d5144:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001d5148:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[7]);
    }
L_001d514c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001d5150:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x40u);
    }
L_001d5154:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d5158:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d515c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5160:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001d5164:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001d5168:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d516c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_001d5170:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001d5174:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[7]);
    }
L_001d5178:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_001d517c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d5180:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001d5184:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[7]);
    }
L_001d5188:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[5]);
    }
L_001d518c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5280;
        }
    }
L_001d5190:;
    {
        cpu->r[1] = rd32(0x001d5198u + + 0x11cu);
    }
L_001d5194:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5198:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d519c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d51a4u, cpu->r[1], 0, 0);
    }
L_001d51a0:;
    {
        cpu->r[14] = 0x001d51a4u; imp_strncmp(cpu); /* strncmp */
    }
L_001d51a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d51a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d51ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5200;
        }
    }
L_001d51b0:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x14u);
    }
L_001d51b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d51b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5228;
        }
    }
L_001d51bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d51c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5254;
        }
    }
L_001d51c4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d51c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d51cc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
        }
    }
L_001d51d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
        }
    }
L_001d51d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[13];
        }
    }
L_001d51d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
        }
    }
L_001d51dc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
        }
    }
L_001d51e0:;
    {
        if (cond_test(cpu, 2)) {
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
    }
L_001d51e4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
        }
    }
L_001d51e8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
        }
    }
L_001d51ec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d51f0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d51f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d51f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d51fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5200u)) return;
    }
L_001d5200:;
    {
        cpu->r[1] = rd32(0x001d5208u + + 0xb0u);
    }
L_001d5204:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001d5208:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001d520c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d5214u, cpu->r[1], 0, 0);
    }
L_001d5210:;
    {
        cpu->r[14] = 0x001d5214u; imp_strncmp(cpu); /* strncmp */
    }
L_001d5214:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x14u);
    }
L_001d5218:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001d521c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d5220:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d5224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d51bc;
        }
    }
L_001d5228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d522c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d51c4;
        }
    }
L_001d5230:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5234:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_001d5238:;
    {
        cpu->r[14] = 0x001d523cu; fn_00097dd0(cpu);
    }
L_001d523c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d5240:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d5244:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5248:;
    {
        cpu->r[14] = 0x001d524cu; fn_001ebbcc(cpu);
    }
L_001d524c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d5250:;
    {
        goto L_001d51c8;
    }
L_001d5254:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d51c4;
        }
    }
L_001d525c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5260:;
    {
        cpu->r[0] = 0x0000006cu;
    }
L_001d5264:;
    {
        cpu->r[14] = 0x001d5268u; fn_00097dd0(cpu);
    }
L_001d5268:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d526c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d5270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5274:;
    {
        cpu->r[14] = 0x001d5278u; fn_001eb56c(cpu);
    }
L_001d5278:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d527c:;
    {
        goto L_001d51c8;
    }
L_001d5280:;
    {
        cpu->r[14] = 0x001d5284u; fn_001d4ad0(cpu);
    }
L_001d5284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5288:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
        }
    }
L_001d528c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_001d5290:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x40u, cpu->r[7]);
        }
    }
L_001d5294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5190;
        }
    }
L_001d5298:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d529c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d52a0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d52a4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d52a8:;
    {
        goto L_001d51f4;
    }
}

/* _ZN3vox8DataNode9DropNodesEv @ 001d52bc (arm) */
void fn_001d52bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d52bc:;
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
L_001d52c0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d52c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001d52c8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d52cc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d52d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53f8;
        }
    }
L_001d52d4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d52d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d52dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53e8;
        }
    }
L_001d52e0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d52e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d52e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53d4;
        }
    }
L_001d52ec:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x8u);
    }
L_001d52f0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d52f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53c0;
        }
    }
L_001d52f8:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x8u);
    }
L_001d52fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d5300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53ac;
        }
    }
L_001d5304:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x8u);
    }
L_001d5308:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d530c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5398;
        }
    }
L_001d5310:;
    {
        cpu->r[11] = rd32(cpu->r[9] + + 0x8u);
    }
L_001d5314:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001d5318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5384;
        }
    }
L_001d531c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
    }
L_001d5320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5324:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5370;
        }
    }
L_001d5328:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d532c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d535c;
        }
    }
L_001d5334:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d5338:;
    {
        cpu->r[14] = 0x001d533cu; fn_001d52bc(cpu);
    }
L_001d533c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d5340:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d5344:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5350;
        }
    }
L_001d534c:;
    {
        cpu->r[14] = 0x001d5350u; fn_00097dc8(cpu);
    }
L_001d5350:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
    }
L_001d5354:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5364;
        }
    }
L_001d535c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5360:;
    {
        cpu->r[14] = 0x001d5364u; fn_00097dc8(cpu);
    }
L_001d5364:;
    {
        cpu->r[11] = rd32(cpu->r[9] + + 0x8u);
    }
L_001d5368:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001d536c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5378;
        }
    }
L_001d5370:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001d5374:;
    {
        cpu->r[14] = 0x001d5378u; fn_00097dc8(cpu);
    }
L_001d5378:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x8u);
    }
L_001d537c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d5380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d538c;
        }
    }
L_001d5384:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d5388:;
    {
        cpu->r[14] = 0x001d538cu; fn_00097dc8(cpu);
    }
L_001d538c:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x8u);
    }
L_001d5390:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d5394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53a0;
        }
    }
L_001d5398:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d539c:;
    {
        cpu->r[14] = 0x001d53a0u; fn_00097dc8(cpu);
    }
L_001d53a0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x8u);
    }
L_001d53a4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d53a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53b4;
        }
    }
L_001d53ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d53b0:;
    {
        cpu->r[14] = 0x001d53b4u; fn_00097dc8(cpu);
    }
L_001d53b4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d53b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d53bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53c8;
        }
    }
L_001d53c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d53c4:;
    {
        cpu->r[14] = 0x001d53c8u; fn_00097dc8(cpu);
    }
L_001d53c8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d53cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d53d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53dc;
        }
    }
L_001d53d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d53d8:;
    {
        cpu->r[14] = 0x001d53dcu; fn_00097dc8(cpu);
    }
L_001d53dc:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x8u);
    }
L_001d53e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d53e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d53f8;
        }
    }
L_001d53e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d53ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d53f0:;
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
L_001d53f4:;
    {
        return fn_00097dc8(cpu);
    }
L_001d53f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d53fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5400u)) return;
    }
}

/* _ZN3vox12DecoderMSWavD2Ev @ 001d5400 (arm) */
void fn_001d5400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5400:;
    {
        cpu->r[3] = rd32(0x001d5408u + + 0x70u);
    }
L_001d5404:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d5408:;
    {
        cpu->r[2] = rd32(0x001d5410u + + 0x6cu);
    }
L_001d540c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5410:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5418u, cpu->r[3], 0, 0);
    }
L_001d5414:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001d5418:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d541c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d5420:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d5424:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_001d5428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d542c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d5430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5470;
        }
    }
L_001d5434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d5438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d543c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5460;
        }
    }
L_001d5440:;
    {
        cpu->r[14] = 0x001d5444u; fn_001d52bc(cpu);
    }
L_001d5444:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d5448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d544c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5454;
        }
    }
L_001d5450:;
    {
        cpu->r[14] = 0x001d5454u; fn_00097dc8(cpu);
    }
L_001d5454:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d5458:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d545c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5468;
        }
    }
L_001d5460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5464:;
    {
        cpu->r[14] = 0x001d5468u; fn_00097dc8(cpu);
    }
L_001d5468:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d546c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001d5470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5478u)) return;
    }
}

/* _ZN3vox12DecoderMSWavD1Ev @ 001d5480 (arm) */
void fn_001d5480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5480:;
    {
        cpu->r[3] = rd32(0x001d5488u + + 0x70u);
    }
L_001d5484:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d5488:;
    {
        cpu->r[2] = rd32(0x001d5490u + + 0x6cu);
    }
L_001d548c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5490:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5498u, cpu->r[3], 0, 0);
    }
L_001d5494:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001d5498:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d549c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d54a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d54a4:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_001d54a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d54ac:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d54b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d54f0;
        }
    }
L_001d54b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d54b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d54bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d54e0;
        }
    }
L_001d54c0:;
    {
        cpu->r[14] = 0x001d54c4u; fn_001d52bc(cpu);
    }
L_001d54c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d54c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d54cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d54d4;
        }
    }
L_001d54d0:;
    {
        cpu->r[14] = 0x001d54d4u; fn_00097dc8(cpu);
    }
L_001d54d4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d54d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d54dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d54e8;
        }
    }
L_001d54e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d54e4:;
    {
        cpu->r[14] = 0x001d54e8u; fn_00097dc8(cpu);
    }
L_001d54e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d54ec:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001d54f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d54f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d54f8u)) return;
    }
}

/* _ZN3vox12DecoderMSWavD0Ev @ 001d5500 (arm) */
void fn_001d5500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5500:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5504:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5508:;
    {
        cpu->r[14] = 0x001d550cu; fn_001d5480(cpu);
    }
L_001d550c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5510:;
    {
        cpu->r[14] = 0x001d5514u; fn_0018ba20(cpu);
    }
L_001d5514:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5518:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d551cu)) return;
    }
}

/* _ZN3vox13DecoderNative7GetTypeEv @ 001d551c (arm) */
void fn_001d551c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d551c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d5520:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DecoderNative8GetParamEv @ 001d5524 (arm) */
void fn_001d5524(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5524:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d5528:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19DecoderNativeCursor7HasDataEv @ 001d552c (arm) */
void fn_001d552c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d552c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d5530:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5534:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5538:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d553c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5540u)) return;
        }
    }
L_001d5540:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5544:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5548:;
    {
        cpu->r[14] = 0x001d5550u;
    }
L_001d554c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5550u)) return;
    }
L_001d5550:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5554u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursor14GetRewindLimitEv @ 001d5554 (arm) */
void fn_001d5554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5554:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001d5558:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x64u);
    }
L_001d555c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d5560:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001d5564:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d5574;
        }
    }
L_001d5568:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x58u);
    }
L_001d556c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001d5570:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001d5574:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5578:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19DecoderNativeCursor4SeekEj @ 001d557c (arm) */
void fn_001d557c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d557c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d5580:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5588:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d558c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5590u)) return;
        }
    }
L_001d5590:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5594:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5598:;
    {
        cpu->r[14] = 0x001d55a0u;
    }
L_001d559c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d55a0u)) return;
    }
L_001d55a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d55a4u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursor7SetLoopEb @ 001d55a4 (arm) */
void fn_001d55a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d55a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt4priv12_String_baseIcN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEE17_M_allocate_blockEj @ 001d55a8 (arm) */
void fn_001d55a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d55a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d55ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d55b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d55b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d55e0;
        }
    }
L_001d55b8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000010u, 1, 1);
    }
L_001d55bc:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d55c0u)) return;
        }
    }
L_001d55c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d55c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d55c8:;
    {
        cpu->r[14] = 0x001d55ccu; fn_00097dd0(cpu);
    }
L_001d55cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001d55d0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001d55d4:;
    {
        wr32(cpu->r[5], cpu->r[4]);
    }
L_001d55d8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001d55dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d55e0u)) return;
    }
L_001d55e0:;
    {
        cpu->r[0] = rd32(0x001d55e8u + + 0x8u);
    }
L_001d55e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d55ecu, cpu->r[0], 0, 0);
    }
L_001d55e8:;
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
L_001d55ec:;
    {
        return fn_00208298(cpu);
    }
}

/* _ZNK3vox13StringCompareclERKSbIcSt11char_traitsIcENS_10SAllocatorIcLNS_10VoxMemHintE0EEEES8_ @ 001d55f4 (arm) */
void fn_001d55f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d55f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d55f8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_001d55fc:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x10u);
    }
L_001d5600:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d5604:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_001d5608:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_001d560c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_001d5610:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d5614:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001d5618:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001d561c:;
    {
        cpu->r[14] = 0x001d5620u; imp_memcmp(cpu); /* memcmp */
    }
L_001d5620:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5624:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d563c;
        }
    }
L_001d5628:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d562c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d5630:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d563c;
        }
    }
L_001d5634:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d5638:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d563c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_001d5640:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5644u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursor5ResetEv @ 001d5644 (arm) */
void fn_001d5644(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5644:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d5648:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d564c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5650:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d5654:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5658u)) return;
        }
    }
L_001d5658:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d565c:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001d5660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5664:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001d5668:;
    {
        cpu->r[14] = 0x001d5670u;
    }
L_001d566c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5670u)) return;
    }
L_001d5670:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5674:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d5678:;
    {
        wr32(cpu->r[6] + + 0x64u, cpu->r[3]);
    }
L_001d567c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_001d5680:;
    {
        wr32(cpu->r[6] + + 0x58u, cpu->r[3]);
    }
L_001d5684:;
    {
        wr32(cpu->r[6] + + 0x5cu, cpu->r[3]);
    }
L_001d5688:;
    {
        cpu->r[14] = 0x001d568cu; fn_001ebcfc(cpu);
    }
L_001d568c:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x40u;
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
        cpu->r[5] = wb_tmp;
    }
L_001d5690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001d5694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d56b4;
        }
    }
L_001d5698:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d569c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001d56a0:;
    {
        cpu->r[14] = 0x001d56a4u; fn_00097dc8(cpu);
    }
L_001d56a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d56a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d56ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d569c;
        }
    }
L_001d56b0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001d56b4:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[3]);
    }
L_001d56b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d56bc:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_001d56c0:;
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
L_001d56c4:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox19DecoderNativeCursor13GetStateIndexEv @ 001d56c8 (arm) */
void fn_001d56c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d56c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d56cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_001d56d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d56d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d56d8:;
    {
        cpu->r[14] = 0x001d56dcu; fn_001ebcfc(cpu);
    }
L_001d56dc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d56e0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x40u;
        cpu->r[3] = rd32(cpu->r[2] + + 0x40u);
        cpu->r[2] = wb_tmp;
    }
L_001d56e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d56e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5720;
        }
    }
L_001d56ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d56f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d56f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d56ec;
        }
    }
L_001d56f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001d56fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5700:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[4] = v2;
    }
L_001d5704:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001d5708:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001d570c:;
    {
        cpu->r[14] = 0x001d5710u; fn_00097dc8(cpu);
    }
L_001d5710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5714:;
    {
        cpu->r[14] = 0x001d5718u; fn_001ebcf8(cpu);
    }
L_001d5718:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d571c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5720u)) return;
    }
L_001d5720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5724:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001d5728:;
    {
        cpu->r[14] = 0x001d572cu; fn_001ebcf8(cpu);
    }
L_001d572c:;
    {
        goto L_001d5718;
    }
}

/* _ZN3vox13DecoderNative13DestroyCursorEPNS_22DecoderCursorInterfaceE @ 001d5730 (arm) */
void fn_001d5730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5730:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5734:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d5738:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d573cu)) return;
        }
    }
L_001d573c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d5740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5744:;
    {
        cpu->r[14] = 0x001d574cu;
    }
L_001d5748:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d574cu)) return;
    }
L_001d574c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5750:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d5754:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_13StringCompareESt4pairIKS7_iENS_10_Select1stISB_EENS_11_MapTraitsTISB_EENS4_ISB_LS5_0EEEE8_M_eraseEPNS_18_Rb_tree_node_baseE @ 001d5758 (arm) */
void fn_001d5758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5758:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d575c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d5760:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5764:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5768u)) return;
        }
    }
L_001d5768:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d576c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d5770:;
    {
        cpu->r[14] = 0x001d5774u; fn_001d5758(cpu);
    }
L_001d5774:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001d5778:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d577c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_001d5780:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d5784:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5798;
        }
    }
L_001d578c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5798;
        }
    }
L_001d5794:;
    {
        cpu->r[14] = 0x001d5798u; fn_00097dc8(cpu);
    }
L_001d5798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d579c:;
    {
        cpu->r[14] = 0x001d57a0u; fn_00097dc8(cpu);
    }
L_001d57a0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d57a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5768;
        }
    }
L_001d57a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d57acu)) return;
    }
}

/* _ZNSt6vectorIiN3vox10SAllocatorIiLNS0_10VoxMemHintE0EEEEaSERKS4_ @ 001d57ac (arm) */
void fn_001d57ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d57ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001d57b0:;
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
L_001d57b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d57b8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d57bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d581c;
        }
    }
L_001d57c0:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[8] = v1;
    }
L_001d57c4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d57c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d57cc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001d57d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001d57d4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001d57d8:;
    {
        sub_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_001d57dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d584c;
        }
    }
L_001d57e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d57e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d57e8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001d57ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001d57f0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d5824;
        }
    }
L_001d57f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d57f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001d57fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5890;
        }
    }
L_001d5800:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_001d5804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5814;
        }
    }
L_001d5808:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001d580c:;
    {
        cpu->r[14] = 0x001d5810u; imp_memcpy(cpu); /* memcpy */
    }
L_001d5810:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d5814:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001d5818:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001d581c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5824u)) return;
    }
L_001d5824:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d5828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5814;
        }
    }
L_001d582c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5830:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d5834:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d5838:;
    {
        cpu->r[14] = 0x001d583cu; imp_memmove(cpu); /* memmove */
    }
L_001d583c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d5840:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001d5844:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001d5848:;
    {
        goto L_001d581c;
    }
L_001d584c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001d5850:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5854:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d5858:;
    {
        cpu->r[14] = 0x001d585cu; fn_00097dd0(cpu);
    }
L_001d585c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001d5860:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5874;
        }
    }
L_001d5868:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d586c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d5870:;
    {
        cpu->r[14] = 0x001d5874u; imp_memcpy(cpu); /* memcpy */
    }
L_001d5874:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001d5878:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001d587c:;
    {
        cpu->r[14] = 0x001d5880u; fn_00097dc8(cpu);
    }
L_001d5880:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001d5884:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001d5888:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001d588c:;
    {
        goto L_001d581c;
    }
L_001d5890:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5894:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d5898:;
    {
        cpu->r[14] = 0x001d589cu; imp_memmove(cpu); /* memmove */
    }
L_001d589c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d58a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d58a4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001d58a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d58ac:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d58b0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_001d58b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001d58b8:;
    {
        goto L_001d5800;
    }
}

/* _ZN3vox19DecoderNativeCursor6RewindEi @ 001d58bc (arm) */
void fn_001d58bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d58bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d58c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d58c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d58c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d58cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d58d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d58d4u)) return;
        }
    }
L_001d58d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d58d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001d58dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d5914;
        }
    }
L_001d58e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d58e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_001d58e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d58ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5958;
        }
    }
L_001d58f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d58f4:;
    {
        cpu->r[14] = 0x001d58f8u; fn_001f27d4(cpu);
    }
L_001d58f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d58fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001d5900:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d5904:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5908u)) return;
        }
    }
L_001d5908:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d590c:;
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
L_001d5910:;
    {
        return fn_001f0c48(cpu);
    }
L_001d5914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d5918:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001d591c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5920u)) return;
        }
    }
L_001d5920:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d5924:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_001d5928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d592c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d594c;
        }
    }
L_001d5930:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001d5934:;
    {
        cpu->r[14] = 0x001d5938u; fn_001f27d4(cpu);
    }
L_001d5938:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d593c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001d5940:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d5944:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d5908;
        }
    }
L_001d5948:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d594cu)) return;
    }
L_001d594c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001d5950:;
    {
        cpu->r[14] = 0x001d5954u; fn_001f1060(cpu);
    }
L_001d5954:;
    {
        goto L_001d5938;
    }
L_001d5958:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d595c:;
    {
        cpu->r[14] = 0x001d5960u; fn_001f1060(cpu);
    }
L_001d5960:;
    {
        goto L_001d58f8;
    }
}

/* _ZN3vox13DecoderNative30CreateTransitionRulesContainerEii @ 001d5964 (arm) */
void fn_001d5964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5964:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5968:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d596c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001d5970:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d5974:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001d5978:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 0);
    }
L_001d597c:;
    {
        cpu->r[14] = 0x001d5980u; fn_00097dd4(cpu);
    }
L_001d5980:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5984:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_001d5988:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x50u, cpu->r[4]);
        }
    }
L_001d598c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5990u)) return;
    }
}

/* _ZN3vox13DecoderNative21CreateStatesContainerEi @ 001d5990 (arm) */
void fn_001d5990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5990:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5994:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5998:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001d599c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d59a0:;
    {
        cpu->r[14] = 0x001d59a4u; fn_00097dd4(cpu);
    }
L_001d59a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d59a8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001d59ac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
        }
    }
L_001d59b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d59b4u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursor6DecodeEPvi @ 001d59b4 (arm) */
void fn_001d59b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d59b4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d59b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d59bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d59c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d59c4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001d59c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d59cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d59d0u)) return;
        }
    }
L_001d59d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001d59d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d59d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d59f0;
        }
    }
L_001d59dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d59e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001d59e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001d59e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d59ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d5a24;
        }
    }
L_001d59f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d59f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001d59f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d59fc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x20u);
    }
L_001d5a00:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[1]);
    }
L_001d5a04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000011u, 1, 1);
    }
L_001d5a08:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001d5a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5aa8;
        }
    }
L_001d5a10:;
    {
        cpu->r[14] = 0x001d5a14u; fn_001f27d8(cpu);
    }
L_001d5a14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d5a18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d5a1c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[2]);
    }
L_001d5a20:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001d5a24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5a28:;
    {
        cpu->r[14] = 0x001d5a2cu; fn_001d56c8(cpu);
    }
L_001d5a2c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5a30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d5a90;
        }
    }
L_001d5a34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d5a38:;
    {
        cpu->r[14] = 0x001d5a3cu; fn_001f0bd0(cpu);
    }
L_001d5a3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5a40:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001d5a44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d5a48:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001d5a4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d5a50:;
    {
        cpu->r[14] = 0x001d5a54u; fn_001f0da4(cpu);
    }
L_001d5a54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001d5a58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5a84;
        }
    }
L_001d5a60:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d5a64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d5a68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x64u);
    }
L_001d5a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001d5a70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001d5a74:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[12]);
    }
L_001d5a78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001d5a7c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[1]);
    }
L_001d5a80:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001d5a84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d5a88:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001d5a8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5a90u)) return;
    }
L_001d5a90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001d5a94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d5a98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5a44;
        }
    }
L_001d5a9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d5aa0:;
    {
        cpu->r[14] = 0x001d5aa4u; fn_001f0bd0(cpu);
    }
L_001d5aa4:;
    {
        goto L_001d5a44;
    }
L_001d5aa8:;
    {
        cpu->r[14] = 0x001d5aacu; fn_001f10bc(cpu);
    }
L_001d5aac:;
    {
        goto L_001d5a14;
    }
}

/* _ZN3vox19DecoderNativeCursorD1Ev @ 001d5ab0 (arm) */
void fn_001d5ab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5ab0:;
    {
        cpu->r[2] = rd32(0x001d5ab8u + + 0x100u);
    }
L_001d5ab4:;
    {
        cpu->r[1] = rd32(0x001d5abcu + + 0x100u);
    }
L_001d5ab8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001d5ac0u, cpu->r[2], 0, 0);
    }
L_001d5abc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d5ac0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5ac4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001d5ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5acc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5ad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d5ad4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d5ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5afc;
        }
    }
L_001d5adc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5ae0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5ae4:;
    {
        cpu->r[14] = 0x001d5aecu;
    }
L_001d5ae8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5aecu)) return;
    }
L_001d5aec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_001d5af0:;
    {
        cpu->r[14] = 0x001d5af4u; fn_00097dc8(cpu);
    }
L_001d5af4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5af8:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_001d5afc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001d5b00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5b28;
        }
    }
L_001d5b08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5b10:;
    {
        cpu->r[14] = 0x001d5b18u;
    }
L_001d5b14:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5b18u)) return;
    }
L_001d5b18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_001d5b1c:;
    {
        cpu->r[14] = 0x001d5b20u; fn_00097dc8(cpu);
    }
L_001d5b20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5b24:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001d5b28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001d5b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5b54;
        }
    }
L_001d5b34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5b38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5b3c:;
    {
        cpu->r[14] = 0x001d5b44u;
    }
L_001d5b40:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5b44u)) return;
    }
L_001d5b44:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_001d5b48:;
    {
        cpu->r[14] = 0x001d5b4cu; fn_00097dc8(cpu);
    }
L_001d5b4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5b50:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_001d5b54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001d5b58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5b5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5b74;
        }
    }
L_001d5b60:;
    {
        cpu->r[14] = 0x001d5b64u; fn_001ecd24(cpu);
    }
L_001d5b64:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001d5b68:;
    {
        cpu->r[14] = 0x001d5b6cu; fn_00097dc8(cpu);
    }
L_001d5b6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5b70:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_001d5b74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001d5b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001d5b7c:;
    {
        cpu->r[14] = 0x001d5b80u; fn_001ebe28(cpu);
    }
L_001d5b80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001d5b84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001d5b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ba8;
        }
    }
L_001d5b8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5b90:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001d5b94:;
    {
        cpu->r[14] = 0x001d5b98u; fn_00097dc8(cpu);
    }
L_001d5b98:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001d5b9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5ba0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5b90;
        }
    }
L_001d5ba4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001d5ba8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001d5bac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5bb0:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_001d5bb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5bb8u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursorD0Ev @ 001d5bc0 (arm) */
void fn_001d5bc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5bc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5bc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5bc8:;
    {
        cpu->r[14] = 0x001d5bccu; fn_001d5ab0(cpu);
    }
L_001d5bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5bd0:;
    {
        cpu->r[14] = 0x001d5bd4u; fn_0018ba20(cpu);
    }
L_001d5bd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5bd8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5bdcu)) return;
    }
}

/* _ZN3vox19DecoderNativeCursorD2Ev @ 001d5bdc (arm) */
void fn_001d5bdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5bdc:;
    {
        cpu->r[2] = rd32(0x001d5be4u + + 0x100u);
    }
L_001d5be0:;
    {
        cpu->r[1] = rd32(0x001d5be8u + + 0x100u);
    }
L_001d5be4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001d5becu, cpu->r[2], 0, 0);
    }
L_001d5be8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001d5bec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5bf0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001d5bf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5bf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d5bfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001d5c00:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001d5c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5c28;
        }
    }
L_001d5c08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5c0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5c10:;
    {
        cpu->r[14] = 0x001d5c18u;
    }
L_001d5c14:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5c18u)) return;
    }
L_001d5c18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_001d5c1c:;
    {
        cpu->r[14] = 0x001d5c20u; fn_00097dc8(cpu);
    }
L_001d5c20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5c24:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_001d5c28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001d5c2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5c54;
        }
    }
L_001d5c34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5c38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5c3c:;
    {
        cpu->r[14] = 0x001d5c44u;
    }
L_001d5c40:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5c44u)) return;
    }
L_001d5c44:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_001d5c48:;
    {
        cpu->r[14] = 0x001d5c4cu; fn_00097dc8(cpu);
    }
L_001d5c4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5c50:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001d5c54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001d5c58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5c80;
        }
    }
L_001d5c60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5c64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d5c68:;
    {
        cpu->r[14] = 0x001d5c70u;
    }
L_001d5c6c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5c70u)) return;
    }
L_001d5c70:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_001d5c74:;
    {
        cpu->r[14] = 0x001d5c78u; fn_00097dc8(cpu);
    }
L_001d5c78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5c7c:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_001d5c80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001d5c84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ca0;
        }
    }
L_001d5c8c:;
    {
        cpu->r[14] = 0x001d5c90u; fn_001ecd24(cpu);
    }
L_001d5c90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001d5c94:;
    {
        cpu->r[14] = 0x001d5c98u; fn_00097dc8(cpu);
    }
L_001d5c98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5c9c:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_001d5ca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001d5ca4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001d5ca8:;
    {
        cpu->r[14] = 0x001d5cacu; fn_001ebe28(cpu);
    }
L_001d5cac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001d5cb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001d5cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5cd4;
        }
    }
L_001d5cb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d5cbc:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001d5cc0:;
    {
        cpu->r[14] = 0x001d5cc4u; fn_00097dc8(cpu);
    }
L_001d5cc4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001d5cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5cbc;
        }
    }
L_001d5cd0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001d5cd4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001d5cd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5cdc:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_001d5ce0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5ce4u)) return;
    }
}

/* _ZN3vox13DecoderNative24CreatePlaylistsContainerEi @ 001d5cec (arm) */
void fn_001d5cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5cec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_001d5cf0:;
    {
        return fn_001ecbe8(cpu);
    }
}

/* _ZN3vox13DecoderNativeC1Ev @ 001d5cf4 (arm) */
void fn_001d5cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5cf4:;
    {
        cpu->r[3] = rd32(0x001d5cfcu + + 0x98u);
    }
L_001d5cf8:;
    {
        cpu->r[2] = rd32(0x001d5d00u + + 0x98u);
    }
L_001d5cfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5d04u, cpu->r[3], 0, 0);
    }
L_001d5d00:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5d04:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d5d08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5d0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d5d10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d5d14:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001d5d18:;
    {
        wr16(cpu->r[0] + + 0x24u, cpu->r[5]);
    }
L_001d5d1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_001d5d20:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d5d24:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001d5d28:;
    {
        wr16(cpu->r[4] + + 0x26u, cpu->r[5]);
    }
L_001d5d2c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001d5d30:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001d5d34:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[5]);
    }
L_001d5d38:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001d5d3c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001d5d40:;
    {
        cpu->r[14] = 0x001d5d44u; fn_001ecb04(cpu);
    }
L_001d5d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_001d5d48:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d5d4c:;
    {
        wr8(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_001d5d50:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001d5d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5d58:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001d5d5c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001d5d60:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001d5d64:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001d5d68:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d5d6c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d5d70:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001d5d74:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001d5d78:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001d5d7c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001d5d80:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_001d5d84:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001d5d88:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_001d5d8c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001d5d90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5d94u)) return;
    }
}

/* _ZN3vox20DecoderNativeFactoryEPv @ 001d5d9c (arm) */
void fn_001d5d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5d9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d5da0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d5da4:;
    {
        cpu->r[0] = 0x0000008cu;
    }
L_001d5da8:;
    {
        cpu->r[14] = 0x001d5dacu; fn_00097dd0(cpu);
    }
L_001d5dac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5db0:;
    {
        cpu->r[14] = 0x001d5db4u; fn_001d5cf4(cpu);
    }
L_001d5db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5db8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5dbcu)) return;
    }
}

/* _ZN3vox13DecoderNativeC2Ev @ 001d5dbc (arm) */
void fn_001d5dbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5dbc:;
    {
        cpu->r[3] = rd32(0x001d5dc4u + + 0x98u);
    }
L_001d5dc0:;
    {
        cpu->r[2] = rd32(0x001d5dc8u + + 0x98u);
    }
L_001d5dc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5dccu, cpu->r[3], 0, 0);
    }
L_001d5dc8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5dcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d5dd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5dd4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d5dd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d5ddc:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001d5de0:;
    {
        wr16(cpu->r[0] + + 0x24u, cpu->r[5]);
    }
L_001d5de4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_001d5de8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d5dec:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001d5df0:;
    {
        wr16(cpu->r[4] + + 0x26u, cpu->r[5]);
    }
L_001d5df4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001d5df8:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001d5dfc:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[5]);
    }
L_001d5e00:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001d5e04:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001d5e08:;
    {
        cpu->r[14] = 0x001d5e0cu; fn_001ecb04(cpu);
    }
L_001d5e0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_001d5e10:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d5e14:;
    {
        wr8(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_001d5e18:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001d5e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5e20:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001d5e24:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001d5e28:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001d5e2c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001d5e30:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d5e34:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d5e38:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001d5e3c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001d5e40:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001d5e44:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001d5e48:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_001d5e4c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001d5e50:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_001d5e54:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001d5e58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5e5cu)) return;
    }
}

/* _ZN3vox13DecoderNativeD2Ev @ 001d5e64 (arm) */
void fn_001d5e64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5e64:;
    {
        cpu->r[3] = rd32(0x001d5e6cu + + 0x124u);
    }
L_001d5e68:;
    {
        cpu->r[2] = rd32(0x001d5e70u + + 0x124u);
    }
L_001d5e6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5e74u, cpu->r[3], 0, 0);
    }
L_001d5e70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5e74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5e78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x34u);
    }
L_001d5e7c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d5e80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5e84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d5e88:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d5e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ea0;
        }
    }
L_001d5e90:;
    {
        cpu->r[14] = 0x001d5e94u; fn_00097dc8(cpu);
    }
L_001d5e94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5e98:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001d5e9c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001d5ea0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d5ea4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ebc;
        }
    }
L_001d5eac:;
    {
        cpu->r[14] = 0x001d5eb0u; fn_00097dc8(cpu);
    }
L_001d5eb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5eb4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001d5eb8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001d5ebc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001d5ec0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ed8;
        }
    }
L_001d5ec8:;
    {
        cpu->r[14] = 0x001d5eccu; fn_00097dc8(cpu);
    }
L_001d5ecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5ed0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001d5ed4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001d5ed8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001d5edc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f08;
        }
    }
L_001d5ee4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_001d5ee8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x74u);
    }
L_001d5eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d5ef0:;
    {
        cpu->r[14] = 0x001d5ef4u; fn_001d5758(cpu);
    }
L_001d5ef4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5ef8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001d5efc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001d5f00:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001d5f04:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001d5f08:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x68u);
    }
L_001d5f0c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x64u);
    }
L_001d5f10:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d5f14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f34;
        }
    }
L_001d5f18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0xcu);
    }
L_001d5f1c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_001d5f20:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f2c;
        }
    }
L_001d5f28:;
    {
        cpu->r[14] = 0x001d5f2cu; fn_00097dc8(cpu);
    }
L_001d5f2c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d5f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5f18;
        }
    }
L_001d5f34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_001d5f38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f44;
        }
    }
L_001d5f40:;
    {
        cpu->r[14] = 0x001d5f44u; fn_00097dc8(cpu);
    }
L_001d5f44:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d5f48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d5f4c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d5f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f70;
        }
    }
L_001d5f54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0xcu);
    }
L_001d5f58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_001d5f5c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d5f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f68;
        }
    }
L_001d5f64:;
    {
        cpu->r[14] = 0x001d5f68u; fn_00097dc8(cpu);
    }
L_001d5f68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d5f6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d5f54;
        }
    }
L_001d5f70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d5f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5f80;
        }
    }
L_001d5f7c:;
    {
        cpu->r[14] = 0x001d5f80u; fn_00097dc8(cpu);
    }
L_001d5f80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_001d5f84:;
    {
        cpu->r[14] = 0x001d5f88u; fn_001ecd24(cpu);
    }
L_001d5f88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d5f8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d5f90u)) return;
    }
}

/* _ZN3vox13DecoderNativeD1Ev @ 001d5f98 (arm) */
void fn_001d5f98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d5f98:;
    {
        cpu->r[3] = rd32(0x001d5fa0u + + 0x124u);
    }
L_001d5f9c:;
    {
        cpu->r[2] = rd32(0x001d5fa4u + + 0x124u);
    }
L_001d5fa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d5fa8u, cpu->r[3], 0, 0);
    }
L_001d5fa4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d5fa8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d5fac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x34u);
    }
L_001d5fb0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d5fb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5fb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d5fbc:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d5fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5fd4;
        }
    }
L_001d5fc4:;
    {
        cpu->r[14] = 0x001d5fc8u; fn_00097dc8(cpu);
    }
L_001d5fc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5fcc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001d5fd0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001d5fd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d5fd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5fdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d5ff0;
        }
    }
L_001d5fe0:;
    {
        cpu->r[14] = 0x001d5fe4u; fn_00097dc8(cpu);
    }
L_001d5fe4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d5fe8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001d5fec:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001d5ff0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001d5ff4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d5ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d600c;
        }
    }
L_001d5ffc:;
    {
        cpu->r[14] = 0x001d6000u; fn_00097dc8(cpu);
    }
L_001d6000:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d6004:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001d6008:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001d600c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001d6010:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d603c;
        }
    }
L_001d6018:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_001d601c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x74u);
    }
L_001d6020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d6024:;
    {
        cpu->r[14] = 0x001d6028u; fn_001d5758(cpu);
    }
L_001d6028:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d602c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001d6030:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001d6034:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001d6038:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001d603c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x68u);
    }
L_001d6040:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x64u);
    }
L_001d6044:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d6048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6068;
        }
    }
L_001d604c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0xcu);
    }
L_001d6050:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_001d6054:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6060;
        }
    }
L_001d605c:;
    {
        cpu->r[14] = 0x001d6060u; fn_00097dc8(cpu);
    }
L_001d6060:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d6064:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d604c;
        }
    }
L_001d6068:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_001d606c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d6070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6078;
        }
    }
L_001d6074:;
    {
        cpu->r[14] = 0x001d6078u; fn_00097dc8(cpu);
    }
L_001d6078:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001d607c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d6080:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d6084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d60a4;
        }
    }
L_001d6088:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0xcu);
    }
L_001d608c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_001d6090:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d609c;
        }
    }
L_001d6098:;
    {
        cpu->r[14] = 0x001d609cu; fn_00097dc8(cpu);
    }
L_001d609c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d60a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6088;
        }
    }
L_001d60a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001d60a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d60ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d60b4;
        }
    }
L_001d60b0:;
    {
        cpu->r[14] = 0x001d60b4u; fn_00097dc8(cpu);
    }
L_001d60b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_001d60b8:;
    {
        cpu->r[14] = 0x001d60bcu; fn_001ecd24(cpu);
    }
L_001d60bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d60c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d60c4u)) return;
    }
}

/* _ZN3vox13DecoderNativeD0Ev @ 001d60cc (arm) */
void fn_001d60cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d60cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d60d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d60d4:;
    {
        cpu->r[14] = 0x001d60d8u; fn_001d5f98(cpu);
    }
L_001d60d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d60dc:;
    {
        cpu->r[14] = 0x001d60e0u; fn_0018ba20(cpu);
    }
L_001d60e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d60e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d60e8u)) return;
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_13StringCompareESt4pairIKS7_iENS_10_Select1stISB_EENS_11_MapTraitsTISB_EENS4_ISB_LS5_0EEEE9_M_insertEPNS_18_Rb_tree_node_baseERKSB_SJ_SJ_ @ 001d60e8 (arm) */
void fn_001d60e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d60e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001d60ec:;
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
L_001d60f0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d60f4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001d60f8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d60fc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001d6100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d646c;
        }
    }
L_001d6104:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001d6108:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d610c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6394;
        }
    }
L_001d6110:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d6114:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_001d6118:;
    {
        cpu->r[14] = 0x001d611cu; fn_00097dd0(cpu);
    }
L_001d611c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d6120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001d6124:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001d6128:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d612c:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d6130:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_001d6134:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d6138:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001d613c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d6140:;
    {
        cpu->r[14] = 0x001d6144u; fn_001d55a8(cpu);
    }
L_001d6144:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001d6148:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x24u);
    }
L_001d614c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6160;
        }
    }
L_001d6150:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d6154:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d6158:;
    {
        cpu->r[14] = 0x001d615cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d615c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d6160:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d6164:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_001d6168:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001d616c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d6170:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x18u);
    }
L_001d6174:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_001d6178:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_001d617c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d6180:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001d6184:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001d6188:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[1]);
    }
L_001d618c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[7]);
        }
    }
L_001d6190:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_001d6194:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001d6198:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d619c:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001d61a0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001d61a4:;
    {
        wr8(cpu->r[2], cpu->r[8]);
    }
L_001d61a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001d61ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6280;
        }
    }
L_001d61b0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d61b4:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001d61b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d61bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d627c;
        }
    }
L_001d61c0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d61c4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x8u);
    }
L_001d61c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001d61cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d62a0;
        }
    }
L_001d61d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d61d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d61fc;
        }
    }
L_001d61d8:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_001d61dc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d61e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d61fc;
        }
    }
L_001d61e4:;
    {
        wr8(cpu->r[1], cpu->r[7]);
    }
L_001d61e8:;
    {
        wr8(cpu->r[0], cpu->r[7]);
    }
L_001d61ec:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d61f0:;
    {
        wr8(cpu->r[12], cpu->r[10]);
    }
L_001d61f4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d61f8:;
    {
        goto L_001d61a8;
    }
L_001d61fc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_001d6200:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001d6204:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_001d6208:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001d620c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001d6210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d634c;
        }
    }
L_001d6214:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d6218:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001d621c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d6220:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0xcu);
    }
L_001d6224:;
    {
        wr8(cpu->r[3], cpu->r[8]);
    }
L_001d6228:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x8u);
    }
L_001d622c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d6230:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001d6234:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001d6238:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d623c:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001d6240:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6244:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001d6248:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
        }
    }
L_001d624c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6264;
        }
    }
L_001d6250:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d6254:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d6258:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001d625c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
        }
    }
L_001d6260:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
        }
    }
L_001d6264:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d6268:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001d626c:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
    }
L_001d6270:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d6274:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6278:;
    {
        goto L_001d61a8;
    }
L_001d627c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001d6280:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d6284:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d6288:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001d628c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d6290:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001d6294:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001d6298:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d629c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d62a0u)) return;
    }
L_001d62a0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0xcu);
    }
L_001d62a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d62a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d62d0;
        }
    }
L_001d62ac:;
    {
        cpu->r[10] = rd8(cpu->r[1]);
    }
L_001d62b0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d62b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d62d0;
        }
    }
L_001d62b8:;
    {
        wr8(cpu->r[0], cpu->r[7]);
    }
L_001d62bc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d62c0:;
    {
        wr8(cpu->r[1], cpu->r[7]);
    }
L_001d62c4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d62c8:;
    {
        wr8(cpu->r[12], cpu->r[10]);
    }
L_001d62cc:;
    {
        goto L_001d61a8;
    }
L_001d62d0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_001d62d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001d62d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_001d62dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d62e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001d62e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6424;
        }
    }
L_001d62e8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d62ec:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001d62f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d62f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d62f8:;
    {
        wr8(cpu->r[3], cpu->r[8]);
    }
L_001d62fc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001d6300:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d6304:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
    }
L_001d6308:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
        }
    }
L_001d630c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d6310:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_001d6314:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001d631c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_001d6320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6338;
        }
    }
L_001d6324:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d6328:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0xcu);
    }
L_001d632c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001d6330:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[1]);
        }
    }
L_001d6334:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[1]);
        }
    }
L_001d6338:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_001d633c:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_001d6340:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d6344:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6348:;
    {
        goto L_001d61a8;
    }
L_001d634c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0xcu);
    }
L_001d6350:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d6354:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
        }
    }
L_001d6358:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
        }
    }
L_001d635c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[5]);
    }
L_001d6360:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001d6364:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6368:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001d636c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_001d6370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6388;
        }
    }
L_001d6374:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d6378:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0xcu);
    }
L_001d637c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001d6380:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[0]);
        }
    }
L_001d6384:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[0]);
        }
    }
L_001d6388:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001d638c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_001d6390:;
    {
        goto L_001d6214;
    }
L_001d6394:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d6398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d639c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d64ec;
        }
    }
L_001d63a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d63a4:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_001d63a8:;
    {
        cpu->r[14] = 0x001d63acu; fn_00097dd0(cpu);
    }
L_001d63ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d63b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001d63b4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001d63b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d63bc:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d63c0:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_001d63c4:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d63c8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001d63cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d63d0:;
    {
        cpu->r[14] = 0x001d63d4u; fn_001d55a8(cpu);
    }
L_001d63d4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001d63d8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x24u);
    }
L_001d63dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d63f0;
        }
    }
L_001d63e0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d63e4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d63e8:;
    {
        cpu->r[14] = 0x001d63ecu; imp_memcpy(cpu); /* memcpy */
    }
L_001d63ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d63f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d63f4:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_001d63f8:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001d63fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d6400:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x18u);
    }
L_001d6404:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001d6408:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001d640c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d6410:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_001d6414:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001d6418:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[1]);
    }
L_001d641c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
        }
    }
L_001d6420:;
    {
        goto L_001d6190;
    }
L_001d6424:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d6428:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d642c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001d6430:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
        }
    }
L_001d6434:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d6438:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001d643c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6440:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001d6444:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_001d6448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6460;
        }
    }
L_001d644c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d6450:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x8u);
    }
L_001d6454:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001d6458:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[1]);
        }
    }
L_001d645c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[1]);
        }
    }
L_001d6460:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001d6464:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[0]);
    }
L_001d6468:;
    {
        goto L_001d62e8;
    }
L_001d646c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d6470:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_001d6474:;
    {
        cpu->r[14] = 0x001d6478u; fn_00097dd0(cpu);
    }
L_001d6478:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d647c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001d6480:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001d6484:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d6488:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d648c:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_001d6490:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d6494:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001d6498:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d649c:;
    {
        cpu->r[14] = 0x001d64a0u; fn_001d55a8(cpu);
    }
L_001d64a0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001d64a4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x24u);
    }
L_001d64a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d64bc;
        }
    }
L_001d64ac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d64b0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d64b4:;
    {
        cpu->r[14] = 0x001d64b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001d64b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d64bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d64c0:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_001d64c4:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001d64c8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d64cc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x18u);
    }
L_001d64d0:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_001d64d4:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001d64d8:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[1]);
    }
L_001d64dc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_001d64e0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_001d64e4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[7]);
    }
L_001d64e8:;
    {
        goto L_001d6190;
    }
L_001d64ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_001d64f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_001d64f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d64f8:;
    {
        cpu->r[14] = 0x001d64fcu; fn_001d55f4(cpu);
    }
L_001d64fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d6500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6110;
        }
    }
L_001d6504:;
    {
        goto L_001d63a0;
    }
}

/* _ZNSt6vectorIS_IiN3vox10SAllocatorIiLNS0_10VoxMemHintE0EEEENS1_IS4_LS2_0EEEEaSERKS6_ @ 001d6508 (arm) */
void fn_001d6508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d6508:;
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
L_001d650c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001d6510:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d6514:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d6518:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001d651c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6620;
        }
    }
L_001d6520:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001d6524:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d6528:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d652c:;
    {
        cpu->r[4] = rd32(cpu->r[8]);
    }
L_001d6530:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001d6534:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_001d6538:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d653c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001d6540:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6544:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001d6548:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_001d654c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_001d6550:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 8u, &shc), 0, 0);
    }
L_001d6554:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_001d6558:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 16u, &shc), 0, 0);
    }
L_001d655c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 16u, &shc), 0, 0);
    }
L_001d6560:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d6564:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001d6568:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d656c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001d6570:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_001d6574:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6774;
        }
    }
L_001d6578:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d657c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d6580:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001d6584:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6588:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d658c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_001d6590:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 8u, &shc), 0, 0);
    }
L_001d6594:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 16u, &shc), 0, 0);
    }
L_001d6598:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001d659c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001d65a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d662c;
        }
    }
L_001d65a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d65a8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_001d65ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d65e4;
        }
    }
L_001d65b0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d65b4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d65b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001d65bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001d65c0:;
    {
        cpu->r[14] = 0x001d65c4u; fn_001d57ac(cpu);
    }
L_001d65c4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001d65c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001d65cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d65b8;
        }
    }
L_001d65d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d65d4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[4] = v;
    }
L_001d65d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001d65dc:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d65e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d65e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001d65e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6888;
        }
    }
L_001d65ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d65f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d65f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d65f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6600;
        }
    }
L_001d65fc:;
    {
        cpu->r[14] = 0x001d6600u; fn_00097dc8(cpu);
    }
L_001d6600:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001d6604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d65ec;
        }
    }
L_001d6608:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d660c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001d6610:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001d6614:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001d6618:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d661c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_001d6620:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6624:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d6628:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d662cu)) return;
    }
L_001d662c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d6630:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 2); cpu->r[2] = (uint32_t)(v >> 2); }
    }
L_001d6634:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6638:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001d663c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_001d6640:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 8u, &shc), 0, 0);
    }
L_001d6644:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 16u, &shc), 0, 0);
    }
L_001d6648:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001d664c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d6650:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d66a0;
        }
    }
L_001d6654:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d6658:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_001d665c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001d6660:;
    {
        cpu->r[14] = 0x001d6664u; fn_001d57ac(cpu);
    }
L_001d6664:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d6668:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d666c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6658;
        }
    }
L_001d6670:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6674:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6678:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[9] = v1;
    }
L_001d667c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001d6680:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6684:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6688:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d668c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d6690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d6694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d6698:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d669c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d66a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_001d66a4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001d66a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d66ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001d66b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
    }
L_001d66b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 16u, &shc), 0, 0);
    }
L_001d66b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d66bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001d66c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d66c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d689c;
        }
    }
L_001d66c8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d66cc:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_001d66d0:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001d66d4:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001d66d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_001d66dc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001d66e0:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001d66e4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d66e8:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d66ec:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[4];
        wr32(cpu->r[5] + cpu->r[4], cpu->r[10]);
        cpu->r[5] = wb_tmp;
    }
L_001d66f0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001d66f4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[10]);
    }
L_001d66f8:;
    {
        uint32_t v = cpu->r[9] & ~ 0x00000003u; cpu->r[9] = v;
    }
L_001d66fc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[10]);
    }
L_001d6700:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d6704:;
    {
        cpu->r[14] = 0x001d6708u; fn_00097dd0(cpu);
    }
L_001d6708:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001d670c:;
    {
        wr32(cpu->r[11] + cpu->r[4], cpu->r[0]);
    }
L_001d6710:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001d6714:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d6718:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001d671c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d6720:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[2]);
    }
L_001d6724:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d6728:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_001d672c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 0);
    }
L_001d6730:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001d6734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6740;
        }
    }
L_001d6738:;
    {
        cpu->r[14] = 0x001d673cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d673c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001d6740:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6744:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_001d6748:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001d674c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d6750:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001d6754:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d6758:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d66d8;
        }
    }
L_001d675c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d6760:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6764:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d6768:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001d676c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001d6770:;
    {
        goto L_001d6618;
    }
L_001d6774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001d6778:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d677c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001d6780:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001d6784:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d6788:;
    {
        cpu->r[14] = 0x001d678cu; fn_00097dd0(cpu);
    }
L_001d678c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d6790:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d6794:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d6798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d682c;
        }
    }
L_001d679c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d67a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d67a4:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001d67a8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001d67ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d67b0:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_001d67b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d67b8:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x4u);
    }
L_001d67bc:;
    {
        uint32_t wb_tmp = cpu->r[6] + cpu->r[5];
        wr32(cpu->r[6] + cpu->r[5], cpu->r[7]);
        cpu->r[6] = wb_tmp;
    }
L_001d67c0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001d67c4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[7]);
    }
L_001d67c8:;
    {
        uint32_t v = cpu->r[9] & ~ 0x00000003u; cpu->r[9] = v;
    }
L_001d67cc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[7]);
    }
L_001d67d0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d67d4:;
    {
        cpu->r[14] = 0x001d67d8u; fn_00097dd0(cpu);
    }
L_001d67d8:;
    {
        wr32(cpu->r[11] + cpu->r[5], cpu->r[0]);
    }
L_001d67dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001d67e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d67e4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d67e8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001d67ec:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x4u);
    }
L_001d67f0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d67f4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[9]);
    }
L_001d67f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_001d67fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001d6800:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d6804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6810;
        }
    }
L_001d6808:;
    {
        cpu->r[14] = 0x001d680cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d680c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d6810:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d6814:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_001d6818:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d681c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001d6820:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d6824:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001d6828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d67a8;
        }
    }
L_001d682c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6830:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_001d6834:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001d6838:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001d683c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6868;
        }
    }
L_001d6840:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d6844:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d6848:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d684c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6858;
        }
    }
L_001d6854:;
    {
        cpu->r[14] = 0x001d6858u; fn_00097dc8(cpu);
    }
L_001d6858:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d685c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6844;
        }
    }
L_001d6860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6864:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d6868:;
    {
        cpu->r[14] = 0x001d686cu; fn_00097dc8(cpu);
    }
L_001d686c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6870:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_001d6878:;
    {
        wr32(cpu->r[2], cpu->r[11]);
    }
L_001d687c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001d6880:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_001d6884:;
    {
        goto L_001d6618;
    }
L_001d6888:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d688c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001d6890:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d6894:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001d6898:;
    {
        goto L_001d6618;
    }
L_001d689c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d68a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001d68a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d68a8:;
    {
        goto L_001d6618;
    }
}

/* _ZN3vox13DecoderNative28CreateSegmentsInfoContainersEii @ 001d68ac (arm) */
void fn_001d68ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d68ac:;
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
L_001d68b0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001d68b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_001d68b8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d68bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d68c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d68c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001d68c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 0);
    }
L_001d68cc:;
    {
        cpu->r[14] = 0x001d68d0u; fn_00097dd4(cpu);
    }
L_001d68d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d68d4:;
    {
        wr32(cpu->r[11] + + 0x34u, cpu->r[0]);
    }
L_001d68d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6b50;
        }
    }
L_001d68dc:;
    {
        cpu->r[8] = rd32(cpu->r[11] + + 0x58u);
    }
L_001d68e0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x60u);
    }
L_001d68e4:;
    {
        wr32(cpu->r[11] + + 0x30u, cpu->r[4]);
    }
L_001d68e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001d68ec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d68f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d68f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d68f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d68fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d6900:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d6904:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d6908:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_001d690c:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
        }
    }
L_001d6910:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d6a74;
        }
    }
L_001d6914:;
    {
        cpu->r[3] = 0x00005555u;
    }
L_001d6918:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1555u << 16);
    }
L_001d691c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d6920:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6b58;
        }
    }
L_001d6924:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x5cu);
    }
L_001d6928:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d692c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001d6930:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6934:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6938:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d693c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d6940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d6944:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d6948:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d694c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001d6950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6b6c;
        }
    }
L_001d6954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001d6958:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d695c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_001d6960:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001d6964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d6968:;
    {
        cpu->r[14] = 0x001d696cu; fn_00097dd0(cpu);
    }
L_001d696c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6970:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d6974:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001d6978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6a18;
        }
    }
L_001d697c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d6980:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_001d6984:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d6988:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001d698c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d6990:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001d6994:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001d6998:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001d699c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d69a0:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x4u);
    }
L_001d69a4:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[4];
        wr32(cpu->r[5] + cpu->r[4], cpu->r[6]);
        cpu->r[5] = wb_tmp;
    }
L_001d69a8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001d69ac:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[6]);
    }
L_001d69b0:;
    {
        uint32_t v = cpu->r[9] & ~ 0x00000003u; cpu->r[9] = v;
    }
L_001d69b4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_001d69b8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d69bc:;
    {
        cpu->r[14] = 0x001d69c0u; fn_00097dd0(cpu);
    }
L_001d69c0:;
    {
        wr32(cpu->r[11] + cpu->r[4], cpu->r[0]);
    }
L_001d69c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001d69c8:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_001d69cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d69d0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001d69d4:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x4u);
    }
L_001d69d8:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d69dc:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[9]);
    }
L_001d69e0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_001d69e4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001d69e8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d69ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d69f8;
        }
    }
L_001d69f0:;
    {
        cpu->r[14] = 0x001d69f4u; imp_memcpy(cpu); /* memcpy */
    }
L_001d69f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d69f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d69fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d6a00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001d6a04:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d6a08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001d6a0c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d6a10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6990;
        }
    }
L_001d6a14:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d6a18:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x5cu);
    }
L_001d6a1c:;
    {
        cpu->r[5] = rd32(cpu->r[11] + + 0x58u);
    }
L_001d6a20:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001d6a24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6a4c;
        }
    }
L_001d6a28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d6a2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d6a30:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d6a34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6a38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6a40;
        }
    }
L_001d6a3c:;
    {
        cpu->r[14] = 0x001d6a40u; fn_00097dc8(cpu);
    }
L_001d6a40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d6a44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6a2c;
        }
    }
L_001d6a48:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x58u);
    }
L_001d6a4c:;
    {
        cpu->r[14] = 0x001d6a50u; fn_00097dc8(cpu);
    }
L_001d6a50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6a54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d6a58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d6a5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6a60:;
    {
        wr32(cpu->r[11] + + 0x58u, cpu->r[1]);
    }
L_001d6a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001d6a68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6a6c:;
    {
        wr32(cpu->r[11] + + 0x60u, cpu->r[2]);
    }
L_001d6a70:;
    {
        wr32(cpu->r[11] + + 0x5cu, cpu->r[3]);
    }
L_001d6a74:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d6a78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6a7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d6a80:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_001d6a84:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_001d6a88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000058u, 0, 0);
    }
L_001d6a8c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001d6a90:;
    {
        cpu->r[14] = 0x001d6a94u; fn_00097dd0(cpu);
    }
L_001d6a94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6a98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001d6a9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d6aa0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_001d6aa4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001d6aa8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001d6aac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6ab0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_001d6ab4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6ab8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_001d6abc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 8u, &shc), 0, 0);
    }
L_001d6ac0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 16u, &shc), 0, 0);
    }
L_001d6ac4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001d6ac8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d6acc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6b00;
        }
    }
L_001d6ad0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001d6ad4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d6ad8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d6adc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d6ae0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d6ae4:;
    {
        cpu->r[14] = 0x001d6ae8u; fn_00097dd0(cpu);
    }
L_001d6ae8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d6aec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d6af0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001d6af4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d6af8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001d6afc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6ad0;
        }
    }
L_001d6b00:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001d6b04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d6b08:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_001d6b0c:;
    {
        cpu->r[14] = 0x001d6b10u; fn_001d6508(cpu);
    }
L_001d6b10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d6b14:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d6b18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001d6b1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6b44;
        }
    }
L_001d6b20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d6b24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d6b28:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d6b2c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6b38;
        }
    }
L_001d6b34:;
    {
        cpu->r[14] = 0x001d6b38u; fn_00097dc8(cpu);
    }
L_001d6b38:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d6b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6b24;
        }
    }
L_001d6b40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d6b44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d6b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6b50;
        }
    }
L_001d6b4c:;
    {
        cpu->r[14] = 0x001d6b50u; fn_00097dc8(cpu);
    }
L_001d6b50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d6b54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d6b58u)) return;
    }
L_001d6b58:;
    {
        cpu->r[0] = rd32(0x001d6b60u + + 0x2cu);
    }
L_001d6b5c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d6b64u, cpu->r[0], 0, 0);
    }
L_001d6b60:;
    {
        cpu->r[14] = 0x001d6b64u; fn_00208298(cpu);
    }
L_001d6b64:;
    {
        cpu->r[8] = rd32(cpu->r[11] + + 0x58u);
    }
L_001d6b68:;
    {
        goto L_001d6924;
    }
L_001d6b6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001d6b70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d6b74:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_001d6b78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001d6b7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d6b80:;
    {
        cpu->r[14] = 0x001d6b84u; fn_00097dd0(cpu);
    }
L_001d6b84:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001d6b88:;
    {
        goto L_001d6a50;
    }
}

/* _ZNSt6vectorIN3vox16TransitionParamsENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEEaSERKS5_ @ 001d6b90 (arm) */
void fn_001d6b90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d6b90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001d6b94:;
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
L_001d6b98:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d6b9c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d6ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6c24;
        }
    }
L_001d6ba4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d6ba8:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_001d6bac:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d6bb0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d6bb4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001d6bb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d6bbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001d6bc0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 3u, &shc); cpu->r[4] = v;
    }
L_001d6bc4:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001d6bc8:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 1, 3u, &shc), 1, 1);
    }
L_001d6bcc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6cbc;
        }
    }
L_001d6bd0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d6bd4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001d6bd8:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 3u, &shc); cpu->r[7] = v;
    }
L_001d6bdc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001d6be0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6c2c;
        }
    }
L_001d6be4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d6be8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[4] = v;
        }
    }
L_001d6bec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6c1c;
        }
    }
L_001d6bf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d6bf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001d6bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001d6bfc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001d6c00:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6c04:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001d6c08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d6c0c:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[1]);
    }
L_001d6c10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6bf4;
        }
    }
L_001d6c14:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d6c18:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[4] = v;
    }
L_001d6c1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001d6c20:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001d6c24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d6c28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d6c2cu)) return;
    }
L_001d6c2c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001d6c30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_001d6c34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6c74;
        }
    }
L_001d6c38:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d6c3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001d6c40:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001d6c44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d6c48:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6c4c:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[0]);
    }
L_001d6c50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d6c54:;
    {
        wr8(cpu->r[7] + + 0x4u, cpu->r[1]);
    }
L_001d6c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6c3c;
        }
    }
L_001d6c5c:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_001d6c60:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001d6c64:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001d6c68:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001d6c6c:;
    {
        uint32_t v = cpu->r[7] & ~ 0x00000007u; cpu->r[7] = v;
    }
L_001d6c70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001d6c74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_001d6c78:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001d6c7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d6c80:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
        }
    }
L_001d6c84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6c20;
        }
    }
L_001d6c88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d6c8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001d6c90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001d6c94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d6c98:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6c9c:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_001d6ca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d6ca4:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_001d6ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6c8c;
        }
    }
L_001d6cac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d6cb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_001d6cb4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001d6cb8:;
    {
        goto L_001d6c24;
    }
L_001d6cbc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[8] = v;
    }
L_001d6cc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d6cc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d6cc8:;
    {
        cpu->r[14] = 0x001d6cccu; fn_00097dd0(cpu);
    }
L_001d6ccc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d6cd0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d6cd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6cfc;
        }
    }
L_001d6cd8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d6cdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d6ce0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001d6ce4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001d6ce8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6cec:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_001d6cf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d6cf4:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_001d6cf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6cdc;
        }
    }
L_001d6cfc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d6d00:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001d6d04:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d6d08:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001d6d0c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001d6d10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
        }
    }
L_001d6d14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001d6d18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 3u, &shc));
        }
    }
L_001d6d1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_001d6d20:;
    {
        cpu->r[14] = 0x001d6d24u; fn_00097dc8(cpu);
    }
L_001d6d24:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_001d6d28:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001d6d2c:;
    {
        goto L_001d6c24;
    }
}

/* _ZNSt6vectorIS_IN3vox16TransitionParamsENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEENS2_IS5_LS3_0EEEEaSERKS7_ @ 001d6d30 (arm) */
void fn_001d6d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d6d30:;
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
L_001d6d34:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001d6d38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d6d3c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d6d40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001d6d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6e48;
        }
    }
L_001d6d48:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001d6d4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d6d50:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_001d6d54:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001d6d58:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d6d5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001d6d60:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_001d6d64:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6d68:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001d6d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6d70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001d6d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_001d6d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_001d6d7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 8u, &shc), 0, 0);
    }
L_001d6d80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_001d6d84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 16u, &shc), 0, 0);
    }
L_001d6d88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 16u, &shc), 0, 0);
    }
L_001d6d8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d6d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001d6d94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d6d98:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001d6d9c:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_001d6da0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6fc8;
        }
    }
L_001d6da4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6da8:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d6dac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001d6db0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6db4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6db8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_001d6dbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_001d6dc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 16u, &shc), 0, 0);
    }
L_001d6dc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001d6dc8:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001d6dcc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001d6dd0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d6e54;
        }
    }
L_001d6dd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d6dd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6e0c;
        }
    }
L_001d6ddc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d6de0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d6de4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001d6de8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001d6dec:;
    {
        cpu->r[14] = 0x001d6df0u; fn_001d6b90(cpu);
    }
L_001d6df0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001d6df4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001d6df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6de4;
        }
    }
L_001d6dfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6e00:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001d6e04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001d6e08:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x4u);
    }
L_001d6e0c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_001d6e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7100;
        }
    }
L_001d6e14:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d6e18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001d6e1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d6e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d6e28;
        }
    }
L_001d6e24:;
    {
        cpu->r[14] = 0x001d6e28u; fn_00097dc8(cpu);
    }
L_001d6e28:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_001d6e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6e14;
        }
    }
L_001d6e30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6e34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001d6e38:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d6e3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001d6e40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6e44:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_001d6e48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6e4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d6e50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d6e54u)) return;
    }
L_001d6e54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d6e58:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 2); cpu->r[3] = (uint32_t)(v >> 2); }
    }
L_001d6e5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6e60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_001d6e64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 8u, &shc), 0, 0);
    }
L_001d6e68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 16u, &shc), 0, 0);
    }
L_001d6e6c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001d6e70:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001d6e74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6ea4;
        }
    }
L_001d6e78:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d6e7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001d6e80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001d6e84:;
    {
        cpu->r[14] = 0x001d6e88u; fn_001d6b90(cpu);
    }
L_001d6e88:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001d6e8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001d6e90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6e7c;
        }
    }
L_001d6e94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6e98:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_001d6e9c:;
    {
        cpu->r[4] = rd32(cpu->r[8]);
    }
L_001d6ea0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[9] = v1;
    }
L_001d6ea4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001d6ea8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6eac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6eb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_001d6eb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_001d6eb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 16u, &shc), 0, 0);
    }
L_001d6ebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001d6ec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001d6ec4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6ec8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_001d6ecc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d6ed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d6ed4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d6ed8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d6edc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d6ee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d6ee4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001d6ee8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d6eec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d7114;
        }
    }
L_001d6ef0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d6ef4:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_001d6ef8:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001d6efc:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_001d6f00:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001d6f04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_001d6f08:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_001d6f0c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6f10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d6f14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6f18:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[8]);
    }
L_001d6f1c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001d6f20:;
    {
        uint32_t wb_tmp = cpu->r[7] + cpu->r[6];
        wr32(cpu->r[7] + cpu->r[6], cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_001d6f24:;
    {
        uint32_t v = cpu->r[5] & ~ 0x00000007u; cpu->r[5] = v;
    }
L_001d6f28:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_001d6f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d6f30:;
    {
        cpu->r[14] = 0x001d6f34u; fn_00097dd0(cpu);
    }
L_001d6f34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d6f38:;
    {
        wr32(cpu->r[2] + cpu->r[6], cpu->r[0]);
    }
L_001d6f3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001d6f40:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_001d6f44:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d6f48:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d6f4c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d6f50:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_001d6f54:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[2]);
    }
L_001d6f58:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001d6f5c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[9] = v;
    }
L_001d6f60:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d6f64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d6f94;
        }
    }
L_001d6f68:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001d6f6c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d6f70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d6f74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001d6f78:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d6f7c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d6f80:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_001d6f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d6f88:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001d6f8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6f70;
        }
    }
L_001d6f90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_001d6f94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d6f98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001d6f9c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001d6fa0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d6fa4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001d6fa8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
        }
    }
L_001d6fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d6f04;
        }
    }
L_001d6fb0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001d6fb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d6fb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d6fbc:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001d6fc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001d6fc4:;
    {
        goto L_001d6e40;
    }
L_001d6fc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001d6fcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d6fd0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001d6fd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d6fd8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d6fdc:;
    {
        cpu->r[14] = 0x001d6fe0u; fn_00097dd0(cpu);
    }
L_001d6fe0:;
    {
        cpu->r[7] = rd32(cpu->r[13]);
    }
L_001d6fe4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001d6fe8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d6fec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d70a8;
        }
    }
L_001d6ff0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d6ff4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001d6ff8:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001d6ffc:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001d7000:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001d7004:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_001d7008:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_001d700c:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[7]);
    }
L_001d7010:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d7014:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d7018:;
    {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[5];
        wr32(cpu->r[4] + cpu->r[5], cpu->r[7]);
        cpu->r[4] = wb_tmp;
    }
L_001d701c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001d7020:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_001d7024:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_001d7028:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d702c:;
    {
        cpu->r[14] = 0x001d7030u; fn_00097dd0(cpu);
    }
L_001d7030:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001d7034:;
    {
        wr32(cpu->r[11] + cpu->r[5], cpu->r[0]);
    }
L_001d7038:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d703c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d7040:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001d7044:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d7048:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_001d704c:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[2]);
    }
L_001d7050:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_001d7054:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 3u, &shc); cpu->r[8] = v;
    }
L_001d7058:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d705c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d708c;
        }
    }
L_001d7060:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7064:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001d7068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001d706c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001d7070:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d7074:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d7078:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_001d707c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d7080:;
    {
        wr8(cpu->r[14] + + 0x4u, cpu->r[1]);
    }
L_001d7084:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7068;
        }
    }
L_001d7088:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001d708c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001d7090:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d7094:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001d7098:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d709c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d70a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000cu, 0, 0);
        }
    }
L_001d70a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7000;
        }
    }
L_001d70a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d70ac:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_001d70b0:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001d70b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d70b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d70e0;
        }
    }
L_001d70bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d70c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d70c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d70c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d70d0;
        }
    }
L_001d70cc:;
    {
        cpu->r[14] = 0x001d70d0u; fn_00097dc8(cpu);
    }
L_001d70d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d70d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d70bc;
        }
    }
L_001d70d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d70dc:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001d70e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d70e4:;
    {
        cpu->r[14] = 0x001d70e8u; fn_00097dc8(cpu);
    }
L_001d70e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001d70ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_001d70f0:;
    {
        wr32(cpu->r[2], cpu->r[11]);
    }
L_001d70f4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001d70f8:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_001d70fc:;
    {
        goto L_001d6e40;
    }
L_001d7100:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d7104:;
    {
        cpu->r[5] = 0x0000000cu;
    }
L_001d7108:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001d710c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[3]; cpu->r[5] = v;
    }
L_001d7110:;
    {
        goto L_001d6e40;
    }
L_001d7114:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001d7118:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001d711c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[5]; cpu->r[5] = v;
    }
L_001d7120:;
    {
        goto L_001d6e40;
    }
}
