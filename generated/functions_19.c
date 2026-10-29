#include "functions.h"

/* raw_init_dec @ 0008920c (arm) */
void fn_0008920c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008920c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00089210:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_00089214:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00089218:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0008921c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00089220:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00089224:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* raw_decode @ 00089228 (arm) */
void fn_00089228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00089228:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008922c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00089230:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00089234:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00089238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089284;
        }
    }
L_0008923c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00089240:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00089244:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00089248:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0008924c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00089250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089298;
        }
    }
L_00089254:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_00089258:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008925c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_00089260:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00089264:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_00089268:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_0008926c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00089270:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_00089274:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00089278:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_0008927c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00089280:;
    {
        wr8(cpu->r[0], cpu->r[1]);
    }
L_00089284:;
    {
        cpu->r[1] = rd8(cpu->r[0]);
    }
L_00089288:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0008928c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00089290:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[0] = v;
    }
L_00089294:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00089298:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0008929c:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_000892a0:;
    {
        cpu->r[1] = rd8(cpu->r[0]);
    }
L_000892a4:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000892a8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000892ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000892b0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000892b4:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[0] = v;
    }
L_000892b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_000892bc @ 000892bc (arm) */
void fn_000892bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000892bc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000892c0:;
    {
        cpu->r[12] = rd32(0x000892c8u + + 0xa4u);
    }
L_000892c4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000892c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_000892cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000892d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000892d8u, cpu->r[12], 0, 0);
    }
L_000892d4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000892d8:;
    {
        cpu->r[10] = rd16(cpu->r[5] + - 0x2u);
    }
L_000892dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000892e0:;
    {
        cpu->r[8] = rd16(cpu->r[12] + cpu->r[8]);
    }
L_000892e4:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000892e8:;
    {
        uint32_t v = cpu->r[10] | 0x00000002u; cpu->r[10] = v;
    }
L_000892ec:;
    {
        wr16(cpu->r[5] + - 0x2u, cpu->r[10]);
    }
L_000892f0:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_000892f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000892f8:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_000892fc:;
    {
        cpu->r[6] = rd16(cpu->r[6] + + 0x8u);
    }
L_00089300:;
    {
        uint32_t v = cpu->r[1] | cpu->r[8]; cpu->r[1] = v;
    }
L_00089304:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00089308:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
    }
L_0008930c:;
    {
        cpu->r[7] = rd16(cpu->r[7] + + 0x4u);
    }
L_00089310:;
    {
        uint32_t v = cpu->r[3] | 0x00000004u; cpu->r[3] = v;
    }
L_00089314:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[3]);
    }
L_00089318:;
    {
        cpu->r[5] = rd16(cpu->r[0] + - 0x2u);
    }
L_0008931c:;
    {
        cpu->r[1] = rd16(cpu->r[0]);
    }
L_00089320:;
    {
        cpu->r[3] = rd16(cpu->r[0] + + 0x2u);
    }
L_00089324:;
    {
        uint32_t v = cpu->r[7] | cpu->r[5]; cpu->r[5] = v;
    }
L_00089328:;
    {
        uint32_t v = cpu->r[1] | 0x00001000u; cpu->r[1] = v;
    }
L_0008932c:;
    {
        wr16(cpu->r[0] + - 0x2u, cpu->r[5]);
    }
L_00089330:;
    {
        wr16(cpu->r[0], cpu->r[1]);
    }
L_00089334:;
    {
        uint32_t v = cpu->r[6] | cpu->r[3]; cpu->r[3] = v;
    }
L_00089338:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[3]);
    }
L_0008933c:;
    {
        cpu->r[1] = rd16(cpu->r[4] + - 0x2u);
    }
L_00089340:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0xcu);
    }
L_00089344:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
    }
L_00089348:;
    {
        wr16(cpu->r[4] + - 0x2u, cpu->r[1]);
    }
L_0008934c:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_00089350:;
    {
        uint32_t v = cpu->r[1] | cpu->r[3]; cpu->r[3] = v;
    }
L_00089354:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_00089358:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x2u);
    }
L_0008935c:;
    {
        uint32_t v = cpu->r[3] | 0x00000008u; cpu->r[3] = v;
    }
L_00089360:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[3]);
    }
L_00089364:;
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
        cpu->r[10] = v5;
        cpu->r[13] += 24u;
    }
L_00089368:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_00089370 @ 00089370 (arm) */
void fn_00089370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00089370:;
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
L_00089374:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00089378:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[8] = v;
    }
L_0008937c:;
    {
        cpu->r[5] = rd32(0x00089384u + + 0xf0u);
    }
L_00089380:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00089384:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00089388:;
    {
        cpu->r[5] = add_flags(cpu, 0x00089390u, cpu->r[5], 0, 0);
    }
L_0008938c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00089390:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00089394:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089408;
        }
    }
L_00089398:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008939c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[10] = v;
    }
L_000893a0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000893a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000893a8:;
    {
        cpu->r[14] = 0x000893acu; imp_memset(cpu); /* memset */
    }
L_000893ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_000893b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_000893b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000893b8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_000893bc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_000893c0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000893c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089448;
        }
    }
L_000893c8:;
    {
        cpu->r[3] = rd32(0x000893d0u + + 0xa8u);
    }
L_000893cc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[10] = v;
    }
L_000893d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000893d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000893d8:;
    {
        cpu->r[14] = 0x000893e0u;
    }
L_000893dc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000893e0u)) return;
    }
L_000893e0:;
    {
        cpu->r[3] = rd32(0x000893e8u + + 0x94u);
    }
L_000893e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000893e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000893ec:;
    {
        cpu->r[14] = 0x000893f4u;
    }
L_000893f0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000893f4u)) return;
    }
L_000893f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000893f8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000893fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008946c;
        }
    }
L_00089400:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[8]);
    }
L_00089404:;
    {
        goto L_00089450;
    }
L_00089408:;
    {
        cpu->r[3] = rd32(0x00089410u + + 0x68u);
    }
L_0008940c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00089410:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00089414:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00089418:;
    {
        cpu->r[14] = 0x00089420u;
    }
L_0008941c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00089420u)) return;
    }
L_00089420:;
    {
        cpu->r[3] = rd32(0x00089428u + + 0x54u);
    }
L_00089424:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00089428:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0008942c:;
    {
        cpu->r[14] = 0x00089434u;
    }
L_00089430:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00089434u)) return;
    }
L_00089434:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089438:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0008943c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008946c;
        }
    }
L_00089440:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00089444:;
    {
        goto L_000893a0;
    }
L_00089448:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008944c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[10] = v;
    }
L_00089450:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00089454:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00089458:;
    {
        cpu->r[14] = 0x0008945cu; imp_memset(cpu); /* memset */
    }
L_0008945c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[7]);
    }
L_00089460:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_00089464:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00089468:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008946cu)) return;
    }
L_0008946c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00089470:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00089474u)) return;
    }
}

/* t1_decode_cblks @ 00089480 (arm) */
void fn_00089480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00089480:;
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
L_00089484:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_00089488:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008948c:;
    {
        cpu->r[7] = (~0x0000007bu);
    }
L_00089490:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[1]);
    }
L_00089494:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00089498:;
    {
        cpu->r[1] = rd32(0x000894a0u + + 0xf38u);
    }
L_0008949c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_000894a0:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_000894a4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[1]);
    }
L_000894a8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x84u);
    }
L_000894ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000894b0:;
    {
        cpu->r[2] = rd32(0x000894b8u + + 0xf24u);
    }
L_000894b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000894bcu, cpu->r[5], 0, 0);
    }
L_000894b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000894bc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[5]);
    }
L_000894c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000894c8u, cpu->r[2], 0, 0);
    }
L_000894c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000894c8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000894cc:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[7]);
    }
L_000894d0:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[3]);
    }
L_000894d4:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[12]);
    }
L_000894d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_000894dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000894e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_000894e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000894e8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008a3d0;
        }
    }
L_000894ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_000894f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000894f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_000894f8:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[2]);
    }
L_000894fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_00089500:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_00089504:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[1]);
    }
L_00089508:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0008950c:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_00089510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_00089514:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_00089518:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008951c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_00089520:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_00089524:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00089528:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008a3b8;
        }
    }
L_0008952c:;
    {
        cpu->r[5] = rd32(0x00089534u + + 0xeacu);
    }
L_00089530:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00089534:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_00089538:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_0008953c:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[5]);
    }
L_00089540:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x98u);
    }
L_00089544:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xb0u);
    }
L_00089548:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0008954c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00089550:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00089554:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00089558:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008a39c;
        }
    }
L_0008955c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00089560:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00089564:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_00089568:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[7]);
    }
L_0008956c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00089570:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[7]);
    }
L_00089574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00089578:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_0008957c:;
    {
        cpu->r[3] = rd32(0x00089584u + + 0xe60u);
    }
L_00089580:;
    {
        cpu->r[3] = add_flags(cpu, 0x00089588u, cpu->r[3], 0, 0);
    }
L_00089584:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00089588:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008958c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xacu);
    }
L_00089590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00089594:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00089598:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008959c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000895a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008a368;
        }
    }
L_000895a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x94u);
    }
L_000895a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000895ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000895b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000895b4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x18u);
    }
L_000895b8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_000895bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000895c0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000895c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000895c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000895cc:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_000895d0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x10u);
    }
L_000895d4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x10u);
    }
L_000895d8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x328u);
    }
L_000895dc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_000895e0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x14u);
    }
L_000895e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000895e8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xcu);
    }
L_000895ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000895f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000895f4:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[7]);
    }
L_000895f8:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[14]);
    }
L_000895fc:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_00089600:;
    {
        cpu->r[14] = 0x00089604u; fn_00089370(cpu);
    }
L_00089604:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089608:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089840;
        }
    }
L_0008960c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00089610:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00089614:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00089618:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008961c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_00089620:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00089624:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0xcu);
    }
L_00089628:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008962c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_00089630:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_00089634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089658;
        }
    }
L_00089638:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008963c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_00089640:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x14u);
    }
L_00089644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00089648:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_0008964c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00089650:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00089654:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_00089658:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_0008965c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089680;
        }
    }
L_00089660:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_00089664:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_00089668:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008966c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00089670:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_00089674:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00089678:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_0008967c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_00089680:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00089684:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_00089688:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008968c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x328u);
    }
L_00089690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00089694:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00089698:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_0008969c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008971c;
        }
    }
L_000896a0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000896a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000896a8:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_000896ac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000896b0:;
    {
        uint32_t v = shifter(cpu->r[14], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[14] = v;
    }
L_000896b4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_000896b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008971c;
        }
    }
L_000896bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000896c0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
        }
    }
L_000896c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_000896c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000896cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089710;
        }
    }
L_000896d0:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000896d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000896d8:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000896dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_000896e0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_000896e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089700;
        }
    }
L_000896e8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000896ec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000896f0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x328u);
    }
L_000896f4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000896f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_000896fc:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00089700:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00089704:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00089708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000896d0;
        }
    }
L_0008970c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089710:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00089714:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00089718:;
    {
        goto L_000896b4;
    }
L_0008971c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00089720:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00089724:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7] + cpu->r[6]; cpu->r[0] = v;
    }
L_00089728:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008972c:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x14u);
    }
L_00089730:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00089734:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00089738:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[14] = v;
        }
    }
L_0008973c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00089740:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00089744:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
        }
    }
L_00089748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000897e8;
        }
    }
L_0008974c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_00089750:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000897a0;
        }
    }
L_00089754:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00089758:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008975c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00089760:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089790;
        }
    }
L_00089764:;
    {
        cpu->r[7] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00089768:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[7];
    }
L_0008976c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00089770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x1cu);
    }
L_00089774:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00089778:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008977c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00089780:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00089784:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[7]);
    }
L_00089788:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0008978c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089764;
        }
    }
L_00089790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00089794:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_00089798:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_0008979c:;
    {
        goto L_0008974c;
    }
L_000897a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_000897a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_000897a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000897ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xacu);
    }
L_000897b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000897b4:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000897b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000897bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002cu, 0, 0);
    }
L_000897c0:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[0]);
    }
L_000897c4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[2]);
    }
L_000897c8:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000897cc:;
    {
        cpu->r[14] = 0x000897d4u;
    }
L_000897d0:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000897d4u)) return;
    }
L_000897d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000897d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000897dc:;
    {
        cpu->r[14] = 0x000897e4u;
    }
L_000897e0:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000897e4u)) return;
    }
L_000897e4:;
    {
        goto L_00089588;
    }
L_000897e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa8u);
    }
L_000897ec:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000897f0:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000897f4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000897f8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 1);
    }
L_000897fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000897a0;
        }
    }
L_00089800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00089804:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00089808:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0008980c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089830;
        }
    }
L_00089810:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00089814:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00089818:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008981c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00089820:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00089824:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[0]);
    }
L_00089828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0008982c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089810;
        }
    }
L_00089830:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00089834:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_00089838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_0008983c:;
    {
        goto L_000897f8;
    }
L_00089840:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00089844:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00089848:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0008984c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00089850:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089854:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00089858:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[12]);
    }
L_0008985c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00089860:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_00089864:;
    {
        uint32_t v = cpu->r[14] & 0x00000008u; cpu->r[5] = v;
    }
L_00089868:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008986c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00089870:;
    {
        cpu->r[14] = 0x00089874u; fn_0008686c(cpu);
    }
L_00089874:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089878:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_0008987c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00089880:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_00089884:;
    {
        cpu->r[14] = 0x00089888u; fn_00086894(cpu);
    }
L_00089888:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0008988c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089890:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_00089894:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00089898:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0008989c:;
    {
        uint32_t v = cpu->r[7] & 0x00000020u; cpu->r[7] = v;
    }
L_000898a0:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[7]);
    }
L_000898a4:;
    {
        cpu->r[14] = 0x000898a8u; fn_00086894(cpu);
    }
L_000898a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x90u);
    }
L_000898ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000898b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_000898b4:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000898b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000898bc:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[12]);
    }
L_000898c0:;
    {
        cpu->r[14] = 0x000898c4u; fn_00086894(cpu);
    }
L_000898c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000898c8:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_000898cc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[14]);
    }
L_000898d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_000898d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_000898d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000898dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008960c;
        }
    }
L_000898e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000898e4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_000898e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_000898ec:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_000898f0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_000898f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000898f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000898fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00089900:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x90u);
    }
L_00089904:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00089908:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0008990c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00089910:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_00089914:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00089918:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008991c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00089920:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00089924:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x9cu);
        }
    }
L_00089928:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[1] = v;
        }
    }
L_0008992c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00089930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089b58;
        }
    }
L_00089934:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_00089938:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0008993c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00089940:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a34c;
        }
    }
L_00089944:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00089948:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008994c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089950:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00089954:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_00089958:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0008995c:;
    {
        cpu->r[14] = 0x00089960u; fn_000866e4(cpu);
    }
L_00089960:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_00089964:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_00089968:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008996c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089b50;
        }
    }
L_00089970:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_00089974:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00089978:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0008997c:;
    {
        uint32_t v = cpu->r[7] ^ 0x00000001u; cpu->r[3] = v;
    }
L_00089980:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_00089984:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[14], 3, 1u, &shc); cpu->r[3] = v;
    }
L_00089988:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_0008998c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00089990:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00089994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a168;
        }
    }
L_00089998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0008999c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089c9c;
        }
    }
L_000899a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000899a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089b04;
        }
    }
L_000899a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_000899ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000899b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000899b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000899b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000899bc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000899c0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000899c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000899c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089b04;
        }
    }
L_000899cc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_000899d0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000899d4:;
    {
        cpu->r[2] = rd32(0x000899dcu + + 0xa0cu);
    }
L_000899d8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000899dc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000899e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000899e8u, cpu->r[2], 0, 0);
    }
L_000899e4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_000899e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000899ec:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000899f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089af0;
        }
    }
L_000899f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000899f8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000899fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00089a00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00089a04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00089a08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00089a0c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00089a10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00089ae4;
        }
    }
L_00089a14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00089a18:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00089ae4;
        }
    }
L_00089a1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00089a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089b74;
        }
    }
L_00089a24:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00089a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089ba0;
        }
    }
L_00089a2c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089a30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00089a34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00089a38:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_00089a3c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00089a40:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00089a44:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[10]; cpu->r[7] = v;
    }
L_00089a48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00089a4c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00089a50:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00089a54:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00089a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089b98;
        }
    }
L_00089a5c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[7]);
    }
L_00089a60:;
    {
        uint32_t v = cpu->r[11] & ~ 0x00000440u; cpu->r[11] = v;
    }
L_00089a64:;
    {
        uint32_t v = cpu->r[11] & ~ 0x00000006u; cpu->r[11] = v;
    }
L_00089a68:;
    {
        uint32_t v = cpu->r[11] & 0x000000ffu; cpu->r[14] = v;
        set_nz(cpu, v);
    }
L_00089a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089ad8;
        }
    }
L_00089a70:;
    {
        { uint32_t v = cpu->r[11] & 0x00005000u; set_nz(cpu, v); }
    }
L_00089a74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089ad8;
        }
    }
L_00089a78:;
    {
        uint32_t v = cpu->r[0] * cpu->r[9] + cpu->r[10]; cpu->r[9] = v;
    }
L_00089a7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00089a80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00089a84:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_00089a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089bc8;
        }
    }
L_00089a8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00089a90:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00089a94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00089a98:;
    {
        uint32_t v = cpu->r[14] | cpu->r[3]; cpu->r[14] = v;
    }
L_00089a9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00089aa0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_00089aa4:;
    {
        cpu->r[3] = rd8(cpu->r[14] + + 0x10u);
    }
L_00089aa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00089aac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00089ab0:;
    {
        wr32(cpu->r[2] + + 0x64u, cpu->r[3]);
    }
L_00089ab4:;
    {
        cpu->r[14] = 0x00089ab8u; fn_00086740(cpu);
    }
L_00089ab8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00089abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089ac0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089c0c;
        }
    }
L_00089ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00089ac8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_00089acc:;
    {
        cpu->r[2] = rd16(cpu->r[7]);
    }
L_00089ad0:;
    {
        uint32_t v = cpu->r[2] | 0x00004000u; cpu->r[2] = v;
    }
L_00089ad4:;
    {
        wr16(cpu->r[7], cpu->r[2]);
    }
L_00089ad8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00089adc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00089ae0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00089a14;
        }
    }
L_00089ae4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00089ae8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_00089aec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00089a08;
        }
    }
L_00089af0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00089af4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00089af8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00089afc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00089b00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000899ec;
        }
    }
L_00089b04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00089b08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089b0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089c54;
        }
    }
L_00089b10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_00089b14:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x68u);
    }
L_00089b18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00089b1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_00089b20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00089b24:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_00089b28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00089b2c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
        }
    }
L_00089b30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
        }
    }
L_00089b34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00089b38:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_00089b3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00089b40:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_00089b44:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
        }
    }
L_00089b48:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00089b4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008998c;
        }
    }
L_00089b50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00089b54:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x28u);
    }
L_00089b58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00089b5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_00089b60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00089b64:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[0]);
    }
L_00089b68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001cu, 0, 0);
    }
L_00089b6c:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[1]);
    }
L_00089b70:;
    {
        goto L_000898d4;
    }
L_00089b74:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00089b7c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_00089b80:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00089b84:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[10]; cpu->r[7] = v;
    }
L_00089b88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00089b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00089b90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00089b94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00089b98:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[7]);
    }
L_00089b9c:;
    {
        goto L_00089a68;
    }
L_00089ba0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089ba4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089ba8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_00089bac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00089bb0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[10]; cpu->r[7] = v;
    }
L_00089bb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00089bb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00089bbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00089bc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00089bc4:;
    {
        goto L_00089a5c;
    }
L_00089bc8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00089bcc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00089bd0:;
    {
        cpu->r[14] = 0x00089bd4u; fn_00089228(cpu);
    }
L_00089bd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00089bd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089ac4;
        }
    }
L_00089be0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00089be4:;
    {
        cpu->r[14] = 0x00089be8u; fn_00089228(cpu);
    }
L_00089be8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00089bec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089bf0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089bf4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00089bf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00089bfc:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_00089c00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089c04:;
    {
        cpu->r[14] = 0x00089c08u; fn_000892bc(cpu);
    }
L_00089c08:;
    {
        goto L_00089ac4;
    }
L_00089c0c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00089c10:;
    {
        cpu->r[11] = (cpu->r[11] >> 4) & 0xffu;
    }
L_00089c14:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00089c18:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
    }
L_00089c1c:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x410u);
    }
L_00089c20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00089c24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00089c28:;
    {
        wr32(cpu->r[2] + + 0x64u, cpu->r[3]);
    }
L_00089c2c:;
    {
        cpu->r[14] = 0x00089c30u; fn_00086740(cpu);
    }
L_00089c30:;
    {
        cpu->r[1] = rd8(cpu->r[11] + + 0x510u);
    }
L_00089c34:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00089c38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00089c3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_00089c40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_00089c44:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_00089c48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089c4c:;
    {
        cpu->r[14] = 0x00089c50u; fn_000892bc(cpu);
    }
L_00089c50:;
    {
        goto L_00089ac4;
    }
L_00089c54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089c58:;
    {
        cpu->r[14] = 0x00089c5cu; fn_0008686c(cpu);
    }
L_00089c5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089c60:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_00089c64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00089c68:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_00089c6c:;
    {
        cpu->r[14] = 0x00089c70u; fn_00086894(cpu);
    }
L_00089c70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089c74:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_00089c78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00089c7c:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00089c80:;
    {
        cpu->r[14] = 0x00089c84u; fn_00086894(cpu);
    }
L_00089c84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00089c88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00089c8c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00089c90:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00089c94:;
    {
        cpu->r[14] = 0x00089c98u; fn_00086894(cpu);
    }
L_00089c98:;
    {
        goto L_00089b10;
    }
L_00089c9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_00089ca0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00089ca4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00089ca8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00089cac:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x4u);
    }
L_00089cb0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00089cb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00089cb8:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00089cbc:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_00089cc0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_00089cc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089efc;
        }
    }
L_00089cc8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_00089ccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x0000005cu, 0, 0);
    }
L_00089cd0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_00089cd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000060u, 0, 0);
    }
L_00089cd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_00089cdc:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_00089ce0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_00089ce4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00089ce8:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[0]);
    }
L_00089cec:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_00089cf0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_00089cf4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_00089cf8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00089cfc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_00089d00:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00089d04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00089d08:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_00089d0c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
        }
    }
L_00089d10:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
        }
    }
L_00089d14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089ec8;
        }
    }
L_00089d18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_00089d1c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00089d20:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_00089d24:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00089d28:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_00089d2c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_00089d30:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_00089d34:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_00089d38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089d3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00089d40:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00089d44:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00089d48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089f90;
        }
    }
L_00089d4c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00089d50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089d54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00089d58:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_00089d5c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_00089d60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00089d64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00089d68:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00089d6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089eac;
        }
    }
L_00089d70:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00089d74:;
    {
        goto L_00089d94;
    }
L_00089d78:;
    {
        { uint32_t v = cpu->r[2] & 0x00005000u; set_nz(cpu, v); }
    }
L_00089d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089f38;
        }
    }
L_00089d80:;
    {
        cpu->r[2] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_00089d84:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00089d88:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00004000u; cpu->r[2] = v;
    }
L_00089d8c:;
    {
        wr16(cpu->r[6] + cpu->r[5], cpu->r[2]);
    }
