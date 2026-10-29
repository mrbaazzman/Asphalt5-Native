#include "functions.h"

/* _ZN13GLXPlayerUser20sendSetUserStoreDataEPcS0_ @ 001bd1c0 (arm) */
void fn_001bd1c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd1c0:;
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
L_001bd1c4:;
    {
        cpu->r[4] = rd32(0x001bd1ccu + + 0xd8u);
    }
L_001bd1c8:;
    {
        cpu->r[7] = rd32(0x001bd1d0u + + 0xd8u);
    }
L_001bd1cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd1d0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd1d8u, cpu->r[4], 0, 0);
    }
L_001bd1d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001bd1d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd1dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bd1e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd1e4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bd1e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd1ec:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd27c;
        }
    }
L_001bd1f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd1f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bd1fc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bd200:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd204:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd208:;
    {
        cpu->r[14] = 0x001bd20cu; fn_001d0700(cpu);
    }
L_001bd20c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001bd210:;
    {
        cpu->r[1] = rd32(0x001bd218u + + 0x94u);
    }
L_001bd214:;
    {
        cpu->r[2] = 0x00000042u;
    }
L_001bd218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bd21c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd220:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd228u, cpu->r[1], 0, 0);
    }
L_001bd224:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bd228:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001bd22c:;
    {
        cpu->r[14] = 0x001bd230u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd230:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd234:;
    {
        cpu->r[14] = 0x001bd238u; fn_001d0434(cpu);
    }
L_001bd238:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bd23c:;
    {
        cpu->r[0] = rd32(0x001bd244u + + 0x6cu);
    }
L_001bd240:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd248u, cpu->r[0], 0, 0);
    }
L_001bd244:;
    {
        cpu->r[14] = 0x001bd248u; fn_001d0ac4(cpu);
    }
L_001bd248:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd24c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd250:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bd254:;
    {
        cpu->r[14] = 0x001bd25cu;
    }
L_001bd258:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd25cu)) return;
    }
L_001bd25c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd260:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd264:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd268:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd26c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd2a0;
        }
    }
L_001bd270:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001bd274:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd278:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd27cu)) return;
    }
L_001bd27c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bd280:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001bd284:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd288:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd28c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd290:;
    {
        cpu->r[14] = 0x001bd298u;
    }
L_001bd294:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd298u)) return;
    }
L_001bd298:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd29c:;
    {
        goto L_001bd25c;
    }
L_001bd2a0:;
    {
        cpu->r[14] = 0x001bd2a4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd2a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 1, 4u, &shc); cpu->r[13] = v;
        }
    }
L_001bd2a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd2ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001bd2b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 10u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser21sendRetrievalPasswordEPc @ 001bd2b4 (arm) */
void fn_001bd2b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd2b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bd2b8:;
    {
        cpu->r[4] = rd32(0x001bd2c0u + + 0xbcu);
    }
L_001bd2bc:;
    {
        cpu->r[7] = rd32(0x001bd2c4u + + 0xbcu);
    }
L_001bd2c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd2c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd2ccu, cpu->r[4], 0, 0);
    }
L_001bd2c8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd2cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bd2d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd2d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd2d8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bd2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd354;
        }
    }
L_001bd2e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bd2e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bd2e8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bd2ec:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd2f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd2f4:;
    {
        cpu->r[14] = 0x001bd2f8u; fn_001d0700(cpu);
    }
L_001bd2f8:;
    {
        cpu->r[1] = rd32(0x001bd300u + + 0x84u);
    }
L_001bd2fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd300:;
    {
        cpu->r[2] = 0x00000034u;
    }
L_001bd304:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd30cu, cpu->r[1], 0, 0);
    }
L_001bd308:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd30c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001bd310:;
    {
        cpu->r[14] = 0x001bd314u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd314:;
    {
        cpu->r[0] = rd32(0x001bd31cu + + 0x6cu);
    }
L_001bd318:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd31c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd324u, cpu->r[0], 0, 0);
    }
L_001bd320:;
    {
        cpu->r[14] = 0x001bd324u; fn_001d0ac4(cpu);
    }
L_001bd324:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd328:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd32c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bd330:;
    {
        cpu->r[14] = 0x001bd338u;
    }
L_001bd334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd338u)) return;
    }
L_001bd338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd33c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bd340:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd344:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd378;
        }
    }
L_001bd34c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bd350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd354u)) return;
    }
L_001bd354:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bd358:;
    {
        cpu->r[1] = 0x00000034u;
    }
L_001bd35c:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd360:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd364:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd368:;
    {
        cpu->r[14] = 0x001bd370u;
    }
L_001bd36c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd370u)) return;
    }
L_001bd370:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd374:;
    {
        goto L_001bd338;
    }
L_001bd378:;
    {
        cpu->r[14] = 0x001bd37cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd37c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 1, 2u, &shc); cpu->r[13] = v;
        }
    }
L_001bd380:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd384:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[13] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001bd388:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 9u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15sendChangeEmailEPcS0_S0_ @ 001bd38c (arm) */
void fn_001bd38c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd38c:;
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
L_001bd390:;
    {
        cpu->r[4] = rd32(0x001bd398u + + 0xe4u);
    }
L_001bd394:;
    {
        cpu->r[7] = rd32(0x001bd39cu + + 0xe4u);
    }
L_001bd398:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001bd39c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd3a4u, cpu->r[4], 0, 0);
    }
L_001bd3a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd3a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001bd3a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd3ac:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001bd3b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd3b4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bd3b8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bd3bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001bd3c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001bd3c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bd3c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd3cc:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd3d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd454;
        }
    }
L_001bd3d4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001bd3d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd454;
        }
    }
L_001bd3dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd3e0:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd3e4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bd3e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd3ec:;
    {
        cpu->r[14] = 0x001bd3f0u; fn_001d0700(cpu);
    }
L_001bd3f0:;
    {
        cpu->r[1] = rd32(0x001bd3f8u + + 0x8cu);
    }
L_001bd3f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bd3f8:;
    {
        cpu->r[2] = 0x00000033u;
    }
L_001bd3fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd404u, cpu->r[1], 0, 0);
    }
L_001bd400:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd404:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001bd408:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001bd40c:;
    {
        cpu->r[14] = 0x001bd410u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd410:;
    {
        cpu->r[0] = rd32(0x001bd418u + + 0x70u);
    }
L_001bd414:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd418:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd420u, cpu->r[0], 0, 0);
    }
L_001bd41c:;
    {
        cpu->r[14] = 0x001bd420u; fn_001d0ac4(cpu);
    }
L_001bd420:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd424:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd428:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bd42c:;
    {
        cpu->r[14] = 0x001bd434u;
    }
L_001bd430:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd434u)) return;
    }
L_001bd434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd438:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd43c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd440:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd478;
        }
    }
L_001bd448:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd44c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd450:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd454u)) return;
    }
L_001bd454:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001bd458:;
    {
        cpu->r[1] = 0x00000033u;
    }
L_001bd45c:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd460:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd464:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd468:;
    {
        cpu->r[14] = 0x001bd470u;
    }
L_001bd46c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd470u)) return;
    }
L_001bd470:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bd474:;
    {
        goto L_001bd434;
    }
L_001bd478:;
    {
        cpu->r[14] = 0x001bd47cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd47c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 4, (cpu->r[0] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001bd480:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd484:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 8u, &shc); cpu->r[3] = v;
        }
    }
L_001bd488:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 8u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser18sendChangePasswordEPcS0_S0_S0_ @ 001bd48c (arm) */
void fn_001bd48c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd48c:;
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
L_001bd490:;
    {
        cpu->r[4] = rd32(0x001bd498u + + 0xf8u);
    }
L_001bd494:;
    {
        cpu->r[5] = rd32(0x001bd49cu + + 0xf8u);
    }
L_001bd498:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001bd49c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd4a4u, cpu->r[4], 0, 0);
    }
L_001bd4a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd4a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001bd4a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd4ac:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001bd4b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bd4b4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001bd4b8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bd4bc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001bd4c0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x840u);
    }
L_001bd4c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd4c8:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd4cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd510;
        }
    }
L_001bd4d0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_001bd4d4:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_001bd4d8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd4dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd4e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd4e4:;
    {
        cpu->r[14] = 0x001bd4ecu;
    }
L_001bd4e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd4ecu)) return;
    }
L_001bd4ec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bd4f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bd4f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd4f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd4fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd58c;
        }
    }
L_001bd504:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001bd508:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd50c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd510u)) return;
    }
L_001bd510:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001bd514:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
        }
    }
L_001bd518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd4d0;
        }
    }
L_001bd51c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bd520:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd524:;
    {
        cpu->r[14] = 0x001bd528u; fn_001d06e8(cpu);
    }
L_001bd528:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bd52c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd4d0;
        }
    }
L_001bd530:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd534:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd538:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_001bd53c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001bd540:;
    {
        cpu->r[14] = 0x001bd544u; fn_001d0700(cpu);
    }
L_001bd544:;
    {
        cpu->r[1] = rd32(0x001bd54cu + + 0x4cu);
    }
L_001bd548:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_001bd54c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001bd550:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001bd554:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd55cu, cpu->r[1], 0, 0);
    }
L_001bd558:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001bd55c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_001bd560:;
    {
        cpu->r[14] = 0x001bd564u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd564:;
    {
        cpu->r[0] = rd32(0x001bd56cu + + 0x30u);
    }
L_001bd568:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001bd56c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd574u, cpu->r[0], 0, 0);
    }
L_001bd570:;
    {
        cpu->r[14] = 0x001bd574u; fn_001d0ac4(cpu);
    }
L_001bd574:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001bd578:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001bd57c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001bd580:;
    {
        cpu->r[14] = 0x001bd588u;
    }
L_001bd584:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd588u)) return;
    }
L_001bd588:;
    {
        goto L_001bd4f0;
    }
L_001bd58c:;
    {
        cpu->r[14] = 0x001bd590u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd590:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 4, (0x001bd598u & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bd594:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd598:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001bd59c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser18sendChangeUserNameEPcS0_S0_b @ 001bd5a0 (arm) */
void fn_001bd5a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd5a0:;
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
L_001bd5a4:;
    {
        cpu->r[4] = rd32(0x001bd5acu + + 0xecu);
    }
L_001bd5a8:;
    {
        cpu->r[7] = rd32(0x001bd5b0u + + 0xecu);
    }
L_001bd5ac:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001bd5b0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd5b8u, cpu->r[4], 0, 0);
    }
L_001bd5b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd5b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001bd5bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd5c0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001bd5c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd5c8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bd5cc:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bd5d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001bd5d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001bd5d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bd5dc:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x840u);
    }
L_001bd5e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd5e4:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd5e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd670;
        }
    }
L_001bd5ec:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001bd5f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd670;
        }
    }
L_001bd5f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd5f8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd5fc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bd600:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd604:;
    {
        cpu->r[14] = 0x001bd608u; fn_001d0700(cpu);
    }
L_001bd608:;
    {
        cpu->r[1] = rd32(0x001bd610u + + 0x90u);
    }
L_001bd60c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bd610:;
    {
        cpu->r[2] = 0x0000000eu;
    }
L_001bd614:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd61cu, cpu->r[1], 0, 0);
    }
L_001bd618:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd61c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001bd620:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001bd624:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001bd628:;
    {
        cpu->r[14] = 0x001bd62cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bd62c:;
    {
        cpu->r[0] = rd32(0x001bd634u + + 0x70u);
    }
L_001bd630:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd634:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd63cu, cpu->r[0], 0, 0);
    }
L_001bd638:;
    {
        cpu->r[14] = 0x001bd63cu; fn_001d0ac4(cpu);
    }
L_001bd63c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd640:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd644:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bd648:;
    {
        cpu->r[14] = 0x001bd650u;
    }
L_001bd64c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd650u)) return;
    }
L_001bd650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd654:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd658:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd65c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd694;
        }
    }
L_001bd664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001bd668:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd66c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd670u)) return;
    }
L_001bd670:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001bd674:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_001bd678:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd67c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd680:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd684:;
    {
        cpu->r[14] = 0x001bd68cu;
    }
L_001bd688:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd68cu)) return;
    }
L_001bd68c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bd690:;
    {
        goto L_001bd650;
    }
L_001bd694:;
    {
        cpu->r[14] = 0x001bd698u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd698:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, 28u, &shc); cpu->r[12] = v;
        }
    }
L_001bd69c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd6a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[3] = (uint32_t)v;
        cpu->r[4] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001bd6a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[3] = (uint32_t)v;
        cpu->r[4] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser14sendGetUsedAppEPc @ 001bd6a8 (arm) */
void fn_001bd6a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd6a8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bd6ac:;
    {
        cpu->r[4] = rd32(0x001bd6b4u + + 0xc0u);
    }
L_001bd6b0:;
    {
        cpu->r[7] = rd32(0x001bd6b8u + + 0xc0u);
    }
L_001bd6b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd6b8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd6c0u, cpu->r[4], 0, 0);
    }
L_001bd6bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bd6c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bd6c4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bd6c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd6cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bd6d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bd6d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd6d8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd6dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd6e0:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bd6e4:;
    {
        cpu->r[14] = 0x001bd6e8u; fn_001d0700(cpu);
    }
L_001bd6e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001bd6ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd74c;
        }
    }
L_001bd6f0:;
    {
        cpu->r[1] = rd32(0x001bd6f8u + + 0x84u);
    }
L_001bd6f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd6f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd6fc:;
    {
        cpu->r[2] = 0x00000039u;
    }
L_001bd700:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd708u, cpu->r[1], 0, 0);
    }
L_001bd704:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001bd708:;
    {
        cpu->r[14] = 0x001bd70cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bd70c:;
    {
        cpu->r[0] = rd32(0x001bd714u + + 0x6cu);
    }
L_001bd710:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd714:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd71cu, cpu->r[0], 0, 0);
    }
L_001bd718:;
    {
        cpu->r[14] = 0x001bd71cu; fn_001d0ac4(cpu);
    }
L_001bd71c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bd720:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd724:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd728:;
    {
        cpu->r[14] = 0x001bd730u;
    }
L_001bd72c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd730u)) return;
    }
L_001bd730:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd734:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bd738:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd73c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd740:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd770;
        }
    }
L_001bd744:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bd748:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd74cu)) return;
    }
L_001bd74c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bd750:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd754:;
    {
        cpu->r[1] = rd32(0x001bd75cu + + 0x28u);
    }
L_001bd758:;
    {
        cpu->r[2] = 0x00000039u;
    }
L_001bd75c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd760:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd768u, cpu->r[1], 0, 0);
    }
L_001bd764:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bd768:;
    {
        cpu->r[14] = 0x001bd76cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bd76c:;
    {
        goto L_001bd70c;
    }
L_001bd770:;
    {
        cpu->r[14] = 0x001bd774u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd774:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 1, (cpu->r[13] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bd778:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd77c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, (cpu->r[9] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001bd780:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 4u, &shc); cpu->r[3] = v;
        }
    }
L_001bd784:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser17sendChangeCountryEPcS0_S0_ @ 001bd788 (arm) */
void fn_001bd788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd788:;
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
L_001bd78c:;
    {
        cpu->r[4] = rd32(0x001bd794u + + 0xe4u);
    }
L_001bd790:;
    {
        cpu->r[7] = rd32(0x001bd798u + + 0xe4u);
    }
L_001bd794:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001bd798:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd7a0u, cpu->r[4], 0, 0);
    }
L_001bd79c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd7a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001bd7a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd7a8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001bd7ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd7b0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bd7b4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bd7b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001bd7bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001bd7c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bd7c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd7c8:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd7cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd850;
        }
    }
L_001bd7d0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001bd7d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd850;
        }
    }
L_001bd7d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd7dc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd7e0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bd7e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd7e8:;
    {
        cpu->r[14] = 0x001bd7ecu; fn_001d0700(cpu);
    }
L_001bd7ec:;
    {
        cpu->r[1] = rd32(0x001bd7f4u + + 0x8cu);
    }
L_001bd7f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bd7f4:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_001bd7f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd800u, cpu->r[1], 0, 0);
    }
L_001bd7fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd800:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001bd804:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001bd808:;
    {
        cpu->r[14] = 0x001bd80cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bd80c:;
    {
        cpu->r[0] = rd32(0x001bd814u + + 0x70u);
    }
L_001bd810:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd814:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd81cu, cpu->r[0], 0, 0);
    }
L_001bd818:;
    {
        cpu->r[14] = 0x001bd81cu; fn_001d0ac4(cpu);
    }
L_001bd81c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd820:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd824:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bd828:;
    {
        cpu->r[14] = 0x001bd830u;
    }
L_001bd82c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd830u)) return;
    }
L_001bd830:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd834:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd838:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd83c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd874;
        }
    }
L_001bd844:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd848:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd84c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd850u)) return;
    }
L_001bd850:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001bd854:;
    {
        cpu->r[1] = 0x00000036u;
    }
L_001bd858:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd85c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd860:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd864:;
    {
        cpu->r[14] = 0x001bd86cu;
    }
L_001bd868:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd86cu)) return;
    }
L_001bd86c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bd870:;
    {
        goto L_001bd830;
    }
L_001bd874:;
    {
        cpu->r[14] = 0x001bd878u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd878:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 4, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bd87c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd880:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 3u, &shc); cpu->r[3] = v;
        }
    }
L_001bd884:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 3u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser14sendGetCountryEPcS0_b @ 001bd888 (arm) */
void fn_001bd888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd888:;
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
L_001bd88c:;
    {
        cpu->r[4] = rd32(0x001bd894u + + 0xfcu);
    }
L_001bd890:;
    {
        cpu->r[7] = rd32(0x001bd898u + + 0xfcu);
    }
L_001bd894:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001bd898:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd8a0u, cpu->r[4], 0, 0);
    }
L_001bd89c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd8a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001bd8a4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd8a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd8ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bd8b0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001bd8b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd8b8:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd8bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd968;
        }
    }
L_001bd8c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd8c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bd8c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bd8cc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd8d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd8d4:;
    {
        cpu->r[14] = 0x001bd8d8u; fn_001d0700(cpu);
    }
L_001bd8d8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001bd8dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd944;
        }
    }
L_001bd8e0:;
    {
        cpu->r[1] = rd32(0x001bd8e8u + + 0xb0u);
    }
L_001bd8e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd8e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd8ec:;
    {
        cpu->r[2] = 0x00000035u;
    }
L_001bd8f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd8f8u, cpu->r[1], 0, 0);
    }
L_001bd8f4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001bd8f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_001bd8fc:;
    {
        cpu->r[14] = 0x001bd900u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd900:;
    {
        cpu->r[0] = rd32(0x001bd908u + + 0x94u);
    }
L_001bd904:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd908:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd910u, cpu->r[0], 0, 0);
    }
L_001bd90c:;
    {
        cpu->r[14] = 0x001bd910u; fn_001d0ac4(cpu);
    }
L_001bd910:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd914:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bd918:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bd91c:;
    {
        cpu->r[14] = 0x001bd924u;
    }
L_001bd920:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd924u)) return;
    }
L_001bd924:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd92c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd930:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd98c;
        }
    }
L_001bd938:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd93c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd940:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd944u)) return;
    }
L_001bd944:;
    {
        cpu->r[1] = rd32(0x001bd94cu + + 0x54u);
    }
L_001bd948:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd94c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd950:;
    {
        cpu->r[2] = 0x00000035u;
    }
L_001bd954:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd95cu, cpu->r[1], 0, 0);
    }
L_001bd958:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001bd95c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001bd960:;
    {
        cpu->r[14] = 0x001bd964u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd964:;
    {
        goto L_001bd900;
    }
L_001bd968:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bd96c:;
    {
        cpu->r[1] = 0x00000036u;
    }
L_001bd970:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd974:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd978:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd97c:;
    {
        cpu->r[14] = 0x001bd984u;
    }
L_001bd980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd984u)) return;
    }
L_001bd984:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bd988:;
    {
        goto L_001bd924;
    }
L_001bd98c:;
    {
        cpu->r[14] = 0x001bd990u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd990:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 4, (cpu->r[11] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bd994:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd998:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 2u, &shc); cpu->r[3] = v;
        }
    }
L_001bd99c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 2u, &shc); cpu->r[3] = v;
        }
    }
L_001bd9a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 1u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15sendGetGameIconEiPc @ 001bd9a4 (arm) */
void fn_001bd9a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd9a4:;
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
L_001bd9a8:;
    {
        cpu->r[5] = rd32(0x001bd9b0u + + 0x11cu);
    }
L_001bd9ac:;
    {
        cpu->r[7] = rd32(0x001bd9b4u + + 0x11cu);
    }
L_001bd9b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000910u, 1, 0);
    }
L_001bd9b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001bd9bcu, cpu->r[5], 0, 0);
    }
L_001bd9b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bd9bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bd9c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001bd9c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001bd9c8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001bd9cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bd9d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bd9d4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001bd9d8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd9dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd9e0:;
    {
        wr32(cpu->r[13] + + 0x90cu, cpu->r[3]);
    }
L_001bd9e4:;
    {
        cpu->r[14] = 0x001bd9e8u; fn_001d0700(cpu);
    }
L_001bd9e8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bd9ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bd9f0:;
    {
        cpu->r[1] = rd32(0x001bd9f8u + + 0xdcu);
    }
L_001bd9f4:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_001bd9f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd9fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bda04u, cpu->r[1], 0, 0);
    }
L_001bda00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bda04:;
    {
        cpu->r[14] = 0x001bda08u; imp_sprintf(cpu); /* sprintf */
    }
L_001bda08:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_001bda0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bda48;
        }
    }
L_001bda10:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bda14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bda18:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000cu, 0, 0);
    }
L_001bda1c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bda20:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001bda24:;
    {
        cpu->r[14] = 0x001bda28u; fn_001d0700(cpu);
    }
L_001bda28:;
    {
        cpu->r[1] = rd32(0x001bda30u + + 0xa8u);
    }
L_001bda2c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bda30:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001bda34:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bda3cu, cpu->r[1], 0, 0);
    }
L_001bda38:;
    {
        cpu->r[14] = 0x001bda3cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bda3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bda40:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001bda44:;
    {
        cpu->r[14] = 0x001bda48u; fn_001d06d4(cpu);
    }
L_001bda48:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001bda4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bda88;
        }
    }
L_001bda50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bda54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bda58:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001bda5c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bda60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bda64:;
    {
        cpu->r[14] = 0x001bda68u; fn_001d0700(cpu);
    }
L_001bda68:;
    {
        cpu->r[1] = rd32(0x001bda70u + + 0x6cu);
    }
L_001bda6c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bda70:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bda74:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bda7cu, cpu->r[1], 0, 0);
    }
L_001bda78:;
    {
        cpu->r[14] = 0x001bda7cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bda7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bda80:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bda84:;
    {
        cpu->r[14] = 0x001bda88u; fn_001d06d4(cpu);
    }
L_001bda88:;
    {
        cpu->r[0] = rd32(0x001bda90u + + 0x50u);
    }
L_001bda8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bda90:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bda98u, cpu->r[0], 0, 0);
    }
L_001bda94:;
    {
        cpu->r[14] = 0x001bda98u; fn_001d0ac4(cpu);
    }
L_001bda98:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bda9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdaa0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdaa4:;
    {
        cpu->r[14] = 0x001bdaacu;
    }
L_001bdaa8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bdaacu)) return;
    }
L_001bdaac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001bdab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90cu);
    }
L_001bdab4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bdab8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bdabc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bdac8;
        }
    }
L_001bdac0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001bdac4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bdac8u)) return;
    }
L_001bdac8:;
    {
        cpu->r[14] = 0x001bdaccu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bdacc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bdad0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bdad4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001bdad8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 32u, &shc); cpu->r[3] = v;
        }
    }
L_001bdadc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & cpu->r[8]; cpu->r[3] = v;
        }
    }
L_001bdae0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 19u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser25sendGetUserGameTrophyListEiPc @ 001bdae4 (arm) */
void fn_001bdae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bdae4:;
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
L_001bdae8:;
    {
        cpu->r[5] = rd32(0x001bdaf0u + + 0x104u);
    }
L_001bdaec:;
    {
        cpu->r[8] = rd32(0x001bdaf4u + + 0x104u);
    }
L_001bdaf0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001bdaf4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001bdafcu, cpu->r[5], 0, 0);
    }
L_001bdaf8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bdafc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001bdb00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bdb04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001bdb08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bdb0c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001bdb10:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001bdb14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdb18:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bdb1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bdb20:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdb24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bdb28:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001bdb2c:;
    {
        cpu->r[14] = 0x001bdb30u; imp_memset(cpu); /* memset */
    }
L_001bdb30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdb34:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bdb38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdb3c:;
    {
        cpu->r[14] = 0x001bdb40u; fn_001d0700(cpu);
    }
L_001bdb40:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bdb44:;
    {
        cpu->r[1] = rd32(0x001bdb4cu + + 0xb0u);
    }
L_001bdb48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdb4c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bdb50:;
    {
        cpu->r[2] = 0x00000057u;
    }
L_001bdb54:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdb5cu, cpu->r[1], 0, 0);
    }
L_001bdb58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bdb5c:;
    {
        cpu->r[14] = 0x001bdb60u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdb60:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_001bdb64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdb88;
        }
    }
L_001bdb68:;
    {
        cpu->r[1] = rd32(0x001bdb70u + + 0x90u);
    }
L_001bdb6c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001bdb70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bdb74:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdb7cu, cpu->r[1], 0, 0);
    }
L_001bdb78:;
    {
        cpu->r[14] = 0x001bdb7cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bdb7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdb80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bdb84:;
    {
        cpu->r[14] = 0x001bdb88u; fn_001d06d4(cpu);
    }
L_001bdb88:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001bdb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdbb0;
        }
    }
L_001bdb90:;
    {
        cpu->r[1] = rd32(0x001bdb98u + + 0x6cu);
    }
L_001bdb94:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bdb98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bdb9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdba4u, cpu->r[1], 0, 0);
    }
