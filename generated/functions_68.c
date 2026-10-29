#include "functions.h"

/* _ZN26GS_OnlineQuickRaceHostList6UpdateEv @ 0019b098 (arm) */
void fn_0019b098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019b098:;
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
L_0019b09c:;
    {
        cpu->r[5] = rd32(0x0019b0a4u + + 0xa70u);
    }
L_0019b0a0:;
    {
        cpu->r[6] = rd32(0x0019b0a8u + + 0xa70u);
    }
L_0019b0a4:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019b0a8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019b0b0u, cpu->r[5], 0, 0);
    }
L_0019b0ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b0b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_0019b0b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019b0b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b0bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019b0c0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b0c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b0c8:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_0019b0cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019b0d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b31c;
        }
    }
L_0019b0d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_0019b0d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b31c;
        }
    }
L_0019b0dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_0019b0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b31c;
        }
    }
L_0019b0e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0019b0e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b31c;
        }
    }
L_0019b0ec:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_0019b0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b31c;
        }
    }
L_0019b0f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9a0u);
    }
L_0019b0f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019b0fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b3a0;
        }
    }
L_0019b100:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b104:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_0019b108:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b10c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019b110:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019b114:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0019b118:;
    {
        cpu->r[9] = rd32(cpu->r[1]);
    }
L_0019b11c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b120:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x18u);
    }
L_0019b124:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x18u);
    }
L_0019b128:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_0019b12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b424;
        }
    }
L_0019b130:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b134:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019b138:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b13c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0001e400u, 0, 0);
    }
L_0019b144:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b148:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000380u, 0, 0);
    }
L_0019b14c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019b150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b17c;
        }
    }
L_0019b154:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019b158:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b15c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019b160:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0019b164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b158;
        }
    }
L_0019b168:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0019b16c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0019b17c;
        }
    }
L_0019b170:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x99du);
    }
L_0019b174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b634;
        }
    }
L_0019b17c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b180:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0019b184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b188:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_0019b18c:;
    {
        cpu->r[14] = 0x0019b190u; fn_000ec594(cpu);
    }
L_0019b190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b194:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0019b198:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b19c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0019b1a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0019b1a4:;
    {
        cpu->r[14] = 0x0019b1a8u; fn_000ec594(cpu);
    }
L_0019b1a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b1ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b1b0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 3u, &shc));
    }
L_0019b1b4:;
    {
        cpu->r[14] = 0x0019b1b8u; fn_000ec4f0(cpu);
    }
L_0019b1b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019b1bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b1c0:;
    {
        wr8(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_0019b1c4:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_0019b1c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b1cc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0019b1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b1d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b470;
        }
    }
L_0019b1d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b1dc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0019b1e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b470;
        }
    }
L_0019b1e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b1e8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[7] = v;
    }
L_0019b1ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0019b1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b1f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0019b1f8:;
    {
        cpu->r[14] = 0x0019b1fcu; fn_000ec4f0(cpu);
    }
L_0019b1fc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b200:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_0019b204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b494;
        }
    }
L_0019b208:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b20c:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_0019b210:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b214:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0019b218:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b21c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019b220:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019b270;
        }
    }
L_0019b224:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019b228:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0019b22c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000380u, 0, 0);
    }
L_0019b230:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019b234:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_0019b238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b26c;
        }
    }
L_0019b23c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0019b240:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b244:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b248:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0019b24c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0019b250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b244;
        }
    }
L_0019b254:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0019b258:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0019b26c;
        }
    }
L_0019b25c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0019b260:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_0019b264:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_0019b268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b234;
        }
    }
L_0019b26c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0019b270:;
    {
        cpu->r[2] = 0x0000e78cu;
    }
L_0019b274:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b278:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[8]);
    }
L_0019b27c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x990u);
    }
L_0019b280:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019b284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b4bc;
        }
    }
L_0019b288:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x994u);
    }
L_0019b28c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019b290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b54c;
        }
    }
L_0019b294:;
    {
        cpu->r[2] = 0x0000e7a9u;
    }
L_0019b298:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b29c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0019b2a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019b2a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b5d0;
        }
    }
L_0019b2a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x998u);
    }
L_0019b2ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0019b2b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b6e8;
        }
    }
L_0019b2b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b2b8:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019b2bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b2c0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b2c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b2c8:;
    {
        cpu->r[2] = 0x0000400fu;
    }
L_0019b2cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019b2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b6a4;
        }
    }
L_0019b2d4:;
    {
        cpu->r[2] = 0x0000400eu;
    }
L_0019b2d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019b2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b6a4;
        }
    }
L_0019b2e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019b2e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019b2e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b64c;
        }
    }
L_0019b2ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019b2f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b670;
        }
    }
L_0019b2f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b2f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b310;
        }
    }
L_0019b2fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b300:;
    {
        cpu->r[14] = 0x0019b304u; fn_00114a58(cpu);
    }
L_0019b304:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b308:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0019b30c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0019b310:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019b314:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_0019b318:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019b31cu)) return;
    }
L_0019b31c:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x9a4u);
    }
L_0019b320:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0019b324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b0f4;
        }
    }
L_0019b328:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019b32c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019b330:;
    {
        wr8(cpu->r[4] + + 0x9a4u, cpu->r[3]);
    }
L_0019b334:;
    {
        cpu->r[14] = 0x0019b338u; fn_0018ba6c(cpu);
    }
L_0019b338:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019b33c:;
    {
        cpu->r[14] = 0x0019b340u; fn_000a7570(cpu);
    }
L_0019b340:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b344:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019b348:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b34c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b350:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b354:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_0019b358:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019b35c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_0019b360:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_0019b364:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_0019b368:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_0019b36c:;
    {
        cpu->r[14] = 0x0019b370u; fn_000aeb58(cpu);
    }
L_0019b370:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019b374:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009a0u, 0, 0);
    }
L_0019b378:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019b37c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019b380:;
    {
        cpu->r[14] = 0x0019b384u; fn_000a7bb0(cpu);
    }
L_0019b384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b388:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019b38c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019b390:;
    {
        cpu->r[14] = 0x0019b394u; fn_000f361c(cpu);
    }
L_0019b394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9a0u);
    }
L_0019b398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019b39c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b100;
        }
    }
L_0019b3a0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b3a4:;
    {
        goto L_0019b3b0;
    }
L_0019b3a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019b3ac:;
    {
        cpu->r[14] = 0x0019b3b0u; fn_000f34e8(cpu);
    }
L_0019b3b0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019b3b4:;
    {
        cpu->r[14] = 0x0019b3b8u; fn_000f34a0(cpu);
    }
L_0019b3b8:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_0019b3bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019b3c0:;
    {
        cpu->r[14] = 0x0019b3c8u;
    }
L_0019b3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019b3c8u)) return;
    }
L_0019b3c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019b3cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b3d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b3a8;
        }
    }
L_0019b3d4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019b3d8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019b3dc:;
    {
        cpu->r[14] = 0x0019b3e0u; fn_001933d4(cpu);
    }
L_0019b3e0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019b3e4:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019b3e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b3ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019b3f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b3f4:;
    {
        cpu->r[14] = 0x0019b3fcu;
    }
L_0019b3f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019b3fcu)) return;
    }
L_0019b3fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019b400:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_0019b404:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019b408:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019b40c:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_0019b410:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019b414:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0019b418:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0019b41c:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019b420:;
    {
        goto L_0019b310;
    }
L_0019b424:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x99cu);
    }
L_0019b428:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b61c;
        }
    }
L_0019b430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b434:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0019b438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b43c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0019b440:;
    {
        cpu->r[14] = 0x0019b444u; fn_000ec594(cpu);
    }
L_0019b444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b448:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0019b44c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b450:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_0019b454:;
    {
        cpu->r[14] = 0x0019b458u; fn_000ec594(cpu);
    }
L_0019b458:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b45c:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_0019b460:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b464:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0019b468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019b46c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b1d8;
        }
    }
L_0019b470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b474:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[7] = v;
    }
L_0019b478:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0019b47c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b480:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0019b484:;
    {
        cpu->r[14] = 0x0019b488u; fn_000ec594(cpu);
    }
L_0019b488:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b48c:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_0019b490:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b208;
        }
    }
L_0019b494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b498:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0019b49c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b4a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_0019b4a4:;
    {
        cpu->r[14] = 0x0019b4a8u; fn_000ec594(cpu);
    }
L_0019b4a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x990u);
    }
L_0019b4ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b4b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019b4b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b4b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b288;
        }
    }
L_0019b4bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b4c0:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_0019b4c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b4c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b4cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019b4d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019b4e8;
        }
    }
L_0019b4d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019b4d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019b4dc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019b4e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0019b4e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b4d8;
        }
    }
L_0019b4e8:;
    {
        cpu->r[0] = 0x0000e78cu;
    }
L_0019b4ec:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0019b4f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0019b4f4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b4f8:;
    {
        wr32(cpu->r[3] + cpu->r[0], cpu->r[1]);
    }
L_0019b4fc:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019b500:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019b504:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019b508:;
    {
        cpu->r[14] = 0x0019b50cu; fn_001c41f0(cpu);
    }
L_0019b50c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b510:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019b514:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0019b518:;
    {
        cpu->r[14] = 0x0019b51cu; fn_001933d4(cpu);
    }
L_0019b51c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019b520:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019b524:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_0019b528:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019b52c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019b530:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9c4u);
    }
L_0019b534:;
    {
        wr32(cpu->r[4] + + 0x9c0u, cpu->r[3]);
    }
L_0019b538:;
    {
        cpu->r[14] = 0x0019b53cu; fn_001d0700(cpu);
    }
L_0019b53c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x994u);
    }
L_0019b540:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019b544:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019b548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b294;
        }
    }
L_0019b54c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b550:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_0019b554:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b55c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019b560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019b578;
        }
    }
L_0019b564:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019b568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019b56c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019b570:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0019b574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b568;
        }
    }
L_0019b578:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0019b57c:;
    {
        cpu->r[0] = 0x00006770u;
    }
L_0019b580:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019b584:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0019b588:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0019b58c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019b590:;
    {
        cpu->r[14] = 0x0019b594u; fn_001ba478(cpu);
    }
L_0019b594:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019b598:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019b59c:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_0019b5a0:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019b5a4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019b5a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9c4u);
    }
L_0019b5ac:;
    {
        wr32(cpu->r[4] + + 0x9c0u, cpu->r[3]);
    }
L_0019b5b0:;
    {
        cpu->r[14] = 0x0019b5b4u; fn_001d0700(cpu);
    }
L_0019b5b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b5b8:;
    {
        cpu->r[2] = 0x0000e7a9u;
    }
L_0019b5bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b5c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b5c4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0019b5c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019b5cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b2a8;
        }
    }
L_0019b5d0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0019b5d4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019b5d8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[8]);
    }
L_0019b5dc:;
    {
        cpu->r[14] = 0x0019b5e0u; fn_0018ba6c(cpu);
    }
L_0019b5e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019b5e4:;
    {
        cpu->r[14] = 0x0019b5e8u; fn_000a7570(cpu);
    }
L_0019b5e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019b5ec:;
    {
        cpu->r[0] = 0x00000478u;
    }
L_0019b5f0:;
    {
        cpu->r[14] = 0x0019b5f4u; fn_000aeb58(cpu);
    }
L_0019b5f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_0019b5f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019b5fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019b600:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019b604:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019b608:;
    {
        cpu->r[14] = 0x0019b60cu; fn_000a7bb0(cpu);
    }
L_0019b60c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019b610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b614:;
    {
        cpu->r[14] = 0x0019b618u; fn_000f361c(cpu);
    }
L_0019b618:;
    {
        goto L_0019b2a8;
    }
L_0019b61c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b620:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0019b624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b628:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0019b62c:;
    {
        cpu->r[14] = 0x0019b630u; fn_000ec4f0(cpu);
    }
L_0019b630:;
    {
        goto L_0019b444;
    }
L_0019b634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b638:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0019b63c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b640:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_0019b644:;
    {
        cpu->r[14] = 0x0019b648u; fn_000ec4f0(cpu);
    }
L_0019b648:;
    {
        goto L_0019b190;
    }
L_0019b64c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x984u);
    }
L_0019b650:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019b654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b70c;
        }
    }
L_0019b658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b65c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0019b660:;
    {
        cpu->r[14] = 0x0019b664u; fn_000eb59c(cpu);
    }
L_0019b664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b668:;
    {
        cpu->r[14] = 0x0019b66cu; fn_00128a5c(cpu);
    }
L_0019b66c:;
    {
        goto L_0019b310;
    }
L_0019b670:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b674:;
    {
        cpu->r[14] = 0x0019b678u; fn_0010da28(cpu);
    }
L_0019b678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b67c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b310;
        }
    }
L_0019b680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0019b684:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0019b688:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0019ba24;
        case 1: goto L_0019b974;
        case 2: goto L_0019b884;
        case 3: goto L_0019b834;
        case 4: goto L_0019b7f0;
        default: guest_unimplemented(cpu, 0x0019b688u); return; }
        }
    }
L_0019b68c:;
    {
        goto L_0019b310;
    }
L_0019b6a4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019b6a8:;
    {
        cpu->r[14] = 0x0019b6acu; fn_0018ba6c(cpu);
    }
L_0019b6ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019b6b0:;
    {
        cpu->r[14] = 0x0019b6b4u; fn_000a7570(cpu);
    }
L_0019b6b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b6b8:;
    {
        cpu->r[0] = 0x00000479u;
    }
L_0019b6bc:;
    {
        cpu->r[14] = 0x0019b6c0u; fn_000aeb58(cpu);
    }
L_0019b6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_0019b6c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019b6c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b6cc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019b6d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019b6d4:;
    {
        cpu->r[14] = 0x0019b6d8u; fn_000a7bb0(cpu);
    }
L_0019b6d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019b6dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b6e0:;
    {
        cpu->r[14] = 0x0019b6e4u; fn_000f361c(cpu);
    }
L_0019b6e4:;
    {
        goto L_0019b2e0;
    }
L_0019b6e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b6ec:;
    {
        cpu->r[14] = 0x0019b6f0u; fn_000f34e8(cpu);
    }
L_0019b6f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b6f4:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019b6f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b6fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b700:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b704:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0019b708:;
    {
        goto L_0019b310;
    }
L_0019b70c:;
    {
        cpu->r[3] = rd32(0x0019b714u + + 0x408u);
    }
L_0019b710:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019b714:;
    {
        cpu->r[0] = rd16(cpu->r[3]);
    }
L_0019b718:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b71c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
        }
    }
L_0019b720:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x9b8u, cpu->r[0]);
        }
    }
L_0019b724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b740;
        }
    }
L_0019b728:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9b8u);
    }
L_0019b72c:;
    {
        cpu->r[3] = 0x00000013u;
    }
L_0019b730:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0019b734:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0019b738:;
    {
        cpu->r[14] = 0x0019b73cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0019b73c:;
    {
        wr32(cpu->r[4] + + 0x9b8u, cpu->r[0]);
    }
L_0019b740:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0019b744:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0019b748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000027u, 1, 1);
    }
L_0019b74c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019b760;
        }
    }
L_0019b750:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b754:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000028u;
        }
    }
L_0019b758:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000027u);
        }
    }
L_0019b75c:;
    {
        wr32(cpu->r[4] + + 0x9b8u, cpu->r[0]);
    }
L_0019b760:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x9a8u);
    }
L_0019b764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b768:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x9b4u);
    }
L_0019b76c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0019b770:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_0019b774:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019b778:;
    {
        wr32(cpu->r[4] + + 0x9a8u, cpu->r[3]);
    }
L_0019b77c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019b780:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_0019b784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b7bc;
        }
    }
L_0019b788:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9acu);
    }
L_0019b78c:;
    {
        add_flags(cpu, cpu->r[2], 0x000000d2u, 0, 1);
    }
L_0019b790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b79c;
        }
    }
L_0019b794:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019b798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b7bc;
        }
    }
L_0019b79c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0019b7a0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0019b7a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_0019b7a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0019b7ac:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[0] = v;
    }
L_0019b7b0:;
    {
        cpu->r[14] = 0x0019b7b4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0019b7b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019b7b8:;
    {
        wr32(cpu->r[4] + + 0x9a8u, cpu->r[0]);
    }
L_0019b7bc:;
    {
        add_flags(cpu, cpu->r[1], 0x000000d2u, 0, 1);
    }
L_0019b7c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~0x000000d1u);
        }
    }
L_0019b7c4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_0019b7c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000d2u, 0, 0);
        }
    }
L_0019b7cc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x9b8u, cpu->r[3]);
        }
    }
L_0019b7d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019b7d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0019b7d8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9b8u, cpu->r[3]);
        }
    }
L_0019b7dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_0019b7e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9bcu);
    }
L_0019b7e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0019b7e8:;
    {
        wr32(cpu->r[4] + + 0x9bcu, cpu->r[3]);
    }
L_0019b7ec:;
    {
        goto L_0019b658;
    }
L_0019b7f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b7f4:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019b7f8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0019b7fc:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0019b800:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b804:;
    {
        cpu->r[14] = 0x0019b808u; fn_001c467c(cpu);
    }
L_0019b808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019b80c:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0019b810:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019b814:;
    {
        wr8(cpu->r[4] + + 0x99cu, cpu->r[5]);
    }
L_0019b818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b81c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019b820:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_0019b824:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b828:;
    {
        cpu->r[14] = 0x0019b82cu; fn_000ec594(cpu);
    }
L_0019b82c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_0019b830:;
    {
        goto L_0019b310;
    }
L_0019b834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b838:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_0019b83c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b840:;
    {
        cpu->r[12] = 0x0000e788u;
    }
L_0019b844:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019b848:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0019b84c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019b850:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000380u, 0, 0);
    }
L_0019b854:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0019b858:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_0019b85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ba60;
        }
    }
L_0019b860:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019b864:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0019b868:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0019b86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b87c;
        }
    }
L_0019b870:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x8u);
    }
L_0019b874:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_0019b878:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0019b87c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b880:;
    {
        goto L_0019b858;
    }
L_0019b884:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b888:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019b88c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b890:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0019b894:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0019b898:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b89c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b8a0:;
    {
        goto L_0019b8f0;
    }
L_0019b8a4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_0019b8a8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019b8ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b8bc;
        }
    }
L_0019b8b4:;
    {
        cpu->r[14] = 0x0019b8b8u; fn_0018ba20(cpu);
    }
L_0019b8b8:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_0019b8bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0019b8c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b8c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b8d0;
        }
    }
L_0019b8c8:;
    {
        cpu->r[14] = 0x0019b8ccu; fn_0018ba20(cpu);
    }
L_0019b8cc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[8]);
    }
L_0019b8d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0019b8d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019b8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b8e4;
        }
    }
L_0019b8dc:;
    {
        cpu->r[14] = 0x0019b8e0u; fn_0018ba20(cpu);
    }
L_0019b8e0:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[8]);
    }
L_0019b8e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019b8e8:;
    {
        cpu->r[14] = 0x0019b8ecu; fn_0018ba20(cpu);
    }
L_0019b8ec:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_0019b8f0:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_0019b8f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0001e400u, 0, 0);
    }
L_0019b8f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000380u, 0, 0);
    }
L_0019b8fc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0019b900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b8a4;
        }
    }
L_0019b904:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019b908:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b90c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019b910:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0019b914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b930;
        }
    }
L_0019b918:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_0019b91c:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_0019b920:;
    {
        cpu->r[14] = 0x0019b924u; fn_002082a8(cpu);
    }
L_0019b924:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_0019b928:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019b92c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b918;
        }
    }
L_0019b930:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019b934:;
    {
        cpu->r[2] = 0x0000e784u;
    }
L_0019b938:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b93c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019b940:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b944:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019b948:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[5]);
    }
L_0019b94c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[5]);
    }
L_0019b950:;
    {
        cpu->r[14] = 0x0019b954u; fn_001933d4(cpu);
    }
L_0019b954:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b958:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019b95c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b960:;
    {
        cpu->r[14] = 0x0019b964u; fn_001c478c(cpu);
    }
L_0019b964:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019b968:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019b96c:;
    {
        cpu->r[14] = 0x0019b970u; fn_000f34e8(cpu);
    }
L_0019b970:;
    {
        goto L_0019b310;
    }
L_0019b974:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019b978:;
    {
        cpu->r[14] = 0x0019b97cu; fn_0018ba6c(cpu);
    }
L_0019b97c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019b980:;
    {
        cpu->r[14] = 0x0019b984u; fn_000a7570(cpu);
    }
L_0019b984:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019b988:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019b98c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x9c0u);
    }
L_0019b990:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019b994:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b998:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019b99c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019b9a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019b9b8;
        }
    }
L_0019b9a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019b9a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0019b9ac:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019b9b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019b9b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b9a8;
        }
    }
L_0019b9b8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019b9bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0019b9c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_0019b9c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019b9c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019b9cc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0019b9d0:;
    {
        cpu->r[14] = 0x0019b9d4u; fn_000ae3d0(cpu);
    }
L_0019b9d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b9d8:;
    {
        cpu->r[0] = 0x00000424u;
    }
L_0019b9dc:;
    {
        cpu->r[14] = 0x0019b9e0u; fn_000aeb58(cpu);
    }
L_0019b9e0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0019b9e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019b9e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019b9ec:;
    {
        cpu->r[14] = 0x0019b9f0u; fn_000ae740(cpu);
    }
L_0019b9f0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019b9f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019b9f8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0019b9fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_0019ba00:;
    {
        cpu->r[14] = 0x0019ba04u; fn_000a7bb0(cpu);
    }
L_0019ba04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019ba08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ba0c:;
    {
        cpu->r[14] = 0x0019ba10u; fn_000f361c(cpu);
    }
L_0019ba10:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019ba14:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019ba18:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019ba1c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019ba20:;
    {
        goto L_0019b310;
    }
L_0019ba24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019ba28:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_0019ba2c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0019ba30:;
    {
        cpu->r[14] = 0x0019ba34u; fn_0018ba6c(cpu);
    }
L_0019ba34:;
    {
        cpu->r[2] = 0x000004b5u;
    }
L_0019ba38:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_0019ba3c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019ba40:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019ba44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ba48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ba4c:;
    {
        cpu->r[14] = 0x0019ba50u; fn_00101900(cpu);
    }
L_0019ba50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019ba54:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019ba58:;
    {
        cpu->r[14] = 0x0019ba5cu; fn_000f361c(cpu);
    }
L_0019ba5c:;
    {
        goto L_0019b310;
    }
L_0019ba60:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0019ba64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019badc;
        }
    }
L_0019ba68:;
    {
        cpu->r[6] = 0x00006788u;
    }
L_0019ba6c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0019ba70:;
    {
        cpu->r[5] = 0x00000018u;
    }
L_0019ba74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0019ba78:;
    {
        cpu->r[14] = 0x0019ba7cu; fn_001c467c(cpu);
    }
L_0019ba7c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019ba80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ba84:;
    {
        cpu->r[14] = 0x0019ba88u; fn_001933d4(cpu);
    }
L_0019ba88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ba8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0019ba90:;
    {
        cpu->r[14] = 0x0019ba94u; fn_001c4708(cpu);
    }
L_0019ba94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019ba98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019ba9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019baa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019baa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019baa8:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_0019baac:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[3] = v;
    }
L_0019bab0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6]; cpu->r[5] = v;
    }
L_0019bab4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019bab8:;
    {
        cpu->r[14] = 0x0019babcu; fn_000ec594(cpu);
    }
L_0019babc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019bac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bac4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0019bac8:;
    {
        cpu->r[14] = 0x0019baccu; fn_000ec594(cpu);
    }
L_0019bacc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019bad0:;
    {
        wr8(cpu->r[4] + + 0x99du, cpu->r[3]);
    }
L_0019bad4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019bad8:;
    {
        goto L_0019b310;
    }
L_0019badc:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019bae0:;
    {
        cpu->r[14] = 0x0019bae4u; fn_0018ba6c(cpu);
    }
L_0019bae4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019bae8:;
    {
        cpu->r[14] = 0x0019baecu; fn_000a7570(cpu);
    }
L_0019baec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019baf0:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_0019baf4:;
    {
        cpu->r[14] = 0x0019baf8u; fn_000aeb58(cpu);
    }
L_0019baf8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019bafc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0019bb00:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019bb04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019bb08:;
    {
        cpu->r[14] = 0x0019bb0cu; fn_000a7bb0(cpu);
    }
L_0019bb0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019bb10:;
    {
        goto L_0019ba08;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList11DoBarActionEii @ 0019bb20 (arm) */
void fn_0019bb20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bb20:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0019bb24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019bb28:;
    {
        cpu->r[0] = rd32(0x0019bb30u + + 0x64u);
    }
L_0019bb2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019bb30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0019bb34:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019bb38:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019bb40u, cpu->r[0], 0, 0);
    }
L_0019bb3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019bb40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bb8c;
        }
    }
L_0019bb44:;
    {
        cpu->r[14] = rd32(0x0019bb4cu + + 0x4cu);
    }
L_0019bb48:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019bb4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0019bb50:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019bb54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0019bb58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0019bb5c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0019bb60:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019bb64:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019bb68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019bb6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019bb70:;
    {
        cpu->r[14] = 0x0019bb74u; fn_000fd248(cpu);
    }
L_0019bb74:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_0019bb78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bb7c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_0019bb80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019bb84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0019bb88:;
    {
        return fn_0010df70(cpu);
    }
L_0019bb8c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019bb90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bb94u)) return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList8DoActionEii @ 0019bb9c (arm) */
void fn_0019bb9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bb9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019bba0:;
    {
        cpu->r[12] = rd32(0x0019bba8u + + 0x98u);
    }
L_0019bba4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019bba8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0019bbac:;
    {
        cpu->r[12] = add_flags(cpu, 0x0019bbb4u, cpu->r[12], 0, 0);
    }
L_0019bbb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019bbb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019bbb8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019bbbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bbc8;
        }
    }
L_0019bbc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019bbc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bbc8u)) return;
    }
L_0019bbc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019bbcc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019bbd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019bc30;
        }
    }
L_0019bbd4:;
    {
        cpu->r[0] = rd32(0x0019bbdcu + + 0x68u);
    }
L_0019bbd8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019bbdc:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0019bbe0:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0019bbe4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0019bbe8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0019bbec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019bbf0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019bbf4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019bbf8:;
    {
        cpu->r[14] = 0x0019bbfcu; fn_000fd248(cpu);
    }
L_0019bbfc:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0019bc00:;
    {
        cpu->r[14] = 0x0019bc04u; fn_00093f34(cpu);
    }
L_0019bc04:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0019bc08:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_0019bc0c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019bc10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0019bc14:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0019bc18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bc1c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0019bc20:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0019bc24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019bc28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0019bc2c:;
    {
        return fn_0010df70(cpu);
    }
L_0019bc30:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019bc34:;
    {
        cpu->r[14] = 0x0019bc3cu;
    }
L_0019bc38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bc3cu)) return;
    }
L_0019bc3c:;
    {
        goto L_0019bbc0;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList17ApplyMenuSettingsEv @ 0019bc48 (arm) */
void fn_0019bc48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bc48:;
    {
        cpu->r[3] = rd32(0x0019bc50u + + 0x70u);
    }
L_0019bc4c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019bc50:;
    {
        cpu->r[1] = rd32(0x0019bc58u + + 0x6cu);
    }
L_0019bc54:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_0019bc58:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019bc60u, cpu->r[3], 0, 0);
    }
L_0019bc5c:;
    {
        wr32(cpu->r[0] + + 0x9c0u, cpu->r[2]);
    }
L_0019bc60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019bc64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019bc68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019bc6c:;
    {
        cpu->r[1] = rd32(0x0019bc74u + + 0x54u);
    }
L_0019bc70:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_0019bc74:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[0]);
    }
L_0019bc78:;
    {
        cpu->r[0] = 0x00000011u;
    }
L_0019bc7c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019bc80:;
    {
        cpu->r[3] = 0x00000460u;
    }
L_0019bc84:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[12]);
    }
L_0019bc88:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_0019bc8c:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_0019bc90:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[1]);
    }
L_0019bc94:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0019bc98:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0019bc9c:;
    {
        cpu->r[3] = 0x00000413u;
    }
L_0019bca0:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[1]);
    }
L_0019bca4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_0019bca8:;
    {
        cpu->r[14] = 0x0019bcacu; imp__Znaj(cpu); /* _Znaj */
    }
L_0019bcac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019bcb0:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019bcb4:;
    {
        wr32(cpu->r[4] + + 0x9c4u, cpu->r[0]);
    }
L_0019bcb8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0019bcbc:;
    {
        return fn_001d0700(cpu);
    }
}

/* _ZN26GS_OnlineQuickRaceHostListD0Ev @ 0019bccc (arm) */
void fn_0019bccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bccc:;
    {
        cpu->r[3] = rd32(0x0019bcd4u + + 0x2cu);
    }
L_0019bcd0:;
    {
        cpu->r[2] = rd32(0x0019bcd8u + + 0x2cu);
    }
L_0019bcd4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019bcdcu, cpu->r[3], 0, 0);
    }
L_0019bcd8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019bcdc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019bce0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019bce4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019bce8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019bcec:;
    {
        cpu->r[14] = 0x0019bcf0u; fn_000ec21c(cpu);
    }
L_0019bcf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bcf4:;
    {
        cpu->r[14] = 0x0019bcf8u; fn_0018ba20(cpu);
    }
L_0019bcf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bcfc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bd00u)) return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostListC1Ev @ 0019bd08 (arm) */
void fn_0019bd08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bd08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019bd0c:;
    {
        cpu->r[5] = rd32(0x0019bd14u + + 0x118u);
    }
L_0019bd10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019bd14:;
    {
        cpu->r[14] = 0x0019bd18u; fn_0010ffa8(cpu);
    }
L_0019bd18:;
    {
        cpu->r[2] = rd32(0x0019bd20u + + 0x110u);
    }
L_0019bd1c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019bd24u, cpu->r[5], 0, 0);
    }
L_0019bd20:;
    {
        cpu->r[3] = rd32(0x0019bd28u + + 0x10cu);
    }
L_0019bd24:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019bd28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019bd2c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019bd30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019bd34:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019bd38:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019bd3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bde8;
        }
    }
L_0019bd40:;
    {
        cpu->r[6] = rd32(0x0019bd48u + + 0xf0u);
    }
L_0019bd44:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019bd48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019bd4c:;
    {
        cpu->r[14] = 0x0019bd50u; fn_00096a08(cpu);
    }