L_00089d90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089eac;
        }
    }
L_00089d94:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00089d98:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00089eac;
        }
    }
L_00089d9c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00089da0:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_00089da4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_00089da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089dc8;
        }
    }
L_00089dac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00089db0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00089db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089dc8;
        }
    }
L_00089db8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00089dbc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00089dc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00089dc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00089dc8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089dcc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00089dd0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089dd4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00089dd8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00089ddc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_00089de0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_00089de4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[14]; cpu->r[5] = v;
    }
L_00089de8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00089dec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00089df0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_00089df4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00089df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089e0c;
        }
    }
L_00089dfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00089e00:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_00089e04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00089e08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00089e0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00089e10:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[5]);
    }
L_00089e14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00089e18:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000440u; cpu->r[2] = v;
        }
    }
L_00089e1c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000006u; cpu->r[2] = v;
        }
    }
L_00089e20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089e24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089d78;
        }
    }
L_00089e28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00089e2c:;
    {
        cpu->r[2] = (cpu->r[2] >> 4) & 0xffu;
    }
L_00089e30:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00089e34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00089e38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00089e3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00089e40:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x410u);
    }
L_00089e44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00089e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00089e4c:;
    {
        wr32(cpu->r[1] + + 0x64u, cpu->r[3]);
    }
L_00089e50:;
    {
        cpu->r[14] = 0x00089e54u; fn_00086740(cpu);
    }
L_00089e54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00089e58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00089e5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00089e60:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x510u);
    }
L_00089e64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00089e68:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00089e6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089e70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_00089e74:;
    {
        uint32_t v = cpu->r[14] * cpu->r[11] + cpu->r[0]; cpu->r[11] = v;
    }
L_00089e78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_00089e7c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00089e80:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc), cpu->r[3]);
    }
L_00089e84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089e88:;
    {
        cpu->r[14] = 0x00089e8cu; fn_000892bc(cpu);
    }
L_00089e8c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_00089e90:;
    {
        cpu->r[2] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_00089e94:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00089e98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00089e9c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00004000u; cpu->r[2] = v;
    }
L_00089ea0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00089ea4:;
    {
        wr16(cpu->r[6] + cpu->r[5], cpu->r[2]);
    }
L_00089ea8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089d94;
        }
    }
L_00089eac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00089eb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_00089eb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089eb8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00089ebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00089ec0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00089ec4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089d38;
        }
    }
L_00089ec8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_00089ecc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_00089ed0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00089ed4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00089ed8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00089edc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00089ee0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00089ee4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_00089ee8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00089eec:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[7]);
    }
L_00089ef0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_00089ef4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089cf8;
        }
    }
L_00089ef8:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00089efc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc8u);
    }
L_00089f00:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00089f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089b04;
        }
    }
L_00089f08:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_00089f0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], 0x00000060u, 0, 0);
    }
L_00089f10:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00089f14:;
    {
        wr32(cpu->r[14] + + 0x64u, cpu->r[3]);
    }
L_00089f18:;
    {
        cpu->r[14] = 0x00089f1cu; fn_00086740(cpu);
    }
L_00089f1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_00089f20:;
    {
        cpu->r[14] = 0x00089f24u; fn_00086740(cpu);
    }
L_00089f24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_00089f28:;
    {
        cpu->r[14] = 0x00089f2cu; fn_00086740(cpu);
    }
L_00089f2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_00089f30:;
    {
        cpu->r[14] = 0x00089f34u; fn_00086740(cpu);
    }
L_00089f34:;
    {
        goto L_00089b04;
    }
L_00089f38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00089f3c:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[3] = v;
    }
L_00089f40:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00089f44:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00089f48:;
    {
        uint32_t v = cpu->r[14] | cpu->r[3]; cpu->r[3] = v;
    }
L_00089f4c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_00089f50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00089f54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_00089f58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00089f5c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x10u);
    }
L_00089f60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00089f64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00089f68:;
    {
        wr32(cpu->r[1] + + 0x64u, cpu->r[3]);
    }
L_00089f6c:;
    {
        cpu->r[14] = 0x00089f70u; fn_00086740(cpu);
    }
L_00089f70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00089f74:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_00089f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00089f7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00089e28;
        }
    }
L_00089f80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00089f84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00089f88:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00089f8c:;
    {
        goto L_00089d80;
    }
L_00089f90:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00089f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a07c;
        }
    }
L_00089f98:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089f9c:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_00089fa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00089fa4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_00089fa8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_00089fac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_00089fb0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_00089fb4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0] + cpu->r[5]; cpu->r[12] = v;
    }
L_00089fb8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00089fbc:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_00089fc0:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_00089fc4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00089fc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_00089fcc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00089fd0:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_00089fd4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_00089fd8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0] + cpu->r[5]; cpu->r[12] = v;
    }
L_00089fdc:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00089fe0:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_00089fe4:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_00089fe8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00089fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_00089ff0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0] + cpu->r[5]; cpu->r[12] = v;
    }
L_00089ff4:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_00089ff8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_00089ffc:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0008a000:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_0008a004:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008a008:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a00c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_0008a010:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008a014:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0] + cpu->r[5]; cpu->r[2] = v;
    }
L_0008a018:;
    {
        cpu->r[0] = 0x000050b9u;
    }
L_0008a01c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0000u << 16);
    }
L_0008a020:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0008a024:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0008a028:;
    {
        uint32_t v = cpu->r[2] & cpu->r[0]; cpu->r[0] = v;
    }
L_0008a02c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008a030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_0008a034:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008a038:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0008a03c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008a040:;
    {
        wr32(cpu->r[3] + + 0x64u, cpu->r[2]);
    }
L_0008a044:;
    {
        cpu->r[14] = 0x0008a048u; fn_00086740(cpu);
    }
L_0008a048:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008a04c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a128;
        }
    }
L_0008a050:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a054:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008a058:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a05c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0008a060:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a064:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008a068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a06c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_0008a070:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008a074:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00089d38;
        }
    }
L_0008a078:;
    {
        goto L_00089ec8;
    }
L_0008a07c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a080:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008a084:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008a088:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008a08c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008a090:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0008a094:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008a098:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0] + cpu->r[12]; cpu->r[12] = v;
    }
L_0008a09c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0008a0a0:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_0008a0a4:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008a0a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a0ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_0008a0b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008a0b4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a0b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[5]; cpu->r[12] = v;
    }
L_0008a0bc:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008a0c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008a0c4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0008a0c8:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_0008a0cc:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008a0d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a0d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_0008a0d8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0] + cpu->r[5]; cpu->r[12] = v;
    }
L_0008a0dc:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008a0e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008a0e4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0008a0e8:;
    {
        cpu->r[12] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_0008a0ec:;
    {
        uint32_t v = cpu->r[12] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008a0f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a0f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a11c;
        }
    }
L_0008a0f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008a0fc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0] + cpu->r[5]; cpu->r[2] = v;
    }
L_0008a100:;
    {
        cpu->r[0] = 0x000050ffu;
    }
L_0008a104:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0000u << 16);
    }
L_0008a108:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0008a10c:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0008a110:;
    {
        uint32_t v = cpu->r[2] & cpu->r[0]; cpu->r[0] = v;
    }
L_0008a114:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008a118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a034;
        }
    }
L_0008a11c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008a120:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008a124:;
    {
        goto L_00089d5c;
    }
L_0008a128:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008a12c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0008a130:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008a134:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0008a138:;
    {
        wr32(cpu->r[14] + + 0x64u, cpu->r[12]);
    }
L_0008a13c:;
    {
        cpu->r[14] = 0x0008a140u; fn_00086740(cpu);
    }
L_0008a140:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a144:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0008a148:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0008a14c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008a150:;
    {
        cpu->r[14] = 0x0008a154u; fn_00086740(cpu);
    }
L_0008a154:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a158:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a15c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008a160:;
    {
        uint32_t v = cpu->r[5] | cpu->r[0]; cpu->r[0] = v;
    }
L_0008a164:;
    {
        goto L_00089d5c;
    }
L_0008a168:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008a16c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008a170:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008a174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a178:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008a17c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = (~0x00000000u);
        }
    }
L_0008a180:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
        }
    }
L_0008a184:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0008a188:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0008a18c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0008a190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a194:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_0008a198:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
        }
    }
L_0008a19c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a1a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00089b04;
        }
    }
L_0008a1a4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a1a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008a1ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0008a1b0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008a1b4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0008a1b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a1bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a24c;
        }
    }
L_0008a1c0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a1c4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0008a1c8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000003u, 0, 0);
    }
L_0008a1cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a1d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0008a1d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008a240;
        }
    }
L_0008a1d8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008a1dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008a240;
        }
    }
L_0008a1e0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0008a1e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a2ec;
        }
    }
L_0008a1e8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0008a1ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a314;
        }
    }
L_0008a1f0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008a1f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008a1f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008a1fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008a200:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0008a204:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008a208:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[11]; cpu->r[7] = v;
    }
L_0008a20c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[14] = v1;
    }
L_0008a210:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008a214:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0008a218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a30c;
        }
    }
L_0008a21c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7]);
    }
L_0008a220:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000440u; cpu->r[1] = v;
    }
L_0008a224:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000006u; cpu->r[1] = v;
    }
L_0008a228:;
    {
        uint32_t v = cpu->r[1] & 0x00005000u; cpu->r[12] = v;
    }
L_0008a22c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00001000u, 1, 1);
    }
L_0008a230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a268;
        }
    }
L_0008a234:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008a238:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0008a23c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a1d8;
        }
    }
L_0008a240:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0008a244:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_0008a248:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008a1cc;
        }
    }
L_0008a24c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a250:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008a254:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0008a258:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008a25c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008a1b8;
        }
    }
L_0008a260:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_0008a264:;
    {
        goto L_00089b04;
    }
L_0008a268:;
    {
        { uint32_t v = cpu->r[1] & 0x000000ffu; set_nz(cpu, v); }
    }
L_0008a26c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008a270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_0008a274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000eu;
        }
    }
L_0008a278:;
    {
        { uint32_t v = cpu->r[1] & 0x00002000u; set_nz(cpu, v); }
    }
L_0008a27c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000010u;
        }
    }
L_0008a280:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0008a284:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008a288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008a28c:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_0008a290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a338;
        }
    }
L_0008a294:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0008a298:;
    {
        cpu->r[14] = 0x0008a29cu; fn_00086740(cpu);
    }
L_0008a29c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008a2a0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[11]; cpu->r[5] = v;
    }
L_0008a2a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008a2a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008a2ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008a2b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = cpu->r[1];
        }
    }
L_0008a2b4:;
    {
        cpu->r[1] = rd16(cpu->r[7]);
    }
L_0008a2b8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0008a2bc:;
    {
        uint32_t v = cpu->r[1] | 0x00002000u; cpu->r[1] = v;
    }
L_0008a2c0:;
    {
        wr16(cpu->r[7], cpu->r[1]);
    }
L_0008a2c4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0008a2c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0008a2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a2d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
        }
    }
L_0008a2d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0008a2d8:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_0008a2dc:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008a2e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a2e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a2e8:;
    {
        goto L_0008a238;
    }
L_0008a2ec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008a2f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008a2f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008a2f8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008a2fc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[11]; cpu->r[7] = v;
    }
L_0008a300:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[14] = v1;
    }
L_0008a304:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008a308:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0008a30c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7]);
    }
L_0008a310:;
    {
        goto L_0008a228;
    }
L_0008a314:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008a318:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008a31c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008a320:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008a324:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[11]; cpu->r[7] = v;
    }
L_0008a328:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[14] = v1;
    }
L_0008a32c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008a330:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0008a334:;
    {
        goto L_0008a21c;
    }
L_0008a338:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0008a33c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0008a340:;
    {
        cpu->r[14] = 0x0008a344u; fn_00089228(cpu);
    }
L_0008a344:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008a348:;
    {
        goto L_0008a2a0;
    }
L_0008a34c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0008a350:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008a354:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xccu);
    }
L_0008a358:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008a35c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0008a360:;
    {
        cpu->r[14] = 0x0008a364u; fn_0008920c(cpu);
    }
L_0008a364:;
    {
        goto L_00089960;
    }
L_0008a368:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008a36c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0008a370:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0008a374:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_0008a378:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_0008a37c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008a380:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_0008a384:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[12]);
    }
L_0008a388:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_0008a38c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[2]);
    }
L_0008a390:;
    {
        cpu->r[14] = 0x0008a398u;
    }
L_0008a394:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008a398u)) return;
    }
L_0008a398:;
    {
        goto L_00089540;
    }
L_0008a39c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0008a3a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a3a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008a3a8:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[12]);
    }
L_0008a3ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_0008a3b0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[0]);
    }
L_0008a3b4:;
    {
        goto L_00089518;
    }
L_0008a3b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0008a3bc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0008a3c0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[12]);
    }
L_0008a3c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008a3c8:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[7]);
    }
L_0008a3cc:;
    {
        goto L_000894d8;
    }
L_0008a3d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_0008a3d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008a3d8u)) return;
    }
}

/* t1_encode_cblks @ 0008a3f0 (arm) */
void fn_0008a3f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008a3f0:;
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
L_0008a3f4:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_0008a3f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000fcu, 1, 0);
    }
L_0008a3fc:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0008a404u + + 0x3ccu);
    }
L_0008a400:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008a404:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008a408:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_0008a40c:;
    {
        cpu->r[3] = rd32(0x0008a414u + + 0x3c8u);
    }
L_0008a410:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008a414:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[1]);
    }
L_0008a418:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008a420u, cpu->r[3], 0, 0);
    }
L_0008a41c:;
    {
        wr32(cpu->r[13] + + 0xf4u, cpu->r[2]);
    }
L_0008a420:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_0008a424:;
    {
        *(uint64_t*)G(cpu->r[1] + + 0x20u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008a428:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_0008a42c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x88u);
    }
L_0008a430:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008a434:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008a438:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0008a43c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b8b8;
        }
    }
L_0008a440:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x88u);
    }
L_0008a444:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_0008a448:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xf4u);
    }
L_0008a44c:;
    {
        cpu->r[7] = (~0x0000007bu);
    }
L_0008a450:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008a454:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008a458:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008a45c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0008a460:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008a464:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 5u, &shc), 0, 0);
    }
L_0008a468:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0008a46c:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[7]);
    }
L_0008a470:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 5u, &shc));
    }
L_0008a474:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_0008a478:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008a47c:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[10]);
    }
L_0008a480:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008a484:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[12]);
    }
L_0008a488:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[1]);
    }
L_0008a48c:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[3]);
    }
L_0008a490:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a494:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0008a498:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0008a49c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008a4a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b898;
        }
    }
L_0008a4a4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a4a8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008a4ac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0008a4b0:;
    {
        wr32(cpu->r[13] + + 0xe4u, cpu->r[10]);
    }
L_0008a4b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008a4b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000007cu, 0, 0);
    }
L_0008a4bc:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[7]);
    }
L_0008a4c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008a4c4:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[3]);
    }
L_0008a4c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0008a4cc:;
    {
        cpu->r[3] = rd32(0x0008a4d4u + + 0x30cu);
    }
L_0008a4d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0008a4d4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_0008a4d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008a4e0u, cpu->r[3], 0, 0);
    }
L_0008a4dc:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0008a4e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0008a4e4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xe4u);
    }
L_0008a4e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0008a4ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008a4f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b880;
        }
    }
L_0008a4f4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008a4f8:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[7]);
    }
L_0008a4fc:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[7]);
    }
L_0008a500:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0008a504:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0008a508:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008a50c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x10u);
    }
L_0008a510:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008a514:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0008a518:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b864;
        }
    }
L_0008a51c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008a520:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008a524:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0008a528:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[1]);
    }
L_0008a52c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008a530:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[1]);
    }
L_0008a534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008a538:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[3]);
    }
L_0008a53c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xd4u);
    }
L_0008a540:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xdcu);
    }
L_0008a544:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0008a548:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008a54c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008a550:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008a554:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b848;
        }
    }
L_0008a558:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xd4u);
    }
L_0008a55c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008a560:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0008a564:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0008a568:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008a56c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008a570:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_0008a574:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_0008a578:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0008a57c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_0008a580:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x4u);
    }
L_0008a584:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008a588:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0008a58c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_0008a590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a5b4;
        }
    }
L_0008a594:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a598:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0008a59c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008a5a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_0008a5a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0008a5a8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008a5ac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0008a5b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0008a5b4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_0008a5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008a5dc;
        }
    }
L_0008a5bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a5c0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0008a5c4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008a5c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0008a5cc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_0008a5d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_0008a5d4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0008a5d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0008a5dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008a5e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008a5e4:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008a5e8:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x18u);
    }
L_0008a5ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0008a5f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008a5f4:;
    {
        cpu->r[14] = 0x0008a5f8u; fn_00089370(cpu);
    }
L_0008a5f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008a5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b8b8;
        }
    }
L_0008a600:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xd8u);
    }
L_0008a604:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0008a608:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a60c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[5]; cpu->r[5] = v;
    }
L_0008a610:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x14u);
    }
L_0008a614:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008a618:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008a61c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_0008a620:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[14]);
    }
L_0008a624:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0008a628:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a62c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0008a630:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b754;
        }
    }
L_0008a638:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0008a63c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
        }
    }
L_0008a640:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2] + + 0x1cu);
        }
    }
L_0008a644:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a734;
        }
    }
L_0008a648:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0008a64c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008a650:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd8u);
    }
L_0008a654:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0008a658:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008a65c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[6] + + 0x1cu);
    }
L_0008a660:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0008a664:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0008a668:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0008a66c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0008a670:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0008a674:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0008a67cu + + 0x15cu);
    }
L_0008a678:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008a67c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a700;
        }
    }
L_0008a680:;
    {
        vfp_vmul(cpu, 15, 16, 17);
    }
L_0008a684:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008a688:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0008a68c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0008a690:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_0008a694:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0008a698:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 6);
    }
L_0008a69c:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x8u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_0008a6a0:;
    {
        cpu->r[6] = 0x00001000u;
    }
L_0008a6a4:;
    {
        cpu->r[14] = 0x0008a6a8u; imp_floor(cpu); /* floor */
    }
L_0008a6a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008a6ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008a6b0:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008a6b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,6);
    }
L_0008a6b8:;
    {
        cpu->r[0] = 0x04000000u;
    }
L_0008a6bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0008a6c0:;
    {
        cpu->r[14] = 0x0008a6c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008a6c4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_0008a6c8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0008a6cc:;
    {
        uint32_t v = cpu->r[0] & cpu->r[6]; cpu->r[2] = v;
    }
L_0008a6d0:;
    {
        uint32_t v = cpu->r[1] & cpu->r[7]; cpu->r[3] = v;
    }
L_0008a6d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 1);
    }
L_0008a6d8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008a6dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_0008a6e0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 13u, &shc); cpu->r[1] = v;
    }
L_0008a6e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0008a6e8:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 2, 19u, &shc); cpu->r[1] = v;
    }
L_0008a6ec:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 5u, &shc); cpu->r[1] = v;
    }
L_0008a6f0:;
    {
        wr32(cpu->r[8] + cpu->r[4], cpu->r[1]);
    }
L_0008a6f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0008a6f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a69c;
        }
    }
L_0008a6fc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a700:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0008a704:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008a708:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a70c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_0008a710:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_0008a714:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_0008a718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a678;
        }
    }
L_0008a71c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0008a720:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0008a724:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008a728:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008a72c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008a730:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[0]);
    }
L_0008a734:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7]; cpu->r[7] = v;
    }
L_0008a738:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008a73c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008a740:;
    {
        *vfp_d(cpu,10) = (double)*vfp_s(cpu,16);
    }
L_0008a744:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0008a748:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_0008a74c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008a750:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008a754:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008a758:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008a75c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008a760:;
    {
        cpu->r[10] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008a764:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008a768:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0008a76c:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[2]);
    }
L_0008a770:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_0008a774:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[5]);
    }
L_0008a778:;
    {
        wr32(cpu->r[13] + + 0xe8u, cpu->r[3]);
    }
L_0008a77c:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[10]);
    }
L_0008a780:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_0008a784:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b6e0;
        }
    }
L_0008a788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008a78c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008a790:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0008a794:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0008a798:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008a79c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0008a7a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0008a7a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008a7a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_0008a7ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0008a7b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a794;
        }
    }
L_0008a7b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b6e0;
        }
    }
L_0008a7bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008a7c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b7dc;
        }
    }
L_0008a7c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008a7c8:;
    {
        goto L_0008a7e8;
    }
L_0008a7e8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0008a7ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008a7f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008a7f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008a7e8;
        }
    }
L_0008a7f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008a7fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 0);
    }
L_0008a800:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a804:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 0);
    }
L_0008a808:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0008a80c:;
    {
        wr32(cpu->r[14] + + 0x1cu, cpu->r[3]);
    }
L_0008a810:;
    {
        cpu->r[14] = 0x0008a814u; fn_0008686c(cpu);
    }
L_0008a814:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a818:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_0008a81c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008a820:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_0008a824:;
    {
        cpu->r[14] = 0x0008a828u; fn_00086894(cpu);
    }
L_0008a828:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a82c:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0008a830:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008a834:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0008a838:;
    {
        cpu->r[14] = 0x0008a83cu; fn_00086894(cpu);
    }
L_0008a83c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008a840:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0008a844:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008a848:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a84c:;
    {
        cpu->r[14] = 0x0008a850u; fn_00086894(cpu);
    }
L_0008a850:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008a854:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008a858:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0008a85c:;
    {
        cpu->r[14] = 0x0008a860u; fn_00086314(cpu);
    }
L_0008a860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008a864:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a868:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0008a86c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[5]);
        }
    }
L_0008a870:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008af54;
        }
    }
L_0008a874:;
    {
        cpu->r[3] = rd32(0x0008a87cu + - 0x98u);
    }
L_0008a878:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008a87c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008a880:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_0008a884:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008a88cu, cpu->r[3], 0, 0);
    }
L_0008a888:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_0008a88c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008a890:;
    {
        cpu->r[12] = 0x00000018u;
    }
L_0008a894:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[14]);
    }
L_0008a898:;
    {
        uint32_t v = cpu->r[3] & 0x00000002u; cpu->r[3] = v;
    }
L_0008a89c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[0]);
    }
L_0008a8a0:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[3]);
    }
L_0008a8a4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0008a8a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008a8ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008a8b0:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_0008a8b4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008a8b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0008a8bc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008a8c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008a8c4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_0008a8c8:;
    {
        uint32_t v = cpu->r[5] & 0x00000020u; cpu->r[7] = v;
    }
L_0008a8cc:;
    {
        uint32_t v = cpu->r[2] & 0x00000004u; cpu->r[2] = v;
    }
L_0008a8d0:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[10] = v;
    }
L_0008a8d4:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[1]);
    }
L_0008a8d8:;
    {
        uint32_t v = cpu->r[5] & 0x00000008u; cpu->r[8] = v;
    }
L_0008a8dc:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[2]);
    }
L_0008a8e0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_0008a8e4:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[7]);
    }
L_0008a8e8:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[10]);
    }
L_0008a8ec:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[12]);
    }
L_0008a8f0:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0008a8f8u + + 0x3a8u);
    }
L_0008a8f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008a8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ad2c;
        }
    }
L_0008a8fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0008a900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b144;
        }
    }
L_0008a904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008a908:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008a90c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008a910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008a914:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_0008a918:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0008a91c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008a920:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0008a924:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b040;
        }
    }