L_001bdba0:;
    {
        cpu->r[14] = 0x001bdba4u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdba4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdba8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bdbac:;
    {
        cpu->r[14] = 0x001bdbb0u; fn_001d06d4(cpu);
    }
L_001bdbb0:;
    {
        cpu->r[0] = rd32(0x001bdbb8u + + 0x50u);
    }
L_001bdbb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdbb8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bdbc0u, cpu->r[0], 0, 0);
    }
L_001bdbbc:;
    {
        cpu->r[14] = 0x001bdbc0u; fn_001d0ac4(cpu);
    }
L_001bdbc0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bdbc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdbc8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdbcc:;
    {
        cpu->r[14] = 0x001bdbd4u;
    }
L_001bdbd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bdbd4u)) return;
    }
L_001bdbd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001bdbd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001bdbdc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bdbe0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bdbe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bdbf0;
        }
    }
L_001bdbe8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000890u, 0, 0);
    }
L_001bdbec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bdbf0u)) return;
    }
L_001bdbf0:;
    {
        cpu->r[14] = 0x001bdbf4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bdbf4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001bdbf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bdbfc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 8u, &shc); cpu->r[2] = v;
        }
    }
L_001bdc00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (0x001bdc08u & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001bdc04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001bdc08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser15sendAwardTrophyEPii @ 001bdc0c (arm) */
void fn_001bdc0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bdc0c:;
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
L_001bdc10:;
    {
        cpu->r[11] = rd32(0x001bdc18u + + 0x1ccu);
    }
L_001bdc14:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bdc18:;
    {
        cpu->r[2] = rd32(0x001bdc20u + + 0x1c8u);
    }
L_001bdc1c:;
    {
        cpu->r[11] = add_flags(cpu, 0x001bdc24u, cpu->r[11], 0, 0);
    }
L_001bdc20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000930u, 1, 0);
    }
L_001bdc24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001bdc28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bdc2c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
        }
    }
L_001bdc30:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001bdc34:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bdc38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001bdc3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001bdc40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001bdc44:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001bdc48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bdc4c:;
    {
        wr32(cpu->r[13] + + 0x92cu, cpu->r[3]);
    }
L_001bdc50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bddbc;
        }
    }
L_001bdc54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001bdc58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bdc5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001bdc60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bdc64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bdc68:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bdc6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001bdc70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001bdc74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001bdc78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001bdc7c:;
    {
        cpu->r[14] = 0x001bdc80u; fn_001d0700(cpu);
    }
L_001bdc80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdc84:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bdc88:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bdc8c:;
    {
        cpu->r[14] = 0x001bdc90u; imp_memset(cpu); /* memset */
    }
L_001bdc90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001bdc94:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_001bdc98:;
    {
        wr32(cpu->r[13] + + 0x91cu, cpu->r[5]);
    }
L_001bdc9c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_001bdca0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_001bdca4:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_001bdca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdd48;
        }
    }
L_001bdcac:;
    {
        cpu->r[9] = rd32(0x001bdcb4u + + 0x138u);
    }
L_001bdcb0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 0);
    }
L_001bdcb4:;
    {
        cpu->r[3] = rd32(0x001bdcbcu + + 0x134u);
    }
L_001bdcb8:;
    {
        cpu->r[9] = add_flags(cpu, 0x001bdcc0u, cpu->r[9], 0, 0);
    }
L_001bdcbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bdcc4u, cpu->r[3], 0, 0);
    }
L_001bdcc0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001bdcc4:;
    {
        goto L_001bdcd8;
    }
L_001bdcc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bdccc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001bdcd0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001bdcd4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001bdd48;
        }
    }
L_001bdcd8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001bdcdc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdce0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdce4:;
    {
        cpu->r[14] = 0x001bdce8u; fn_001d0700(cpu);
    }
L_001bdce8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001bdcec:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001bdcf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdcf4:;
    {
        cpu->r[14] = 0x001bdcf8u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdcf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdcfc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bdd00:;
    {
        cpu->r[14] = 0x001bdd04u; fn_001d06d4(cpu);
    }
L_001bdd04:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_001bdd08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bdcc8;
        }
    }
L_001bdd0c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001bdd10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdd14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdd18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bdd1c:;
    {
        cpu->r[14] = 0x001bdd20u; fn_001d0700(cpu);
    }
L_001bdd20:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001bdd24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001bdd28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bdd2c:;
    {
        cpu->r[14] = 0x001bdd30u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdd30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdd34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bdd38:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001bdd3c:;
    {
        cpu->r[14] = 0x001bdd40u; fn_001d06d4(cpu);
    }
L_001bdd40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001bdd44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bdcd8;
        }
    }
L_001bdd48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001bdd4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001bdd50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bdd54:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001bdd58:;
    {
        cpu->r[1] = rd32(0x001bdd60u + + 0x94u);
    }
L_001bdd5c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001bdd60:;
    {
        cpu->r[2] = 0x00000055u;
    }
L_001bdd64:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdd6cu, cpu->r[1], 0, 0);
    }
L_001bdd68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bdd6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001bdd70:;
    {
        cpu->r[14] = 0x001bdd74u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdd74:;
    {
        cpu->r[0] = rd32(0x001bdd7cu + + 0x7cu);
    }
L_001bdd78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bdd7c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bdd84u, cpu->r[0], 0, 0);
    }
L_001bdd80:;
    {
        cpu->r[14] = 0x001bdd84u; fn_001d0ac4(cpu);
    }
L_001bdd84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001bdd88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bdd8c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001bdd90:;
    {
        cpu->r[14] = 0x001bdd98u;
    }
L_001bdd94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bdd98u)) return;
    }
L_001bdd98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001bdd9c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001bdda0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x92cu);
    }
L_001bdda4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bdda8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bddac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bdde0;
        }
    }
L_001bddb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_001bddb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bddb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bddbcu)) return;
    }
L_001bddbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bddc0:;
    {
        cpu->r[1] = 0x00000055u;
    }
L_001bddc4:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bddc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bddcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bddd0:;
    {
        cpu->r[14] = 0x001bddd8u;
    }
L_001bddd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bddd8u)) return;
    }
L_001bddd8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bdddc:;
    {
        goto L_001bdd98;
    }
L_001bdde0:;
    {
        cpu->r[14] = 0x001bdde4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bdde4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[4]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[13] << 32) | cpu->r[12]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bdde8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bddec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 28u, &shc); cpu->r[2] = v;
        }
    }
L_001bddf0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[10] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001bddf4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 27u, &shc); cpu->r[2] = v;
        }
    }
L_001bddf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 27u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser18sendUpdateUserInfoEPciS0_S0_S0_iS0_ @ 001bddfc (arm) */
void fn_001bddfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bddfc:;
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
L_001bde00:;
    {
        cpu->r[6] = rd32(0x001bde08u + + 0x2ccu);
    }
L_001bde04:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001bde08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000008a0u, 1, 0);
    }
L_001bde0c:;
    {
        cpu->r[2] = rd32(0x001bde14u + + 0x2c4u);
    }
L_001bde10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001bde14:;
    {
        cpu->r[6] = add_flags(cpu, 0x001bde1cu, cpu->r[6], 0, 0);
    }
L_001bde18:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001bde1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bde20:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
        }
    }
L_001bde24:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bde28:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001bde2c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001bde30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001bde34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8ccu);
    }
L_001bde38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bde3c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8c8u);
    }
L_001bde40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001bde44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8d4u);
    }
L_001bde48:;
    {
        wr32(cpu->r[13] + + 0x89cu, cpu->r[3]);
    }
L_001bde4c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001bde50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bde60;
        }
    }
L_001bde54:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001bde58:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
        }
    }
L_001bde5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be08c;
        }
    }
L_001bde60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001bde64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bde68:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bde6c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bde70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bde74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bde78:;
    {
        cpu->r[14] = 0x001bde7cu; fn_001d0700(cpu);
    }
L_001bde7c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001bde80:;
    {
        cpu->r[1] = rd32(0x001bde88u + + 0x254u);
    }
L_001bde84:;
    {
        cpu->r[2] = 0x00000052u;
    }
L_001bde88:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001bde8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001bde90:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bde98u, cpu->r[1], 0, 0);
    }
L_001bde94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bde98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bde9c:;
    {
        cpu->r[14] = 0x001bdea0u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdea4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdea8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdeac:;
    {
        cpu->r[14] = 0x001bdeb0u; imp_memset(cpu); /* memset */
    }
L_001bdeb0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001bdeb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdee8;
        }
    }
L_001bdeb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdebc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdec0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdec4:;
    {
        cpu->r[14] = 0x001bdec8u; fn_001d0700(cpu);
    }
L_001bdec8:;
    {
        cpu->r[1] = rd32(0x001bded0u + + 0x210u);
    }
L_001bdecc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bded0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bded4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdedcu, cpu->r[1], 0, 0);
    }
L_001bded8:;
    {
        cpu->r[14] = 0x001bdedcu; imp_sprintf(cpu); /* sprintf */
    }
L_001bdedc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bdee0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdee4:;
    {
        cpu->r[14] = 0x001bdee8u; fn_001d06d4(cpu);
    }
L_001bdee8:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_001bdeec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdf20;
        }
    }
L_001bdef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdef4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdef8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdefc:;
    {
        cpu->r[14] = 0x001bdf00u; fn_001d0700(cpu);
    }
L_001bdf00:;
    {
        cpu->r[1] = rd32(0x001bdf08u + + 0x1dcu);
    }
L_001bdf04:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bdf08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdf0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdf14u, cpu->r[1], 0, 0);
    }
L_001bdf10:;
    {
        cpu->r[14] = 0x001bdf14u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdf14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bdf18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdf1c:;
    {
        cpu->r[14] = 0x001bdf20u; fn_001d06d4(cpu);
    }
L_001bdf20:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001bdf24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdf58;
        }
    }
L_001bdf28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdf2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdf30:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdf34:;
    {
        cpu->r[14] = 0x001bdf38u; fn_001d0700(cpu);
    }
L_001bdf38:;
    {
        cpu->r[1] = rd32(0x001bdf40u + + 0x1a8u);
    }
L_001bdf3c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001bdf40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdf44:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdf4cu, cpu->r[1], 0, 0);
    }
L_001bdf48:;
    {
        cpu->r[14] = 0x001bdf4cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bdf4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bdf50:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdf54:;
    {
        cpu->r[14] = 0x001bdf58u; fn_001d06d4(cpu);
    }
L_001bdf58:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001bdf5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdf90;
        }
    }
L_001bdf60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdf64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdf68:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdf6c:;
    {
        cpu->r[14] = 0x001bdf70u; fn_001d0700(cpu);
    }
L_001bdf70:;
    {
        cpu->r[1] = rd32(0x001bdf78u + + 0x174u);
    }
L_001bdf74:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001bdf78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdf7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdf84u, cpu->r[1], 0, 0);
    }
L_001bdf80:;
    {
        cpu->r[14] = 0x001bdf84u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdf84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bdf88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdf8c:;
    {
        cpu->r[14] = 0x001bdf90u; fn_001d06d4(cpu);
    }
L_001bdf90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bdf94:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bdf98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bdfcc;
        }
    }
L_001bdf9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdfa0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdfa4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdfa8:;
    {
        cpu->r[14] = 0x001bdfacu; fn_001d0700(cpu);
    }
L_001bdfac:;
    {
        cpu->r[1] = rd32(0x001bdfb4u + + 0x13cu);
    }
L_001bdfb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bdfb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdfb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdfc0u, cpu->r[1], 0, 0);
    }
L_001bdfbc:;
    {
        cpu->r[14] = 0x001bdfc0u; imp_sprintf(cpu); /* sprintf */
    }
L_001bdfc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bdfc4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bdfc8:;
    {
        cpu->r[14] = 0x001bdfccu; fn_001d06d4(cpu);
    }
L_001bdfcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8d0u);
    }
L_001bdfd0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001bdfd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be008;
        }
    }
L_001bdfd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdfdc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bdfe0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bdfe4:;
    {
        cpu->r[14] = 0x001bdfe8u; fn_001d0700(cpu);
    }
L_001bdfe8:;
    {
        cpu->r[1] = rd32(0x001bdff0u + + 0x104u);
    }
L_001bdfec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8d0u);
    }
L_001bdff0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bdff4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bdffcu, cpu->r[1], 0, 0);
    }
L_001bdff8:;
    {
        cpu->r[14] = 0x001bdffcu; imp_sprintf(cpu); /* sprintf */
    }
L_001bdffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be000:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001be004:;
    {
        cpu->r[14] = 0x001be008u; fn_001d06d4(cpu);
    }
L_001be008:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001be00c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001be010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be044;
        }
    }
L_001be014:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001be018:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be01c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be020:;
    {
        cpu->r[14] = 0x001be024u; fn_001d0700(cpu);
    }
L_001be024:;
    {
        cpu->r[1] = rd32(0x001be02cu + + 0xccu);
    }
L_001be028:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001be02c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001be030:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be038u, cpu->r[1], 0, 0);
    }
L_001be034:;
    {
        cpu->r[14] = 0x001be038u; imp_sprintf(cpu); /* sprintf */
    }
L_001be038:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be03c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001be040:;
    {
        cpu->r[14] = 0x001be044u; fn_001d06d4(cpu);
    }
L_001be044:;
    {
        cpu->r[0] = rd32(0x001be04cu + + 0xb0u);
    }
L_001be048:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be04c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be054u, cpu->r[0], 0, 0);
    }
L_001be050:;
    {
        cpu->r[14] = 0x001be054u; fn_001d0ac4(cpu);
    }
L_001be054:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001be058:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be05c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001be060:;
    {
        cpu->r[14] = 0x001be068u;
    }
L_001be064:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be068u)) return;
    }
L_001be068:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001be06c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001be070:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x89cu);
    }
L_001be074:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be078:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be07c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be0d0;
        }
    }
L_001be080:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_001be084:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be088:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be08cu)) return;
    }
L_001be08c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001be090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8d0u);
    }
L_001be094:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001be098:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
        }
    }
L_001be09c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bde60;
        }
    }
L_001be0a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001be0a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001be0a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bde60;
        }
    }
L_001be0ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001be0b0:;
    {
        cpu->r[1] = 0x00000052u;
    }
L_001be0b4:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001be0b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001be0bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be0c0:;
    {
        cpu->r[14] = 0x001be0c8u;
    }
L_001be0c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be0c8u)) return;
    }
L_001be0c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001be0cc:;
    {
        goto L_001be068;
    }
L_001be0d0:;
    {
        cpu->r[14] = 0x001be0d4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be0d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[12]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[13] << 32) | cpu->r[12]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001be0d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be0dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 1u, &shc); cpu->r[2] = v;
        }
    }
L_001be0e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 24u, &shc); cpu->r[2] = v;
        }
    }
L_001be0e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 24u, &shc); cpu->r[2] = v;
        }
    }
L_001be0e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001be0ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 23u, &shc); cpu->r[2] = v;
        }
    }
L_001be0f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 23u, &shc); cpu->r[2] = v;
        }
    }
L_001be0f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[11]; cpu->r[7] = v;
        }
    }
L_001be0f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 22u, &shc); cpu->r[2] = v;
        }
    }
L_001be0fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15sendGetUserInfoEPc @ 001be100 (arm) */
void fn_001be100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be100:;
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
L_001be104:;
    {
        cpu->r[4] = rd32(0x001be10cu + + 0xe0u);
    }
L_001be108:;
    {
        cpu->r[7] = rd32(0x001be110u + + 0xe0u);
    }
L_001be10c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be110:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be118u, cpu->r[4], 0, 0);
    }
L_001be114:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be118:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be11c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be124:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be128:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001be12c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be130:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be134:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be138:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be13c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be140:;
    {
        cpu->r[14] = 0x001be144u; fn_001d0700(cpu);
    }
L_001be144:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be148:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be14c:;
    {
        cpu->r[1] = rd32(0x001be154u + + 0xa0u);
    }
L_001be150:;
    {
        cpu->r[2] = 0x00000051u;
    }
L_001be154:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be158:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be160u, cpu->r[1], 0, 0);
    }
L_001be15c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be160:;
    {
        cpu->r[14] = 0x001be164u; imp_sprintf(cpu); /* sprintf */
    }
L_001be164:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be1a4;
        }
    }
L_001be16c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be170:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be174:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be178:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be17c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be180:;
    {
        cpu->r[14] = 0x001be184u; imp_memset(cpu); /* memset */
    }
L_001be184:;
    {
        cpu->r[1] = rd32(0x001be18cu + + 0x6cu);
    }
L_001be188:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be18c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be190:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be198u, cpu->r[1], 0, 0);
    }
L_001be194:;
    {
        cpu->r[14] = 0x001be198u; imp_sprintf(cpu); /* sprintf */
    }
L_001be198:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be19c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be1a0:;
    {
        cpu->r[14] = 0x001be1a4u; fn_001d06d4(cpu);
    }
L_001be1a4:;
    {
        cpu->r[0] = rd32(0x001be1acu + + 0x50u);
    }
L_001be1a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be1ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be1b4u, cpu->r[0], 0, 0);
    }
L_001be1b0:;
    {
        cpu->r[14] = 0x001be1b4u; fn_001d0ac4(cpu);
    }
L_001be1b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be1b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be1bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be1c0:;
    {
        cpu->r[14] = 0x001be1c8u;
    }
L_001be1c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be1c8u)) return;
    }
L_001be1c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be1cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be1d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be1d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be1d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be1e8;
        }
    }
L_001be1dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be1e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be1e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be1e8u)) return;
    }
L_001be1e8:;
    {
        cpu->r[14] = 0x001be1ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be1ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 2, 6u, &shc); cpu->r[12] = v;
        }
    }
L_001be1f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be1f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 28u, &shc); cpu->r[1] = v;
        }
    }
L_001be1f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be1fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[10] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser17sendGetUserAvatarEPc @ 001be200 (arm) */
void fn_001be200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be200:;
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
L_001be204:;
    {
        cpu->r[4] = rd32(0x001be20cu + + 0xe0u);
    }
L_001be208:;
    {
        cpu->r[7] = rd32(0x001be210u + + 0xe0u);
    }
L_001be20c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be210:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be218u, cpu->r[4], 0, 0);
    }
L_001be214:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be218:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be21c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be220:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be224:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be228:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001be22c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be230:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be234:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be238:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be23c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be240:;
    {
        cpu->r[14] = 0x001be244u; fn_001d0700(cpu);
    }
L_001be244:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be248:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be24c:;
    {
        cpu->r[1] = rd32(0x001be254u + + 0xa0u);
    }
L_001be250:;
    {
        cpu->r[2] = 0x00000046u;
    }
L_001be254:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be258:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be260u, cpu->r[1], 0, 0);
    }
L_001be25c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be260:;
    {
        cpu->r[14] = 0x001be264u; imp_sprintf(cpu); /* sprintf */
    }
L_001be264:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be2a4;
        }
    }
L_001be26c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be270:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be274:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be278:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be27c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be280:;
    {
        cpu->r[14] = 0x001be284u; imp_memset(cpu); /* memset */
    }
L_001be284:;
    {
        cpu->r[1] = rd32(0x001be28cu + + 0x6cu);
    }
L_001be288:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be28c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be290:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be298u, cpu->r[1], 0, 0);
    }
L_001be294:;
    {
        cpu->r[14] = 0x001be298u; imp_sprintf(cpu); /* sprintf */
    }
L_001be298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be29c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be2a0:;
    {
        cpu->r[14] = 0x001be2a4u; fn_001d06d4(cpu);
    }
L_001be2a4:;
    {
        cpu->r[0] = rd32(0x001be2acu + + 0x50u);
    }
L_001be2a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be2ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be2b4u, cpu->r[0], 0, 0);
    }
L_001be2b0:;
    {
        cpu->r[14] = 0x001be2b4u; fn_001d0ac4(cpu);
    }
L_001be2b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be2b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be2bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be2c0:;
    {
        cpu->r[14] = 0x001be2c8u;
    }
L_001be2c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be2c8u)) return;
    }
L_001be2c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be2cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be2d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be2d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be2d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be2e8;
        }
    }
L_001be2dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be2e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be2e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be2e8u)) return;
    }
L_001be2e8:;
    {
        cpu->r[14] = 0x001be2ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be2ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 2, 4u, &shc); cpu->r[12] = v;
        }
    }
L_001be2f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be2f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[1] = (uint32_t)v;
        cpu->r[2] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be2f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[9]; cpu->r[7] = v;
        }
    }
L_001be2fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr16(cpu->r[7], cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser20sendGetUserBestScoreEPc @ 001be300 (arm) */
void fn_001be300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be300:;
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
L_001be304:;
    {
        cpu->r[4] = rd32(0x001be30cu + + 0xe0u);
    }
L_001be308:;
    {
        cpu->r[7] = rd32(0x001be310u + + 0xe0u);
    }
L_001be30c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be310:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be318u, cpu->r[4], 0, 0);
    }
L_001be314:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be318:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be31c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be324:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be328:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001be32c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be330:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be334:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be338:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be33c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be340:;
    {
        cpu->r[14] = 0x001be344u; fn_001d0700(cpu);
    }
L_001be344:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be348:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be34c:;
    {
        cpu->r[1] = rd32(0x001be354u + + 0xa0u);
    }
L_001be350:;
    {
        cpu->r[2] = 0x00000045u;
    }
L_001be354:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be358:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be360u, cpu->r[1], 0, 0);
    }
L_001be35c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be360:;
    {
        cpu->r[14] = 0x001be364u; imp_sprintf(cpu); /* sprintf */
    }
L_001be364:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be3a4;
        }
    }
L_001be36c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be370:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be374:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be378:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be37c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be380:;
    {
        cpu->r[14] = 0x001be384u; imp_memset(cpu); /* memset */
    }
L_001be384:;
    {
        cpu->r[1] = rd32(0x001be38cu + + 0x6cu);
    }
L_001be388:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be38c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be390:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be398u, cpu->r[1], 0, 0);
    }
L_001be394:;
    {
        cpu->r[14] = 0x001be398u; imp_sprintf(cpu); /* sprintf */
    }
L_001be398:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be39c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be3a0:;
    {
        cpu->r[14] = 0x001be3a4u; fn_001d06d4(cpu);
    }
L_001be3a4:;
    {
        cpu->r[0] = rd32(0x001be3acu + + 0x50u);
    }
L_001be3a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be3ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be3b4u, cpu->r[0], 0, 0);
    }
L_001be3b0:;
    {
        cpu->r[14] = 0x001be3b4u; fn_001d0ac4(cpu);
    }
L_001be3b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be3b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be3bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be3c0:;
    {
        cpu->r[14] = 0x001be3c8u;
    }
L_001be3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be3c8u)) return;
    }
L_001be3c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be3cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be3d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be3d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be3d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be3e8;
        }
    }
L_001be3dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be3e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be3e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be3e8u)) return;
    }
L_001be3e8:;
    {
        cpu->r[14] = 0x001be3ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be3ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
        }
    }
L_001be3f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be3f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 24u, &shc); cpu->r[1] = v;
        }
    }
L_001be3f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be3fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, 17u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser17sendGetReputationEPc @ 001be400 (arm) */
void fn_001be400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be400:;
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
L_001be404:;
    {
        cpu->r[4] = rd32(0x001be40cu + + 0xe0u);
    }
L_001be408:;
    {
        cpu->r[7] = rd32(0x001be410u + + 0xe0u);
    }
L_001be40c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be410:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be418u, cpu->r[4], 0, 0);
    }
L_001be414:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be418:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be41c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be424:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be428:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001be42c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be430:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be434:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be438:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be43c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be440:;
    {
        cpu->r[14] = 0x001be444u; fn_001d0700(cpu);
    }
L_001be444:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be448:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be44c:;
    {
        cpu->r[1] = rd32(0x001be454u + + 0xa0u);
    }
L_001be450:;
    {
        cpu->r[2] = 0x00000043u;
    }
L_001be454:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be458:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be460u, cpu->r[1], 0, 0);
    }
L_001be45c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be460:;
    {
        cpu->r[14] = 0x001be464u; imp_sprintf(cpu); /* sprintf */
    }
L_001be464:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be4a4;
        }
    }
L_001be46c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be470:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be474:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be478:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be47c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be480:;
    {
        cpu->r[14] = 0x001be484u; imp_memset(cpu); /* memset */
    }
L_001be484:;
    {
        cpu->r[1] = rd32(0x001be48cu + + 0x6cu);
    }
L_001be488:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be48c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be490:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be498u, cpu->r[1], 0, 0);
    }
L_001be494:;
    {
        cpu->r[14] = 0x001be498u; imp_sprintf(cpu); /* sprintf */
    }
L_001be498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be49c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be4a0:;
    {
        cpu->r[14] = 0x001be4a4u; fn_001d06d4(cpu);
    }
L_001be4a4:;
    {
        cpu->r[0] = rd32(0x001be4acu + + 0x50u);
    }
L_001be4a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be4ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be4b4u, cpu->r[0], 0, 0);
    }
L_001be4b0:;
    {
        cpu->r[14] = 0x001be4b4u; fn_001d0ac4(cpu);
    }
L_001be4b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be4b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be4bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be4c0:;
    {
        cpu->r[14] = 0x001be4c8u;
    }
L_001be4c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be4c8u)) return;
    }
L_001be4c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be4cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be4d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be4d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be4d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be4e8;
        }
    }
L_001be4dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be4e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be4e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be4e8u)) return;
    }
L_001be4e8:;
    {
        cpu->r[14] = 0x001be4ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be4ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & cpu->r[0]; cpu->r[12] = v;
        }
    }
L_001be4f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be4f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 22u, &shc); cpu->r[1] = v;
        }
    }
L_001be4f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be4fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser20sendGetUserStoreDataEPcS0_ @ 001be500 (arm) */
void fn_001be500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be500:;
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
L_001be504:;
    {
        cpu->r[4] = rd32(0x001be50cu + + 0x110u);
    }
L_001be508:;
    {
        cpu->r[7] = rd32(0x001be510u + + 0x110u);
    }
L_001be50c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be510:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be518u, cpu->r[4], 0, 0);
    }
L_001be514:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be518:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001be51c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be520:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be524:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001be528:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be52c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be5f4;
        }
    }