L_0019bd50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019bd54:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019bd58:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019bd5c:;
    {
        cpu->r[14] = 0x0019bd60u; fn_0018aa44(cpu);
    }
L_0019bd60:;
    {
        cpu->r[2] = rd32(0x0019bd68u + + 0xd4u);
    }
L_0019bd64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019bd68:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[3]);
    }
L_0019bd6c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019bd70:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[3]);
    }
L_0019bd74:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019bd78:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0019bd7c:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_0019bd80:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0019bd84:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_0019bd88:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0019bd8c:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[3]);
    }
L_0019bd90:;
    {
        wr8(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_0019bd94:;
    {
        wr8(cpu->r[4] + + 0x99du, cpu->r[3]);
    }
L_0019bd98:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_0019bd9c:;
    {
        wr8(cpu->r[4] + + 0x9a4u, cpu->r[3]);
    }
L_0019bda0:;
    {
        wr8(cpu->r[4] + + 0x9a5u, cpu->r[3]);
    }
L_0019bda4:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_0019bda8:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[12]);
    }
L_0019bdac:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[12]);
    }
L_0019bdb0:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[12]);
    }
L_0019bdb4:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[12]);
    }
L_0019bdb8:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[12]);
    }
L_0019bdbc:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[12]);
    }
L_0019bdc0:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[12]);
    }
L_0019bdc4:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[12]);
    }
L_0019bdc8:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[12]);
    }
L_0019bdcc:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[12]);
    }
L_0019bdd0:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[12]);
    }
L_0019bdd4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019bdd8:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0019bddc:;
    {
        cpu->r[14] = 0x0019bde0u; fn_001ba230(cpu);
    }
L_0019bde0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bde4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bde8u)) return;
    }
L_0019bde8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019bdec:;
    {
        cpu->r[14] = 0x0019bdf0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019bdf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019bdf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bd40;
        }
    }
L_0019bdf8:;
    {
        cpu->r[6] = rd32(0x0019be00u + + 0x38u);
    }
L_0019bdfc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019be00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019be04:;
    {
        cpu->r[14] = 0x0019be08u; fn_0018aa20(cpu);
    }
L_0019be08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019be0c:;
    {
        cpu->r[14] = 0x0019be10u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019be10:;
    {
        cpu->r[3] = rd32(0x0019be18u + + 0x28u);
    }
L_0019be14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019be18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019be1c:;
    {
        cpu->r[3] = rd32(0x0019be24u + + 0x20u);
    }
L_0019be20:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019be24:;
    {
        cpu->r[14] = 0x0019be28u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019be28:;
    {
        goto L_0019bd44;
    }
}

/* _ZN26GS_OnlineQuickRaceHostListC2Ev @ 0019be48 (arm) */
void fn_0019be48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019be48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019be4c:;
    {
        cpu->r[5] = rd32(0x0019be54u + + 0x118u);
    }
L_0019be50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019be54:;
    {
        cpu->r[14] = 0x0019be58u; fn_0010ffa8(cpu);
    }
L_0019be58:;
    {
        cpu->r[2] = rd32(0x0019be60u + + 0x110u);
    }
L_0019be5c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019be64u, cpu->r[5], 0, 0);
    }
L_0019be60:;
    {
        cpu->r[3] = rd32(0x0019be68u + + 0x10cu);
    }
L_0019be64:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019be68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019be6c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019be70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019be74:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019be78:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019be7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bf28;
        }
    }
L_0019be80:;
    {
        cpu->r[6] = rd32(0x0019be88u + + 0xf0u);
    }
L_0019be84:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019be88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019be8c:;
    {
        cpu->r[14] = 0x0019be90u; fn_00096a08(cpu);
    }
L_0019be90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019be94:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019be98:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019be9c:;
    {
        cpu->r[14] = 0x0019bea0u; fn_0018aa44(cpu);
    }
L_0019bea0:;
    {
        cpu->r[2] = rd32(0x0019bea8u + + 0xd4u);
    }
L_0019bea4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019bea8:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[3]);
    }
L_0019beac:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019beb0:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[3]);
    }
L_0019beb4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019beb8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0019bebc:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_0019bec0:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0019bec4:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_0019bec8:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0019becc:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[3]);
    }
L_0019bed0:;
    {
        wr8(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_0019bed4:;
    {
        wr8(cpu->r[4] + + 0x99du, cpu->r[3]);
    }
L_0019bed8:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_0019bedc:;
    {
        wr8(cpu->r[4] + + 0x9a4u, cpu->r[3]);
    }
L_0019bee0:;
    {
        wr8(cpu->r[4] + + 0x9a5u, cpu->r[3]);
    }
L_0019bee4:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_0019bee8:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[12]);
    }
L_0019beec:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[12]);
    }
L_0019bef0:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[12]);
    }
L_0019bef4:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[12]);
    }
L_0019bef8:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[12]);
    }
L_0019befc:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[12]);
    }
L_0019bf00:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[12]);
    }
L_0019bf04:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[12]);
    }
L_0019bf08:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[12]);
    }
L_0019bf0c:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[12]);
    }
L_0019bf10:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[12]);
    }
L_0019bf14:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019bf18:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0019bf1c:;
    {
        cpu->r[14] = 0x0019bf20u; fn_001ba230(cpu);
    }
L_0019bf20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019bf24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019bf28u)) return;
    }
L_0019bf28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019bf2c:;
    {
        cpu->r[14] = 0x0019bf30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019bf30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019bf34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019be80;
        }
    }
L_0019bf38:;
    {
        cpu->r[6] = rd32(0x0019bf40u + + 0x38u);
    }
L_0019bf3c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019bf40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019bf44:;
    {
        cpu->r[14] = 0x0019bf48u; fn_0018aa20(cpu);
    }
L_0019bf48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019bf4c:;
    {
        cpu->r[14] = 0x0019bf50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019bf50:;
    {
        cpu->r[3] = rd32(0x0019bf58u + + 0x28u);
    }
L_0019bf54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019bf58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019bf5c:;
    {
        cpu->r[3] = rd32(0x0019bf64u + + 0x20u);
    }
L_0019bf60:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019bf64:;
    {
        cpu->r[14] = 0x0019bf68u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019bf68:;
    {
        goto L_0019be84;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList13DrawTrackListEv @ 0019bf88 (arm) */
void fn_0019bf88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019bf88:;
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
L_0019bf8c:;
    {
        cpu->r[7] = rd32(0x0019bf94u + + 0x2acu);
    }
L_0019bf90:;
    {
        cpu->r[5] = rd32(0x0019bf98u + + 0x2acu);
    }
L_0019bf94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0019bf98:;
    {
        cpu->r[7] = add_flags(cpu, 0x0019bfa0u, cpu->r[7], 0, 0);
    }
L_0019bf9c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0019bfa0:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0019bfa4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019bfa8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019bfac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c1a0;
        }
    }
L_0019bfb0:;
    {
        cpu->r[4] = rd32(0x0019bfb8u + + 0x290u);
    }
L_0019bfb4:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019bfb8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019bfbc:;
    {
        cpu->r[14] = 0x0019bfc0u; fn_00096a08(cpu);
    }
L_0019bfc0:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0019bfc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019bfc8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019bfcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019bfd0:;
    {
        cpu->r[14] = 0x0019bfd4u; fn_0018aa44(cpu);
    }
L_0019bfd4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0019bfd8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0019bfdc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019bfe0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0019bfe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c1e4;
        }
    }
L_0019bfe8:;
    {
        cpu->r[3] = rd32(0x0019bff0u + + 0x25cu);
    }
L_0019bfec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019bff0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019bff4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0019bff8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0019bffc:;
    {
        cpu->r[14] = 0x0019c000u; fn_0018aa44(cpu);
    }
L_0019c000:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x48u);
    }
L_0019c004:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0019c008:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], cpu->r[1], 0, 0);
    }
L_0019c00c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0019c010:;
    {
        wr32(cpu->r[11] + + 0x4cu, cpu->r[12]);
    }
L_0019c014:;
    {
        cpu->r[12] = 0xff000000u;
    }
L_0019c018:;
    {
        wr32(cpu->r[11] + + 0x48u, cpu->r[12]);
    }
L_0019c01c:;
    {
        cpu->r[14] = 0x0019c020u; fn_000a8d10(cpu);
    }
L_0019c020:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019c024:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c028:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_0019c02c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019c030:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0019c034:;
    {
        cpu->r[14] = 0x0019c038u; fn_000960f4(cpu);
    }
L_0019c038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c220;
        }
    }
L_0019c040:;
    {
        cpu->r[3] = rd32(0x0019c048u + + 0x208u);
    }
L_0019c044:;
    {
        cpu->r[9] = 0x00008889u;
    }
L_0019c048:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x8888u << 16);
    }
L_0019c04c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0019c050:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0019c054:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019c058:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0019c05c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019c060:;
    {
        cpu->r[14] = 0x0019c064u; fn_0012f780(cpu);
    }
L_0019c064:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c068:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0019c06c:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0019c070:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019c074:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0019c078:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0019c07c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019c080:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0019c084:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c088:;
    {
        cpu->r[14] = 0x0019c08cu; fn_0012fa2c(cpu);
    }
L_0019c08c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x9acu);
    }
L_0019c090:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0019c094:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0019c098:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_0019c09c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0019c0a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_0019c0a4:;
    {
        cpu->r[3] = rd32(0x0019c0acu + + 0x1a8u);
    }
L_0019c0a8:;
    {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[9], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_0019c0ac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000006u, 1, 1);
    }
L_0019c0b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0019c0b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000007u;
        }
    }
L_0019c0b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
        }
    }
L_0019c0bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = 0x00000006u;
        }
    }
L_0019c0c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000005u, 0, 0);
    }
L_0019c0c4:;
    {
        goto L_0019c0dc;
    }
L_0019c0c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
    }
L_0019c0cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0019c0d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000168u, 1, 1);
    }
L_0019c0d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000009cu, 0, 0);
    }
L_0019c0d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c15c;
        }
    }
L_0019c0dc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_0019c0e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019c0c8;
        }
    }
L_0019c0e4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_0019c0e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019c0c8;
        }
    }
L_0019c0ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019c0f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c0f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0019c0f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_0019c0fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019c100:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_0019c104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0019c108:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000009cu, 0, 0);
    }
L_0019c10c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0019c110:;
    {
        cpu->r[14] = 0x0019c114u; fn_000aeb58(cpu);
    }
L_0019c114:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0019c118:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c11c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x9a8u);
    }
L_0019c120:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0019c124:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0019c128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004bu, 0, 0);
    }
L_0019c12c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c130:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019c134:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0019c138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_0019c13c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
    }
L_0019c140:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019c144:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019c148:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019c14c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019c150:;
    {
        cpu->r[14] = 0x0019c154u; fn_000ad19c(cpu);
    }
L_0019c154:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000168u, 1, 1);
    }
L_0019c158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c0dc;
        }
    }
L_0019c15c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019c160:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0019c164:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019c168:;
    {
        cpu->r[14] = 0x0019c16cu; fn_0012f780(cpu);
    }
L_0019c16c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019c170:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c174:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019c178:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019c17c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_0019c180:;
    {
        cpu->r[12] = rd32(0x0019c188u + + 0xd0u);
    }
L_0019c184:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019c188:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_0019c18c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019c190:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c194:;
    {
        cpu->r[14] = 0x0019c198u; fn_0012fa2c(cpu);
    }
L_0019c198:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0019c19c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c1a0u)) return;
    }
L_0019c1a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c1a4:;
    {
        cpu->r[14] = 0x0019c1a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019c1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bfb0;
        }
    }
L_0019c1b0:;
    {
        cpu->r[4] = rd32(0x0019c1b8u + + 0x90u);
    }
L_0019c1b4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0019c1b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019c1bc:;
    {
        cpu->r[14] = 0x0019c1c0u; fn_0018aa20(cpu);
    }
L_0019c1c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c1c4:;
    {
        cpu->r[14] = 0x0019c1c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019c1c8:;
    {
        cpu->r[3] = rd32(0x0019c1d0u + + 0x8cu);
    }
L_0019c1cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019c1d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019c1d4:;
    {
        cpu->r[3] = rd32(0x0019c1dcu + + 0x84u);
    }
L_0019c1d8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019c1dc:;
    {
        cpu->r[14] = 0x0019c1e0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019c1e0:;
    {
        goto L_0019bfb4;
    }
L_0019c1e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019c1e8:;
    {
        cpu->r[14] = 0x0019c1ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019c1ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019bfe8;
        }
    }
L_0019c1f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c1f8:;
    {
        cpu->r[14] = 0x0019c1fcu; fn_0018aa20(cpu);
    }
L_0019c1fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019c200:;
    {
        cpu->r[14] = 0x0019c204u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019c204:;
    {
        cpu->r[3] = rd32(0x0019c20cu + + 0x50u);
    }
L_0019c208:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c20c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019c210:;
    {
        cpu->r[3] = rd32(0x0019c218u + + 0x48u);
    }
L_0019c214:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019c218:;
    {
        cpu->r[14] = 0x0019c21cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019c21c:;
    {
        goto L_0019bfe8;
    }
L_0019c220:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0019c224:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019c228:;
    {
        cpu->r[14] = 0x0019c230u;
    }
L_0019c22c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c230u)) return;
    }
L_0019c230:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0019c234:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0019c238:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0019c23c:;
    {
        goto L_0019c040;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList6RenderEv @ 0019c264 (arm) */
void fn_0019c264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019c264:;
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
L_0019c268:;
    {
        cpu->r[8] = rd32(0x0019c270u + + 0x980u);
    }
L_0019c26c:;
    {
        cpu->r[1] = rd32(0x0019c274u + + 0x980u);
    }
L_0019c270:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002e4u, 1, 0);
    }
L_0019c274:;
    {
        cpu->r[8] = add_flags(cpu, 0x0019c27cu, cpu->r[8], 0, 0);
    }
L_0019c278:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019c27c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_0019c280:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_0019c284:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019c288:;
    {
        cpu->r[14] = 0x0019c28cu; fn_0012f780(cpu);
    }
L_0019c28c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c290:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_0019c294:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_0019c298:;
    {
        cpu->r[14] = 0x0019c29cu; fn_00113570(cpu);
    }
L_0019c29c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_0019c2a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019c2a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019c2d4;
        }
    }
L_0019c2a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0019c2ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019c2b0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019c2b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c2b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019c2bc:;
    {
        cpu->r[14] = 0x0019c2c4u;
    }
L_0019c2c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c2c4u)) return;
    }
L_0019c2c4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_0019c2c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0019c2cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0019c2d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019c2ac;
        }
    }
L_0019c2d4:;
    {
        cpu->r[2] = rd32(0x0019c2dcu + + 0x91cu);
    }
L_0019c2d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c2dc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019c2e0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0019c2e4:;
    {
        cpu->r[14] = 0x0019c2ecu;
    }
L_0019c2e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c2ecu)) return;
    }
L_0019c2ec:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019c2f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c2f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c2f8:;
    {
        cpu->r[14] = 0x0019c300u;
    }
L_0019c2fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c300u)) return;
    }
L_0019c300:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0019c304:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c308:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019c30c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019c310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cb7c;
        }
    }
L_0019c314:;
    {
        cpu->r[12] = rd32(0x0019c31cu + + 0x8e0u);
    }
L_0019c318:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0019c31c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c320:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c324:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019c328:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c32c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019c330:;
    {
        cpu->r[14] = 0x0019c334u; fn_0018aa44(cpu);
    }
L_0019c334:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0019c338:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c33c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0019c340:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019c344:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_0019c348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cb40;
        }
    }
L_0019c34c:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0019c350:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0019c354:;
    {
        cpu->r[14] = 0x0019c358u; fn_00096a08(cpu);
    }
L_0019c358:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c35c:;
    {
        cpu->r[12] = rd32(0x0019c364u + + 0x89cu);
    }
L_0019c360:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019c364:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_0019c368:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019c36c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c370:;
    {
        cpu->r[14] = 0x0019c374u; fn_0018aa44(cpu);
    }
L_0019c374:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019c378:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019c37c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000002c4u, 0, 0);
    }
L_0019c380:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0019c384:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c388:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019c38c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0019c390:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0019c394:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019c398:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0019c39c:;
    {
        cpu->r[14] = 0x0019c3a0u; fn_000a8a2c(cpu);
    }
L_0019c3a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_0019c3a4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0019c3a8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_0019c3ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019c3b0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0019c3b4:;
    {
        cpu->r[14] = 0x0019c3b8u; fn_000960f4(cpu);
    }
L_0019c3b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c3bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cb98;
        }
    }
L_0019c3c0:;
    {
        cpu->r[3] = rd32(0x0019c3c8u + + 0x83cu);
    }
L_0019c3c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0019c3c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0019c3cc:;
    {
        cpu->r[2] = rd32(0x0019c3d4u + + 0x834u);
    }
L_0019c3d0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c3d4:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c3d8:;
    {
        cpu->r[11] = rd32(0x0019c3e0u + + 0x82cu);
    }
L_0019c3dc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0019c3e0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c3e4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0019c3e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_0019c3ec:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0019c3f0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0019c3f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019c3f8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0019c3fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019c400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c8d0;
        }
    }
L_0019c404:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019c408:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019c40c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_0019c410:;
    {
        cpu->r[14] = 0x0019c414u; fn_0018aa44(cpu);
    }
L_0019c414:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_0019c418:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0019c41c:;
    {
        cpu->r[3] = 0x00000023u;
    }
L_0019c420:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c424:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0019c428:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c42c:;
    {
        cpu->r[14] = 0x0019c430u; fn_000ad8a0(cpu);
    }
L_0019c430:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019c434:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0019c438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c3f8;
        }
    }
L_0019c43c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0019c440:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c444:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c448:;
    {
        cpu->r[1] = 0x00000451u;
    }
L_0019c44c:;
    {
        cpu->r[3] = 0x00000029u;
    }
L_0019c450:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0019c454:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019c458:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000174u, 0, 0);
    }
L_0019c45c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0019c460:;
    {
        cpu->r[12] = 0x00008c00u;
    }
L_0019c464:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[5]);
    }
L_0019c468:;
    {
        cpu->r[11] = 0x00000046u;
    }
L_0019c46c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0019c470:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0019c474:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c478:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c47c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_0019c480:;
    {
        cpu->r[14] = 0x0019c484u; fn_000ad200(cpu);
    }
L_0019c484:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0019c488:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0019c48c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c490:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_0019c494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c498:;
    {
        cpu->r[3] = 0x00000029u;
    }
L_0019c49c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xffffu << 16);
    }
L_0019c4a0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c4a4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_0019c4a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c4ac:;
    {
        cpu->r[14] = 0x0019c4b0u; fn_000ad200(cpu);
    }
L_0019c4b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0019c4b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c4b8:;
    {
        cpu->r[1] = 0x0000046du;
    }
L_0019c4bc:;
    {
        cpu->r[3] = 0x00000029u;
    }
L_0019c4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c4c4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c4c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c4cc:;
    {
        cpu->r[14] = 0x0019c4d0u; fn_000ad200(cpu);
    }
L_0019c4d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0019c4d4:;
    {
        cpu->r[3] = 0x00000029u;
    }
L_0019c4d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c4dc:;
    {
        cpu->r[1] = 0x00000454u;
    }
L_0019c4e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c4e4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c4e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c4ec:;
    {
        cpu->r[14] = 0x0019c4f0u; fn_000ad200(cpu);
    }
L_0019c4f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019c4f4:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[5]);
    }
L_0019c4f8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019c4fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019c500:;
    {
        cpu->r[14] = 0x0019c504u; imp_memset(cpu); /* memset */
    }
L_0019c504:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019c508:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019c50c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019c510:;
    {
        cpu->r[14] = 0x0019c514u; imp_memset(cpu); /* memset */
    }
L_0019c514:;
    {
        cpu->r[1] = rd32(0x0019c51cu + + 0x6f4u);
    }
L_0019c518:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0019c51c:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_0019c520:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019c528u, cpu->r[1], 0, 0);
    }
L_0019c524:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019c528:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_0019c52c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_0019c530:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019c534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019c538:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019c53c:;
    {
        cpu->r[12] = rd32(0x0019c544u + + 0x6c8u);
    }
L_0019c540:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0019c544:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000380u, 0, 0);
    }
L_0019c548:;
    {
        cpu->r[1] = rd32(0x0019c550u + + 0x6b8u);
    }
L_0019c54c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019c550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002dcu, 0, 0);
    }
L_0019c554:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_0019c558:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_0019c55c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019c560:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0019c564:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019c568:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0019c56c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0019c570:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0019c574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c7cc;
        }
    }
L_0019c578:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019c57c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], 0x0000000fu, 1, 0);
    }
L_0019c580:;
    {
        wr32(cpu->r[13] + + 0x2dcu, cpu->r[5]);
    }
L_0019c584:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0019c588:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019c58c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_0019c590:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_0019c594:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0019c598:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c59c:;
    {
        cpu->r[14] = 0x0019c5a0u; fn_001d0434(cpu);
    }
L_0019c5a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019c5a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019c5a8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019c5ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0019c5b0:;
    {
        cpu->r[14] = 0x0019c5b4u; fn_001d0a68(cpu);
    }
L_0019c5b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0019c5b8:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c5bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019c5c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019c5c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c850;
        }
    }
L_0019c5c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c5cc:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019c5d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019c5d4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c5d8:;
    {
        cpu->r[14] = 0x0019c5dcu; fn_0018aa44(cpu);
    }
L_0019c5dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_0019c5e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0019c5e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0019c5e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0019c5ec:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c5f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c5f4:;
    {
        cpu->r[14] = 0x0019c5f8u; fn_000ad8a0(cpu);
    }
L_0019c5f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019c5fc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0019c600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c5bc;
        }
    }
L_0019c604:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x9c0u);
    }
L_0019c608:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0019c60c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c89c;
        }
    }
L_0019c610:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2dcu);
    }
L_0019c614:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x9c4u);
    }
L_0019c618:;
    {
        cpu->r[14] = 0x0019c61cu; fn_001d06e4(cpu);
    }
L_0019c61c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c620:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c89c;
        }
    }
L_0019c624:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_0019c628:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019c62c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0019c630:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0019c634:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_0019c638:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[12]);
    }
L_0019c63c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_0019c640:;
    {
        wr32(cpu->r[10] + + 0x9c0u, cpu->r[1]);
    }
L_0019c644:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c648:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019c64c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019c650:;
    {
        cpu->r[14] = 0x0019c654u; imp_memset(cpu); /* memset */
    }
L_0019c654:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019c658:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0019c65c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0019c660:;
    {
        cpu->r[14] = 0x0019c664u; fn_000ae830(cpu);
    }
L_0019c664:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0019c668:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c66c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0019c670:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019c674:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c678:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019c67c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0019c680:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c684:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0019c688:;
    {
        cpu->r[14] = 0x0019c68cu; fn_000ad19c(cpu);
    }
L_0019c68c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2dcu);
    }
L_0019c690:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019c694:;
    {
        cpu->r[14] = 0x0019c698u; fn_000ae1a4(cpu);
    }
L_0019c698:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c69c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019c6a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019c6a4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0019c6a8:;
    {
        cpu->r[12] = 0x0000006eu;
    }
L_0019c6ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c6b0:;
    {
        cpu->r[14] = 0x0019c6b4u; fn_00099114(cpu);
    }
L_0019c6b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0019c6b8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0019c6bc:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[5]);
    }
L_0019c6c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c6c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c6c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019c6cc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c6d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c6d4:;
    {
        cpu->r[14] = 0x0019c6d8u; fn_000ad19c(cpu);
    }
L_0019c6d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0019c6dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019c6e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c8b0;
        }
    }
L_0019c6e4:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c6e8:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_0019c6ec:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0019c6f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019c6f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c8b8;
        }
    }
L_0019c6f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019c6fc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_0019c700:;
    {
        cpu->r[14] = 0x0019c704u; imp_atoi(cpu); /* atoi */
    }
L_0019c704:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019c708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019c70c:;
    {
        cpu->r[14] = 0x0019c710u; fn_000978a8(cpu);
    }
L_0019c710:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c714:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000500u, 0, 0);
    }
L_0019c718:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000005u, 0, 0);
    }
L_0019c71c:;
    {
        cpu->r[14] = 0x0019c720u; fn_000aeb58(cpu);
    }
L_0019c720:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019c724:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019c728:;
    {
        cpu->r[14] = 0x0019c72cu; fn_000ae160(cpu);
    }
L_0019c72c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c730:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019c734:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019c738:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0019c73c:;
    {
        cpu->r[12] = 0x0000006eu;
    }
L_0019c740:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019c744:;
    {
        cpu->r[14] = 0x0019c748u; fn_00099114(cpu);
    }
L_0019c748:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0019c74c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0019c750:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c754:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019c758:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_0019c75c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019c760:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_0019c764:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c768:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0019c76c:;
    {
        cpu->r[14] = 0x0019c770u; fn_000ad19c(cpu);
    }
L_0019c770:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019c774:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x8u);
    }
L_0019c778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0019c77c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c914;
        }
    }
L_0019c780:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019c784:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000001du, 0, 0);
    }
L_0019c788:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0019c78c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_0019c790:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019c794:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0019c798:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c79c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019c7a0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019c7a4:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[1]);
    }
L_0019c7a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019c7ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019c7b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000380u, 0, 0);
    }
L_0019c7b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0019c7b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019c7bc:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[2]);
    }
L_0019c7c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0019c7c4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0019c7c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c578;
        }
    }
L_0019c7cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0019c7d0:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0019c7d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019c7d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c800;
        }
    }
L_0019c7dc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x9c0u);
    }
L_0019c7e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019c7e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019c800;
        }
    }
L_0019c7e8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0019c7ec:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019c7f0:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019c7f4:;
    {
        wr32(cpu->r[10] + + 0x9c0u, cpu->r[3]);
    }
L_0019c7f8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x9c4u);
    }
L_0019c7fc:;
    {
        cpu->r[14] = 0x0019c800u; fn_001d0700(cpu);
    }
L_0019c800:;
    {
        cpu->r[2] = rd32(0x0019c808u + + 0x40cu);
    }
L_0019c804:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019c808:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019c80c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019c810:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019c814:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019c818:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019c81c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000380u, 0, 0);
    }
L_0019c820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019c824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c9a8;
        }
    }
L_0019c828:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019c82c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019c830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c828;
        }
    }
L_0019c834:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x94u);
    }
L_0019c838:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019c83c:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[2]);
    }
L_0019c840:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019c844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ca84;
        }
    }
L_0019c848:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002e4u, 0, 0);
    }
L_0019c84c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019c850u)) return;
    }
L_0019c850:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c854:;
    {
        cpu->r[14] = 0x0019c858u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019c858:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c5c8;
        }
    }
L_0019c860:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c864:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_0019c868:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019c86c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0019c870:;
    {
        cpu->r[14] = 0x0019c874u; fn_0018aa20(cpu);
    }
L_0019c874:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c878:;
    {
        cpu->r[14] = 0x0019c87cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019c87c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019c880:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0019c884:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019c888:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_0019c88c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019c890:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c894:;
    {
        cpu->r[14] = 0x0019c898u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019c898:;
    {
        goto L_0019c5c8;
    }
L_0019c89c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_0019c8a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019c8a4:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[3]);
    }
L_0019c8a8:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[2]);
    }
L_0019c8ac:;
    {
        goto L_0019c644;
    }
L_0019c8b0:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019c8b4:;
    {
        goto L_0019c6f8;
    }
L_0019c8b8:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_0019c8bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019c8c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019c8c4:;
    {
        cpu->r[14] = 0x0019c8c8u; fn_000978a8(cpu);
    }
L_0019c8c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019c8cc:;
    {
        goto L_0019c714;
    }
L_0019c8d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019c8d4:;
    {
        cpu->r[14] = 0x0019c8d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019c8d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c8dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c404;
        }
    }
L_0019c8e0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_0019c8e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019c8e8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0019c8ec:;
    {
        cpu->r[14] = 0x0019c8f0u; fn_0018aa20(cpu);
    }
L_0019c8f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019c8f4:;
    {
        cpu->r[14] = 0x0019c8f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019c8f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0019c8fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019c900:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_0019c904:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019c908:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c90c:;
    {
        cpu->r[14] = 0x0019c910u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019c910:;
    {
        goto L_0019c404;
    }
L_0019c914:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0019c918:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c91c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019c920:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019c924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c964;
        }
    }
L_0019c928:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c92c:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019c930:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019c934:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c938:;
    {
        cpu->r[14] = 0x0019c93cu; fn_0018aa44(cpu);
    }
L_0019c93c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0019c940:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019c944:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0019c948:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_0019c94c:;
    {
        cpu->r[1] = 0x00000108u;
    }
L_0019c950:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0019c954:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019c958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000032u, 0, 0);
    }
L_0019c95c:;
    {
        cpu->r[14] = 0x0019c960u; fn_000ad8a0(cpu);
    }
L_0019c960:;
    {
        goto L_0019c780;
    }
L_0019c964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019c968:;
    {
        cpu->r[14] = 0x0019c96cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019c96c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019c970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c928;
        }
    }
L_0019c974:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019c978:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019c97c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c980:;
    {
        cpu->r[14] = 0x0019c984u; fn_0018aa20(cpu);
    }
L_0019c984:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019c988:;
    {
        cpu->r[14] = 0x0019c98cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019c98c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0019c990:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_0019c994:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019c998:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019c99c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c9a0:;
    {
        cpu->r[14] = 0x0019c9a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019c9a4:;
    {
        goto L_0019c928;
    }
L_0019c9a8:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019c9ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019c9b0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019c9b4:;
    {
        cpu->r[3] = 0x0000400fu;
    }
L_0019c9b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019c9bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c834;
        }
    }
L_0019c9c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0019c9c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019c9c8:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x54u);
    }
L_0019c9cc:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_0019c9d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000274u, 0, 0);
    }
L_0019c9d4:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0019c9d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0019c9dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0019c9e0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019c9e4:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_0019c9e8:;
    {
        cpu->r[14] = 0x0019c9ecu; fn_000aeb58(cpu);
    }
L_0019c9ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x60u);
    }
L_0019c9f0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0019c9f4:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019c9f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019c9fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_0019ca00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019ca04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ca08:;
    {
        cpu->r[14] = 0x0019ca0cu; fn_000a9818(cpu);
    }
L_0019ca0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ca10:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_0019ca14:;
    {
        cpu->r[14] = 0x0019ca18u; fn_000aeb58(cpu);
    }
L_0019ca18:;
    {
        cpu->r[12] = rd32(0x0019ca20u + + 0x1f8u);
    }