L_0008a928:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008a92c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008a930:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0008a934:;
    {
        cpu->r[12] = cpu->r[8];
    }
L_0008a938:;
    {
        cpu->r[2] = rd32(0x0008a940u + + 0x378u);
    }
L_0008a93c:;
    {
        cpu->r[1] = rd32(0x0008a944u + + 0x378u);
    }
L_0008a940:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008a948u, cpu->r[2], 0, 0);
    }
L_0008a944:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008a948:;
    {
        cpu->r[2] = rd32(0x0008a950u + + 0x370u);
    }
L_0008a94c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0008a954u, cpu->r[1], 0, 0);
    }
L_0008a950:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0008a954:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008a95cu, cpu->r[2], 0, 0);
    }
L_0008a958:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0008a95c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008a960:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008a964:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008ab28;
        }
    }
L_0008a968:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a96c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008a970:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_0008a974:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008a978:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008a97c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ab1c;
        }
    }
L_0008a980:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008a984:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008ab1c;
        }
    }
L_0008a988:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008a98c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae20;
        }
    }
L_0008a990:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008a994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae48;
        }
    }
L_0008a998:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008a99c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008a9a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008a9a4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008a9a8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0008a9ac:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008a9b0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[8]; cpu->r[6] = v;
    }
L_0008a9b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008a9b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008a9bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008a9c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ae40;
        }
    }
L_0008a9c4:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[6]);
    }
L_0008a9c8:;
    {
        uint32_t v = cpu->r[10] & ~ 0x00000440u; cpu->r[10] = v;
    }
L_0008a9cc:;
    {
        uint32_t v = cpu->r[10] & ~ 0x00000006u; cpu->r[10] = v;
    }
L_0008a9d0:;
    {
        uint32_t v = cpu->r[10] & 0x000000ffu; cpu->r[14] = v;
        set_nz(cpu, v);
    }
L_0008a9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ab10;
        }
    }
L_0008a9d8:;
    {
        { uint32_t v = cpu->r[10] & 0x00005000u; set_nz(cpu, v); }
    }
L_0008a9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ab10;
        }
    }
L_0008a9e0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[8]; cpu->r[1] = v;
    }
L_0008a9e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008a9e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008a9ec:;
    {
        uint32_t v = cpu->r[14] | cpu->r[3]; cpu->r[14] = v;
    }
L_0008a9f0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_0008a9f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0008a9f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0008a9fc:;
    {
        cpu->r[3] = rd8(cpu->r[14] + + 0x10u);
    }
L_0008aa00:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008aa04:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0008aa08:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0008aa0c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0008aa10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008aa14:;
    {
        { uint32_t v = cpu->r[1] & cpu->r[14]; set_nz(cpu, v); }
    }
L_0008aa18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008aa1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_0008aa20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_0008aa24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0008aa28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008aa2c:;
    {
        wr32(cpu->r[9] + + 0x64u, cpu->r[3]);
    }
L_0008aa30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae6c;
        }
    }
L_0008aa34:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0008aa38:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0008aa3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008aa40:;
    {
        cpu->r[14] = 0x0008aa44u; fn_00086350(cpu);
    }
L_0008aa44:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008aa48:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0008aa4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008aafc;
        }
    }
L_0008aa50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008aa54:;
    {
        cpu->r[10] = (cpu->r[10] >> 4) & 0xffu;
    }
L_0008aa58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008aa5c:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_0008aa60:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0008aa64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_0008aa68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_0008aa6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
        }
    }
L_0008aa70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008aa74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_0008aa78:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 31u, &shc); cpu->r[11] = v;
    }
L_0008aa7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_0008aa80:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0008aa84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
        }
    }
L_0008aa88:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
        }
    }
L_0008aa8c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008aa90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0008aa94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0008aa98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000710u, 0, 0);
        }
    }
L_0008aa9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000610u, 0, 0);
        }
    }
L_0008aaa0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008aaa4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_0008aaa8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008aaac:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0008aab0:;
    {
        cpu->r[0] = cpu->r[0] + (uint32_t)((int16_t)cpu->r[3]);
    }
L_0008aab4:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x410u);
    }
L_0008aab8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0008aabc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008aac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008aac4:;
    {
        wr32(cpu->r[9] + + 0x64u, cpu->r[3]);
    }
L_0008aac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae84;
        }
    }
L_0008aacc:;
    {
        cpu->r[1] = rd8(cpu->r[10] + + 0x510u);
    }
L_0008aad0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0008aad4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008aad8:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[11]; cpu->r[1] = v;
    }
L_0008aadc:;
    {
        cpu->r[14] = 0x0008aae0u; fn_00086350(cpu);
    }
L_0008aae0:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008aae4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0008aae8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008aaec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008aaf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008aaf4:;
    {
        cpu->r[14] = 0x0008aaf8u; fn_000892bc(cpu);
    }
L_0008aaf8:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008aafc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008ab00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008ab04:;
    {
        cpu->r[1] = rd16(cpu->r[6]);
    }
L_0008ab08:;
    {
        uint32_t v = cpu->r[1] | 0x00004000u; cpu->r[1] = v;
    }
L_0008ab0c:;
    {
        wr16(cpu->r[6], cpu->r[1]);
    }
L_0008ab10:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008ab14:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008ab18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a980;
        }
    }
L_0008ab1c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008ab20:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_0008ab24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008a974;
        }
    }
L_0008ab28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ab2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0008ab30:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008ab34:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008ab38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008a960;
        }
    }
L_0008ab3c:;
    {
        cpu->r[8] = cpu->r[12];
    }
L_0008ab40:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0008ab44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0008ab48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b01c;
        }
    }
L_0008ab4c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xccu);
    }
L_0008ab50:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0008ab54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008af18;
        }
    }
L_0008ab58:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x0008ab60u + + 0x148u);
    }
L_0008ab5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0008ab60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008ab64:;
    {
        cpu->r[14] = 0x0008ab68u; fn_0007f3e8(cpu);
    }
L_0008ab68:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008ab6c:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 9) * *vfp_d(cpu, 7);
    }
L_0008ab70:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008ab74:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ab78:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0008ab7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_0008ab80:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_0008ab84:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_0008ab88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd0u);
    }
L_0008ab8c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[12] + + 0x20u);
    }
L_0008ab90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ab94:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 10) * *vfp_d(cpu, 5);
    }
L_0008ab98:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_0008ab9c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) * *vfp_d(cpu, 7);
    }
L_0008aba0:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0008aba4:;
    {
        *vfp_d(cpu, 4) = *vfp_d(cpu, 7) * *vfp_d(cpu, 5);
    }
L_0008aba8:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x0008abb0u + + 0x100u);
    }
L_0008abac:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 4) * *vfp_d(cpu, 5);
    }
L_0008abb0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 5);
    }
L_0008abb4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_0008abb8:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) + *vfp_d(cpu, 7);
    }
L_0008abbc:;
    {
        *(uint64_t*)G(cpu->r[12] + + 0x20u) = *(uint64_t*)vfp_d(cpu, 6);
    }
L_0008abc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae9c;
        }
    }
L_0008abc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008abc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008abcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008abd0:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
        }
    }
L_0008abd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ae9c;
        }
    }
L_0008abd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008abdc:;
    {
        cpu->r[14] = 0x0008abe0u; fn_00086498(cpu);
    }
L_0008abe0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008abe4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008abe8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0008abec:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0008abf0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008abf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008abf8:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_0008abfc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0008ac00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0008ac04:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x70u, cpu->r[7]);
        }
    }
L_0008ac08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_0008ac0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
        }
    }
L_0008ac10:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
        }
    }
L_0008ac14:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ac18:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0008ac1c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008ac20:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        }
    }
L_0008ac24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ac28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ac5c;
        }
    }
L_0008ac2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008ac30:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008ac34:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x1cu);
    }
L_0008ac38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0008ac3c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_0008ac40:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
        }
    }
L_0008ac44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008af28;
        }
    }
L_0008ac48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0008ac4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ac50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008af28;
        }
    }
L_0008ac54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008ac58:;
    {
        cpu->r[14] = 0x0008ac5cu; fn_00086504(cpu);
    }
L_0008ac5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008ac60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008ac64:;
    {
        *(uint64_t*)G(cpu->r[1] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 8);
    }
L_0008ac68:;
    {
        cpu->r[14] = 0x0008ac6cu; fn_00086304(cpu);
    }
L_0008ac6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0008ac70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008ac74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008ac78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0008ac7c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0008ac80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008af34;
        }
    }
L_0008ac84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ac88:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008ac8c:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_0008ac90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008ac94:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[6]);
    }
L_0008ac98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008af54;
        }
    }
L_0008ac9c:;
    {
        goto L_0008acc8;
    }
L_0008acc8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008accc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008acd0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008acd4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0008acd8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0008acdc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008ace0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0008ace4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0008ace8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0008acec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008acf0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0008acf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0008acf8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008acfc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_0008ad00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ad04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_0008ad08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0008ad0c:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0008ad10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0008ad14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_0008ad18:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[2]);
    }
L_0008ad1c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_0008ad20:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[12]);
    }
L_0008ad24:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008ad28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008a8fc;
        }
    }
L_0008ad2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008ad30:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ad34:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008ad38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ad3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00000006u, 0, 0);
    }
L_0008ad40:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[7] = v;
    }
L_0008ad44:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0008ad48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b040;
        }
    }
L_0008ad4c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008ad50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008ad54:;
    {
        cpu->r[1] = rd32(0x0008ad5cu + - 0x98u);
    }
L_0008ad58:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0008ad5c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_0008ad60:;
    {
        cpu->r[1] = add_flags(cpu, 0x0008ad68u, cpu->r[1], 0, 0);
    }
L_0008ad64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0008ad68:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0008ad6c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_0008ad70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008ad74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008ae04;
        }
    }
L_0008ad78:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ad7c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008ad80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_0008ad84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ad88:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008ad8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008adf8;
        }
    }
L_0008ad90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008ad94:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008adf8;
        }
    }
L_0008ad98:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0008ad9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b0f0;
        }
    }
L_0008ada0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008ada4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b118;
        }
    }
L_0008ada8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008adac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008adb0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008adb4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008adb8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0008adbc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008adc0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[10]; cpu->r[6] = v;
    }
L_0008adc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008adc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008adcc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008add0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b110;
        }
    }
L_0008add4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[6]);
    }
L_0008add8:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000440u; cpu->r[12] = v;
    }
L_0008addc:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000006u; cpu->r[12] = v;
    }
L_0008ade0:;
    {
        uint32_t v = cpu->r[12] & 0x00005000u; cpu->r[14] = v;
    }
L_0008ade4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00001000u, 1, 1);
    }
L_0008ade8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b04c;
        }
    }
L_0008adec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008adf0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0008adf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008ad90;
        }
    }
L_0008adf8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008adfc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0008ae00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008ad84;
        }
    }
L_0008ae04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ae08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008ae0c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0008ae10:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008ae14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008ad70;
        }
    }
L_0008ae18:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0008ae1c:;
    {
        goto L_0008ab40;
    }
L_0008ae20:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008ae24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008ae28:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008ae2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008ae30:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[8]; cpu->r[6] = v;
    }
L_0008ae34:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008ae38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008ae3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008ae40:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[6]);
    }
L_0008ae44:;
    {
        goto L_0008a9d0;
    }
L_0008ae48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008ae4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008ae50:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008ae54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008ae58:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[8]; cpu->r[6] = v;
    }
L_0008ae5c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008ae60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008ae64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008ae68:;
    {
        goto L_0008a9c4;
    }
L_0008ae6c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0008ae70:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0008ae74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008ae78:;
    {
        cpu->r[14] = 0x0008ae7cu; fn_00086518(cpu);
    }
L_0008ae7c:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008ae80:;
    {
        goto L_0008aa48;
    }
L_0008ae84:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0008ae88:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0008ae8c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008ae90:;
    {
        cpu->r[14] = 0x0008ae94u; fn_00086518(cpu);
    }
L_0008ae94:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008ae98:;
    {
        goto L_0008aae4;
    }
L_0008ae9c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008aea0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008aea4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008aea8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0008aeac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008aeb0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008aeb4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008aeb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0008aebc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0008aec0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008aec4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008aec8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008aef0;
        }
    }
L_0008aecc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_0008aed0:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
        }
    }
L_0008aed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008aef0;
        }
    }
L_0008aed8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008aedc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008aee0:;
    {
        cpu->r[5] = 0x00000003u;
    }
L_0008aee4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0008aee8:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[2]);
    }
L_0008aeec:;
    {
        goto L_0008abf0;
    }
L_0008aef0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0008aef4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008aef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008aed8;
        }
    }
L_0008aefc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008af00:;
    {
        cpu->r[14] = 0x0008af04u; fn_00086498(cpu);
    }
L_0008af04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008af08:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008af0c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0008af10:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0008af14:;
    {
        goto L_0008abf0;
    }
L_0008af18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008af1c:;
    {
        cpu->r[14] = 0x0008af20u; fn_0008614c(cpu);
    }
L_0008af20:;
    {
        *(uint64_t*)vfp_d(cpu,9) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008af24:;
    {
        goto L_0008ab5c;
    }
L_0008af28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008af2c:;
    {
        cpu->r[14] = 0x0008af30u; fn_00086614(cpu);
    }
L_0008af30:;
    {
        goto L_0008ac5c;
    }
L_0008af34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008af38:;
    {
        cpu->r[14] = 0x0008af3cu; fn_000868b4(cpu);
    }
L_0008af3c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008af40:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008af44:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_0008af48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008af4c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[6]);
    }
L_0008af50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008acc8;
        }
    }
L_0008af54:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008af58:;
    {
        { uint32_t v = cpu->r[7] & 0x00000010u; set_nz(cpu, v); }
    }
L_0008af5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b748;
        }
    }
L_0008af60:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008af64:;
    {
        { uint32_t v = cpu->r[10] & 0x00000001u; set_nz(cpu, v); }
    }
L_0008af68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008af74;
        }
    }
L_0008af6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008af70:;
    {
        cpu->r[14] = 0x0008af74u; fn_00086498(cpu);
    }
L_0008af74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008af78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008af7c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008af80:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_0008af84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b6c4;
        }
    }
L_0008af88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008af8c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008af90:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008af94:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0008af98:;
    {
        goto L_0008afec;
    }
L_0008af9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0008afa0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0008afa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008afc0;
        }
    }
L_0008afa8:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0008afac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0008afb0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + - 0x1u);
    }
L_0008afb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_0008afb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_0008afbc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[10], cpu->r[0]);
        }
    }
L_0008afc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008afc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008afc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
        }
    }
L_0008afcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
        }
    }
L_0008afd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0008afd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + - 0x18u);
        }
    }
L_0008afd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0008afdc:;
    {
        wr32(cpu->r[10] + + 0x14u, cpu->r[3]);
    }
L_0008afe0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x2cu);
    }
L_0008afe4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008afe8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b6c4;
        }
    }
L_0008afec:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x8u);
    }
L_0008aff0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0008aff4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0008aff8:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0008affc:;
    {
        cpu->r[14] = 0x0008b000u; fn_00086304(cpu);
    }
L_0008b000:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_0008b004:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[5]);
        }
    }
L_0008b008:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008af9c;
        }
    }
L_0008b00c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0008b010:;
    {
        cpu->r[14] = 0x0008b014u; fn_00086304(cpu);
    }
L_0008b014:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[0]);
    }
L_0008b018:;
    {
        goto L_0008af9c;
    }
L_0008b01c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xccu);
    }
L_0008b020:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0008b024:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b6b4;
        }
    }
L_0008b028:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x0008b030u + + 0x3c0u);
    }
L_0008b02c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0008b030:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008b034:;
    {
        cpu->r[14] = 0x0008b038u; fn_0007eff0(cpu);
    }
L_0008b038:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008b03c:;
    {
        goto L_0008ab6c;
    }
L_0008b040:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008b044:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0008b048:;
    {
        goto L_0008ab40;
    }
L_0008b04c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[10]; cpu->r[1] = v;
    }
L_0008b050:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008b054:;
    {
        cpu->r[2] = rd32(cpu->r[11] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0008b058:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0008b05c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0008b060:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000006u, 1, 1);
    }
L_0008b064:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[2] = v;
        }
    }
L_0008b068:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_0008b06c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_0008b070:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_0008b074:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
        }
    }
L_0008b078:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
        }
    }
L_0008b07c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_0008b080:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_0008b084:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000910u, 0, 0);
        }
    }
L_0008b088:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000810u, 0, 0);
        }
    }
L_0008b08c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008b090:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_0008b094:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[14]; set_nz(cpu, v); }
    }
L_0008b098:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0008b09c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0008b0a0:;
    {
        { uint32_t v = cpu->r[12] & 0x000000ffu; set_nz(cpu, v); }
    }
L_0008b0a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_0008b0a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000eu;
        }
    }
L_0008b0ac:;
    {
        cpu->r[9] = cpu->r[9] + (uint32_t)((int16_t)cpu->r[2]);
    }
L_0008b0b0:;
    {
        { uint32_t v = cpu->r[12] & 0x00002000u; set_nz(cpu, v); }
    }
L_0008b0b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008b0b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000010u;
        }
    }
L_0008b0bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008b0c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008b0c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008b0c8:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_0008b0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b13c;
        }
    }
L_0008b0d0:;
    {
        cpu->r[14] = 0x0008b0d4u; fn_00086350(cpu);
    }
L_0008b0d4:;
    {
        cpu->r[1] = rd16(cpu->r[6]);
    }
L_0008b0d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b0dc:;
    {
        uint32_t v = cpu->r[1] | 0x00002000u; cpu->r[1] = v;
    }
L_0008b0e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b0e4:;
    {
        wr16(cpu->r[6], cpu->r[1]);
    }
L_0008b0e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008b0ec:;
    {
        goto L_0008adf0;
    }
L_0008b0f0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b0f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b0f8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b0fc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008b100:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[10]; cpu->r[6] = v;
    }
L_0008b104:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008b108:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008b10c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008b110:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[6]);
    }
L_0008b114:;
    {
        goto L_0008ade0;
    }
L_0008b118:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b11c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b120:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b124:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008b128:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[10]; cpu->r[6] = v;
    }
L_0008b12c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008b130:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008b134:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008b138:;
    {
        goto L_0008add4;
    }
L_0008b13c:;
    {
        cpu->r[14] = 0x0008b140u; fn_00086518(cpu);
    }
L_0008b140:;
    {
        goto L_0008b0d4;
    }
L_0008b144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b148:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008b14c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008b150:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008b154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008b158:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000006u, 0, 0);
    }
L_0008b15c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_0008b160:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008b164:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_0008b168:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[10]);
    }
L_0008b16c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008b170:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_0008b174:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b3d4;
        }
    }
L_0008b178:;
    {
        cpu->r[2] = rd32(0x0008b180u + + 0x278u);
    }
L_0008b17c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0008b180:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_0008b184:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x0000005cu, 0, 0);
    }
L_0008b188:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008b190u, cpu->r[2], 0, 0);
    }
L_0008b18c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0008b190:;
    {
        cpu->r[2] = rd32(0x0008b198u + + 0x264u);
    }
L_0008b194:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], 0x00000060u, 0, 0);
    }
L_0008b198:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008b19c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_0008b1a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008b1a8u, cpu->r[2], 0, 0);
    }
L_0008b1a4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0008b1a8:;
    {
        cpu->r[2] = rd32(0x0008b1b0u + + 0x250u);
    }
L_0008b1ac:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[14]);
    }
L_0008b1b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008b1b8u, cpu->r[2], 0, 0);
    }
L_0008b1b4:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[2]);
    }
L_0008b1b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b1bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008b1c0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0008b1c4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0008b1c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008b1cc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008b1d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
        }
    }
L_0008b1d4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0008b1d8:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_0008b1dc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x78u, cpu->r[12]);
        }
    }
L_0008b1e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b3b8;
        }
    }
L_0008b1e4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008b1e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008b1ec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0008b1f0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0008b1f4:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[14]);
    }
L_0008b1f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b1fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0008b200:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008b204:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b47c;
        }
    }
L_0008b208:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008b20c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0008b210:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0008b214:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0008b218:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0008b21c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008b220:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0008b224:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b3a0;
        }
    }
L_0008b228:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008b22c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b3a0;
        }
    }
L_0008b230:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0008b234:;
    {
        goto L_0008b260;
    }
L_0008b238:;
    {
        cpu->r[1] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_0008b23c:;
    {
        { uint32_t v = cpu->r[1] & 0x00005000u; set_nz(cpu, v); }
    }
L_0008b240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b404;
        }
    }
L_0008b244:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_0008b248:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00004000u; cpu->r[1] = v;
    }
L_0008b24c:;
    {
        wr16(cpu->r[6] + cpu->r[5], cpu->r[1]);
    }
L_0008b250:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b3a0;
        }
    }
L_0008b254:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0008b258:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008b3a0;
        }
    }
L_0008b25c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008b260:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008b264:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008b268:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = cpu->r[6];
        }
    }
L_0008b26c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b28c;
        }
    }
L_0008b270:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0008b274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_0008b278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b28c;
        }
    }
L_0008b27c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008b280:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_0008b284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_0008b288:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_0008b28c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b290:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b294:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008b298:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b29c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[8]; cpu->r[5] = v;
    }
L_0008b2a0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0008b2a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[8]; cpu->r[11] = v;
    }
L_0008b2a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008b2ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008b2b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0008b2b4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0008b2b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0008b2bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0008b2c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b2d4;
        }
    }
L_0008b2c4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008b2c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0008b2cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0008b2d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0008b2d4:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[5]);
    }
L_0008b2d8:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0008b2dc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008b2e0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[9] & ~ 0x00000440u; cpu->r[9] = v;
        }
    }
L_0008b2e4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[9] & ~ 0x00000006u; cpu->r[9] = v;
        }
    }
L_0008b2e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008b2ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b238;
        }
    }
L_0008b2f0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0008b2f4:;
    {
        cpu->r[9] = (cpu->r[9] >> 4) & 0xffu;
    }
L_0008b2f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008b2fc:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0008b300:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_0008b304:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008b308:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000006u, 1, 1);
    }
L_0008b30c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008b310:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
        }
    }
L_0008b314:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 31u, &shc); cpu->r[11] = v;
    }
L_0008b318:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_0008b31c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_0008b320:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
        }
    }
L_0008b324:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0008b328:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_0008b32c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
        }
    }
L_0008b330:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008b334:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0008b338:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0008b33c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000710u, 0, 0);
        }
    }
L_0008b340:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000610u, 0, 0);
        }
    }
L_0008b344:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008b348:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0008b34c:;
    {
        cpu->r[1] = cpu->r[1] + (uint32_t)((int16_t)cpu->r[3]);
    }
L_0008b350:;
    {
        cpu->r[3] = rd8(cpu->r[9] + + 0x410u);
    }
L_0008b354:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008b358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008b35c:;
    {
        cpu->r[1] = rd8(cpu->r[9] + + 0x510u);
    }
L_0008b360:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008b364:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[11]; cpu->r[1] = v;
    }
L_0008b368:;
    {
        wr32(cpu->r[10] + + 0x64u, cpu->r[3]);
    }
L_0008b36c:;
    {
        cpu->r[14] = 0x0008b370u; fn_00086350(cpu);
    }
L_0008b370:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008b374:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0008b378:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b37c:;
    {
        cpu->r[14] = 0x0008b380u; fn_000892bc(cpu);
    }