L_001be534:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be538:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be53c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be540:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be544:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be548:;
    {
        cpu->r[14] = 0x001be54cu; fn_001d0700(cpu);
    }
L_001be54c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be550:;
    {
        cpu->r[1] = rd32(0x001be558u + + 0xccu);
    }
L_001be554:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be558:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be55c:;
    {
        cpu->r[2] = 0x00000041u;
    }
L_001be560:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be568u, cpu->r[1], 0, 0);
    }
L_001be564:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001be568:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be56c:;
    {
        cpu->r[14] = 0x001be570u; imp_sprintf(cpu); /* sprintf */
    }
L_001be570:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be5b0;
        }
    }
L_001be578:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be57c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be580:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be584:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be588:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be58c:;
    {
        cpu->r[14] = 0x001be590u; imp_memset(cpu); /* memset */
    }
L_001be590:;
    {
        cpu->r[1] = rd32(0x001be598u + + 0x90u);
    }
L_001be594:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be598:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be59c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be5a4u, cpu->r[1], 0, 0);
    }
L_001be5a0:;
    {
        cpu->r[14] = 0x001be5a4u; imp_sprintf(cpu); /* sprintf */
    }
L_001be5a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be5a8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be5ac:;
    {
        cpu->r[14] = 0x001be5b0u; fn_001d06d4(cpu);
    }
L_001be5b0:;
    {
        cpu->r[0] = rd32(0x001be5b8u + + 0x74u);
    }
L_001be5b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be5b8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be5c0u, cpu->r[0], 0, 0);
    }
L_001be5bc:;
    {
        cpu->r[14] = 0x001be5c0u; fn_001d0ac4(cpu);
    }
L_001be5c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be5c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be5c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be5cc:;
    {
        cpu->r[14] = 0x001be5d4u;
    }
L_001be5d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be5d4u)) return;
    }
L_001be5d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be5d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be5dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be5e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be5e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be618;
        }
    }
L_001be5e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be5ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be5f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be5f4u)) return;
    }
L_001be5f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001be5f8:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_001be5fc:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001be600:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001be604:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be608:;
    {
        cpu->r[14] = 0x001be610u;
    }
L_001be60c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be610u)) return;
    }
L_001be610:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be614:;
    {
        goto L_001be5d4;
    }
L_001be618:;
    {
        cpu->r[14] = 0x001be61cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be61c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 2, 30u, &shc); cpu->r[11] = v;
        }
    }
L_001be620:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be624:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 14u, &shc); cpu->r[2] = v;
        }
    }
L_001be628:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be62c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser16sendGetUserStateEPc @ 001be630 (arm) */
void fn_001be630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be630:;
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
L_001be634:;
    {
        cpu->r[4] = rd32(0x001be63cu + + 0xe0u);
    }
L_001be638:;
    {
        cpu->r[7] = rd32(0x001be640u + + 0xe0u);
    }
L_001be63c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be640:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be648u, cpu->r[4], 0, 0);
    }
L_001be644:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be648:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001be64c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be654:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001be658:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001be65c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be660:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be664:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be668:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be66c:;
    {
        wr32(cpu->r[13] + + 0x88cu, cpu->r[3]);
    }
L_001be670:;
    {
        cpu->r[14] = 0x001be674u; fn_001d0700(cpu);
    }
L_001be674:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001be678:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be67c:;
    {
        cpu->r[1] = rd32(0x001be684u + + 0xa0u);
    }
L_001be680:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001be684:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be688:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be690u, cpu->r[1], 0, 0);
    }
L_001be68c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be690:;
    {
        cpu->r[14] = 0x001be694u; imp_sprintf(cpu); /* sprintf */
    }
L_001be694:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001be698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be6d4;
        }
    }
L_001be69c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be6a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001be6a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001be6a8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be6ac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be6b0:;
    {
        cpu->r[14] = 0x001be6b4u; imp_memset(cpu); /* memset */
    }
L_001be6b4:;
    {
        cpu->r[1] = rd32(0x001be6bcu + + 0x6cu);
    }
L_001be6b8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001be6bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001be6c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be6c8u, cpu->r[1], 0, 0);
    }
L_001be6c4:;
    {
        cpu->r[14] = 0x001be6c8u; imp_sprintf(cpu); /* sprintf */
    }
L_001be6c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be6cc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001be6d0:;
    {
        cpu->r[14] = 0x001be6d4u; fn_001d06d4(cpu);
    }
L_001be6d4:;
    {
        cpu->r[0] = rd32(0x001be6dcu + + 0x50u);
    }
L_001be6d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be6dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be6e4u, cpu->r[0], 0, 0);
    }
L_001be6e0:;
    {
        cpu->r[14] = 0x001be6e4u; fn_001d0ac4(cpu);
    }
L_001be6e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be6e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be6ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001be6f0:;
    {
        cpu->r[14] = 0x001be6f8u;
    }
L_001be6f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be6f8u)) return;
    }
L_001be6f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be6fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88cu);
    }
L_001be700:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be718;
        }
    }
L_001be70c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001be710:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be714:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be718u)) return;
    }
L_001be718:;
    {
        cpu->r[14] = 0x001be71cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be71c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[8]);
        cpu->r[11] = (uint32_t)v;
        cpu->r[12] = (uint32_t)(v >> 32);
        cpu->r[8] = wb_tmp;
        }
    }
L_001be720:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be724:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[2] << 32) | cpu->r[1]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be728:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 7u, &shc); cpu->r[2] = v;
        }
    }
L_001be72c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 12u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser19sendGetUserGameListEPcii @ 001be730 (arm) */
void fn_001be730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be730:;
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
L_001be734:;
    {
        cpu->r[4] = rd32(0x001be73cu + + 0x120u);
    }
L_001be738:;
    {
        cpu->r[7] = rd32(0x001be740u + + 0x120u);
    }
L_001be73c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001be740:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be748u, cpu->r[4], 0, 0);
    }
L_001be744:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[9] = v;
    }
L_001be748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000890u, 1, 0);
    }
L_001be74c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001be750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be754:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001be758:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[10], 3, 31u, &shc); cpu->r[9] = v;
        set_nz(cpu, v);
    }
L_001be75c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001be760:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001be764:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be768:;
    {
        wr32(cpu->r[13] + + 0x894u, cpu->r[3]);
    }
L_001be76c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be834;
        }
    }
L_001be770:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001be774:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001be778:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001be77c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be780:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be784:;
    {
        cpu->r[14] = 0x001be788u; fn_001d0700(cpu);
    }
L_001be788:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001be78c:;
    {
        cpu->r[1] = rd32(0x001be794u + + 0xd0u);
    }
L_001be790:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be794:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001be798:;
    {
        cpu->r[2] = 0x0000003fu;
    }
L_001be79c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be7a4u, cpu->r[1], 0, 0);
    }
L_001be7a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001be7a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001be7a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001be7ac:;
    {
        cpu->r[14] = 0x001be7b0u; imp_sprintf(cpu); /* sprintf */
    }
L_001be7b0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001be7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be7f0;
        }
    }
L_001be7b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001be7bc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001be7c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001be7c4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be7c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001be7cc:;
    {
        cpu->r[14] = 0x001be7d0u; imp_memset(cpu); /* memset */
    }
L_001be7d0:;
    {
        cpu->r[1] = rd32(0x001be7d8u + + 0x90u);
    }
L_001be7d4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001be7d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001be7dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be7e4u, cpu->r[1], 0, 0);
    }
L_001be7e0:;
    {
        cpu->r[14] = 0x001be7e4u; imp_sprintf(cpu); /* sprintf */
    }
L_001be7e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be7e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001be7ec:;
    {
        cpu->r[14] = 0x001be7f0u; fn_001d06d4(cpu);
    }
L_001be7f0:;
    {
        cpu->r[0] = rd32(0x001be7f8u + + 0x74u);
    }
L_001be7f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001be7f8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be800u, cpu->r[0], 0, 0);
    }
L_001be7fc:;
    {
        cpu->r[14] = 0x001be800u; fn_001d0ac4(cpu);
    }
L_001be800:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001be804:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001be808:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001be80c:;
    {
        cpu->r[14] = 0x001be814u;
    }
L_001be810:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be814u)) return;
    }
L_001be814:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001be818:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x894u);
    }
L_001be81c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be820:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be858;
        }
    }
L_001be828:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001be82c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be830:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be834u)) return;
    }
L_001be834:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001be838:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001be83c:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001be840:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001be844:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be848:;
    {
        cpu->r[14] = 0x001be850u;
    }
L_001be84c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be850u)) return;
    }
L_001be850:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001be854:;
    {
        goto L_001be814;
    }
L_001be858:;
    {
        cpu->r[14] = 0x001be85cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be85c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[8]);
        cpu->r[11] = (uint32_t)v;
        cpu->r[12] = (uint32_t)(v >> 32);
        cpu->r[8] = wb_tmp;
        }
    }
L_001be860:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be864:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 11u, &shc); cpu->r[2] = v;
        }
    }
L_001be868:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr16(cpu->r[7], cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001be86c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 11u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUser12sendRegisterEPcS0_S0_S0_bbS0_ @ 001be870 (arm) */
void fn_001be870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001be870:;
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
L_001be874:;
    {
        cpu->r[4] = rd32(0x001be87cu + + 0x174u);
    }
L_001be878:;
    {
        cpu->r[5] = rd32(0x001be880u + + 0x174u);
    }
L_001be87c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000830u, 1, 0);
    }
L_001be880:;
    {
        cpu->r[4] = add_flags(cpu, 0x001be888u, cpu->r[4], 0, 0);
    }
L_001be884:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001be888:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001be88c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001be890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001be894:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001be898:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001be89c:;
    {
        cpu->r[14] = rd8(cpu->r[13] + + 0x860u);
    }
L_001be8a0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001be8a4:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x85cu);
    }
L_001be8a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001be8ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be8b0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x858u);
    }
L_001be8b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x864u);
    }
L_001be8b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_001be8bc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_001be8c0:;
    {
        wr32(cpu->r[13] + + 0x82cu, cpu->r[3]);
    }
L_001be8c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be8e0;
        }
    }
L_001be8c8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001be8cc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
        }
    }
L_001be8d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001be8d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001be8d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001be8dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be920;
        }
    }
L_001be8e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001be8e4:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001be8e8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001be8ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001be8f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be8f4:;
    {
        cpu->r[14] = 0x001be8fcu;
    }
L_001be8f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be8fcu)) return;
    }
L_001be8fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001be900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001be904:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x82cu);
    }
L_001be908:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001be90c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001be910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001be9ec;
        }
    }
L_001be914:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001be918:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001be91c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001be920u)) return;
    }
L_001be920:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001be924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001be928:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_001be92c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001be930:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001be934:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001be938:;
    {
        cpu->r[14] = 0x001be93cu; fn_001d0700(cpu);
    }
L_001be93c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_001be940:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001be944:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001be948:;
    {
        cpu->r[1] = rd32(0x001be950u + + 0xa8u);
    }
L_001be94c:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001be950:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001be954:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001be958:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be960u, cpu->r[1], 0, 0);
    }
L_001be95c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_001be960:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001be964:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_001be968:;
    {
        cpu->r[14] = 0x001be96cu; imp_sprintf(cpu); /* sprintf */
    }
L_001be96c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001be970:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001be974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be9c4;
        }
    }
L_001be978:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001be97c:;
    {
        cpu->r[14] = 0x001be980u; imp__Znaj(cpu); /* _Znaj */
    }
L_001be980:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001be984:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001be988:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001be98c:;
    {
        cpu->r[14] = 0x001be990u; fn_001d0700(cpu);
    }
L_001be990:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001be994:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001be998:;
    {
        cpu->r[1] = rd32(0x001be9a0u + + 0x5cu);
    }
L_001be99c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001be9a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001be9a8u, cpu->r[1], 0, 0);
    }
L_001be9a4:;
    {
        cpu->r[14] = 0x001be9a8u; imp_sprintf(cpu); /* sprintf */
    }
L_001be9a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001be9ac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001be9b0:;
    {
        cpu->r[14] = 0x001be9b4u; fn_001d06d4(cpu);
    }
L_001be9b4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001be9b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001be9c4;
        }
    }
L_001be9bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001be9c0:;
    {
        cpu->r[14] = 0x001be9c4u; fn_0018ba20(cpu);
    }
L_001be9c4:;
    {
        cpu->r[0] = rd32(0x001be9ccu + + 0x34u);
    }
L_001be9c8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001be9cc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001be9d4u, cpu->r[0], 0, 0);
    }
L_001be9d0:;
    {
        cpu->r[14] = 0x001be9d4u; fn_001d0ac4(cpu);
    }
L_001be9d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001be9d8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001be9dc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001be9e0:;
    {
        cpu->r[14] = 0x001be9e8u;
    }
L_001be9e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001be9e8u)) return;
    }
L_001be9e8:;
    {
        goto L_001be900;
    }
L_001be9ec:;
    {
        cpu->r[14] = 0x001be9f0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001be9f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[8] = v;
        }
    }
L_001be9f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001be9f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 8u, &shc); cpu->r[2] = v;
        }
    }
L_001be9fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001bea00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 8u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN13GLXPlayerUserC1Ev @ 001bea08 (arm) */
void fn_001bea08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bea08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bea0c:;
    {
        cpu->r[6] = rd32(0x001bea14u + + 0x114u);
    }
L_001bea10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bea14:;
    {
        cpu->r[14] = 0x001bea18u; fn_001b7954(cpu);
    }
L_001bea18:;
    {
        cpu->r[3] = rd32(0x001bea20u + + 0x10cu);
    }
L_001bea1c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001bea24u, cpu->r[6], 0, 0);
    }
L_001bea20:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bea24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bea28:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_001bea2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001bea30:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_001bea34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001bea38:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_001bea3c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001bea40:;
    {
        cpu->r[14] = 0x001bea44u; fn_001b6ba4(cpu);
    }
L_001bea44:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001bea48:;
    {
        cpu->r[14] = 0x001bea4cu; fn_0018ba6c(cpu);
    }
L_001bea4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001bea50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001bea54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001bea58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bea5c:;
    {
        cpu->r[14] = 0x001bea60u; fn_001b3dec(cpu);
    }
L_001bea60:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001bea68u + + 0xb8u);
    }
L_001bea64:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001bea68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000d4u, 0, 0);
    }
L_001bea6c:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[3]);
    }
L_001bea70:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001bea74:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bea78:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x98u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001bea7c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001bea80:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_001bea84:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001bea88:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001bea8c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001bea90:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001bea94:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001bea98:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001bea9c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001beaa0:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001beaa4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001beaa8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_001beaac:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001beab0:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_001beab4:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001beab8:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001beabc:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_001beac0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001beac4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001beac8:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001beacc:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001bead0:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001bead4:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001bead8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001beadc:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001beae0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001beae4:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_001beae8:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[5]);
    }
L_001beaec:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[5]);
    }
L_001beaf0:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[5]);
    }
L_001beaf4:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001beaf8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001beafc:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001beb00:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001beb04:;
    {
        cpu->r[14] = 0x001beb08u; fn_001d0700(cpu);
    }
L_001beb08:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001beb0c:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_001beb10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001beb14:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001beb18:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001beb1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001beb20u)) return;
    }
}

/* _ZN13GLXPlayerUserC2Ev @ 001beb30 (arm) */
void fn_001beb30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001beb30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001beb34:;
    {
        cpu->r[6] = rd32(0x001beb3cu + + 0x114u);
    }
L_001beb38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001beb3c:;
    {
        cpu->r[14] = 0x001beb40u; fn_001b7954(cpu);
    }
L_001beb40:;
    {
        cpu->r[3] = rd32(0x001beb48u + + 0x10cu);
    }
L_001beb44:;
    {
        cpu->r[6] = add_flags(cpu, 0x001beb4cu, cpu->r[6], 0, 0);
    }
L_001beb48:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001beb4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001beb50:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_001beb54:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001beb58:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_001beb5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001beb60:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_001beb64:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001beb68:;
    {
        cpu->r[14] = 0x001beb6cu; fn_001b6ba4(cpu);
    }
L_001beb6c:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001beb70:;
    {
        cpu->r[14] = 0x001beb74u; fn_0018ba6c(cpu);
    }
L_001beb74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001beb78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001beb7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001beb80:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001beb84:;
    {
        cpu->r[14] = 0x001beb88u; fn_001b3dec(cpu);
    }
L_001beb88:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001beb90u + + 0xb8u);
    }
L_001beb8c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001beb90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000d4u, 0, 0);
    }
L_001beb94:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[3]);
    }
L_001beb98:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001beb9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001beba0:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x98u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001beba4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001beba8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_001bebac:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001bebb0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001bebb4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001bebb8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001bebbc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001bebc0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001bebc4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001bebc8:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001bebcc:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001bebd0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_001bebd4:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001bebd8:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_001bebdc:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001bebe0:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001bebe4:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_001bebe8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001bebec:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001bebf0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001bebf4:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001bebf8:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001bebfc:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001bec00:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001bec04:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001bec08:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001bec0c:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_001bec10:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[5]);
    }
L_001bec14:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[5]);
    }
L_001bec18:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[5]);
    }
L_001bec1c:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001bec20:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001bec24:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001bec28:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001bec2c:;
    {
        cpu->r[14] = 0x001bec30u; fn_001d0700(cpu);
    }
L_001bec30:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001bec34:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_001bec38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bec3c:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001bec40:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001bec44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bec48u)) return;
    }
}

/* _ZNSt6vectorI4itemSaIS0_EED1Ev @ 001bec58 (arm) */
void fn_001bec58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bec58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bec5c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bec60:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001bec64:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bec68:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001bec6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001beddc;
        }
    }
L_001bec70:;
    {
        goto L_001bee24;
    }
L_001bec74:;
    {
        cpu->r[14] = 0x001bec78u; fn_002082a8(cpu);
    }
L_001bec78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001bec7c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bec80:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bec84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beca4;
        }
    }
L_001bec88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bec8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beca4;
        }
    }
L_001bec90:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bec94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bec98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bec9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee6c;
        }
    }
L_001beca0:;
    {
        cpu->r[14] = 0x001beca4u; fn_002082a8(cpu);
    }
L_001beca4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001beca8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001becac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001becb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001becd0;
        }
    }
L_001becb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001becb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001becd0;
        }
    }
L_001becbc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001becc0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001becc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001becc8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee74;
        }
    }
L_001beccc:;
    {
        cpu->r[14] = 0x001becd0u; fn_002082a8(cpu);
    }
L_001becd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001becd4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001becd8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001becdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001becfc;
        }
    }
L_001bece0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bece4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001becfc;
        }
    }
L_001bece8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001becec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001becf0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001becf4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee7c;
        }
    }
L_001becf8:;
    {
        cpu->r[14] = 0x001becfcu; fn_002082a8(cpu);
    }
L_001becfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001bed00:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bed04:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bed08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed28;
        }
    }
L_001bed0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bed10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed28;
        }
    }
L_001bed14:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bed18:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bed1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bed20:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee84;
        }
    }
L_001bed24:;
    {
        cpu->r[14] = 0x001bed28u; fn_002082a8(cpu);
    }
L_001bed28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001bed2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bed30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bed34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed54;
        }
    }
L_001bed38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bed3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed54;
        }
    }
L_001bed40:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bed44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bed48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bed4c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee8c;
        }
    }
L_001bed50:;
    {
        cpu->r[14] = 0x001bed54u; fn_002082a8(cpu);
    }
L_001bed54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001bed58:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bed5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bed60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed80;
        }
    }
L_001bed64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bed68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bed80;
        }
    }
L_001bed6c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bed70:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bed74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bed78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee94;
        }
    }
L_001bed7c:;
    {
        cpu->r[14] = 0x001bed80u; fn_002082a8(cpu);
    }
L_001bed80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001bed84:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bed88:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bed8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bedac;
        }
    }
L_001bed90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bed94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bedac;
        }
    }
L_001bed98:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bed9c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001beda0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001beda4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee10;
        }
    }
L_001beda8:;
    {
        cpu->r[14] = 0x001bedacu; fn_002082a8(cpu);
    }
L_001bedac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001bedb0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001bedb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bedd4;
        }
    }
L_001bedb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bedbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bedd4;
        }
    }
L_001bedc0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001bedc4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bedc8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bedcc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee18;
        }
    }
L_001bedd0:;
    {
        cpu->r[14] = 0x001bedd4u; fn_002082a8(cpu);
    }
L_001bedd4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001bedd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bee24;
        }
    }
L_001beddc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000d8u, 1, 0);
    }
L_001bede0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001bede4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bede8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bedec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bec78;
        }
    }
L_001bedf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bedf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bec78;
        }
    }
L_001bedf8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bedfc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bee00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bee04:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001bec74;
        }
    }
L_001bee08:;
    {
        cpu->r[14] = 0x001bee0cu; fn_0018ba20(cpu);
    }
L_001bee0c:;
    {
        goto L_001bec78;
    }
L_001bee10:;
    {
        cpu->r[14] = 0x001bee14u; fn_0018ba20(cpu);
    }
L_001bee14:;
    {
        goto L_001bedac;
    }
L_001bee18:;
    {
        cpu->r[14] = 0x001bee1cu; fn_0018ba20(cpu);
    }
L_001bee1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001bee20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001beddc;
        }
    }
L_001bee24:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001bee28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bee2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bee64;
        }
    }
L_001bee30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bee34:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001bee38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001bee3c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001bee40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001bee44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001bee48:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001bee4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001bee50:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001bee54:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001bee58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bee5c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bee9c;
        }
    }
L_001bee60:;
    {
        cpu->r[14] = 0x001bee64u; fn_002082a8(cpu);
    }
L_001bee64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bee68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bee6cu)) return;
    }
L_001bee6c:;
    {
        cpu->r[14] = 0x001bee70u; fn_0018ba20(cpu);
    }
L_001bee70:;
    {
        goto L_001beca4;
    }
L_001bee74:;
    {
        cpu->r[14] = 0x001bee78u; fn_0018ba20(cpu);
    }
L_001bee78:;
    {
        goto L_001becd0;
    }
L_001bee7c:;
    {
        cpu->r[14] = 0x001bee80u; fn_0018ba20(cpu);
    }
L_001bee80:;
    {
        goto L_001becfc;
    }
L_001bee84:;
    {
        cpu->r[14] = 0x001bee88u; fn_0018ba20(cpu);
    }
L_001bee88:;
    {
        goto L_001bed28;
    }
L_001bee8c:;
    {
        cpu->r[14] = 0x001bee90u; fn_0018ba20(cpu);
    }
L_001bee90:;
    {
        goto L_001bed54;
    }
L_001bee94:;
    {
        cpu->r[14] = 0x001bee98u; fn_0018ba20(cpu);
    }
L_001bee98:;
    {
        goto L_001bed80;
    }
L_001bee9c:;
    {
        cpu->r[14] = 0x001beea0u; fn_0018ba20(cpu);
    }
L_001beea0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001beea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001beea8u)) return;
    }
}

/* _ZN3rssD1Ev @ 001beea8 (arm) */
void fn_001beea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001beea8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001beeac:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_001beeb0:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001beeb4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001beeb8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001beebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bef24;
        }
    }
L_001beec0:;
    {
        goto L_001bef74;
    }
L_001beec4:;
    {
        cpu->r[14] = 0x001beec8u; fn_002082a8(cpu);
    }
L_001beec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001beecc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001beed0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001beed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beef4;
        }
    }
L_001beed8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001beedc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beef4;
        }
    }
L_001beee0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001beee4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001beee8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001beeec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bef60;
        }
    }
L_001beef0:;
    {
        cpu->r[14] = 0x001beef4u; fn_002082a8(cpu);
    }
L_001beef4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001beef8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001beefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bef1c;
        }
    }
L_001bef00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bef04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bef1c;
        }
    }
L_001bef08:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001bef0c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bef10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bef14:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001bef68;
        }
    }
L_001bef18:;
    {
        cpu->r[14] = 0x001bef1cu; fn_002082a8(cpu);
    }
L_001bef1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001bef20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bef74;
        }
    }
L_001bef24:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000054u, 1, 0);
    }
L_001bef28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001bef2c:;
    {
        cpu->r[14] = 0x001bef30u; fn_001bec58(cpu);
    }
L_001bef30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001bef34:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001bef38:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001bef3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beec8;
        }
    }
L_001bef40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bef44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001beec8;
        }
    }
L_001bef48:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001bef4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bef50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001bef54:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001beec4;
        }
    }
L_001bef58:;
    {
        cpu->r[14] = 0x001bef5cu; fn_0018ba20(cpu);
    }
L_001bef5c:;
    {
        goto L_001beec8;
    }
L_001bef60:;
    {
        cpu->r[14] = 0x001bef64u; fn_0018ba20(cpu);
    }
L_001bef64:;
    {
        goto L_001beef4;
    }
L_001bef68:;
    {
        cpu->r[14] = 0x001bef6cu; fn_0018ba20(cpu);
    }
L_001bef6c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001bef70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bef24;
        }
    }
L_001bef74:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001bef78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bef7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001befac;
        }
    }
L_001bef80:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bef84:;
    {
        cpu->r[3] = 0x0000cf3du;
    }
L_001bef88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3cf3u << 16);
    }
L_001bef8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001bef90:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001bef94:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_001bef98:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_001bef9c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001befa0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001befa4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001befb4;
        }
    }
L_001befa8:;
    {
        cpu->r[14] = 0x001befacu; fn_002082a8(cpu);
    }
L_001befac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001befb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001befb4u)) return;
    }
L_001befb4:;
    {
        cpu->r[14] = 0x001befb8u; fn_0018ba20(cpu);
    }
L_001befb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001befbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001befc0u)) return;
    }
}

/* _ZN13GLXPlayerUserD1Ev @ 001befc0 (arm) */
void fn_001befc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001befc0:;
    {
        cpu->r[3] = rd32(0x001befc8u + + 0x154u);
    }
L_001befc4:;
    {
        cpu->r[2] = rd32(0x001befccu + + 0x154u);
    }