L_0019ca1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019ca20:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019ca24:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0019ca28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0019ca2c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019ca30:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000053u, 1, 0);
    }
L_0019ca34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0019ca38:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0019ca3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0019ca40:;
    {
        cpu->r[4] = 0x00000011u;
    }
L_0019ca44:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019ca48:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019ca4c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0019ca50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0019ca54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0019ca58:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0019ca5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ca60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019ca64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ca68:;
    {
        cpu->r[14] = 0x0019ca6cu; fn_000ac4bc(cpu);
    }
L_0019ca6c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[10]);
    }
L_0019ca70:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x94u);
    }
L_0019ca74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019ca78:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[2]);
    }
L_0019ca7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019ca80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c848;
        }
    }
L_0019ca84:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x984u);
    }
L_0019ca88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019ca8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019c848;
        }
    }
L_0019ca90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0019ca94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002d8u, 0, 0);
    }
L_0019ca98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002d4u, 0, 0);
    }
L_0019ca9c:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0019caa0:;
    {
        cpu->r[14] = 0x0019caa4u; fn_000a8d10(cpu);
    }
L_0019caa4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x98cu);
    }
L_0019caa8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_0019caac:;
    {
        cpu->r[2] = sub_flags(cpu, 0x0000000fu, cpu->r[3], 1, 0);
    }
L_0019cab0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019cab4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0019cab8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[7] + + 0x98cu, cpu->r[3]);
        }
    }
L_0019cabc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0019cac0:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019cac4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0019cac8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0019cacc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0019cad0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019cad4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0019cad8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0019cadc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[1] = v;
    }
L_0019cae0:;
    {
        cpu->r[14] = 0x0019cae4u; fn_0012dd58(cpu);
    }
L_0019cae4:;
    {
        cpu->r[12] = rd32(0x0019caecu + + 0x12cu);
    }
L_0019cae8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019caec:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019caf0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019caf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0019caf8:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0019cafc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019cb00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019cb04:;
    {
        cpu->r[14] = 0x0019cb08u; fn_00130908(cpu);
    }
L_0019cb08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0019cb0c:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0019cb10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2d8u);
    }
L_0019cb14:;
    {
        cpu->r[3] = 0x0000003cu;
    }
L_0019cb18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0019cb1c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0019cb20:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019cb24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019cb28:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019cb2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019cb30:;
    {
        cpu->r[14] = 0x0019cb34u; fn_000ad8a0(cpu);
    }
L_0019cb34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019cb38:;
    {
        cpu->r[14] = 0x0019cb3cu; fn_0019bf88(cpu);
    }
L_0019cb3c:;
    {
        goto L_0019c848;
    }
L_0019cb40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019cb44:;
    {
        cpu->r[14] = 0x0019cb48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019cb48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019cb4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019c34c;
        }
    }
L_0019cb50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cb54:;
    {
        cpu->r[14] = 0x0019cb58u; fn_0018aa20(cpu);
    }
L_0019cb58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019cb5c:;
    {
        cpu->r[14] = 0x0019cb60u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019cb60:;
    {
        cpu->r[3] = rd32(0x0019cb68u + + 0xa4u);
    }
L_0019cb64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cb68:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019cb6c:;
    {
        cpu->r[3] = rd32(0x0019cb74u + + 0x94u);
    }
L_0019cb70:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019cb74:;
    {
        cpu->r[14] = 0x0019cb78u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019cb78:;
    {
        goto L_0019c34c;
    }
L_0019cb7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cb80:;
    {
        cpu->r[14] = 0x0019cb84u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019cb84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019cb88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019cbb8;
        }
    }
L_0019cb8c:;
    {
        cpu->r[1] = rd32(0x0019cb94u + + 0x68u);
    }
L_0019cb90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0019cb94:;
    {
        goto L_0019c31c;
    }
L_0019cb98:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019cb9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019cba0:;
    {
        cpu->r[14] = 0x0019cba8u;
    }
L_0019cba4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019cba8u)) return;
    }
L_0019cba8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0019cbac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0019cbb0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_0019cbb4:;
    {
        goto L_0019c3c0;
    }
L_0019cbb8:;
    {
        cpu->r[2] = rd32(0x0019cbc0u + + 0x3cu);
    }
L_0019cbbc:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019cbc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0019cbc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019cbc8:;
    {
        cpu->r[14] = 0x0019cbccu; fn_0018aa20(cpu);
    }
L_0019cbcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cbd0:;
    {
        cpu->r[14] = 0x0019cbd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019cbd4:;
    {
        cpu->r[3] = rd32(0x0019cbdcu + + 0x30u);
    }
L_0019cbd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019cbdc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019cbe0:;
    {
        cpu->r[3] = rd32(0x0019cbe8u + + 0x20u);
    }
L_0019cbe4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019cbe8:;
    {
        cpu->r[14] = 0x0019cbecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019cbec:;
    {
        goto L_0019c31c;
    }
}

/* _ZN15GS_OnlineAAMenu8isKindOfEi @ 0019cc1c (arm) */
void fn_0019cc1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019cc1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001au, 1, 1);
    }
L_0019cc20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0019cc24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0019cc28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_OnlineAAMenu17ApplyMenuSettingsEv @ 0019cc2c (arm) */
void fn_0019cc2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019cc2c:;
    {
        cpu->r[3] = rd32(0x0019cc34u + + 0x54u);
    }
L_0019cc30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019cc34:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_0019cc38:;
    {
        cpu->r[1] = rd32(0x0019cc40u + + 0x4cu);
    }
L_0019cc3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019cc44u, cpu->r[3], 0, 0);
    }
L_0019cc40:;
    {
        cpu->r[2] = rd32(0x0019cc48u + + 0x48u);
    }
L_0019cc44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019cc48:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019cc50u, cpu->r[2], 0, 0);
    }
L_0019cc4c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_0019cc50:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_0019cc54:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_0019cc58:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[2]);
    }
L_0019cc5c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019cc60:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_0019cc64:;
    {
        cpu->r[2] = 0x00000413u;
    }
L_0019cc68:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_0019cc6c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019cc70:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_0019cc74:;
    {
        cpu->r[2] = 0x00000455u;
    }
L_0019cc78:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_0019cc7c:;
    {
        cpu->r[2] = 0x00000412u;
    }
L_0019cc80:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_0019cc84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_58 @ 0019cc94 (arm) */
void fn_0019cc94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019cc94:;
    {
        cpu->r[3] = rd32(0x0019cc9cu + + 0x30u);
    }
L_0019cc98:;
    {
        cpu->r[0] = rd32(0x0019cca0u + + 0x30u);
    }
L_0019cc9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019cca4u, cpu->r[3], 0, 0);
    }
L_0019cca0:;
    {
        cpu->r[2] = rd32(0x0019cca8u + + 0x2cu);
    }
L_0019cca4:;
    {
        cpu->r[1] = rd32(0x0019ccacu + + 0x2cu);
    }
L_0019cca8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0019ccac:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019ccb4u, cpu->r[2], 0, 0);
    }
L_0019ccb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019ccb8u, cpu->r[1], 0, 0);
    }
L_0019ccb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019ccb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 0);
    }
L_0019ccbc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0019ccc0:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[0]);
    }
L_0019ccc4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0019ccc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_OnlineAAMenuD1Ev @ 0019ccdc (arm) */
void fn_0019ccdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ccdc:;
    {
        cpu->r[3] = rd32(0x0019cce4u + + 0x24u);
    }
L_0019cce0:;
    {
        cpu->r[2] = rd32(0x0019cce8u + + 0x24u);
    }
L_0019cce4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019ccecu, cpu->r[3], 0, 0);
    }
L_0019cce8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019ccec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019ccf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ccf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019ccf8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019ccfc:;
    {
        cpu->r[14] = 0x0019cd00u; fn_000ec21c(cpu);
    }
L_0019cd00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cd04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019cd08u)) return;
    }
}

/* _ZN15GS_OnlineAAMenu6ResumeEv @ 0019cd10 (arm) */
void fn_0019cd10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019cd10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019cd14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019cd18:;
    {
        cpu->r[14] = 0x0019cd1cu; fn_001142a0(cpu);
    }
L_0019cd1c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019cd20:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019cd24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019cd28u)) return;
    }
}

/* _ZN15GS_OnlineAAMenu6UpdateEv @ 0019cd28 (arm) */
void fn_0019cd28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019cd28:;
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
L_0019cd2c:;
    {
        cpu->r[5] = rd32(0x0019cd34u + + 0x528u);
    }
L_0019cd30:;
    {
        cpu->r[6] = rd32(0x0019cd38u + + 0x528u);
    }
L_0019cd34:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019cd38:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019cd40u, cpu->r[5], 0, 0);
    }
L_0019cd3c:;
    {
        cpu->r[7] = rd32(0x0019cd44u + + 0x520u);
    }
L_0019cd40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_0019cd44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019cd48:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019cd4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019cd50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019cd54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019cd58:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019cd5c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019cd60:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019cd64:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[2]);
    }
L_0019cd68:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_0019cd6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019cd70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce74;
        }
    }
L_0019cd74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_0019cd78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce74;
        }
    }
L_0019cd7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_0019cd80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce74;
        }
    }
L_0019cd84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0019cd88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce74;
        }
    }
L_0019cd8c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_0019cd90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce74;
        }
    }
L_0019cd94:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x964u);
    }
L_0019cd98:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_0019cd9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d0c4;
        }
    }
L_0019cda0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019cda4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019cda8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019cdac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0019cdb0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019cdb4:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0019cdb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cf24;
        }
    }
L_0019cdbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019cdc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0019cdc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cdc8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0019cdcc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0019cdd0:;
    {
        cpu->r[14] = 0x0019cdd4u; fn_000ec594(cpu);
    }
L_0019cdd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019cdd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cddc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 3u, &shc));
    }
L_0019cde0:;
    {
        cpu->r[14] = 0x0019cde4u; fn_000ec594(cpu);
    }
L_0019cde4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019cde8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0019cdec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cf58;
        }
    }
L_0019cdf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019cdf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019cdf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0019cdfc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
        }
    }
L_0019ce00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ce40;
        }
    }
L_0019ce04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019ce08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cfb4;
        }
    }
L_0019ce0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019ce10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019ce40;
        }
    }
L_0019ce14:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019ce18:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0019ce1c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0019ce20:;
    {
        cpu->r[14] = 0x0019ce24u; fn_001933d4(cpu);
    }
L_0019ce24:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0019ce28:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_0019ce2c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019ce30:;
    {
        cpu->r[14] = 0x0019ce34u; fn_001c13d0(cpu);
    }
L_0019ce34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019ce38:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0019ce3c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019ce40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0019ce44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cef4;
        }
    }
L_0019ce48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0019ce4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cf58;
        }
    }
L_0019ce50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019ce54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019cf04;
        }
    }
L_0019ce58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ce5c:;
    {
        cpu->r[14] = 0x0019ce60u; fn_00114a58(cpu);
    }
L_0019ce60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019ce64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cf04;
        }
    }
L_0019ce68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019ce6c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019ce70:;
    {
        goto L_0019cf04;
    }
L_0019ce74:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x968u);
    }
L_0019ce78:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0019ce7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019cd94;
        }
    }
L_0019ce80:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019ce84:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019ce88:;
    {
        wr8(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0019ce8c:;
    {
        cpu->r[14] = 0x0019ce90u; fn_0018ba6c(cpu);
    }
L_0019ce90:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0019ce94:;
    {
        cpu->r[14] = 0x0019ce98u; fn_000a7570(cpu);
    }
L_0019ce98:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019ce9c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019cea0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019cea4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019cea8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019ceac:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_0019ceb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019ceb4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0019ceb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0019cebc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_0019cec0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_0019cec4:;
    {
        cpu->r[14] = 0x0019cec8u; fn_000aeb58(cpu);
    }
L_0019cec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_0019cecc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019ced0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0019ced4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019ced8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019cedc:;
    {
        cpu->r[14] = 0x0019cee0u; fn_000a7bb0(cpu);
    }
L_0019cee0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019cee4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019cee8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019ceec:;
    {
        cpu->r[14] = 0x0019cef0u; fn_000f361c(cpu);
    }
L_0019cef0:;
    {
        goto L_0019cd94;
    }
L_0019cef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cef8:;
    {
        cpu->r[14] = 0x0019cefcu; fn_000eb59c(cpu);
    }
L_0019cefc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cf00:;
    {
        cpu->r[14] = 0x0019cf04u; fn_00128a5c(cpu);
    }
L_0019cf04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019cf08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_0019cf0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019cf10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019cf14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019d258;
        }
    }
L_0019cf18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019cf1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0019cf20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019cf24u)) return;
    }
L_0019cf24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019cf28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0019cf2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cf30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0019cf34:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0019cf38:;
    {
        cpu->r[14] = 0x0019cf3cu; fn_000ec4f0(cpu);
    }
L_0019cf3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019cf40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cf44:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 3u, &shc));
    }
L_0019cf48:;
    {
        cpu->r[14] = 0x0019cf4cu; fn_000ec4f0(cpu);
    }
L_0019cf4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019cf50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0019cf54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019cdf0;
        }
    }
L_0019cf58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019cf5c:;
    {
        cpu->r[14] = 0x0019cf60u; fn_0010da28(cpu);
    }
L_0019cf60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019cf64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019cf04;
        }
    }
L_0019cf68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0019cf6c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0019cf70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019cf74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d1c8;
        }
    }
L_0019cf78:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_0019cf7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019cf80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d130;
        }
    }
L_0019cf84:;
    {
        cpu->r[2] = 0x00000461u;
    }
L_0019cf88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019cf8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019cf04;
        }
    }
L_0019cf90:;
    {
        cpu->r[0] = 0x00001414u;
    }
L_0019cf94:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019cf98:;
    {
        cpu->r[14] = 0x0019cf9cu; fn_0018ba6c(cpu);
    }
L_0019cf9c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019cfa0:;
    {
        cpu->r[14] = 0x0019cfa4u; fn_001a2f7c(cpu);
    }
L_0019cfa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019cfa8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019cfac:;
    {
        cpu->r[14] = 0x0019cfb0u; fn_000f361c(cpu);
    }
L_0019cfb0:;
    {
        goto L_0019ce68;
    }
L_0019cfb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019cfb8:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_0019cfbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019cfc0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019cfc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001au, 1, 1);
    }
L_0019cfc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019ce40;
        }
    }
L_0019cfcc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019cfd0:;
    {
        cpu->r[10] = 0x00001c7cu;
    }
L_0019cfd4:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0019cfd8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019cfdc:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0019cfe0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_0019cfe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019cfe8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019d050;
        }
    }
L_0019cfec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019cff0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019cff4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000004u, 1, 0);
    }
L_0019cff8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0019cffc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d000:;
    {
        cpu->r[14] = 0x0019d004u; fn_001d0700(cpu);
    }
L_0019d004:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0019d008:;
    {
        cpu->r[3] = 0x00001c80u;
    }
L_0019d00c:;
    {
        cpu->r[1] = rd32(0x0019d014u + + 0x254u);
    }
L_0019d010:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d014:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019d018:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019d020u, cpu->r[1], 0, 0);
    }
L_0019d01c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0019d020:;
    {
        cpu->r[14] = 0x0019d024u; imp_sprintf(cpu); /* sprintf */
    }
L_0019d024:;
    {
        cpu->r[1] = rd32(0x0019d02cu + + 0x240u);
    }
L_0019d028:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d02c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019d034u, cpu->r[1], 0, 0);
    }
L_0019d030:;
    {
        cpu->r[14] = 0x0019d034u; fn_001d038c(cpu);
    }
L_0019d034:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d220;
        }
    }
L_0019d03c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019d040:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019d044:;
    {
        cpu->r[14] = 0x0019d048u; fn_001d02d0(cpu);
    }
L_0019d048:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0019d04c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d050:;
    {
        cpu->r[3] = 0x00001c88u;
    }
L_0019d054:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_0019d058:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d05c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d088;
        }
    }
L_0019d060:;
    {
        cpu->r[0] = 0x00001c4cu;
    }
L_0019d064:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019d068:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[14]);
    }
L_0019d06c:;
    {
        cpu->r[3] = 0x00001c84u;
    }
L_0019d070:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0019d074:;
    {
        cpu->r[0] = 0x00001c50u;
    }
L_0019d078:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0019d07c:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[12]);
    }
L_0019d080:;
    {
        cpu->r[3] = 0x00001c8cu;
    }
L_0019d084:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_0019d088:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_0019d08c:;
    {
        cpu->r[12] = 0x00001c4cu;
    }
L_0019d090:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0019d094:;
    {
        cpu->r[14] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019d098:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_0019d09c:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019d0a0:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[14]);
    }
L_0019d0a4:;
    {
        cpu->r[14] = 0x00001c50u;
    }
L_0019d0a8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0019d0ac:;
    {
        wr32(cpu->r[1] + cpu->r[14], cpu->r[8]);
    }
L_0019d0b0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0019d0b4:;
    {
        cpu->r[14] = 0x0019d0bcu;
    }
L_0019d0b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d0bcu)) return;
    }
L_0019d0bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019d0c0:;
    {
        goto L_0019ce40;
    }
L_0019d0c4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d0c8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019d0cc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019d0d0:;
    {
        cpu->r[14] = 0x0019d0d4u; fn_000f34e8(cpu);
    }
L_0019d0d4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019d0d8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019d0dc:;
    {
        cpu->r[14] = 0x0019d0e0u; fn_000f34e8(cpu);
    }
L_0019d0e0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019d0e4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019d0e8:;
    {
        cpu->r[14] = 0x0019d0ecu; fn_001933d4(cpu);
    }
L_0019d0ec:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019d0f0:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019d0f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019d0f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019d0fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019d100:;
    {
        cpu->r[14] = 0x0019d108u;
    }
L_0019d104:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d108u)) return;
    }
L_0019d108:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019d10c:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_0019d110:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d114:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019d118:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_0019d11c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019d120:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0019d124:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0019d128:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019d12c:;
    {
        goto L_0019cf04;
    }
L_0019d130:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d134:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0019d138:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d13c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0019d140:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_0019d144:;
    {
        cpu->r[14] = 0x00000003u;
    }
L_0019d148:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019d14c:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_0019d150:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_0019d154:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_0019d158:;
    {
        cpu->r[0] = 0x00001c50u;
    }
L_0019d15c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0019d160:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019d164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d168:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0019d16c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0019d170:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0019d174:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0019d178:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_0019d17c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[2]; cpu->r[2] = v;
    }
L_0019d180:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x34u);
    }
L_0019d184:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_0019d188:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_0019d18c:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_0019d190:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[4]);
    }
L_0019d194:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_0019d198:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_0019d19c:;
    {
        cpu->r[14] = 0x0019d1a0u; fn_000f35e4(cpu);
    }
L_0019d1a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d1a4:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_0019d1a8:;
    {
        cpu->r[14] = 0x0019d1acu; fn_0018ba6c(cpu);
    }
L_0019d1ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019d1b0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019d1b4:;
    {
        cpu->r[14] = 0x0019d1b8u; fn_000f22d4(cpu);
    }
L_0019d1b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d1bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019d1c0:;
    {
        cpu->r[14] = 0x0019d1c4u; fn_000f361c(cpu);
    }
L_0019d1c4:;
    {
        goto L_0019cf04;
    }
L_0019d1c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d1cc:;
    {
        cpu->r[1] = 0x00001c84u;
    }
L_0019d1d0:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0019d1d4:;
    {
        cpu->r[0] = 0x00001c50u;
    }
L_0019d1d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019d1dc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019d1e0:;
    {
        cpu->r[1] = 0x00001c8cu;
    }
L_0019d1e4:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019d1e8:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_0019d1ec:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_0019d1f0:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_0019d1f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d1f8:;
    {
        wr32(cpu->r[3] + cpu->r[0], cpu->r[14]);
    }
L_0019d1fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0019d200:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0019d204:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0019d208:;
    {
        cpu->r[14] = 0x0019d210u;
    }
L_0019d20c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d210u)) return;
    }
L_0019d210:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d214:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019d218:;
    {
        cpu->r[14] = 0x0019d21cu; fn_000f34e8(cpu);
    }
L_0019d21c:;
    {
        goto L_0019cf04;
    }
L_0019d220:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0019d224:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d228:;
    {
        cpu->r[1] = rd32(0x0019d230u + + 0x40u);
    }
L_0019d22c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0019d230:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019d238u, cpu->r[1], 0, 0);
    }
L_0019d234:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019d238:;
    {
        cpu->r[14] = 0x0019d23cu; fn_001d038c(cpu);
    }
L_0019d23c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019d250;
        }
    }
L_0019d244:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0019d248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d24c:;
    {
        goto L_0019d050;
    }
L_0019d250:;
    {
        cpu->r[14] = 0x0019d254u; fn_001d02d0(cpu);
    }
L_0019d254:;
    {
        goto L_0019d244;
    }
L_0019d258:;
    {
        cpu->r[14] = 0x0019d25cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0019d25c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[10] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[10]);
        cpu->r[13] = (uint32_t)v;
        cpu->r[14] = (uint32_t)(v >> 32);
        cpu->r[10] = wb_tmp;
        }
    }
L_0019d260:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_0019d264:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0019d268:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[12]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[9] = wb_tmp;
        }
    }
L_0019d26c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 20u, &shc); cpu->r[1] = v;
        }
    }
L_0019d270:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[1] = (uint32_t)v;
        cpu->r[2] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
}

/* _ZN15GS_OnlineAAMenu11DoBarActionEii @ 0019d274 (arm) */
void fn_0019d274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d274:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0019d278:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019d27c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019d280:;
    {
        cpu->r[5] = rd32(0x0019d288u + + 0xc4u);
    }
L_0019d284:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019d288:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d28c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019d294u, cpu->r[5], 0, 0);
    }
L_0019d290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d2c8;
        }
    }
L_0019d294:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0019d298:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0019d29c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x95cu);
    }
L_0019d2a0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0019d2a4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_0019d2a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019d2ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0019d2b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0019d2b4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019d2b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d2d0;
        }
    }
L_0019d2bc:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0019d2c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019d2c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d314;
        }
    }
L_0019d2c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019d2cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d2d0u)) return;
    }
L_0019d2d0:;
    {
        cpu->r[6] = rd32(0x0019d2d8u + + 0x78u);
    }
L_0019d2d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d2d8:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0019d2dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019d2e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019d2e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019d2e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0019d2ec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019d2f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0019d2f4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019d2f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019d2fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019d300:;
    {
        cpu->r[14] = 0x0019d304u; fn_000fd248(cpu);
    }
L_0019d304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d308:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019d30c:;
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
L_0019d310:;
    {
        return fn_0010df70(cpu);
    }
L_0019d314:;
    {
        cpu->r[6] = rd32(0x0019d31cu + + 0x34u);
    }
L_0019d318:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019d31c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019d320:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019d324:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0019d328:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d32c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019d330:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019d334:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019d338:;
    {
        cpu->r[14] = 0x0019d33cu; fn_000fd248(cpu);
    }
L_0019d33c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d340:;
    {
        cpu->r[14] = 0x0019d344u; fn_0010df70(cpu);
    }
L_0019d344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0019d348:;
    {
        goto L_0019d2d4;
    }
}

/* _ZN15GS_OnlineAAMenu8DoActionEii @ 0019d354 (arm) */
void fn_0019d354(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d354:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019d358:;
    {
        cpu->r[12] = rd32(0x0019d360u + + 0xb8u);
    }
L_0019d35c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019d360:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0019d364:;
    {
        cpu->r[12] = add_flags(cpu, 0x0019d36cu, cpu->r[12], 0, 0);
    }
L_0019d368:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019d36c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d370:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019d374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d380;
        }
    }
L_0019d378:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019d37c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d380u)) return;
    }
L_0019d380:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019d384:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019d388:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019d408;
        }
    }
L_0019d38c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x95cu);
    }
L_0019d390:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0019d394:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0019d398:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
        }
    }
L_0019d39c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
        }
    }
L_0019d3a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019d378;
        }
    }
L_0019d3a4:;
    {
        cpu->r[0] = rd32(0x0019d3acu + + 0x70u);
    }
L_0019d3a8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019d3ac:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0019d3b0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0019d3b4:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0019d3b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0019d3bc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0019d3c0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019d3c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019d3c8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019d3cc:;
    {
        cpu->r[14] = 0x0019d3d0u; fn_000fd248(cpu);
    }
L_0019d3d0:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0019d3d4:;
    {
        cpu->r[14] = 0x0019d3d8u; fn_00093f34(cpu);
    }
L_0019d3d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019d3dc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0019d3e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019d3e4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0019d3e8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0019d3ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0019d3f0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[1]);
    }
L_0019d3f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0019d3f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019d3fc:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0019d400:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019d404:;
    {
        goto L_0019d378;
    }
L_0019d408:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019d40c:;
    {
        cpu->r[14] = 0x0019d414u;
    }
L_0019d410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d414u)) return;
    }
L_0019d414:;
    {
        goto L_0019d378;
    }
}

/* _ZN15GS_OnlineAAMenuD0Ev @ 0019d420 (arm) */
void fn_0019d420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d420:;
    {
        cpu->r[3] = rd32(0x0019d428u + + 0x2cu);
    }
L_0019d424:;
    {
        cpu->r[2] = rd32(0x0019d42cu + + 0x2cu);
    }
L_0019d428:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019d430u, cpu->r[3], 0, 0);
    }
L_0019d42c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019d430:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019d434:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019d43c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019d440:;
    {
        cpu->r[14] = 0x0019d444u; fn_000ec21c(cpu);
    }
L_0019d444:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d448:;
    {
        cpu->r[14] = 0x0019d44cu; fn_0018ba20(cpu);
    }
L_0019d44c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d450:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d454u)) return;
    }
}

/* _ZN15GS_OnlineAAMenuC1Ev @ 0019d45c (arm) */
void fn_0019d45c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d45c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019d460:;
    {
        cpu->r[5] = rd32(0x0019d468u + + 0xb4u);
    }
L_0019d464:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d468:;
    {
        cpu->r[14] = 0x0019d46cu; fn_0010ffa8(cpu);
    }
L_0019d46c:;
    {
        cpu->r[2] = rd32(0x0019d474u + + 0xacu);
    }
L_0019d470:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019d478u, cpu->r[5], 0, 0);
    }
L_0019d474:;
    {
        cpu->r[3] = rd32(0x0019d47cu + + 0xa8u);
    }
L_0019d478:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019d47c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d480:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019d484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019d488:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019d48c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d4d8;
        }
    }
L_0019d494:;
    {
        cpu->r[6] = rd32(0x0019d49cu + + 0x8cu);
    }
L_0019d498:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019d49c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d4a0:;
    {
        cpu->r[14] = 0x0019d4a4u; fn_00096a08(cpu);
    }
L_0019d4a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d4a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d4ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d4b0:;
    {
        cpu->r[14] = 0x0019d4b4u; fn_0018aa44(cpu);
    }
L_0019d4b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019d4b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019d4bc:;
    {
        wr8(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0019d4c0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[2]);
    }
L_0019d4c4:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019d4c8:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_0019d4cc:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019d4d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d4d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d4d8u)) return;
    }
L_0019d4d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d4dc:;
    {
        cpu->r[14] = 0x0019d4e0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d4e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d4e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d494;
        }
    }
L_0019d4e8:;
    {
        cpu->r[6] = rd32(0x0019d4f0u + + 0x38u);
    }
L_0019d4ec:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d4f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d4f4:;
    {
        cpu->r[14] = 0x0019d4f8u; fn_0018aa20(cpu);
    }
L_0019d4f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d4fc:;
    {
        cpu->r[14] = 0x0019d500u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d500:;
    {
        cpu->r[3] = rd32(0x0019d508u + + 0x24u);
    }
L_0019d504:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d508:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d50c:;
    {
        cpu->r[3] = rd32(0x0019d514u + + 0x1cu);
    }
L_0019d510:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d514:;
    {
        cpu->r[14] = 0x0019d518u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d518:;
    {
        goto L_0019d498;
    }
}

/* _ZN15GS_OnlineAAMenuC2Ev @ 0019d534 (arm) */
void fn_0019d534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d534:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019d538:;
    {
        cpu->r[5] = rd32(0x0019d540u + + 0xb4u);
    }
L_0019d53c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d540:;
    {
        cpu->r[14] = 0x0019d544u; fn_0010ffa8(cpu);
    }
L_0019d544:;
    {
        cpu->r[2] = rd32(0x0019d54cu + + 0xacu);
    }
L_0019d548:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019d550u, cpu->r[5], 0, 0);
    }
L_0019d54c:;
    {
        cpu->r[3] = rd32(0x0019d554u + + 0xa8u);
    }
L_0019d550:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019d554:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d558:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019d55c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019d560:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019d564:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d5b0;
        }
    }
L_0019d56c:;
    {
        cpu->r[6] = rd32(0x0019d574u + + 0x8cu);
    }
L_0019d570:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019d574:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d578:;
    {
        cpu->r[14] = 0x0019d57cu; fn_00096a08(cpu);
    }
L_0019d57c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d580:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d584:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d588:;
    {
        cpu->r[14] = 0x0019d58cu; fn_0018aa44(cpu);
    }
L_0019d58c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019d590:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019d594:;
    {
        wr8(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0019d598:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[2]);
    }
L_0019d59c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019d5a0:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_0019d5a4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019d5a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d5ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d5b0u)) return;
    }
L_0019d5b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d5b4:;
    {
        cpu->r[14] = 0x0019d5b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d5b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d56c;
        }
    }
L_0019d5c0:;
    {
        cpu->r[6] = rd32(0x0019d5c8u + + 0x38u);
    }
L_0019d5c4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d5c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d5cc:;
    {
        cpu->r[14] = 0x0019d5d0u; fn_0018aa20(cpu);
    }
L_0019d5d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d5d4:;
    {
        cpu->r[14] = 0x0019d5d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d5d8:;
    {
        cpu->r[3] = rd32(0x0019d5e0u + + 0x24u);
    }
L_0019d5dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d5e0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d5e4:;
    {
        cpu->r[3] = rd32(0x0019d5ecu + + 0x1cu);
    }
L_0019d5e8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d5ec:;
    {
        cpu->r[14] = 0x0019d5f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d5f0:;
    {
        goto L_0019d570;
    }
}

/* _ZN15GS_OnlineAAMenu6RenderEv @ 0019d60c (arm) */
void fn_0019d60c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019d60c:;
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
L_0019d610:;
    {
        cpu->r[5] = rd32(0x0019d618u + + 0x964u);
    }
L_0019d614:;
    {
        cpu->r[8] = rd32(0x0019d61cu + + 0x964u);
    }
L_0019d618:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000530u, 1, 0);
    }