L_0008b380:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008b384:;
    {
        cpu->r[1] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_0008b388:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_0008b38c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b390:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00004000u; cpu->r[1] = v;
    }
L_0008b394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b398:;
    {
        wr16(cpu->r[6] + cpu->r[5], cpu->r[1]);
    }
L_0008b39c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b254;
        }
    }
L_0008b3a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008b3a4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b3a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0008b3ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008b3b0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0008b3b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b1f8;
        }
    }
L_0008b3b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008b3bc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008b3c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008b3c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0008b3c8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[7]);
    }
L_0008b3cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b1c8;
        }
    }
L_0008b3d0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008b3d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_0008b3d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008b3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ab40;
        }
    }
L_0008b3e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b3e4:;
    {
        cpu->r[14] = 0x0008b3e8u; fn_000866b4(cpu);
    }
L_0008b3e8:;
    {
        goto L_0008ab40;
    }
L_0008b404:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008b408:;
    {
        uint32_t v = cpu->r[9] & 0x000000ffu; cpu->r[3] = v;
    }
L_0008b40c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008b410:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0008b414:;
    {
        uint32_t v = cpu->r[14] | cpu->r[3]; cpu->r[3] = v;
    }
L_0008b418:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008b41c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008b420:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0008b424:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0008b428:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008b42c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008b430:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_0008b434:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[14]; set_nz(cpu, v); }
    }
L_0008b438:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x10u);
    }
L_0008b43c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0008b440:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0008b444:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0008b448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_0008b44c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0008b450:;
    {
        wr32(cpu->r[10] + + 0x64u, cpu->r[3]);
    }
L_0008b454:;
    {
        cpu->r[14] = 0x0008b458u; fn_00086350(cpu);
    }
L_0008b458:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008b45c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008b460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008b464:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008b468:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b2f0;
        }
    }
L_0008b46c:;
    {
        cpu->r[1] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_0008b470:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b474:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b478:;
    {
        goto L_0008b244;
    }
L_0008b47c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008b480:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008b484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b5b8;
        }
    }
L_0008b488:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008b48c:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008b490:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b494:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008b498:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b49c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 0);
    }
L_0008b4a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b4a4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[6]);
    }
L_0008b4a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[14] + cpu->r[6]; cpu->r[5] = v;
    }
L_0008b4ac:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0008b4b0:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_0008b4b4:;
    {
        uint32_t v = cpu->r[5] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008b4b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008b4bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b4c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 0);
    }
L_0008b4c4:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008b4c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008b4cc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[14] + cpu->r[6]; cpu->r[5] = v;
    }
L_0008b4d0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0008b4d4:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_0008b4d8:;
    {
        uint32_t v = cpu->r[5] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008b4dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008b4e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b4e4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14] + cpu->r[6]; cpu->r[2] = v;
    }
L_0008b4e8:;
    {
        cpu->r[5] = 0x000050ffu;
    }
L_0008b4ec:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0000u << 16);
    }
L_0008b4f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0008b4f4:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0008b4f8:;
    {
        uint32_t v = cpu->r[2] & cpu->r[5]; cpu->r[5] = v;
    }
L_0008b4fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008b500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b504:;
    {
        uint32_t v = cpu->r[14] * cpu->r[10] + cpu->r[6]; cpu->r[2] = v;
    }
L_0008b508:;
    {
        cpu->r[14] = 0x000050b9u;
    }
L_0008b50c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0000u << 16);
    }
L_0008b510:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0008b514:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0008b518:;
    {
        uint32_t v = cpu->r[2] & cpu->r[14]; cpu->r[14] = v;
    }
L_0008b51c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0008b520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b538;
        }
    }
L_0008b524:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008b528:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008b52c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0008b530:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0008b534:;
    {
        goto L_0008b21c;
    }
L_0008b538:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008b53c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008b540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008b544:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0] + cpu->r[8]; cpu->r[2] = v;
    }
L_0008b548:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0008b54c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0008b550:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008b554:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_0008b558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008b55c:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0008b560:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_0008b564:;
    {
        uint32_t v = cpu->r[1] & cpu->r[2]; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0008b568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b644;
        }
    }
L_0008b56c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008b570:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_0008b574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b554;
        }
    }
L_0008b578:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008b57c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008b580:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008b584:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008b588:;
    {
        wr32(cpu->r[10] + + 0x64u, cpu->r[7]);
    }
L_0008b58c:;
    {
        cpu->r[14] = 0x0008b590u; fn_00086350(cpu);
    }
L_0008b590:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b594:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008b598:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b59c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0008b5a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b5a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008b5a8:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008b5ac:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0008b5b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008b1f8;
        }
    }
L_0008b5b4:;
    {
        goto L_0008b3b8;
    }
L_0008b5b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008b5bc:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008b5c0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b5c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008b5c8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008b5cc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 0);
    }
L_0008b5d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b5d4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[6]);
    }
L_0008b5d8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[14] + cpu->r[6]; cpu->r[5] = v;
    }
L_0008b5dc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0008b5e0:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_0008b5e4:;
    {
        uint32_t v = cpu->r[5] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008b5e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008b5ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b5f0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 0);
    }
L_0008b5f4:;
    {
        cpu->r[2] = 0x000050ffu;
    }
L_0008b5f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_0008b5fc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[14] + cpu->r[6]; cpu->r[5] = v;
    }
L_0008b600:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0008b604:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_0008b608:;
    {
        uint32_t v = cpu->r[5] & cpu->r[2]; cpu->r[2] = v;
    }
L_0008b60c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008b610:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b614:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14] + cpu->r[6]; cpu->r[2] = v;
    }
L_0008b618:;
    {
        cpu->r[5] = 0x000050ffu;
    }
L_0008b61c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0000u << 16);
    }
L_0008b620:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0008b624:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0008b628:;
    {
        uint32_t v = cpu->r[2] & cpu->r[5]; cpu->r[5] = v;
    }
L_0008b62c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008b630:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b524;
        }
    }
L_0008b634:;
    {
        uint32_t v = cpu->r[14] * cpu->r[10] + cpu->r[6]; cpu->r[2] = v;
    }
L_0008b638:;
    {
        cpu->r[14] = 0x000050ffu;
    }
L_0008b63c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0000u << 16);
    }
L_0008b640:;
    {
        goto L_0008b510;
    }
L_0008b644:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008b648:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_0008b64c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0008b650:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008b654:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008b658:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0008b65c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008b660:;
    {
        wr32(cpu->r[14] + + 0x64u, cpu->r[10]);
    }
L_0008b664:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0008b668:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008b66c:;
    {
        cpu->r[14] = 0x0008b670u; fn_00086350(cpu);
    }
L_0008b670:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0008b674:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0008b678:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008b67c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0008b680:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008b684:;
    {
        wr32(cpu->r[6] + + 0x64u, cpu->r[3]);
    }
L_0008b688:;
    {
        cpu->r[14] = 0x0008b68cu; fn_00086350(cpu);
    }
L_0008b68c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008b690:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008b694:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[1] = v;
    }
L_0008b698:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_0008b69c:;
    {
        cpu->r[14] = 0x0008b6a0u; fn_00086350(cpu);
    }
L_0008b6a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0008b6a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b6a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b6ac:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008b6b0:;
    {
        goto L_0008b21c;
    }
L_0008b6b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008b6b8:;
    {
        cpu->r[14] = 0x0008b6bcu; fn_00085d0c(cpu);
    }
L_0008b6bc:;
    {
        *(uint64_t*)vfp_d(cpu,9) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008b6c0:;
    {
        goto L_0008b02c;
    }
L_0008b6c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xdcu);
    }
L_0008b6c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0008b6cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b6d0:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[1]);
    }
L_0008b6d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0008b6d8:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[2]);
    }
L_0008b6dc:;
    {
        goto L_0008a53c;
    }
L_0008b6e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008b6e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008b6e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b6ec:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[5]);
    }
L_0008b6f0:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[5]);
    }
L_0008b6f4:;
    {
        cpu->r[14] = 0x0008b6f8u; fn_0008686c(cpu);
    }
L_0008b6f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b6fc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0008b700:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_0008b704:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_0008b708:;
    {
        cpu->r[14] = 0x0008b70cu; fn_00086894(cpu);
    }
L_0008b70c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b710:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0008b714:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0008b718:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0008b71c:;
    {
        cpu->r[14] = 0x0008b720u; fn_00086894(cpu);
    }
L_0008b720:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b724:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008b728:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0008b72c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0008b730:;
    {
        cpu->r[14] = 0x0008b734u; fn_00086894(cpu);
    }
L_0008b734:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008b738:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b73c:;
    {
        cpu->r[1] = rd32(cpu->r[14]);
    }
L_0008b740:;
    {
        cpu->r[14] = 0x0008b744u; fn_00086314(cpu);
    }
L_0008b744:;
    {
        goto L_0008af54;
    }
L_0008b748:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b74c:;
    {
        cpu->r[14] = 0x0008b750u; fn_00086654(cpu);
    }
L_0008b750:;
    {
        goto L_0008af74;
    }
L_0008b754:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0008b758:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x84u);
        }
    }
L_0008b75c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[10] + + 0x1cu);
        }
    }
L_0008b760:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008a734;
        }
    }
L_0008b764:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xd8u);
    }
L_0008b768:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0008b76c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008b770:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0008b774:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0008b778:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0008b77c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008b780:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008b784:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0008b788:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008b7a8;
        }
    }
L_0008b78c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0008b790:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008b794:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0008b798:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 6u, &shc); cpu->r[1] = v;
    }
L_0008b79c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0008b7a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008b7a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b78c;
        }
    }
L_0008b7a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0008b7ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0008b7b0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 1);
    }
L_0008b7b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0008b7b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008b77c;
        }
    }
L_0008b7bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0008b7c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008b7c4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_0008b7c8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008b7cc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008b7d0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008b7d4:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[1]);
    }
L_0008b7d8:;
    {
        goto L_0008a734;
    }
L_0008b7dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008b7e0:;
    {
        cpu->r[3] = (~0x00000004u);
    }
L_0008b7e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008b7e8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_0008b7ec:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_0008b7f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b7f4:;
    {
        cpu->r[14] = 0x0008b7f8u; fn_0008686c(cpu);
    }
L_0008b7f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b7fc:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_0008b800:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008b804:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_0008b808:;
    {
        cpu->r[14] = 0x0008b80cu; fn_00086894(cpu);
    }
L_0008b80c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b810:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0008b814:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008b818:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0008b81c:;
    {
        cpu->r[14] = 0x0008b820u; fn_00086894(cpu);
    }
L_0008b820:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008b824:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b828:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008b82c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0008b830:;
    {
        cpu->r[14] = 0x0008b834u; fn_00086894(cpu);
    }
L_0008b834:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008b838:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008b83c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0008b840:;
    {
        cpu->r[14] = 0x0008b844u; fn_00086314(cpu);
    }
L_0008b844:;
    {
        goto L_0008af54;
    }
L_0008b848:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0008b84c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0008b850:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008b854:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[7]);
    }
L_0008b858:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_0008b85c:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[10]);
    }
L_0008b860:;
    {
        goto L_0008a500;
    }
L_0008b864:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xe4u);
    }
L_0008b868:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008b86c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b870:;
    {
        wr32(cpu->r[13] + + 0xe4u, cpu->r[1]);
    }
L_0008b874:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_0008b878:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0008b87c:;
    {
        goto L_0008a4e0;
    }
L_0008b880:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xecu);
    }
L_0008b884:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0008b888:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[12]);
    }
L_0008b88c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008b890:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[10]);
    }
L_0008b894:;
    {
        goto L_0008a490;
    }
L_0008b898:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0008b89c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008b8a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000430u, 0, 0);
    }
L_0008b8a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008b8a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008b8ac:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_0008b8b0:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_0008b8b4:;
    {
        goto L_0008a42c;
    }
L_0008b8b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_0008b8bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_0008b8c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b8c4u)) return;
    }
}

/* t1_destroy @ 0008b8c8 (arm) */
void fn_0008b8c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008b8c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008b8cc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008b8d0:;
    {
        cpu->r[5] = rd32(0x0008b8d8u + + 0x44u);
    }
L_0008b8d4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0008b8dcu, cpu->r[5], 0, 0);
    }
L_0008b8d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b8dcu)) return;
        }
    }
L_0008b8dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008b8e0:;
    {
        cpu->r[14] = 0x0008b8e4u; fn_000862d4(cpu);
    }
L_0008b8e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008b8e8:;
    {
        cpu->r[14] = 0x0008b8ecu; fn_000891cc(cpu);
    }
L_0008b8ec:;
    {
        cpu->r[3] = rd32(0x0008b8f4u + + 0x2cu);
    }
L_0008b8f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008b8f4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0008b8f8:;
    {
        cpu->r[14] = 0x0008b900u;
    }
L_0008b8fc:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b900u)) return;
    }
L_0008b900:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008b904:;
    {
        cpu->r[14] = 0x0008b90cu;
    }
L_0008b908:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b90cu)) return;
    }
L_0008b90c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008b910:;
    {
        cpu->r[14] = 0x0008b918u;
    }
L_0008b914:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b918u)) return;
    }
L_0008b918:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b91cu)) return;
    }
}

/* t1_create @ 0008b924 (arm) */
void fn_0008b924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008b924:;
    {
        cpu->r[3] = rd32(0x0008b92cu + + 0x54u);
    }
L_0008b928:;
    {
        cpu->r[2] = rd32(0x0008b930u + + 0x54u);
    }
L_0008b92c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008b934u, cpu->r[3], 0, 0);
    }
L_0008b930:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008b934:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008b938:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008b93c:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_0008b940:;
    {
        cpu->r[14] = 0x0008b948u;
    }
L_0008b944:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b948u)) return;
    }
L_0008b948:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008b94c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008b978;
        }
    }
L_0008b950:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0008b954:;
    {
        cpu->r[14] = 0x0008b958u; fn_000862a8(cpu);
    }
L_0008b958:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0008b95c:;
    {
        cpu->r[14] = 0x0008b960u; fn_000891a0(cpu);
    }
L_0008b960:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008b964:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0008b968:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0008b96c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0008b970:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0008b974:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0008b978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008b97c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b980u)) return;
    }
}

/* sub_0008b988 @ 0008b988 (arm) */
void fn_0008b988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008b988:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0008b98c:;
    {
        cpu->r[12] = rd32(0x0008b994u + + 0xa0u);
    }
L_0008b990:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0008b994:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008b998:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0008b99c:;
    {
        cpu->r[2] = rd32(0x0008b9a4u + + 0x94u);
    }
L_0008b9a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0008b9a8u, cpu->r[12], 0, 0);
    }
L_0008b9a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008b9a8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0008b9ac:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0008b9b0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0008b9b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 1, 0);
    }
L_0008b9b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008b9bc:;
    {
        cpu->r[14] = 0x0008b9c4u;
    }
L_0008b9c0:;
    {
        uint32_t t = rd32(cpu->r[2]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b9c4u)) return;
    }
L_0008b9c4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 5u, &shc); cpu->r[3] = v;
    }
L_0008b9c8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_0008b9cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008b9d0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 1, 0);
    }
L_0008b9d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0008b9d8:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0008b9dc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_0008b9e0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0008b9e4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0008b9e8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_0008b9ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008b9f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0008b9f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008b9f8u)) return;
        }
    }
L_0008b9f8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_0008b9fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000006du;
        }
    }
L_0008ba00:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0008ba04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba08u)) return;
        }
    }
L_0008ba08:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008ba0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000000au;
        }
    }
L_0008ba10:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0008ba14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba18u)) return;
        }
    }
L_0008ba18:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0xcu);
    }
L_0008ba1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008ba20:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
        }
    }
L_0008ba24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0008ba28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008ba2c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0008ba30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba34u)) return;
    }
}

/* t2_create @ 0008ba3c (arm) */
void fn_0008ba3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008ba3c:;
    {
        cpu->r[3] = rd32(0x0008ba44u + + 0x38u);
    }
L_0008ba40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008ba44:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0008ba48:;
    {
        cpu->r[2] = rd32(0x0008ba50u + + 0x30u);
    }
L_0008ba4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008ba54u, cpu->r[3], 0, 0);
    }
L_0008ba50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008ba54:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0008ba58:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0008ba5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008ba60:;
    {
        cpu->r[14] = 0x0008ba68u;
    }
L_0008ba64:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba68u)) return;
    }
L_0008ba68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ba6c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[4]);
        }
    }
L_0008ba70:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
        }
    }
L_0008ba74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
        }
    }
L_0008ba78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba7cu)) return;
    }
}

/* t2_destroy @ 0008ba84 (arm) */
void fn_0008ba84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008ba84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ba88:;
    {
        cpu->r[3] = rd32(0x0008ba90u + + 0x1cu);
    }
L_0008ba8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0008ba90:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008ba98u, cpu->r[3], 0, 0);
    }
L_0008ba94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ba98u)) return;
        }
    }
L_0008ba98:;
    {
        cpu->r[2] = rd32(0x0008baa0u + + 0x10u);
    }
L_0008ba9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008baa0:;
    {
        cpu->r[14] = 0x0008baa8u;
    }
L_0008baa4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008baa8u)) return;
    }
L_0008baa8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0008baacu)) return;
    }
}

/* t2_decode_packets @ 0008bab4 (arm) */
void fn_0008bab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008bab4:;
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
L_0008bab8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_0008babc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0008bac0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_0008bac4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008bac8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008bacc:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_0008bad0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0008bad4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008bad8:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0008badc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[0]);
    }
L_0008bae0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0008bae4:;
    {
        cpu->r[14] = 0x0008bae8u; fn_000875fc(cpu);
    }
L_0008bae8:;
    {
        cpu->r[2] = rd32(0x0008baf0u + + 0xce8u);
    }
L_0008baec:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008baf4u, cpu->r[2], 0, 0);
    }
L_0008baf0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0008baf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008baf8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_0008bafc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x0000fc19u;
        }
    }
L_0008bb00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0xffffu << 16);
        }
    }
L_0008bb04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c7cc;
        }
    }
L_0008bb08:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008bb0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008bb10:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0008bb14:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_0008bb18:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0008bb1c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008bb20:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_0008bb24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008bb28:;
    {
        cpu->r[0] = rd32(0x0008bb30u + + 0xcacu);
    }
L_0008bb2c:;
    {
        cpu->r[4] = cpu->r[14];
    }
L_0008bb30:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0008bb34:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0008bb38:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[14]);
    }
L_0008bb3c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_0008bb40:;
    {
        cpu->r[3] = 0x00000240u;
    }
L_0008bb44:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_0008bb48:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_0008bb4c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0008bb50:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_0008bb54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008bb58:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008bb5c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x64u);
    }
L_0008bb60:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x6cu);
    }
L_0008bb64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0008bb68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1a4u);
    }
L_0008bb6c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0008bb70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008c76c;
        }
    }
L_0008bb74:;
    {
        cpu->r[3] = rd32(0x0008bb7cu + + 0xc64u);
    }
L_0008bb78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008bb7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008bb84u, cpu->r[3], 0, 0);
    }
L_0008bb80:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_0008bb84:;
    {
        cpu->r[14] = 0x0008bb88u; fn_00087bd4(cpu);
    }
L_0008bb88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008bb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c258;
        }
    }
L_0008bb90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008bb94:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x28u);
    }
L_0008bb98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008bb9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c4b8;
        }
    }
L_0008bba0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008bba4:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x24u);
    }
L_0008bba8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008bbac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008bbb0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008bbb4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008bbb8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x50u, cpu->r[7]);
        }
    }
L_0008bbbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
        }
    }
L_0008bbc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
        }
    }
L_0008bbc4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0008bbc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[12] + + 0x58u);
        }
    }
L_0008bbcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
        }
    }
L_0008bbd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
        }
    }
L_0008bbd4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008bbd8:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008bbdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[2] + + 0x224u);
        }
    }
L_0008bbe0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0008bbe4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008bbe8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_0008bbec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0008bbf0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
        }
    }
L_0008bbf4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008bbf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008bbfc:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x6cu);
    }
L_0008bc00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0008bc04:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008bc08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0008bc0c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008bc10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008bc14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 5u, &shc), 0, 0);
    }
L_0008bc18:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_0008bc1c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[1] = v;
    }
L_0008bc20:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008bc24:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x20u);
    }
L_0008bc28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_0008bc2c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008bc30:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008bc34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0008bc38:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_0008bc3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008bc40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0008bc44:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0008bc48:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008bc4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008bd04;
        }
    }
L_0008bc50:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008bc54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008bc58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008bd04;
        }
    }
L_0008bc5c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0008bc60:;
    {
        cpu->r[2] = 0x00000024u;
    }
L_0008bc64:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0008bc68:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0008bc6c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[10] = v;
    }
L_0008bc70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_0008bc74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0008bc78:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x30u);
    }
L_0008bc7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008bc80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bcf4;
        }
    }
L_0008bc84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x28u);
    }
L_0008bc88:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_0008bc8c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008bc90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bcf4;
        }
    }
L_0008bc94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_0008bc98:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0008bc9c:;
    {
        cpu->r[14] = 0x0008bca0u; fn_00092090(cpu);
    }
L_0008bca0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x20u);
    }
L_0008bca4:;
    {
        cpu->r[14] = 0x0008bca8u; fn_00092090(cpu);
    }
L_0008bca8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008bcac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008bcb0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008bcb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008bcb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008bcbc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0008bcc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008bcf0;
        }
    }
L_0008bcc4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008bcc8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0008bccc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008bcd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0008bcd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_0008bcd8:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[14]);
    }
L_0008bcdc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008bce0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008bce4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0008bce8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0008bcec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008bcc4;
        }
    }
L_0008bcf0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008bcf4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008bcf8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_0008bcfc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008bd00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008bc70;
        }
    }
L_0008bd04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008bd08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008bd0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_0008bd10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c584;
        }
    }
L_0008bd14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008bd18:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0008bd1c:;
    {
        cpu->r[14] = 0x0008bd20u; fn_0007da5c(cpu);
    }
L_0008bd20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008bd24:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x5cu);
    }
L_0008bd28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008bd2c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0008bd30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c5e0;
        }
    }
L_0008bd34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008bd38:;
    {
        cpu->r[3] = 0x00001434u;
    }
L_0008bd3c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008bd40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008bd44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c6fc;
        }
    }
L_0008bd48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008bd4c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008bd50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008bd54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008bd58:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0008bd5c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0008bd60:;
    {
        cpu->r[14] = 0x0008bd64u; fn_0007daec(cpu);
    }
L_0008bd64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bd68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008bd6c:;
    {
        cpu->r[14] = 0x0008bd70u; fn_0007db94(cpu);
    }
L_0008bd70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008bd74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c5f8;
        }
    }
L_0008bd78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008bd7c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_0008bd80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008bd84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008bfe4;
        }
    }
L_0008bd88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008bd8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008bd90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008bd94:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008bd98:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_0008bd9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0008bda0:;
    {
        cpu->r[2] = 0x00000434u;
    }
L_0008bda4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0008bda8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_0008bdac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_0008bdb0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0008bdb4:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_0008bdb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0008bdbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008bdc0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x24u);
    }
L_0008bdc4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x1cu);
    }
L_0008bdc8:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x30u);
    }
L_0008bdcc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008bdd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bfc4;
        }
    }
L_0008bdd4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x28u);
    }
L_0008bdd8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x20u);
    }