L_001befc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001befd0u, cpu->r[3], 0, 0);
    }
L_001befcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001befd0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001befd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001befd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001befdc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001befe0:;
    {
        cpu->r[14] = 0x001befe4u; fn_001bac08(cpu);
    }
L_001befe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001befe8:;
    {
        cpu->r[14] = 0x001befecu; fn_001baba4(cpu);
    }
L_001befec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001beff0:;
    {
        cpu->r[14] = 0x001beff4u; fn_001baadc(cpu);
    }
L_001beff4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001beff8:;
    {
        cpu->r[14] = 0x001beffcu; fn_001ba9f0(cpu);
    }
L_001beffc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001bf000:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf014;
        }
    }
L_001bf008:;
    {
        cpu->r[14] = 0x001bf00cu; fn_0018ba60(cpu);
    }
L_001bf00c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf010:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001bf014:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001bf018:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf01c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf02c;
        }
    }
L_001bf020:;
    {
        cpu->r[14] = 0x001bf024u; fn_0018ba60(cpu);
    }
L_001bf024:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf028:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_001bf02c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc0u);
    }
L_001bf030:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf044;
        }
    }
L_001bf038:;
    {
        cpu->r[14] = 0x001bf03cu; fn_0018ba60(cpu);
    }
L_001bf03c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf040:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bf044:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001bf048:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf05c;
        }
    }
L_001bf050:;
    {
        cpu->r[14] = 0x001bf054u; fn_0018ba60(cpu);
    }
L_001bf054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf058:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001bf05c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001bf060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf074;
        }
    }
L_001bf068:;
    {
        cpu->r[14] = 0x001bf06cu; fn_0018ba60(cpu);
    }
L_001bf06c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf070:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001bf074:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf078:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf07c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf08c;
        }
    }
L_001bf080:;
    {
        cpu->r[14] = 0x001bf084u; fn_0018ba20(cpu);
    }
L_001bf084:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf088:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001bf08c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001bf090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf0a4;
        }
    }
L_001bf098:;
    {
        cpu->r[14] = 0x001bf09cu; fn_0018ba20(cpu);
    }
L_001bf09c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf0a0:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001bf0a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd0u);
    }
L_001bf0a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf0ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf0bc;
        }
    }
L_001bf0b0:;
    {
        cpu->r[14] = 0x001bf0b4u; fn_0018ba20(cpu);
    }
L_001bf0b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf0b8:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[3]);
    }
L_001bf0bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001bf0c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf0c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf0d4;
        }
    }
L_001bf0c8:;
    {
        cpu->r[14] = 0x001bf0ccu; fn_0018ba20(cpu);
    }
L_001bf0cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf0d0:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_001bf0d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bf0d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf0ec;
        }
    }
L_001bf0e0:;
    {
        cpu->r[14] = 0x001bf0e4u; fn_0018ba20(cpu);
    }
L_001bf0e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf0e8:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_001bf0ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb8u);
    }
L_001bf0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf104;
        }
    }
L_001bf0f8:;
    {
        cpu->r[14] = 0x001bf0fcu; fn_0018ba20(cpu);
    }
L_001bf0fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf100:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[3]);
    }
L_001bf104:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000e0u, 0, 0);
    }
L_001bf108:;
    {
        cpu->r[14] = 0x001bf10cu; fn_001beea8(cpu);
    }
L_001bf10c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf110:;
    {
        cpu->r[14] = 0x001bf114u; fn_001b7820(cpu);
    }
L_001bf114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf118:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001bf11cu)) return;
    }
}

/* _ZN13GLXPlayerUserD0Ev @ 001bf124 (arm) */
void fn_001bf124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf124:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001bf128:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bf12c:;
    {
        cpu->r[14] = 0x001bf130u; fn_001befc0(cpu);
    }
L_001bf130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf134:;
    {
        cpu->r[14] = 0x001bf138u; fn_0018ba20(cpu);
    }
L_001bf138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf13c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001bf140u)) return;
    }
}

/* _ZN13GLXPlayerUserD2Ev @ 001bf140 (arm) */
void fn_001bf140(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf140:;
    {
        cpu->r[3] = rd32(0x001bf148u + + 0x154u);
    }
L_001bf144:;
    {
        cpu->r[2] = rd32(0x001bf14cu + + 0x154u);
    }
L_001bf148:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bf150u, cpu->r[3], 0, 0);
    }
L_001bf14c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001bf150:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001bf154:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bf158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001bf15c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001bf160:;
    {
        cpu->r[14] = 0x001bf164u; fn_001bac08(cpu);
    }
L_001bf164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf168:;
    {
        cpu->r[14] = 0x001bf16cu; fn_001baba4(cpu);
    }
L_001bf16c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf170:;
    {
        cpu->r[14] = 0x001bf174u; fn_001baadc(cpu);
    }
L_001bf174:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf178:;
    {
        cpu->r[14] = 0x001bf17cu; fn_001ba9f0(cpu);
    }
L_001bf17c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001bf180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf194;
        }
    }
L_001bf188:;
    {
        cpu->r[14] = 0x001bf18cu; fn_0018ba60(cpu);
    }
L_001bf18c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf190:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001bf194:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001bf198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf19c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf1ac;
        }
    }
L_001bf1a0:;
    {
        cpu->r[14] = 0x001bf1a4u; fn_0018ba60(cpu);
    }
L_001bf1a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf1a8:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_001bf1ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc0u);
    }
L_001bf1b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf1b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf1c4;
        }
    }
L_001bf1b8:;
    {
        cpu->r[14] = 0x001bf1bcu; fn_0018ba60(cpu);
    }
L_001bf1bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf1c0:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bf1c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001bf1c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf1cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf1dc;
        }
    }
L_001bf1d0:;
    {
        cpu->r[14] = 0x001bf1d4u; fn_0018ba60(cpu);
    }
L_001bf1d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf1d8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001bf1dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001bf1e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf1e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf1f4;
        }
    }
L_001bf1e8:;
    {
        cpu->r[14] = 0x001bf1ecu; fn_0018ba60(cpu);
    }
L_001bf1ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf1f0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001bf1f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf1f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf20c;
        }
    }
L_001bf200:;
    {
        cpu->r[14] = 0x001bf204u; fn_0018ba20(cpu);
    }
L_001bf204:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf208:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001bf20c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001bf210:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf224;
        }
    }
L_001bf218:;
    {
        cpu->r[14] = 0x001bf21cu; fn_0018ba20(cpu);
    }
L_001bf21c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf220:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001bf224:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd0u);
    }
L_001bf228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf22c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf23c;
        }
    }
L_001bf230:;
    {
        cpu->r[14] = 0x001bf234u; fn_0018ba20(cpu);
    }
L_001bf234:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf238:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[3]);
    }
L_001bf23c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001bf240:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf254;
        }
    }
L_001bf248:;
    {
        cpu->r[14] = 0x001bf24cu; fn_0018ba20(cpu);
    }
L_001bf24c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf250:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_001bf254:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bf258:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf25c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf26c;
        }
    }
L_001bf260:;
    {
        cpu->r[14] = 0x001bf264u; fn_0018ba20(cpu);
    }
L_001bf264:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf268:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_001bf26c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb8u);
    }
L_001bf270:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf284;
        }
    }
L_001bf278:;
    {
        cpu->r[14] = 0x001bf27cu; fn_0018ba20(cpu);
    }
L_001bf27c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf280:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[3]);
    }
L_001bf284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000e0u, 0, 0);
    }
L_001bf288:;
    {
        cpu->r[14] = 0x001bf28cu; fn_001beea8(cpu);
    }
L_001bf28c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf290:;
    {
        cpu->r[14] = 0x001bf294u; fn_001b7820(cpu);
    }
L_001bf294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bf298:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001bf29cu)) return;
    }
}

/* _ZN20GLXPlayerLeaderboard35getCurrentPlayerLeaderboardPositionEv @ 001bf2a4 (arm) */
void fn_001bf2a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_001bf2a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard34getCurrentPlayerLeaderboardCountryEv @ 001bf2ac (arm) */
void fn_001bf2ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x64u);
    }
L_001bf2b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard32getCurrentPlayerLeaderboardScoreEv @ 001bf2b4 (arm) */
void fn_001bf2b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001bf2b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard36getCurrentPlayerLeaderboardScoreDataEv @ 001bf2bc (arm) */
void fn_001bf2bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_001bf2c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard18getLeaderboardSizeEv @ 001bf2c4 (arm) */
void fn_001bf2c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001bf2c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf2cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001bf2d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
        }
    }
L_001bf2d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard19getLeaderboardEntryEiRPcRiS2_RPiS2_ @ 001bf2d8 (arm) */
void fn_001bf2d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf2d8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf2dc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001bf2e0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001bf2e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf344;
        }
    }
L_001bf2e8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x40u);
    }
L_001bf2ec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001bf2f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf344;
        }
    }
L_001bf2f4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x48u);
    }
L_001bf2f8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001bf2fc:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001bf300:;
    {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001bf304:;
    {
        wr32(cpu->r[2], cpu->r[5]);
    }
L_001bf308:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001bf30c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bf310:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001bf314:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001bf318:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001bf31c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf320:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x50u);
        }
    }
L_001bf324:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001bf328:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf32c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001bf330:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2], cpu->r[1]);
        }
    }
L_001bf334:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001bf338:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001bf33c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001bf340:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf344:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bf348:;
    {
        goto L_001bf33c;
    }
}

/* _ZN20GLXPlayerLeaderboard29getLeaderboardEntryPlayerNameEi @ 001bf34c (arm) */
void fn_001bf34c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf34c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf350:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001bf354:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf360;
        }
    }
L_001bf358:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bf35c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf360:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001bf364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf368:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf36c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001bf370:;
    {
        goto L_001bf358;
    }
}

/* _ZN20GLXPlayerLeaderboard32getLeaderboardEntryPlayerCountryEi @ 001bf374 (arm) */
void fn_001bf374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf374:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf378:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001bf37c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf388;
        }
    }
L_001bf380:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bf384:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf388:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001bf38c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf390:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf394:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001bf398:;
    {
        goto L_001bf380;
    }
}

/* _ZN20GLXPlayerLeaderboard33getLeaderboardEntryPlayerPositionEi @ 001bf39c (arm) */
void fn_001bf39c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf39c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf3a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001bf3a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf3b0;
        }
    }
L_001bf3a8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001bf3ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf3b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001bf3b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf3b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf3bc:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001bf3c0:;
    {
        goto L_001bf3a8;
    }
}

/* _ZN20GLXPlayerLeaderboard30getLeaderboardEntryPlayerScoreEi @ 001bf3c4 (arm) */
void fn_001bf3c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf3c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf3c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001bf3cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf3dc;
        }
    }
L_001bf3d0:;
    {
        cpu->r[0] = 0x0000d3d6u;
    }
L_001bf3d4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xfff5u << 16);
    }
L_001bf3d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf3dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001bf3e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf3e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf3e8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001bf3ec:;
    {
        goto L_001bf3d0;
    }
}

/* _ZN20GLXPlayerLeaderboard34getLeaderboardEntryPlayerScoreDataEi @ 001bf3f0 (arm) */
void fn_001bf3f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf3f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bf3f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001bf3f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf404;
        }
    }
L_001bf3fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bf400:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001bf404:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001bf408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf40c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001bf410:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001bf414:;
    {
        goto L_001bf3fc;
    }
}

/* init_array_82 @ 001bf418 (arm) */
void fn_001bf418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf418:;
    {
        cpu->r[3] = rd32(0x001bf420u + + 0x20u);
    }
L_001bf41c:;
    {
        cpu->r[1] = rd32(0x001bf424u + + 0x20u);
    }
L_001bf420:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bf428u, cpu->r[3], 0, 0);
    }
L_001bf424:;
    {
        cpu->r[2] = rd32(0x001bf42cu + + 0x1cu);
    }
L_001bf428:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001bf42c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001bf434u, cpu->r[2], 0, 0);
    }
L_001bf430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bf434:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001bf438:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001bf43c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GLXPlayerLeaderboard21processRankingFriendsEPc @ 001bf44c (arm) */
void fn_001bf44c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf44c:;
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
L_001bf450:;
    {
        cpu->r[2] = rd32(0x001bf458u + + 0x39cu);
    }
L_001bf454:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001bf458:;
    {
        cpu->r[3] = rd32(0x001bf460u + + 0x398u);
    }
L_001bf45c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001bf464u, cpu->r[2], 0, 0);
    }
L_001bf460:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bf464:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001bf468:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bf46c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001bf470:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bf474:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bf478:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf47c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bf480:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001bf484:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf488:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf48c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001bf490:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_001bf494:;
    {
        cpu->r[14] = 0x001bf498u; fn_001d0148(cpu);
    }
L_001bf498:;
    {
        cpu->r[1] = rd32(0x001bf4a0u + + 0x35cu);
    }
L_001bf49c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf4a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bf4a8u, cpu->r[1], 0, 0);
    }
L_001bf4a4:;
    {
        cpu->r[14] = 0x001bf4a8u; fn_001d06e8(cpu);
    }
L_001bf4a8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf4ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bf788;
        }
    }
L_001bf4b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf4b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bf4b8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf4bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf4c0:;
    {
        cpu->r[14] = 0x001bf4c4u; fn_001d0148(cpu);
    }
L_001bf4c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf4c8:;
    {
        cpu->r[14] = 0x001bf4ccu; fn_001d06cc(cpu);
    }
L_001bf4cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf4d0:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_001bf4d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf7b8;
        }
    }
L_001bf4d8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf4dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf4e0:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001bf4e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf4e8:;
    {
        cpu->r[14] = 0x001bf4ecu; fn_001d0148(cpu);
    }
L_001bf4ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf4f0:;
    {
        cpu->r[14] = 0x001bf4f4u; fn_001d06cc(cpu);
    }
L_001bf4f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf4f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf4fc:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001bf500:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf7e4;
        }
    }
L_001bf504:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf508:;
    {
        cpu->r[14] = 0x001bf50cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf50c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf510:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf514:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_001bf518:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf7e4;
        }
    }
L_001bf51c:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001bf520:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf524:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf528:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf52c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf530:;
    {
        cpu->r[14] = 0x001bf534u; fn_001d0148(cpu);
    }
L_001bf534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf538:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001bf53c:;
    {
        cpu->r[14] = 0x001bf540u; fn_001d06cc(cpu);
    }
L_001bf540:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf544:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf548:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bf54c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf550:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bf554:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf520;
        }
    }
L_001bf558:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bf55c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bf560:;
    {
        goto L_001bf574;
    }
L_001bf564:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_001bf568:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bf56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001bf570:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_001bf574:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf578:;
    {
        cpu->r[14] = 0x001bf57cu; fn_001d0434(cpu);
    }
L_001bf57c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001bf580:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf564;
        }
    }
L_001bf584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001bf588:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf58c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf590:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x0000fffdu;
        }
    }
L_001bf594:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_001bf598:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_001bf59c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001bf5a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
        }
    }
L_001bf5a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bf5a8:;
    {
        cpu->r[14] = 0x001bf5acu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001bf5ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf5b0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001bf5b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf764;
        }
    }
L_001bf5b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf5bc:;
    {
        cpu->r[14] = 0x001bf5c0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf5c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf5c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bf5c8:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_001bf5cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf5f0;
        }
    }
L_001bf5d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf5d4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001bf5d8:;
    {
        goto L_001bf5e0;
    }
L_001bf5dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bf5e0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001bf5e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bf5e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001bf5ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf5dc;
        }
    }
L_001bf5f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf5f4:;
    {
        cpu->r[14] = 0x001bf5f8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf5f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf5fc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001bf600:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf604:;
    {
        cpu->r[14] = 0x001bf608u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf60c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf610:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001bf614:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf7a8;
        }
    }
L_001bf618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf61c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf620:;
    {
        cpu->r[14] = 0x001bf624u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf62c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001bf630:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf764;
        }
    }
L_001bf634:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bf638:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001bf63c:;
    {
        goto L_001bf644;
    }
L_001bf640:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bf644:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001bf648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001bf64c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bf650:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf640;
        }
    }
L_001bf654:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bf658:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf65c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf660:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf664:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf668:;
    {
        cpu->r[14] = 0x001bf66cu; fn_001d0148(cpu);
    }
L_001bf66c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf670:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x48u);
    }
L_001bf674:;
    {
        cpu->r[14] = 0x001bf678u; fn_001d06cc(cpu);
    }
L_001bf678:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf67c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf680:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf684:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf688:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf68c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001bf690:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bf694:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf698:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf69c:;
    {
        cpu->r[14] = 0x001bf6a0u; fn_001d0148(cpu);
    }
L_001bf6a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf6a4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bf6a8:;
    {
        cpu->r[14] = 0x001bf6acu; fn_001d0434(cpu);
    }
L_001bf6ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001bf6b0:;
    {
        cpu->r[14] = 0x001bf6b4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf6b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bf6b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf6bc:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf6c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001bf6c4:;
    {
        cpu->r[14] = 0x001bf6c8u; fn_001d06dc(cpu);
    }
L_001bf6c8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001bf6cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf6d0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf6d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf6d8:;
    {
        cpu->r[14] = 0x001bf6dcu; fn_001d0148(cpu);
    }
L_001bf6dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf6e0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001bf6e4:;
    {
        cpu->r[14] = 0x001bf6e8u; fn_001d06cc(cpu);
    }
L_001bf6e8:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf6ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf6f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf6f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf754;
        }
    }
L_001bf6f8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf6fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bf700:;
    {
        cpu->r[14] = 0x001bf704u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf70c:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf710:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf754;
        }
    }
L_001bf714:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bf718:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf71c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf720:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf724:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf728:;
    {
        cpu->r[14] = 0x001bf72cu; fn_001d0148(cpu);
    }
L_001bf72c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bf730:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf734:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf738:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001bf73c:;
    {
        cpu->r[14] = 0x001bf740u; fn_001d06cc(cpu);
    }
L_001bf740:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf744:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bf748:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf74c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bf750:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf718;
        }
    }
L_001bf754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf758:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001bf75c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001bf760:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf658;
        }
    }
L_001bf764:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001bf768:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bf76c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001bf770:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001bf774:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bf778:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bf77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bf7f0;
        }
    }
L_001bf780:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001bf784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bf788u)) return;
    }
L_001bf788:;
    {
        cpu->r[1] = rd32(0x001bf790u + + 0x70u);
    }
L_001bf78c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf790:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bf798u, cpu->r[1], 0, 0);
    }
L_001bf794:;
    {
        cpu->r[14] = 0x001bf798u; fn_001d06e8(cpu);
    }
L_001bf798:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf79c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001bf7a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bf55c;
        }
    }
L_001bf7a4:;
    {
        goto L_001bf764;
    }
L_001bf7a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bf7ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf7b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf654;
        }
    }
L_001bf7b4:;
    {
        goto L_001bf764;
    }
L_001bf7b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bf7bc:;
    {
        cpu->r[10] = 0x0000fffdu;
    }
L_001bf7c0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xffffu << 16);
    }
L_001bf7c4:;
    {
        cpu->r[3] = 0x0000d3d6u;
    }
L_001bf7c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfff5u << 16);
    }
L_001bf7cc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_001bf7d0:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001bf7d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001bf7d8:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001bf7dc:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001bf7e0:;
    {
        goto L_001bf55c;
    }
L_001bf7e4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bf7e8:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001bf7ec:;
    {
        goto L_001bf55c;
    }
L_001bf7f0:;
    {
        cpu->r[14] = 0x001bf7f4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bf7f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[4]);
        wr16(cpu->r[8], cpu->r[10]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bf7f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bf7fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, (cpu->r[14] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001bf800u)) return;
        }
    }
L_001bf800:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard20processRankingAroundEPc @ 001bf804 (arm) */
void fn_001bf804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bf804:;
    {
        cpu->r[2] = rd32(0x001bf80cu + + 0x25cu);
    }
L_001bf808:;
    {
        cpu->r[3] = rd32(0x001bf810u + + 0x25cu);
    }
L_001bf80c:;
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
L_001bf810:;
    {
        cpu->r[2] = add_flags(cpu, 0x001bf818u, cpu->r[2], 0, 0);
    }
L_001bf814:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001bf818:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bf81c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bf820:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001bf824:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bf828:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001bf82c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001bf830:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001bf834:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bf838:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001bf83c:;
    {
        goto L_001bf850;
    }
L_001bf840:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001bf844:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bf848:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001bf84c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_001bf850:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf854:;
    {
        cpu->r[14] = 0x001bf858u; fn_001d0434(cpu);
    }
L_001bf858:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001bf85c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf840;
        }
    }
L_001bf860:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_001bf864:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf868:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001bf86c:;
    {
        cpu->r[14] = 0x001bf870u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001bf870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf874:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_001bf878:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfa30;
        }
    }
L_001bf87c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf880:;
    {
        cpu->r[14] = 0x001bf884u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf884:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bf888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bf88c:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_001bf890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bf8b4;
        }
    }
L_001bf894:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bf898:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001bf89c:;
    {
        goto L_001bf8a4;
    }
L_001bf8a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_001bf8a4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001bf8a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bf8ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001bf8b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf8a0;
        }
    }
L_001bf8b4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf8b8:;
    {
        cpu->r[14] = 0x001bf8bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf8bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bf8c0:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[0]);
    }
L_001bf8c4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf8c8:;
    {
        cpu->r[14] = 0x001bf8ccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf8cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001bf8d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf8d4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001bf8d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfa54;
        }
    }
L_001bf8dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bf8e0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf8e4:;
    {
        cpu->r[14] = 0x001bf8e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf8e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bf8ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf8f0:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001bf8f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfa30;
        }
    }
L_001bf8f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bf8fc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001bf900:;
    {
        goto L_001bf908;
    }
L_001bf904:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_001bf908:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001bf90c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001bf910:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bf914:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bf904;
        }
    }
L_001bf918:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bf91c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bf920:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001bf924:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf928:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf92c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf930:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf934:;
    {
        cpu->r[14] = 0x001bf938u; fn_001d0148(cpu);
    }
L_001bf938:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf93c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x48u);
    }
L_001bf940:;
    {
        cpu->r[14] = 0x001bf944u; fn_001d06cc(cpu);
    }
L_001bf944:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf948:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf94c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf950:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bf958:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001bf95c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bf960:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf964:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf968:;
    {
        cpu->r[14] = 0x001bf96cu; fn_001d0148(cpu);
    }
L_001bf96c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf970:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x40u);
    }
L_001bf974:;
    {
        cpu->r[14] = 0x001bf978u; fn_001d0434(cpu);
    }
L_001bf978:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001bf97c:;
    {
        cpu->r[14] = 0x001bf980u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf980:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001bf984:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf988:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf98c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001bf990:;
    {
        cpu->r[14] = 0x001bf994u; fn_001d06dc(cpu);
    }
L_001bf994:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001bf998:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf99c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf9a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf9a4:;
    {
        cpu->r[14] = 0x001bf9a8u; fn_001d0148(cpu);
    }
L_001bf9a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bf9ac:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001bf9b0:;
    {
        cpu->r[14] = 0x001bf9b4u; fn_001d06cc(cpu);
    }
L_001bf9b4:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf9b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_001bf9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bf9c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfa20;
        }
    }
L_001bf9c4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bf9c8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x50u);
    }
L_001bf9cc:;
    {
        cpu->r[14] = 0x001bf9d0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bf9d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001bf9d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bf9d8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bf9dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfa20;
        }
    }
L_001bf9e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001bf9e4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bf9e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bf9ec:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bf9f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bf9f4:;
    {
        cpu->r[14] = 0x001bf9f8u; fn_001d0148(cpu);
    }
L_001bf9f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001bf9fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfa00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bfa04:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001bfa08:;
    {
        cpu->r[14] = 0x001bfa0cu; fn_001d06cc(cpu);
    }
L_001bfa0c:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfa10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bfa14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001bfa18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001bfa1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf9e4;
        }
    }
L_001bfa20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bfa24:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001bfa28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001bfa2c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf924;
        }
    }
L_001bfa30:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001bfa34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bfa38:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001bfa3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001bfa40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bfa44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bfa48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bfa64;
        }
    }
L_001bfa4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001bfa50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bfa54u)) return;
    }
L_001bfa54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001bfa58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfa5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bf918;
        }
    }
L_001bfa60:;
    {
        goto L_001bfa30;
    }
L_001bfa64:;
    {
        cpu->r[14] = 0x001bfa68u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bfa68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 2, 24u, &shc); cpu->r[10] = v;
        }
    }
L_001bfa6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard14processRankingEPc @ 001bfa70 (arm) */
void fn_001bfa70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bfa70:;
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
L_001bfa74:;
    {
        cpu->r[2] = rd32(0x001bfa7cu + + 0x3e4u);
    }
L_001bfa78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001bfa7c:;
    {
        cpu->r[3] = rd32(0x001bfa84u + + 0x3e0u);
    }
L_001bfa80:;
    {
        cpu->r[2] = add_flags(cpu, 0x001bfa88u, cpu->r[2], 0, 0);
    }
L_001bfa84:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bfa88:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001bfa8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bfa90:;
    {
        cpu->r[14] = rd32(cpu->r[13]);
    }
L_001bfa94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfa98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bfa9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bfaa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bfaa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfaa8:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001bfaac:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfab0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001bfab4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_001bfab8:;
    {
        cpu->r[14] = 0x001bfabcu; fn_001d0148(cpu);
    }
L_001bfabc:;
    {
        cpu->r[1] = rd32(0x001bfac4u + + 0x3a4u);
    }
L_001bfac0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfac4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bfaccu, cpu->r[1], 0, 0);
    }
L_001bfac8:;
    {
        cpu->r[14] = 0x001bfaccu; fn_001d06e8(cpu);
    }
L_001bfacc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bfad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bfdf4;
        }
    }
L_001bfad4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfad8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bfadc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfae0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfae4:;
    {
        cpu->r[14] = 0x001bfae8u; fn_001d0148(cpu);
    }