L_0019d61c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019d624u, cpu->r[5], 0, 0);
    }
L_0019d620:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019d624:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019d628:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0019d62c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019d630:;
    {
        cpu->r[14] = 0x0019d634u; fn_0012f780(cpu);
    }
L_0019d634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d638:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_0019d63c:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_0019d640:;
    {
        cpu->r[14] = 0x0019d644u; fn_00113570(cpu);
    }
L_0019d644:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019d648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019d64c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019d67c;
        }
    }
L_0019d650:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0019d654:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019d658:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019d65c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d660:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d664:;
    {
        cpu->r[14] = 0x0019d66cu;
    }
L_0019d668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d66cu)) return;
    }
L_0019d66c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019d670:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0019d674:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0019d678:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019d654;
        }
    }
L_0019d67c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_0019d680:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019d684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019d984;
        }
    }
L_0019d688:;
    {
        cpu->r[7] = rd32(0x0019d690u + + 0x8f4u);
    }
L_0019d68c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019d690:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0019d694:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d888;
        }
    }
L_0019d69c:;
    {
        cpu->r[6] = rd32(0x0019d6a4u + + 0x8e4u);
    }
L_0019d6a0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019d6a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d6a8:;
    {
        cpu->r[14] = 0x0019d6acu; fn_00096a08(cpu);
    }
L_0019d6ac:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d6b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d6b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d6b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d6bc:;
    {
        cpu->r[14] = 0x0019d6c0u; fn_0018aa44(cpu);
    }
L_0019d6c0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019d6c4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0019d6c8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d6cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d948;
        }
    }
L_0019d6d0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019d6d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d6d8:;
    {
        cpu->r[14] = 0x0019d6dcu; fn_00096a08(cpu);
    }
L_0019d6dc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d6e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d6e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d6e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d6ec:;
    {
        cpu->r[14] = 0x0019d6f0u; fn_0018aa44(cpu);
    }
L_0019d6f0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019d6f4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0019d6f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d6fc:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0019d700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d90c;
        }
    }
L_0019d704:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_0019d708:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d70c:;
    {
        cpu->r[14] = 0x0019d710u; fn_00096a08(cpu);
    }
L_0019d710:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d714:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d718:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d71c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d720:;
    {
        cpu->r[14] = 0x0019d724u; fn_0018aa44(cpu);
    }
L_0019d724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019d728:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0019d72c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000430u, 0, 0);
        }
    }
L_0019d730:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
        }
    }
L_0019d734:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0019d738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d998;
        }
    }
L_0019d73c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0019d740:;
    {
        cpu->r[1] = 0xaa000000u;
    }
L_0019d744:;
    {
        cpu->r[11] = rd32(0x0019d74cu + + 0x840u);
    }
L_0019d748:;
    {
        cpu->r[9] = rd32(0x0019d750u + + 0x840u);
    }
L_0019d74c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0019d750:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d754:;
    {
        cpu->r[14] = 0x0019d758u; fn_0012dd58(cpu);
    }
L_0019d758:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0019d75c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0019d760:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019d764:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019d768:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d76c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019d770:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019d774:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019d778:;
    {
        cpu->r[14] = 0x0019d77cu; fn_00130908(cpu);
    }
L_0019d77c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d780:;
    {
        cpu->r[14] = 0x0019d784u; fn_0012f780(cpu);
    }
L_0019d784:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019d788:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019d78c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d8cc;
        }
    }
L_0019d794:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019d798:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019d79c:;
    {
        cpu->r[14] = 0x0019d7a0u; fn_00096a08(cpu);
    }
L_0019d7a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d7a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d7a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d7ac:;
    {
        cpu->r[14] = 0x0019d7b0u; fn_0018aa44(cpu);
    }
L_0019d7b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019d7b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019d7b8:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_0019d7bc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0019d7c0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x54u);
    }
L_0019d7c4:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0019d7c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0019d7cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0019d7d0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019d7d4:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_0019d7d8:;
    {
        cpu->r[14] = 0x0019d7dcu; fn_000aeb58(cpu);
    }
L_0019d7dc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0019d7e0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0019d7e4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019d7e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_0019d7ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d7f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019d7f4:;
    {
        cpu->r[14] = 0x0019d7f8u; fn_000a9818(cpu);
    }
L_0019d7f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019d7fc:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_0019d800:;
    {
        cpu->r[14] = 0x0019d804u; fn_000aeb58(cpu);
    }
L_0019d804:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0019d808:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019d80c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0019d810:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019d814:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_0019d818:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019d81c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000053u, 1, 0);
    }
L_0019d820:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0019d824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0019d828:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0019d82c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0019d830:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_0019d834:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019d838:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0019d83c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0019d840:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0019d844:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019d848:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019d84c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019d850:;
    {
        cpu->r[14] = 0x0019d854u; fn_000ac4bc(cpu);
    }
L_0019d854:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[8]);
    }
L_0019d858:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d85c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019d860:;
    {
        cpu->r[14] = 0x0019d868u;
    }
L_0019d864:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d868u)) return;
    }
L_0019d868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d86c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019d870:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019d874:;
    {
        cpu->r[14] = 0x0019d87cu;
    }
L_0019d878:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d87cu)) return;
    }
L_0019d87c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000013cu, 0, 0);
    }
L_0019d880:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0019d884:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d888u)) return;
    }
L_0019d888:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d88c:;
    {
        cpu->r[14] = 0x0019d890u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d890:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d69c;
        }
    }
L_0019d898:;
    {
        cpu->r[6] = rd32(0x0019d8a0u + + 0x6e8u);
    }
L_0019d89c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d8a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d8a4:;
    {
        cpu->r[14] = 0x0019d8a8u; fn_0018aa20(cpu);
    }
L_0019d8a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d8ac:;
    {
        cpu->r[14] = 0x0019d8b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d8b0:;
    {
        cpu->r[3] = rd32(0x0019d8b8u + + 0x6dcu);
    }
L_0019d8b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d8b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d8bc:;
    {
        cpu->r[3] = rd32(0x0019d8c4u + + 0x6d4u);
    }
L_0019d8c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d8c4:;
    {
        cpu->r[14] = 0x0019d8c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d8c8:;
    {
        goto L_0019d6a0;
    }
L_0019d8cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d8d0:;
    {
        cpu->r[14] = 0x0019d8d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d8d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d794;
        }
    }
L_0019d8dc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d8e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d8e4:;
    {
        cpu->r[14] = 0x0019d8e8u; fn_0018aa20(cpu);
    }
L_0019d8e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019d8ec:;
    {
        cpu->r[14] = 0x0019d8f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d8f0:;
    {
        cpu->r[3] = rd32(0x0019d8f8u + + 0x69cu);
    }
L_0019d8f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019d8f8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d8fc:;
    {
        cpu->r[3] = rd32(0x0019d904u + + 0x694u);
    }
L_0019d900:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d904:;
    {
        cpu->r[14] = 0x0019d908u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d908:;
    {
        goto L_0019d794;
    }
L_0019d90c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d910:;
    {
        cpu->r[14] = 0x0019d914u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d914:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d704;
        }
    }
L_0019d91c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d920:;
    {
        cpu->r[14] = 0x0019d924u; fn_0018aa20(cpu);
    }
L_0019d924:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d928:;
    {
        cpu->r[14] = 0x0019d92cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d92c:;
    {
        cpu->r[3] = rd32(0x0019d934u + + 0x660u);
    }
L_0019d930:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d934:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d938:;
    {
        cpu->r[3] = rd32(0x0019d940u + + 0x658u);
    }
L_0019d93c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d940:;
    {
        cpu->r[14] = 0x0019d944u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d944:;
    {
        goto L_0019d704;
    }
L_0019d948:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d94c:;
    {
        cpu->r[14] = 0x0019d950u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019d950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019d954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d6d0;
        }
    }
L_0019d958:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d95c:;
    {
        cpu->r[14] = 0x0019d960u; fn_0018aa20(cpu);
    }
L_0019d960:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d964:;
    {
        cpu->r[14] = 0x0019d968u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019d968:;
    {
        cpu->r[3] = rd32(0x0019d970u + + 0x624u);
    }
L_0019d96c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019d970:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d974:;
    {
        cpu->r[3] = rd32(0x0019d97cu + + 0x61cu);
    }
L_0019d978:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019d97c:;
    {
        cpu->r[14] = 0x0019d980u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019d980:;
    {
        goto L_0019d6d0;
    }
L_0019d984:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019d988:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019d98c:;
    {
        cpu->r[14] = 0x0019d994u;
    }
L_0019d990:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019d994u)) return;
    }
L_0019d994:;
    {
        goto L_0019d688;
    }
L_0019d998:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019d99c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0019d9a0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019d9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019dd1c;
        }
    }
L_0019d9a8:;
    {
        cpu->r[1] = rd32(0x0019d9b0u + + 0x5ecu);
    }
L_0019d9ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019d9b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019d9b4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0019d9b8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0019d9bc:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019d9c0:;
    {
        cpu->r[14] = 0x0019d9c4u; fn_0018aa44(cpu);
    }
L_0019d9c4:;
    {
        cpu->r[1] = 0x000000e7u;
    }
L_0019d9c8:;
    {
        cpu->r[2] = 0x00000096u;
    }
L_0019d9cc:;
    {
        cpu->r[3] = 0x0000002bu;
    }
L_0019d9d0:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0019d9d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0019d9d8:;
    {
        cpu->r[14] = 0x0019d9dcu; fn_000ad8a0(cpu);
    }
L_0019d9dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019d9e0:;
    {
        cpu->r[1] = 0x00001c58u;
    }
L_0019d9e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019d9e8:;
    {
        cpu->r[3] = 0x0000005fu;
    }
L_0019d9ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019d9f0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0019d9f4:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_0019d9f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019d9fc:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_0019da00:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_0019da04:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_0019da08:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x438u);
    }
L_0019da0c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[14]; cpu->r[14] = v;
    }
L_0019da10:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x10u);
    }
L_0019da14:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0019da18:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_0019da1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0019da20:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019da24:;
    {
        cpu->r[14] = 0x0019da28u; fn_000ad200(cpu);
    }
L_0019da28:;
    {
        cpu->r[2] = 0x000000b9u;
    }
L_0019da2c:;
    {
        cpu->r[3] = 0x00000045u;
    }
L_0019da30:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019da34:;
    {
        cpu->r[1] = 0x00000456u;
    }
L_0019da38:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0019da3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0019da40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019da44:;
    {
        cpu->r[14] = 0x0019da48u; fn_000ad200(cpu);
    }
L_0019da48:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019da4c:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_0019da50:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_0019da54:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019da58:;
    {
        cpu->r[14] = 0x0019da5cu; fn_000978a8(cpu);
    }
L_0019da5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019da60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000500u, 0, 0);
    }
L_0019da64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019da68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_0019da6c:;
    {
        cpu->r[14] = 0x0019da74u;
    }
L_0019da70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019da74u)) return;
    }
L_0019da74:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_0019da78:;
    {
        cpu->r[3] = 0x0000009du;
    }
L_0019da7c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0019da80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0019da84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019da88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019da8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019da90:;
    {
        cpu->r[14] = 0x0019da94u; fn_000ad19c(cpu);
    }
L_0019da94:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019da98:;
    {
        cpu->r[1] = 0x00000458u;
    }
L_0019da9c:;
    {
        cpu->r[2] = 0x000000b9u;
    }
L_0019daa0:;
    {
        cpu->r[3] = 0x00000083u;
    }
L_0019daa4:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_0019daa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0019daac:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019dab0:;
    {
        cpu->r[14] = 0x0019dab4u; fn_000ad200(cpu);
    }
L_0019dab4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019dab8:;
    {
        cpu->r[2] = 0x0000677cu;
    }
L_0019dabc:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0019dac0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019dac4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019dac8:;
    {
        cpu->r[14] = 0x0019daccu; fn_001c09b8(cpu);
    }
L_0019dacc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_0019dad0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019de80;
        }
    }
L_0019dad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019dad8:;
    {
        cpu->r[12] = 0x0000677cu;
    }
L_0019dadc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019dae0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000430u, 0, 0);
    }
L_0019dae4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_0019dae8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0019daec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019daf0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0019daf4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019daf8:;
    {
        cpu->r[14] = 0x0019dafcu; fn_001c09b8(cpu);
    }
L_0019dafc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019db00:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0019db04:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019db08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019db0c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019db10:;
    {
        cpu->r[14] = 0x0019db14u; fn_000f3840(cpu);
    }
L_0019db14:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019db18:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019db1c:;
    {
        cpu->r[2] = 0x00000172u;
    }
L_0019db20:;
    {
        cpu->r[3] = 0x00000115u;
    }
L_0019db24:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0019db28:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019db2c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0019db30:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0019db34:;
    {
        cpu->r[14] = 0x0019db38u; fn_000ad19c(cpu);
    }
L_0019db38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019db3c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019db40:;
    {
        cpu->r[1] = 0x00000534u;
    }
L_0019db44:;
    {
        cpu->r[2] = 0x000000b9u;
    }
L_0019db48:;
    {
        cpu->r[3] = 0x00000115u;
    }
L_0019db4c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019db50:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019db54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019db58:;
    {
        cpu->r[14] = 0x0019db5cu; fn_000ad200(cpu);
    }
L_0019db5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019db60:;
    {
        cpu->r[2] = 0x0000677cu;
    }
L_0019db64:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019db68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_0019db6c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0019db70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019db74:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0019db78:;
    {
        cpu->r[14] = 0x0019db7cu; fn_001c08a8(cpu);
    }
L_0019db7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019db80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019db84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019db88:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019de6c;
        }
    }
L_0019db8c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0019db90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019db94:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0019db98:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019db9c:;
    {
        cpu->r[14] = 0x0019dba0u; fn_001c08a8(cpu);
    }
L_0019dba0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019dba4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0019dba8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019dbac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019dbb0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019dbb4:;
    {
        cpu->r[14] = 0x0019dbb8u; fn_000f3840(cpu);
    }
L_0019dbb8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019dbbc:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_0019dbc0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0019dbc4:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0019dbc8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0019dbcc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019dbd0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0019dbd4:;
    {
        cpu->r[14] = 0x0019dbd8u; fn_001c08a8(cpu);
    }
L_0019dbd8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0019dbdc:;
    {
        cpu->r[12] = 0x00001c94u;
    }
L_0019dbe0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019dbe4:;
    {
        cpu->r[2] = 0x00000172u;
    }
L_0019dbe8:;
    {
        cpu->r[3] = 0x00000135u;
    }
L_0019dbec:;
    {
        wr32(cpu->r[14] + cpu->r[12], cpu->r[0]);
    }
L_0019dbf0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019dbf4:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0019dbf8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019dbfc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0019dc00:;
    {
        cpu->r[14] = 0x0019dc04u; fn_000ad19c(cpu);
    }
L_0019dc04:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019dc08:;
    {
        cpu->r[1] = 0x00000459u;
    }
L_0019dc0c:;
    {
        cpu->r[2] = 0x000000b9u;
    }
L_0019dc10:;
    {
        cpu->r[3] = 0x00000135u;
    }
L_0019dc14:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0019dc18:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019dc1c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0019dc20:;
    {
        cpu->r[14] = 0x0019dc24u; fn_000ad200(cpu);
    }
L_0019dc24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019dc28:;
    {
        cpu->r[2] = 0x0000677cu;
    }
L_0019dc2c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0019dc30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019dc34:;
    {
        cpu->r[14] = 0x0019dc38u; fn_001c0898(cpu);
    }
L_0019dc38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019dc3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019de58;
        }
    }
L_0019dc40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019dc44:;
    {
        cpu->r[14] = 0x0000677cu;
    }
L_0019dc48:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0019dc4c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_0019dc50:;
    {
        cpu->r[14] = 0x0019dc54u; fn_001c0898(cpu);
    }
L_0019dc54:;
    {
        cpu->r[1] = rd32(0x0019dc5cu + + 0x344u);
    }
L_0019dc58:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019dc60u, cpu->r[1], 0, 0);
    }
L_0019dc5c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019dc60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019dc64:;
    {
        cpu->r[14] = 0x0019dc68u; fn_000ae830(cpu);
    }
L_0019dc68:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019dc6c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019dc70:;
    {
        cpu->r[2] = 0x00000172u;
    }
L_0019dc74:;
    {
        cpu->r[3] = 0x0000014fu;
    }
L_0019dc78:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019dc7c:;
    {
        cpu->r[9] = 0x00000010u;
    }
L_0019dc80:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0019dc84:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0019dc88:;
    {
        cpu->r[14] = 0x0019dc8cu; fn_000ad19c(cpu);
    }
L_0019dc8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019dc90:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019dc94:;
    {
        cpu->r[1] = 0x0000045au;
    }
L_0019dc98:;
    {
        cpu->r[2] = 0x000000b9u;
    }
L_0019dc9c:;
    {
        cpu->r[3] = 0x0000014fu;
    }
L_0019dca0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0019dca4:;
    {
        cpu->r[14] = 0x0019dca8u; fn_000ad200(cpu);
    }
L_0019dca8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019dcac:;
    {
        cpu->r[11] = 0x0000677cu;
    }
L_0019dcb0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0019dcb4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0019dcb8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_0019dcbc:;
    {
        cpu->r[14] = 0x0019dcc0u; fn_001c08b0(cpu);
    }
L_0019dcc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019dcc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019dd60;
        }
    }
L_0019dcc8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0019dccc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_0019dcd0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019dcd4:;
    {
        cpu->r[14] = 0x0019dcd8u; fn_001c08b0(cpu);
    }
L_0019dcd8:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0019dcdc:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_0019dce0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019dce4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019dce8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_0019dcec:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0019dcf0:;
    {
        cpu->r[1] = rd32(0x0019dcf8u + + 0x2acu);
    }
L_0019dcf4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019dcf8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019dd00u, cpu->r[1], 0, 0);
    }
L_0019dcfc:;
    {
        cpu->r[14] = 0x0019dd00u; fn_000ae830(cpu);
    }
L_0019dd00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019dd04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019dd08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019dd78;
        }
    }
L_0019dd0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019dd10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0019dd14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d858;
        }
    }
L_0019dd18:;
    {
        goto L_0019d73c;
    }
L_0019dd1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019dd20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019dd24:;
    {
        cpu->r[14] = 0x0019dd28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019dd28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019dd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019d9a8;
        }
    }
L_0019dd30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019dd34:;
    {
        cpu->r[14] = 0x0019dd38u; fn_0018aa20(cpu);
    }
L_0019dd38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019dd3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019dd40:;
    {
        cpu->r[14] = 0x0019dd44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019dd44:;
    {
        cpu->r[3] = rd32(0x0019dd4cu + + 0x248u);
    }
L_0019dd48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019dd4c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019dd50:;
    {
        cpu->r[3] = rd32(0x0019dd58u + + 0x240u);
    }
L_0019dd54:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019dd58:;
    {
        cpu->r[14] = 0x0019dd5cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019dd5c:;
    {
        goto L_0019d9a8;
    }
L_0019dd60:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0019dd64:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_0019dd68:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0019dd6c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0019dd70:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_0019dd74:;
    {
        goto L_0019dcf0;
    }
L_0019dd78:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000238u, 0, 0);
    }
L_0019dd7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019dd80:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019dd84:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019dd88:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0019dd8c:;
    {
        cpu->r[14] = 0x0019dd90u; imp_memset(cpu); /* memset */
    }
L_0019dd90:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019dd94:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019dd98:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019dd9c:;
    {
        cpu->r[14] = 0x0019dda0u; imp_memset(cpu); /* memset */
    }
L_0019dda0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019dda4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0019dda8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019de9c;
        }
    }
L_0019ddac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019ddb0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019ddb4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0019ddb8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0019ddbc:;
    {
        cpu->r[14] = 0x0019ddc0u; fn_000962d0(cpu);
    }
L_0019ddc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019ddc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0019ddc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019df34;
        }
    }
L_0019ddcc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019ddd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_0019ddd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ddd8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019dddc:;
    {
        cpu->r[14] = 0x0019dde0u; fn_000aeb58(cpu);
    }
L_0019dde0:;
    {
        cpu->r[1] = rd32(0x0019dde8u + + 0x1c0u);
    }
L_0019dde4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019dde8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019ddf0u, cpu->r[1], 0, 0);
    }
L_0019ddec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0019ddf0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019ddf4:;
    {
        cpu->r[14] = 0x0019ddf8u; fn_000ae830(cpu);
    }
L_0019ddf8:;
    {
        cpu->r[0] = 0x0000044fu;
    }
L_0019ddfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019de00:;
    {
        cpu->r[14] = 0x0019de04u; fn_000aeb58(cpu);
    }
L_0019de04:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0019de08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019de0c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019de10:;
    {
        cpu->r[14] = 0x0019de14u; fn_000ae740(cpu);
    }
L_0019de14:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019de18:;
    {
        cpu->r[14] = 0x0019de1cu; fn_0018ba6c(cpu);
    }
L_0019de1c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0019de20:;
    {
        cpu->r[14] = 0x0019de24u; fn_000a7570(cpu);
    }
L_0019de24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019de28:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019de2c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0019de30:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0019de34:;
    {
        cpu->r[14] = 0x0019de38u; fn_000a7bb0(cpu);
    }
L_0019de38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019de3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0019de40:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019de44:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019de48:;
    {
        cpu->r[14] = 0x0019de4cu; fn_000f361c(cpu);
    }
L_0019de4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019de50:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019de54:;
    {
        goto L_0019dd0c;
    }
L_0019de58:;
    {
        cpu->r[1] = rd32(0x0019de60u + + 0x14cu);
    }
L_0019de5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019de60:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019de68u, cpu->r[1], 0, 0);
    }
L_0019de64:;
    {
        cpu->r[14] = 0x0019de68u; fn_000ae830(cpu);
    }
L_0019de68:;
    {
        goto L_0019dc68;
    }
L_0019de6c:;
    {
        cpu->r[1] = rd32(0x0019de74u + + 0x13cu);
    }
L_0019de70:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019de74:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019de7cu, cpu->r[1], 0, 0);
    }
L_0019de78:;
    {
        cpu->r[14] = 0x0019de7cu; fn_000ae1a4(cpu);
    }
L_0019de7c:;
    {
        goto L_0019dbb8;
    }
L_0019de80:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000430u, 0, 0);
    }
L_0019de84:;
    {
        cpu->r[1] = rd32(0x0019de8cu + + 0x128u);
    }
L_0019de88:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_0019de8c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019de90:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019de98u, cpu->r[1], 0, 0);
    }
L_0019de94:;
    {
        cpu->r[14] = 0x0019de98u; fn_000ae1a4(cpu);
    }
L_0019de98:;
    {
        goto L_0019db14;
    }
L_0019de9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0019dea0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_0019dea4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019dea8:;
    {
        cpu->r[14] = 0x0019deacu; fn_000962d0(cpu);
    }
L_0019deac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0019deb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019dee8;
        }
    }
L_0019deb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019deb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019debc:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_0019dec0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019dec4:;
    {
        cpu->r[14] = 0x0019dec8u; fn_000aeb58(cpu);
    }
L_0019dec8:;
    {
        cpu->r[1] = rd32(0x0019ded0u + + 0xe8u);
    }
L_0019decc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019ded0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019ded8u, cpu->r[1], 0, 0);
    }
L_0019ded4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0019ded8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019dedc:;
    {
        cpu->r[14] = 0x0019dee0u; fn_000ae830(cpu);
    }
L_0019dee0:;
    {
        cpu->r[0] = 0x00000450u;
    }
L_0019dee4:;
    {
        goto L_0019ddfc;
    }
L_0019dee8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019deec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000026u, 0, 0);
    }
L_0019def0:;
    {
        cpu->r[14] = 0x0019def4u; fn_000aeb58(cpu);
    }
L_0019def4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019def8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019defc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019df00:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019df04:;
    {
        cpu->r[0] = 0x00000090u;
    }
L_0019df08:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019df0c:;
    {
        cpu->r[14] = 0x0019df10u; fn_000aeb58(cpu);
    }
L_0019df10:;
    {
        cpu->r[1] = rd32(0x0019df18u + + 0xa4u);
    }
L_0019df14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019df18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019df1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019df24u, cpu->r[1], 0, 0);
    }
L_0019df20:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0019df24:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019df28:;
    {
        cpu->r[14] = 0x0019df2cu; fn_000ae830(cpu);
    }
L_0019df2c:;
    {
        cpu->r[0] = 0x00000450u;
    }
L_0019df30:;
    {
        goto L_0019ddfc;
    }
L_0019df34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019df38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000026u, 0, 0);
    }
L_0019df3c:;
    {
        cpu->r[14] = 0x0019df40u; fn_000aeb58(cpu);
    }
L_0019df40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0019df44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019df48:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0019df4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019df50:;
    {
        cpu->r[0] = 0x00000090u;
    }
L_0019df54:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0019df58:;
    {
        cpu->r[14] = 0x0019df5cu; fn_000aeb58(cpu);
    }
L_0019df5c:;
    {
        cpu->r[1] = rd32(0x0019df64u + + 0x5cu);
    }
L_0019df60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019df64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019df68:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019df70u, cpu->r[1], 0, 0);
    }
L_0019df6c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0019df70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019df74:;
    {
        cpu->r[14] = 0x0019df78u; fn_000ae830(cpu);
    }
L_0019df78:;
    {
        goto L_0019ddf8;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin8isKindOfEi @ 0019dfc4 (arm) */
void fn_0019dfc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019dfc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003eu, 1, 1);
    }
L_0019dfc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0019dfcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0019dfd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin17ApplyMenuSettingsEv @ 0019dfd4 (arm) */
void fn_0019dfd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019dfd4:;
    {
        cpu->r[3] = rd32(0x0019dfdcu + + 0x4cu);
    }
L_0019dfd8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019dfdc:;
    {
        cpu->r[1] = rd32(0x0019dfe4u + + 0x48u);
    }
L_0019dfe0:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_0019dfe4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019dfecu, cpu->r[3], 0, 0);
    }
L_0019dfe8:;
    {
        cpu->r[2] = rd32(0x0019dff0u + + 0x40u);
    }
L_0019dfec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019dff0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019dff4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0019dff8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0019dffc:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_0019e000:;
    {
        cpu->r[2] = 0x00000413u;
    }
L_0019e004:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_0019e008:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019e00c:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_0019e010:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_0019e014:;
    {
        cpu->r[3] = 0x0000062eu;
    }
L_0019e018:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_0019e01c:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_0019e020:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_0019e024:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin19ProcessOnMousePinchEv @ 0019e034 (arm) */
void fn_0019e034(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e034:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_59 @ 0019e038 (arm) */
void fn_0019e038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e038:;
    {
        cpu->r[3] = rd32(0x0019e040u + + 0x5cu);
    }
L_0019e03c:;
    {
        cpu->r[2] = rd32(0x0019e044u + + 0x5cu);
    }
L_0019e040:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019e048u, cpu->r[3], 0, 0);
    }
L_0019e044:;
    {
        cpu->r[12] = rd32(0x0019e04cu + + 0x58u);
    }
L_0019e048:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0019e04c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e050:;
    {
        cpu->r[2] = rd32(0x0019e058u + + 0x50u);
    }
L_0019e054:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019e058:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e05c:;
    {
        cpu->r[2] = rd32(0x0019e064u + + 0x48u);
    }
L_0019e060:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0019e064:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0019e068:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019e06c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019e074u, cpu->r[2], 0, 0);
    }
L_0019e070:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x0000002du, 0, 0);
    }
L_0019e074:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x000000f5u, 1, 0);
    }
L_0019e078:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 0);
    }
L_0019e07c:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[4]);
    }
L_0019e080:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_0019e084:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[12]);
    }
L_0019e088:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_0019e08c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0019e090:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_0019e094:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0019e098:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoinD1Ev @ 0019e0b0 (arm) */
void fn_0019e0b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e0b0:;
    {
        cpu->r[3] = rd32(0x0019e0b8u + + 0x24u);
    }
L_0019e0b4:;
    {
        cpu->r[2] = rd32(0x0019e0bcu + + 0x24u);
    }
L_0019e0b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019e0c0u, cpu->r[3], 0, 0);
    }
L_0019e0bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019e0c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e0c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e0c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019e0cc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019e0d0:;
    {
        cpu->r[14] = 0x0019e0d4u; fn_000ec21c(cpu);
    }
L_0019e0d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e0d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e0dcu)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin6ResumeEv @ 0019e0e4 (arm) */
void fn_0019e0e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e0e4:;
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
L_0019e0e8:;
    {
        cpu->r[8] = rd32(0x0019e0f0u + + 0x114u);
    }
L_0019e0ec:;
    {
        cpu->r[10] = rd32(0x0019e0f4u + + 0x114u);
    }
L_0019e0f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e0f4:;
    {
        cpu->r[8] = add_flags(cpu, 0x0019e0fcu, cpu->r[8], 0, 0);
    }
L_0019e0f8:;
    {
        cpu->r[14] = 0x0019e0fcu; fn_001142a0(cpu);
    }
L_0019e0fc:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019e100:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019e104:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_0019e108:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e10c:;
    {
        wr8(cpu->r[4] + + 0x9b4u, cpu->r[1]);
    }
L_0019e110:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0019e114:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_0019e118:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0019e11c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_0019e120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000370u, 0, 0);
    }
L_0019e124:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0019e128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e1b8;
        }
    }
L_0019e12c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_0019e130:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0019e134:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e138:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e144;
        }
    }
L_0019e13c:;
    {
        cpu->r[14] = 0x0019e140u; fn_0018ba20(cpu);
    }
L_0019e140:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_0019e144:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0019e148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e158;
        }
    }
L_0019e150:;
    {
        cpu->r[14] = 0x0019e154u; fn_0018ba20(cpu);
    }
L_0019e154:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_0019e158:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0019e15c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e16c;
        }
    }
L_0019e164:;
    {
        cpu->r[14] = 0x0019e168u; fn_0018ba20(cpu);
    }
L_0019e168:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_0019e16c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0019e170:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e180;
        }
    }
L_0019e178:;
    {
        cpu->r[14] = 0x0019e17cu; fn_0018ba20(cpu);
    }
L_0019e17c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_0019e180:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019e184:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e194;
        }
    }
L_0019e18c:;
    {
        cpu->r[14] = 0x0019e190u; fn_0018ba20(cpu);
    }