L_0008bddc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008bde0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bfc4;
        }
    }
L_0008bde4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008bde8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_0008bdec:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008bdf0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008bdf4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0008bdf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008bdfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008bfc4;
        }
    }
L_0008be00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008be04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0008be08:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0008be0c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008be10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008be14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0008be18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0008be1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008be20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c2bc;
        }
    }
L_0008be24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008be28:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0008be2c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0008be30:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008be34:;
    {
        cpu->r[14] = 0x0008be38u; fn_00092308(cpu);
    }
L_0008be38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008be3c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
        }
    }
L_0008be40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bf98;
        }
    }
L_0008be44:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x28u);
    }
L_0008be48:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008be4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008be9c;
        }
    }
L_0008be50:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0008be54:;
    {
        cpu->r[4] = rd32(cpu->r[13]);
    }
L_0008be58:;
    {
        goto L_0008be60;
    }
L_0008be5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008be60:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0008be64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008be68:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x20u);
    }
L_0008be6c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0008be70:;
    {
        cpu->r[14] = 0x0008be74u; fn_00092308(cpu);
    }
L_0008be74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008be78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008be5c;
        }
    }
L_0008be7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008be80:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_0008be84:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_0008be88:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x34u);
    }
L_0008be8c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[7]);
    }
L_0008be90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008be94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0008be98:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0008be9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bea0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008bea4:;
    {
        cpu->r[14] = 0x0008bea8u; fn_0007db94(cpu);
    }
L_0008bea8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008beac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0008beb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c42c;
        }
    }
L_0008beb4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_0008beb8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008bebc:;
    {
        goto L_0008bec4;
    }
L_0008bec0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008bec4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bec8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008becc:;
    {
        cpu->r[14] = 0x0008bed0u; fn_0007db94(cpu);
    }
L_0008bed0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008bed4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008bec0;
        }
    }
L_0008bed8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_0008bedc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008bee0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0008bee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0008bee8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0008beec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c3ec;
        }
    }
L_0008bef0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0008bef4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008bef8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[12] = v;
    }
L_0008befc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[7] = v;
    }
L_0008bf00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_0008bf04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_0008bf08:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008bf0c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0008bf10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0008bf14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_0008bf18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_0008bf1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c53c;
        }
    }
L_0008bf20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008bf24:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008bf28:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_0008bf2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[9] = v;
    }
L_0008bf30:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_0008bf34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_0008bf38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0008bf3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0008bf40:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[11] + + 0x14u, cpu->r[2]);
        }
    }
L_0008bf44:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0x14u, cpu->r[5]);
        }
    }
L_0008bf48:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x14u);
    }
L_0008bf4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008bf50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008bf54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008bf58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008bf70;
        }
    }
L_0008bf5c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008bf60:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0008bf64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008bf68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008bf6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008bf60;
        }
    }
L_0008bf70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0008bf74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bf78:;
    {
        cpu->r[14] = 0x0008bf7cu; fn_0007db94(cpu);
    }
L_0008bf7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008bf80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008bf84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008bf88:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0008bf8c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008bf90:;
    {
        wr32(cpu->r[11] + + 0x18u, cpu->r[0]);
    }
L_0008bf94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008c274;
        }
    }
L_0008bf98:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008bf9c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008bfa0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[12] = v1;
    }
L_0008bfa4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008bfa8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008bfac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_0008bfb0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0008bfb4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0008bfb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008be0c;
        }
    }
L_0008bfbc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008bfc0:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x18u);
    }
L_0008bfc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008bfc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008bfcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008bfd0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0008bfd4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0008bfd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_0008bfdc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0008bfe0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008bdbc;
        }
    }
L_0008bfe4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bfe8:;
    {
        cpu->r[14] = 0x0008bfecu; fn_0007dcd0(cpu);
    }
L_0008bfec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008bff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c738;
        }
    }
L_0008bff4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008bff8:;
    {
        cpu->r[14] = 0x0008bffcu; fn_0007dab8(cpu);
    }
L_0008bffc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c000:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008c004:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c008:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0008c00c:;
    {
        cpu->r[14] = 0x0008c010u; fn_0007da88(cpu);
    }
L_0008c010:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c014:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0008c018:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0008c01c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c058;
        }
    }
L_0008c020:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c024:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[5]);
    }
L_0008c028:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0008c02c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c040;
        }
    }
L_0008c030:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
    }
L_0008c034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000092u, 1, 1);
    }
L_0008c038:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
        }
    }
L_0008c03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c058;
        }
    }
L_0008c040:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008c044:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008c048:;
    {
        cpu->r[2] = rd32(0x0008c050u + + 0x794u);
    }
L_0008c04c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0008c050:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008c058u, cpu->r[2], 0, 0);
    }
L_0008c054:;
    {
        cpu->r[14] = 0x0008c058u; fn_00080304(cpu);
    }
L_0008c058:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008c05c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c060:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0008c064:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008c068:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
        }
    }
L_0008c06c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[14] + + 0x4u, cpu->r[3]);
        }
    }
L_0008c070:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x5cu);
    }
L_0008c074:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008c078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c71c;
        }
    }
L_0008c07c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c080:;
    {
        cpu->r[3] = 0x00001434u;
    }
L_0008c084:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0008c088:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008c08c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
        }
    }
L_0008c090:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000143cu;
        }
    }
L_0008c094:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000142cu;
        }
    }
L_0008c098:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0008c09c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
        }
    }
L_0008c0a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_0008c0a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[4]);
        }
    }
L_0008c0a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
        }
    }
L_0008c0ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
        }
    }
L_0008c0b0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
        }
    }
L_0008c0b4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008c0b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c0bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c0c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c180;
        }
    }
L_0008c0c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008c0c8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0008c0cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c0d0:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0008c0d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008c0d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_0008c0dc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0008c0e0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0008c0e4:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0008c0e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008c0ec:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0008c0f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0008c0f4:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x24u);
    }
L_0008c0f8:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x1cu);
    }
L_0008c0fc:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x30u);
    }
L_0008c100:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008c104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c16c;
        }
    }
L_0008c108:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x28u);
    }
L_0008c10c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x20u);
    }
L_0008c110:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008c114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c16c;
        }
    }
L_0008c118:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008c11c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_0008c120:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008c124:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008c128:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[0] = v;
    }
L_0008c12c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008c130:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c16c;
        }
    }
L_0008c134:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008c138:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008c13c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008c140:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0008c144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008c148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c14c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c2cc;
        }
    }
L_0008c150:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[3] = v;
    }
L_0008c154:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008c158:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000002cu, 0, 0);
    }
L_0008c15c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008c160:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008c13c;
        }
    }
L_0008c164:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008c168:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008c16c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0008c170:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000020u, 0, 0);
    }
L_0008c174:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0008c178:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008c0f4;
        }
    }
L_0008c17c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_0008c180:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008c184:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c188:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008c18c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008c190:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c3c0;
        }
    }
L_0008c194:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c198:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008c19c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008c1a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c1a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0008c1a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0008c1ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0008c1b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x24u);
    }
L_0008c1b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0008c1b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0008c1bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008c1c0:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_0008c1c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008c1c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c22c;
        }
    }
L_0008c1cc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x58u);
    }
L_0008c1d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008c1d4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008c1d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0008c1dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008c1e0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x224u);
    }
L_0008c1e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0008c1e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0008c1ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c4d0;
        }
    }
L_0008c1f0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0xcu);
    }
L_0008c1f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008c1f8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
    }
L_0008c1fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0008c200:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0008c204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0008c208:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008c20c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008c210:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008c214:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0008c218:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008c21c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0008c220:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008c224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008c228:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
    }
L_0008c22c:;
    {
        cpu->r[3] = 0x0000fc19u;
    }
L_0008c230:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0008c234:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0008c238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c258;
        }
    }
L_0008c23c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c240:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c244:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[4], 0, 0);
    }
L_0008c248:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_0008c24c:;
    {
        cpu->r[14] = 0x0008c250u; fn_00087bd4(cpu);
    }
L_0008c250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008c254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008bb90;
        }
    }
L_0008c258:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0008c25c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c260:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008c264:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_0008c268:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000e8u, 0, 0);
    }
L_0008c26c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008c270:;
    {
        goto L_0008bb54;
    }
L_0008c274:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c278:;
    {
        cpu->r[12] = 0x000015d0u;
    }
L_0008c27c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008c280:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008c284:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0008c288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008c28c:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0008c290:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001cu, 0, 0);
    }
L_0008c294:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008c298:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008c29c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008c2a0:;
    {
        cpu->r[14] = 0x0008c2a4u; fn_0008b988(cpu);
    }
L_0008c2a4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c2a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_0008c2ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000001cu, 0, 0);
    }
L_0008c2b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008c2b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008c2b8:;
    {
        goto L_0008bf34;
    }
L_0008c2bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c2c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008c2c4:;
    {
        cpu->r[14] = 0x0008c2c8u; fn_0007db94(cpu);
    }
L_0008c2c8:;
    {
        goto L_0008be38;
    }
L_0008c2cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0008c2d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c2d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c488;
        }
    }
L_0008c2d8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c2dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008c2e0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0008c2e4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_0008c2e8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c2ec:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008c2f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_0008c2f4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0008c2f8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0008c3b8;
        }
    }
L_0008c2fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008c300:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008c304:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008c308:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0008c30c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0008c310:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0008c314:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0008c318:;
    {
        cpu->r[14] = 0x0008c320u;
    }
L_0008c31c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008c320u)) return;
    }
L_0008c320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008c324:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0008c328:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c32c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0008c330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0008c334:;
    {
        cpu->r[14] = 0x0008c338u; imp_memcpy(cpu); /* memcpy */
    }
L_0008c338:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008c33c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c340:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[4]);
        }
    }
L_0008c344:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_0008c348:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
        }
    }
L_0008c34c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c350:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008c354:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_0008c358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008c35c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0008c360:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008c364:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008c368:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008c36c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c370:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0008c374:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_0008c378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0008c37c:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[2]);
    }
L_0008c380:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008c384:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001cu, 0, 0);
    }
L_0008c388:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008c38c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_0008c390:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c394:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c3e0;
        }
    }
L_0008c398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0008c39c:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008c3a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008c3a4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_0008c3a8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008c3ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_0008c3b0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0008c3b4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0008c2fc;
        }
    }
L_0008c3b8:;
    {
        cpu->r[4] = 0x0000fc19u;
    }
L_0008c3bc:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0xffffu << 16);
    }
L_0008c3c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c3c4:;
    {
        cpu->r[1] = 0x00000030u;
    }
L_0008c3c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008c3cc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_0008c3d0:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x18u);
    }
L_0008c3d4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0008c3d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x24u);
    }
L_0008c3dc:;
    {
        goto L_0008c1bc;
    }
L_0008c3e0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008c3e4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008c3e8:;
    {
        goto L_0008c150;
    }
L_0008c3ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c3f0:;
    {
        cpu->r[12] = 0x000015d0u;
    }
L_0008c3f4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008c3f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008c3fc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0008c400:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008c404:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0008c408:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0008c40c:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0008c410:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008c414:;
    {
        cpu->r[14] = 0x0008c418u; fn_0008b988(cpu);
    }
L_0008c418:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c41c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008c420:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008c424:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x8u);
    }
L_0008c428:;
    {
        goto L_0008bf20;
    }
L_0008c42c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c430:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008c434:;
    {
        cpu->r[14] = 0x0008c438u; fn_0007db94(cpu);
    }
L_0008c438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008c43c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0008c440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008beb4;
        }
    }
L_0008c444:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c448:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0008c44c:;
    {
        cpu->r[14] = 0x0008c450u; fn_0007db94(cpu);
    }
L_0008c450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0008c454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
        }
    }
L_0008c458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008beb4;
        }
    }
L_0008c45c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c460:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0008c464:;
    {
        cpu->r[14] = 0x0008c468u; fn_0007db94(cpu);
    }
L_0008c468:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001fu, 1, 1);
    }
L_0008c46c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
        }
    }
L_0008c470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008beb4;
        }
    }
L_0008c474:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c478:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0008c47c:;
    {
        cpu->r[14] = 0x0008c480u; fn_0007db94(cpu);
    }
L_0008c480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000025u, 0, 0);
    }
L_0008c484:;
    {
        goto L_0008beb4;
    }
L_0008c488:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008c48c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c490:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0008c494:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0008c498:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0008c49c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008c4a0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008c4a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008c4a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0008c4ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001cu, 0, 0);
        }
    }
L_0008c4b0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_0008c4b4:;
    {
        goto L_0008c2e8;
    }
L_0008c4b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c4bc:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x24u);
    }
L_0008c4c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008c4c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0008c4c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c3c0;
        }
    }
L_0008c4cc:;
    {
        goto L_0008bba8;
    }
L_0008c4d0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008c4d4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008c4d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_0008c4dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0008c4e0:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x23cu);
    }
L_0008c4e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_0008c4e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0008c4ec:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x8u);
    }
L_0008c4f0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008c4f4:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[6], 1, 1);
    }
L_0008c4f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008c6d0;
        }
    }
L_0008c4fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008c500:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008c504:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x23cu);
    }
L_0008c508:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008c50c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 0);
    }
L_0008c510:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[1]);
    }
L_0008c514:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0008c518:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008c51c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_0008c520:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[12]; cpu->r[1] = v;
    }
L_0008c524:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_0008c528:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_0008c52c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0008c530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008c534:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
    }
L_0008c538:;
    {
        goto L_0008c1fc;
    }
L_0008c53c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c540:;
    {
        cpu->r[12] = 0x000015d0u;
    }
L_0008c544:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008c548:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0008c54c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0008c550:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008c554:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0008c558:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0008c55c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 5u, &shc); cpu->r[7] = v;
    }
L_0008c560:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008c564:;
    {
        cpu->r[14] = 0x0008c568u; fn_0008b988(cpu);
    }
L_0008c568:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c56c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0008c570:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_0008c574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0008c578:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008c57c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008c580:;
    {
        goto L_0008bf20;
    }
L_0008c584:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c588:;
    {
        cpu->r[3] = rd8(cpu->r[2]);
    }
L_0008c58c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0008c590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c5ac;
        }
    }
L_0008c594:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x1u);
    }
L_0008c598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000091u, 1, 1);
    }
L_0008c59c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008c5a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000006u, 0, 0);
        }
    }
L_0008c5a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
        }
    }
L_0008c5a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008bd1c;
        }
    }
L_0008c5ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008c5b0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0008c5b4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c5b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008c5bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0008c5c0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[6]);
    }
L_0008c5c4:;
    {
        cpu->r[14] = 0x0008c5c8u; fn_00080304(cpu);
    }
L_0008c5c8:;
    {
        cpu->r[14] = 0x0008c5ccu; fn_0007da5c(cpu);
    }
L_0008c5cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c5d0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x5cu);
    }
L_0008c5d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008c5d8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0008c5dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008bd34;
        }
    }
L_0008c5e0:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x54u);
    }
L_0008c5e4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x68u);
    }
L_0008c5e8:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_0008c5ec:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_0008c5f0:;
    {
        cpu->r[14] = 0x0008c5f4u; fn_0007daec(cpu);
    }
L_0008c5f4:;
    {
        goto L_0008bd64;
    }
L_0008c5f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c5fc:;
    {
        cpu->r[14] = 0x0008c600u; fn_0007dcd0(cpu);
    }
L_0008c600:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c604:;
    {
        cpu->r[14] = 0x0008c608u; fn_0007dab8(cpu);
    }
L_0008c608:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c60c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008c610:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c614:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], cpu->r[4], 0, 0);
    }
L_0008c618:;
    {
        cpu->r[14] = 0x0008c61cu; fn_0007da88(cpu);
    }
L_0008c61c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c620:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008c624:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0008c628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c658;
        }
    }
L_0008c62c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c630:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[4]);
    }
L_0008c634:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0008c638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c64c;
        }
    }
L_0008c63c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_0008c640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000092u, 1, 1);
    }
L_0008c644:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_0008c648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c658;
        }
    }
L_0008c64c:;
    {
        cpu->r[0] = rd32(0x0008c654u + + 0x194u);
    }
L_0008c650:;
    {
        cpu->r[0] = add_flags(cpu, 0x0008c658u, cpu->r[0], 0, 0);
    }
L_0008c654:;
    {
        cpu->r[14] = 0x0008c658u; imp_puts(cpu); /* puts */
    }
L_0008c658:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008c65c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c660:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008c664:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_0008c668:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008c66c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
        }
    }
L_0008c670:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
        }
    }
L_0008c674:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x5cu);
    }
L_0008c678:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008c67c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c744;
        }
    }
L_0008c680:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c684:;
    {
        cpu->r[3] = 0x00001434u;
    }
L_0008c688:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008c68c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008c690:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008c694:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 0);
        }
    }
L_0008c698:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c18c;
        }
    }
L_0008c69c:;
    {
        cpu->r[3] = 0x0000143cu;
    }
L_0008c6a0:;
    {
        cpu->r[2] = 0x0000142cu;
    }
L_0008c6a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008c6a8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0008c6ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008c6b0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008c6b4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c6b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0008c6bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0008c6c0:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[5]);
    }
L_0008c6c4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_0008c6c8:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_0008c6cc:;
    {
        goto L_0008c18c;
    }
L_0008c6d0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008c6d4:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x10u);
    }
L_0008c6d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008c6dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c6f0;
        }
    }
L_0008c6e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0008c6e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008c6e8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
        }
    }
L_0008c6ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c1fc;
        }
    }
L_0008c6f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0008c6f4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
    }
L_0008c6f8:;
    {
        goto L_0008c1fc;
    }
L_0008c6fc:;
    {
        cpu->r[3] = 0x0000142cu;
    }
L_0008c700:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008c704:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0008c708:;
    {
        cpu->r[3] = 0x0000143cu;
    }
L_0008c70c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008c710:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c714:;
    {
        cpu->r[14] = 0x0008c718u; fn_0007daec(cpu);
    }
L_0008c718:;
    {
        goto L_0008bd64;
    }
L_0008c71c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x54u);
    }
L_0008c720:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x68u);
    }
L_0008c724:;
    {
        wr32(cpu->r[1] + + 0x54u, cpu->r[4]);
    }
L_0008c728:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008c72c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_0008c730:;
    {
        wr32(cpu->r[1] + + 0x68u, cpu->r[3]);
    }
L_0008c734:;
    {
        goto L_0008c0b4;
    }
L_0008c738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008c73c:;
    {
        cpu->r[14] = 0x0008c740u; fn_0007da88(cpu);
    }
L_0008c740:;
    {
        goto L_0008c3b8;
    }
L_0008c744:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x54u);
    }
L_0008c748:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x68u);
    }
L_0008c74c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008c750:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008c758:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0008c75c:;
    {
        wr32(cpu->r[12] + + 0x54u, cpu->r[5]);
    }
L_0008c760:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 0);
    }
L_0008c764:;
    {
        wr32(cpu->r[12] + + 0x68u, cpu->r[3]);
    }
L_0008c768:;
    {
        goto L_0008c18c;
    }
L_0008c76c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
    }
L_0008c770:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008c774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c7a4;
        }
    }
L_0008c778:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x58u);
    }
L_0008c77c:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0008c780:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008c784:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008c788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0008c78c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008c790:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008c794:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x23cu);
    }
L_0008c798:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0008c79c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_0008c7a0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0008c7a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008c7a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008c7ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008c7b0:;
    {
        cpu->r[14] = 0x0008c7b4u; fn_00086e20(cpu);
    }
L_0008c7b4:;
    {
        cpu->r[3] = 0x0000fc19u;
    }
L_0008c7b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0008c7bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0008c7c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008c7c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
        }
    }
L_0008c7c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
        }
    }
L_0008c7cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008c7d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0008c7d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008c7d8u)) return;
    }
}

/* sub_0008c7ec @ 0008c7ec (arm) */
void fn_0008c7ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008c7ec:;
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
L_0008c7f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0008c7f4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008c7f8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0008c7fc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008c800:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008c804:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008c808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008c80c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_0008c810:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0008c814:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_0008c818:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x20u);
    }
L_0008c81c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008c820:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_0008c824:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x24u);
    }
L_0008c828:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_0008c82c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_0008c830:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_0008c834:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008c838:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
        }
    }
L_0008c83c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0008c840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008c8ec;
        }
    }
L_0008c844:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c848:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0008c84c:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_0008c850:;
    {
        cpu->r[3] = (~0x0000006eu);
    }
L_0008c854:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[3]);
    }
L_0008c858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000006fu, 0, 0);
    }
L_0008c85c:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[3]);
    }
L_0008c860:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008c864:;
    {
        wr8(cpu->r[1] + + 0x3u, cpu->r[3]);
    }
L_0008c868:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x348u);
    }
L_0008c86c:;
    {
        uint32_t v = cpu->r[3] & ~ 0x7f000000u; cpu->r[3] = v;
    }
L_0008c870:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00ff0000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0008c874:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0008c878:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~shifter(cpu->r[3], 2, 16u, &shc));
        }
    }
L_0008c87c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 16u, &shc));
        }
    }
L_0008c880:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0008c884:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000ffu, 0, 0);
    }
L_0008c888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c88c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0008c890:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c894:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 8u, &shc); cpu->r[3] = v;
    }
L_0008c898:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_0008c89c:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_0008c8a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x348u);
    }
L_0008c8a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0008c8a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c8ac:;
    {
        uint32_t v = cpu->r[2] & ~ 0x7f000000u; cpu->r[2] = v;
    }
L_0008c8b0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008c8b4:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00ff0000u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0008c8b8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0008c8bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000006u, 0, 0);
    }
L_0008c8c0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_0008c8c4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = (~shifter(cpu->r[2], 2, 16u, &shc));
        }
    }
L_0008c8c8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = (~shifter(cpu->r[2], 3, 16u, &shc));
        }
    }
L_0008c8cc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0008c8d0:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0008c8d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c8d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0008c8dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~shifter(cpu->r[3], 2, 24u, &shc));
        }
    }
L_0008c8e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 24u, &shc));
        }
    }
L_0008c8e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0008c8e8:;
    {
        wr8(cpu->r[14] + + 0x5u, cpu->r[3]);
    }
L_0008c8ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c8f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008c8f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008c9ac;
        }
    }
L_0008c8f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c8fc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008c900:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c904:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c9ac;
        }
    }
L_0008c908:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008c90c:;
    {
        cpu->r[9] = 0x00000024u;
    }
L_0008c910:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0008c914:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0008c918:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0008c91c:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0008c920:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[9] = v;
    }
L_0008c924:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x30u);
    }
L_0008c928:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_0008c92c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008c930:;
    {
        cpu->r[14] = 0x0008c934u; fn_00092090(cpu);
    }
L_0008c934:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008c938:;
    {
        cpu->r[14] = 0x0008c93cu; fn_00092090(cpu);
    }
L_0008c93c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008c940:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008c944:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008c948:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008c94c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008c998;
        }
    }
L_0008c950:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0008c954:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008c958:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008c95c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008c960:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008c964:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008c968:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0008c96c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0008c970:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[8]);
    }
L_0008c974:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0008c978:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x34u);
    }
L_0008c97c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008c980:;
    {
        cpu->r[14] = 0x0008c984u; fn_000922d0(cpu);
    }
L_0008c984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008c988:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008c98c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008c990:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008c994:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008c958;
        }
    }
L_0008c998:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008c99c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008c9a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_0008c9a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0008c9a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008c924;
        }
    }