L_001bfae8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfaec:;
    {
        cpu->r[14] = 0x001bfaf0u; fn_001d06cc(cpu);
    }
L_001bfaf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bfaf4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_001bfaf8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bfe24;
        }
    }
L_001bfafc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfb00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfb04:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001bfb08:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001bfb0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfb10:;
    {
        cpu->r[14] = 0x001bfb14u; fn_001d0148(cpu);
    }
L_001bfb14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfb18:;
    {
        cpu->r[14] = 0x001bfb1cu; fn_001d06cc(cpu);
    }
L_001bfb1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfb20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfb24:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001bfb28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfe50;
        }
    }
L_001bfb2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfb30:;
    {
        cpu->r[14] = 0x001bfb34u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfb34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfb38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfb3c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_001bfb40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfe50;
        }
    }
L_001bfb44:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001bfb48:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bfb4c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfb50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfb54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfb58:;
    {
        cpu->r[14] = 0x001bfb5cu; fn_001d0148(cpu);
    }
L_001bfb5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfb60:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001bfb64:;
    {
        cpu->r[14] = 0x001bfb68u; fn_001d06cc(cpu);
    }
L_001bfb68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bfb6c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfb70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bfb74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfb78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bfb7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfb48;
        }
    }
L_001bfb80:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bfb84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bfb88:;
    {
        goto L_001bfb9c;
    }
L_001bfb8c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_001bfb90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bfb94:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001bfb98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_001bfb9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfba0:;
    {
        cpu->r[14] = 0x001bfba4u; fn_001d0434(cpu);
    }
L_001bfba4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001bfba8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bfb8c;
        }
    }
L_001bfbac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001bfbb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfbb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfbb8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x0000fffdu;
        }
    }
L_001bfbbc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_001bfbc0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_001bfbc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001bfbc8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
        }
    }
L_001bfbcc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bfbd0:;
    {
        cpu->r[14] = 0x001bfbd4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001bfbd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bfbd8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001bfbdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfdd0;
        }
    }
L_001bfbe0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfbe4:;
    {
        cpu->r[14] = 0x001bfbe8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfbe8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfbec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bfbf0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_001bfbf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfc18;
        }
    }
L_001bfbf8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bfbfc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001bfc00:;
    {
        goto L_001bfc08;
    }
L_001bfc04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bfc08:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001bfc0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bfc10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001bfc14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bfc04;
        }
    }
L_001bfc18:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfc1c:;
    {
        cpu->r[14] = 0x001bfc20u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfc20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfc24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bfc28:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001bfc2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfc50;
        }
    }
L_001bfc30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bfc34:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001bfc38:;
    {
        goto L_001bfc40;
    }
L_001bfc3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001bfc40:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001bfc44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bfc48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001bfc4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bfc3c;
        }
    }
L_001bfc50:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfc54:;
    {
        cpu->r[14] = 0x001bfc58u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfc58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfc5c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001bfc60:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfc64:;
    {
        cpu->r[14] = 0x001bfc68u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfc68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfc6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfc70:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001bfc74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfe14;
        }
    }
L_001bfc78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfc7c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfc80:;
    {
        cpu->r[14] = 0x001bfc84u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfc84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfc88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfc8c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001bfc90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfdd0;
        }
    }
L_001bfc94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bfc98:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001bfc9c:;
    {
        goto L_001bfca4;
    }
L_001bfca0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bfca4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001bfca8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001bfcac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bfcb0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bfca0;
        }
    }
L_001bfcb4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bfcb8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bfcbc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfcc0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfcc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfcc8:;
    {
        cpu->r[14] = 0x001bfcccu; fn_001d0148(cpu);
    }
L_001bfccc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfcd0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x48u);
    }
L_001bfcd4:;
    {
        cpu->r[14] = 0x001bfcd8u; fn_001d06cc(cpu);
    }
L_001bfcd8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bfcdc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfce0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bfce4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfce8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bfcec:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001bfcf0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bfcf4:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfcf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfcfc:;
    {
        cpu->r[14] = 0x001bfd00u; fn_001d0148(cpu);
    }
L_001bfd00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfd04:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bfd08:;
    {
        cpu->r[14] = 0x001bfd0cu; fn_001d0434(cpu);
    }
L_001bfd0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001bfd10:;
    {
        cpu->r[14] = 0x001bfd14u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfd14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bfd18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfd1c:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfd20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001bfd24:;
    {
        cpu->r[14] = 0x001bfd28u; fn_001d06dc(cpu);
    }
L_001bfd28:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x44u);
    }
L_001bfd2c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001bfd30:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001bfd34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfd38:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfd3c:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[14]);
    }
L_001bfd40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfd44:;
    {
        cpu->r[14] = 0x001bfd48u; fn_001d0148(cpu);
    }
L_001bfd48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfd4c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001bfd50:;
    {
        cpu->r[14] = 0x001bfd54u; fn_001d06cc(cpu);
    }
L_001bfd54:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfd58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfd5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bfd60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfdc0;
        }
    }
L_001bfd64:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bfd68:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bfd6c:;
    {
        cpu->r[14] = 0x001bfd70u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bfd70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfd74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfd78:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfd7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfdc0;
        }
    }
L_001bfd80:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bfd84:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bfd88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bfd8c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bfd90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bfd94:;
    {
        cpu->r[14] = 0x001bfd98u; fn_001d0148(cpu);
    }
L_001bfd98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bfd9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfda0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bfda4:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001bfda8:;
    {
        cpu->r[14] = 0x001bfdacu; fn_001d06cc(cpu);
    }
L_001bfdac:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001bfdb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bfdb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfdb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bfdbc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfd84;
        }
    }
L_001bfdc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfdc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001bfdc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001bfdcc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfcb8;
        }
    }
L_001bfdd0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001bfdd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bfdd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001bfddc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001bfde0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bfde4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bfde8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bfe5c;
        }
    }
L_001bfdec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001bfdf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bfdf4u)) return;
    }
L_001bfdf4:;
    {
        cpu->r[1] = rd32(0x001bfdfcu + + 0x70u);
    }
L_001bfdf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bfdfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bfe04u, cpu->r[1], 0, 0);
    }
L_001bfe00:;
    {
        cpu->r[14] = 0x001bfe04u; fn_001d06e8(cpu);
    }
L_001bfe04:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bfe08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001bfe0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bfb84;
        }
    }
L_001bfe10:;
    {
        goto L_001bfdd0;
    }
L_001bfe14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfe18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfe1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfcb4;
        }
    }
L_001bfe20:;
    {
        goto L_001bfdd0;
    }
L_001bfe24:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x54u);
    }
L_001bfe28:;
    {
        cpu->r[10] = 0x0000fffdu;
    }
L_001bfe2c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xffffu << 16);
    }
L_001bfe30:;
    {
        cpu->r[3] = 0x0000d3d6u;
    }
L_001bfe34:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfff5u << 16);
    }
L_001bfe38:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_001bfe3c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001bfe40:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001bfe44:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001bfe48:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001bfe4c:;
    {
        goto L_001bfb84;
    }
L_001bfe50:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bfe54:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001bfe58:;
    {
        goto L_001bfb84;
    }
L_001bfe5c:;
    {
        cpu->r[14] = 0x001bfe60u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bfe60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[9]; cpu->r[8] = v;
        }
    }
L_001bfe64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bfe68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 2, 16u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001bfe6cu)) return;
        }
    }
L_001bfe6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard16clearLeaderboardEv @ 001bfe70 (arm) */
void fn_001bfe70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bfe70:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x40u);
    }
L_001bfe74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bfe78:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bfe7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bfe80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
        }
    }
L_001bfe84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bfee0;
        }
    }
L_001bfe88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bfe8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfe90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bfecc;
        }
    }
L_001bfe94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bfe98:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001bfe9c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001bfea0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bfea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bfeb8;
        }
    }
L_001bfea8:;
    {
        cpu->r[14] = 0x001bfeacu; fn_0018ba60(cpu);
    }
L_001bfeac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001bfeb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfeb4:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001bfeb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bfebc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bfec0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfe9c;
        }
    }
L_001bfec4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bfec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bfed8;
        }
    }
L_001bfecc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001bfed0:;
    {
        cpu->r[14] = 0x001bfed4u; fn_0018ba60(cpu);
    }
L_001bfed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bfed8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bfedc:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001bfee0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001bfee4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bfee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bff40;
        }
    }
L_001bfeec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bfef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bff2c;
        }
    }
L_001bfef4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bfef8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001bfefc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001bff00:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bff04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bff18;
        }
    }
L_001bff08:;
    {
        cpu->r[14] = 0x001bff0cu; fn_0018ba60(cpu);
    }
L_001bff0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001bff10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bff14:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001bff18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bff1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bff20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bfefc;
        }
    }
L_001bff24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bff28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bff38;
        }
    }
L_001bff2c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001bff30:;
    {
        cpu->r[14] = 0x001bff34u; fn_0018ba60(cpu);
    }
L_001bff34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bff38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bff3c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001bff40:;
    {
        cpu->r[2] = 0x0000d3d6u;
    }
L_001bff44:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bff48:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfff5u << 16);
    }
L_001bff4c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001bff50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001bff54:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
        }
    }
L_001bff58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bffc4;
        }
    }
L_001bff5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bff60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
        }
    }
L_001bff64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bffa4;
        }
    }
L_001bff68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bff6c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001bff70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bff74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bff98;
        }
    }
L_001bff78:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001bff7c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bff80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bff98;
        }
    }
L_001bff84:;
    {
        cpu->r[14] = 0x001bff88u; fn_0018ba20(cpu);
    }
L_001bff88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bff8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001bff90:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001bff94:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001bff98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001bff9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001bffa0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bff70;
        }
    }
L_001bffa4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bffa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bffbc;
        }
    }
L_001bffac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001bffb0:;
    {
        cpu->r[14] = 0x001bffb4u; fn_0018ba20(cpu);
    }
L_001bffb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bffb8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001bffbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bffc0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001bffc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001bffc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bffcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bffdc;
        }
    }
L_001bffd0:;
    {
        cpu->r[14] = 0x001bffd4u; fn_0018ba20(cpu);
    }
L_001bffd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bffd8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001bffdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001bffe0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001bffe4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001bffe8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001bffec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bfff8;
        }
    }
L_001bfff0:;
    {
        cpu->r[14] = 0x001bfff4u; fn_0018ba20(cpu);
    }
L_001bfff4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001bfff8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001bfffc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c0000:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001c0004:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001c0008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c0014;
        }
    }
L_001c000c:;
    {
        cpu->r[14] = 0x001c0010u; fn_0018ba20(cpu);
    }
L_001c0010:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001c0014:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_001c0018:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c001c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c002c;
        }
    }
L_001c0020:;
    {
        cpu->r[14] = 0x001c0024u; fn_0018ba20(cpu);
    }
L_001c0024:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0028:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c002c:;
    {
        cpu->r[3] = 0x0000d3d6u;
    }
L_001c0030:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c0034:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfff5u << 16);
    }
L_001c0038:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[2]);
    }
L_001c003c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c0040:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001c0044:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001c0048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c004cu)) return;
    }
}

/* _ZN20GLXPlayerLeaderboard13addScoreEntryEPciiiPii @ 001c004c (arm) */
void fn_001c004c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c004c:;
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
L_001c0050:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c0054:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c0058:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c005c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001c0060:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001c0064:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_001c0068:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_001c006c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001c0070:;
    {
        cpu->r[14] = 0x001c0074u; fn_001d0434(cpu);
    }
L_001c0074:;
    {
        cpu->r[1] = rd32(0x001c007cu + + 0x64u);
    }
L_001c0078:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c007c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001c0080:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001c0084:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c008cu, cpu->r[1], 0, 0);
    }
L_001c0088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001c008c:;
    {
        cpu->r[14] = 0x001c0090u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0090:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001c0094:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c00d8;
        }
    }
L_001c0098:;
    {
        cpu->r[11] = rd32(0x001c00a0u + + 0x44u);
    }
L_001c009c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c00a0:;
    {
        cpu->r[11] = add_flags(cpu, 0x001c00a8u, cpu->r[11], 0, 0);
    }
L_001c00a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c00a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c00ac:;
    {
        cpu->r[14] = 0x001c00b0u; fn_001d0434(cpu);
    }
L_001c00b0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c00b4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c00b8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c00bc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001c00c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001c00c4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001c00c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001c00cc:;
    {
        cpu->r[14] = 0x001c00d0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c00d0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001c00d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c00a4;
        }
    }
L_001c00d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c00dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c00e0u)) return;
    }
}

/* _ZN20GLXPlayerLeaderboard18sendRankGetFriendsEiii @ 001c00e8 (arm) */
void fn_001c00e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c00e8:;
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
L_001c00ec:;
    {
        cpu->r[5] = rd32(0x001c00f4u + + 0xd4u);
    }
L_001c00f0:;
    {
        cpu->r[7] = rd32(0x001c00f8u + + 0xd4u);
    }
L_001c00f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c00f8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c0100u, cpu->r[5], 0, 0);
    }
L_001c00fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c0100:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001c0104:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c0108:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c010c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c0110:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001c0114:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c0118:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c011c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0120:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c0124:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c0128:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c012c:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c0130:;
    {
        cpu->r[14] = 0x001c0134u; fn_001d0700(cpu);
    }
L_001c0134:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c0138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c013c:;
    {
        cpu->r[1] = rd32(0x001c0144u + + 0x8cu);
    }
L_001c0140:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001c0144:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c0148:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0150u, cpu->r[1], 0, 0);
    }
L_001c014c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c0150:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c0154:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001c0158:;
    {
        cpu->r[14] = 0x001c015cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c015c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c0160:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0180;
        }
    }
L_001c0164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0168:;
    {
        cpu->r[14] = 0x001c016cu; fn_001d0434(cpu);
    }
L_001c016c:;
    {
        cpu->r[1] = rd32(0x001c0174u + + 0x60u);
    }
L_001c0170:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c0174:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c017cu, cpu->r[1], 0, 0);
    }
L_001c0178:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c017c:;
    {
        cpu->r[14] = 0x001c0180u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0180:;
    {
        cpu->r[0] = rd32(0x001c0188u + + 0x50u);
    }
L_001c0184:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c0188:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c0190u, cpu->r[0], 0, 0);
    }
L_001c018c:;
    {
        cpu->r[14] = 0x001c0190u; fn_001d0ac4(cpu);
    }
L_001c0190:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c0194:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0198:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c019c:;
    {
        cpu->r[14] = 0x001c01a4u;
    }
L_001c01a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c01a4u)) return;
    }
L_001c01a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c01a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c01ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c01b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c01b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c01c4;
        }
    }
L_001c01b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c01bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c01c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c01c4u)) return;
    }
L_001c01c4:;
    {
        cpu->r[14] = 0x001c01c8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c01c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001c01cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c01d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 26u, &shc); cpu->r[0] = v;
        }
    }
L_001c01d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (cpu->r[13] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001c01d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 26u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard23sendRankGetAroundPlayerEiii @ 001c01dc (arm) */
void fn_001c01dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c01dc:;
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
L_001c01e0:;
    {
        cpu->r[5] = rd32(0x001c01e8u + + 0xd4u);
    }
L_001c01e4:;
    {
        cpu->r[7] = rd32(0x001c01ecu + + 0xd4u);
    }
L_001c01e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c01ec:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c01f4u, cpu->r[5], 0, 0);
    }
L_001c01f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c01f4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001c01f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c01fc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c0200:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c0204:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001c0208:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c020c:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c0210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0214:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c0218:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c021c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c0220:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c0224:;
    {
        cpu->r[14] = 0x001c0228u; fn_001d0700(cpu);
    }
L_001c0228:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c022c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0230:;
    {
        cpu->r[1] = rd32(0x001c0238u + + 0x8cu);
    }
L_001c0234:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_001c0238:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c023c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0244u, cpu->r[1], 0, 0);
    }
L_001c0240:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c0244:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c0248:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001c024c:;
    {
        cpu->r[14] = 0x001c0250u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0250:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c0254:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0274;
        }
    }
L_001c0258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c025c:;
    {
        cpu->r[14] = 0x001c0260u; fn_001d0434(cpu);
    }
L_001c0260:;
    {
        cpu->r[1] = rd32(0x001c0268u + + 0x60u);
    }
L_001c0264:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c0268:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0270u, cpu->r[1], 0, 0);
    }
L_001c026c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c0270:;
    {
        cpu->r[14] = 0x001c0274u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0274:;
    {
        cpu->r[0] = rd32(0x001c027cu + + 0x50u);
    }
L_001c0278:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c027c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c0284u, cpu->r[0], 0, 0);
    }
L_001c0280:;
    {
        cpu->r[14] = 0x001c0284u; fn_001d0ac4(cpu);
    }
L_001c0284:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c0288:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c028c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c0290:;
    {
        cpu->r[14] = 0x001c0298u;
    }
L_001c0294:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0298u)) return;
    }
L_001c0298:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c029c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c02a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c02a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c02a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c02b8;
        }
    }
L_001c02ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c02b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c02b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c02b8u)) return;
    }
L_001c02b8:;
    {
        cpu->r[14] = 0x001c02bcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c02bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 3, 4u, &shc); cpu->r[10] = v;
        }
    }
L_001c02c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c02c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 24u, &shc); cpu->r[0] = v;
        }
    }
L_001c02c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001c02cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard11sendRankGetEiiiib @ 001c02d0 (arm) */
void fn_001c02d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c02d0:;
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
L_001c02d4:;
    {
        cpu->r[5] = rd32(0x001c02dcu + + 0xdcu);
    }
L_001c02d8:;
    {
        cpu->r[7] = rd32(0x001c02e0u + + 0xdcu);
    }
L_001c02dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000820u, 1, 0);
    }
L_001c02e0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c02e8u, cpu->r[5], 0, 0);
    }
L_001c02e4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c02e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001c02ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c02f0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c02f4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001c02f8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c02fc:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001c0300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0304:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c0308:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c030c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c0310:;
    {
        wr32(cpu->r[13] + + 0x81cu, cpu->r[3]);
    }
L_001c0314:;
    {
        cpu->r[14] = 0x001c0318u; fn_001d0700(cpu);
    }
L_001c0318:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c031c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0320:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c0324:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001c0328:;
    {
        cpu->r[1] = rd32(0x001c0330u + + 0x90u);
    }
L_001c032c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c0330:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x840u);
    }
L_001c0334:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c033cu, cpu->r[1], 0, 0);
    }
L_001c0338:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c033c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001c0340:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001c0344:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001c0348:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001c034c:;
    {
        cpu->r[14] = 0x001c0350u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0350:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c0354:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0374;
        }
    }
L_001c0358:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c035c:;
    {
        cpu->r[14] = 0x001c0360u; fn_001d0434(cpu);
    }
L_001c0360:;
    {
        cpu->r[1] = rd32(0x001c0368u + + 0x5cu);
    }
L_001c0364:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c0368:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0370u, cpu->r[1], 0, 0);
    }
L_001c036c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c0370:;
    {
        cpu->r[14] = 0x001c0374u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0374:;
    {
        cpu->r[0] = rd32(0x001c037cu + + 0x4cu);
    }
L_001c0378:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c037c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c0384u, cpu->r[0], 0, 0);
    }
L_001c0380:;
    {
        cpu->r[14] = 0x001c0384u; fn_001d0ac4(cpu);
    }
L_001c0384:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c0388:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c038c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c0390:;
    {
        cpu->r[14] = 0x001c0398u;
    }
L_001c0394:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0398u)) return;
    }
L_001c0398:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001c039c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x81cu);
    }
L_001c03a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c03a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c03a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c03b4;
        }
    }
L_001c03ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000820u, 0, 0);
    }
L_001c03b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c03b4u)) return;
    }
L_001c03b4:;
    {
        cpu->r[14] = 0x001c03b8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c03b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001c03bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c03c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 23u, &shc); cpu->r[0] = v;
        }
    }
L_001c03c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001c03c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard13sendHighScoreEPc @ 001c03cc (arm) */
void fn_001c03cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c03cc:;
    {
        cpu->r[3] = rd32(0x001c03d4u + + 0xb4u);
    }
L_001c03d0:;
    {
        cpu->r[2] = rd32(0x001c03d8u + + 0xb4u);
    }
L_001c03d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c03dcu, cpu->r[3], 0, 0);
    }
L_001c03d8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001c03dc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c03e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c03e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c03e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001c03ec:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c03f0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c03f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c03f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001c03fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c0400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0404:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c0408:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c040c:;
    {
        cpu->r[14] = 0x001c0410u; fn_001d0700(cpu);
    }
L_001c0410:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c0414:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c0418:;
    {
        cpu->r[1] = rd32(0x001c0420u + + 0x70u);
    }
L_001c041c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0420:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c0424:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c042cu, cpu->r[1], 0, 0);
    }
L_001c0428:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c042c:;
    {
        cpu->r[14] = 0x001c0430u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0434:;
    {
        cpu->r[14] = 0x001c0438u; fn_001d0434(cpu);
    }
L_001c0438:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c043c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c0440:;
    {
        cpu->r[14] = 0x001c0444u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0444:;
    {
        cpu->r[0] = rd32(0x001c044cu + + 0x48u);
    }
L_001c0448:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c044c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c0454u, cpu->r[0], 0, 0);
    }
L_001c0450:;
    {
        cpu->r[14] = 0x001c0454u; fn_001d0ac4(cpu);
    }
L_001c0454:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c0458:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c045c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c0460:;
    {
        cpu->r[14] = 0x001c0468u;
    }
L_001c0464:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0468u)) return;
    }
L_001c0468:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c046c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c0470:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0474:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c0484;
        }
    }
L_001c0478:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c047c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c0480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0484u)) return;
    }
L_001c0484:;
    {
        cpu->r[14] = 0x001c0488u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c0488:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001c048c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c0490:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 2, (cpu->r[12] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c0494u)) return;
        }
    }
L_001c0494:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard13sendHighScoreEiii @ 001c0498 (arm) */
void fn_001c0498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0498:;
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
L_001c049c:;
    {
        cpu->r[4] = rd32(0x001c04a4u + + 0xe4u);
    }
L_001c04a0:;
    {
        cpu->r[7] = rd32(0x001c04a8u + + 0xe4u);
    }
L_001c04a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c04a8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c04b0u, cpu->r[4], 0, 0);
    }
L_001c04ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c04b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c04b4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c04b8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c04bc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c04c0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c04c4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c04c8:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001c04cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c04d0:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c04d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c04d8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c04dc:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c04e0:;
    {
        cpu->r[14] = 0x001c04e4u; fn_001d0700(cpu);
    }
L_001c04e4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c04e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0558;
        }
    }
L_001c04ec:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c04f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c04f4:;
    {
        cpu->r[1] = rd32(0x001c04fcu + + 0x94u);
    }
L_001c04f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c04fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c0500:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0508u, cpu->r[1], 0, 0);
    }
L_001c0504:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001c0508:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c050c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001c0510:;
    {
        cpu->r[14] = 0x001c0514u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0514:;
    {
        cpu->r[0] = rd32(0x001c051cu + + 0x78u);
    }
L_001c0518:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c051c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c0524u, cpu->r[0], 0, 0);
    }
L_001c0520:;
    {
        cpu->r[14] = 0x001c0524u; fn_001d0ac4(cpu);
    }
L_001c0524:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c0528:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c052c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c0530:;
    {
        cpu->r[14] = 0x001c0538u;
    }
L_001c0534:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0538u)) return;
    }
L_001c0538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c053c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c0540:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c0544:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c0584;
        }
    }
L_001c054c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c0550:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c0554:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0558u)) return;
    }
L_001c0558:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c055c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c0560:;
    {
        cpu->r[1] = rd32(0x001c0568u + + 0x30u);
    }
L_001c0564:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c0568:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c056c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0574u, cpu->r[1], 0, 0);
    }
L_001c0570:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c0574:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001c0578:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c057c:;
    {
        cpu->r[14] = 0x001c0580u; imp_sprintf(cpu); /* sprintf */
    }
L_001c0580:;
    {
        goto L_001c0514;
    }
L_001c0584:;
    {
        cpu->r[14] = 0x001c0588u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c0588:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 4, 30u, &shc); cpu->r[9] = v;
        }
    }
L_001c058c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c0590:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, 21u, &shc); cpu->r[0] = v;
        }
    }
L_001c0594:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 21u, &shc); cpu->r[0] = v;
        }
    }
L_001c0598:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[10] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboard15OnUpdateSuccessEi @ 001c059c (arm) */
void fn_001c059c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c059c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c05a0:;
    {
        cpu->r[4] = rd32(0x001c05a8u + + 0x130u);
    }
L_001c05a4:;
    {
        cpu->r[7] = rd32(0x001c05acu + + 0x130u);
    }
L_001c05a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001c05ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c05b4u, cpu->r[4], 0, 0);
    }
L_001c05b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000cu, 1, 1);
    }
L_001c05b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c05b8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c05bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c05c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c05c4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001c05c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c067c;
        }
    }
L_001c05cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c060c;
        }
    }
L_001c05d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_001c05d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c06a8;
        }
    }
L_001c05d8:;
    {
        cpu->r[3] = 0x000022b8u;
    }
L_001c05dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c05e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c0660;
        }
    }
L_001c05e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c05e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c05ec:;
    {
        cpu->r[14] = 0x001c05f0u; fn_001b6b68(cpu);
    }
L_001c05f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c05f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c05f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c05fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c06d4;
        }
    }
L_001c0604:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001c0608:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c060cu)) return;
    }
L_001c060c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c0610:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c05e4;
        }
    }
L_001c0614:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001c0618:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c061c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c0620:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0624:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x24u;
        wr32(cpu->r[8] + - 0x24u, cpu->r[1]);
        cpu->r[8] = wb_tmp;
    }
L_001c0628:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c062c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001c0630:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c0634:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c0638:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c063c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c0640:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c0644:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_001c0648:;
    {
        wr32(cpu->r[12], cpu->r[5]);
    }
L_001c064c:;
    {
        cpu->r[14] = 0x001c0650u; fn_001d0148(cpu);
    }