L_0019e190:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_0019e194:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019e198:;
    {
        cpu->r[14] = 0x0019e19cu; fn_0018ba20(cpu);
    }
L_0019e19c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_0019e1a0:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0019e1a4:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0019e1a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_0019e1ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000370u, 0, 0);
    }
L_0019e1b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0019e1b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e12c;
        }
    }
L_0019e1b8:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019e1bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e1c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0019e1c4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0019e1c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e1e8;
        }
    }
L_0019e1cc:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0019e1d0:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_0019e1d4:;
    {
        cpu->r[14] = 0x0019e1d8u; fn_002082a8(cpu);
    }
L_0019e1d8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0019e1dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019e1e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e1cc;
        }
    }
L_0019e1e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e1e8:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019e1ec:;
    {
        cpu->r[2] = 0x0000e774u;
    }
L_0019e1f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e1f4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019e1f8:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_0019e1fc:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_0019e200:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e204u)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin18ProcessOnMouseDragEv @ 0019e20c (arm) */
void fn_0019e20c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e20c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019e210:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e214:;
    {
        cpu->r[14] = 0x0019e218u; fn_00110818(cpu);
    }
L_0019e218:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019e21c:;
    {
        wr32(cpu->r[4] + + 0x9b0u, cpu->r[3]);
    }
L_0019e220:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e224u)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin24ProcessOnMouseButtonDownEv @ 0019e224 (arm) */
void fn_0019e224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e224:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019e228:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e22c:;
    {
        cpu->r[14] = 0x0019e230u; fn_00110498(cpu);
    }
L_0019e230:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019e234:;
    {
        wr8(cpu->r[4] + + 0x9a8u, cpu->r[3]);
    }
L_0019e238:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019e23c:;
    {
        wr32(cpu->r[4] + + 0x9b0u, cpu->r[3]);
    }
L_0019e240:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e244u)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin6UpdateEv @ 0019e244 (arm) */
void fn_0019e244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e244:;
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
L_0019e248:;
    {
        cpu->r[5] = rd32(0x0019e250u + + 0x770u);
    }
L_0019e24c:;
    {
        cpu->r[6] = rd32(0x0019e254u + + 0x770u);
    }
L_0019e250:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0019e254:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019e25cu, cpu->r[5], 0, 0);
    }
L_0019e258:;
    {
        cpu->r[8] = rd32(0x0019e260u + + 0x768u);
    }
L_0019e25c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e260:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e264:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0019e268:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e26c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019e270:;
    {
        cpu->r[2] = 0x00006788u;
    }
L_0019e274:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e278:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0019e27c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019e280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5ac;
        }
    }
L_0019e284:;
    {
        cpu->r[2] = 0x0000e224u;
    }
L_0019e288:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019e28c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e290:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_0019e294:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019e298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5c8;
        }
    }
L_0019e29c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_0019e2a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5c8;
        }
    }
L_0019e2a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_0019e2a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5c8;
        }
    }
L_0019e2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0019e2b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5c8;
        }
    }
L_0019e2b4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_0019e2b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5c8;
        }
    }
L_0019e2bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x990u);
    }
L_0019e2c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019e2c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e64c;
        }
    }
L_0019e2c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x9b4u);
    }
L_0019e2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e3d4;
        }
    }
L_0019e2d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e2d8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0019e2dc:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019e2e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019e2e4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x64u);
    }
L_0019e2e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019e2ec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0019e3d4;
        }
    }
L_0019e2f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x998u);
    }
L_0019e2f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019e2f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0019e2fc:;
    {
        cpu->r[1] = 0x00006163u;
    }
L_0019e300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e304:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0019e308:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0074u << 16);
    }
L_0019e30c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[7]);
        cpu->r[2] = wb_tmp;
    }
L_0019e310:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0019e314:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[7]);
        cpu->r[2] = wb_tmp;
    }
L_0019e318:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[7]);
        cpu->r[2] = wb_tmp;
    }
L_0019e31c:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_0019e320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e338;
        }
    }
L_0019e324:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019e328:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e32c:;
    {
        cpu->r[14] = 0x0019e334u;
    }
L_0019e330:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e334u)) return;
    }
L_0019e334:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[7]);
    }
L_0019e338:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_0019e33c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0019e340:;
    {
        cpu->r[14] = 0x0019e344u; fn_0018ba6c(cpu);
    }
L_0019e344:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019e348:;
    {
        cpu->r[14] = 0x0019e34cu; fn_001c695c(cpu);
    }
L_0019e34c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019e350:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0019e354:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019e358:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019e35c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0019e360:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[7]);
    }
L_0019e364:;
    {
        cpu->r[14] = 0x0019e36cu;
    }
L_0019e368:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e36cu)) return;
    }
L_0019e36c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e370:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e374:;
    {
        cpu->r[3] = 0x0000e794u;
    }
L_0019e378:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e37c:;
    {
        cpu->r[0] = 0x00006788u;
    }
L_0019e380:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0019e384:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0019e388:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019e38c:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_0019e390:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0019e394:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0019e398:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0019e39c:;
    {
        cpu->r[14] = 0x0019e3a0u; fn_001c4130(cpu);
    }
L_0019e3a0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019e3a4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019e3a8:;
    {
        cpu->r[14] = 0x0019e3acu; fn_001933d4(cpu);
    }
L_0019e3ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x998u);
    }
L_0019e3b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0019e3b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e3cc;
        }
    }
L_0019e3b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019e3bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e3c0:;
    {
        cpu->r[14] = 0x0019e3c8u;
    }
L_0019e3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e3c8u)) return;
    }
L_0019e3c8:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[9]);
    }
L_0019e3cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019e3d0:;
    {
        wr8(cpu->r[4] + + 0x9b4u, cpu->r[3]);
    }
L_0019e3d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e3d8:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019e3dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e3e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019e3e4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019e3e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0019e3ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019e3f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0019e3f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_0019e3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e41c;
        }
    }
L_0019e3fc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0019e400:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e404:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0019e408:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019e40c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e400;
        }
    }
L_0019e410:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_0019e414:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0019e418:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_0019e41c:;
    {
        cpu->r[3] = rd32(0x0019e424u + + 0x5a8u);
    }
L_0019e420:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019e424:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0019e428:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019e42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e718;
        }
    }
L_0019e430:;
    {
        cpu->r[10] = rd32(0x0019e438u + + 0x598u);
    }
L_0019e434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019e438:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019e43c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019e440:;
    {
        cpu->r[14] = 0x0019e444u; fn_0018aa44(cpu);
    }
L_0019e444:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e448:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019e44c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e450:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019e454:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0019e458:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019e45c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019e460:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0019e464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e75c;
        }
    }
L_0019e468:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e46c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019e470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e468;
        }
    }
L_0019e474:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019e478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e47c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019e480:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019e484:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019e488:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0019e48c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0019e490:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_0019e494:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019e498:;
    {
        uint32_t v = cpu->r[12] & ~ 0x10000000u; cpu->r[12] = v;
    }
L_0019e49c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_0019e4a0:;
    {
        cpu->r[14] = 0x0019e4a8u;
    }
L_0019e4a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e4a8u)) return;
    }
L_0019e4a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019e4ac:;
    {
        cpu->r[1] = 0x000000dau;
    }
L_0019e4b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019e4b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019e4b8:;
    {
        cpu->r[14] = 0x0019e4bcu; fn_000a8d10(cpu);
    }
L_0019e4bc:;
    {
        cpu->r[3] = rd32(0x0019e4c4u + + 0x510u);
    }
L_0019e4c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019e4c4:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0019e4c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e4cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00006667u;
        }
    }
L_0019e4d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_0019e4d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9acu);
        }
    }
L_0019e4d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
        }
    }
L_0019e4dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
        }
    }
L_0019e4e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_0019e4e4:;
    {
        if (cond_test(cpu, 1)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0019e4e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
        }
    }
L_0019e4ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 3u, &shc), cpu->r[2], 1, 0);
        }
    }
L_0019e4f0:;
    {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
    }
L_0019e4f4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0019e4f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0019e4fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_0019e500:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019e514;
        }
    }
L_0019e504:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e508:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_0019e50c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_0019e510:;
    {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
    }
L_0019e514:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x99cu);
    }
L_0019e518:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x9acu);
    }
L_0019e51c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0019e520:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x9a8u);
    }
L_0019e524:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019e528:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
        }
    }
L_0019e52c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019e530:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_0019e534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e6d0;
        }
    }
L_0019e538:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_0019e53c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_0019e540:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0019e544:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6]; cpu->r[6] = v;
    }
L_0019e548:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0019e54c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[6]);
        }
    }
L_0019e550:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0019e554:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[2]);
        }
    }
L_0019e558:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x99cu);
        }
    }
L_0019e55c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9b0u);
    }
L_0019e560:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e564:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0019e568:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_0019e56c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
        }
    }
L_0019e570:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019e574:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019e578:;
    {
        wr32(cpu->r[4] + + 0x9b0u, cpu->r[2]);
    }
L_0019e57c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019e580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e7d0;
        }
    }
L_0019e584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019e588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e794;
        }
    }
L_0019e58c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019e590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e5ac;
        }
    }
L_0019e594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e598:;
    {
        cpu->r[14] = 0x0019e59cu; fn_00114a58(cpu);
    }
L_0019e59c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5ac;
        }
    }
L_0019e5a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019e5a8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019e5ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0019e5b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019e5b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e5b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019e5bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e9bc;
        }
    }
L_0019e5c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0019e5c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e5c8u)) return;
    }
L_0019e5c8:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x994u);
    }
L_0019e5cc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0019e5d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e2bc;
        }
    }
L_0019e5d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019e5d8:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019e5dc:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_0019e5e0:;
    {
        cpu->r[14] = 0x0019e5e4u; fn_0018ba6c(cpu);
    }
L_0019e5e4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019e5e8:;
    {
        cpu->r[14] = 0x0019e5ecu; fn_000a7570(cpu);
    }
L_0019e5ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e5f0:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019e5f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e5f8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019e5fc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019e600:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_0019e604:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019e608:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0019e60c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0019e610:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_0019e614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_0019e618:;
    {
        cpu->r[14] = 0x0019e61cu; fn_000aeb58(cpu);
    }
L_0019e61c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0019e620:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_0019e624:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019e628:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019e62c:;
    {
        cpu->r[14] = 0x0019e630u; fn_000a7bb0(cpu);
    }
L_0019e630:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e634:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019e638:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019e63c:;
    {
        cpu->r[14] = 0x0019e640u; fn_000f361c(cpu);
    }
L_0019e640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x990u);
    }
L_0019e644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019e648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e2c8;
        }
    }
L_0019e64c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019e650:;
    {
        goto L_0019e660;
    }
L_0019e654:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019e658:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019e65c:;
    {
        cpu->r[14] = 0x0019e660u; fn_000f34e8(cpu);
    }
L_0019e660:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019e664:;
    {
        cpu->r[14] = 0x0019e668u; fn_000f34a0(cpu);
    }
L_0019e668:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_0019e66c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019e670:;
    {
        cpu->r[14] = 0x0019e678u;
    }
L_0019e674:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e678u)) return;
    }
L_0019e678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e67c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e654;
        }
    }
L_0019e680:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019e684:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019e688:;
    {
        cpu->r[14] = 0x0019e68cu; fn_001933d4(cpu);
    }
L_0019e68c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019e690:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019e694:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019e698:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019e69c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e6a0:;
    {
        cpu->r[14] = 0x0019e6a8u;
    }
L_0019e6a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e6a8u)) return;
    }
L_0019e6a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019e6ac:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_0019e6b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019e6b4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019e6b8:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_0019e6bc:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019e6c0:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0019e6c4:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0019e6c8:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019e6cc:;
    {
        goto L_0019e5ac;
    }
L_0019e6d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0019e6d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9a0u);
    }
L_0019e6d8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[6] = v;
    }
L_0019e6dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0019e6e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e6ec;
        }
    }
L_0019e6e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019e6e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e548;
        }
    }
L_0019e6ec:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_0019e6f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0019e6f4:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_0019e6f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0019e6fc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_0019e700:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0019e704:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[6] = v;
    }
L_0019e708:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0019e70c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_0019e710:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_0019e714:;
    {
        goto L_0019e548;
    }
L_0019e718:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019e71c:;
    {
        cpu->r[14] = 0x0019e720u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019e720:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e430;
        }
    }
L_0019e728:;
    {
        cpu->r[10] = rd32(0x0019e730u + + 0x2a0u);
    }
L_0019e72c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019e730:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019e734:;
    {
        cpu->r[14] = 0x0019e738u; fn_0018aa20(cpu);
    }
L_0019e738:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019e73c:;
    {
        cpu->r[14] = 0x0019e740u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019e740:;
    {
        cpu->r[3] = rd32(0x0019e748u + + 0x290u);
    }
L_0019e744:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019e748:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019e74c:;
    {
        cpu->r[3] = rd32(0x0019e754u + + 0x288u);
    }
L_0019e750:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019e754:;
    {
        cpu->r[14] = 0x0019e758u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019e758:;
    {
        goto L_0019e434;
    }
L_0019e75c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019e760:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e764:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019e768:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019e76c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019e770:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0019e774:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0019e778:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_0019e77c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019e780:;
    {
        uint32_t v = cpu->r[12] | 0x10000000u; cpu->r[12] = v;
    }
L_0019e784:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_0019e788:;
    {
        cpu->r[14] = 0x0019e790u;
    }
L_0019e78c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e790u)) return;
    }
L_0019e790:;
    {
        goto L_0019e4a8;
    }
L_0019e794:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e798:;
    {
        cpu->r[14] = 0x0019e79cu; fn_0010da28(cpu);
    }
L_0019e79c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019e7a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e5ac;
        }
    }
L_0019e7a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0019e7a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0019e7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e8d8;
        }
    }
L_0019e7b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0019e7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e7e8;
        }
    }
L_0019e7b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019e7bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e5ac;
        }
    }
L_0019e7c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e7c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019e7c8:;
    {
        cpu->r[14] = 0x0019e7ccu; fn_000f34e8(cpu);
    }
L_0019e7cc:;
    {
        goto L_0019e5ac;
    }
L_0019e7d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e7d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019e7d8:;
    {
        cpu->r[14] = 0x0019e7dcu; fn_000eb59c(cpu);
    }
L_0019e7dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e7e0:;
    {
        cpu->r[14] = 0x0019e7e4u; fn_00128a5c(cpu);
    }
L_0019e7e4:;
    {
        goto L_0019e5ac;
    }
L_0019e7e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0019e7ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0019e7f0:;
    {
        cpu->r[1] = rd32(0x0019e7f8u + + 0x1e8u);
    }
L_0019e7f4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0019e7f8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0019e7fc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_0019e800:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0x18u;
        wr32(cpu->r[10] + - 0x18u, cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_0019e804:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019e80cu, cpu->r[1], 0, 0);
    }
L_0019e808:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_0019e80c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019e810:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_0019e814:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_0019e818:;
    {
        cpu->r[14] = 0x0019e81cu; imp_sprintf(cpu); /* sprintf */
    }
L_0019e81c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x998u);
    }
L_0019e820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0019e824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e83c;
        }
    }
L_0019e828:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019e82c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e830:;
    {
        cpu->r[14] = 0x0019e838u;
    }
L_0019e834:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e838u)) return;
    }
L_0019e838:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[6]);
    }
L_0019e83c:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_0019e840:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0019e844:;
    {
        cpu->r[14] = 0x0019e848u; fn_0018ba6c(cpu);
    }
L_0019e848:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019e84c:;
    {
        cpu->r[14] = 0x0019e850u; fn_001c695c(cpu);
    }
L_0019e850:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019e854:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0019e858:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019e85c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019e860:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0019e864:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[6]);
    }
L_0019e868:;
    {
        cpu->r[14] = 0x0019e870u;
    }
L_0019e86c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e870u)) return;
    }
L_0019e870:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e874:;
    {
        cpu->r[1] = 0x0000e794u;
    }
L_0019e878:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019e87c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019e880:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0019e884:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019e888:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_0019e88c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0019e890:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0019e894:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0019e898:;
    {
        cpu->r[14] = 0x0019e89cu; fn_001c4130(cpu);
    }
L_0019e89c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e8a0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019e8a4:;
    {
        cpu->r[14] = 0x0019e8a8u; fn_001933d4(cpu);
    }
L_0019e8a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x998u);
    }
L_0019e8ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0019e8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e8c8;
        }
    }
L_0019e8b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019e8b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019e8bc:;
    {
        cpu->r[14] = 0x0019e8c4u;
    }
L_0019e8c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019e8c4u)) return;
    }
L_0019e8c4:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[7]);
    }
L_0019e8c8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019e8cc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0019e8d0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019e8d4:;
    {
        goto L_0019e5a4;
    }
L_0019e8d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e8dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019e8e0:;
    {
        cpu->r[6] = 0x0000e770u;
    }
L_0019e8e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0019e8e8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_0019e8ec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019e8f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019e8f4:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_0019e8f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0019e8fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000370u, 0, 0);
    }
L_0019e900:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_0019e904:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_0019e908:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_0019e90c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0019e910:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0019e914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019e9a8;
        }
    }
L_0019e918:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019e91c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0019e920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019e918;
        }
    }
L_0019e924:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0019e928:;
    {
        cpu->r[1] = rd32(0x0019e930u + + 0xb4u);
    }
L_0019e92c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019e930:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019e934:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019e93cu, cpu->r[1], 0, 0);
    }
L_0019e938:;
    {
        cpu->r[14] = 0x0019e93cu; imp_sprintf(cpu); /* sprintf */
    }
L_0019e93c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e940:;
    {
        cpu->r[1] = 0x0000e778u;
    }
L_0019e944:;
    {
        cpu->r[2] = 0x00006788u;
    }
L_0019e948:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019e94c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0019e950:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0019e954:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019e958:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0019e95c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0019e960:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019e964:;
    {
        cpu->r[14] = 0x0019e968u; fn_001c48d0(cpu);
    }
L_0019e968:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019e96c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e970:;
    {
        cpu->r[14] = 0x0019e974u; fn_001933d4(cpu);
    }
L_0019e974:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019e978:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_0019e97c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019e980:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019e984:;
    {
        cpu->r[0] = 0x000009c8u;
    }
L_0019e988:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0019e98c:;
    {
        cpu->r[14] = 0x0019e990u; fn_0018ba6c(cpu);
    }
L_0019e990:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019e994:;
    {
        cpu->r[14] = 0x0019e998u; fn_0019bd08(cpu);
    }
L_0019e998:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019e99c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019e9a0:;
    {
        cpu->r[14] = 0x0019e9a4u; fn_000f361c(cpu);
    }
L_0019e9a4:;
    {
        goto L_0019e5ac;
    }
L_0019e9a8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019e9ac:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_0019e9b0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0019e9b4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019e9b8:;
    {
        goto L_0019e5ac;
    }
L_0019e9bc:;
    {
        cpu->r[14] = 0x0019e9c0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0019e9c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[10] + (-cpu->r[12]);
        wr16(cpu->r[10], cpu->r[12]);
        cpu->r[10] = wb_tmp;
        }
    }
L_0019e9c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_0019e9c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0019e9cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0019e9d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_0019e9d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[4]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0019e9d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0019e9dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_0019e9e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[4]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[9] = wb_tmp;
        }
    }
L_0019e9e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 1, 27u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN22GS_OnlineQuickRaceJoin11DoBarActionEii @ 0019e9e8 (arm) */
void fn_0019e9e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019e9e8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0019e9ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019e9f0:;
    {
        cpu->r[0] = rd32(0x0019e9f8u + + 0x5cu);
    }
L_0019e9f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019e9f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0019e9fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019ea00:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019ea08u, cpu->r[0], 0, 0);
    }
L_0019ea04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019ea08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ea4c;
        }
    }
L_0019ea0c:;
    {
        cpu->r[14] = rd32(0x0019ea14u + + 0x44u);
    }
L_0019ea10:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019ea14:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019ea18:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0019ea1c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019ea20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0019ea24:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019ea28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019ea2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ea30:;
    {
        cpu->r[14] = 0x0019ea34u; fn_000fd248(cpu);
    }
L_0019ea34:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_0019ea38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ea3c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_0019ea40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019ea44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0019ea48:;
    {
        return fn_0010df70(cpu);
    }
L_0019ea4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019ea50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ea54u)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin8DoActionEii @ 0019ea5c (arm) */
void fn_0019ea5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ea5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019ea60:;
    {
        cpu->r[12] = rd32(0x0019ea68u + + 0x78u);
    }
L_0019ea64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019ea68:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0019ea6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0019ea74u, cpu->r[12], 0, 0);
    }
L_0019ea70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019ea74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ea78:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019ea7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ea88;
        }
    }
L_0019ea80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019ea84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ea88u)) return;
    }
L_0019ea88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019ea8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019ea90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019ead0;
        }
    }
L_0019ea94:;
    {
        cpu->r[0] = rd32(0x0019ea9cu + + 0x48u);
    }
L_0019ea98:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0019ea9c:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0019eaa0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0019eaa4:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0019eaa8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0019eaac:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019eab0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019eab4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019eab8:;
    {
        cpu->r[14] = 0x0019eabcu; fn_000fd248(cpu);
    }
L_0019eabc:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_0019eac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019eac4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019eac8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0019eacc:;
    {
        return fn_0010df70(cpu);
    }
L_0019ead0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019ead4:;
    {
        cpu->r[14] = 0x0019eadcu;
    }
L_0019ead8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019eadcu)) return;
    }
L_0019eadc:;
    {
        goto L_0019ea80;
    }
}

/* _ZN22GS_OnlineQuickRaceJoinD0Ev @ 0019eae8 (arm) */
void fn_0019eae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019eae8:;
    {
        cpu->r[3] = rd32(0x0019eaf0u + + 0x2cu);
    }
L_0019eaec:;
    {
        cpu->r[2] = rd32(0x0019eaf4u + + 0x2cu);
    }
L_0019eaf0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019eaf8u, cpu->r[3], 0, 0);
    }
L_0019eaf4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019eaf8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019eafc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019eb00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019eb04:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019eb08:;
    {
        cpu->r[14] = 0x0019eb0cu; fn_000ec21c(cpu);
    }
L_0019eb0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019eb10:;
    {
        cpu->r[14] = 0x0019eb14u; fn_0018ba20(cpu);
    }
L_0019eb14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019eb18:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019eb1cu)) return;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin13DrawTrackListEv @ 0019eb24 (arm) */
void fn_0019eb24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019eb24:;
    {
        cpu->r[2] = rd32(0x0019eb2cu + + 0x4a8u);
    }
L_0019eb28:;
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
L_0019eb2c:;
    {
        cpu->r[6] = rd32(0x0019eb34u + + 0x4a4u);
    }
L_0019eb30:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019eb38u, cpu->r[2], 0, 0);
    }
L_0019eb34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000244u, 1, 0);
    }
L_0019eb38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019eb3c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0019eb40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0019eb44:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019eb48:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019eb4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ef48;
        }
    }
L_0019eb50:;
    {
        cpu->r[4] = rd32(0x0019eb58u + + 0x484u);
    }
L_0019eb54:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0019eb58:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019eb5c:;
    {
        cpu->r[14] = 0x0019eb60u; fn_00096a08(cpu);
    }
L_0019eb60:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019eb64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019eb68:;
    {
        cpu->r[7] = rd32(cpu->r[14] + cpu->r[4]);
    }
L_0019eb6c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019eb70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019eb74:;
    {
        cpu->r[14] = 0x0019eb78u; fn_0018aa44(cpu);
    }
L_0019eb78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019eb7c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0019eb80:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019eb84:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019eb88:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0019eb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ef94;
        }
    }
L_0019eb90:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019eb94:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019eb98:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019eb9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_0019eba0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[4]);
    }
L_0019eba4:;
    {
        cpu->r[14] = 0x0019eba8u; fn_0018aa44(cpu);
    }
L_0019eba8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ebac:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019ebb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0019ebb4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0019ebb8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0019ebbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ebc0:;
    {
        cpu->r[14] = 0x0019ebc4u; imp_memset(cpu); /* memset */
    }
L_0019ebc4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ebc8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019ebcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019ebd0:;
    {
        cpu->r[14] = 0x0019ebd4u; imp_memset(cpu); /* memset */
    }
L_0019ebd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019ebd8:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_0019ebdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000023cu, 0, 0);
    }
L_0019ebe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000238u, 0, 0);
    }
L_0019ebe4:;
    {
        cpu->r[14] = 0x0019ebe8u; fn_000a8d10(cpu);
    }
L_0019ebe8:;
    {
        cpu->r[1] = 0x000000dau;
    }
L_0019ebec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_0019ebf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_0019ebf4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019ebf8:;
    {
        cpu->r[14] = 0x0019ebfcu; fn_000a8d10(cpu);
    }
L_0019ebfc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ec00:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019ec04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019ec08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019ec0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0019ec10:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019ec14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019ec18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019eea8;
        }
    }
L_0019ec1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019ec20:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019ec24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019ec1c;
        }
    }
L_0019ec28:;
    {
        cpu->r[12] = rd32(0x0019ec30u + + 0x3b0u);
    }
L_0019ec2c:;
    {
        cpu->r[14] = 0x0000e778u;
    }
L_0019ec30:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019ec34:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0019ec38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_0019ec3c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0019ec40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0019ec44:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0019ec48:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0019ec4c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ec50:;
    {
        cpu->r[14] = 0x0019ec54u; fn_0012f780(cpu);
    }
L_0019ec54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x23cu);
    }
L_0019ec58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x238u);
    }
L_0019ec5c:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_0019ec60:;
    {
        cpu->r[3] = sub_flags(cpu, 0x000002e0u, cpu->r[1], 1, 0);
    }
L_0019ec64:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ec68:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0019ec6c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0019ec70:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_0019ec74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ec78:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0019ec7c:;
    {
        cpu->r[14] = 0x0019ec80u; fn_0012fa2c(cpu);
    }
L_0019ec80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ec84:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0019ec88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ec8c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019ec90:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0019ec94:;
    {
        wr8(cpu->r[9] + + 0x50u, cpu->r[1]);
    }
L_0019ec98:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0019ec9c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019eca0:;
    {
        cpu->r[2] = rd32(0x0019eca8u + + 0x33cu);
    }
L_0019eca4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019ecacu, cpu->r[2], 0, 0);
    }
L_0019eca8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0019ecac:;
    {
        goto L_0019ee20;
    }
L_0019ecb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x23cu);
    }
L_0019ecb4:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_0019ecb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x99cu);
    }
L_0019ecbc:;
    {
        cpu->r[1] = 0x000000dau;
    }
L_0019ecc0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_0019ecc4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ecc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x230u);
    }
L_0019eccc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0019ecd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000073u, 0, 0);
    }
L_0019ecd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019ecd8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019ecdc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0019ece0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_0019ece4:;
    {
        cpu->r[14] = 0x0019ece8u; fn_000ad8a0(cpu);
    }
L_0019ece8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ecec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x22cu);
    }
L_0019ecf0:;
    {
        cpu->r[14] = 0x0019ecf4u; fn_000ae3d0(cpu);
    }
L_0019ecf4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ecf8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019ecfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019ed00:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0019ed04:;
    {
        cpu->r[14] = 0x0000006eu;
    }
L_0019ed08:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019ed0c:;
    {
        cpu->r[14] = 0x0019ed10u; fn_00099114(cpu);
    }
L_0019ed10:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x99cu);
    }
L_0019ed14:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_0019ed18:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0019ed1c:;
    {
        cpu->r[2] = 0x000000d0u;
    }
L_0019ed20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x230u);
    }
L_0019ed24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000082u, 0, 0);
    }
L_0019ed28:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019ed2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019ed30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0019ed34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[12]; cpu->r[3] = v;
    }
L_0019ed38:;
    {
        cpu->r[14] = 0x0019ed3cu; fn_000ad19c(cpu);
    }
L_0019ed3c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019ed40:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019ed44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ed48:;
    {
        cpu->r[14] = 0x0019ed4cu; imp_memset(cpu); /* memset */
    }
L_0019ed4c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019ed50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ed54:;
    {
        cpu->r[14] = 0x0019ed58u; fn_000ae1a4(cpu);
    }
L_0019ed58:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0019ed5c:;
    {
        cpu->r[14] = 0x0019ed60u; imp_atoi(cpu); /* atoi */
    }
L_0019ed60:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ed64:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019ed68:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019ed6c:;
    {
        cpu->r[14] = 0x0019ed70u; fn_00096b5c(cpu);
    }
L_0019ed70:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x438u);
    }
L_0019ed74:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_0019ed78:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019ed7c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_0019ed80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0019ed84:;
    {
        cpu->r[14] = 0x0019ed88u; fn_000aeb58(cpu);
    }
L_0019ed88:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x99cu);
    }
L_0019ed8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x230u);
    }
L_0019ed90:;
    {
        cpu->r[2] = 0x0000013eu;
    }
L_0019ed94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000082u, 0, 0);
    }
L_0019ed98:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_0019ed9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0019eda0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[12]; cpu->r[3] = v;
    }
L_0019eda4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019eda8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019edac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019edb0:;
    {
        cpu->r[14] = 0x0019edb4u; fn_000ad19c(cpu);
    }
L_0019edb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019edb8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019edbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019edc0:;
    {
        cpu->r[14] = 0x0019edc4u; imp_memset(cpu); /* memset */
    }
L_0019edc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019edc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0019edcc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0019edd0:;
    {
        cpu->r[14] = 0x0019edd4u; fn_000ae830(cpu);
    }
L_0019edd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x99cu);
    }
L_0019edd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x230u);
    }
L_0019eddc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0019ede0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000082u, 0, 0);
    }
L_0019ede4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019ede8:;
    {
        cpu->r[2] = 0x000001e8u;
    }
L_0019edec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0019edf0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_0019edf4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0019edf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019edfc:;
    {
        cpu->r[14] = 0x0019ee00u; fn_000ad19c(cpu);
    }
L_0019ee00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x22cu);
    }
L_0019ee04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019ee08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ee14;
        }
    }
L_0019ee0c:;
    {
        cpu->r[14] = 0x0019ee10u; fn_0018ba20(cpu);
    }
L_0019ee10:;
    {
        wr32(cpu->r[13] + + 0x22cu, cpu->r[4]);
    }
L_0019ee14:;
    {
        cpu->r[8] = rd32(cpu->r[8]);
    }
L_0019ee18:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0019ee1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ee20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e400u, 0, 0);
    }
L_0019ee24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000370u, 0, 0);
    }
L_0019ee28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0019ee2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019eef0;
        }
    }