L_0008c9ac:;
    {
        cpu->r[14] = 0x0008c9b0u; fn_0007da5c(cpu);
    }
L_0008c9b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008c9b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008c9b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008c9bc:;
    {
        cpu->r[14] = 0x0008c9c0u; fn_0007dac8(cpu);
    }
L_0008c9c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008c9c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008c9c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008c9cc:;
    {
        cpu->r[14] = 0x0008c9d0u; fn_0007db0c(cpu);
    }
L_0008c9d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008c9d4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008c9d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008c9dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cd8c;
        }
    }
L_0008c9e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008c9e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008c9e8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0008c9ec:;
    {
        cpu->r[3] = 0x00000024u;
    }
L_0008c9f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c9f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[14]; cpu->r[3] = v;
    }
L_0008c9f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008c9fc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_0008ca00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008ca04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0008ca08:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0008ca0c:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_0008ca10:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0008ca14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008ca18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008ca1c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008ca20:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x30u);
    }
L_0008ca24:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_0008ca28:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008ca2c:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008ca30:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[3] = v;
    }
L_0008ca34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ca38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cd6c;
        }
    }
L_0008ca3c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0008ca40:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008ca44:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0008ca48:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ca4c:;
    {
        goto L_0008ca60;
    }
L_0008ca50:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[3] = v;
    }
L_0008ca54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008ca58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008ca5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cab0;
        }
    }
L_0008ca60:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008ca64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0008ca68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0008ca6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x24u);
    }
L_0008ca70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0008ca74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008ca78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ca50;
        }
    }
L_0008ca7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0008ca80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ca84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ca50;
        }
    }
L_0008ca88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008ca8c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x1cu);
    }
L_0008ca90:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0008ca94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008ca98:;
    {
        cpu->r[14] = 0x0008ca9cu; fn_000922d0(cpu);
    }
L_0008ca9c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008caa0:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008caa4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[3] = v;
    }
L_0008caa8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008caac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ca60;
        }
    }
L_0008cab0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008cab4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0008cab8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[14] + + 0x18u);
        }
    }
L_0008cabc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cd6c;
        }
    }
L_0008cac0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008cac4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0008cac8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0008cacc:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008cad0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008cad4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008cad8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0008cadc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008cae0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008cae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008cae8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_0008caec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0008caf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cfd4;
        }
    }
L_0008caf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008caf8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x1cu);
    }
L_0008cafc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008cb00:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008cb04:;
    {
        cpu->r[14] = 0x0008cb08u; fn_000923d0(cpu);
    }
L_0008cb08:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008cb0c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_0008cb10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008cb14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cd38;
        }
    }
L_0008cb18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008cb1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008cb20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cff4;
        }
    }
L_0008cb24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0008cb28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d020;
        }
    }
L_0008cb2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0008cb30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d07c;
        }
    }
L_0008cb34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_0008cb38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d03c;
        }
    }
L_0008cb3c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000024u, 1, 1);
    }
L_0008cb40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d05c;
        }
    }
L_0008cb44:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000a4u, 1, 1);
    }
L_0008cb48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d094;
        }
    }
L_0008cb4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008cb50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0008cb54:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0008cb58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0008cb5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_0008cb60:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = cpu->r[7];
        }
    }
L_0008cb64:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008cc50;
        }
    }
L_0008cb68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0008cb6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008cb70:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008cb74:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0008cb78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0008cb7c:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0008cb80:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0008cb84:;
    {
        goto L_0008cba0;
    }
L_0008cb88:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_0008cb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cbb8;
        }
    }
L_0008cb90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008cb94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_0008cb98:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0008cb9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cc28;
        }
    }
L_0008cba0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008cba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008cba8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008cbac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008cbb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0008cbb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cb88;
        }
    }
L_0008cbb8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0008cbbc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008cbc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cbd8;
        }
    }
L_0008cbc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008cbc8:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_0008cbcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008cbd0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0008cbd4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008cbc8;
        }
    }
L_0008cbd8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0008cbdc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008cbe0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008cbe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cbfc;
        }
    }
L_0008cbe8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008cbec:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_0008cbf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008cbf4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0008cbf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cbec;
        }
    }
L_0008cbfc:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[7], 1, 0);
    }
L_0008cc00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008cc04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0008cc08:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008cc0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008cc10:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0008cc14:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0008cc18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[2];
        }
    }
L_0008cc1c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0008cc20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_0008cc24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cba0;
        }
    }
L_0008cc28:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0008cc2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cc50;
        }
    }
L_0008cc30:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008cc34:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008cc38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cc3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_0008cc40:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008cc44:;
    {
        cpu->r[14] = 0x0008cc48u; fn_0007db0c(cpu);
    }
L_0008cc48:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_0008cc4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cc34;
        }
    }
L_0008cc50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008cc54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008cc58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cc5c:;
    {
        cpu->r[14] = 0x0008cc60u; fn_0007db0c(cpu);
    }
L_0008cc60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008cc64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008cc68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0008cc6c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0008cc70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008cc74:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_0008cc78:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0008cc7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0008cc80:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008cc84:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008cd38;
        }
    }
L_0008cc88:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0008cc8c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0008cc90:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008cc94:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[10] = v;
    }
L_0008cc98:;
    {
        goto L_0008ccbc;
    }
L_0008cc9c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008cca0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_0008cca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ccdc;
        }
    }
L_0008cca8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008ccac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0008ccb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_0008ccb4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_0008ccb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cd34;
        }
    }
L_0008ccbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008ccc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008ccc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0008ccc8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008cccc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008ccd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ccd4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0008ccd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cc9c;
        }
    }
L_0008ccdc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0008cce0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008cce4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008cce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cd00;
        }
    }
L_0008ccec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008ccf0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_0008ccf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008ccf8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0008ccfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ccf0;
        }
    }
L_0008cd00:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008cd04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008cd08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cd0c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008cd10:;
    {
        cpu->r[14] = 0x0008cd14u; fn_0007db0c(cpu);
    }
L_0008cd14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008cd18:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_0008cd1c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008cd20:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0008cd24:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_0008cd28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0008cd2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_0008cd30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ccbc;
        }
    }
L_0008cd34:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0008cd38:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008cd3c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008cd40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008cd44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008cd48:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008cd4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008cd50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_0008cd54:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0008cd58:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0008cd5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0008cd60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008cacc;
        }
    }
L_0008cd64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008cd68:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008cd6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008cd70:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008cd74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008cd78:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0008cd7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008cd80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_0008cd84:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_0008cd88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ca18;
        }
    }
L_0008cd8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cd90:;
    {
        cpu->r[14] = 0x0008cd94u; fn_0007dc24(cpu);
    }
L_0008cd94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008cd98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d158;
        }
    }
L_0008cd9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cda0:;
    {
        cpu->r[14] = 0x0008cda4u; fn_0007dab8(cpu);
    }
L_0008cda4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008cda8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008cdac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cdb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[4], 0, 0);
    }
L_0008cdb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008cdb8:;
    {
        cpu->r[14] = 0x0008cdbcu; fn_0007da88(cpu);
    }
L_0008cdbc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008cdc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008cdc4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008cdc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0008cdcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cde8;
        }
    }
L_0008cdd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008cdd4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0008cdd8:;
    {
        wr8(cpu->r[1] + cpu->r[4], cpu->r[3]);
    }
L_0008cddc:;
    {
        cpu->r[3] = (~0x0000006du);
    }
L_0008cde0:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[3]);
    }
L_0008cde4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0008cde8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008cdec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008cdf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ce2c;
        }
    }
L_0008cdf4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_0008cdf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008cdfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ce2c;
        }
    }
L_0008ce00:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008ce04:;
    {
        cpu->r[0] = 0x00000240u;
    }
L_0008ce08:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0008ce0c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x58u);
    }
L_0008ce10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_0008ce14:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008ce18:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4] + cpu->r[1]; cpu->r[1] = v;
    }
L_0008ce1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000228u, 1, 0);
    }
L_0008ce20:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x224u);
    }
L_0008ce24:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_0008ce28:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0008ce2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008ce30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008ce34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008ce38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cf20;
        }
    }
L_0008ce3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008ce40:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0008ce44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008ce48:;
    {
        cpu->r[7] = 0x00000018u;
    }
L_0008ce4c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ce50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008ce54:;
    {
        cpu->r[3] = 0x00000024u;
    }
L_0008ce58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ce5c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_0008ce60:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008ce64:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[7] = v;
    }
L_0008ce68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0008ce6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008ce70:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008ce74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008ce78:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0008ce7c:;
    {
        cpu->r[3] = 0x00000240u;
    }
L_0008ce80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0008ce84:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_0008ce88:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0008ce8c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008ce90:;
    {
        cpu->r[10] = rd32(cpu->r[11] + + 0x30u);
    }
L_0008ce94:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_0008ce98:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008ce9c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008cea0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[0] = v;
    }
L_0008cea4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008cea8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cf04;
        }
    }
L_0008ceac:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008ceb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d0b8;
        }
    }
L_0008ceb4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008ceb8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0008cebc:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0008cec0:;
    {
        cpu->r[11] = cpu->r[12];
    }
L_0008cec4:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x18u);
    }
L_0008cec8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_0008cecc:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008ced0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_0008ced4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0008ced8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008cedc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cf30;
        }
    }
L_0008cee0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_0008cee4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008cee8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0008ceec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0008cef0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008cec4;
        }
    }
L_0008cef4:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_0008cef8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008cefc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008cf00:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008cf04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008cf08:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000020u, 0, 0);
    }
L_0008cf0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008cf10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008cf14:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008cf18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ce8c;
        }
    }
L_0008cf1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008cf20:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008cf24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_0008cf28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0008cf2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008cf30u)) return;
    }
L_0008cf30:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0008cf34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008cf38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008cf3c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0008cf40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0008cf44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008cf48:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0008d14c;
        }
    }
L_0008cf4c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008cf50:;
    {
        cpu->r[14] = 0x0008cf54u; imp_memcpy(cpu); /* memcpy */
    }
L_0008cf54:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x24u);
    }
L_0008cf58:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0008cf5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008cf60:;
    {
        wr32(cpu->r[8] + + 0x24u, cpu->r[3]);
    }
L_0008cf64:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0xcu);
    }
L_0008cf68:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0008cf6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008cf70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008cf74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008cf78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0008cf7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008cfc8;
        }
    }
L_0008cf80:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x58u);
    }
L_0008cf84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008cf88:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x8u);
    }
L_0008cf8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008cf90:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[9] + + 0x8u);
    }
L_0008cf94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0008cf98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x224u);
    }
L_0008cf9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0008cfa0:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[3] + + 0x10u);
    }
L_0008cfa4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_0008cfa8:;
    {
        *(uint64_t*)G(cpu->r[3] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008cfac:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[11]);
    }
L_0008cfb0:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,6));
    }
L_0008cfb4:;
    {
        vfp_sync_flags(cpu);
    }
L_0008cfb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
        }
    }
L_0008cfbc:;
    {
        if (cond_test(cpu, 13)) {
        *(uint64_t*)G(cpu->r[11]) = *(uint64_t*)vfp_d(cpu, 7);
        }
    }
L_0008cfc0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
        }
    }
L_0008cfc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008cee0;
        }
    }
L_0008cfc8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008cfcc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008cfd0:;
    {
        goto L_0008cee0;
    }
L_0008cfd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008cfd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008cfdc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008cfe0:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0008cfe4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008cfe8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0008cfec:;
    {
        cpu->r[14] = 0x0008cff0u; fn_0007db0c(cpu);
    }
L_0008cff0:;
    {
        goto L_0008cb08;
    }
L_0008cff4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0008cff8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x20u);
    }
L_0008cffc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_0008d000:;
    {
        cpu->r[3] = 0x000003e7u;
    }
L_0008d004:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008d008:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d00c:;
    {
        cpu->r[14] = 0x0008d010u; fn_000923d0(cpu);
    }
L_0008d010:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d014:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_0008d018:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0008d01c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008cb2c;
        }
    }
L_0008d020:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008d024:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d028:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008d02c:;
    {
        cpu->r[14] = 0x0008d030u; fn_0007db0c(cpu);
    }
L_0008d030:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d034:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0008d038:;
    {
        goto L_0008cb4c;
    }
L_0008d03c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 0);
    }
L_0008d040:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d044:;
    {
        uint32_t v = cpu->r[1] | 0x0000000cu; cpu->r[1] = v;
    }
L_0008d048:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0008d04c:;
    {
        cpu->r[14] = 0x0008d050u; fn_0007db0c(cpu);
    }
L_0008d050:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d054:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_0008d058:;
    {
        goto L_0008cb4c;
    }
L_0008d05c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 0);
    }
L_0008d060:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_0008d064:;
    {
        uint32_t v = cpu->r[1] | 0x000001e0u; cpu->r[1] = v;
    }
L_0008d068:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d06c:;
    {
        cpu->r[14] = 0x0008d070u; fn_0007db0c(cpu);
    }
L_0008d070:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d074:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_0008d078:;
    {
        goto L_0008cb4c;
    }
L_0008d07c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008d080:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d084:;
    {
        cpu->r[14] = 0x0008d088u; fn_0007db0c(cpu);
    }
L_0008d088:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d08c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_0008d090:;
    {
        goto L_0008cb4c;
    }
L_0008d094:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000025u, 1, 0);
    }
L_0008d098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d09c:;
    {
        uint32_t v = cpu->r[1] | 0x0000ff00u; cpu->r[1] = v;
    }
L_0008d0a0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0008d0a4:;
    {
        uint32_t v = cpu->r[1] | 0x00000080u; cpu->r[1] = v;
    }
L_0008d0a8:;
    {
        cpu->r[14] = 0x0008d0acu; fn_0007db0c(cpu);
    }
L_0008d0ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d0b0:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0008d0b4:;
    {
        goto L_0008cb4c;
    }
L_0008d0b8:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_0008d0bc:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0008d0c0:;
    {
        goto L_0008d0d0;
    }
L_0008d0c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[1] = v;
    }
L_0008d0c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0008d0cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008cefc;
        }
    }
L_0008d0d0:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x18u);
    }
L_0008d0d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008d0d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0008d0dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0008d0e0:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008d0e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_0008d0e8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0008d0ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008d0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d0c4;
        }
    }
L_0008d0f4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0008d0f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008d0fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008d100:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0008d104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0008d108:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008d10c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0008d14c;
        }
    }
L_0008d110:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008d114:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008d118:;
    {
        cpu->r[14] = 0x0008d11cu; imp_memcpy(cpu); /* memcpy */
    }
L_0008d11c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x24u);
    }
L_0008d120:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0008d124:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008d128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008d12c:;
    {
        wr32(cpu->r[8] + + 0x24u, cpu->r[3]);
    }
L_0008d130:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x4u);
    }
L_0008d134:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008d138:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0008d13c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008d140:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0008d144:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008d148:;
    {
        goto L_0008d0c4;
    }
L_0008d14c:;
    {
        cpu->r[0] = 0x0000fc19u;
    }
L_0008d150:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_0008d154:;
    {
        goto L_0008cf28;
    }
L_0008d158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d15c:;
    {
        cpu->r[14] = 0x0008d160u; fn_0007da88(cpu);
    }
L_0008d160:;
    {
        cpu->r[0] = 0x0000fc19u;
    }
L_0008d164:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_0008d168:;
    {
        goto L_0008cf28;
    }
}

/* t2_encode_packets @ 0008d16c (arm) */
void fn_0008d16c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008d16c:;
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
L_0008d170:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0008d174:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_0008d178:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008d17c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0008d180:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0008d184:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0008d188:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0008d18c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008d190:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d194:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0008d198:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008d19c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008d1a0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0008d1a4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0008d1a8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008d1ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0008d1b0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008d1b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0008d1b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0008d1bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008d1c0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0008d1c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d1c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_0008d1cc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x6cu);
    }
L_0008d1d0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008d1d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008d1d8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d1dc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0008d1e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0008d1e4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
        }
    }
L_0008d1e8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0008d1ec:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
        }
    }
L_0008d1f0:;
    {
        cpu->r[14] = 0x0008d1f4u; fn_00086f00(cpu);
    }
L_0008d1f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d1f8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0008d1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d36c;
        }
    }
L_0008d200:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008d204:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d37c;
        }
    }
L_0008d208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008d20c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008d210:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d4f0;
        }
    }
L_0008d214:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008d218:;
    {
        cpu->r[12] = 0x0000fc19u;
    }
L_0008d21c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xffffu << 16);
    }
L_0008d220:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_0008d224:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0008d228:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_0008d22c:;
    {
        cpu->r[6] = cpu->r[14];
    }
L_0008d230:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0008d234:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d238:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008d23c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008d240:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d244:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008d248:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d24c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d250:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0008d254:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0008d258:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008d25c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008d260:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0008d264:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0008d268:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0008d26c:;
    {
        cpu->r[14] = 0x0008d270u; fn_00088acc(cpu);
    }
L_0008d270:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d354;
        }
    }
L_0008d278:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008d27c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008d280:;
    {
        cpu->r[14] = 0x0008d284u; fn_00087bd4(cpu);
    }
L_0008d284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d2f8;
        }
    }
L_0008d28c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008d290:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008d294:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008d27c;
        }
    }
L_0008d298:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x6cu);
    }
L_0008d29c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0008d2a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d2a4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0008d2a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d2ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0008d2b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d2b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[6], 1, 0);
    }
L_0008d2b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0008d2bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0008d2c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008d2c4:;
    {
        cpu->r[14] = 0x0008d2c8u; fn_0008c7ec(cpu);
    }
L_0008d2c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008d2cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0008d2d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0008d2d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_0008d2d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d27c;
        }
    }
L_0008d2dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d2e0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d2e4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d2e8:;
    {
        cpu->r[14] = 0x0008d2ecu; fn_00086e20(cpu);
    }
L_0008d2ec:;
    {
        cpu->r[0] = 0x0000fc19u;
    }
L_0008d2f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_0008d2f4:;
    {
        goto L_0008d374;
    }
L_0008d2f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008d2fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008d300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d30c;
        }
    }
L_0008d304:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0008d308:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008d2dc;
        }
    }
L_0008d30c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008d310:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008d314:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000e8u, 0, 0);
    }
L_0008d318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0008d31c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008d23c;
        }
    }
L_0008d320:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008d324:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008d328:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008d32c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0008d330:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_0008d334:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d234;
        }
    }
L_0008d338:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d33c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d340:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d344:;
    {
        cpu->r[14] = 0x0008d348u; fn_00086e20(cpu);
    }
L_0008d348:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008d34c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_0008d350:;
    {
        goto L_0008d374;
    }
L_0008d354:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008d358:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008d35c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0008d360:;
    {
        cpu->r[2] = rd32(0x0008d368u + + 0x19cu);
    }
L_0008d364:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008d36cu, cpu->r[2], 0, 0);
    }
L_0008d368:;
    {
        cpu->r[14] = 0x0008d36cu; fn_00080304(cpu);
    }
L_0008d36c:;
    {
        cpu->r[0] = 0x0000fc19u;
    }
L_0008d370:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_0008d374:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0008d378:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d37cu)) return;
    }
L_0008d37c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008d380:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0008d384:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008d388:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d38c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d390:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0008d394:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008d398:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0008d39c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008d3a0:;
    {
        cpu->r[4] = 0x000000e8u;
    }
L_0008d3a4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[6]);
    }
L_0008d3a8:;
    {
        cpu->r[8] = 0x0000fc19u;
    }
L_0008d3ac:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0xffffu << 16);
    }
L_0008d3b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008d3b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008d3b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0008d3bc:;
    {
        cpu->r[14] = 0x0008d3c0u; fn_00088acc(cpu);
    }
L_0008d3c0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d3c4:;
    {
        cpu->r[3] = 0x00000240u;
    }
L_0008d3c8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008d3cc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[3] = v;
    }
L_0008d3d0:;
    {
        uint32_t v = cpu->r[4] * cpu->r[10] + cpu->r[14]; cpu->r[4] = v;
    }
L_0008d3d4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0008d3d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008d3dc:;
    {
        cpu->r[14] = 0x0008d3e0u; fn_00087bd4(cpu);
    }
L_0008d3e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d338;
        }
    }
L_0008d3e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0008d3ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008d3f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d3d8;
        }
    }
L_0008d3f4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x6cu);
    }
L_0008d3f8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0008d3fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d400:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0008d404:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008d408:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0008d40c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d410:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[6], 1, 0);
    }
L_0008d414:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0008d418:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0008d41c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008d420:;
    {
        cpu->r[14] = 0x0008d424u; fn_0008c7ec(cpu);
    }
L_0008d424:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0008d428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d2dc;
        }
    }
L_0008d42c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0008d430:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0008d434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d4dc;
        }
    }
L_0008d438:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0xcu);
    }
L_0008d43c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008d440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d4d0;
        }
    }
L_0008d444:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x8u);
    }
L_0008d448:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_0008d44c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d450:;
    {
        cpu->r[14] = rd32(cpu->r[11] + + 0x58u);
    }
L_0008d454:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008d458:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0008d45c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[2] = v;
    }
L_0008d460:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x224u);
    }
L_0008d464:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[14] + + 0xcu);
        }
    }
L_0008d468:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008d46c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_0008d470:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
        }
    }
L_0008d474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d4b0;
        }
    }
L_0008d478:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008d47c:;
    {
        cpu->r[10] = rd8(cpu->r[7] + + 0x10u);
    }
L_0008d480:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x1a8u);
    }
L_0008d484:;
    {
        uint32_t v = cpu->r[10] | cpu->r[14]; cpu->r[14] = v;
        set_nz(cpu, v);
    }
L_0008d488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d498;
        }
    }
L_0008d48c:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008d490:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0008d494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d4ac;
        }
    }
L_0008d498:;
    {
        cpu->r[14] = 0x00000018u;
    }
L_0008d49c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0008d4a0:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12] + cpu->r[3]; cpu->r[12] = v;
    }
L_0008d4a4:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008d4a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0008d4ac:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_0008d4b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008d4b4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0008d4b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008d4bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0008d4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0008d4c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008d4c8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0008d4cc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0008d4d0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
    }
L_0008d4d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008d4d8:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[3]);
    }
L_0008d4dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d4e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x348u);
    }
L_0008d4e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008d4e8:;
    {
        wr32(cpu->r[2] + + 0x348u, cpu->r[3]);
    }
L_0008d4ec:;
    {
        goto L_0008d3d8;
    }
L_0008d4f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008d4f4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0008d4f8:;
    {
        cpu->r[14] = 0x0008d4fcu; fn_00086e20(cpu);
    }
L_0008d4fc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008d500:;
    {
        goto L_0008d348;
    }
}

/* tcd_create @ 0008d508 (arm) */
void fn_0008d508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008d508:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0008d50c:;
    {
        cpu->r[4] = rd32(0x0008d514u + + 0x64u);
    }
L_0008d510:;
    {
        cpu->r[3] = rd32(0x0008d518u + + 0x64u);
    }
L_0008d514:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0008d518:;
    {
        cpu->r[4] = add_flags(cpu, 0x0008d520u, cpu->r[4], 0, 0);
    }
L_0008d51c:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_0008d520:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0008d524:;
    {
        cpu->r[14] = 0x0008d52cu;
    }
L_0008d528:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d52cu)) return;
    }
L_0008d52c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d554;
        }
    }
L_0008d534:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[7]);
    }
L_0008d538:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0008d53c:;
    {
        cpu->r[14] = 0x0008d544u;
    }