L_001c0650:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0654:;
    {
        cpu->r[14] = 0x001c0658u; fn_001d06cc(cpu);
    }
L_001c0658:;
    {
        wr32(cpu->r[6] + + 0x58u, cpu->r[0]);
    }
L_001c065c:;
    {
        goto L_001c05e4;
    }
L_001c0660:;
    {
        cpu->r[14] = 0x001c0664u; fn_001bfe70(cpu);
    }
L_001c0664:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0668:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c066c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001c0670:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x24u);
    }
L_001c0674:;
    {
        cpu->r[14] = 0x001c0678u; fn_001bf44c(cpu);
    }
L_001c0678:;
    {
        goto L_001c05e4;
    }
L_001c067c:;
    {
        cpu->r[14] = 0x001c0680u; fn_001bfe70(cpu);
    }
L_001c0680:;
    {
        cpu->r[3] = rd32(0x001c0688u + + 0x58u);
    }
L_001c0684:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0688:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x24u);
    }
L_001c068c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c0690:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001c0694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0698:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001c069c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001c06a0:;
    {
        cpu->r[14] = 0x001c06a4u; fn_001bfa70(cpu);
    }
L_001c06a4:;
    {
        goto L_001c05e4;
    }
L_001c06a8:;
    {
        cpu->r[14] = 0x001c06acu; fn_001bfe70(cpu);
    }
L_001c06ac:;
    {
        cpu->r[3] = rd32(0x001c06b4u + + 0x2cu);
    }
L_001c06b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c06b4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x24u);
    }
L_001c06b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c06bc:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001c06c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c06c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001c06c8:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001c06cc:;
    {
        cpu->r[14] = 0x001c06d0u; fn_001bf804(cpu);
    }
L_001c06d0:;
    {
        goto L_001c05e4;
    }
L_001c06d4:;
    {
        cpu->r[14] = 0x001c06d8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c06d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 4, 28u, &shc); cpu->r[9] = v;
        }
    }
L_001c06dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c06e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 4, (cpu->r[10] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GLXPlayerLeaderboardD1Ev @ 001c06e4 (arm) */
void fn_001c06e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c06e4:;
    {
        cpu->r[3] = rd32(0x001c06ecu + + 0x2cu);
    }
L_001c06e8:;
    {
        cpu->r[2] = rd32(0x001c06f0u + + 0x2cu);
    }
L_001c06ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c06f4u, cpu->r[3], 0, 0);
    }
L_001c06f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c06f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c06f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c06fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c0700:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c0704:;
    {
        cpu->r[14] = 0x001c0708u; fn_001bfe70(cpu);
    }
L_001c0708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c070c:;
    {
        cpu->r[14] = 0x001c0710u; fn_001b7820(cpu);
    }
L_001c0710:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0714:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0718u)) return;
    }
}

/* _ZN20GLXPlayerLeaderboardD0Ev @ 001c0720 (arm) */
void fn_001c0720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0720:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c0724:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c0728:;
    {
        cpu->r[14] = 0x001c072cu; fn_001c06e4(cpu);
    }
L_001c072c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0730:;
    {
        cpu->r[14] = 0x001c0734u; fn_0018ba20(cpu);
    }
L_001c0734:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0738:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c073cu)) return;
    }
}

/* _ZN20GLXPlayerLeaderboardD2Ev @ 001c073c (arm) */
void fn_001c073c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c073c:;
    {
        cpu->r[3] = rd32(0x001c0744u + + 0x2cu);
    }
L_001c0740:;
    {
        cpu->r[2] = rd32(0x001c0748u + + 0x2cu);
    }
L_001c0744:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c074cu, cpu->r[3], 0, 0);
    }
L_001c0748:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c074c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c0750:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c0754:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c0758:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c075c:;
    {
        cpu->r[14] = 0x001c0760u; fn_001bfe70(cpu);
    }
L_001c0760:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0764:;
    {
        cpu->r[14] = 0x001c0768u; fn_001b7820(cpu);
    }
L_001c0768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c076c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0770u)) return;
    }
}

/* _ZN20GLXPlayerLeaderboardC1Ev @ 001c0778 (arm) */
void fn_001c0778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0778:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c077c:;
    {
        cpu->r[5] = rd32(0x001c0784u + + 0x7cu);
    }
L_001c0780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c0784:;
    {
        cpu->r[14] = 0x001c0788u; fn_001b7954(cpu);
    }
L_001c0788:;
    {
        cpu->r[3] = rd32(0x001c0790u + + 0x74u);
    }
L_001c078c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c0794u, cpu->r[5], 0, 0);
    }
L_001c0790:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0794:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c0798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c079c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c07a0:;
    {
        cpu->r[14] = 0x001c07a4u; fn_001b6ba4(cpu);
    }
L_001c07a4:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c07a8:;
    {
        cpu->r[14] = 0x001c07acu; fn_0018ba6c(cpu);
    }
L_001c07ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c07b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c07b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c07b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c07bc:;
    {
        cpu->r[14] = 0x001c07c0u; fn_001b3dec(cpu);
    }
L_001c07c0:;
    {
        cpu->r[2] = 0x0000d3d6u;
    }
L_001c07c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c07c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfff5u << 16);
    }
L_001c07cc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c07d0:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[2]);
    }
L_001c07d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c07d8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_001c07dc:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c07e0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c07e4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001c07e8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001c07ec:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c07f0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001c07f4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c07f8:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_001c07fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0800u)) return;
    }
}

/* _ZN20GLXPlayerLeaderboardC2Ev @ 001c0808 (arm) */
void fn_001c0808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0808:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c080c:;
    {
        cpu->r[5] = rd32(0x001c0814u + + 0x7cu);
    }
L_001c0810:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c0814:;
    {
        cpu->r[14] = 0x001c0818u; fn_001b7954(cpu);
    }
L_001c0818:;
    {
        cpu->r[3] = rd32(0x001c0820u + + 0x74u);
    }
L_001c081c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c0824u, cpu->r[5], 0, 0);
    }
L_001c0820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0824:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c0828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c082c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c0830:;
    {
        cpu->r[14] = 0x001c0834u; fn_001b6ba4(cpu);
    }
L_001c0834:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c0838:;
    {
        cpu->r[14] = 0x001c083cu; fn_0018ba6c(cpu);
    }
L_001c083c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c0840:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c0844:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c0848:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c084c:;
    {
        cpu->r[14] = 0x001c0850u; fn_001b3dec(cpu);
    }
L_001c0850:;
    {
        cpu->r[2] = 0x0000d3d6u;
    }
L_001c0854:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0858:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfff5u << 16);
    }
L_001c085c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c0860:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[2]);
    }
L_001c0864:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c0868:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_001c086c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c0870:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c0874:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001c0878:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001c087c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c0880:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001c0884:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c0888:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_001c088c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0890u)) return;
    }
}

/* _ZN16GLXPlayerAcademy35getCurrentPlayerLeaderboardPositionEv @ 001c0898 (arm) */
void fn_001c0898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0898:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001c089c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerAcademy34getCurrentPlayerLeaderboardCountryEv @ 001c08a0 (arm) */
void fn_001c08a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c08a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001c08a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerAcademy32getCurrentPlayerLeaderboardScoreEv @ 001c08a8 (arm) */
void fn_001c08a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c08a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_001c08ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerAcademy36getCurrentPlayerLeaderboardScoreDataEv @ 001c08b0 (arm) */
void fn_001c08b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c08b0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x64u);
    }
L_001c08b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerAcademy18getLeaderboardSizeEv @ 001c08b8 (arm) */
void fn_001c08b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c08b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001c08bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c08c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001c08c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
        }
    }
L_001c08c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerAcademy19getLeaderboardEntryEiRPcRiS2_RPiS2_ @ 001c08cc (arm) */
void fn_001c08cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c08cc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c08d0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001c08d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001c08d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0938;
        }
    }
L_001c08dc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x44u);
    }
L_001c08e0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001c08e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c0938;
        }
    }
L_001c08e8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001c08ec:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x50u);
    }
L_001c08f0:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001c08f4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001c08f8:;
    {
        wr32(cpu->r[2], cpu->r[5]);
    }
L_001c08fc:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001c0900:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c0904:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001c0908:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001c090c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x58u);
    }
L_001c0910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0914:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x54u);
        }
    }
L_001c0918:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c091c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c0920:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001c0924:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2], cpu->r[1]);
        }
    }
L_001c0928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c092c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001c0930:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001c0934:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c0938:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c093c:;
    {
        goto L_001c0930;
    }
}

/* _ZN16GLXPlayerAcademy29getLeaderboardEntryPlayerNameEi @ 001c0940 (arm) */
void fn_001c0940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0940:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c0944:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001c0948:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0954;
        }
    }
L_001c094c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c0950:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c0954:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001c0958:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c095c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c0960:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c0964:;
    {
        goto L_001c094c;
    }
}

/* _ZN16GLXPlayerAcademy32getLeaderboardEntryPlayerCountryEi @ 001c0968 (arm) */
void fn_001c0968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0968:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c096c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001c0970:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c097c;
        }
    }
L_001c0974:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c0978:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c097c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001c0980:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0984:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c0988:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c098c:;
    {
        goto L_001c0974;
    }
}

/* _ZN16GLXPlayerAcademy33getLeaderboardEntryPlayerPositionEi @ 001c0990 (arm) */
void fn_001c0990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0990:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c0994:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001c0998:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c09a4;
        }
    }
L_001c099c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001c09a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c09a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001c09a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c09ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c09b0:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c09b4:;
    {
        goto L_001c099c;
    }
}

/* _ZN16GLXPlayerAcademy30getLeaderboardEntryPlayerScoreEi @ 001c09b8 (arm) */
void fn_001c09b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c09b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c09bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001c09c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c09d0;
        }
    }
L_001c09c4:;
    {
        cpu->r[0] = 0x0000d3d6u;
    }
L_001c09c8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xfff5u << 16);
    }
L_001c09cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c09d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001c09d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c09d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c09dc:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c09e0:;
    {
        goto L_001c09c4;
    }
}

/* _ZN16GLXPlayerAcademy34getLeaderboardEntryPlayerScoreDataEi @ 001c09e4 (arm) */
void fn_001c09e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c09e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c09e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001c09ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c09f8;
        }
    }
L_001c09f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c09f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c09f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001c09fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0a00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c0a04:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c0a08:;
    {
        goto L_001c09f0;
    }
}

/* _ZN16GLXPlayerAcademy20processRankingAroundEPc @ 001c0a0c (arm) */
void fn_001c0a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0a0c:;
    {
        cpu->r[2] = rd32(0x001c0a14u + + 0x25cu);
    }
L_001c0a10:;
    {
        cpu->r[3] = rd32(0x001c0a18u + + 0x25cu);
    }
L_001c0a14:;
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
L_001c0a18:;
    {
        cpu->r[2] = add_flags(cpu, 0x001c0a20u, cpu->r[2], 0, 0);
    }
L_001c0a1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001c0a20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c0a24:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c0a28:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c0a2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c0a30:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001c0a34:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001c0a38:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001c0a3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c0a40:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001c0a44:;
    {
        goto L_001c0a58;
    }
L_001c0a48:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001c0a4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c0a50:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001c0a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_001c0a58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0a5c:;
    {
        cpu->r[14] = 0x001c0a60u; fn_001d0434(cpu);
    }
L_001c0a60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001c0a64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0a48;
        }
    }
L_001c0a68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c0a6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0a70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001c0a74:;
    {
        cpu->r[14] = 0x001c0a78u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001c0a78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0a7c:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_001c0a80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0c38;
        }
    }
L_001c0a84:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0a88:;
    {
        cpu->r[14] = 0x001c0a8cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0a8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0a90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c0a94:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_001c0a98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0abc;
        }
    }
L_001c0a9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0aa0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c0aa4:;
    {
        goto L_001c0aac;
    }
L_001c0aa8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c0aac:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001c0ab0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c0ab4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c0ab8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0aa8;
        }
    }
L_001c0abc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0ac0:;
    {
        cpu->r[14] = 0x001c0ac4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0ac4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0ac8:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001c0acc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0ad0:;
    {
        cpu->r[14] = 0x001c0ad4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0ad4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c0ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0adc:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001c0ae0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0c5c;
        }
    }
L_001c0ae4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0ae8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0aec:;
    {
        cpu->r[14] = 0x001c0af0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0af0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0af4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0af8:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_001c0afc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0c38;
        }
    }
L_001c0b00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c0b04:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c0b08:;
    {
        goto L_001c0b10;
    }
L_001c0b0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c0b10:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001c0b14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c0b18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0b1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0b0c;
        }
    }
L_001c0b20:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001c0b24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c0b28:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001c0b2c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0b30:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0b34:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0b38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0b3c:;
    {
        cpu->r[14] = 0x001c0b40u; fn_001d0148(cpu);
    }
L_001c0b40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0b44:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001c0b48:;
    {
        cpu->r[14] = 0x001c0b4cu; fn_001d06cc(cpu);
    }
L_001c0b4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0b50:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0b54:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0b58:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0b5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0b60:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001c0b64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c0b68:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0b6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0b70:;
    {
        cpu->r[14] = 0x001c0b74u; fn_001d0148(cpu);
    }
L_001c0b74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0b78:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c0b7c:;
    {
        cpu->r[14] = 0x001c0b80u; fn_001d0434(cpu);
    }
L_001c0b80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c0b84:;
    {
        cpu->r[14] = 0x001c0b88u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0b88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c0b8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0b90:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0b94:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001c0b98:;
    {
        cpu->r[14] = 0x001c0b9cu; fn_001d06dc(cpu);
    }
L_001c0b9c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c0ba0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0ba4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0ba8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0bac:;
    {
        cpu->r[14] = 0x001c0bb0u; fn_001d0148(cpu);
    }
L_001c0bb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0bb4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x50u);
    }
L_001c0bb8:;
    {
        cpu->r[14] = 0x001c0bbcu; fn_001d06cc(cpu);
    }
L_001c0bbc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0bc0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c0bc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0bc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0c28;
        }
    }
L_001c0bcc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0bd0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c0bd4:;
    {
        cpu->r[14] = 0x001c0bd8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0bd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c0bdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0be0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0be4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0c28;
        }
    }
L_001c0be8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c0bec:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0bf0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0bf4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0bf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0bfc:;
    {
        cpu->r[14] = 0x001c0c00u; fn_001d0148(cpu);
    }
L_001c0c00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c0c04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0c08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0c0c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001c0c10:;
    {
        cpu->r[14] = 0x001c0c14u; fn_001d06cc(cpu);
    }
L_001c0c14:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0c18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c0c1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c0c20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001c0c24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0bec;
        }
    }
L_001c0c28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0c2c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001c0c30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001c0c34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0b2c;
        }
    }
L_001c0c38:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c0c3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c0c40:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001c0c44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001c0c48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c0c4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0c50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c0c6c;
        }
    }
L_001c0c54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001c0c58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0c5cu)) return;
    }
L_001c0c5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c0c60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0c64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0b20;
        }
    }
L_001c0c68:;
    {
        goto L_001c0c38;
    }
L_001c0c6c:;
    {
        cpu->r[14] = 0x001c0c70u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c0c70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[8]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001c0c74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN16GLXPlayerAcademy14processRankingEPc @ 001c0c78 (arm) */
void fn_001c0c78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c0c78:;
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
L_001c0c7c:;
    {
        cpu->r[2] = rd32(0x001c0c84u + + 0x3f8u);
    }
L_001c0c80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001c0c84:;
    {
        cpu->r[3] = rd32(0x001c0c8cu + + 0x3f4u);
    }
L_001c0c88:;
    {
        cpu->r[2] = add_flags(cpu, 0x001c0c90u, cpu->r[2], 0, 0);
    }
L_001c0c8c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c0c90:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001c0c94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c0c98:;
    {
        cpu->r[14] = rd32(cpu->r[13]);
    }
L_001c0c9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0ca0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c0ca4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c0ca8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c0cac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0cb0:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001c0cb4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0cb8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001c0cbc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_001c0cc0:;
    {
        cpu->r[14] = 0x001c0cc4u; fn_001d0148(cpu);
    }
L_001c0cc4:;
    {
        cpu->r[1] = rd32(0x001c0cccu + + 0x3b8u);
    }
L_001c0cc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0ccc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c0cd4u, cpu->r[1], 0, 0);
    }
L_001c0cd0:;
    {
        cpu->r[14] = 0x001c0cd4u; fn_001d06e8(cpu);
    }
L_001c0cd4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c0fcc;
        }
    }
L_001c0cdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0ce0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c0ce4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0ce8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0cec:;
    {
        cpu->r[14] = 0x001c0cf0u; fn_001d0148(cpu);
    }
L_001c0cf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0cf4:;
    {
        cpu->r[14] = 0x001c0cf8u; fn_001d06cc(cpu);
    }
L_001c0cf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0cfc:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001c0d00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c1000;
        }
    }
L_001c0d04:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0d08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0d0c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c0d10:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_001c0d14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0d18:;
    {
        cpu->r[14] = 0x001c0d1cu; fn_001d0148(cpu);
    }
L_001c0d1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0d20:;
    {
        cpu->r[14] = 0x001c0d24u; fn_001d06cc(cpu);
    }
L_001c0d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0d2c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_001c0d30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c106c;
        }
    }
L_001c0d34:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0d38:;
    {
        cpu->r[14] = 0x001c0d3cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0d3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0d40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0d44:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_001c0d48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c106c;
        }
    }
L_001c0d4c:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001c0d50:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0d54:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0d58:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0d5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0d60:;
    {
        cpu->r[14] = 0x001c0d64u; fn_001d0148(cpu);
    }
L_001c0d64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0d68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x64u);
    }
L_001c0d6c:;
    {
        cpu->r[14] = 0x001c0d70u; fn_001d06cc(cpu);
    }
L_001c0d70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0d74:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0d78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c0d7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0d80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c0d84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0d50;
        }
    }
L_001c0d88:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001c0d8c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c0d90:;
    {
        goto L_001c0da4;
    }
L_001c0d94:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_001c0d98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c0d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001c0da0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_001c0da4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0da8:;
    {
        cpu->r[14] = 0x001c0dacu; fn_001d0434(cpu);
    }
L_001c0dac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001c0db0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0d94;
        }
    }
L_001c0db4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001c0db8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0dbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0dc0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x0000fffdu;
        }
    }
L_001c0dc4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_001c0dc8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_001c0dcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001c0dd0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
        }
    }
L_001c0dd4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c0dd8:;
    {
        cpu->r[14] = 0x001c0ddcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001c0ddc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0de0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_001c0de4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0fa8;
        }
    }
L_001c0de8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0dec:;
    {
        cpu->r[14] = 0x001c0df0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0df0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c0df4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c0df8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001c0dfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0e20;
        }
    }
L_001c0e00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0e04:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c0e08:;
    {
        goto L_001c0e10;
    }
L_001c0e0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c0e10:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001c0e14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c0e18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c0e1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0e0c;
        }
    }
L_001c0e20:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0e24:;
    {
        cpu->r[14] = 0x001c0e28u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0e28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c0e2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c0e30:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001c0e34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0e58;
        }
    }
L_001c0e38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c0e3c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c0e40:;
    {
        goto L_001c0e48;
    }
L_001c0e44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c0e48:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001c0e4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c0e50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c0e54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c0e44;
        }
    }
L_001c0e58:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0e5c:;
    {
        cpu->r[14] = 0x001c0e60u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0e60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c0e64:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001c0e68:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0e6c:;
    {
        cpu->r[14] = 0x001c0e70u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0e70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0e74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0e78:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001c0e7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c102c;
        }
    }
L_001c0e80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c0e84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0e88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0fa8;
        }
    }
L_001c0e8c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001c0e90:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0e94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0e98:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0e9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0ea0:;
    {
        cpu->r[14] = 0x001c0ea4u; fn_001d0148(cpu);
    }
L_001c0ea4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0ea8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c0eac:;
    {
        cpu->r[14] = 0x001c0eb0u; fn_001d06cc(cpu);
    }
L_001c0eb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0eb4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0eb8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0ebc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0ec0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0ec4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001c0ec8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c0ecc:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0ed0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0ed4:;
    {
        cpu->r[14] = 0x001c0ed8u; fn_001d0148(cpu);
    }
L_001c0ed8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0edc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c0ee0:;
    {
        cpu->r[14] = 0x001c0ee4u; fn_001d0434(cpu);
    }
L_001c0ee4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c0ee8:;
    {
        cpu->r[14] = 0x001c0eecu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0eec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c0ef0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0ef4:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0ef8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001c0efc:;
    {
        cpu->r[14] = 0x001c0f00u; fn_001d06dc(cpu);
    }
L_001c0f00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c0f04:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c0f08:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001c0f0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0f10:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0f14:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[14]);
    }
L_001c0f18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0f1c:;
    {
        cpu->r[14] = 0x001c0f20u; fn_001d0148(cpu);
    }
L_001c0f20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0f24:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c0f28:;
    {
        cpu->r[14] = 0x001c0f2cu; fn_001d06cc(cpu);
    }
L_001c0f2c:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0f30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0f34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0f38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0f98;
        }
    }
L_001c0f3c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c0f40:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c0f44:;
    {
        cpu->r[14] = 0x001c0f48u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c0f48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0f4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c0f50:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0f54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0f98;
        }
    }
L_001c0f58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c0f5c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c0f60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c0f64:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c0f68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c0f6c:;
    {
        cpu->r[14] = 0x001c0f70u; fn_001d0148(cpu);
    }
L_001c0f70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c0f74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0f78:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c0f7c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001c0f80:;
    {
        cpu->r[14] = 0x001c0f84u; fn_001d06cc(cpu);
    }
L_001c0f84:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001c0f88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c0f8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c0f90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c0f94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0f5c;
        }
    }
L_001c0f98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c0f9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001c0fa0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001c0fa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c0e90;
        }
    }
L_001c0fa8:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001c0fac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c0fb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001c0fb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001c0fb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c0fbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c0fc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1078;
        }
    }
L_001c0fc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001c0fc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c0fccu)) return;
    }
L_001c0fcc:;
    {
        cpu->r[5] = rd32(0x001c0fd4u + + 0xb4u);
    }
L_001c0fd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0fd4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c0fdcu, cpu->r[5], 0, 0);
    }
L_001c0fd8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c0fdc:;
    {
        cpu->r[14] = 0x001c0fe0u; fn_001d06e8(cpu);
    }
L_001c0fe0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c0fe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c0fa8;
        }
    }
L_001c0fe8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c0fec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c0ff0:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_001c0ff4:;
    {
        cpu->r[14] = 0x001c0ff8u; fn_001d06e8(cpu);
    }
L_001c0ff8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001c0ffc:;
    {
        goto L_001c0d8c;
    }
L_001c1000:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c1004:;
    {
        cpu->r[10] = 0x0000fffdu;
    }
L_001c1008:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xffffu << 16);
    }
L_001c100c:;
    {
        cpu->r[3] = 0x0000d3d6u;
    }
L_001c1010:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfff5u << 16);
    }
L_001c1014:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_001c1018:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001c101c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001c1020:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c1024:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c1028:;
    {
        goto L_001c0d8c;
    }
L_001c102c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c1030:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c1034:;
    {
        cpu->r[14] = 0x001c1038u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c1038:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c103c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c1040:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001c1044:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c0fa8;
        }
    }
L_001c1048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c104c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c1050:;
    {
        goto L_001c1058;
    }
L_001c1054:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c1058:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001c105c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c1060:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1064:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c1054;
        }
    }
L_001c1068:;
    {
        goto L_001c0e8c;
    }
L_001c106c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001c1070:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001c1074:;
    {
        goto L_001c0d8c;
    }
L_001c1078:;
    {
        cpu->r[14] = 0x001c107cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c107c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 2, 15u, &shc); cpu->r[9] = v;
        }
    }
L_001c1080:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1084:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 2, 12u, &shc); cpu->r[14] = v;
        }
    }
L_001c1088:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[5]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[5] = wb_tmp;
        }
    }
}

/* _ZN16GLXPlayerAcademy16clearLeaderboardEv @ 001c108c (arm) */
void fn_001c108c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c108c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x44u);
    }
L_001c1090:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c1094:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c1098:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c109c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
        }
    }
L_001c10a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c10fc;
        }
    }
L_001c10a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c10a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c10ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c10e8;
        }
    }
L_001c10b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c10b4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c10b8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c10bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c10c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c10d4;
        }
    }
L_001c10c4:;
    {
        cpu->r[14] = 0x001c10c8u; fn_0018ba60(cpu);
    }
L_001c10c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c10cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c10d0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c10d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c10d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c10dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c10b8;
        }
    }
L_001c10e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c10e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c10f4;
        }
    }
L_001c10e8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c10ec:;
    {
        cpu->r[14] = 0x001c10f0u; fn_0018ba60(cpu);
    }
L_001c10f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c10f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c10f8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001c10fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c1100:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c1104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c115c;
        }
    }
L_001c1108:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c110c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c1148;
        }
    }
L_001c1110:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c1114:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c1118:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c111c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c1120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1134;
        }
    }
L_001c1124:;
    {
        cpu->r[14] = 0x001c1128u; fn_0018ba60(cpu);
    }
L_001c1128:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c112c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c1130:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c1134:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c1138:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c113c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c1118;
        }
    }
L_001c1140:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c1144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1154;
        }
    }
L_001c1148:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c114c:;
    {
        cpu->r[14] = 0x001c1150u; fn_0018ba60(cpu);
    }
L_001c1150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c1154:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c1158:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001c115c:;
    {
        cpu->r[2] = 0x0000d3d6u;
    }
L_001c1160:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c1164:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfff5u << 16);
    }
L_001c1168:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001c116c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c1170:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
        }
    }
L_001c1174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c11e0;
        }
    }
L_001c1178:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c117c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
        }
    }
L_001c1180:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c11c0;
        }
    }
L_001c1184:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c1188:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c118c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c1190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c11b4;
        }
    }
L_001c1194:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c1198:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c119c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c11b4;
        }
    }
L_001c11a0:;
    {
        cpu->r[14] = 0x001c11a4u; fn_0018ba20(cpu);
    }