L_0019ee30:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x8u);
    }
L_0019ee34:;
    {
        wr32(cpu->r[13] + + 0x22cu, cpu->r[4]);
    }
L_0019ee38:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x4u);
    }
L_0019ee3c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019ee40:;
    {
        cpu->r[14] = 0x0019ee44u; fn_001d0434(cpu);
    }
L_0019ee44:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019ee48:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0019ee4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019ee50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019ee54:;
    {
        cpu->r[14] = 0x0019ee58u; fn_001d0a68(cpu);
    }
L_0019ee58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019ee5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019ee60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0019ee64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0019ee68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019ecb0;
        }
    }
L_0019ee6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x23cu);
    }
L_0019ee70:;
    {
        cpu->r[1] = 0x000000dbu;
    }
L_0019ee74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x99cu);
    }
L_0019ee78:;
    {
        cpu->r[14] = 0x00200000u;
    }
L_0019ee7c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x000002e0u, cpu->r[3], 1, 0);
    }
L_0019ee80:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019ee84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0019ee88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x230u);
    }
L_0019ee8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000073u, 0, 0);
    }
L_0019ee90:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0019ee94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0019ee98:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[2]; cpu->r[3] = v;
    }
L_0019ee9c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019eea0:;
    {
        cpu->r[14] = 0x0019eea4u; fn_000ad8a0(cpu);
    }
L_0019eea4:;
    {
        goto L_0019ece8;
    }
L_0019eea8:;
    {
        cpu->r[2] = rd32(0x0019eeb0u + + 0x130u);
    }
L_0019eeac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019eeb0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0019eeb4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019eeb8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019eebc:;
    {
        cpu->r[14] = 0x0019eec0u; fn_0012f780(cpu);
    }
L_0019eec0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x23cu);
    }
L_0019eec4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x238u);
    }
L_0019eec8:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_0019eecc:;
    {
        cpu->r[1] = sub_flags(cpu, 0x000002e0u, cpu->r[3], 1, 0);
    }
L_0019eed0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019eed4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0019eed8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_0019eedc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019eee0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0019eee4:;
    {
        cpu->r[14] = 0x0019eee8u; fn_0012fa2c(cpu);
    }
L_0019eee8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019eeec:;
    {
        wr8(cpu->r[9] + + 0x50u, cpu->r[3]);
    }
L_0019eef0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019eef4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019eef8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019eefc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019ef00:;
    {
        wr8(cpu->r[9] + + 0x50u, cpu->r[3]);
    }
L_0019ef04:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ef08:;
    {
        cpu->r[14] = 0x0019ef0cu; fn_0012f780(cpu);
    }
L_0019ef0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019ef10:;
    {
        cpu->r[3] = rd32(0x0019ef18u + + 0xd0u);
    }
L_0019ef14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019ef18:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019ef1c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019ef20:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ef24:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019ef28:;
    {
        cpu->r[12] = rd32(0x0019ef30u + + 0xbcu);
    }
L_0019ef2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019ef30:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0019ef34:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019ef38:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ef3c:;
    {
        cpu->r[14] = 0x0019ef40u; fn_0012fa2c(cpu);
    }
L_0019ef40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000244u, 0, 0);
    }
L_0019ef44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ef48u)) return;
    }
L_0019ef48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019ef4c:;
    {
        cpu->r[14] = 0x0019ef50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019ef50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019ef54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019eb50;
        }
    }
L_0019ef58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019ef5c:;
    {
        cpu->r[4] = rd32(0x0019ef64u + + 0x78u);
    }
L_0019ef60:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0019ef64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019ef68:;
    {
        cpu->r[14] = 0x0019ef6cu; fn_0018aa20(cpu);
    }
L_0019ef6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019ef70:;
    {
        cpu->r[14] = 0x0019ef74u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019ef74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019ef78:;
    {
        cpu->r[3] = rd32(0x0019ef80u + + 0x70u);
    }
L_0019ef7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019ef80:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019ef84:;
    {
        cpu->r[3] = rd32(0x0019ef8cu + + 0x68u);
    }
L_0019ef88:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019ef8c:;
    {
        cpu->r[14] = 0x0019ef90u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019ef90:;
    {
        goto L_0019eb54;
    }
L_0019ef94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019ef98:;
    {
        cpu->r[14] = 0x0019ef9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019ef9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019efa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019eb90;
        }
    }
L_0019efa4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019efa8:;
    {
        cpu->r[14] = 0x0019efacu; fn_0018aa20(cpu);
    }
L_0019efac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019efb0:;
    {
        cpu->r[14] = 0x0019efb4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019efb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019efb8:;
    {
        cpu->r[3] = rd32(0x0019efc0u + + 0x30u);
    }
L_0019efbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019efc0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019efc4:;
    {
        cpu->r[3] = rd32(0x0019efccu + + 0x28u);
    }
L_0019efc8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019efcc:;
    {
        cpu->r[14] = 0x0019efd0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019efd0:;
    {
        goto L_0019eb90;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin6RenderEv @ 0019eff8 (arm) */
void fn_0019eff8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019eff8:;
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
L_0019effc:;
    {
        cpu->r[5] = rd32(0x0019f004u + + 0x37cu);
    }
L_0019f000:;
    {
        cpu->r[3] = rd32(0x0019f008u + + 0x37cu);
    }
L_0019f004:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f008:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019f010u, cpu->r[5], 0, 0);
    }
L_0019f00c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0019f010:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f014:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019f018:;
    {
        cpu->r[14] = 0x0019f01cu; fn_0012f780(cpu);
    }
L_0019f01c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f020:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_0019f024:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_0019f028:;
    {
        cpu->r[14] = 0x0019f02cu; fn_00113570(cpu);
    }
L_0019f02c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019f030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019f034:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019f064;
        }
    }
L_0019f038:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0019f03c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019f040:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019f044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f04c:;
    {
        cpu->r[14] = 0x0019f054u;
    }
L_0019f050:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f054u)) return;
    }
L_0019f054:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019f058:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0019f05c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0019f060:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019f03c;
        }
    }
L_0019f064:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_0019f068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019f06c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f36c;
        }
    }
L_0019f070:;
    {
        cpu->r[9] = rd32(0x0019f078u + + 0x310u);
    }
L_0019f074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f078:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019f07c:;
    {
        cpu->r[14] = 0x0019f084u;
    }
L_0019f080:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f084u)) return;
    }
L_0019f084:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019f088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f08c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019f090:;
    {
        cpu->r[14] = 0x0019f098u;
    }
L_0019f094:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f098u)) return;
    }
L_0019f098:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0019f09c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019f0a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f23c;
        }
    }
L_0019f0a8:;
    {
        cpu->r[10] = rd32(0x0019f0b0u + + 0x2dcu);
    }
L_0019f0ac:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019f0b0:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019f0b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f0b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f0bc:;
    {
        cpu->r[14] = 0x0019f0c0u; fn_0018aa44(cpu);
    }
L_0019f0c0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0019f0c4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019f0c8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f0cc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0019f0d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f2ec;
        }
    }
L_0019f0d4:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0019f0d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f0dc:;
    {
        cpu->r[14] = 0x0019f0e0u; fn_00096a08(cpu);
    }
L_0019f0e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019f0e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f0e8:;
    {
        cpu->r[11] = 0x00000010u;
    }
L_0019f0ec:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0019f0f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0019f0f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019f0f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019f0fc:;
    {
        cpu->r[14] = 0x0019f100u; fn_0018aa44(cpu);
    }
L_0019f100:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0019f104:;
    {
        cpu->r[1] = 0x000000d7u;
    }
L_0019f108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0019f10c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0019f110:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019f114:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f118:;
    {
        wr8(cpu->r[7] + + 0x50u, cpu->r[12]);
    }
L_0019f11c:;
    {
        cpu->r[14] = 0x0019f120u; fn_000a8d10(cpu);
    }
L_0019f120:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019f124:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f128:;
    {
        cpu->r[1] = 0x000000d7u;
    }
L_0019f12c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_0019f130:;
    {
        cpu->r[3] = 0x0000002au;
    }
L_0019f134:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0019f138:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_0019f13c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019f140:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019f144:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019f148:;
    {
        cpu->r[14] = 0x0019f14cu; fn_000ad8a0(cpu);
    }
L_0019f14c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019f150:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f154:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_0019f158:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_0019f15c:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_0019f160:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0019f164:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_0019f168:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019f16c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019f170:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019f174:;
    {
        cpu->r[14] = 0x0019f178u; fn_000ad8a0(cpu);
    }
L_0019f178:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f17c:;
    {
        cpu->r[1] = 0x0000046au;
    }
L_0019f180:;
    {
        cpu->r[2] = 0x000000d0u;
    }
L_0019f184:;
    {
        cpu->r[3] = 0x00000043u;
    }
L_0019f188:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019f18c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0019f190:;
    {
        cpu->r[14] = 0x0019f194u; fn_000ad200(cpu);
    }
L_0019f194:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f198:;
    {
        cpu->r[1] = 0x0000046cu;
    }
L_0019f19c:;
    {
        cpu->r[2] = 0x00000134u;
    }
L_0019f1a0:;
    {
        cpu->r[3] = 0x00000043u;
    }
L_0019f1a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019f1a8:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0019f1ac:;
    {
        cpu->r[14] = 0x0019f1b0u; fn_000ad200(cpu);
    }
L_0019f1b0:;
    {
        cpu->r[3] = 0x00000043u;
    }
L_0019f1b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f1b8:;
    {
        cpu->r[1] = 0x0000046bu;
    }
L_0019f1bc:;
    {
        cpu->r[2] = 0x000001deu;
    }
L_0019f1c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019f1c4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0019f1c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019f1cc:;
    {
        cpu->r[14] = 0x0019f1d0u; fn_000ad200(cpu);
    }
L_0019f1d0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0019f1d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019f1d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f280;
        }
    }
L_0019f1e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019f1e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019f1e8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019f1ec:;
    {
        cpu->r[14] = 0x0019f1f0u; fn_0018aa44(cpu);
    }
L_0019f1f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f1f4:;
    {
        cpu->r[14] = 0x0019f1f8u; fn_000960f4(cpu);
    }
L_0019f1f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f2d8;
        }
    }
L_0019f200:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f204:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019f208:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019f20c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019f210:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019f214:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0019f218:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019f21c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f328;
        }
    }
L_0019f220:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019f224:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019f228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f220;
        }
    }
L_0019f22c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f230:;
    {
        cpu->r[14] = 0x0019f234u; fn_0019eb24(cpu);
    }
L_0019f234:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0019f238:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f23cu)) return;
    }
L_0019f23c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f240:;
    {
        cpu->r[14] = 0x0019f244u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f244:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f0a8;
        }
    }
L_0019f24c:;
    {
        cpu->r[10] = rd32(0x0019f254u + + 0x138u);
    }
L_0019f250:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019f254:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f258:;
    {
        cpu->r[14] = 0x0019f25cu; fn_0018aa20(cpu);
    }
L_0019f25c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f260:;
    {
        cpu->r[14] = 0x0019f264u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f264:;
    {
        cpu->r[3] = rd32(0x0019f26cu + + 0x124u);
    }
L_0019f268:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f26c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f270:;
    {
        cpu->r[3] = rd32(0x0019f278u + + 0x11cu);
    }
L_0019f274:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f278:;
    {
        cpu->r[14] = 0x0019f27cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f27c:;
    {
        goto L_0019f0ac;
    }
L_0019f280:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f284:;
    {
        cpu->r[14] = 0x0019f288u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f28c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f1e0;
        }
    }
L_0019f290:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019f294:;
    {
        cpu->r[14] = 0x0019f298u; fn_0018aa20(cpu);
    }
L_0019f298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f29c:;
    {
        cpu->r[14] = 0x0019f2a0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f2a0:;
    {
        cpu->r[3] = rd32(0x0019f2a8u + + 0xe8u);
    }
L_0019f2a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019f2a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f2ac:;
    {
        cpu->r[3] = rd32(0x0019f2b4u + + 0xe0u);
    }
L_0019f2b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f2b4:;
    {
        cpu->r[14] = 0x0019f2b8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f2b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019f2bc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019f2c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0019f2c4:;
    {
        cpu->r[14] = 0x0019f2c8u; fn_0018aa44(cpu);
    }
L_0019f2c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f2cc:;
    {
        cpu->r[14] = 0x0019f2d0u; fn_000960f4(cpu);
    }
L_0019f2d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f2d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f200;
        }
    }
L_0019f2d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019f2dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f2e0:;
    {
        cpu->r[14] = 0x0019f2e8u;
    }
L_0019f2e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f2e8u)) return;
    }
L_0019f2e8:;
    {
        goto L_0019f200;
    }
L_0019f2ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f2f0:;
    {
        cpu->r[14] = 0x0019f2f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f2f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f2f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f0d4;
        }
    }
L_0019f2fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f300:;
    {
        cpu->r[14] = 0x0019f304u; fn_0018aa20(cpu);
    }
L_0019f304:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f308:;
    {
        cpu->r[14] = 0x0019f30cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f30c:;
    {
        cpu->r[3] = rd32(0x0019f314u + + 0x7cu);
    }
L_0019f310:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f314:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f318:;
    {
        cpu->r[3] = rd32(0x0019f320u + + 0x74u);
    }
L_0019f31c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f320:;
    {
        cpu->r[14] = 0x0019f324u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f324:;
    {
        goto L_0019f0d4;
    }
L_0019f328:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f32c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0019f330:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019f334:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_0019f338:;
    {
        cpu->r[14] = 0x0019f33cu; fn_000a8d10(cpu);
    }
L_0019f33c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019f340:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f344:;
    {
        cpu->r[1] = 0x0000045eu;
    }
L_0019f348:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_0019f34c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0019f350:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019f354:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019f358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000f5u, 0, 0);
    }
L_0019f35c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019f360:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019f364:;
    {
        cpu->r[14] = 0x0019f368u; fn_000ad200(cpu);
    }
L_0019f368:;
    {
        goto L_0019f234;
    }
L_0019f36c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019f370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f374:;
    {
        cpu->r[14] = 0x0019f37cu;
    }
L_0019f378:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f37cu)) return;
    }
L_0019f37c:;
    {
        goto L_0019f070;
    }
}

/* _ZN22GS_OnlineQuickRaceJoin22ProcessOnMouseButtonUpEv @ 0019f398 (arm) */
void fn_0019f398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f398:;
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
L_0019f39c:;
    {
        cpu->r[4] = rd32(0x0019f3a4u + + 0x1e8u);
    }
L_0019f3a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019f3a4:;
    {
        wr8(cpu->r[0] + + 0x9a8u, cpu->r[3]);
    }
L_0019f3a8:;
    {
        cpu->r[3] = rd32(0x0019f3b0u + + 0x1e0u);
    }
L_0019f3ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019f3b4u, cpu->r[4], 0, 0);
    }
L_0019f3b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_0019f3b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019f3b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019f3bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019f3c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f3c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f548;
        }
    }
L_0019f3c8:;
    {
        cpu->r[5] = rd32(0x0019f3d0u + + 0x1c4u);
    }
L_0019f3cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f3d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0019f3d4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0019f3d8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0019f3dc:;
    {
        cpu->r[14] = 0x0019f3e0u; fn_0018aa44(cpu);
    }
L_0019f3e0:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_0019f3e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0019f3e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0019f3ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019f3f0:;
    {
        cpu->r[14] = 0x0019f3f4u; fn_000a8d10(cpu);
    }
L_0019f3f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f3f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019f3fc:;
    {
        cpu->r[2] = 0x000000dau;
    }
L_0019f400:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0019f404:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019f408:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019f40c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0019f410:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0019f414:;
    {
        cpu->r[14] = 0x0019f418u; fn_000a8a2c(cpu);
    }
L_0019f418:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_0019f41c:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019f420:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019f424:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019f428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0001e400u, 0, 0);
    }
L_0019f42c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0019f430:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0019f434:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019f438:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019f43c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_0019f440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f454;
        }
    }
L_0019f444:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019f448:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0019f44c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019f450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f444;
        }
    }
L_0019f454:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019f458:;
    {
        cpu->r[14] = 0x0019f45cu; fn_00110c40(cpu);
    }
L_0019f45c:;
    {
        cpu->r[2] = rd32(0x0019f464u + + 0x134u);
    }
L_0019f460:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0019f464:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019f468:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[3], 1, 0);
    }
L_0019f46c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0019f470:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_0019f474:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019f478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0019f47c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0019f480:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019f540;
        }
    }
L_0019f484:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0019f488:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019f540;
        }
    }
L_0019f48c:;
    {
        cpu->r[3] = rd32(0x0019f494u + + 0x108u);
    }
L_0019f490:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019f494:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0019f498:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_0019f49c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000056u, 0, 0);
    }
L_0019f4a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0019f4a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019f540;
        }
    }
L_0019f4a8:;
    {
        sub_flags(cpu, cpu->r[10], 0x0000005eu, 1, 1);
    }
L_0019f4ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019f540;
        }
    }
L_0019f4b0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0019f4b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f540;
        }
    }
L_0019f4b8:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x99cu);
    }
L_0019f4bc:;
    {
        cpu->r[0] = 0x0000e778u;
    }
L_0019f4c0:;
    {
        cpu->r[9] = 0x0000e770u;
    }
L_0019f4c4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0019f4c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000006eu, 0, 0);
    }
L_0019f4cc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_0019f4d0:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0019f4d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f4d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_0019f4dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_0019f4e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019f52c;
        }
    }
L_0019f4e4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_0019f4e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019f52c;
        }
    }
L_0019f4ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x9b0u);
    }
L_0019f4f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019f4f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019f52c;
        }
    }
L_0019f4f8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_0019f4fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019f500:;
    {
        wr32(cpu->r[6] + + 0x988u, cpu->r[2]);
    }
L_0019f504:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_0019f508:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_0019f50c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019f52c;
        }
    }
L_0019f510:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019f514:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0019f518:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0019f51c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019f520:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0019f524:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[12]);
    }
L_0019f528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f514;
        }
    }
L_0019f52c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019f530:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_0019f534:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0019f538:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0019f53c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f4dc;
        }
    }
L_0019f540:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0019f544:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f548u)) return;
    }
L_0019f548:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f54c:;
    {
        cpu->r[14] = 0x0019f550u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f550:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f3c8;
        }
    }
L_0019f558:;
    {
        cpu->r[5] = rd32(0x0019f560u + + 0x34u);
    }
L_0019f55c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0019f560:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f564:;
    {
        cpu->r[14] = 0x0019f568u; fn_0018aa20(cpu);
    }
L_0019f568:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f56c:;
    {
        cpu->r[14] = 0x0019f570u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f570:;
    {
        cpu->r[3] = rd32(0x0019f578u + + 0x28u);
    }
L_0019f574:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f578:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019f57c:;
    {
        cpu->r[3] = rd32(0x0019f584u + + 0x20u);
    }
L_0019f580:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019f584:;
    {
        cpu->r[14] = 0x0019f588u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f588:;
    {
        goto L_0019f3cc;
    }
}

/* _ZN22GS_OnlineQuickRaceJoinC1Ev @ 0019f5a8 (arm) */
void fn_0019f5a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f5a8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019f5ac:;
    {
        cpu->r[5] = rd32(0x0019f5b4u + + 0xfcu);
    }
L_0019f5b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f5b4:;
    {
        cpu->r[14] = 0x0019f5b8u; fn_0010ffa8(cpu);
    }
L_0019f5b8:;
    {
        cpu->r[2] = rd32(0x0019f5c0u + + 0xf4u);
    }
L_0019f5bc:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019f5c4u, cpu->r[5], 0, 0);
    }
L_0019f5c0:;
    {
        cpu->r[3] = rd32(0x0019f5c8u + + 0xf0u);
    }
L_0019f5c4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019f5c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f5cc:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019f5d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019f5d4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019f5d8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f5dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f66c;
        }
    }
L_0019f5e0:;
    {
        cpu->r[6] = rd32(0x0019f5e8u + + 0xd4u);
    }
L_0019f5e4:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019f5e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f5ec:;
    {
        cpu->r[14] = 0x0019f5f0u; fn_00096a08(cpu);
    }
L_0019f5f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f5f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019f5f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019f5fc:;
    {
        cpu->r[14] = 0x0019f600u; fn_0018aa44(cpu);
    }
L_0019f600:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f604:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0019f608:;
    {
        cpu->r[1] = 0x0000e778u;
    }
L_0019f60c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019f610:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019f614:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019f618:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[3]);
    }
L_0019f61c:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0019f620:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f624:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_0019f628:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[2]);
    }
L_0019f62c:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[2]);
    }
L_0019f630:;
    {
        wr32(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_0019f634:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019f638:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_0019f63c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019f640:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_0019f644:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_0019f648:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_0019f64c:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0019f650:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_0019f654:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_0019f658:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[2]);
    }
L_0019f65c:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[2]);
    }
L_0019f660:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019f664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f668:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f66cu)) return;
    }
L_0019f66c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f670:;
    {
        cpu->r[14] = 0x0019f674u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f5e0;
        }
    }
L_0019f67c:;
    {
        cpu->r[6] = rd32(0x0019f684u + + 0x38u);
    }
L_0019f680:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019f684:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f688:;
    {
        cpu->r[14] = 0x0019f68cu; fn_0018aa20(cpu);
    }
L_0019f68c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f690:;
    {
        cpu->r[14] = 0x0019f694u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f694:;
    {
        cpu->r[3] = rd32(0x0019f69cu + + 0x24u);
    }
L_0019f698:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f69c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f6a0:;
    {
        cpu->r[3] = rd32(0x0019f6a8u + + 0x1cu);
    }
L_0019f6a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f6a8:;
    {
        cpu->r[14] = 0x0019f6acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f6ac:;
    {
        goto L_0019f5e4;
    }
}

/* _ZN22GS_OnlineQuickRaceJoinC2Ev @ 0019f6c8 (arm) */
void fn_0019f6c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f6c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019f6cc:;
    {
        cpu->r[5] = rd32(0x0019f6d4u + + 0xfcu);
    }
L_0019f6d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f6d4:;
    {
        cpu->r[14] = 0x0019f6d8u; fn_0010ffa8(cpu);
    }
L_0019f6d8:;
    {
        cpu->r[2] = rd32(0x0019f6e0u + + 0xf4u);
    }
L_0019f6dc:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019f6e4u, cpu->r[5], 0, 0);
    }
L_0019f6e0:;
    {
        cpu->r[3] = rd32(0x0019f6e8u + + 0xf0u);
    }
L_0019f6e4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019f6e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f6ec:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019f6f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019f6f4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019f6f8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019f6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f78c;
        }
    }
L_0019f700:;
    {
        cpu->r[6] = rd32(0x0019f708u + + 0xd4u);
    }
L_0019f704:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019f708:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f70c:;
    {
        cpu->r[14] = 0x0019f710u; fn_00096a08(cpu);
    }
L_0019f710:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f714:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019f718:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019f71c:;
    {
        cpu->r[14] = 0x0019f720u; fn_0018aa44(cpu);
    }
L_0019f720:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019f724:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0019f728:;
    {
        cpu->r[1] = 0x0000e778u;
    }
L_0019f72c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019f730:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019f734:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019f738:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[3]);
    }
L_0019f73c:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0019f740:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f744:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_0019f748:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[2]);
    }
L_0019f74c:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[2]);
    }
L_0019f750:;
    {
        wr32(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_0019f754:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019f758:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_0019f75c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019f760:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_0019f764:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_0019f768:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_0019f76c:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0019f770:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_0019f774:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_0019f778:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[2]);
    }
L_0019f77c:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[2]);
    }
L_0019f780:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019f784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f788:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f78cu)) return;
    }
L_0019f78c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f790:;
    {
        cpu->r[14] = 0x0019f794u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019f794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019f798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019f700;
        }
    }
L_0019f79c:;
    {
        cpu->r[6] = rd32(0x0019f7a4u + + 0x38u);
    }
L_0019f7a0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019f7a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f7a8:;
    {
        cpu->r[14] = 0x0019f7acu; fn_0018aa20(cpu);
    }
L_0019f7ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019f7b0:;
    {
        cpu->r[14] = 0x0019f7b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019f7b4:;
    {
        cpu->r[3] = rd32(0x0019f7bcu + + 0x24u);
    }
L_0019f7b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019f7bc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f7c0:;
    {
        cpu->r[3] = rd32(0x0019f7c8u + + 0x1cu);
    }
L_0019f7c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f7c8:;
    {
        cpu->r[14] = 0x0019f7ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019f7cc:;
    {
        goto L_0019f704;
    }
}

/* _ZN22GS_MPClientWaitingRoom8isKindOfEi @ 0019f7e8 (arm) */
void fn_0019f7e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f7e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000049u, 1, 1);
    }
L_0019f7ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0019f7f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0019f7f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_MPClientWaitingRoom8DoActionEii @ 0019f7f8 (arm) */
void fn_0019f7f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f7f8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019f7fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019f800:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0019f804:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0019f808:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f80cu)) return;
        }
    }
L_0019f80c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019f810:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0019f814:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019f848;
        }
    }
L_0019f818:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0019f81c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0019f820:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0019f824:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_0019f828:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0019f82c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_0019f830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_0019f834:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_0019f838:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019f83c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0019f840:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_0019f844:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f848u)) return;
    }
L_0019f848:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019f84c:;
    {
        cpu->r[14] = 0x0019f854u;
    }
L_0019f850:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f854u)) return;
    }
L_0019f854:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f858u)) return;
    }
}

/* init_array_60 @ 0019f858 (arm) */
void fn_0019f858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f858:;
    {
        cpu->r[3] = rd32(0x0019f860u + + 0x44u);
    }
L_0019f85c:;
    {
        cpu->r[1] = rd32(0x0019f864u + + 0x44u);
    }
L_0019f860:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019f868u, cpu->r[3], 0, 0);
    }
L_0019f864:;
    {
        cpu->r[2] = rd32(0x0019f86cu + + 0x40u);
    }
L_0019f868:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019f86c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019f874u, cpu->r[2], 0, 0);
    }
L_0019f870:;
    {
        cpu->r[1] = rd32(0x0019f878u + + 0x38u);
    }
L_0019f874:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019f878:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019f87c:;
    {
        cpu->r[3] = rd32(0x0019f884u + + 0x30u);
    }
L_0019f880:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0019f884:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019f888:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019f890u, cpu->r[3], 0, 0);
    }
L_0019f88c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_0019f890:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_0019f894:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_0019f898:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_0019f89c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_0019f8a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_MPClientWaitingRoomD1Ev @ 0019f8b8 (arm) */
void fn_0019f8b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f8b8:;
    {
        cpu->r[3] = rd32(0x0019f8c0u + + 0x24u);
    }
L_0019f8bc:;
    {
        cpu->r[2] = rd32(0x0019f8c4u + + 0x24u);
    }
L_0019f8c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019f8c8u, cpu->r[3], 0, 0);
    }
L_0019f8c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019f8c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019f8cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f8d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019f8d4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019f8d8:;
    {
        cpu->r[14] = 0x0019f8dcu; fn_000ec21c(cpu);
    }
L_0019f8dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019f8e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f8e4u)) return;
    }
}

/* _ZN22GS_MPClientWaitingRoom6ResumeEv @ 0019f8ec (arm) */
void fn_0019f8ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f8ec:;
    {
        cpu->r[3] = rd32(0x0019f8f4u + + 0x1cu);
    }
L_0019f8f0:;
    {
        cpu->r[2] = rd32(0x0019f8f8u + + 0x1cu);
    }
L_0019f8f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019f8fcu, cpu->r[3], 0, 0);
    }
L_0019f8f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019f8fc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0019f900:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0019f904:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019f908:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[3]);
    }
L_0019f90c:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN22GS_MPClientWaitingRoom17ApplyMenuSettingsEv @ 0019f918 (arm) */
void fn_0019f918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f918:;
    {
        cpu->r[3] = rd32(0x0019f920u + + 0x34u);
    }
L_0019f91c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019f920:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019f924:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019f92cu, cpu->r[3], 0, 0);
    }
L_0019f928:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019f92c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_0019f930:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_0019f934:;
    {
        cpu->r[3] = 0x0000041au;
    }
L_0019f938:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_0019f93c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f940:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_0019f944:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_0019f948:;
    {
        cpu->r[14] = 0x0019f94cu; fn_0009b4d0(cpu);
    }
L_0019f94c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[0]);
    }
L_0019f950:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f954u)) return;
    }
}

/* _ZN22GS_MPClientWaitingRoom6UpdateEv @ 0019f958 (arm) */
void fn_0019f958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019f958:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_0019f95c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019f960:;
    {
        cpu->r[5] = rd32(0x0019f968u + + 0x1c4u);
    }
L_0019f964:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x200u);
    }
L_0019f968:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019f96c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019f974u, cpu->r[5], 0, 0);
    }
L_0019f970:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019f974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f9d4;
        }
    }
L_0019f978:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019f97c:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_0019f980:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x200u);
    }
L_0019f984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019f988:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000006u;
        }
    }
L_0019f98c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
        }
    }
L_0019f990:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0019f994:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0019f998:;
    {
        cpu->r[14] = 0x0019f99cu; fn_0009b4d0(cpu);
    }
L_0019f99c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019f9a0:;
    {
        cpu->r[2] = 0x00007530u;
    }
L_0019f9a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0019f9a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019f9ac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0019f9ec;
        }
    }
L_0019f9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019f9b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019f9b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fa2c;
        }
    }
L_0019f9bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019f9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fa38;
        }
    }
L_0019f9c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019f9c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0019f9cc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0019f9d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019f9d4u)) return;
    }
L_0019f9d4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x958u);
    }
L_0019f9d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019f9dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0019f9e0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
        }
    }
L_0019f9e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[2] + + 0x200u);
        }
    }
L_0019f9e8:;
    {
        goto L_0019f984;
    }
L_0019f9ec:;
    {
        cpu->r[3] = rd32(0x0019f9f4u + + 0x13cu);
    }
L_0019f9f0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019f9f4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019f9f8:;
    {
        cpu->r[14] = 0x0019f9fcu; fn_00096928(cpu);
    }
L_0019f9fc:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0019fa00:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_0019fa04:;
    {
        cpu->r[14] = 0x0019fa08u; fn_0018ba6c(cpu);
    }
L_0019fa08:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019fa0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0019fa10:;
    {
        cpu->r[14] = 0x0019fa14u; fn_001aaf48(cpu);
    }
L_0019fa14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019fa18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019fa1c:;
    {
        cpu->r[14] = 0x0019fa20u; fn_000f361c(cpu);
    }