L_0008d540:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d544u)) return;
    }
L_0008d544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d548:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0008d54c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0008d550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d55c;
        }
    }
L_0008d554:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d558:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d55cu)) return;
    }
L_0008d55c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d560:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0008d564:;
    {
        cpu->r[3] = rd32(0x0008d56cu + + 0x14u);
    }
L_0008d568:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0008d56c:;
    {
        cpu->r[14] = 0x0008d574u;
    }
L_0008d570:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d574u)) return;
    }
L_0008d574:;
    {
        goto L_0008d554;
    }
}

/* tcd_destroy @ 0008d584 (arm) */
void fn_0008d584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008d584:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008d588:;
    {
        cpu->r[3] = rd32(0x0008d590u + + 0x2cu);
    }
L_0008d58c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008d590:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008d598u, cpu->r[3], 0, 0);
    }
L_0008d594:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d598u)) return;
        }
    }
L_0008d598:;
    {
        cpu->r[2] = rd32(0x0008d5a0u + + 0x20u);
    }
L_0008d59c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008d5a0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008d5a4:;
    {
        cpu->r[14] = 0x0008d5acu;
    }
L_0008d5a8:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d5acu)) return;
    }
L_0008d5ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008d5b0:;
    {
        cpu->r[14] = 0x0008d5b8u;
    }
L_0008d5b4:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d5b8u)) return;
    }
L_0008d5b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d5bcu)) return;
    }
}

/* tcd_malloc_decode @ 0008d5c4 (arm) */
void fn_0008d5c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008d5c4:;
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
L_0008d5c8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0008d5cc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008d5d0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0008d5d4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x44u);
    }
L_0008d5d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0008d5dc:;
    {
        cpu->r[3] = rd32(0x0008d5e4u + + 0x360u);
    }
L_0008d5e0:;
    {
        cpu->r[6] = 0x00000350u;
    }
L_0008d5e4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_0008d5e8:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0008d5ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008d5f4u, cpu->r[3], 0, 0);
    }
L_0008d5f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_0008d5f4:;
    {
        cpu->r[1] = rd32(0x0008d5fcu + + 0x34cu);
    }
L_0008d5f8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0008d5fc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0008d600:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0008d604:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_0008d608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_0008d60c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0008d610:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_0008d614:;
    {
        cpu->r[14] = 0x0008d61cu;
    }
L_0008d618:;
    {
        uint32_t t = rd32(cpu->r[10]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d61cu)) return;
    }
L_0008d61c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0008d620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008d624:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_0008d628:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d678;
        }
    }
L_0008d62c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d630:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008d634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0008d638:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008d63c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008d640:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0008d644:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008d648:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008d64c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0008d650:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8] + cpu->r[1]; cpu->r[8] = v;
    }
L_0008d654:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[2]);
    }
L_0008d658:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008d65c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0008d660:;
    {
        cpu->r[14] = 0x0008d668u;
    }
L_0008d664:;
    {
        uint32_t t = rd32(cpu->r[10]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d668u)) return;
    }
L_0008d668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0008d66c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008d670:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[0]);
    }
L_0008d674:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008d634;
        }
    }
L_0008d678:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008d67c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008d680:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d93c;
        }
    }
L_0008d684:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008d688:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008d68c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008d690:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0008d694:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008d698:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0008d69c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008d6a0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0008d6a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0008d6a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008d6ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d8ac;
        }
    }
L_0008d6b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008d6b4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0008d6b8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d6bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d6c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008d6c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d6c8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 5u, &shc); cpu->r[5] = v;
    }
L_0008d6cc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0008d6d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008d6d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_0008d6d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0008d6dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0008d6e0:;
    {
        goto L_0008d704;
    }
L_0008d6e4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0008d6e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008d6ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0008d6f0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0008d6f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008d6f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0008d6fc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0008d700:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008d8ac;
        }
    }
L_0008d704:;
    {
        cpu->r[5] = rd32(cpu->r[11] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0008d708:;
    {
        cpu->r[3] = 0x00000350u;
    }
L_0008d70c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x44u);
    }
L_0008d710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d714:;
    {
        cpu->r[9] = rd32(cpu->r[11] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0008d718:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0008d71c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[9] = v;
    }
L_0008d720:;
    {
        cpu->r[14] = 0x0008d724u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0008d724:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008d728:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0008d72c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0008d730:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0008d734:;
    {
        cpu->r[14] = 0x0008d738u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008d738:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_0008d73c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x30u);
    }
L_0008d740:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008d744:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008d748:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_0008d74c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0008d750:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0008d754:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0008d758:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0008d75c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_0008d760:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008d764:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d768:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0008d76c:;
    {
        wr32(cpu->r[1] + cpu->r[9], cpu->r[12]);
    }
L_0008d770:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_0008d774:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_0008d778:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0008d77c:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008d780:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0] + cpu->r[1]; cpu->r[1] = v;
    }
L_0008d784:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_0008d788:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
        }
    }
L_0008d78c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[9]);
        }
    }
L_0008d790:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x38u);
    }
L_0008d794:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008d798:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x30u);
    }
L_0008d79c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[1]; cpu->r[1] = v;
    }
L_0008d7a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_0008d7a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_0008d7a8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
        }
    }
L_0008d7ac:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
        }
    }
L_0008d7b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0008d7b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008d7b8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x34u);
    }
L_0008d7bc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[3]; cpu->r[3] = v;
    }
L_0008d7c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0008d7c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008d7c8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
        }
    }
L_0008d7cc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0xcu, cpu->r[1]);
        }
    }
L_0008d7d0:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0008d7d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008d7d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0008d7dc:;
    {
        cpu->r[14] = 0x0008d7e0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008d7e0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0008d7e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008d7e8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0008d7ec:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_0008d7f0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008d7f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008d7f8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008d7fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008d800:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008d804:;
    {
        cpu->r[14] = 0x0008d808u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008d808:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0008d80c:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[0]);
    }
L_0008d810:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0008d814:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008d818:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008d81c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0008d820:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008d824:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008d828:;
    {
        cpu->r[14] = 0x0008d82cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008d82c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0008d830:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[0]);
    }
L_0008d834:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008d838:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0008d83c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0008d840:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0008d844:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008d848:;
    {
        cpu->r[14] = 0x0008d84cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008d84c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008d850:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0008d854:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[0]);
    }
L_0008d858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008d6e4;
        }
    }
L_0008d85c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008d860:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008d864:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008d868:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008d86c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0008d870:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008d874:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008d878:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_0008d87c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[9];
        }
    }
L_0008d880:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0008d884:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_0008d888:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0008d88c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0008d890:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0008d894:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_0008d898:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_0008d89c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008d8a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008d8a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008d8a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008d704;
        }
    }
L_0008d8ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d8b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d8b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008d8b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0008d8bc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008d8c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008d8c4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_0008d8c8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d8cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008d8d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008d8d4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0008d8d8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008d8dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0008d8e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_0008d8e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008d8e8:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_0008d8ec:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0008d8f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_0008d8f4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008d8f8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008d8fc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008d900:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008d904:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0008d908:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0008d90c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[5]);
    }
L_0008d910:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008d914:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008d918:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[5]);
    }
L_0008d91c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0008d920:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008d924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008d928:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_0008d92c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008d930:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008d934:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
        }
    }
L_0008d938:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008d6a8;
        }
    }
L_0008d93c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0008d940:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008d944u)) return;
    }
}

/* tcd_makelayer_fixed @ 0008d950 (arm) */
void fn_0008d950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008d950:;
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
L_0008d954:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000500u, 1, 0);
    }
L_0008d958:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 7u, &shc); cpu->r[3] = v;
    }
L_0008d95c:;
    {
        cpu->r[6] = 0x00000018u;
    }
L_0008d960:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008d964:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0008d968:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_0008d96c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008d970:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[6] = v;
    }
L_0008d974:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0008d978:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d97c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008d980:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d984:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008d988:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_0008d98c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x24u);
    }
L_0008d990:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_0008d994:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0008d998:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0008d99c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0008d9a0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0008d9a4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0008d9a8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008d9ac:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008d9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008d9b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008d9b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008dd44;
        }
    }
L_0008d9bc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008d9c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008d9c4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008d9c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008d9cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0008d9d0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0008d9d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 5u, &shc), 0, 0);
    }
L_0008d9d8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0008d9dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008da94;
        }
    }
L_0008d9e0:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008d9e4:;
    {
        cpu->r[4] = 0x0000000cu;
    }
L_0008d9e8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008d9ec:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0008d9f4u + + 0x35cu);
    }
L_0008d9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_0008d9f4:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0008d9f8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[9]; cpu->r[4] = v;
    }
L_0008d9fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0008da00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008da80;
        }
    }
L_0008da04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008da08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008da0c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008da10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008da14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0008da18:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x70u);
    }
L_0008da1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008da20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0008da24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0008da28:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_0008da2c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_0008da30:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0008da34:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,7);
    }
L_0008da38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008da3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0008da40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0008da44:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0008da48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008da4c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0008da50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0008da54:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0008da58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0008da5c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0008da60:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0008da64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008da68:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0008da6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008da48;
        }
    }
L_0008da70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008da74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0008da78:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0008da7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008da38;
        }
    }
L_0008da80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008da84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_0008da88:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_0008da8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000078u, 0, 0);
    }
L_0008da90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008d9fc;
        }
    }
L_0008da94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008da98:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008da9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008daa0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008dce0;
        }
    }
L_0008daa4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008daa8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_0008daac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008dab0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[4]);
    }
L_0008dab4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_0008dab8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0008dabc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
    }
L_0008dac0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008dac4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x18u);
    }
L_0008dac8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008dacc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008dcb4;
        }
    }
L_0008dad0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008dad4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008dad8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008dadc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008dae0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0008dae4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x10u);
    }
L_0008dae8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008daec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0008daf0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0008daf4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0008daf8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_0008dafc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_0008db00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008db04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008dc88;
        }
    }
L_0008db08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008db0c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008db10:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0008db14:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x30u);
    }
L_0008db18:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008db1c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008db20:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_0008db24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008db28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008dc64;
        }
    }
L_0008db2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008db30:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008db34:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0008db38:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0008db3c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008db40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008db44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0008db48:;
    {
        goto L_0008dba4;
    }
L_0008db4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008db50:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008db54:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0008db58:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0008db5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0008db60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 0);
        }
    }
L_0008db64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_0008db68:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008db6c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[5]);
    }
L_0008db70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008db74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_0008db78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0008db7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
        }
    }
L_0008db80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008dbf8;
        }
    }
L_0008db84:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[2]);
    }
L_0008db88:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008db8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008db90:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008db94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_0008db98:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008db9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0008dba0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008dc58;
        }
    }
L_0008dba4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008dba8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0008dbac:;
    {
        cpu->r[5] = rd32(cpu->r[10] + + 0x18u);
    }
L_0008dbb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008dbb4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_0008dbb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0008dbbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0008dbc0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0008dbc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008db4c;
        }
    }
L_0008dbc8:;
    {
        cpu->r[8] = rd32(cpu->r[9] + - 0x78u);
    }
L_0008dbcc:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_0008dbd0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0008dbd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_0008dbd8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_0008dbdc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
        }
    }
L_0008dbe0:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
        }
    }
L_0008dbe4:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x28u);
    }
L_0008dbe8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008dbec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_0008dbf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
        }
    }
L_0008dbf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008db70;
        }
    }
L_0008dbf8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_0008dbfc:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[5]);
    }
L_0008dc00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008dc04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008db88;
        }
    }
L_0008dc08:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x28u);
    }
L_0008dc0c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008dc10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008dcfc;
        }
    }
L_0008dc14:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008dc18:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008dc1c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0008dc20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0008dc24:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0008dc28:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[8]);
    }
L_0008dc2c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[4]);
    }
L_0008dc30:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008dc34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008dc38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_0008dc3c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008dc40:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
        }
    }
L_0008dc44:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008dc48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008dc4c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008dc50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0008dc54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008dba4;
        }
    }
L_0008dc58:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008dc5c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008dc60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0008dc64:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[0] = v;
    }
L_0008dc68:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008dc6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_0008dc70:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008dc74:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_0008dc78:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0008dc7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008db18;
        }
    }
L_0008dc80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008dc84:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x18u);
    }
L_0008dc88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008dc8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0008dc90:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008dc94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008dc98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0008dc9c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0008dca0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_0008dca4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_0008dca8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008dafc;
        }
    }
L_0008dcac:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008dcb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008dcb4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008dcb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008dcbc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008dcc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008dcc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0008dcc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_0008dccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0008dcd0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
    }
L_0008dcd4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0008dcd8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0008dcdc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008dac0;
        }
    }
L_0008dce0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008dce4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008dce8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008dcec:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0008dcf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0008dcf4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0008dcf8:;
    {
        goto L_0008d9a8;
    }
L_0008dcfc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0008dd00:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008dd04:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008dd08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0008dd0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0008dd10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0008dd14:;
    {
        cpu->r[5] = rd32(cpu->r[8] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0008dd18:;
    {
        cpu->r[4] = rd32(cpu->r[8] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0008dd1c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_0008dd20:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[4]);
    }
L_0008dd24:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x28u);
    }
L_0008dd28:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0008dd2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0008dd30:;
    {
        cpu->r[4] = rd32(cpu->r[8] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0008dd34:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0008dd38:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_0008dd3c:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[4]);
    }
L_0008dd40:;
    {
        goto L_0008dc30;
    }
L_0008dd44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_0008dd48:;
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
L_0008dd4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* tcd_rateallocate_fixed @ 0008dd58 (arm) */
void fn_0008dd58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008dd58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_0008dd5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008dd60:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008dd64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0008dd68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008dd6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008dd70u)) return;
        }
    }
L_0008dd70:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008dd74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008dd78:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008dd7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008dd80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_0008dd84:;
    {
        cpu->r[14] = 0x0008dd88u; fn_0008d950(cpu);
    }
L_0008dd88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x28u);
    }
L_0008dd8c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0008dd90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008dd94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008dd74;
        }
    }
L_0008dd98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008dd9cu)) return;
    }
}

/* tcd_makelayer @ 0008dda0 (arm) */
void fn_0008dda0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008dda0:;
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
L_0008dda4:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[3]<<32)|cpu->r[2];
    }
L_0008dda8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000038u, 1, 0);
    }
L_0008ddac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_0008ddb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0008ddb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_0008ddb8:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0008ddc0u + + 0x350u);
    }
L_0008ddbc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,7); cpu->r[4]= (uint32_t)v; cpu->r[5]=(uint32_t)(v>>32);
    }
L_0008ddc0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0008ddc4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_0008ddc8:;
    {
        uint32_t wb_tmp = cpu->r[0] + cpu->r[1];
        wr64(cpu->r[0] + cpu->r[1], ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
        cpu->r[0] = wb_tmp;
    }
L_0008ddcc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008ddd0:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0008ddd4:;
    {
        *vfp_d(cpu,4) = *vfp_d(cpu,7);
    }
L_0008ddd8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008dddc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0008dde0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4]; cpu->r[1] = v;
    }
L_0008dde4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0008dde8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0008ddec:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008ddf0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008ddf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008ddf8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008ddfc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008e100;
        }
    }
L_0008de00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008de04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008de08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008de0c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008de10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008de14:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0008de18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_0008de1c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0008de20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008de24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008de28:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0008de2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008e0f0;
        }
    }
L_0008de30:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008de34:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008de38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008de3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0008de40:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008de44:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_0008de48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008de4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e05c;
        }
    }
L_0008de50:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008de54:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008de58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008de5c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0008de60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008de64:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_0008de68:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_0008de6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008de70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e034;
        }
    }
L_0008de74:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008de78:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008de7c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0008de80:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x30u);
    }
L_0008de84:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008de88:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008de8c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0008de90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008de94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e010;
        }
    }
L_0008de98:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0008de9c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0008dea0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008dea4:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x18u);
    }
L_0008dea8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008deac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008deb0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0008deb4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0008deb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[8] + + 0x28u);
        }
    }
L_0008debc:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x2cu);
    }
L_0008dec0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008dec4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8] + + 0x28u, cpu->r[7]);
        }
    }
L_0008dec8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0008decc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0008ded0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_0008ded4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e078;
        }
    }
L_0008ded8:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x8u);
    }
L_0008dedc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0008dee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008dee4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0008dee8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0008deec:;
    {
        goto L_0008df20;
    }
L_0008def0:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0008def4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008def8:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[1] + + 0x8u);
    }
L_0008defc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008df00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008df58;
        }
    }
L_0008df04:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), 0.0);
    }
L_0008df08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_0008df0c:;
    {
        vfp_sync_flags(cpu);
    }
L_0008df10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0008df14:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_0008df18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008df1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008df80;
        }
    }
L_0008df20:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008df24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008df28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0008df2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008def0;
        }
    }
L_0008df30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0008df34:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0008df38:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 3u, &shc));
    }
L_0008df3c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[1] + + 0x8u);
    }
L_0008df40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0008df44:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[6] + + 0x8u);
    }
L_0008df48:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008df4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008df50:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) - *vfp_d(cpu, 7);
    }
L_0008df54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008df04;
        }
    }
L_0008df58:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[5];
    }
L_0008df5c:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,7);
    }
L_0008df60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_0008df64:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 6);
    }
L_0008df68:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,5));
    }
L_0008df6c:;
    {
        vfp_sync_flags(cpu);
    }
L_0008df70:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0008df74:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_0008df78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008df7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008df20;
        }
    }
L_0008df80:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_0008df84:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0008df88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008df8c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008df90:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[7]);
    }
L_0008df94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e088;
        }
    }
L_0008df98:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x28u);
    }
L_0008df9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008dfa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008e094;
        }
    }
L_0008dfa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008dfa8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008dfac:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0008dfb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0008dfb4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_0008dfb8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0008dfbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0008dfc0:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[3] + + 0x8u);
    }
L_0008dfc4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0008dfc8:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008dfcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008dfd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008dfd4:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[0]);
    }
L_0008dfd8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008dfdc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8] + + 0x28u, cpu->r[2]);
        }
    }
L_0008dfe0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_0008dfe4:;
    {
        *(uint64_t*)G(cpu->r[0]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008dfe8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008dfec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0008dff0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008dff4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_0008dff8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008dffc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0008e000:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008dea0;
        }
    }
L_0008e004:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e008:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008e00c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008e010:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_0008e014:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008e018:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_0008e01c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008e020:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_0008e024:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0008e028:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008de84;
        }
    }
L_0008e02c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e030:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_0008e034:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008e038:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e03c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008e040:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0008e044:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0008e048:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_0008e04c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_0008e050:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008de68;
        }
    }
L_0008e054:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e058:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008e05c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008e060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e064:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008e068:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0008e06c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_0008e070:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008e074:;
    {
        goto L_0008de24;
    }
L_0008e078:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0008e07c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008e080:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008e084:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[2]);
    }
L_0008e088:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e08c:;
    {
        *(uint64_t*)G(cpu->r[2] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 4);
    }
L_0008e090:;
    {
        goto L_0008dfe8;
    }
L_0008e094:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008e098:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008e09c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e0a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0008e0a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0008e0a8:;
    {
        cpu->r[4] = rd32(cpu->r[8]);
    }
L_0008e0ac:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_0008e0b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0008e0b4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0008e0b8:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[1] + + 0x8u);
    }
L_0008e0bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0008e0c0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0008e0c4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x28u);
    }
L_0008e0c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008e0cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0008e0d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0008e0d4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0008e0d8:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[1] + + 0x8u);
    }
L_0008e0dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0008e0e0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0008e0e4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) - *vfp_d(cpu, 7);
    }
L_0008e0e8:;
    {
        *(uint64_t*)G(cpu->r[5] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008e0ec:;
    {
        goto L_0008dfcc;
    }
L_0008e0f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e0f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008e0f8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008e0fc:;
    {
        goto L_0008ddec;
    }
L_0008e100:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0008e104:;
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
L_0008e108:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* tcd_free_decode @ 0008e118 (arm) */
void fn_0008e118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008e118:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008e11c:;
    {
        cpu->r[3] = rd32(0x0008e124u + + 0x1cu);
    }
L_0008e120:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0008e124:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_0008e128:;
    {
        cpu->r[2] = rd32(0x0008e130u + + 0x14u);
    }
L_0008e12c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0008e134u, cpu->r[3], 0, 0);
    }
L_0008e130:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008e134:;
    {
        cpu->r[14] = 0x0008e13cu;
    }
L_0008e138:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e13cu)) return;
    }
L_0008e13c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e140u)) return;
    }
}

/* tcd_free_decode_tile @ 0008e148 (arm) */
void fn_0008e148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008e148:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008e14c:;
    {
        cpu->r[2] = 0x00000350u;
    }
L_0008e150:;
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
L_0008e154:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0008e158:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008e15c:;
    {
        cpu->r[4] = rd32(0x0008e164u + + 0x180u);
    }
L_0008e160:;
    {
        cpu->r[11] = rd32(0x0008e168u + + 0x180u);
    }
L_0008e164:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0008e168:;
    {
        cpu->r[4] = add_flags(cpu, 0x0008e170u, cpu->r[4], 0, 0);
    }
L_0008e16c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0008e170:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008e174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e178:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e2c8;
        }
    }
L_0008e17c:;
    {
        cpu->r[11] = rd32(0x0008e184u + + 0x164u);
    }
L_0008e180:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008e184:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008e188:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0008e18c:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0008e190:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e194:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e198:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e19c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_0008e1a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0008e1a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008e1a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008e1ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
        }
    }
L_0008e1b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e294;
        }
    }
L_0008e1b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e1b8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008e1bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_0008e1c0:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0008e1c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008e1c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0008e1cc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008e1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e1d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e280;
        }
    }
L_0008e1d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0008e1dc:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0008e1e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_0008e1e4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0008e1e8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008e1ec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008e1f0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008e1f4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008e1f8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e1fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e200:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e250;
        }
    }
L_0008e204:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008e208:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008e20c:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x30u);
    }
L_0008e210:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008e214:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0008e218:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_0008e21c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x20u);
    }
L_0008e220:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e22c;
        }
    }
L_0008e228:;
    {
        cpu->r[14] = 0x0008e22cu; fn_00092054(cpu);
    }
L_0008e22c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0008e230:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e23c;
        }
    }
L_0008e238:;
    {
        cpu->r[14] = 0x0008e23cu; fn_00092054(cpu);
    }
L_0008e23c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008e240:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008e244:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e248:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008e24c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e20c;
        }
    }
L_0008e250:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x30u);
    }
L_0008e254:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0008e258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0008e25c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000020u, 0, 0);
    }
L_0008e260:;
    {
        cpu->r[14] = 0x0008e268u;
    }
L_0008e264:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e268u)) return;
    }
L_0008e268:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008e26c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0008e270:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e1f0;
        }
    }
L_0008e274:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[4] = v1;
        cpu->r[11] = v2;
    }
L_0008e278:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e27c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e280:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0008e284:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000007cu, 0, 0);
    }
L_0008e288:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_0008e28c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e1c8;
        }
    }
L_0008e290:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008e294:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008e298:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_0008e29c:;
    {
        cpu->r[14] = 0x0008e2a4u;
    }
L_0008e2a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e2a4u)) return;
    }
L_0008e2a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e2a8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e2ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e2b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008e2b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0008e2b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008e2bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e190;
        }
    }