L_001c11a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c11a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c11ac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001c11b0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c11b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c11b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c11bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c118c;
        }
    }
L_001c11c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c11c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c11d8;
        }
    }
L_001c11c8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001c11cc:;
    {
        cpu->r[14] = 0x001c11d0u; fn_0018ba20(cpu);
    }
L_001c11d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c11d4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c11d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c11dc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c11e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c11e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c11e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c11f8;
        }
    }
L_001c11ec:;
    {
        cpu->r[14] = 0x001c11f0u; fn_0018ba20(cpu);
    }
L_001c11f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c11f4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c11f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c11fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c1200:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001c1204:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001c1208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1214;
        }
    }
L_001c120c:;
    {
        cpu->r[14] = 0x001c1210u; fn_0018ba20(cpu);
    }
L_001c1210:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001c1214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_001c1218:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c121c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001c1220:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001c1224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1230;
        }
    }
L_001c1228:;
    {
        cpu->r[14] = 0x001c122cu; fn_0018ba20(cpu);
    }
L_001c122c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001c1230:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_001c1234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c1238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1248;
        }
    }
L_001c123c:;
    {
        cpu->r[14] = 0x001c1240u; fn_0018ba20(cpu);
    }
L_001c1240:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c1244:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c1248:;
    {
        cpu->r[3] = 0x0000d3d6u;
    }
L_001c124c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c1250:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfff5u << 16);
    }
L_001c1254:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c1258:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c125c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c1260:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c1264:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1268u)) return;
    }
}

/* _ZN16GLXPlayerAcademy11UploadScoreEii @ 001c1268 (arm) */
void fn_001c1268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1268:;
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
L_001c126c:;
    {
        cpu->r[10] = rd32(0x001c1274u + + 0xb4u);
    }
L_001c1270:;
    {
        cpu->r[3] = rd32(0x001c1278u + + 0xb4u);
    }
L_001c1274:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c1278:;
    {
        cpu->r[10] = add_flags(cpu, 0x001c1280u, cpu->r[10], 0, 0);
    }
L_001c127c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c1280:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c1284:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1288:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001c128c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c1290:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c1294:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c1298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c129c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c12a0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c12a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c12a8:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c12ac:;
    {
        cpu->r[14] = 0x001c12b0u; fn_001d0700(cpu);
    }
L_001c12b0:;
    {
        cpu->r[3] = rd32(0x001c12b8u + + 0x78u);
    }
L_001c12b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c12b8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c12bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c12c0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001c12c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c12c8:;
    {
        cpu->r[14] = 0x001c12ccu; fn_000f33a8(cpu);
    }
L_001c12cc:;
    {
        cpu->r[1] = rd32(0x001c12d4u + + 0x60u);
    }
L_001c12d0:;
    {
        cpu->r[2] = 0x00000065u;
    }
L_001c12d4:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001c12d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c12e0u, cpu->r[1], 0, 0);
    }
L_001c12dc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001c12e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001c12e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c12e8:;
    {
        cpu->r[14] = 0x001c12ecu; imp_sprintf(cpu); /* sprintf */
    }
L_001c12ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c12f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c12f4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001c12f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c12fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c1300:;
    {
        cpu->r[14] = 0x001c1308u;
    }
L_001c1304:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1308u)) return;
    }
L_001c1308:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c130c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c1310:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1314:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1324;
        }
    }
L_001c1318:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c131c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c1320:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1324u)) return;
    }
L_001c1324:;
    {
        cpu->r[14] = 0x001c1328u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c1328:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[8] = v;
        }
    }
L_001c132c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1330:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001c1334:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, 26u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1338u)) return;
        }
    }
}

/* _ZN16GLXPlayerAcademy17SendGetWeekPastedEv @ 001c1338 (arm) */
void fn_001c1338(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1338:;
    {
        cpu->r[3] = rd32(0x001c1340u + + 0x84u);
    }
L_001c133c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1340:;
    {
        cpu->r[2] = rd32(0x001c1348u + + 0x80u);
    }
L_001c1344:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c134cu, cpu->r[3], 0, 0);
    }
L_001c1348:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c134c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1350:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c1354:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1358:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c135c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c1360:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c1364:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c1368:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c136c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c1370:;
    {
        cpu->r[14] = 0x001c1374u; fn_001d0700(cpu);
    }
L_001c1374:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c1378:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001c137c:;
    {
        cpu->r[1] = rd32(0x001c1384u + + 0x48u);
    }
L_001c1380:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c1388:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1390u, cpu->r[1], 0, 0);
    }
L_001c138c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1390:;
    {
        cpu->r[14] = 0x001c1394u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1394:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c1398:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c139c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c13a0:;
    {
        cpu->r[14] = 0x001c13a8u;
    }
L_001c13a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c13a8u)) return;
    }
L_001c13a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c13ac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c13b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c13b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c13c0;
        }
    }
L_001c13b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c13bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c13c0u)) return;
    }
L_001c13c0:;
    {
        cpu->r[14] = 0x001c13c4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c13c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 1, 1u, &shc); cpu->r[9] = v;
        }
    }
L_001c13c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c13cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, 25u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c13d0u)) return;
        }
    }
}

/* _ZN16GLXPlayerAcademy11initAcademyEv @ 001c13d0 (arm) */
void fn_001c13d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c13d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c13d4:;
    {
        wr8(cpu->r[0] + + 0x6cu, cpu->r[3]);
    }
L_001c13d8:;
    {
        return fn_001c1338(cpu);
    }
}

/* _ZN16GLXPlayerAcademy10SendGetCarEi @ 001c13dc (arm) */
void fn_001c13dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c13dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c13e0:;
    {
        cpu->r[4] = rd32(0x001c13e8u + + 0xb8u);
    }
L_001c13e4:;
    {
        cpu->r[7] = rd32(0x001c13ecu + + 0xb8u);
    }
L_001c13e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c13ec:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c13f4u, cpu->r[4], 0, 0);
    }
L_001c13f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c13f4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c13f8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c13fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1400:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c1404:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1408:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c140c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c1410:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c1414:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c1418:;
    {
        cpu->r[14] = 0x001c141cu; fn_001d0700(cpu);
    }
L_001c141c:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c1420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1478;
        }
    }
L_001c1424:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c1428:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c142c:;
    {
        cpu->r[1] = rd32(0x001c1434u + + 0x74u);
    }
L_001c1430:;
    {
        cpu->r[2] = 0x0000001fu;
    }
L_001c1434:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c1438:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1440u, cpu->r[1], 0, 0);
    }
L_001c143c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001c1440:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1444:;
    {
        cpu->r[14] = 0x001c1448u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1448:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c144c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1450:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c1454:;
    {
        cpu->r[14] = 0x001c145cu;
    }
L_001c1458:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c145cu)) return;
    }
L_001c145c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1460:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c1464:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c1468:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c146c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c149c;
        }
    }
L_001c1470:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c1474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1478u)) return;
    }
L_001c1478:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c147c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c1480:;
    {
        cpu->r[1] = rd32(0x001c1488u + + 0x24u);
    }
L_001c1484:;
    {
        cpu->r[2] = 0x0000001fu;
    }
L_001c1488:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c148c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1494u, cpu->r[1], 0, 0);
    }
L_001c1490:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1494:;
    {
        cpu->r[14] = 0x001c1498u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1498:;
    {
        goto L_001c1448;
    }
L_001c149c:;
    {
        cpu->r[14] = 0x001c14a0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c14a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 3, 32u, &shc); cpu->r[9] = v;
        }
    }
L_001c14a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c14a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 2, 24u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c14acu)) return;
        }
    }
L_001c14ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[6] = v;
        }
    }
}

/* _ZN16GLXPlayerAcademy12SendGetTrackEi @ 001c14b0 (arm) */
void fn_001c14b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c14b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c14b4:;
    {
        cpu->r[4] = rd32(0x001c14bcu + + 0xb8u);
    }
L_001c14b8:;
    {
        cpu->r[7] = rd32(0x001c14c0u + + 0xb8u);
    }
L_001c14bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c14c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c14c8u, cpu->r[4], 0, 0);
    }
L_001c14c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c14c8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c14cc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c14d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c14d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c14d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c14dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c14e0:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c14e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c14e8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c14ec:;
    {
        cpu->r[14] = 0x001c14f0u; fn_001d0700(cpu);
    }
L_001c14f0:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c14f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c154c;
        }
    }
L_001c14f8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c14fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c1500:;
    {
        cpu->r[1] = rd32(0x001c1508u + + 0x74u);
    }
L_001c1504:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_001c1508:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c150c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1514u, cpu->r[1], 0, 0);
    }
L_001c1510:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001c1514:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1518:;
    {
        cpu->r[14] = 0x001c151cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c151c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c1520:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1524:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c1528:;
    {
        cpu->r[14] = 0x001c1530u;
    }
L_001c152c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1530u)) return;
    }
L_001c1530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1534:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c1538:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c153c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1570;
        }
    }
L_001c1544:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c1548:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c154cu)) return;
    }
L_001c154c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c1550:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c1554:;
    {
        cpu->r[1] = rd32(0x001c155cu + + 0x24u);
    }
L_001c1558:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_001c155c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c1560:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1568u, cpu->r[1], 0, 0);
    }
L_001c1564:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1568:;
    {
        cpu->r[14] = 0x001c156cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c156c:;
    {
        goto L_001c151c;
    }
L_001c1570:;
    {
        cpu->r[14] = 0x001c1574u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c1574:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 1, (0x001c157cu & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_001c1578:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c157c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 3, (cpu->r[11] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1580u)) return;
        }
    }
L_001c1580:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 1, 21u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1584u)) return;
        }
    }
}

/* _ZN16GLXPlayerAcademy18SendGetRealRankingEi @ 001c1584 (arm) */
void fn_001c1584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1584:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c1588:;
    {
        cpu->r[4] = rd32(0x001c1590u + + 0xccu);
    }
L_001c158c:;
    {
        cpu->r[7] = rd32(0x001c1594u + + 0xccu);
    }
L_001c1590:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c1594:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c159cu, cpu->r[4], 0, 0);
    }
L_001c1598:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c159c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c15a0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c15a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c15a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c15ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c15b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c15b4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c15b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c15bc:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c15c0:;
    {
        cpu->r[14] = 0x001c15c4u; fn_001d0700(cpu);
    }
L_001c15c4:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c15c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1634;
        }
    }
L_001c15cc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c15d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c15d4:;
    {
        cpu->r[1] = rd32(0x001c15dcu + + 0x88u);
    }
L_001c15d8:;
    {
        cpu->r[2] = 0x00000072u;
    }
L_001c15dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c15e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c15e8u, cpu->r[1], 0, 0);
    }
L_001c15e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001c15e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c15ec:;
    {
        cpu->r[14] = 0x001c15f0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c15f0:;
    {
        cpu->r[3] = rd32(0x001c15f8u + + 0x70u);
    }
L_001c15f4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c15f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c15fc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c1600:;
    {
        cpu->r[14] = 0x001c1604u; fn_001933d4(cpu);
    }
L_001c1604:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c1608:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c160c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c1610:;
    {
        cpu->r[14] = 0x001c1618u;
    }
L_001c1614:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1618u)) return;
    }
L_001c1618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c161c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c1620:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c1624:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1658;
        }
    }
L_001c162c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c1630:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1634u)) return;
    }
L_001c1634:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c1638:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c163c:;
    {
        cpu->r[1] = rd32(0x001c1644u + + 0x28u);
    }
L_001c1640:;
    {
        cpu->r[2] = 0x00000072u;
    }
L_001c1644:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c1648:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1650u, cpu->r[1], 0, 0);
    }
L_001c164c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1650:;
    {
        cpu->r[14] = 0x001c1654u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1654:;
    {
        goto L_001c15f0;
    }
L_001c1658:;
    {
        cpu->r[14] = 0x001c165cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c165c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_001c1660:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1664:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[10]; cpu->r[6] = v;
        }
    }
L_001c1668:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001c166c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 2, (cpu->r[10] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1670u)) return;
        }
    }
}

/* _ZN16GLXPlayerAcademy20SendGetRankingAroundEii @ 001c1670 (arm) */
void fn_001c1670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1670:;
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
L_001c1674:;
    {
        cpu->r[4] = rd32(0x001c167cu + + 0xe0u);
    }
L_001c1678:;
    {
        cpu->r[7] = rd32(0x001c1680u + + 0xe0u);
    }
L_001c167c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c1680:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c1688u, cpu->r[4], 0, 0);
    }
L_001c1684:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c1688:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c168c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c1690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1694:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c1698:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c169c:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c16a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c16a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c16a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c16ac:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c16b0:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c16b4:;
    {
        cpu->r[14] = 0x001c16b8u; fn_001d0700(cpu);
    }
L_001c16b8:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c16bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1730;
        }
    }
L_001c16c0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c16c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c16c8:;
    {
        cpu->r[1] = rd32(0x001c16d0u + + 0x94u);
    }
L_001c16cc:;
    {
        cpu->r[2] = 0x00000071u;
    }
L_001c16d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c16d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c16dcu, cpu->r[1], 0, 0);
    }
L_001c16d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c16dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_001c16e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c16e4:;
    {
        cpu->r[14] = 0x001c16e8u; imp_sprintf(cpu); /* sprintf */
    }
L_001c16e8:;
    {
        cpu->r[3] = rd32(0x001c16f0u + + 0x78u);
    }
L_001c16ec:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c16f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c16f4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c16f8:;
    {
        cpu->r[14] = 0x001c16fcu; fn_001933d4(cpu);
    }
L_001c16fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c1700:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1704:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c1708:;
    {
        cpu->r[14] = 0x001c1710u;
    }
L_001c170c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1710u)) return;
    }
L_001c1710:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1714:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c1718:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c171c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1758;
        }
    }
L_001c1724:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001c1728:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c172c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1730u)) return;
    }
L_001c1730:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c1734:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c1738:;
    {
        cpu->r[1] = rd32(0x001c1740u + + 0x2cu);
    }
L_001c173c:;
    {
        cpu->r[2] = 0x00000071u;
    }
L_001c1740:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c1744:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c174cu, cpu->r[1], 0, 0);
    }
L_001c1748:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c174c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c1750:;
    {
        cpu->r[14] = 0x001c1754u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1754:;
    {
        goto L_001c16e8;
    }
L_001c1758:;
    {
        cpu->r[14] = 0x001c175cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c175c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[13]; cpu->r[8] = v;
        }
    }
L_001c1760:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1764:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 4, 19u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1768u)) return;
        }
    }
L_001c1768:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001c176c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, (cpu->r[9] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1770u)) return;
        }
    }
}

/* _ZN16GLXPlayerAcademy17SendGetRankingTopEiii @ 001c1770 (arm) */
void fn_001c1770(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1770:;
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
L_001c1774:;
    {
        cpu->r[4] = rd32(0x001c177cu + + 0xecu);
    }
L_001c1778:;
    {
        cpu->r[7] = rd32(0x001c1780u + + 0xecu);
    }
L_001c177c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c1780:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c1788u, cpu->r[4], 0, 0);
    }
L_001c1784:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c1788:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c178c:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001c1790:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c1794:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c1798:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c179c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c17a0:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c17a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c17a8:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c17ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c17b0:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c17b4:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c17b8:;
    {
        cpu->r[14] = 0x001c17bcu; fn_001d0700(cpu);
    }
L_001c17bc:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c17c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1838;
        }
    }
L_001c17c4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c17c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c17cc:;
    {
        cpu->r[1] = rd32(0x001c17d4u + + 0x9cu);
    }
L_001c17d0:;
    {
        cpu->r[2] = 0x00000070u;
    }
L_001c17d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c17d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c17e0u, cpu->r[1], 0, 0);
    }
L_001c17dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c17e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001c17e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c17e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001c17ec:;
    {
        cpu->r[14] = 0x001c17f0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c17f0:;
    {
        cpu->r[3] = rd32(0x001c17f8u + + 0x7cu);
    }
L_001c17f4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c17f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c17fc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c1800:;
    {
        cpu->r[14] = 0x001c1804u; fn_001933d4(cpu);
    }
L_001c1804:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c1808:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c180c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c1810:;
    {
        cpu->r[14] = 0x001c1818u;
    }
L_001c1814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1818u)) return;
    }
L_001c1818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c181c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c1820:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c1824:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1864;
        }
    }
L_001c182c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c1830:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c1834:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1838u)) return;
    }
L_001c1838:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c183c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c1840:;
    {
        cpu->r[1] = rd32(0x001c1848u + + 0x30u);
    }
L_001c1844:;
    {
        cpu->r[2] = 0x00000070u;
    }
L_001c1848:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c184c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1854u, cpu->r[1], 0, 0);
    }
L_001c1850:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001c1854:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001c1858:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c185c:;
    {
        cpu->r[14] = 0x001c1860u; imp_sprintf(cpu); /* sprintf */
    }
L_001c1860:;
    {
        goto L_001c17f0;
    }
L_001c1864:;
    {
        cpu->r[14] = 0x001c1868u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c1868:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[8] = v;
        }
    }
L_001c186c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1870:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 3, 18u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001c1874u)) return;
        }
    }
L_001c1874:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_001c1878:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[6] = v;
        }
    }
}

/* _ZN16GLXPlayerAcademy15OnUpdateFailureEi @ 001c187c (arm) */
void fn_001c187c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c187c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c1880:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001c1884:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c1888:;
    {
        cpu->r[14] = 0x001c188cu; fn_001b71a0(cpu);
    }
L_001c188c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000065u, 1, 1);
    }
L_001c1890:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c1894:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001c1898:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
        }
    }
L_001c189c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c18a0u)) return;
    }
}

/* _ZN16GLXPlayerAcademy15OnUpdateSuccessEi @ 001c18a0 (arm) */
void fn_001c18a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c18a0:;
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
L_001c18a4:;
    {
        cpu->r[4] = rd32(0x001c18acu + + 0x5a8u);
    }
L_001c18a8:;
    {
        cpu->r[6] = rd32(0x001c18b0u + + 0x5a8u);
    }
L_001c18ac:;
    {
        cpu->r[3] = 0x00000259u;
    }
L_001c18b0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c18b8u, cpu->r[4], 0, 0);
    }
L_001c18b4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c18b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001c18bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c18c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c18c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c18c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c18cc:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001c18d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1d98;
        }
    }
L_001c18d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c19b8;
        }
    }
L_001c18d8:;
    {
        cpu->r[3] = 0x00000265u;
    }
L_001c18dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c18e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1be0;
        }
    }
L_001c18e4:;
    {
        cpu->r[3] = 0x00000266u;
    }
L_001c18e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c18ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1b44;
        }
    }
L_001c18f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000264u, 1, 1);
    }
L_001c18f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1994;
        }
    }
L_001c18f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c18fc:;
    {
        cpu->r[14] = 0x001c1900u; fn_001c108c(cpu);
    }
L_001c1900:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c1904:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1908:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c190c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c1910:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1914:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_001c1918:;
    {
        cpu->r[14] = 0x001c191cu; fn_001d0700(cpu);
    }
L_001c191c:;
    {
        cpu->r[3] = rd32(0x001c1924u + + 0x538u);
    }
L_001c1920:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1924:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1928:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c192c:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001c1930:;
    {
        cpu->r[14] = 0x001c1934u; fn_001b6fec(cpu);
    }
L_001c1934:;
    {
        cpu->r[14] = 0x001c1938u; fn_001d06cc(cpu);
    }
L_001c1938:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c193c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1940:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1944:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001c1948:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c194c:;
    {
        cpu->r[14] = 0x001c1950u; fn_001d0700(cpu);
    }
L_001c1950:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1954:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1958:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001c195c:;
    {
        cpu->r[14] = 0x001c1960u; fn_001b6fec(cpu);
    }
L_001c1960:;
    {
        cpu->r[14] = 0x001c1964u; fn_001d06cc(cpu);
    }
L_001c1964:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_001c1968:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001c196c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_001c1970:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1974:;
    {
        cpu->r[14] = 0x001c1978u; fn_001c0c78(cpu);
    }
L_001c1978:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001c197c:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_001c1980:;
    {
        cpu->r[14] = 0x001c1984u; fn_001933d4(cpu);
    }
L_001c1984:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x6cu);
    }
L_001c1988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c198c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001c1990:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x6cu, cpu->r[3]);
        }
    }
L_001c1994:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c1998:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c199c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001c19a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c19a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c19a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1e50;
        }
    }
L_001c19ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c19b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c19b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c19b8u)) return;
    }
L_001c19b8:;
    {
        cpu->r[3] = 0x00000213u;
    }
L_001c19bc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c19c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1c70;
        }
    }
L_001c19c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000214u, 1, 1);
    }
L_001c19c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1ae8;
        }
    }
L_001c19cc:;
    {
        cpu->r[3] = 0x00000212u;
    }
L_001c19d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001c19d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1994;
        }
    }
L_001c19d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c19dc:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c19e0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c19e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c19e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c19ec:;
    {
        cpu->r[14] = 0x001c19f0u; fn_001d0700(cpu);
    }
L_001c19f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c19f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c19f8:;
    {
        cpu->r[14] = 0x001c19fcu; fn_001b6fec(cpu);
    }
L_001c19fc:;
    {
        cpu->r[14] = 0x001c1a00u; fn_001d06cc(cpu);
    }
L_001c1a00:;
    {
        cpu->r[3] = rd32(0x001c1a08u + + 0x454u);
    }
L_001c1a04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1a08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1a0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c1a10:;
    {
        cpu->r[9] = rd32(cpu->r[8]);
    }
L_001c1a14:;
    {
        cpu->r[14] = 0x001c1a18u; fn_001b6fec(cpu);
    }
L_001c1a18:;
    {
        cpu->r[14] = 0x001c1a1cu; fn_001d06cc(cpu);
    }
L_001c1a1c:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c1a20:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1a24:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001c1a28:;
    {
        wr32(cpu->r[9] + cpu->r[3], cpu->r[0]);
    }
L_001c1a2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1a30:;
    {
        cpu->r[14] = 0x001c1a34u; fn_001b6fec(cpu);
    }
L_001c1a34:;
    {
        cpu->r[14] = 0x001c1a38u; fn_001d06cc(cpu);
    }
L_001c1a38:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_001c1a3c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1a40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1a44:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001c1a48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1a4c:;
    {
        cpu->r[14] = 0x001c1a50u; fn_001d0700(cpu);
    }
L_001c1a50:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1a54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1a58:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001c1a5c:;
    {
        cpu->r[14] = 0x001c1a60u; fn_001b6fec(cpu);
    }
L_001c1a60:;
    {
        cpu->r[14] = 0x001c1a64u; fn_001d06cc(cpu);
    }
L_001c1a64:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001c1a68:;
    {
        cpu->r[2] = 0x00006f97u;
    }
L_001c1a6c:;
    {
        cpu->r[1] = 0x00001c58u;
    }
L_001c1a70:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x96f9u << 16);
    }
L_001c1a74:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x43cu);
    }
L_001c1a78:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x438u);
    }
L_001c1a7c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_001c1a80:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_001c1a84:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[2] = v;
    }
L_001c1a88:;
    {
        wr32(cpu->r[7] + cpu->r[1], cpu->r[0]);
    }
L_001c1a8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001c1a90:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c1a94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001c1a98:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
        }
    }
L_001c1a9c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x6cu);
    }
L_001c1aa0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c1aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1994;
        }
    }
L_001c1aa8:;
    {
        cpu->r[2] = 0x00001c74u;
    }
L_001c1aac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1ab0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1ab4:;
    {
        cpu->r[2] = 0x00001c78u;
    }
L_001c1ab8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1abc:;
    {
        cpu->r[2] = 0x00001c58u;
    }
L_001c1ac0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1ac4:;
    {
        cpu->r[2] = 0x00001c6cu;
    }
L_001c1ac8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001c1acc:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_001c1ad0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001c1ad4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_001c1ad8:;
    {
        cpu->r[2] = 0x00001c64u;
    }
L_001c1adc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001c1ae0:;
    {
        cpu->r[14] = 0x001c1ae4u; fn_001c13dc(cpu);
    }
L_001c1ae4:;
    {
        goto L_001c1994;
    }
L_001c1ae8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c1aec:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1af0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c1af4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1af8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1afc:;
    {
        cpu->r[14] = 0x001c1b00u; fn_001d0700(cpu);
    }
L_001c1b00:;
    {
        cpu->r[3] = rd32(0x001c1b08u + + 0x354u);
    }
L_001c1b04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1b08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1b0c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c1b10:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_001c1b14:;
    {
        cpu->r[14] = 0x001c1b18u; fn_001b6fec(cpu);
    }
L_001c1b18:;
    {
        cpu->r[14] = 0x001c1b1cu; fn_001d06cc(cpu);
    }
L_001c1b1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001c1b20:;
    {
        cpu->r[2] = 0x00001c80u;
    }
L_001c1b24:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[0]);
    }
L_001c1b28:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1b2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001c1b30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c1e10;
        }
    }
L_001c1b34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1b38:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001c1b3c:;
    {
        cpu->r[14] = 0x001c1b40u; fn_001c1584(cpu);
    }
L_001c1b40:;
    {
        goto L_001c1994;
    }
L_001c1b44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c1b48:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1b4c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c1b50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1b54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1b58:;
    {
        cpu->r[14] = 0x001c1b5cu; fn_001d0700(cpu);
    }
L_001c1b5c:;
    {
        cpu->r[3] = rd32(0x001c1b64u + + 0x2f8u);
    }
L_001c1b60:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1b64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1b68:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c1b6c:;
    {
        cpu->r[9] = rd32(cpu->r[8]);
    }
L_001c1b70:;
    {
        cpu->r[14] = 0x001c1b74u; fn_001b6fec(cpu);
    }
L_001c1b74:;
    {
        cpu->r[14] = 0x001c1b78u; fn_001d06cc(cpu);
    }
L_001c1b78:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c1b7c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1b80:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001c1b84:;
    {
        wr32(cpu->r[9] + cpu->r[3], cpu->r[0]);
    }