L_0019fa20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0019fa24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019fa28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019f9bc;
        }
    }
L_0019fa2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fa30:;
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
L_0019fa34:;
    {
        return fn_00128a5c(cpu);
    }
L_0019fa38:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0019fa3c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_0019fa40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fa88;
        }
    }
L_0019fa44:;
    {
        cpu->r[3] = 0x0000041du;
    }
L_0019fa48:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0019fa4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fa50u)) return;
        }
    }
L_0019fa50:;
    {
        cpu->r[3] = rd32(0x0019fa58u + + 0xd8u);
    }
L_0019fa54:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fa58:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019fa5c:;
    {
        cpu->r[14] = 0x0019fa60u; fn_00096928(cpu);
    }
L_0019fa60:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0019fa64:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_0019fa68:;
    {
        cpu->r[14] = 0x0019fa6cu; fn_0018ba6c(cpu);
    }
L_0019fa6c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019fa70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fa74:;
    {
        cpu->r[14] = 0x0019fa78u; fn_001aaf48(cpu);
    }
L_0019fa78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019fa7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019fa80:;
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
L_0019fa84:;
    {
        return fn_000f361c(cpu);
    }
L_0019fa88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_0019fa8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019fa90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019fb14;
        }
    }
L_0019fa94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_0019fa98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0019fa9c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0019faa0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019faa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fb14;
        }
    }
L_0019faa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019faac:;
    {
        cpu->r[12] = 0x00005fa8u;
    }
L_0019fab0:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x100u);
    }
L_0019fab4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019fab8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019fabc:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[14]);
    }
L_0019fac0:;
    {
        cpu->r[12] = 0x00005facu;
    }
L_0019fac4:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x101u);
    }
L_0019fac8:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[14]);
    }
L_0019facc:;
    {
        cpu->r[12] = 0x00005fb0u;
    }
L_0019fad0:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x102u);
    }
L_0019fad4:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[14]);
    }
L_0019fad8:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x103u);
    }
L_0019fadc:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_0019fae0:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[12]);
    }
L_0019fae4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_0019fae8:;
    {
        cpu->r[14] = 0x0019faf0u;
    }
L_0019faec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019faf0u)) return;
    }
L_0019faf0:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0019faf4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019faf8:;
    {
        cpu->r[14] = 0x0019fafcu; fn_0018ba6c(cpu);
    }
L_0019fafc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fb00:;
    {
        cpu->r[14] = 0x0019fb04u; fn_001a44cc(cpu);
    }
L_0019fb04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019fb08:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019fb0c:;
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
L_0019fb10:;
    {
        return fn_000f361c(cpu);
    }
L_0019fb14:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0019fb18:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019fb1c:;
    {
        cpu->r[14] = 0x0019fb20u; fn_0018ba6c(cpu);
    }
L_0019fb20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019fb24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fb28:;
    {
        goto L_0019fa74;
    }
}

/* _ZN22GS_MPClientWaitingRoomC1Ev @ 0019fb34 (arm) */
void fn_0019fb34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fb34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019fb38:;
    {
        cpu->r[5] = rd32(0x0019fb40u + + 0x50u);
    }
L_0019fb3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fb40:;
    {
        cpu->r[14] = 0x0019fb44u; fn_0010ffa8(cpu);
    }
L_0019fb44:;
    {
        cpu->r[2] = rd32(0x0019fb4cu + + 0x48u);
    }
L_0019fb48:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019fb50u, cpu->r[5], 0, 0);
    }
L_0019fb4c:;
    {
        cpu->r[3] = rd32(0x0019fb54u + + 0x44u);
    }
L_0019fb50:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019fb54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fb58:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019fb5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019fb60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019fb64:;
    {
        cpu->r[14] = 0x0019fb68u; fn_0009992c(cpu);
    }
L_0019fb68:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0019fb6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019fb70:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0019fb74:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0019fb78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fb7c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019fb80:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019fb84:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0019fb88:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_0019fb8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fb90u)) return;
    }
}

/* _ZN22GS_MPClientWaitingRoomC2Ev @ 0019fb9c (arm) */
void fn_0019fb9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fb9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019fba0:;
    {
        cpu->r[5] = rd32(0x0019fba8u + + 0x50u);
    }
L_0019fba4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fba8:;
    {
        cpu->r[14] = 0x0019fbacu; fn_0010ffa8(cpu);
    }
L_0019fbac:;
    {
        cpu->r[2] = rd32(0x0019fbb4u + + 0x48u);
    }
L_0019fbb0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019fbb8u, cpu->r[5], 0, 0);
    }
L_0019fbb4:;
    {
        cpu->r[3] = rd32(0x0019fbbcu + + 0x44u);
    }
L_0019fbb8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019fbbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fbc0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019fbc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019fbc8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019fbcc:;
    {
        cpu->r[14] = 0x0019fbd0u; fn_0009992c(cpu);
    }
L_0019fbd0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0019fbd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019fbd8:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0019fbdc:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0019fbe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fbe4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019fbe8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019fbec:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0019fbf0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_0019fbf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fbf8u)) return;
    }
}

/* _ZN22GS_MPClientWaitingRoomD0Ev @ 0019fc04 (arm) */
void fn_0019fc04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fc04:;
    {
        cpu->r[3] = rd32(0x0019fc0cu + + 0x2cu);
    }
L_0019fc08:;
    {
        cpu->r[2] = rd32(0x0019fc10u + + 0x2cu);
    }
L_0019fc0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019fc14u, cpu->r[3], 0, 0);
    }
L_0019fc10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019fc14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019fc18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fc1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019fc20:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019fc24:;
    {
        cpu->r[14] = 0x0019fc28u; fn_000ec21c(cpu);
    }
L_0019fc28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fc2c:;
    {
        cpu->r[14] = 0x0019fc30u; fn_0018ba20(cpu);
    }
L_0019fc30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fc34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fc38u)) return;
    }
}

/* _ZN22GS_MPClientWaitingRoom6RenderEv @ 0019fc40 (arm) */
void fn_0019fc40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fc40:;
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
L_0019fc44:;
    {
        cpu->r[5] = rd32(0x0019fc4cu + + 0x184u);
    }
L_0019fc48:;
    {
        cpu->r[7] = rd32(0x0019fc50u + + 0x184u);
    }
L_0019fc4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0019fc50:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019fc58u, cpu->r[5], 0, 0);
    }
L_0019fc54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fc58:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019fc5c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0019fc60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019fc64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fd50;
        }
    }
L_0019fc68:;
    {
        cpu->r[6] = rd32(0x0019fc70u + + 0x168u);
    }
L_0019fc6c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019fc70:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0019fc74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019fc78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019fc7c:;
    {
        cpu->r[14] = 0x0019fc80u; fn_0018aa44(cpu);
    }
L_0019fc80:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019fc84:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019fc88:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0019fc8c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019fc90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019fc94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019fc98:;
    {
        cpu->r[14] = 0x0019fc9cu; fn_000ad8a0(cpu);
    }
L_0019fc9c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019fca0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019fca4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019fca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fd94;
        }
    }
L_0019fcac:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019fcb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019fcb4:;
    {
        cpu->r[14] = 0x0019fcb8u; fn_00096a08(cpu);
    }
L_0019fcb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019fcbc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019fcc0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019fcc4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0019fcc8:;
    {
        cpu->r[14] = 0x0019fcccu; fn_0018aa44(cpu);
    }
L_0019fccc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019fcd0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019fcd4:;
    {
        cpu->r[0] = 0x00000421u;
    }
L_0019fcd8:;
    {
        cpu->r[14] = 0x0019fcdcu; fn_000aeb58(cpu);
    }
L_0019fcdc:;
    {
        cpu->r[3] = rd32(0x0019fce4u + + 0xf8u);
    }
L_0019fce0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0019fce4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0019fce8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019fcec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fcf0:;
    {
        cpu->r[3] = rd32(0x0019fcf8u + + 0xe8u);
    }
L_0019fcf4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019fcf8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fcfc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0019fd00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019fd04:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0019fd08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019fd0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019fd10:;
    {
        cpu->r[14] = 0x0019fd14u; fn_000ad19c(cpu);
    }
L_0019fd14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019fd18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0019fd1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019fd48;
        }
    }
L_0019fd20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019fd24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019fd28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fd2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019fd30:;
    {
        cpu->r[14] = 0x0019fd38u;
    }
L_0019fd34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fd38u)) return;
    }
L_0019fd38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019fd3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0019fd40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0019fd44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019fd20;
        }
    }
L_0019fd48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019fd4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fd50u)) return;
    }
L_0019fd50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019fd54:;
    {
        cpu->r[14] = 0x0019fd58u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019fd58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019fd5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fc68;
        }
    }
L_0019fd60:;
    {
        cpu->r[6] = rd32(0x0019fd68u + + 0x70u);
    }
L_0019fd64:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019fd68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019fd6c:;
    {
        cpu->r[14] = 0x0019fd70u; fn_0018aa20(cpu);
    }
L_0019fd70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019fd74:;
    {
        cpu->r[14] = 0x0019fd78u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019fd78:;
    {
        cpu->r[3] = rd32(0x0019fd80u + + 0x64u);
    }
L_0019fd7c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0019fd80:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fd84:;
    {
        cpu->r[3] = rd32(0x0019fd8cu + + 0x5cu);
    }
L_0019fd88:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fd8c:;
    {
        cpu->r[14] = 0x0019fd90u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019fd90:;
    {
        goto L_0019fc6c;
    }
L_0019fd94:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019fd98:;
    {
        cpu->r[14] = 0x0019fd9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019fd9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019fda0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fcac;
        }
    }
L_0019fda4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019fda8:;
    {
        cpu->r[14] = 0x0019fdacu; fn_0018aa20(cpu);
    }
L_0019fdac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019fdb0:;
    {
        cpu->r[14] = 0x0019fdb4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019fdb4:;
    {
        cpu->r[3] = rd32(0x0019fdbcu + + 0x28u);
    }
L_0019fdb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019fdbc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fdc0:;
    {
        cpu->r[3] = rd32(0x0019fdc8u + + 0x20u);
    }
L_0019fdc4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019fdc8:;
    {
        cpu->r[14] = 0x0019fdccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019fdcc:;
    {
        goto L_0019fcac;
    }
}

/* init_array_61 @ 0019fdec (arm) */
void fn_0019fdec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fdec:;
    {
        cpu->r[3] = rd32(0x0019fdf4u + + 0x20u);
    }
L_0019fdf0:;
    {
        cpu->r[1] = rd32(0x0019fdf8u + + 0x20u);
    }
L_0019fdf4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019fdfcu, cpu->r[3], 0, 0);
    }
L_0019fdf8:;
    {
        cpu->r[2] = rd32(0x0019fe00u + + 0x1cu);
    }
L_0019fdfc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019fe00:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019fe08u, cpu->r[2], 0, 0);
    }
L_0019fe04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019fe08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0019fe0c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0019fe10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19GS_OnlineLoginPanel6UpdateEv @ 0019fe20 (arm) */
void fn_0019fe20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019fe20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019fe24:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x80u);
    }
L_0019fe28:;
    {
        cpu->r[5] = rd32(0x0019fe30u + + 0x394u);
    }
L_0019fe2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000410u, 1, 0);
    }
L_0019fe30:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0019fe34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019fe38:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019fe40u, cpu->r[5], 0, 0);
    }
L_0019fe3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019fe40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fe6c;
        }
    }
L_0019fe44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0019fe48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019fe58;
        }
    }
L_0019fe4c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x84u);
    }
L_0019fe50:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0019fe54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ff54;
        }
    }
L_0019fe58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019fe5c:;
    {
        cpu->r[14] = 0x0019fe60u; fn_000a6c08(cpu);
    }
L_0019fe60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0019fe64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0019fe68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019fe6cu)) return;
    }
L_0019fe6c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x9dcu);
    }
L_0019fe70:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0019fe74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ffec;
        }
    }
L_0019fe78:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_0019fe7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fff8;
        }
    }
L_0019fe80:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0019fe84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019fe58;
        }
    }
L_0019fe88:;
    {
        cpu->r[2] = rd32(0x0019fe90u + + 0x338u);
    }
L_0019fe8c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019fe90:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019fe94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000009e0u, 0, 0);
    }
L_0019fe98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0019fe9c:;
    {
        cpu->r[8] = 0x00006760u;
    }
L_0019fea0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019fea4:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0019fea8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0001e000u, 0, 0);
    }
L_0019feac:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[7]);
    }
L_0019feb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000024cu, 0, 0);
    }
L_0019feb4:;
    {
        cpu->r[14] = 0x0019feb8u; imp_strcpy(cpu); /* strcpy */
    }
L_0019feb8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019febc:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_0019fec0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000a10u, 0, 0);
    }
L_0019fec4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0019fec8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_0019fecc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0019fed0:;
    {
        cpu->r[14] = 0x0019fed4u; imp_strcpy(cpu); /* strcpy */
    }
L_0019fed4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0019fed8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0019fedc:;
    {
        cpu->r[14] = 0x0019fee0u; fn_001933d4(cpu);
    }
L_0019fee0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019fee4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0019fee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019feec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fefc;
        }
    }
L_0019fef0:;
    {
        cpu->r[14] = 0x0019fef4u; fn_0018ba20(cpu);
    }
L_0019fef4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019fef8:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[7]);
    }
L_0019fefc:;
    {
        cpu->r[2] = 0x0000e6bau;
    }
L_0019ff00:;
    {
        cpu->r[0] = 0x00006774u;
    }
L_0019ff04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_0019ff08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019ff0c:;
    {
        cpu->r[12] = rd32(0x0019ff14u + + 0x2b8u);
    }
L_0019ff10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0019ff14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0019ff18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_0019ff1c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0019ff20:;
    {
        cpu->r[12] = add_flags(cpu, 0x0019ff28u, cpu->r[12], 0, 0);
    }
L_0019ff24:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0019ff28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0019ff2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0019ff30:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019ff34:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0019ff38:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ff3c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0019ff40:;
    {
        cpu->r[14] = 0x0019ff44u; fn_001b8240(cpu);
    }
L_0019ff44:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0019ff48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x80u);
    }
L_0019ff4c:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[3]);
    }
L_0019ff50:;
    {
        goto L_0019fe44;
    }
L_0019ff54:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x9d9u);
    }
L_0019ff58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019ff5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019fe58;
        }
    }
L_0019ff60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88cu);
    }
L_0019ff64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019ff68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0019ff6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a018c;
        }
    }
L_0019ff70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9e0u);
    }
L_0019ff74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019ff78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019fe58;
        }
    }
L_0019ff7c:;
    {
        cpu->r[7] = rd32(0x0019ff84u + + 0x244u);
    }
L_0019ff80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019ff84:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019ff88:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019ff8c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0019ff90:;
    {
        wr8(cpu->r[2] + + 0x4ccu, cpu->r[3]);
    }
L_0019ff94:;
    {
        cpu->r[14] = 0x0019ff98u; fn_000f34e8(cpu);
    }
L_0019ff98:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ff9c:;
    {
        cpu->r[14] = 0x0019ffa0u; fn_000f34a0(cpu);
    }
L_0019ffa0:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_0019ffa4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019ffa8:;
    {
        cpu->r[14] = 0x0019ffb0u;
    }
L_0019ffac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ffb0u)) return;
    }
L_0019ffb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019ffb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ffc4;
        }
    }
L_0019ffb8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019ffbc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019ffc0:;
    {
        cpu->r[14] = 0x0019ffc4u; fn_000f34e8(cpu);
    }
L_0019ffc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0019ffc8:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_0019ffcc:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0019ffd0:;
    {
        cpu->r[14] = 0x0019ffd4u; fn_0018ba6c(cpu);
    }
L_0019ffd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ffd8:;
    {
        cpu->r[14] = 0x0019ffdcu; fn_0019a244(cpu);
    }
L_0019ffdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019ffe0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019ffe4:;
    {
        cpu->r[14] = 0x0019ffe8u; fn_000f361c(cpu);
    }
L_0019ffe8:;
    {
        goto L_0019fe60;
    }
L_0019ffec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019fff0:;
    {
        wr32(cpu->r[0] + + 0x9dcu, cpu->r[3]);
    }
L_0019fff4:;
    {
        goto L_0019fe58;
    }
L_0019fff8:;
    {
        cpu->r[2] = rd32(0x001a0000u + + 0x1c8u);
    }
L_0019fffc:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a0000:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a0004:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a0008:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001a000c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a0010:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_001a0014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fe58;
        }
    }
L_001a0018:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000031u, 1, 1);
    }
L_001a001c:;
    {
        wr32(cpu->r[0] + + 0x9e0u, cpu->r[7]);
    }
L_001a0020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a00b8;
        }
    }
L_001a0024:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000043u, 1, 1);
    }
L_001a0028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0170;
        }
    }
L_001a002c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a0030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a010c;
        }
    }
L_001a0034:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001a0038:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a003c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_001a0040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a0044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019fe58;
        }
    }
L_001a0048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0001e000u, 0, 0);
    }
L_001a004c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a0050:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000024cu, 0, 0);
    }
L_001a0054:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0058:;
    {
        cpu->r[14] = 0x001a005cu; fn_000ae3d0(cpu);
    }
L_001a005c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0060:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0064:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[7]);
    }
L_001a0068:;
    {
        cpu->r[14] = 0x001a006cu; fn_000a6b7c(cpu);
    }
L_001a006c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0070:;
    {
        cpu->r[0] = 0x00000439u;
    }
L_001a0074:;
    {
        cpu->r[14] = 0x001a0078u; fn_000aeb58(cpu);
    }
L_001a0078:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a007c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0080:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000088u, 0, 0);
    }
L_001a0084:;
    {
        cpu->r[14] = 0x001a0088u; fn_000ae740(cpu);
    }
L_001a0088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a008c:;
    {
        cpu->r[14] = 0x001a0090u; fn_000a76a0(cpu);
    }
L_001a0090:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001a0094:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_001a0098:;
    {
        cpu->r[1] = 0x00006780u;
    }
L_001a009c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a00a0:;
    {
        wr8(cpu->r[4] + + 0x9e4u, cpu->r[6]);
    }
L_001a00a4:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[6]);
    }
L_001a00a8:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[7]);
    }
L_001a00ac:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001a00b0:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[3]);
    }
L_001a00b4:;
    {
        goto L_0019fe60;
    }
L_001a00b8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a00bc:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[7]);
    }
L_001a00c0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a00c4:;
    {
        cpu->r[14] = 0x001a00c8u; fn_000a6b7c(cpu);
    }
L_001a00c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a00cc:;
    {
        cpu->r[0] = 0x0000043au;
    }
L_001a00d0:;
    {
        cpu->r[14] = 0x001a00d4u; fn_000aeb58(cpu);
    }
L_001a00d4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a00d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000088u, 0, 0);
    }
L_001a00dc:;
    {
        cpu->r[14] = 0x001a00e0u; fn_000ae160(cpu);
    }
L_001a00e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a00e4:;
    {
        cpu->r[14] = 0x001a00e8u; fn_000a76a0(cpu);
    }
L_001a00e8:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001a00ec:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_001a00f0:;
    {
        wr8(cpu->r[4] + + 0x9e4u, cpu->r[7]);
    }
L_001a00f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a00f8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001a00fc:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[1]);
    }
L_001a0100:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001a0104:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x80u);
    }
L_001a0108:;
    {
        goto L_0019fe44;
    }
L_001a010c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a0110:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001a0114:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0118:;
    {
        cpu->r[14] = 0x001a011cu; fn_001933d4(cpu);
    }
L_001a011c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0120:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0124:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[7]);
    }
L_001a0128:;
    {
        cpu->r[14] = 0x001a012cu; fn_000a6b7c(cpu);
    }
L_001a012c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0130:;
    {
        cpu->r[0] = 0x00000444u;
    }
L_001a0134:;
    {
        cpu->r[14] = 0x001a0138u; fn_000aeb58(cpu);
    }
L_001a0138:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a013c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000088u, 0, 0);
    }
L_001a0140:;
    {
        cpu->r[14] = 0x001a0144u; fn_000ae160(cpu);
    }
L_001a0144:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0148:;
    {
        cpu->r[14] = 0x001a014cu; fn_000a76a0(cpu);
    }
L_001a014c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001a0150:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_001a0154:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001a0158:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a015c:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[1]);
    }
L_001a0160:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001a0164:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x80u);
    }
L_001a0168:;
    {
        wr8(cpu->r[4] + + 0x9e4u, cpu->r[7]);
    }
L_001a016c:;
    {
        goto L_0019fe44;
    }
L_001a0170:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a0174:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[7]);
    }
L_001a0178:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a017c:;
    {
        cpu->r[14] = 0x001a0180u; fn_000a6b7c(cpu);
    }
L_001a0180:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0184:;
    {
        cpu->r[0] = 0x0000043bu;
    }
L_001a0188:;
    {
        goto L_001a00d0;
    }
L_001a018c:;
    {
        cpu->r[3] = rd32(0x001a0194u + + 0x34u);
    }
L_001a0190:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a0194:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001a0198:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a019c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a01a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a01a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a01a8:;
    {
        cpu->r[14] = 0x001a01b0u;
    }
L_001a01ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a01b0u)) return;
    }
L_001a01b0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a01b4:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_001a01b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a01bc:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001a01c0:;
    {
        goto L_0019fe58;
    }
}

/* _ZN19GS_OnlineLoginPanelD1Ev @ 001a01d0 (arm) */
void fn_001a01d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a01d0:;
    {
        cpu->r[3] = rd32(0x001a01d8u + + 0x24u);
    }
L_001a01d4:;
    {
        cpu->r[2] = rd32(0x001a01dcu + + 0x24u);
    }
L_001a01d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a01e0u, cpu->r[3], 0, 0);
    }
L_001a01dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a01e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a01e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a01e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a01ec:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a01f0:;
    {
        cpu->r[14] = 0x001a01f4u; fn_000a753c(cpu);
    }
L_001a01f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a01f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a01fcu)) return;
    }
}

/* _ZN19GS_OnlineLoginPanelD0Ev @ 001a0204 (arm) */
void fn_001a0204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0204:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a0208:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a020c:;
    {
        cpu->r[14] = 0x001a0210u; fn_001a01d0(cpu);
    }
L_001a0210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0214:;
    {
        cpu->r[14] = 0x001a0218u; fn_0018ba20(cpu);
    }
L_001a0218:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a021c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0220u)) return;
    }
}

/* _ZN19GS_OnlineLoginPanelD2Ev @ 001a0220 (arm) */
void fn_001a0220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0220:;
    {
        cpu->r[3] = rd32(0x001a0228u + + 0x24u);
    }
L_001a0224:;
    {
        cpu->r[2] = rd32(0x001a022cu + + 0x24u);
    }
L_001a0228:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0230u, cpu->r[3], 0, 0);
    }
L_001a022c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a0230:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0234:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0238:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a023c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a0240:;
    {
        cpu->r[14] = 0x001a0244u; fn_000a753c(cpu);
    }
L_001a0244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0248:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a024cu)) return;
    }
}

/* _ZN19GS_OnlineLoginPanelC1EPcS0_ @ 001a0254 (arm) */
void fn_001a0254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0254:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a0258:;
    {
        cpu->r[6] = rd32(0x001a0260u + + 0x84u);
    }
L_001a025c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0260:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001a0264:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001a0268:;
    {
        cpu->r[14] = 0x001a026cu; fn_000a7608(cpu);
    }
L_001a026c:;
    {
        cpu->r[3] = rd32(0x001a0274u + + 0x74u);
    }
L_001a0270:;
    {
        cpu->r[6] = add_flags(cpu, 0x001a0278u, cpu->r[6], 0, 0);
    }
L_001a0274:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a0278:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a027c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a0280:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a0284:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x000009e0u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_001a0288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001a028c:;
    {
        cpu->r[14] = 0x001a0290u; imp_strcpy(cpu); /* strcpy */
    }
L_001a0290:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000a10u, 0, 0);
    }
L_001a0294:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0298:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_001a029c:;
    {
        cpu->r[14] = 0x001a02a0u; imp_strcpy(cpu); /* strcpy */
    }
L_001a02a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a02a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a02a8:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[3]);
    }
L_001a02ac:;
    {
        cpu->r[0] = 0x00000435u;
    }
L_001a02b0:;
    {
        cpu->r[14] = 0x001a02b4u; fn_000aeb58(cpu);
    }
L_001a02b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001a02b8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a02bc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a02c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a02c4:;
    {
        cpu->r[14] = 0x001a02c8u; fn_000a7bb0(cpu);
    }
L_001a02c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a02cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a02d0:;
    {
        wr8(cpu->r[4] + + 0x9d9u, cpu->r[3]);
    }
L_001a02d4:;
    {
        wr8(cpu->r[4] + + 0x9e4u, cpu->r[3]);
    }
L_001a02d8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a02dc:;
    {
        wr32(cpu->r[4] + + 0x9e0u, cpu->r[3]);
    }
L_001a02e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a02e4u)) return;
    }
}

/* _ZN19GS_OnlineLoginPanelC2EPcS0_ @ 001a02ec (arm) */
void fn_001a02ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a02ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a02f0:;
    {
        cpu->r[6] = rd32(0x001a02f8u + + 0x84u);
    }
L_001a02f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a02f8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001a02fc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001a0300:;
    {
        cpu->r[14] = 0x001a0304u; fn_000a7608(cpu);
    }
L_001a0304:;
    {
        cpu->r[3] = rd32(0x001a030cu + + 0x74u);
    }
L_001a0308:;
    {
        cpu->r[6] = add_flags(cpu, 0x001a0310u, cpu->r[6], 0, 0);
    }
L_001a030c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a0310:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0314:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a0318:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a031c:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x000009e0u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_001a0320:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001a0324:;
    {
        cpu->r[14] = 0x001a0328u; imp_strcpy(cpu); /* strcpy */
    }
L_001a0328:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000a10u, 0, 0);
    }
L_001a032c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a0330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_001a0334:;
    {
        cpu->r[14] = 0x001a0338u; imp_strcpy(cpu); /* strcpy */
    }
L_001a0338:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a033c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a0340:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[3]);
    }
L_001a0344:;
    {
        cpu->r[0] = 0x00000435u;
    }
L_001a0348:;
    {
        cpu->r[14] = 0x001a034cu; fn_000aeb58(cpu);
    }
L_001a034c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001a0350:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a0354:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a0358:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a035c:;
    {
        cpu->r[14] = 0x001a0360u; fn_000a7bb0(cpu);
    }
L_001a0360:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a0364:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0368:;
    {
        wr8(cpu->r[4] + + 0x9d9u, cpu->r[3]);
    }
L_001a036c:;
    {
        wr8(cpu->r[4] + + 0x9e4u, cpu->r[3]);
    }
L_001a0370:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a0374:;
    {
        wr32(cpu->r[4] + + 0x9e0u, cpu->r[3]);
    }
L_001a0378:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a037cu)) return;
    }
}

/* _ZN20GS_RankingsSendScore8isKindOfEi @ 001a0384 (arm) */
void fn_001a0384(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0384:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003cu, 1, 1);
    }
L_001a0388:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a038c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a0390:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_RankingsSendScore17ApplyMenuSettingsEv @ 001a0394 (arm) */
void fn_001a0394(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0394:;
    {
        cpu->r[3] = rd32(0x001a039cu + + 0x38u);
    }
L_001a0398:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a039c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a03a0:;
    {
        wr8(cpu->r[0] + + 0x8fcu, cpu->r[2]);
    }
L_001a03a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a03acu, cpu->r[3], 0, 0);
    }
L_001a03a8:;
    {
        wr32(cpu->r[0] + + 0x95cu, cpu->r[1]);
    }
L_001a03ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001a03b0:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001a03b4:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[12]);
    }
L_001a03b8:;
    {
        cpu->r[12] = 0x00000402u;
    }
L_001a03bc:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001a03c0:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[12]);
    }
L_001a03c4:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_001a03c8:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[1]);
    }
L_001a03cc:;
    {
        wr8(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_001a03d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_62 @ 001a03d8 (arm) */
void fn_001a03d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a03d8:;
    {
        cpu->r[3] = rd32(0x001a03e0u + + 0x20u);
    }
L_001a03dc:;
    {
        cpu->r[1] = rd32(0x001a03e4u + + 0x20u);
    }
L_001a03e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a03e8u, cpu->r[3], 0, 0);
    }
L_001a03e4:;
    {
        cpu->r[2] = rd32(0x001a03ecu + + 0x1cu);
    }
L_001a03e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a03ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a03f4u, cpu->r[2], 0, 0);
    }
L_001a03f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a03f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a03f8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a03fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_RankingsSendScoreD1Ev @ 001a040c (arm) */
void fn_001a040c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a040c:;
    {
        cpu->r[3] = rd32(0x001a0414u + + 0x24u);
    }
L_001a0410:;
    {
        cpu->r[2] = rd32(0x001a0418u + + 0x24u);
    }
L_001a0414:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a041cu, cpu->r[3], 0, 0);
    }
L_001a0418:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a041c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0420:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0424:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a0428:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a042c:;
    {
        cpu->r[14] = 0x001a0430u; fn_000ec21c(cpu);
    }
L_001a0430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0434:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0438u)) return;
    }
}

/* _ZN20GS_RankingsSendScore6ResumeEv @ 001a0440 (arm) */
void fn_001a0440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0440:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN20GS_RankingsSendScore6UpdateEv @ 001a0444 (arm) */
void fn_001a0444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0444:;
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
L_001a0448:;
    {
        cpu->r[4] = rd32(0x001a0450u + + 0x524u);
    }
L_001a044c:;
    {
        cpu->r[6] = rd32(0x001a0454u + + 0x524u);
    }
L_001a0450:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a0454:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a045cu, cpu->r[4], 0, 0);
    }
L_001a0458:;
    {
        cpu->r[7] = rd32(0x001a0460u + + 0x51cu);
    }
L_001a045c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000430u, 1, 0);
    }
L_001a0460:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a0464:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0468:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001a046c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a0470:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a0474:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a0478:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a047c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001a0480:;
    {
        wr32(cpu->r[13] + + 0x42cu, cpu->r[2]);
    }
L_001a0484:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_001a0488:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a048c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0520;
        }
    }
L_001a0490:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_001a0494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0520;
        }
    }
L_001a0498:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_001a049c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0520;
        }
    }
L_001a04a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a04a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0520;
        }
    }
L_001a04a8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_001a04ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0520;
        }
    }
L_001a04b0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x960u);
    }
L_001a04b4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001a04b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0700;
        }
    }