L_0008e2c0:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0008e2c4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008e2c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e2cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0008e2d0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e2d4:;
    {
        cpu->r[14] = 0x0008e2dcu;
    }
L_0008e2d8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e2dcu)) return;
    }
L_0008e2dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0008e2e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e2e4u)) return;
    }
}

/* tcd_free_encode @ 0008e2ec (arm) */
void fn_0008e2ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008e2ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008e2f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008e2f4:;
    {
        cpu->r[2] = rd32(0x0008e2fcu + + 0x274u);
    }
L_0008e2f8:;
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
L_0008e2fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008e300:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0008e304:;
    {
        cpu->r[11] = rd32(0x0008e30cu + + 0x268u);
    }
L_0008e308:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0008e30c:;
    {
        cpu->r[11] = add_flags(cpu, 0x0008e314u, cpu->r[11], 0, 0);
    }
L_0008e310:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0008e314:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0008e318:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0008e31c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008e320:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e324:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e328:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008e32c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008e524;
        }
    }
L_0008e330:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008e334:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e338:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0008e33c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_0008e340:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0008e344:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008e348:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e34c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e4f0;
        }
    }
L_0008e350:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008e354:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0008e358:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0008e35c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e360:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008e364:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e368:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_0008e36c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008e370:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008e374:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e4d0;
        }
    }
L_0008e378:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008e37c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0008e380:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0008e384:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008e388:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008e38c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e390:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e394:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e488;
        }
    }
L_0008e398:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008e39c:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0008e3a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008e3a4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x30u);
    }
L_0008e3a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0008e3ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008e3b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008e3b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e3c4;
        }
    }
L_0008e3b8:;
    {
        cpu->r[14] = 0x0008e3bcu; fn_00092054(cpu);
    }
L_0008e3bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008e3c0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_0008e3c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0008e3c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008e3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e3dc;
        }
    }
L_0008e3d0:;
    {
        cpu->r[14] = 0x0008e3d4u; fn_00092054(cpu);
    }
L_0008e3d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008e3d8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_0008e3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008e3e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008e3e4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e3e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e3ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e458;
        }
    }
L_0008e3f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e3f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008e3f8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008e3fc:;
    {
        cpu->r[7] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0008e400:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008e404:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008e408:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0008e40c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_0008e410:;
    {
        cpu->r[14] = 0x0008e418u;
    }
L_0008e414:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e418u)) return;
    }
L_0008e418:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008e41c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0008e420:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0008e424:;
    {
        cpu->r[14] = 0x0008e42cu;
    }
L_0008e428:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e42cu)) return;
    }
L_0008e42c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008e430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0008e434:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0008e438:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008e43c:;
    {
        cpu->r[14] = 0x0008e444u;
    }
L_0008e440:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e444u)) return;
    }
L_0008e444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008e448:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008e44c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e450:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008e454:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e400;
        }
    }
L_0008e458:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e45c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0008e460:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008e464:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_0008e468:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_0008e46c:;
    {
        cpu->r[14] = 0x0008e474u;
    }
L_0008e470:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e474u)) return;
    }
L_0008e474:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008e478:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008e47c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008e480:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0008e484:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e3a0;
        }
    }
L_0008e488:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_0008e48c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x30u);
    }
L_0008e490:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008e494:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008e498:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_0008e49c:;
    {
        cpu->r[14] = 0x0008e4a4u;
    }
L_0008e4a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e4a4u)) return;
    }
L_0008e4a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008e4a8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x18u);
    }
L_0008e4ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008e4b0:;
    {
        wr32(cpu->r[2] + + 0x30u, cpu->r[1]);
    }
L_0008e4b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_0008e4b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0008e4bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008e4c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008e4c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e384;
        }
    }
L_0008e4c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e4cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008e4d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008e4d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008e4d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008e4dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0008e4e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008e4e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_0008e4e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0008e4ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e35c;
        }
    }
L_0008e4f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e4f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008e4fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0008e500:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e504:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_0008e508:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e50c:;
    {
        cpu->r[14] = 0x0008e514u;
    }
L_0008e510:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e514u)) return;
    }
L_0008e514:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e518:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008e51c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_0008e520:;
    {
        goto L_0008e31c;
    }
L_0008e524:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008e528:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0008e52c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008e530:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_0008e534:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008e538:;
    {
        cpu->r[14] = 0x0008e540u;
    }
L_0008e53c:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e540u)) return;
    }
L_0008e540:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e544:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008e548:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008e54c:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[4]);
    }
L_0008e550:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008e554:;
    {
        cpu->r[14] = 0x0008e55cu;
    }
L_0008e558:;
    {
        uint32_t t = rd32(cpu->r[5]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e55cu)) return;
    }
L_0008e55c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e560:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008e564:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_0008e568:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0008e56c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e570u)) return;
    }
}

/* tcd_decode_tile @ 0008e578 (arm) */
void fn_0008e578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008e578:;
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
L_0008e57c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0008e580:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0008e584:;
    {
        cpu->r[7] = rd32(0x0008e58cu + + 0x87cu);
    }
L_0008e588:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008e58c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0008e590:;
    {
        cpu->r[7] = add_flags(cpu, 0x0008e598u, cpu->r[7], 0, 0);
    }
L_0008e594:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008e598:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e59c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0008e5a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0008e5a4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e5a8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_0008e5ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008e5b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x6cu);
    }
L_0008e5b4:;
    {
        cpu->r[2] = 0x00000350u;
    }
L_0008e5b8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_0008e5bc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_0008e5c0:;
    {
        cpu->r[2] = 0x000015d4u;
    }
L_0008e5c4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008e5c8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_0008e5cc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_0008e5d0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0008e5d4:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_0008e5d8:;
    {
        cpu->r[14] = 0x0008e5dcu; fn_000849f4(cpu);
    }
L_0008e5dc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e5e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008e5e4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x20u);
    }
L_0008e5e8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x44u);
    }
L_0008e5ec:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x48u);
    }
L_0008e5f0:;
    {
        cpu->r[2] = rd32(0x0008e5f8u + + 0x814u);
    }
L_0008e5f4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14]; cpu->r[12] = v;
    }
L_0008e5f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008e600u, cpu->r[2], 0, 0);
    }
L_0008e5fc:;
    {
        *(uint64_t*)vfp_d(cpu,9) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008e600:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x14u);
    }
L_0008e604:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008e608:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008e60c:;
    {
        cpu->r[14] = 0x0008e610u; fn_00080304(cpu);
    }
L_0008e610:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e614:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008e618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e768;
        }
    }
L_0008e61c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x34u);
    }
L_0008e620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e624:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008edf4;
        }
    }
L_0008e628:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e62c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008e630:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e634:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e638:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0008e63c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0008e640:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e644:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008e648:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x6cu);
    }
L_0008e64c:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_0008e650:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x58u);
    }
L_0008e654:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 6u, &shc); cpu->r[4] = v;
    }
L_0008e658:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0008e65c:;
    {
        cpu->r[9] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0008e660:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], cpu->r[4], 0, 0);
    }
L_0008e664:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_0008e668:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008e66c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008e670:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e70c;
        }
    }
L_0008e674:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008e678:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0008e67c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x14u);
    }
L_0008e680:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008e684:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0008e688:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e68c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000068u, 0, 0);
    }
L_0008e690:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000046u, 0, 0);
    }
L_0008e694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008e698:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0008e69c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_0008e6a0:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[6]);
    }
L_0008e6a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0008e6a8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e6ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0008e6b0:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0008e6b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0008e6b8:;
    {
        wr32(cpu->r[1] + + 0x98u, cpu->r[6]);
    }
L_0008e6bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0008e6c0:;
    {
        cpu->r[6] = rd32(cpu->r[9]);
    }
L_0008e6c4:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e6c8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_0008e6cc:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e6d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000007cu, 0, 0);
    }
L_0008e6d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0008e6d8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8] + cpu->r[5]; cpu->r[5] = v;
    }
L_0008e6dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x32cu);
        }
    }
L_0008e6e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x0000000fu;
        }
    }
L_0008e6e4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
        }
    }
L_0008e6e8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[10] + + 0x4u, cpu->r[6]);
        }
    }
L_0008e6ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x3b0u);
        }
    }
L_0008e6f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0008e6f4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[6]);
        }
    }
L_0008e6f8:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008e6fc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0008e700:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e688;
        }
    }
L_0008e704:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e708:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x34u);
    }
L_0008e70c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008e710:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000430u, 0, 0);
    }
L_0008e714:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000020u, 0, 0);
    }
L_0008e718:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0008e71c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008e720:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0008e724:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0008e728:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e668;
        }
    }
L_0008e72c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e730:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[14], cpu->r[4], 0, 0);
    }
L_0008e734:;
    {
        cpu->r[3] = rd32(0x0008e73cu + + 0x6d4u);
    }
L_0008e738:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_0008e73c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[5] = v;
    }
L_0008e740:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008e744:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0008e748:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0008e74c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0008e750:;
    {
        cpu->r[14] = 0x0008e758u;
    }
L_0008e754:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e758u)) return;
    }
L_0008e758:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e75c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008e760:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_0008e764:;
    {
        wr32(cpu->r[4] + + 0x224u, cpu->r[0]);
    }
L_0008e768:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e76c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0008e770:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
    }
L_0008e774:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008e778:;
    {
        cpu->r[14] = 0x0008e77cu; fn_0008ba3c(cpu);
    }
L_0008e77c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e780:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008e784:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008e788:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008e78c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008e790:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008e794:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0008e798:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008e79c:;
    {
        cpu->r[14] = 0x0008e7a0u; fn_0008bab4(cpu);
    }
L_0008e7a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008e7a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008e7a8:;
    {
        cpu->r[14] = 0x0008e7acu; fn_0008ba84(cpu);
    }
L_0008e7ac:;
    {
        cpu->r[3] = 0x0000fc19u;
    }
L_0008e7b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0008e7b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008e7b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0008e7bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
        }
    }
L_0008e7c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008edd4;
        }
    }
L_0008e7c4:;
    {
        cpu->r[14] = 0x0008e7c8u; fn_000849f4(cpu);
    }
L_0008e7c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e7cc:;
    {
        *(uint64_t*)vfp_d(cpu,8) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008e7d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008e7d4:;
    {
        cpu->r[14] = 0x0008e7d8u; fn_0008b924(cpu);
    }
L_0008e7d8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e7dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008e7e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e7e4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0008e7e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e880;
        }
    }
L_0008e7ec:;
    {
        cpu->r[3] = rd32(0x0008e7f4u + + 0x61cu);
    }
L_0008e7f0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008e7f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008e7f8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008e7fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e800:;
    {
        cpu->r[8] = 0x000015d0u;
    }
L_0008e804:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0008e808:;
    {
        cpu->r[10] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0008e80c:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0008e810:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e814:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008e818:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 5u, &shc), 0, 0);
    }
L_0008e81c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 5u, &shc));
    }
L_0008e820:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008e824:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008e828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0008e82c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008e830:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0008e834:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0008e838:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0008e83c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_0008e840:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0008e844:;
    {
        cpu->r[14] = 0x0008e84cu;
    }
L_0008e848:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008e84cu)) return;
    }
L_0008e84c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x28u);
    }
L_0008e850:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008e854:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0008e858:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0008e85c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_0008e860:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008e864:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_0008e868:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0008e86c:;
    {
        cpu->r[14] = 0x0008e870u; fn_00089480(cpu);
    }
L_0008e870:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_0008e874:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008e878:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e814;
        }
    }
L_0008e87c:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_0008e880:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0008e884:;
    {
        cpu->r[14] = 0x0008e888u; fn_0008b8c8(cpu);
    }
L_0008e888:;
    {
        cpu->r[14] = 0x0008e88cu; fn_000849f4(cpu);
    }
L_0008e88c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e890:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008e894:;
    {
        cpu->r[2] = rd32(0x0008e89cu + + 0x578u);
    }
L_0008e898:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008e8a0u, cpu->r[2], 0, 0);
    }
L_0008e89c:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008e8a0:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) - *vfp_d(cpu, 8);
    }
L_0008e8a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008e8a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008e8ac:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 8);
    }
L_0008e8b0:;
    {
        cpu->r[14] = 0x0008e8b4u; fn_00080304(cpu);
    }
L_0008e8b4:;
    {
        cpu->r[14] = 0x0008e8b8u; fn_000849f4(cpu);
    }
L_0008e8b8:;
    {
        *(uint64_t*)vfp_d(cpu,8) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008e8bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e8c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0008e8c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e8c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e9a8;
        }
    }
L_0008e8cc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0008e8d0:;
    {
        cpu->r[7] = 0x000015d0u;
    }
L_0008e8d4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0008e8d8:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008e8dc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0008e8e0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e8e4:;
    {
        goto L_0008e954;
    }
L_0008e8e8:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008e8ec:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0008e8f0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0008e8f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0008e8f8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008e8fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008e900:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0008e904:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0008e908:;
    {
        wr32(cpu->r[14] + + 0x24u, cpu->r[1]);
    }
L_0008e90c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008ed94;
        }
    }
L_0008e910:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008e914:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e918:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e938;
        }
    }
L_0008e91c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x28u);
    }
L_0008e920:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[7]);
    }
L_0008e924:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_0008e928:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008e92c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0008e930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008e984;
        }
    }
L_0008e934:;
    {
        cpu->r[14] = 0x0008e938u; fn_0007f700(cpu);
    }
L_0008e938:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008e93c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008e940:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000430u, 0, 0);
    }
L_0008e944:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0008e948:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008e94c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0008e950:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008e9a8;
        }
    }
L_0008e954:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x20u);
    }
L_0008e958:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008e95c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x24u);
    }
L_0008e960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 5u, &shc), 0, 0);
    }
L_0008e964:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0008e968:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008e96c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008e8e8;
        }
    }
L_0008e970:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0008e974:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008e978:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0008e97c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_0008e980:;
    {
        goto L_0008e910;
    }
L_0008e984:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0008e988:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008e98c:;
    {
        cpu->r[14] = 0x0008e990u; fn_0007ffe8(cpu);
    }
L_0008e990:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008e994:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000430u, 0, 0);
    }
L_0008e998:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0008e99c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008e9a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0008e9a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008e954;
        }
    }
L_0008e9a8:;
    {
        cpu->r[14] = 0x0008e9acu; fn_000849f4(cpu);
    }
L_0008e9ac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008e9b0:;
    {
        cpu->r[2] = rd32(0x0008e9b8u + + 0x460u);
    }
L_0008e9b4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008e9b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008e9c0u, cpu->r[2], 0, 0);
    }
L_0008e9bc:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008e9c0:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) - *vfp_d(cpu, 8);
    }
L_0008e9c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008e9c8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008e9cc:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 8);
    }
L_0008e9d0:;
    {
        cpu->r[14] = 0x0008e9d4u; fn_00080304(cpu);
    }
L_0008e9d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x28u);
    }
L_0008e9d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008e9dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008e9e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ed14;
        }
    }
L_0008e9e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008e9e8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0008e9ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008e9f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008ec00;
        }
    }
L_0008e9f4:;
    {
        cpu->r[3] = rd32(0x0008e9fcu + + 0x420u);
    }
L_0008e9f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008e9fc:;
    {
        cpu->r[6] = rd32(0x0008ea04u + + 0x40cu);
    }
L_0008ea00:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0008ea04:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0008ea08:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_0008ea0c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0008ea10:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008ea14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0008ea18:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[7] = v1;
        cpu->r[12] = v2;
    }
L_0008ea1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0008ea20:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ea24:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008ea28:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008ea2c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 5u, &shc); cpu->r[1] = v;
    }
L_0008ea30:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0008ea34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0008ea38:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x24u);
    }
L_0008ea3c:;
    {
        cpu->r[7] = rd32(cpu->r[11] + + 0x20u);
    }
L_0008ea40:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008ea44:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[12] = v;
    }
L_0008ea48:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0008ea4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0008ea50:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0008ea54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008ec40;
        }
    }
L_0008ea58:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008ea5c:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0008ea60:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008ea64:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008ea68:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
    }
L_0008ea6c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0008ea70:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0008ea74:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x28u);
    }
L_0008ea78:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0008ea7c:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008ea80:;
    {
        cpu->r[14] = rd32(cpu->r[11] + + 0x14u);
    }
L_0008ea84:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008ea88:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0008ea8c:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0x2cu);
    }
L_0008ea90:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0008ea94:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0008ea98:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0008ea9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0008eaa0:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x8u);
    }
L_0008eaa4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008eaa8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008eaac:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[4] = v;
    }
L_0008eab0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0008eab4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0008eab8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 0);
    }
L_0008eabc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ed60;
        }
    }
L_0008eac0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008eac4:;
    {
        cpu->r[0] = 0x000015d0u;
    }
L_0008eac8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008eacc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x28u);
    }
L_0008ead0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0008ead4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0008ead8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008eadc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008eae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ec64;
        }
    }
L_0008eae4:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008eae8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0008eaec:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_0008eaf0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008ebb0;
        }
    }
L_0008eaf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008eaf8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 0);
    }
L_0008eafc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008eb00:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_0008eb04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_0008eb08:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0008eb0c:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_0008eb10:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0008eb14:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008eb94;
        }
    }
L_0008eb18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008eb1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0008eb20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008eb24:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0008eb28:;
    {
        goto L_0008eb30;
    }
L_0008eb2c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0008eb30:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008eb34:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008eb38:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_0008eb3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008eb40:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1] + cpu->r[4]; cpu->r[1] = v;
    }
L_0008eb44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0008eb48:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0008eb4c:;
    {
        cpu->r[14] = 0x0008eb50u; imp_lrintf(cpu); /* lrintf */
    }
L_0008eb50:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x2cu);
    }
L_0008eb54:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0008eb58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008eb5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0008eb60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0008eb64:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0008eb68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008eb78;
        }
    }
L_0008eb6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008eb70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0008eb74:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_0008eb78:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_0008eb7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008eb80:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008eb84:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0008eb88:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0008eb8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008eb2c;
        }
    }
L_0008eb90:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0008eb94:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0008eb98:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008eb9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008eba0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_0008eba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0008eba8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_0008ebac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008eb0c;
        }
    }
L_0008ebb0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008ebb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008ebb8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008ebbc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0008ebc0:;
    {
        cpu->r[14] = 0x0008ebc8u;
    }
L_0008ebc4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ebc8u)) return;
    }
L_0008ebc8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008ebcc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008ebd0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008ebd4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008ebd8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0008ebdc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008ebe0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000430u, 0, 0);
    }
L_0008ebe4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0008ebe8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0008ebec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_0008ebf0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_0008ebf4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0008ebf8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_0008ebfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ea14;
        }
    }
L_0008ec00:;
    {
        cpu->r[14] = 0x0008ec04u; fn_000849f4(cpu);
    }
L_0008ec04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008ec08:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008ec0c:;
    {
        cpu->r[2] = rd32(0x0008ec14u + + 0x20cu);
    }
L_0008ec10:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008ec18u, cpu->r[2], 0, 0);
    }
L_0008ec14:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008ec18:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 7) - *vfp_d(cpu, 9);
    }
L_0008ec1c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008ec20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008ec24:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 9);
    }
L_0008ec28:;
    {
        cpu->r[14] = 0x0008ec2cu; fn_00080304(cpu);
    }
L_0008ec2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008ec30:;
    {
        uint32_t v = cpu->r[1] ^ 0x00000001u; cpu->r[0] = v;
    }
L_0008ec34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0008ec38:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0008ec3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ec40u)) return;
    }
L_0008ec40:;
    {
        cpu->r[7] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008ec44:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008ec48:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008ec4c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0008ec50:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[7] = v;
    }
L_0008ec54:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0008ec58:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_0008ec5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_0008ec60:;
    {
        goto L_0008ea74;
    }
L_0008ec64:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008ec68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0008ec6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0008ec70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008ebb0;
        }
    }
L_0008ec74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008ec78:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_0008ec7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008ec80:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008ec84:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008ec88:;
    {
        uint32_t v = cpu->r[3] * cpu->r[14]; cpu->r[14] = v;
    }
L_0008ec8c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[6], 1, 0);
    }
L_0008ec90:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0008ec94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008ec98:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008ecfc;
        }
    }
L_0008ec9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0008eca0:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x2cu);
    }
L_0008eca4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0008eca8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0008ecac:;
    {
        goto L_0008ecb4;
    }
L_0008ecb0:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_0008ecb4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008ecb8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0008ecbc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 0);
    }
L_0008ecc0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_0008ecc4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_0008ecc8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0008eccc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0008ecd0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0008ecd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008ece4;
        }
    }
L_0008ecd8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 1);
    }
L_0008ecdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_0008ece0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_0008ece4:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_0008ece8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008ecec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008ecf0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0008ecf4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ecb0;
        }
    }
L_0008ecf8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_0008ecfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008ed00:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008ed04:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0008ed08:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0008ed0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ec90;
        }
    }
L_0008ed10:;
    {
        goto L_0008ebb4;
    }
L_0008ed14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008ed18:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_0008ed1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008ed20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0008ed24:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0008ed28:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0008ed2c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008ed30:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008ed34:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008ed38:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0008ed3c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0008ed40:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0008ed44:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008ed48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008edc0;
        }
    }
L_0008ed4c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0008ed50:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008ed54:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x38u);
    }
L_0008ed58:;
    {
        cpu->r[14] = 0x0008ed5cu; fn_000860b8(cpu);
    }
L_0008ed5c:;
    {
        goto L_0008e9e4;
    }
L_0008ed60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008ed64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008ed68:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0xcu);
    }
L_0008ed6c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008ed70:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0008ed74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008ed78:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_0008ed7c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0008ed80:;
    {
        cpu->r[14] = 0x0008ed88u;
    }
L_0008ed84:;
    {
        uint32_t t = rd32(cpu->r[2]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008ed88u)) return;
    }
L_0008ed88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008ed8c:;
    {
        wr32(cpu->r[11] + + 0x2cu, cpu->r[0]);
    }
L_0008ed90:;
    {
        goto L_0008eac0;
    }
L_0008ed94:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0008ed98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008ed9c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008eda0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008eda4:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0008eda8:;
    {
        cpu->r[2] = rd32(0x0008edb0u + + 0x74u);
    }
L_0008edac:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x24u);
    }
L_0008edb0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008edb8u, cpu->r[2], 0, 0);
    }
L_0008edb4:;
    {
        cpu->r[14] = 0x0008edb8u; fn_00080304(cpu);
    }
L_0008edb8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008edbc:;
    {
        goto L_0008ec34;
    }
L_0008edc0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0008edc4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008edc8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x38u);
    }
L_0008edcc:;
    {
        cpu->r[14] = 0x0008edd0u; fn_00085cb8(cpu);
    }
L_0008edd0:;
    {
        goto L_0008e9e4;
    }
L_0008edd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008edd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008eddc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0008ede0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008ede4:;
    {
        cpu->r[2] = rd32(0x0008edecu + + 0x3cu);
    }
L_0008ede8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008edf0u, cpu->r[2], 0, 0);
    }
L_0008edec:;
    {
        cpu->r[14] = 0x0008edf0u; fn_00080304(cpu);
    }
L_0008edf0:;
    {
        goto L_0008e7c4;
    }
L_0008edf4:;
    {
        cpu->r[4] = 0x00000240u;
    }
L_0008edf8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008edfc:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x58u);
    }
L_0008ee00:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6]; cpu->r[4] = v;
    }
L_0008ee04:;
    {
        goto L_0008e72c;
    }
}