L_001c1b88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1b8c:;
    {
        cpu->r[14] = 0x001c1b90u; fn_001b6fec(cpu);
    }
L_001c1b90:;
    {
        cpu->r[14] = 0x001c1b94u; fn_001d06cc(cpu);
    }
L_001c1b94:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_001c1b98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1b9c:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001c1ba0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1ba4:;
    {
        cpu->r[14] = 0x001c1ba8u; fn_001b6fec(cpu);
    }
L_001c1ba8:;
    {
        cpu->r[1] = rd32(0x001c1bb0u + + 0x2b0u);
    }
L_001c1bac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c1bb4u, cpu->r[1], 0, 0);
    }
L_001c1bb0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c1bb4:;
    {
        cpu->r[14] = 0x001c1bb8u; fn_001d06e8(cpu);
    }
L_001c1bb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c1bbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1df8;
        }
    }
L_001c1bc0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001c1bc4:;
    {
        cpu->r[3] = 0x00001c7cu;
    }
L_001c1bc8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001c1bcc:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001c1bd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1bd4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001c1bd8:;
    {
        cpu->r[14] = 0x001c1bdcu; fn_001c14b0(cpu);
    }
L_001c1bdc:;
    {
        goto L_001c1994;
    }
L_001c1be0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c1be4:;
    {
        cpu->r[14] = 0x001c1be8u; fn_001c108c(cpu);
    }
L_001c1be8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c1bec:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1bf0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1bf4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c1bf8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1bfc:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_001c1c00:;
    {
        cpu->r[14] = 0x001c1c04u; fn_001d0700(cpu);
    }
L_001c1c04:;
    {
        cpu->r[3] = rd32(0x001c1c0cu + + 0x250u);
    }
L_001c1c08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1c0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1c10:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c1c14:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001c1c18:;
    {
        cpu->r[14] = 0x001c1c1cu; fn_001b6fec(cpu);
    }
L_001c1c1c:;
    {
        cpu->r[14] = 0x001c1c20u; fn_001d06cc(cpu);
    }
L_001c1c20:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c1c24:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1c28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1c2c:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001c1c30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1c34:;
    {
        cpu->r[14] = 0x001c1c38u; fn_001d0700(cpu);
    }
L_001c1c38:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1c3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1c40:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001c1c44:;
    {
        cpu->r[14] = 0x001c1c48u; fn_001b6fec(cpu);
    }
L_001c1c48:;
    {
        cpu->r[14] = 0x001c1c4cu; fn_001d06cc(cpu);
    }
L_001c1c4c:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_001c1c50:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001c1c54:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_001c1c58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1c5c:;
    {
        cpu->r[14] = 0x001c1c60u; fn_001c0a0c(cpu);
    }
L_001c1c60:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001c1c64:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_001c1c68:;
    {
        cpu->r[14] = 0x001c1c6cu; fn_001933d4(cpu);
    }
L_001c1c6c:;
    {
        goto L_001c1994;
    }
L_001c1c70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c1c74:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1c78:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001c1c7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1c80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1c84:;
    {
        cpu->r[9] = rd32(0x001c1c8cu + + 0x1d0u);
    }
L_001c1c88:;
    {
        cpu->r[14] = 0x001c1c8cu; fn_001d0700(cpu);
    }
L_001c1c8c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1c90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1c94:;
    {
        cpu->r[10] = 0x00001c54u;
    }
L_001c1c98:;
    {
        cpu->r[14] = 0x001c1c9cu; fn_001b6fec(cpu);
    }
L_001c1c9c:;
    {
        cpu->r[14] = 0x001c1ca0u; fn_001d06cc(cpu);
    }
L_001c1ca0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001c1ca4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1ca8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1cac:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_001c1cb0:;
    {
        cpu->r[14] = 0x001c1cb4u; fn_001b6fec(cpu);
    }
L_001c1cb4:;
    {
        cpu->r[14] = 0x001c1cb8u; fn_001d06cc(cpu);
    }
L_001c1cb8:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c1cbc:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1cc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1cc4:;
    {
        wr32(cpu->r[11] + cpu->r[3], cpu->r[0]);
    }
L_001c1cc8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1ccc:;
    {
        cpu->r[14] = 0x001c1cd0u; fn_001d0700(cpu);
    }
L_001c1cd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1cd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1cd8:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_001c1cdc:;
    {
        cpu->r[14] = 0x001c1ce0u; fn_001b6fec(cpu);
    }
L_001c1ce0:;
    {
        cpu->r[14] = 0x001c1ce4u; fn_001d06cc(cpu);
    }
L_001c1ce4:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_001c1ce8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c1cec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c1cf0:;
    {
        wr32(cpu->r[11] + cpu->r[3], cpu->r[0]);
    }
L_001c1cf4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1cf8:;
    {
        cpu->r[14] = 0x001c1cfcu; fn_001d0700(cpu);
    }
L_001c1cfc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1d00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1d04:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001c1d08:;
    {
        cpu->r[14] = 0x001c1d0cu; fn_001b6fec(cpu);
    }
L_001c1d0c:;
    {
        cpu->r[14] = 0x001c1d10u; fn_001d06cc(cpu);
    }
L_001c1d10:;
    {
        wr32(cpu->r[7] + cpu->r[10], cpu->r[0]);
    }
L_001c1d14:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001c1d18:;
    {
        cpu->r[14] = 0x001c1d1cu; fn_00096114(cpu);
    }
L_001c1d1c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001c1d20:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_001c1d24:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c1d28:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001c1d2c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[2]);
        }
    }
L_001c1d30:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x6cu);
    }
L_001c1d34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c1d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1994;
        }
    }
L_001c1d3c:;
    {
        cpu->r[2] = 0x00001c54u;
    }
L_001c1d40:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1d44:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_001c1d48:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001c1d4c:;
    {
        cpu->r[14] = 0x001c1d50u; fn_000979a0(cpu);
    }
L_001c1d50:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_001c1d54:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001c1d58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1e2c;
        }
    }
L_001c1d5c:;
    {
        cpu->r[14] = 0x001c1d60u; fn_000979a0(cpu);
    }
L_001c1d60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001c1d64:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001c1d68:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_001c1d6c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001c1d70:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8cu);
    }
L_001c1d74:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c1d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1e38;
        }
    }
L_001c1d7c:;
    {
        cpu->r[12] = 0x00001c80u;
    }
L_001c1d80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1d84:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001c1d88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c1d8c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001c1d90:;
    {
        cpu->r[14] = 0x001c1d94u; fn_001c1770(cpu);
    }
L_001c1d94:;
    {
        goto L_001c1994;
    }
L_001c1d98:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x6cu);
    }
L_001c1d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c1da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1dec;
        }
    }
L_001c1da4:;
    {
        cpu->r[14] = 0x001c1da8u; fn_000979a0(cpu);
    }
L_001c1da8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c1dac:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001c1db0:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[3]);
    }
L_001c1db4:;
    {
        cpu->r[14] = 0x001c1db8u; fn_000979a0(cpu);
    }
L_001c1db8:;
    {
        cpu->r[3] = rd32(0x001c1dc0u + + 0x9cu);
    }
L_001c1dbc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c1dc0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c1dc4:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[7]);
    }
L_001c1dc8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001c1dcc:;
    {
        cpu->r[14] = 0x001c1dd0u; fn_0009e9e8(cpu);
    }
L_001c1dd0:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_001c1dd4:;
    {
        cpu->r[1] = 0x00001c80u;
    }
L_001c1dd8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001c1ddc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1de0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001c1de4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_001c1de8:;
    {
        cpu->r[14] = 0x001c1decu; fn_001c1770(cpu);
    }
L_001c1dec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c1df0:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_001c1df4:;
    {
        goto L_001c1994;
    }
L_001c1df8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c1dfc:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001c1e00:;
    {
        cpu->r[14] = 0x001c1e04u; fn_001d06cc(cpu);
    }
L_001c1e04:;
    {
        cpu->r[3] = 0x00001c7cu;
    }
L_001c1e08:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_001c1e0c:;
    {
        goto L_001c1bd0;
    }
L_001c1e10:;
    {
        cpu->r[12] = 0x00001c7cu;
    }
L_001c1e14:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001c1e18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1e1c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c1e20:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[2]);
    }
L_001c1e24:;
    {
        cpu->r[14] = 0x001c1e28u; fn_001c14b0(cpu);
    }
L_001c1e28:;
    {
        goto L_001c1994;
    }
L_001c1e2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001c1e30:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001c1e34:;
    {
        goto L_001c1d7c;
    }
L_001c1e38:;
    {
        cpu->r[14] = 0x001c1e3cu; fn_000979a0(cpu);
    }
L_001c1e3c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001c1e40:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x88u);
    }
L_001c1e44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c1e48:;
    {
        cpu->r[14] = 0x001c1e4cu; fn_001c1268(cpu);
    }
L_001c1e4c:;
    {
        goto L_001c1994;
    }
L_001c1e50:;
    {
        cpu->r[14] = 0x001c1e54u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c1e54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, 22u, &shc); cpu->r[8] = v;
        }
    }
L_001c1e58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c1e5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
}

/* _ZN16GLXPlayerAcademy6UpdateEv @ 001c1e64 (arm) */
void fn_001c1e64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1e64:;
    {
        return fn_001b7650(cpu);
    }
}

/* _ZN16GLXPlayerAcademyD1Ev @ 001c1e68 (arm) */
void fn_001c1e68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1e68:;
    {
        cpu->r[3] = rd32(0x001c1e70u + + 0x24u);
    }
L_001c1e6c:;
    {
        cpu->r[2] = rd32(0x001c1e74u + + 0x24u);
    }
L_001c1e70:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c1e78u, cpu->r[3], 0, 0);
    }
L_001c1e74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c1e78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1e7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1e80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c1e84:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c1e88:;
    {
        cpu->r[14] = 0x001c1e8cu; fn_001b7820(cpu);
    }
L_001c1e8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1e90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1e94u)) return;
    }
}

/* _ZN16GLXPlayerAcademyD0Ev @ 001c1e9c (arm) */
void fn_001c1e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1e9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c1ea0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1ea4:;
    {
        cpu->r[14] = 0x001c1ea8u; fn_001c1e68(cpu);
    }
L_001c1ea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1eac:;
    {
        cpu->r[14] = 0x001c1eb0u; fn_0018ba20(cpu);
    }
L_001c1eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1eb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1eb8u)) return;
    }
}

/* _ZN16GLXPlayerAcademyD2Ev @ 001c1eb8 (arm) */
void fn_001c1eb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1eb8:;
    {
        cpu->r[3] = rd32(0x001c1ec0u + + 0x24u);
    }
L_001c1ebc:;
    {
        cpu->r[2] = rd32(0x001c1ec4u + + 0x24u);
    }
L_001c1ec0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c1ec8u, cpu->r[3], 0, 0);
    }
L_001c1ec4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c1ec8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c1ecc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1ed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c1ed4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c1ed8:;
    {
        cpu->r[14] = 0x001c1edcu; fn_001b7820(cpu);
    }
L_001c1edc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1ee0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1ee4u)) return;
    }
}

/* _ZN16GLXPlayerAcademyC1Ev @ 001c1eec (arm) */
void fn_001c1eec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1eec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c1ef0:;
    {
        cpu->r[5] = rd32(0x001c1ef8u + + 0x50u);
    }
L_001c1ef4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1ef8:;
    {
        cpu->r[14] = 0x001c1efcu; fn_001b7954(cpu);
    }
L_001c1efc:;
    {
        cpu->r[3] = rd32(0x001c1f04u + + 0x48u);
    }
L_001c1f00:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c1f08u, cpu->r[5], 0, 0);
    }
L_001c1f04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1f08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c1f0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c1f10:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c1f14:;
    {
        cpu->r[14] = 0x001c1f18u; fn_001b6ba4(cpu);
    }
L_001c1f18:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c1f1c:;
    {
        cpu->r[14] = 0x001c1f20u; fn_0018ba6c(cpu);
    }
L_001c1f20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c1f24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c1f28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c1f2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c1f30:;
    {
        cpu->r[14] = 0x001c1f34u; fn_001b3dec(cpu);
    }
L_001c1f34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c1f38:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c1f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1f40:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c1f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1f48u)) return;
    }
}

/* _ZN16GLXPlayerAcademyC2Ev @ 001c1f50 (arm) */
void fn_001c1f50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1f50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c1f54:;
    {
        cpu->r[5] = rd32(0x001c1f5cu + + 0x50u);
    }
L_001c1f58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c1f5c:;
    {
        cpu->r[14] = 0x001c1f60u; fn_001b7954(cpu);
    }
L_001c1f60:;
    {
        cpu->r[3] = rd32(0x001c1f68u + + 0x48u);
    }
L_001c1f64:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c1f6cu, cpu->r[5], 0, 0);
    }
L_001c1f68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1f6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c1f70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c1f74:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c1f78:;
    {
        cpu->r[14] = 0x001c1f7cu; fn_001b6ba4(cpu);
    }
L_001c1f7c:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c1f80:;
    {
        cpu->r[14] = 0x001c1f84u; fn_0018ba6c(cpu);
    }
L_001c1f84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c1f88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c1f8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c1f90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c1f94:;
    {
        cpu->r[14] = 0x001c1f98u; fn_001b3dec(cpu);
    }
L_001c1f98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c1f9c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c1fa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c1fa4:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c1fa8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c1facu)) return;
    }
}

/* _ZN16GLXPlayerMessage15getMsgListCountEv @ 001c1fb4 (arm) */
void fn_001c1fb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1fb4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_001c1fb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage11getMsgCountEii @ 001c1fbc (arm) */
void fn_001c1fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c1fbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001c1fc0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001c1ff0;
        }
    }
L_001c1fc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001c1fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c1ff8;
        }
    }
L_001c1fcc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_001c1fd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2004;
        }
    }
L_001c1fd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_001c1fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2010;
        }
    }
L_001c1fdc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_001c1fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2020;
        }
    }
L_001c1fe4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c1fe8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x90u);
    }
L_001c1fec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c1ff0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001c1ff4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c1ff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c1ffc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x6cu);
    }
L_001c2000:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c2004:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c2008:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x78u);
    }
L_001c200c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c2010:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_001c2014:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c2018:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001c201c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c2020:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_001c2024:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c1ff0;
        }
    }
L_001c2028:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c202c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x9cu);
    }
L_001c2030:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage17getMySentMsgCountEv @ 001c2034 (arm) */
void fn_001c2034(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2034:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa8u);
    }
L_001c2038:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage8getMsgIDEi @ 001c203c (arm) */
void fn_001c203c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c203c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001c2040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2044:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001c2048:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c204c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage11getMsgTitleEi @ 001c2050 (arm) */
void fn_001c2050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2050:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
    }
L_001c2054:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2058:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c205c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage18getMsgSenderNumberEi @ 001c2060 (arm) */
void fn_001c2060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2060:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_001c2064:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2068:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c206c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage12getMsgSenderEi @ 001c2070 (arm) */
void fn_001c2070(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2070:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001c2074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2078:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c207c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage23getMsgDesUserNumberListEi @ 001c2080 (arm) */
void fn_001c2080(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2080:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001c2084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2088:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c208c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage21getMsgDesUserNameListEi @ 001c2090 (arm) */
void fn_001c2090(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001c2094:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001c2098:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001c209c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001c20a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c20ac;
        }
    }
L_001c20a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c20a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001c20ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x60u);
    }
L_001c20b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001c20b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c20b8:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001c20bc:;
    {
        goto L_001c20a4;
    }
}

/* _ZN16GLXPlayerMessage17getMsgCreatedTimeEi @ 001c20c0 (arm) */
void fn_001c20c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c20c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54u);
    }
L_001c20c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c20c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c20cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage15getMsgReadStateEi @ 001c20d0 (arm) */
void fn_001c20d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c20d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_001c20d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c20d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[1]);
        }
    }
L_001c20dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage10getMsgBodyEv @ 001c20e0 (arm) */
void fn_001c20e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c20e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001c20e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage15getCurrentMsgIDEv @ 001c20e8 (arm) */
void fn_001c20e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c20e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x64u);
    }
L_001c20ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage21getCurrentMsgPositionEv @ 001c20f0 (arm) */
void fn_001c20f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c20f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c20f4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c20f8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c20fc:;
    {
        goto L_001c211c;
    }
L_001c2100:;
    {
        cpu->r[14] = 0x001c2104u; fn_001c203c(cpu);
    }
L_001c2104:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c2108:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c210c:;
    {
        cpu->r[14] = 0x001c2110u; fn_001c20e8(cpu);
    }
L_001c2110:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001c2114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2138;
        }
    }
L_001c2118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c211c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2120:;
    {
        cpu->r[14] = 0x001c2124u; fn_001c1fb4(cpu);
    }
L_001c2124:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c2128:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001c212c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2130:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c2100;
        }
    }
L_001c2134:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001c2138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c213c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2140u)) return;
    }
}

/* _ZN16GLXPlayerMessage10getMsgTypeEi @ 001c2140 (arm) */
void fn_001c2140(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2140:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001c2144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2148:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001c214c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001c2150:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage13clearMsgCountEv @ 001c2154 (arm) */
void fn_001c2154(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2154:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c2158:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001c215c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c2160:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_001c2164:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001c2168:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_001c216c:;
    {
        wr32(cpu->r[0] + + 0x74u, cpu->r[2]);
    }
L_001c2170:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001c2174:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c215c;
        }
    }
L_001c2178:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMessage15processMsgCountEPc @ 001c217c (arm) */
void fn_001c217c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c217c:;
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
L_001c2180:;
    {
        cpu->r[10] = rd32(0x001c2188u + + 0x118u);
    }
L_001c2184:;
    {
        cpu->r[2] = rd32(0x001c218cu + + 0x118u);
    }
L_001c2188:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001c218c:;
    {
        cpu->r[10] = add_flags(cpu, 0x001c2194u, cpu->r[10], 0, 0);
    }
L_001c2190:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001c2194:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001c2198:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_001c219c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001c21a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c21a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001c21a8:;
    {
        cpu->r[14] = 0x001c21acu; fn_001c2154(cpu);
    }
L_001c21ac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001c21b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c227c;
        }
    }
L_001c21b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001c21b8:;
    {
        cpu->r[14] = 0x001c21bcu; fn_001d0434(cpu);
    }
L_001c21bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c21c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c227c;
        }
    }
L_001c21c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c21c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c21cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001c21d0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c21d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001c21d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001c21dc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21e0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001c21e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21e8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001c21ec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21f0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21f8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001c21fc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001c2200:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2204:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2208:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001c220c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001c2210:;
    {
        cpu->r[14] = 0x001c2214u; fn_001d0700(cpu);
    }
L_001c2214:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001c2218:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c221c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c2220:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2224:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001c2228:;
    {
        cpu->r[14] = 0x001c222cu; fn_001d0148(cpu);
    }
L_001c222c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001c2230:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000006cu, 0, 0);
    }
L_001c2234:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c2238:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c223c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2240:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001c2244:;
    {
        cpu->r[14] = 0x001c2248u; fn_001d0700(cpu);
    }
L_001c2248:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c224c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c2250:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2254:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2258:;
    {
        cpu->r[14] = 0x001c225cu; fn_001d0148(cpu);
    }
L_001c225c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2260:;
    {
        cpu->r[14] = 0x001c2264u; fn_001d06cc(cpu);
    }
L_001c2264:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_001c2268:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[0]);
        cpu->r[6] = wb_tmp;
    }
L_001c226c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2234;
        }
    }
L_001c2270:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c2274:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_001c2278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2200;
        }
    }
L_001c227c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c2280:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_001c2284:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001c2288:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c228c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2290:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c229c;
        }
    }
L_001c2294:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001c2298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c229cu)) return;
    }
L_001c229c:;
    {
        cpu->r[14] = 0x001c22a0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c22a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 2, 5u, &shc); cpu->r[8] = v;
        }
    }
L_001c22a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage17getMsgDesUserNameEii @ 001c22a8 (arm) */
void fn_001c22a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c22a8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c22ac:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x50u);
    }
L_001c22b0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c22b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c22b8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c22bc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c22c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c22f4;
        }
    }
L_001c22c4:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001c22c8:;
    {
        cpu->r[14] = 0x001c22ccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c22cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c22d0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001c22d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c22d8:;
    {
        cpu->r[14] = 0x001c22dcu; fn_001d0700(cpu);
    }
L_001c22dc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x50u);
    }
L_001c22e0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c22e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c22e8:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001c22ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c22f0:;
    {
        cpu->r[14] = 0x001c22f4u; fn_001d0148(cpu);
    }
L_001c22f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c22f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c22fcu)) return;
    }
}

/* _ZN16GLXPlayerMessage19getMsgDesUserNumberEii @ 001c22fc (arm) */
void fn_001c22fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c22fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c2300:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001c2304:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c2308:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c230c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c2310:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c2314:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2348;
        }
    }
L_001c2318:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001c231c:;
    {
        cpu->r[14] = 0x001c2320u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2320:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2324:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001c2328:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c232c:;
    {
        cpu->r[14] = 0x001c2330u; fn_001d0700(cpu);
    }
L_001c2330:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001c2334:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c2338:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c233c:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001c2340:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c2344:;
    {
        cpu->r[14] = 0x001c2348u; fn_001d0148(cpu);
    }
L_001c2348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c234c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2350u)) return;
    }
}

/* _ZN16GLXPlayerMessage16clearMessageListEv @ 001c2350 (arm) */
void fn_001c2350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2350:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c2354:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c2358:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001c235c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2370;
        }
    }
L_001c2364:;
    {
        cpu->r[14] = 0x001c2368u; fn_0018ba20(cpu);
    }
L_001c2368:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c236c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001c2370:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001c2374:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2388;
        }
    }
L_001c237c:;
    {
        cpu->r[14] = 0x001c2380u; fn_0018ba20(cpu);
    }
L_001c2380:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c2384:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c2388:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001c238c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c23a0;
        }
    }
L_001c2394:;
    {
        cpu->r[14] = 0x001c2398u; fn_0018ba20(cpu);
    }
L_001c2398:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c239c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001c23a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c23a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c23a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2400;
        }
    }
L_001c23ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c23b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c23b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c23f0;
        }
    }
L_001c23b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c23bc:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c23c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c23c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c23c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c23dc;
        }
    }
L_001c23cc:;
    {
        cpu->r[14] = 0x001c23d0u; fn_0018ba60(cpu);
    }
L_001c23d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001c23d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c23d8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c23dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c23e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c23e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c23c0;
        }
    }
L_001c23e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c23ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c23f8;
        }
    }
L_001c23f0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c23f4:;
    {
        cpu->r[14] = 0x001c23f8u; fn_0018ba60(cpu);
    }
L_001c23f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c23fc:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c2400:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c2404:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c2408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2460;
        }
    }
L_001c240c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2414:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2450;
        }
    }
L_001c2418:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c241c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c2420:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c2424:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c2428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c243c;
        }
    }
L_001c242c:;
    {
        cpu->r[14] = 0x001c2430u; fn_0018ba60(cpu);
    }
L_001c2430:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001c2434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2438:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c243c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c2440:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c2444:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c2420;
        }
    }
L_001c2448:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c244c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2458;
        }
    }
L_001c2450:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c2454:;
    {
        cpu->r[14] = 0x001c2458u; fn_0018ba60(cpu);
    }
L_001c2458:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c245c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001c2460:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c2464:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c2468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c24c0;
        }
    }
L_001c246c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2470:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2474:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c24b0;
        }
    }
L_001c2478:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c247c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c2480:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c2484:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c2488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c249c;
        }
    }
L_001c248c:;
    {
        cpu->r[14] = 0x001c2490u; fn_0018ba60(cpu);
    }
L_001c2490:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001c2494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2498:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c249c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c24a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c24a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c2480;
        }
    }
L_001c24a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c24ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c24b8;
        }
    }
L_001c24b0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c24b4:;
    {
        cpu->r[14] = 0x001c24b8u; fn_0018ba60(cpu);
    }
L_001c24b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c24bc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001c24c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c24c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c24c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2520;
        }
    }
L_001c24cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c24d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c24d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2510;
        }
    }
L_001c24d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c24dc:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c24e0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c24e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c24e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c24fc;
        }
    }
L_001c24ec:;
    {
        cpu->r[14] = 0x001c24f0u; fn_0018ba60(cpu);
    }
L_001c24f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c24f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c24f8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c24fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c2500:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c2504:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c24e0;
        }
    }
L_001c2508:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c250c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2518;
        }
    }
L_001c2510:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c2514:;
    {
        cpu->r[14] = 0x001c2518u; fn_0018ba60(cpu);
    }
L_001c2518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c251c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c2520:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c2524:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c2528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2580;
        }
    }
L_001c252c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2530:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2534:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2570;
        }
    }
L_001c2538:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c253c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c2540:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c2544:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c2548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c255c;
        }
    }
L_001c254c:;
    {
        cpu->r[14] = 0x001c2550u; fn_0018ba60(cpu);
    }
L_001c2550:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c2554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2558:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c255c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c2560:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c2564:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c2540;
        }
    }
L_001c2568:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c256c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2578;
        }
    }
L_001c2570:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c2574:;
    {
        cpu->r[14] = 0x001c2578u; fn_0018ba60(cpu);
    }
L_001c2578:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c257c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001c2580:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c2584:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c2588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c25e0;
        }
    }
L_001c258c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c2590:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2594:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c25d0;
        }
    }
L_001c2598:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c259c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001c25a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001c25a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c25a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c25bc;
        }
    }
L_001c25ac:;
    {
        cpu->r[14] = 0x001c25b0u; fn_0018ba60(cpu);
    }
L_001c25b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_001c25b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c25b8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001c25bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c25c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c25c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c25a0;
        }
    }
L_001c25c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c25cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c25d8;
        }
    }
L_001c25d0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c25d4:;
    {
        cpu->r[14] = 0x001c25d8u; fn_0018ba60(cpu);
    }
L_001c25d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c25dc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c25e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c25e4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c25e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c25ecu)) return;
    }
}