L_001a04bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001a04c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a04c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a06b0;
        }
    }
L_001a04c8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x954u);
    }
L_001a04cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_001a04d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a059c;
        }
    }
L_001a04d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a04d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a06e0;
        }
    }
L_001a04dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a04e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a05cc;
        }
    }
L_001a04e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a04e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a05c0;
        }
    }
L_001a04ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a04f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a06b0;
        }
    }
L_001a04f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a04f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a04fc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
        }
    }
L_001a0500:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a0504:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x42cu);
    }
L_001a0508:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a050c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a0510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0970;
        }
    }
L_001a0514:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001a0518:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a051c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0520u)) return;
    }
L_001a0520:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x964u);
    }
L_001a0524:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001a0528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a04b0;
        }
    }
L_001a052c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a0530:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001a0534:;
    {
        wr8(cpu->r[5] + + 0x964u, cpu->r[3]);
    }
L_001a0538:;
    {
        cpu->r[14] = 0x001a053cu; fn_0018ba6c(cpu);
    }
L_001a053c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a0540:;
    {
        cpu->r[14] = 0x001a0544u; fn_000a7570(cpu);
    }
L_001a0544:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0548:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a054c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a0550:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a0554:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a0558:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_001a055c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a0560:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_001a0564:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_001a0568:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_001a056c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_001a0570:;
    {
        cpu->r[14] = 0x001a0574u; fn_000aeb58(cpu);
    }
L_001a0574:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001a0578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000960u, 0, 0);
    }
L_001a057c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a0580:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a0584:;
    {
        cpu->r[14] = 0x001a0588u; fn_000a7bb0(cpu);
    }
L_001a0588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a058c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0590:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a0594:;
    {
        cpu->r[14] = 0x001a0598u; fn_000f361c(cpu);
    }
L_001a0598:;
    {
        goto L_001a04b0;
    }
L_001a059c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a05a0:;
    {
        cpu->r[2] = 0x0000e21cu;
    }
L_001a05a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001a05a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001a05ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000017u, 1, 1);
    }
L_001a05b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_001a05b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x954u, cpu->r[2]);
        }
    }
L_001a05b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a05bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a04ec;
        }
    }
L_001a05c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a05c4:;
    {
        cpu->r[14] = 0x001a05c8u; fn_00128a5c(cpu);
    }
L_001a05c8:;
    {
        goto L_001a0500;
    }
L_001a05cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001a05d0:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001a05d4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001a05d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001a05dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a05e0:;
    {
        cpu->r[14] = 0x001a05e4u; imp_memset(cpu); /* memset */
    }
L_001a05e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a05e8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a05ec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a05f0:;
    {
        cpu->r[14] = 0x001a05f4u; fn_001933d4(cpu);
    }
L_001a05f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001a05f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001a05fc:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_001a0614;
        case 1: goto L_001a0874;
        case 2: goto L_001a0814;
        case 3: goto L_001a076c;
        default: guest_unimplemented(cpu, 0x001a05fcu); return; }
        }
    }
L_001a0600:;
    {
        goto L_001a0688;
    }
L_001a0614:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001a0618:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a061c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001a0620:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001a0624:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a0628:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001a062c:;
    {
        cpu->r[12] = 0x00006768u;
    }
L_001a0630:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a0634:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_001a0638:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a063c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001a0640:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000009cu, 0, 0);
    }
L_001a0644:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001a0648:;
    {
        cpu->r[14] = 0x001a064cu; fn_000f33a8(cpu);
    }
L_001a064c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a0650:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0654:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a0658:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_001a065c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a0660:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a0664:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001a0668:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a066c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a0670:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0674:;
    {
        cpu->r[14] = 0x001a0678u; fn_001c004c(cpu);
    }
L_001a0678:;
    {
        sub_flags(cpu, cpu->r[10], 0x000003a8u, 1, 1);
    }
L_001a067c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0628;
        }
    }
L_001a0680:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a0684:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a0688:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a068c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0690:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a0694:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_001a0698:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a069c:;
    {
        cpu->r[14] = 0x001a06a0u; fn_001c03cc(cpu);
    }
L_001a06a0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a06a4:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[3]);
    }
L_001a06a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001a06ac:;
    {
        goto L_001a04e4;
    }
L_001a06b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a06b4:;
    {
        cpu->r[14] = 0x001a06b8u; fn_0010da28(cpu);
    }
L_001a06b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a06bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0500;
        }
    }
L_001a06c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_001a06c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a06c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0500;
        }
    }
L_001a06cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a06d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a06d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a06d8:;
    {
        cpu->r[14] = 0x001a06dcu; fn_000f34e8(cpu);
    }
L_001a06dc:;
    {
        goto L_001a0500;
    }
L_001a06e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001a06e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a06e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a0948;
        }
    }
L_001a06ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a06f0:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_001a06f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a06f8:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[3]);
    }
L_001a06fc:;
    {
        goto L_001a0500;
    }
L_001a0700:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0704:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0708:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a070c:;
    {
        cpu->r[14] = 0x001a0710u; fn_000f34e8(cpu);
    }
L_001a0710:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0714:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a0718:;
    {
        cpu->r[14] = 0x001a071cu; fn_000f34e8(cpu);
    }
L_001a071c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a0720:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a0724:;
    {
        cpu->r[14] = 0x001a0728u; fn_001933d4(cpu);
    }
L_001a0728:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a072c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001a0730:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a0734:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a0738:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a073c:;
    {
        cpu->r[14] = 0x001a0744u;
    }
L_001a0740:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0744u)) return;
    }
L_001a0744:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a0748:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_001a074c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a0750:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a0754:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_001a0758:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a075c:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_001a0760:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_001a0764:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a0768:;
    {
        goto L_001a0500;
    }
L_001a076c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0770:;
    {
        cpu->r[9] = 0x00000012u;
    }
L_001a0774:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001a0778:;
    {
        cpu->r[10] = 0x000003a8u;
    }
L_001a077c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a0780:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001a0784:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001a0788:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a078c:;
    {
        cpu->r[12] = 0x00006768u;
    }
L_001a0790:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a0794:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0798:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a079c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001a07a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x438u);
    }
L_001a07a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001a07a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001a07ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000009cu, 0, 0);
    }
L_001a07b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_001a07b4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a07b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001a07bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001a07c0:;
    {
        cpu->r[14] = 0x001a07c4u; fn_001c004c(cpu);
    }
L_001a07c4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000750u, 1, 1);
    }
L_001a07c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0788;
        }
    }
L_001a07cc:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001a07d0:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a07d4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a07d8:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_001a07dc:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_001a07e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a07e4:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a07e8:;
    {
        cpu->r[14] = 0x001a07ecu; fn_000a0c10(cpu);
    }
L_001a07ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a07f0:;
    {
        cpu->r[3] = 0x00000019u;
    }
L_001a07f4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001a07f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001a07fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a0800:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001a0804:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a0808:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a080c:;
    {
        cpu->r[14] = 0x001a0810u; fn_001c004c(cpu);
    }
L_001a0810:;
    {
        goto L_001a0688;
    }
L_001a0814:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001a0818:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a081c:;
    {
        cpu->r[9] = 0x0000000cu;
    }
L_001a0820:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_001a0824:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_001a0828:;
    {
        cpu->r[14] = 0x00006768u;
    }
L_001a082c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a0830:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0834:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001a0838:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001a083c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x438u);
    }
L_001a0840:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_001a0844:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a0848:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001a084c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000009cu, 0, 0);
    }
L_001a0850:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_001a0854:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a0858:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a085c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a0860:;
    {
        cpu->r[14] = 0x001a0864u; fn_001c004c(cpu);
    }
L_001a0864:;
    {
        sub_flags(cpu, cpu->r[10], 0x000003a8u, 1, 1);
    }
L_001a0868:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a086c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0824;
        }
    }
L_001a0870:;
    {
        goto L_001a0688;
    }
L_001a0874:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0878:;
    {
        cpu->r[9] = 0x000003a8u;
    }
L_001a087c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_001a0880:;
    {
        cpu->r[10] = 0x00000006u;
    }
L_001a0884:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a0888:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001a088c:;
    {
        cpu->r[14] = 0x00006768u;
    }
L_001a0890:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a0894:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_001a0898:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_001a089c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_001a08a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000009cu, 0, 0);
    }
L_001a08a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001a08a8:;
    {
        cpu->r[14] = 0x001a08acu; fn_000f33a8(cpu);
    }
L_001a08ac:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a08b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a08b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001a08b8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a08bc:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001a08c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001a08c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001a08c8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a08cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a08d0:;
    {
        cpu->r[14] = 0x001a08d4u; fn_001c004c(cpu);
    }
L_001a08d4:;
    {
        sub_flags(cpu, cpu->r[10], 0x0000000cu, 1, 1);
    }
L_001a08d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a0888;
        }
    }
L_001a08dc:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a08e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a08e4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a08e8:;
    {
        cpu->r[12] = 0x00001c34u;
    }
L_001a08ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a08f0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a08f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a08f8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[14], 0x0000000cu, 1, 0);
    }
L_001a08fc:;
    {
        cpu->r[14] = 0x00001c30u;
    }
L_001a0900:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a0904:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_001a0908:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001a090c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_001a0910:;
    {
        cpu->r[0] = 0x00006768u;
    }
L_001a0914:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a0918:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a091c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001a0920:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001a0924:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a0928:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a092c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001a0930:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_001a0934:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_001a0938:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001a093c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001a0940:;
    {
        cpu->r[14] = 0x001a0944u; fn_001c004c(cpu);
    }
L_001a0944:;
    {
        goto L_001a0688;
    }
L_001a0948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a094c:;
    {
        cpu->r[0] = 0x00001418u;
    }
L_001a0950:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001a0954:;
    {
        cpu->r[14] = 0x001a0958u; fn_0018ba6c(cpu);
    }
L_001a0958:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a095c:;
    {
        cpu->r[14] = 0x001a0960u; fn_001a63e4(cpu);
    }
L_001a0960:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0964:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a0968:;
    {
        cpu->r[14] = 0x001a096cu; fn_000f36dc(cpu);
    }
L_001a096c:;
    {
        goto L_001a0500;
    }
L_001a0970:;
    {
        cpu->r[14] = 0x001a0974u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001a0974:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[10] + (-cpu->r[12]);
        wr16(cpu->r[10], cpu->r[9]);
        cpu->r[10] = wb_tmp;
        }
    }
L_001a0978:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001a097c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GS_RankingsSendScore8DoActionEii @ 001a0980 (arm) */
void fn_001a0980(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0980:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001a0984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0988:;
    {
        cpu->r[0] = rd32(0x001a0990u + + 0x70u);
    }
L_001a098c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a0990:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a0994:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a0998:;
    {
        cpu->r[0] = add_flags(cpu, 0x001a09a0u, cpu->r[0], 0, 0);
    }
L_001a099c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a09a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a09ac;
        }
    }
L_001a09a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a09a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a09acu)) return;
    }
L_001a09ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a09b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a09d0;
        }
    }
L_001a09b4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a09b8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001a09bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a09c0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001a09c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a09c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a09cc:;
    {
        return fn_0010df70(cpu);
    }
L_001a09d0:;
    {
        cpu->r[12] = rd32(0x001a09d8u + + 0x2cu);
    }
L_001a09d4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a09d8:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a09dc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a09e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001a09e4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a09e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a09ec:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a09f0:;
    {
        cpu->r[14] = 0x001a09f4u; fn_000fd248(cpu);
    }
L_001a09f4:;
    {
        cpu->r[3] = 0x00000048u;
    }
L_001a09f8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001a09fc:;
    {
        goto L_001a09b4;
    }
}

/* _ZN20GS_RankingsSendScoreC2Ev @ 001a0a08 (arm) */
void fn_001a0a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0a08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a0a0c:;
    {
        cpu->r[4] = rd32(0x001a0a14u + + 0xa8u);
    }
L_001a0a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a0a14:;
    {
        cpu->r[14] = 0x001a0a18u; fn_0010ffa8(cpu);
    }
L_001a0a18:;
    {
        cpu->r[2] = rd32(0x001a0a20u + + 0xa0u);
    }
L_001a0a1c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a0a24u, cpu->r[4], 0, 0);
    }
L_001a0a20:;
    {
        cpu->r[3] = rd32(0x001a0a28u + + 0x9cu);
    }
L_001a0a24:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a0a28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0a2c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a0a30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a0a34:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a0a38:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a0a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0a78;
        }
    }
L_001a0a40:;
    {
        cpu->r[6] = rd32(0x001a0a48u + + 0x80u);
    }
L_001a0a44:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a0a48:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a0a4c:;
    {
        cpu->r[14] = 0x001a0a50u; fn_00096a08(cpu);
    }
L_001a0a50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a0a54:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0a58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0a5c:;
    {
        cpu->r[14] = 0x001a0a60u; fn_0018aa44(cpu);
    }
L_001a0a60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a0a64:;
    {
        wr8(cpu->r[5] + + 0x964u, cpu->r[3]);
    }
L_001a0a68:;
    {
        wr32(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_001a0a6c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001a0a70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0a74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0a78u)) return;
    }
L_001a0a78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a0a7c:;
    {
        cpu->r[14] = 0x001a0a80u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a0a80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a0a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0a40;
        }
    }
L_001a0a88:;
    {
        cpu->r[6] = rd32(0x001a0a90u + + 0x38u);
    }
L_001a0a8c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0a90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a0a94:;
    {
        cpu->r[14] = 0x001a0a98u; fn_0018aa20(cpu);
    }
L_001a0a98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a0a9c:;
    {
        cpu->r[14] = 0x001a0aa0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a0aa0:;
    {
        cpu->r[3] = rd32(0x001a0aa8u + + 0x24u);
    }
L_001a0aa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a0aa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0aac:;
    {
        cpu->r[3] = rd32(0x001a0ab4u + + 0x1cu);
    }
L_001a0ab0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0ab4:;
    {
        cpu->r[14] = 0x001a0ab8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a0ab8:;
    {
        goto L_001a0a44;
    }
}

/* _ZN20GS_RankingsSendScoreD0Ev @ 001a0ad4 (arm) */
void fn_001a0ad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0ad4:;
    {
        cpu->r[3] = rd32(0x001a0adcu + + 0x2cu);
    }
L_001a0ad8:;
    {
        cpu->r[2] = rd32(0x001a0ae0u + + 0x2cu);
    }
L_001a0adc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0ae4u, cpu->r[3], 0, 0);
    }
L_001a0ae0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a0ae4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0ae8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0aec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a0af0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a0af4:;
    {
        cpu->r[14] = 0x001a0af8u; fn_000ec21c(cpu);
    }
L_001a0af8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0afc:;
    {
        cpu->r[14] = 0x001a0b00u; fn_0018ba20(cpu);
    }
L_001a0b00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0b04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0b08u)) return;
    }
}

/* _ZN20GS_RankingsSendScore6RenderEv @ 001a0b10 (arm) */
void fn_001a0b10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0b10:;
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
L_001a0b14:;
    {
        cpu->r[4] = rd32(0x001a0b1cu + + 0x214u);
    }
L_001a0b18:;
    {
        cpu->r[8] = rd32(0x001a0b20u + + 0x214u);
    }
L_001a0b1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_001a0b20:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a0b28u, cpu->r[4], 0, 0);
    }
L_001a0b24:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a0b28:;
    {
        cpu->r[14] = 0x001a0b2cu; fn_00114138(cpu);
    }
L_001a0b2c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001a0b30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a0b34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a0b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0cb0;
        }
    }
L_001a0b3c:;
    {
        cpu->r[7] = rd32(0x001a0b44u + + 0x1f4u);
    }
L_001a0b40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a0b44:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a0b48:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a0b4c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a0b50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a0b54:;
    {
        cpu->r[11] = rd32(0x001a0b5cu + + 0x1e0u);
    }
L_001a0b58:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001a0b5c:;
    {
        cpu->r[14] = 0x001a0b60u; fn_0018aa44(cpu);
    }
L_001a0b60:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a0b64:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a0b68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a0b6c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a0b70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001a0b74:;
    {
        cpu->r[14] = 0x001a0b78u; fn_000ad8a0(cpu);
    }
L_001a0b78:;
    {
        cpu->r[3] = rd32(0x001a0b80u + + 0x1c0u);
    }
L_001a0b7c:;
    {
        cpu->r[1] = 0xaa000000u;
    }
L_001a0b80:;
    {
        cpu->r[9] = rd32(0x001a0b88u + + 0x1bcu);
    }
L_001a0b84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0b88:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001a0b8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0b90:;
    {
        cpu->r[14] = 0x001a0b94u; fn_0012dd58(cpu);
    }
L_001a0b94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001a0b98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001a0b9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a0ba0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a0ba4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0ba8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a0bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a0bb0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a0bb4:;
    {
        cpu->r[14] = 0x001a0bb8u; fn_00130908(cpu);
    }
L_001a0bb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0bbc:;
    {
        cpu->r[14] = 0x001a0bc0u; fn_0012f780(cpu);
    }
L_001a0bc0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001a0bc4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a0bc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a0bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0cf4;
        }
    }
L_001a0bd0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a0bd4:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_001a0bd8:;
    {
        cpu->r[14] = 0x001a0bdcu; fn_00096a08(cpu);
    }
L_001a0bdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a0be0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001a0be4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0be8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a0bec:;
    {
        cpu->r[14] = 0x001a0bf0u; fn_0018aa44(cpu);
    }
L_001a0bf0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a0bf4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a0bf8:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a0bfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a0c00:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x54u);
    }
L_001a0c04:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001a0c08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001a0c0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a0c10:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a0c14:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_001a0c18:;
    {
        cpu->r[14] = 0x001a0c1cu; fn_000aeb58(cpu);
    }
L_001a0c1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001a0c20:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a0c24:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a0c28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_001a0c2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0c30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0c34:;
    {
        cpu->r[14] = 0x001a0c38u; fn_000a9818(cpu);
    }
L_001a0c38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a0c3c:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a0c40:;
    {
        cpu->r[14] = 0x001a0c44u; fn_000aeb58(cpu);
    }
L_001a0c44:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001a0c48:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a0c4c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a0c50:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a0c54:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001a0c58:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a0c5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000053u, 1, 0);
    }
L_001a0c60:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001a0c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a0c68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a0c6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_001a0c70:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001a0c74:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a0c78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001a0c7c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a0c80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a0c84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a0c88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0c8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0c90:;
    {
        cpu->r[14] = 0x001a0c94u; fn_000ac4bc(cpu);
    }
L_001a0c94:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[8]);
    }
L_001a0c98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a0c9c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a0ca0:;
    {
        cpu->r[14] = 0x001a0ca8u;
    }
L_001a0ca4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0ca8u)) return;
    }
L_001a0ca8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001a0cac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0cb0u)) return;
    }
L_001a0cb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0cb4:;
    {
        cpu->r[14] = 0x001a0cb8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a0cb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a0cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0b3c;
        }
    }
L_001a0cc0:;
    {
        cpu->r[7] = rd32(0x001a0cc8u + + 0x70u);
    }
L_001a0cc4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a0cc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0ccc:;
    {
        cpu->r[14] = 0x001a0cd0u; fn_0018aa20(cpu);
    }
L_001a0cd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0cd4:;
    {
        cpu->r[14] = 0x001a0cd8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a0cd8:;
    {
        cpu->r[3] = rd32(0x001a0ce0u + + 0x68u);
    }
L_001a0cdc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a0ce0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0ce4:;
    {
        cpu->r[3] = rd32(0x001a0cecu + + 0x60u);
    }
L_001a0ce8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0cec:;
    {
        cpu->r[14] = 0x001a0cf0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a0cf0:;
    {
        goto L_001a0b40;
    }
L_001a0cf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0cf8:;
    {
        cpu->r[14] = 0x001a0cfcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a0cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a0d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0bd0;
        }
    }
L_001a0d04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a0d08:;
    {
        cpu->r[14] = 0x001a0d0cu; fn_0018aa20(cpu);
    }
L_001a0d0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0d10:;
    {
        cpu->r[14] = 0x001a0d14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a0d14:;
    {
        cpu->r[3] = rd32(0x001a0d1cu + + 0x2cu);
    }
L_001a0d18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a0d1c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0d20:;
    {
        cpu->r[3] = rd32(0x001a0d28u + + 0x24u);
    }
L_001a0d24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0d28:;
    {
        cpu->r[14] = 0x001a0d2cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a0d2c:;
    {
        goto L_001a0bd0;
    }
}

/* _ZN20GS_RankingsSendScoreC1Ev @ 001a0d50 (arm) */
void fn_001a0d50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0d50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a0d54:;
    {
        cpu->r[4] = rd32(0x001a0d5cu + + 0xa8u);
    }
L_001a0d58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a0d5c:;
    {
        cpu->r[14] = 0x001a0d60u; fn_0010ffa8(cpu);
    }
L_001a0d60:;
    {
        cpu->r[2] = rd32(0x001a0d68u + + 0xa0u);
    }
L_001a0d64:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a0d6cu, cpu->r[4], 0, 0);
    }
L_001a0d68:;
    {
        cpu->r[3] = rd32(0x001a0d70u + + 0x9cu);
    }
L_001a0d6c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a0d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0d74:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a0d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a0d7c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a0d80:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a0d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0dc0;
        }
    }
L_001a0d88:;
    {
        cpu->r[6] = rd32(0x001a0d90u + + 0x80u);
    }
L_001a0d8c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a0d90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a0d94:;
    {
        cpu->r[14] = 0x001a0d98u; fn_00096a08(cpu);
    }
L_001a0d98:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a0d9c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a0da0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0da4:;
    {
        cpu->r[14] = 0x001a0da8u; fn_0018aa44(cpu);
    }
L_001a0da8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a0dac:;
    {
        wr8(cpu->r[5] + + 0x964u, cpu->r[3]);
    }
L_001a0db0:;
    {
        wr32(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_001a0db4:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001a0db8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0dc0u)) return;
    }
L_001a0dc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a0dc4:;
    {
        cpu->r[14] = 0x001a0dc8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a0dc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a0dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a0d88;
        }
    }
L_001a0dd0:;
    {
        cpu->r[6] = rd32(0x001a0dd8u + + 0x38u);
    }
L_001a0dd4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a0dd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a0ddc:;
    {
        cpu->r[14] = 0x001a0de0u; fn_0018aa20(cpu);
    }
L_001a0de0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a0de4:;
    {
        cpu->r[14] = 0x001a0de8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a0de8:;
    {
        cpu->r[3] = rd32(0x001a0df0u + + 0x24u);
    }
L_001a0dec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a0df0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0df4:;
    {
        cpu->r[3] = rd32(0x001a0dfcu + + 0x1cu);
    }
L_001a0df8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a0dfc:;
    {
        cpu->r[14] = 0x001a0e00u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a0e00:;
    {
        goto L_001a0d8c;
    }
}

/* _ZN21GS_OnlineInviteFriend8isKindOfEi @ 001a0e1c (arm) */
void fn_001a0e1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0e1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000044u, 1, 1);
    }
L_001a0e20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a0e24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a0e28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_OnlineInviteFriend17ApplyMenuSettingsEv @ 001a0e2c (arm) */
void fn_001a0e2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0e2c:;
    {
        cpu->r[3] = rd32(0x001a0e34u + + 0x48u);
    }
L_001a0e30:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a0e34:;
    {
        cpu->r[12] = rd32(0x001a0e3cu + + 0x44u);
    }
L_001a0e38:;
    {
        cpu->r[1] = rd32(0x001a0e40u + + 0x44u);
    }
L_001a0e3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0e44u, cpu->r[3], 0, 0);
    }
L_001a0e40:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_001a0e44:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001a0e48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a0e4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a0e50:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001a0e54:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[12]);
    }
L_001a0e58:;
    {
        cpu->r[12] = 0x00000413u;
    }
L_001a0e5c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[1]);
    }
L_001a0e60:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_001a0e64:;
    {
        cpu->r[3] = 0x00000468u;
    }
L_001a0e68:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[12]);
    }
L_001a0e6c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_001a0e70:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_001a0e74:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_001a0e78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_OnlineInviteFriend18ProcessOnMouseDragEv @ 001a0e88 (arm) */
void fn_001a0e88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0e88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a0e8c:;
    {
        wr32(cpu->r[0] + + 0x9b0u, cpu->r[3]);
    }
L_001a0e90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_OnlineInviteFriend19ProcessOnMousePinchEv @ 001a0e94 (arm) */
void fn_001a0e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0e94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_63 @ 001a0e98 (arm) */
void fn_001a0e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0e98:;
    {
        cpu->r[3] = rd32(0x001a0ea0u + + 0x48u);
    }
L_001a0e9c:;
    {
        cpu->r[2] = rd32(0x001a0ea4u + + 0x48u);
    }
L_001a0ea0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0ea8u, cpu->r[3], 0, 0);
    }
L_001a0ea4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0ea8:;
    {
        cpu->r[2] = rd32(0x001a0eb0u + + 0x40u);
    }
L_001a0eac:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001a0eb0:;
    {
        cpu->r[1] = rd32(0x001a0eb8u + + 0x3cu);
    }
L_001a0eb4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0eb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000012cu, 1, 0);
    }
L_001a0ebc:;
    {
        cpu->r[2] = rd32(0x001a0ec4u + + 0x34u);
    }
L_001a0ec0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a0ec4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001a0ec8:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001a0ecc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a0ed4u, cpu->r[2], 0, 0);
    }
L_001a0ed0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_001a0ed4:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_001a0ed8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a0edc:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[12]);
    }
L_001a0ee0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a0ee4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_OnlineInviteFriendD1Ev @ 001a0efc (arm) */
void fn_001a0efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0efc:;
    {
        cpu->r[3] = rd32(0x001a0f04u + + 0x24u);
    }
L_001a0f00:;
    {
        cpu->r[2] = rd32(0x001a0f08u + + 0x24u);
    }
L_001a0f04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0f0cu, cpu->r[3], 0, 0);
    }
L_001a0f08:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a0f0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a0f10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0f14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a0f18:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a0f1c:;
    {
        cpu->r[14] = 0x001a0f20u; fn_000ec21c(cpu);
    }
L_001a0f20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0f24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0f28u)) return;
    }
}

/* _ZN21GS_OnlineInviteFriend6ResumeEv @ 001a0f30 (arm) */
void fn_001a0f30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0f30:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a0f34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a0f38:;
    {
        cpu->r[14] = 0x001a0f3cu; fn_001142a0(cpu);
    }
L_001a0f3c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a0f40:;
    {
        wr8(cpu->r[4] + + 0x9b4u, cpu->r[3]);
    }
L_001a0f44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a0f48u)) return;
    }
}

/* _ZN21GS_OnlineInviteFriend17SendInviteMessageEPc @ 001a0f48 (arm) */
void fn_001a0f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a0f48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a0f4c:;
    {
        cpu->r[7] = rd32(0x001a0f54u + + 0xd4u);
    }
L_001a0f50:;
    {
        cpu->r[3] = rd32(0x001a0f58u + + 0xd4u);
    }
L_001a0f54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d8u, 1, 0);
    }
L_001a0f58:;
    {
        cpu->r[7] = add_flags(cpu, 0x001a0f60u, cpu->r[7], 0, 0);
    }
L_001a0f5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001a0f60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a0f64:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001a0f68:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a0f6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a0f70:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001a0f74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a0f78:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a0f7c:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[3]);
    }
L_001a0f80:;
    {
        cpu->r[14] = 0x001a0f84u; imp_memset(cpu); /* memset */
    }
L_001a0f84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a0f88:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001a0f8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0f90:;
    {
        cpu->r[14] = 0x001a0f94u; imp_memset(cpu); /* memset */
    }
L_001a0f94:;
    {
        cpu->r[3] = rd32(0x001a0f9cu + + 0x94u);
    }
L_001a0f98:;
    {
        cpu->r[2] = rd32(0x001a0fa0u + + 0x94u);
    }
L_001a0f9c:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_001a0fa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0fa8u, cpu->r[3], 0, 0);
    }
L_001a0fa4:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001a0fa8:;
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
L_001a0fac:;
    {
        cpu->r[3] = rd32(0x001a0fb4u + + 0x84u);
    }
L_001a0fb0:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001a0fb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a0fbcu, cpu->r[3], 0, 0);
    }
L_001a0fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0001e000u, 0, 0);
    }
L_001a0fbc:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[14] = base + 8u;
    }
L_001a0fc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0fc4:;
    {
        cpu->r[1] = rd32(0x001a0fccu + + 0x70u);
    }
L_001a0fc8:;
    {
        wr16(cpu->r[14], cpu->r[2]);
    }
L_001a0fcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000024cu, 0, 0);
    }
L_001a0fd0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a0fd8u, cpu->r[1], 0, 0);
    }
L_001a0fd4:;
    {
        cpu->r[14] = 0x001a0fd8u; imp_sprintf(cpu); /* sprintf */
    }
L_001a0fd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a0fdc:;
    {
        cpu->r[14] = 0x001a0fe0u; imp_strlen(cpu); /* strlen */
    }
L_001a0fe0:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_001a0fe4:;
    {
        cpu->r[12] = 0x0000676cu;
    }
L_001a0fe8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001a0fec:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001a0ff0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a0ff4:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001a0ff8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a0ffc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a1000:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001a1004:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001a1008:;
    {
        cpu->r[14] = 0x001a100cu; fn_001c2f1c(cpu);
    }
L_001a100c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001a1010:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a1014:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a1018:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a1024;
        }
    }
L_001a101c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_001a1020:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1024u)) return;
    }
L_001a1024:;
    {
        cpu->r[14] = 0x001a1028u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001a1028:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[10] + (-cpu->r[8]);
        wr16(cpu->r[10], cpu->r[9]);
        cpu->r[10] = wb_tmp;
        }
    }
L_001a102c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001a1030:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[8] = v;
        }
    }
L_001a1034:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001a1038:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 3, 7u, &shc); cpu->r[14] = v;
        }
    }
L_001a103c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 4, 6u, &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN21GS_OnlineInviteFriend24ProcessOnMouseButtonDownEv @ 001a1040 (arm) */
void fn_001a1040(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1040:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a1044:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1048:;
    {
        cpu->r[14] = 0x001a104cu; fn_00110498(cpu);
    }
L_001a104c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a1050:;
    {
        wr8(cpu->r[4] + + 0x9a8u, cpu->r[3]);
    }
L_001a1054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a1058:;
    {
        wr32(cpu->r[4] + + 0x9b0u, cpu->r[3]);
    }
L_001a105c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1060u)) return;
    }
}
