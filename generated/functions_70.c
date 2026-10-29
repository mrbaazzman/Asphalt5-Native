#include "functions.h"

/* _ZN19OnlineKeyboardInputC2Ev @ 001a72c8 (arm) */
void fn_001a72c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a72c8:;
    {
        cpu->r[3] = rd32(0x001a72d0u + + 0x9cu);
    }
L_001a72cc:;
    {
        cpu->r[2] = rd32(0x001a72d4u + + 0x9cu);
    }
L_001a72d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a72d8u, cpu->r[3], 0, 0);
    }
L_001a72d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a72d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a72dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a72e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a72e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001a72e8:;
    {
        cpu->r[6] = 0x00000898u;
    }
L_001a72ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a72f0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_001a72f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001a72f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a72fc:;
    {
        cpu->r[14] = 0x001a7300u; fn_001a71e8(cpu);
    }
L_001a7300:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001a7304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a72f4;
        }
    }
L_001a7308:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x000008b0u, 0, 0);
    }
L_001a730c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001a7310:;
    {
        cpu->r[5] = 0x00000898u;
    }
L_001a7314:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001a7318:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a731c:;
    {
        cpu->r[14] = 0x001a7320u; fn_001a71e8(cpu);
    }
L_001a7320:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001a7324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7314;
        }
    }
L_001a7328:;
    {
        cpu->r[2] = 0x00001150u;
    }
L_001a732c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7330:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a7334:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7338:;
    {
        cpu->r[2] = 0x00001158u;
    }
L_001a733c:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7340:;
    {
        cpu->r[2] = 0x00001160u;
    }
L_001a7344:;
    {
        wr8(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7348:;
    {
        cpu->r[2] = 0x0000115au;
    }
L_001a734c:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7350:;
    {
        cpu->r[2] = 0x0000115cu;
    }
L_001a7354:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7358:;
    {
        cpu->r[2] = 0x0000115eu;
    }
L_001a735c:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7360:;
    {
        cpu->r[2] = 0x00001154u;
    }
L_001a7364:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7368:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a736cu)) return;
    }
}

/* _ZN15OnlineKeyButtonC2Ev @ 001a7374 (arm) */
void fn_001a7374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7374:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001a7378:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a737c:;
    {
        wr16(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_001a7380:;
    {
        wr8(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_001a7384:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_001a7388:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_001a738c:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001a7390:;
    {
        wr16(cpu->r[0] + + 0x6u, cpu->r[2]);
    }
L_001a7394:;
    {
        wr8(cpu->r[3] + + 0x26u, cpu->r[2]);
    }
L_001a7398:;
    {
        wr8(cpu->r[3] + + 0x27u, cpu->r[2]);
    }
L_001a739c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001a73a0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_001a73a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineKeyButton7OnTouchEP19OnlineKeyboardInputP15OnlineTextInput @ 001a73a8 (arm) */
void fn_001a73a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a73a8:;
    {
        cpu->r[3] = rd32(0x001a73b0u + + 0x1a8u);
    }
L_001a73ac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a73b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a73b4:;
    {
        cpu->r[0] = rd32(0x001a73bcu + + 0x1a0u);
    }
L_001a73b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a73c0u, cpu->r[3], 0, 0);
    }
L_001a73bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001a73c0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001a73c4:;
    {
        cpu->r[0] = 0x000067b4u;
    }
L_001a73c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a73cc:;
    {
        cpu->r[6] = rd8(cpu->r[3] + cpu->r[0]);
    }
L_001a73d0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001a73d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7434;
        }
    }
L_001a73d8:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x26u);
    }
L_001a73dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a73e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7434;
        }
    }
L_001a73e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_001a73e8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001a73ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7420;
        }
    }
L_001a73f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_001a73f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a73f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7440;
        }
    }
L_001a73fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], 0x00000061u, 1, 0);
    }
L_001a7400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_001a7404:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000020u;
        }
    }
L_001a7408:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001a7440;
        }
    }
L_001a740c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001a7410:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001a7414:;
    {
        cpu->r[14] = 0x001a7418u; fn_001a7d64(cpu);
    }
L_001a7418:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001a741c:;
    {
        goto L_001a7438;
    }
L_001a7420:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001a7424:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001a7428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a74a8;
        }
    }
L_001a742c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 1);
    }
L_001a7430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7448;
        }
    }
L_001a7434:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001a7438:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a743c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7440u)) return;
    }
L_001a7440:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a7444:;
    {
        goto L_001a740c;
    }
L_001a7448:;
    {
        cpu->r[4] = 0x000067bcu;
    }
L_001a744c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001a7450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a74fc;
        }
    }
L_001a7458:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001a745c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001a7460:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[2]);
        }
    }
L_001a7464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7438;
        }
    }
L_001a7468:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001a746c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7478;
        }
    }
L_001a7470:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001a7474:;
    {
        goto L_001a7438;
    }
L_001a7478:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a747c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001a7480:;
    {
        cpu->r[14] = 0x001a7484u; fn_001a6874(cpu);
    }
L_001a7484:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001a7488:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[3] = v;
    }
L_001a748c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a7490:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001a7494:;
    {
        cpu->r[14] = 0x001a7498u; fn_001a6908(cpu);
    }
L_001a7498:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a749c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a74a0:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[6]);
    }
L_001a74a4:;
    {
        goto L_001a7438;
    }
L_001a74a8:;
    {
        cpu->r[8] = 0x000067b8u;
    }
L_001a74ac:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a74b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a74b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a752c;
        }
    }
L_001a74b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001a74bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001a74c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
        }
    }
L_001a74c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7438;
        }
    }
L_001a74c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001a74cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7470;
        }
    }
L_001a74d0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x27u);
    }
L_001a74d4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a74d8:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[1] = v;
    }
L_001a74dc:;
    {
        cpu->r[14] = 0x001a74e0u; fn_001a68d4(cpu);
    }
L_001a74e0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a74e4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x27u);
    }
L_001a74e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a74ec:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[3] = v;
    }
L_001a74f0:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[6]);
    }
L_001a74f4:;
    {
        wr8(cpu->r[4] + + 0x27u, cpu->r[3]);
    }
L_001a74f8:;
    {
        goto L_001a7438;
    }
L_001a74fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a7500:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001a7504:;
    {
        cpu->r[14] = 0x001a7508u; fn_001a6874(cpu);
    }
L_001a7508:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001a750c:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[3] = v;
    }
L_001a7510:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a7514:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001a7518:;
    {
        cpu->r[14] = 0x001a751cu; fn_001a6908(cpu);
    }
L_001a751c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a7520:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a7524:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[7]);
    }
L_001a7528:;
    {
        goto L_001a7438;
    }
L_001a752c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x27u);
    }
L_001a7530:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a7534:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[1] = v;
    }
L_001a7538:;
    {
        cpu->r[14] = 0x001a753cu; fn_001a68d4(cpu);
    }
L_001a753c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a7540:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x27u);
    }
L_001a7544:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a7548:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[3] = v;
    }
L_001a754c:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[7]);
    }
L_001a7550:;
    {
        wr8(cpu->r[4] + + 0x27u, cpu->r[3]);
    }
L_001a7554:;
    {
        goto L_001a7438;
    }
}

/* _ZN15OnlineKeyButton4DrawEP6SpriteS1_b @ 001a7560 (arm) */
void fn_001a7560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7560:;
    {
        cpu->r[12] = rd32(0x001a7568u + + 0x18cu);
    }
L_001a7564:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7568:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001a756c:;
    {
        cpu->r[2] = rd32(0x001a7574u + + 0x184u);
    }
L_001a7570:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a7578u, cpu->r[12], 0, 0);
    }
L_001a7574:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a7578:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a757c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001a7580:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001a7584:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001a7588:;
    {
        cpu->r[2] = 0x000067b4u;
    }
L_001a758c:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001a7590:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a7594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7694;
        }
    }
L_001a7598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a759c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a75e4;
        }
    }
L_001a75a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001a75a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000030u, 1, 0);
    }
L_001a75a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001a75ac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001a75e4;
        }
    }
L_001a75b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001a75b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a75e4;
        }
    }
L_001a75b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001a75bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a75e4;
        }
    }
L_001a75c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a75c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_001a75c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a75e4;
        }
    }
L_001a75cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a75d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a75d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a75d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a75dc:;
    {
        cpu->r[14] = 0x001a75e0u; fn_000ad8a0(cpu);
    }
L_001a75e0:;
    {
        goto L_001a7618;
    }
L_001a75e4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x26u);
    }
L_001a75e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a75ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a75fc;
        }
    }
L_001a75f0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x27u);
    }
L_001a75f4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a75f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a76d8;
        }
    }
L_001a75fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001a7600:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a7604:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a7608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a760c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a7610:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a7614:;
    {
        cpu->r[14] = 0x001a7618u; fn_000ad8a0(cpu);
    }
L_001a7618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001a761c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001a7620:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a7680;
        }
    }
L_001a7624:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_001a7628:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a762c:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001a7630:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7634:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001a7638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a764c;
        }
    }
L_001a763c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 0);
    }
L_001a7640:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000019u, 1, 1);
    }
L_001a7644:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = 0x00000020u;
        }
    }
L_001a7648:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a764c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a7650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001a7654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a7658:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_001a765c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_001a7660:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x14u;
        wr8(cpu->r[1] + - 0x14u, cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_001a7664:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_001a7668:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a766c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a7670:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a7674:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a7678:;
    {
        cpu->r[14] = 0x001a767cu; fn_000ad83c(cpu);
    }
L_001a767c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001a7680:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001a7684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7694;
        }
    }
L_001a7688:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001a768c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7690:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a769c;
        }
    }
L_001a7694:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001a7698:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a769cu)) return;
    }
L_001a769c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a76a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001a76a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a76a8:;
    {
        cpu->r[14] = 0x001a76acu; fn_000ae3d0(cpu);
    }
L_001a76ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a76b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a76b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a76b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a76bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000du, 0, 0);
    }
L_001a76c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000023u, 0, 0);
    }
L_001a76c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a76c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a76cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a76d0:;
    {
        cpu->r[14] = 0x001a76d4u; fn_000ad19c(cpu);
    }
L_001a76d4:;
    {
        goto L_001a7694;
    }
L_001a76d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001a76dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a76e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a76e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a76e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a76ec:;
    {
        cpu->r[14] = 0x001a76f0u; fn_000ad8a0(cpu);
    }
L_001a76f0:;
    {
        goto L_001a7618;
    }
}

/* _ZN19OnlineKeyboardInput4DrawEv @ 001a76fc (arm) */
void fn_001a76fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a76fc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_001a7700:;
    {
        cpu->r[2] = rd32(0x001a7708u + + 0xd8u);
    }
L_001a7704:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7708:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001a770c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a7714u, cpu->r[2], 0, 0);
    }
L_001a7710:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a7714:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a7718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7790;
        }
    }
L_001a771c:;
    {
        cpu->r[1] = rd32(0x001a7724u + + 0xc0u);
    }
L_001a7720:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001a7724:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a7728:;
    {
        cpu->r[2] = 0x00001158u;
    }
L_001a772c:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_001a7730:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001a7734:;
    {
        cpu->r[1] = 0x000067b4u;
    }
L_001a7738:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_001a773c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a7740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a77b0;
        }
    }
L_001a7744:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xdu);
    }
L_001a7748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a774c:;
    {
        cpu->r[3] = 0x00001148u;
    }
L_001a7750:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7798;
        }
    }
L_001a7758:;
    {
        cpu->r[3] = 0x0000114cu;
    }
L_001a775c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000008b0u, 0, 0);
    }
L_001a7760:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7764:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001a7768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7790;
        }
    }
L_001a776c:;
    {
        cpu->r[7] = 0x00001160u;
    }
L_001a7770:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a7774:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001a7778:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a777c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001a7780:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[7]);
    }
L_001a7784:;
    {
        cpu->r[14] = 0x001a7788u; fn_001a7560(cpu);
    }
L_001a7788:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001a778c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7770;
        }
    }
L_001a7790:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a7794:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7798u)) return;
    }
L_001a7798:;
    {
        cpu->r[3] = 0x00001160u;
    }
L_001a779c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001a77a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a77a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
        }
    }
L_001a77a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7764;
        }
    }
L_001a77ac:;
    {
        goto L_001a7758;
    }
L_001a77b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001a77b4:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001a77b8:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_001a77bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a77c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a77c4:;
    {
        cpu->r[14] = 0x001a77c8u; fn_000ad8a0(cpu);
    }
L_001a77c8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xdu);
    }
L_001a77cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a77d0:;
    {
        cpu->r[3] = 0x00001148u;
    }
L_001a77d4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a77d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7758;
        }
    }
L_001a77dc:;
    {
        goto L_001a7798;
    }
}

/* _ZN19OnlineKeyboardInput10LostForcusEv @ 001a77e8 (arm) */
void fn_001a77e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a77e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a77ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a77f0:;
    {
        cpu->r[4] = 0x00001154u;
    }
L_001a77f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a77f8:;
    {
        cpu->r[14] = 0x001a77fcu; fn_001a6928(cpu);
    }
L_001a77fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a7800:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001a7804:;
    {
        cpu->r[14] = 0x001a7808u; fn_001a7df8(cpu);
    }
L_001a7808:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a780c:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_001a7810:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7814u)) return;
    }
}

/* _ZN19OnlineKeyboardInput10touchEndedERK10position2dl @ 001a7814 (arm) */
void fn_001a7814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7814:;
    {
        cpu->r[3] = 0x00001154u;
    }
L_001a7818:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a781c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a7820:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a7824:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7900;
        }
    }
L_001a782c:;
    {
        cpu->r[2] = 0x00001158u;
    }
L_001a7830:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_001a7834:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[2]);
    }
L_001a7838:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a783c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a78dc;
        }
    }
L_001a7840:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001a7844:;
    {
        cpu->r[1] = 0x0000115au;
    }
L_001a7848:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[1]);
    }
L_001a784c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a7850:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a78dc;
        }
    }
L_001a7854:;
    {
        cpu->r[1] = 0x0000115cu;
    }
L_001a7858:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[1]);
    }
L_001a785c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001a7860:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a78dc;
        }
    }
L_001a7864:;
    {
        cpu->r[3] = 0x0000115eu;
    }
L_001a7868:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[3]);
    }
L_001a786c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a7870:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a78dc;
        }
    }
L_001a7874:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a7878:;
    {
        cpu->r[14] = 0x001a787cu; fn_001a7df8(cpu);
    }
L_001a787c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xdu);
    }
L_001a7880:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7884:;
    {
        cpu->r[3] = 0x00001148u;
    }
L_001a7888:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
        }
    }
L_001a788c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000008b0u, 0, 0);
        }
    }
L_001a7890:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7894:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000114cu;
        }
    }
L_001a7898:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_001a789c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001a78a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7900;
        }
    }
L_001a78a4:;
    {
        cpu->r[8] = 0x00001154u;
    }
L_001a78a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a78ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a78b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a78b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a78b8:;
    {
        cpu->r[14] = 0x001a78bcu; fn_001a73a8(cpu);
    }
L_001a78bc:;
    {
        wr8(cpu->r[4] + + 0x26u, cpu->r[7]);
    }
L_001a78c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a78c4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001a78c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a78ac;
        }
    }
L_001a78cc:;
    {
        cpu->r[3] = 0x00001150u;
    }
L_001a78d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a78d4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001a78d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a78dcu)) return;
    }
L_001a78dc:;
    {
        cpu->r[4] = 0x00001154u;
    }
L_001a78e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a78e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a78e8:;
    {
        cpu->r[14] = 0x001a78ecu; fn_001a6928(cpu);
    }
L_001a78ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001a78f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a78f4:;
    {
        cpu->r[14] = 0x001a78f8u; fn_001a7df8(cpu);
    }
L_001a78f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a78fc:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_001a7900:;
    {
        cpu->r[3] = 0x00001150u;
    }
L_001a7904:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7908:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001a790c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7910u)) return;
    }
}

/* _ZN19OnlineKeyboardInput17SetCurrentTextBoxEP15OnlineTextInput @ 001a7910 (arm) */
void fn_001a7910(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7910:;
    {
        cpu->r[3] = 0x00001154u;
    }
L_001a7914:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7918:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a791c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a7920:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a7924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7934;
        }
    }
L_001a792c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a7930:;
    {
        cpu->r[14] = 0x001a7934u; fn_001a7df8(cpu);
    }
L_001a7934:;
    {
        cpu->r[3] = 0x00001154u;
    }
L_001a7938:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a793c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a7940:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001a7944:;
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
L_001a7948:;
    {
        return fn_001a7df8(cpu);
    }
}

/* _ZN19OnlineKeyboardInput4InitEiiii @ 001a794c (arm) */
void fn_001a794c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a794c:;
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
L_001a7950:;
    {
        cpu->r[5] = rd32(0x001a7958u + + 0x144u);
    }
L_001a7954:;
    {
        cpu->r[6] = rd32(0x001a795cu + + 0x144u);
    }
L_001a7958:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a795c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a7964u, cpu->r[5], 0, 0);
    }
L_001a7960:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a7964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001a7968:;
    {
        cpu->r[14] = 0x0000115cu;
    }
L_001a796c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a7970:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001a7974:;
    {
        wr16(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_001a7978:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001a797c:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_001a7980:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001a7984:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001a7988:;
    {
        { uint32_t v = cpu->r[12] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a798c:;
    {
        cpu->r[12] = 0x00001158u;
    }
L_001a7990:;
    {
        wr16(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001a7994:;
    {
        cpu->r[1] = 0x0000115au;
    }
L_001a7998:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001a799c:;
    {
        cpu->r[2] = 0x0000115eu;
    }
L_001a79a0:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001a79a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7a1c;
        }
    }
L_001a79a8:;
    {
        cpu->r[7] = rd32(0x001a79b0u + + 0xf4u);
    }
L_001a79ac:;
    {
        cpu->r[3] = rd32(0x001a79b4u + + 0xf4u);
    }
L_001a79b0:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a79b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a79b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a79bc:;
    {
        cpu->r[14] = 0x001a79c0u; fn_00096a08(cpu);
    }
L_001a79c0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a79c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a79c8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a79cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a79d0:;
    {
        cpu->r[14] = 0x001a79d4u; fn_0018aa44(cpu);
    }
L_001a79d4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a79d8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a79dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a79e0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001a79e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7a60;
        }
    }
L_001a79e8:;
    {
        cpu->r[1] = 0x00000056u;
    }
L_001a79ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a79f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a79f4:;
    {
        cpu->r[14] = 0x001a79f8u; fn_0018aa44(cpu);
    }
L_001a79f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a79fc:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[3]);
    }
L_001a7a00:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001a7a04:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001a7a08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a7a0c:;
    {
        cpu->r[14] = 0x001a7a10u; fn_001a6e04(cpu);
    }
L_001a7a10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a7a14:;
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
L_001a7a18:;
    {
        return fn_001a6af8(cpu);
    }
L_001a7a1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a7a20:;
    {
        cpu->r[14] = 0x001a7a24u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a7a24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a79a8;
        }
    }
L_001a7a2c:;
    {
        cpu->r[7] = rd32(0x001a7a34u + + 0x70u);
    }
L_001a7a30:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a7a34:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a7a38:;
    {
        cpu->r[14] = 0x001a7a3cu; fn_0018aa20(cpu);
    }
L_001a7a3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a7a40:;
    {
        cpu->r[14] = 0x001a7a44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a7a44:;
    {
        cpu->r[3] = rd32(0x001a7a4cu + + 0x60u);
    }
L_001a7a48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a7a4c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7a50:;
    {
        cpu->r[3] = rd32(0x001a7a58u + + 0x58u);
    }
L_001a7a54:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7a58:;
    {
        cpu->r[14] = 0x001a7a5cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a7a5c:;
    {
        goto L_001a79ac;
    }
L_001a7a60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7a64:;
    {
        cpu->r[14] = 0x001a7a68u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a7a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a79e8;
        }
    }
L_001a7a70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a7a74:;
    {
        cpu->r[14] = 0x001a7a78u; fn_0018aa20(cpu);
    }
L_001a7a78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7a7c:;
    {
        cpu->r[14] = 0x001a7a80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a7a80:;
    {
        cpu->r[3] = rd32(0x001a7a88u + + 0x24u);
    }
L_001a7a84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a7a88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7a8c:;
    {
        cpu->r[3] = rd32(0x001a7a94u + + 0x1cu);
    }
L_001a7a90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a7a94:;
    {
        cpu->r[14] = 0x001a7a98u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a7a98:;
    {
        goto L_001a79e8;
    }
}

/* _ZN15OnlineTextInputC2Ev @ 001a7ab4 (arm) */
void fn_001a7ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7ab4:;
    {
        cpu->r[2] = rd32(0x001a7abcu + + 0x3cu);
    }
L_001a7ab8:;
    {
        cpu->r[12] = 0x0000011cu;
    }
L_001a7abc:;
    {
        cpu->r[1] = rd32(0x001a7ac4u + + 0x38u);
    }
L_001a7ac0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a7ac8u, cpu->r[2], 0, 0);
    }
L_001a7ac4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a7ac8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7acc:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001a7ad0:;
    {
        cpu->r[12] = 0x0000011eu;
    }
L_001a7ad4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001a7ad8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001a7adc:;
    {
        cpu->r[1] = 0x00000120u;
    }
L_001a7ae0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001a7ae4:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001a7ae8:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001a7aec:;
    {
        cpu->r[1] = 0x00000122u;
    }
L_001a7af0:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001a7af4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInputC1Ev @ 001a7b00 (arm) */
void fn_001a7b00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b00:;
    {
        cpu->r[2] = rd32(0x001a7b08u + + 0x3cu);
    }
L_001a7b04:;
    {
        cpu->r[12] = 0x0000011cu;
    }
L_001a7b08:;
    {
        cpu->r[1] = rd32(0x001a7b10u + + 0x38u);
    }
L_001a7b0c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a7b14u, cpu->r[2], 0, 0);
    }
L_001a7b10:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a7b14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7b18:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001a7b1c:;
    {
        cpu->r[12] = 0x0000011eu;
    }
L_001a7b20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001a7b24:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001a7b28:;
    {
        cpu->r[1] = 0x00000120u;
    }
L_001a7b2c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001a7b30:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001a7b34:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001a7b38:;
    {
        cpu->r[1] = 0x00000122u;
    }
L_001a7b3c:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001a7b40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInputD2Ev @ 001a7b4c (arm) */
void fn_001a7b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInputD1Ev @ 001a7b50 (arm) */
void fn_001a7b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput16mySetOrientationEiiiii @ 001a7b54 (arm) */
void fn_001a7b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput6EnableEv @ 001a7b58 (arm) */
void fn_001a7b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput7DisableEv @ 001a7b5c (arm) */
void fn_001a7b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput6RemoveEv @ 001a7b60 (arm) */
void fn_001a7b60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput6UpdateEv @ 001a7b64 (arm) */
void fn_001a7b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput10touchBeganERK10position2dl @ 001a7b68 (arm) */
void fn_001a7b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput10touchMovedERK10position2dl @ 001a7b6c (arm) */
void fn_001a7b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput13IsPointInsideER10position2d @ 001a7b70 (arm) */
void fn_001a7b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7b70:;
    {
        cpu->r[2] = 0x0000011cu;
    }
L_001a7b74:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_001a7b78:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_001a7b7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a7b80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a7bc0;
        }
    }
L_001a7b84:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001a7b88:;
    {
        cpu->r[1] = 0x0000011eu;
    }
L_001a7b8c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a7b90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a7b94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a7bc0;
        }
    }
L_001a7b98:;
    {
        cpu->r[1] = 0x00000120u;
    }
L_001a7b9c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a7ba0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001a7ba4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a7bc0;
        }
    }
L_001a7ba8:;
    {
        cpu->r[3] = 0x00000122u;
    }
L_001a7bac:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a7bb0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001a7bb4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a7bb8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a7bbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001a7bc0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001a7bc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput14touchCancelledERK10position2dl @ 001a7bc8 (arm) */
void fn_001a7bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7bc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput9GetLengthEv @ 001a7bcc (arm) */
void fn_001a7bcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7bcc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001a7bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7bd4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001a7bd8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001a7bdc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001a7be0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001a7be4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a7be8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001a7bec:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1cu);
    }
L_001a7bf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a7bf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7be4;
        }
    }
L_001a7bf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput4CopyEPc @ 001a7bfc (arm) */
void fn_001a7bfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7bfc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001a7c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7c04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001a7c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7c28;
        }
    }
L_001a7c0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7c10:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_001a7c14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001a7c18:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1du);
    }
L_001a7c1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001a7c20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7c10;
        }
    }
L_001a7c28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7c2c:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_001a7c30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput4CopyEPt @ 001a7c34 (arm) */
void fn_001a7c34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7c34:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001a7c38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7c3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001a7c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7c64;
        }
    }
L_001a7c44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7c48:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[12] = v;
    }
L_001a7c4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001a7c50:;
    {
        wr16(cpu->r[1] + cpu->r[12], cpu->r[3]);
    }
L_001a7c54:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1du);
    }
L_001a7c58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001a7c5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7c60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7c48;
        }
    }
L_001a7c64:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001a7c68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7c6c:;
    {
        wr16(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_001a7c70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput5RightEPci @ 001a7c74 (arm) */
void fn_001a7c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7c74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7c78:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001a7c7c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a7c80:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a7c84:;
    {
        cpu->r[14] = 0x001a7c88u; fn_001a7bcc(cpu);
    }
L_001a7c88:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001a7c8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a7cac;
        }
    }
L_001a7c90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001a7c94:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001a7c98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001cu, 0, 0);
    }
L_001a7c9c:;
    {
        uint32_t wb_tmp = cpu->r[2] + - 0x1u;
        cpu->r[1] = rd8(cpu->r[2] + - 0x1u);
        cpu->r[2] = wb_tmp;
    }
L_001a7ca0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001a7ca4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a7ca8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001a7c9c;
        }
    }
L_001a7cac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001a7cb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7cb4:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[3]);
    }
L_001a7cb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7cbcu)) return;
    }
}

/* _ZN15OnlineTextInput5RightEPti @ 001a7cbc (arm) */
void fn_001a7cbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7cbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7cc0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001a7cc4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a7cc8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a7ccc:;
    {
        cpu->r[14] = 0x001a7cd0u; fn_001a7bcc(cpu);
    }
L_001a7cd0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001a7cd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a7d08;
        }
    }
L_001a7cd8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 0);
    }
L_001a7cdc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001a7ce0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001a7ce4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7ce8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001a7cec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001a7cf0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001a7cf4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_001a7cf8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x1cu);
    }
L_001a7cfc:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_001a7d00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_001a7d04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7cec;
        }
    }
L_001a7d08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001a7d0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7d10:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[3]);
    }
L_001a7d14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7d18u)) return;
    }
}

/* _ZN15OnlineTextInput7GetTextEv @ 001a7d18 (arm) */
void fn_001a7d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_001a7d1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput11GetAnsiTextEPc @ 001a7d20 (arm) */
void fn_001a7d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7d20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7d24:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001a7d28:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a7d2c:;
    {
        cpu->r[14] = 0x001a7d30u; fn_001a7bcc(cpu);
    }
L_001a7d30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a7d34:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a7d38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a7d58;
        }
    }
L_001a7d3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7d40:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x1cu);
    }
L_001a7d44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a7d48:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a7d4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a7d50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001a7d54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7d40;
        }
    }
L_001a7d58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7d5c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a7d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7d64u)) return;
    }
}

/* _ZN15OnlineTextInput6OnCharEi @ 001a7d64 (arm) */
void fn_001a7d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7d64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7d68:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a7d6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a7d70:;
    {
        cpu->r[14] = 0x001a7d74u; fn_001a7bcc(cpu);
    }
L_001a7d74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_001a7d78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7d7c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001a7d80:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001a7d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7dcc;
        }
    }
L_001a7d88:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_001a7d8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7de0;
        }
    }
L_001a7d90:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x124u);
    }
L_001a7d94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7dac;
        }
    }
L_001a7d9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x00000030u, 1, 0);
    }
L_001a7da0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_001a7da4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
        }
    }
L_001a7da8:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7dacu)) return;
        }
    }
L_001a7dac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000011u, 1, 1);
    }
L_001a7db0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7db4u)) return;
        }
    }
L_001a7db4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001a7db8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a7dbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000019u, 0, 0);
    }
L_001a7dc0:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001a7dc4:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001a7dc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7dccu)) return;
    }
L_001a7dcc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001a7dd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
        }
    }
L_001a7dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000017u, 0, 0);
        }
    }
L_001a7dd8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001a7ddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7de0u)) return;
    }
L_001a7de0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a7de4:;
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
L_001a7de8:;
    {
        return fn_001a77e8(cpu);
    }
}

/* _ZN15OnlineTextInput9ClearTextEv @ 001a7dec (arm) */
void fn_001a7dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7dec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7df0:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001a7df4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineTextInput9SetActiveEb @ 001a7df8 (arm) */
void fn_001a7df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7df8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a7dfc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a7e00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a7e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7e14;
        }
    }
L_001a7e08:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a7e0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a7e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a7e1c;
        }
    }
L_001a7e14:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[5]);
    }
L_001a7e18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e1cu)) return;
    }
L_001a7e1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001a7e20:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a7e24:;
    {
        cpu->r[14] = 0x001a7e28u; fn_001a6928(cpu);
    }
L_001a7e28:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[5]);
    }
L_001a7e2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e30u)) return;
    }
}

/* _ZN15OnlineTextInput10touchEndedERK10position2dl @ 001a7e30 (arm) */
void fn_001a7e30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7e30:;
    {
        cpu->r[2] = 0x0000011cu;
    }
L_001a7e34:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_001a7e38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a7e3c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_001a7e40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a7e44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a7e48:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e4cu)) return;
        }
    }
L_001a7e4c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001a7e50:;
    {
        cpu->r[1] = 0x0000011eu;
    }
L_001a7e54:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a7e58:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a7e5c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e60u)) return;
        }
    }
L_001a7e60:;
    {
        cpu->r[1] = 0x00000120u;
    }
L_001a7e64:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a7e68:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001a7e6c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e70u)) return;
        }
    }
L_001a7e70:;
    {
        cpu->r[3] = 0x00000122u;
    }
L_001a7e74:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a7e78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a7e7c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7e80u)) return;
        }
    }
L_001a7e80:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a7e84:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[1]);
    }
L_001a7e88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001a7e8c:;
    {
        cpu->r[14] = 0x001a7e90u; fn_001a6928(cpu);
    }
L_001a7e90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001a7e94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a7e98:;
    {
        cpu->r[14] = 0x001a7e9cu; fn_001a7910(cpu);
    }
L_001a7e9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7ea0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001a7ea4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7ea8u)) return;
    }
}

/* _ZN15OnlineTextInput4DrawEv @ 001a7ea8 (arm) */
void fn_001a7ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7ea8:;
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
L_001a7eac:;
    {
        cpu->r[10] = rd32(0x001a7eb4u + + 0x354u);
    }
L_001a7eb0:;
    {
        cpu->r[1] = rd32(0x001a7eb8u + + 0x354u);
    }
L_001a7eb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000124u, 1, 0);
    }
L_001a7eb8:;
    {
        cpu->r[10] = add_flags(cpu, 0x001a7ec0u, cpu->r[10], 0, 0);
    }
L_001a7ebc:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a7ec0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a7ec4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a7ec8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_001a7ecc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a7ed0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001a7ed4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000000eu;
        }
    }
L_001a7ed8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001a7edc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000000fu;
        }
    }
L_001a7ee0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a7ee4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a7ee8:;
    {
        wr32(cpu->r[13] + + 0x11cu, cpu->r[3]);
    }
L_001a7eec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000011cu;
        }
    }
L_001a7ef0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000011cu;
        }
    }
L_001a7ef4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
        }
    }
L_001a7ef8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
        }
    }
L_001a7efc:;
    {
        cpu->r[3] = 0x0000011eu;
    }
L_001a7f00:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001a7f04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a7f08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a7f0c:;
    {
        cpu->r[14] = 0x001a7f10u; fn_000ad8a0(cpu);
    }
L_001a7f10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7f14:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a7f18:;
    {
        cpu->r[14] = 0x001a7f1cu; fn_001a7bfc(cpu);
    }
L_001a7f1c:;
    {
        cpu->r[5] = rd8(cpu->r[6] + + 0xcu);
    }
L_001a7f20:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001a7f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a80bc;
        }
    }
L_001a7f28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7f2c:;
    {
        cpu->r[14] = 0x001a7f30u; fn_001a7bcc(cpu);
    }
L_001a7f30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a7f34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7f38:;
    {
        cpu->r[14] = 0x001a7f3cu; fn_001a7bcc(cpu);
    }
L_001a7f3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001a7f40:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001a7f44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a7f80;
        }
    }
L_001a7f48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7f4c:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_001a7f50:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a7f54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a7f58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001a7f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7f50;
        }
    }
L_001a7f60:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_001a7f64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001a7f68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_001a7f6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
        }
    }
L_001a7f70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
        }
    }
L_001a7f74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_001a7f78:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1cu);
        }
    }
L_001a7f7c:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[3] + - 0x104u, cpu->r[2]);
        }
    }
L_001a7f80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a7f84:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001a7f88:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001a7f8c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a7f90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a7f94:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a7f98:;
    {
        cpu->r[14] = 0x001a7f9cu; fn_000ab040(cpu);
    }
L_001a7f9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a7fa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000178u, 1, 1);
    }
L_001a7fa4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a8044;
        }
    }
L_001a7fa8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000005u, 1, 1);
    }
L_001a7fac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7fb0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000005u;
        }
    }
L_001a7fb4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001a7fb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a800c;
        }
    }
L_001a7fbc:;
    {
        cpu->r[5] = 0x00000005u;
    }
L_001a7fc0:;
    {
        cpu->r[11] = 0x00000176u;
    }
L_001a7fc4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a7fc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7fcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a7fd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a7fd4:;
    {
        cpu->r[14] = 0x001a7fd8u; fn_001a7c74(cpu);
    }
L_001a7fd8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a7fdc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001a7fe0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a7fe4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a7fe8:;
    {
        cpu->r[14] = 0x001a7fecu; fn_000ab040(cpu);
    }
L_001a7fec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a7ff0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_001a7ff4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a7ff8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a7ffc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001a8000:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a8004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a8008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7fc4;
        }
    }
L_001a800c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001a8010:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8014:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8018:;
    {
        cpu->r[14] = 0x001a801cu; fn_001a7c74(cpu);
    }
L_001a801c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8020:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_001a8024:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a8028:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001a802c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a8030:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001a8034:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a8024;
        }
    }
L_001a8038:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001a803c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000027u, 1, 1);
    }
L_001a8040:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a819c;
        }
    }
L_001a8044:;
    {
        cpu->r[3] = 0x0000011cu;
    }
L_001a8048:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a804c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8050:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001a8054:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001a8058:;
    {
        cpu->r[3] = 0x0000011eu;
    }
L_001a805c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001a8060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000013u, 0, 0);
    }
L_001a8064:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a8068:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a806c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_001a8070:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a8074:;
    {
        cpu->r[14] = 0x001a8078u; fn_000ad83c(cpu);
    }
L_001a8078:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001a807c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000027u, 1, 1);
    }
L_001a8080:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001a8084:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
        }
    }
L_001a8088:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0xdu);
    }
L_001a808c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a8090:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_001a8094:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
        }
    }
L_001a8098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a8164;
        }
    }
L_001a809c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a80a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x11cu);
    }
L_001a80a4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_001a80a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a80ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a80b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a8204;
        }
    }
L_001a80b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000124u, 0, 0);
    }
L_001a80b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a80bcu)) return;
    }
L_001a80bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a80c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001a80c4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001a80c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a80cc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a80d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a80d4:;
    {
        cpu->r[14] = 0x001a80d8u; fn_000ab040(cpu);
    }
L_001a80d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a80dc:;
    {
        cpu->r[14] = 0x001a80e0u; fn_001a7bcc(cpu);
    }
L_001a80e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a80e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000178u, 1, 1);
    }
L_001a80e8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001a80ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a8044;
        }
    }
L_001a80f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_001a80f4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001a80f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000005u;
        }
    }
L_001a80fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a8150;
        }
    }
L_001a8100:;
    {
        cpu->r[5] = 0x00000005u;
    }
L_001a8104:;
    {
        cpu->r[11] = 0x00000176u;
    }
L_001a8108:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a810c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8110:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8114:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a8118:;
    {
        cpu->r[14] = 0x001a811cu; fn_001a7c74(cpu);
    }
L_001a811c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a8120:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001a8124:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a8128:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a812c:;
    {
        cpu->r[14] = 0x001a8130u; fn_000ab040(cpu);
    }
L_001a8130:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a8134:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_001a8138:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a813c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a8140:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001a8144:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a8148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a814c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a8108;
        }
    }
L_001a8150:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001a8154:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8158:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a815c:;
    {
        cpu->r[14] = 0x001a8160u; fn_001a7c74(cpu);
    }
L_001a8160:;
    {
        goto L_001a8044;
    }
L_001a8164:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001a8168:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a816c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a8170:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a8174:;
    {
        cpu->r[14] = 0x001a8178u; fn_000ab040(cpu);
    }
L_001a8178:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001a817c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001a8180:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a81b4;
        }
    }
L_001a8184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a8188:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_001a818c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001a8190:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a8194:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
        }
    }
L_001a8198:;
    {
        goto L_001a809c;
    }
L_001a819c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_001a81a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_001a81a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001a81a8:;
    {
        cpu->r[3] = rd8(cpu->r[9] + + 0x1bu);
    }
L_001a81ac:;
    {
        wr8(cpu->r[1] + - 0x104u, cpu->r[3]);
    }
L_001a81b0:;
    {
        goto L_001a8044;
    }
L_001a81b4:;
    {
        cpu->r[3] = 0x0000011cu;
    }
L_001a81b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a81bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001a81c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a81c4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001a81c8:;
    {
        cpu->r[3] = 0x0000011eu;
    }
L_001a81cc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000013u, 0, 0);
    }
L_001a81d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a81d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001a81d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001a81dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a81e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001fu, 0, 0);
    }
L_001a81e4:;
    {
        wr8(cpu->r[13] + + 0x19u, cpu->r[12]);
    }
L_001a81e8:;
    {
        cpu->r[12] = 0x0000005fu;
    }
L_001a81ec:;
    {
        wr8(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a81f0:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001a81f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a81f8:;
    {
        cpu->r[14] = 0x001a81fcu; fn_000ad83c(cpu);
    }
L_001a81fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001a8200:;
    {
        goto L_001a8184;
    }
L_001a8204:;
    {
        cpu->r[14] = 0x001a8208u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001a8208:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[8], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001a820c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN15OnlineTextInput4InitEPcjiiiibiP19OnlineKeyboardInput @ 001a8210 (arm) */
void fn_001a8210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8210:;
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
L_001a8214:;
    {
        cpu->r[5] = rd32(0x001a821cu + + 0x17cu);
    }
L_001a8218:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a821c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001a8220:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a8228u, cpu->r[5], 0, 0);
    }
L_001a8224:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001a8228:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a822c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a8230:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a8234:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x34u);
    }
L_001a8238:;
    {
        goto L_001a8248;
    }
L_001a823c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[7]);
    }
L_001a8240:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001a8244:;
    {
        wr8(cpu->r[8] + + 0x1bu, cpu->r[3]);
    }
L_001a8248:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a824c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001a8250:;
    {
        cpu->r[14] = 0x001a8254u; imp_strlen(cpu); /* strlen */
    }
L_001a8254:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001a8258:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001a823c;
        }
    }
L_001a825c:;
    {
        cpu->r[7] = rd32(0x001a8264u + + 0x138u);
    }
L_001a8260:;
    {
        cpu->r[3] = 0x00000120u;
    }
L_001a8264:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a8268:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a826c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a8270:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_001a8274:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a8278:;
    {
        cpu->r[2] = 0x00000122u;
    }
L_001a827c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_001a8280:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8284:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a8288:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001a828c:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[11]);
    }
L_001a8290:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a8294:;
    {
        cpu->r[2] = 0x0000011cu;
    }
L_001a8298:;
    {
        wr8(cpu->r[4] + + 0x124u, cpu->r[3]);
    }
L_001a829c:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[9]);
    }
L_001a82a0:;
    {
        cpu->r[2] = 0x0000011eu;
    }
L_001a82a4:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[3]);
    }
L_001a82a8:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[10]);
    }
L_001a82ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8318;
        }
    }
L_001a82b0:;
    {
        cpu->r[6] = rd32(0x001a82b8u + + 0xe8u);
    }
L_001a82b4:;
    {
        cpu->r[3] = rd32(0x001a82bcu + + 0xe8u);
    }
L_001a82b8:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a82bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a82c0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a82c4:;
    {
        cpu->r[14] = 0x001a82c8u; fn_00096a08(cpu);
    }
L_001a82c8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a82cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a82d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a82d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a82d8:;
    {
        cpu->r[14] = 0x001a82dcu; fn_0018aa44(cpu);
    }
L_001a82dc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a82e0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a82e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a82e8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001a82ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a835c;
        }
    }
L_001a82f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a82f4:;
    {
        cpu->r[1] = 0x00000056u;
    }
L_001a82f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a82fc:;
    {
        cpu->r[14] = 0x001a8300u; fn_0018aa44(cpu);
    }
L_001a8300:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a8304:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001a8308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a830c:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[3]);
    }
L_001a8310:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001a8314:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8318u)) return;
    }
L_001a8318:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a831c:;
    {
        cpu->r[14] = 0x001a8320u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8320:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8324:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a82b0;
        }
    }
L_001a8328:;
    {
        cpu->r[6] = rd32(0x001a8330u + + 0x70u);
    }
L_001a832c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a8330:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8334:;
    {
        cpu->r[14] = 0x001a8338u; fn_0018aa20(cpu);
    }
L_001a8338:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a833c:;
    {
        cpu->r[14] = 0x001a8340u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a8340:;
    {
        cpu->r[3] = rd32(0x001a8348u + + 0x60u);
    }
L_001a8344:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8348:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a834c:;
    {
        cpu->r[3] = rd32(0x001a8354u + + 0x58u);
    }
L_001a8350:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a8354:;
    {
        cpu->r[14] = 0x001a8358u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8358:;
    {
        goto L_001a82b4;
    }
L_001a835c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a8360:;
    {
        cpu->r[14] = 0x001a8364u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8364:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a82f0;
        }
    }
L_001a836c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8370:;
    {
        cpu->r[14] = 0x001a8374u; fn_0018aa20(cpu);
    }
L_001a8374:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a8378:;
    {
        cpu->r[14] = 0x001a837cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a837c:;
    {
        cpu->r[3] = rd32(0x001a8384u + + 0x24u);
    }
L_001a8380:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8384:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a8388:;
    {
        cpu->r[3] = rd32(0x001a8390u + + 0x1cu);
    }
L_001a838c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a8390:;
    {
        cpu->r[14] = 0x001a8394u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8394:;
    {
        goto L_001a82f0;
    }
}

/* _ZN19GS_ClientConnecting8isKindOfEi @ 001a83b0 (arm) */
void fn_001a83b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a83b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 1);
    }
L_001a83b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a83b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a83bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19GS_ClientConnecting17ApplyMenuSettingsEv @ 001a83c0 (arm) */
void fn_001a83c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a83c0:;
    {
        cpu->r[3] = rd32(0x001a83c8u + + 0x24u);
    }
L_001a83c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a83c8:;
    {
        cpu->r[1] = 0x000004b1u;
    }
L_001a83cc:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_001a83d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a83d8u, cpu->r[3], 0, 0);
    }
L_001a83d4:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_001a83d8:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001a83dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001a83e0:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001a83e4:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[1]);
    }
L_001a83e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_70 @ 001a83f0 (arm) */
void fn_001a83f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a83f0:;
    {
        cpu->r[3] = rd32(0x001a83f8u + + 0x44u);
    }
L_001a83f4:;
    {
        cpu->r[1] = rd32(0x001a83fcu + + 0x44u);
    }
L_001a83f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8400u, cpu->r[3], 0, 0);
    }
L_001a83fc:;
    {
        cpu->r[2] = rd32(0x001a8404u + + 0x40u);
    }
L_001a8400:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a8404:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a840cu, cpu->r[2], 0, 0);
    }
L_001a8408:;
    {
        cpu->r[1] = rd32(0x001a8410u + + 0x38u);
    }
L_001a840c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a8410:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a8414:;
    {
        cpu->r[3] = rd32(0x001a841cu + + 0x30u);
    }
L_001a8418:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001a841c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a8420:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8428u, cpu->r[3], 0, 0);
    }
L_001a8424:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001a8428:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_001a842c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001a8430:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001a8434:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001a8438:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19GS_ClientConnectingD1Ev @ 001a8450 (arm) */
void fn_001a8450(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8450:;
    {
        cpu->r[3] = rd32(0x001a8458u + + 0x24u);
    }
L_001a8454:;
    {
        cpu->r[2] = rd32(0x001a845cu + + 0x24u);
    }
L_001a8458:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8460u, cpu->r[3], 0, 0);
    }
L_001a845c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8460:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a8464:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8468:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a846c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a8470:;
    {
        cpu->r[14] = 0x001a8474u; fn_000ec21c(cpu);
    }
L_001a8474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a8478:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a847cu)) return;
    }
}

/* _ZN19GS_ClientConnecting6UpdateEv @ 001a8484 (arm) */
void fn_001a8484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8484:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x950u);
    }
L_001a8488:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001a848c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a8490:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a8494:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a8498:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a849c:;
    {
        cpu->r[14] = 0x001a84a4u;
    }
L_001a84a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a84a4u)) return;
    }
L_001a84a4:;
    {
        cpu->r[4] = rd32(0x001a84acu + + 0x260u);
    }
L_001a84a8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a84b0u, cpu->r[4], 0, 0);
    }
L_001a84ac:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a84b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8520;
        }
    }
L_001a84b4:;
    {
        cpu->r[3] = rd32(0x001a84bcu + + 0x254u);
    }
L_001a84b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a84bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a84c0:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001a84c4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a84c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a84cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a84f8;
        }
    }
L_001a84d0:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a84d4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a84d8:;
    {
        cpu->r[14] = 0x001a84dcu; fn_0018ba6c(cpu);
    }
L_001a84dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a84e0:;
    {
        cpu->r[14] = 0x001a84e4u; fn_001aa9c0(cpu);
    }
L_001a84e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a84e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a84ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a84f0:;
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
L_001a84f4:;
    {
        return fn_000f36dc(cpu);
    }
L_001a84f8:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a84fc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a8500:;
    {
        cpu->r[14] = 0x001a8504u; fn_0018ba6c(cpu);
    }
L_001a8504:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8508:;
    {
        cpu->r[14] = 0x001a850cu; fn_001a44cc(cpu);
    }
L_001a850c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8510:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8514:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a8518:;
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
L_001a851c:;
    {
        return fn_000f36dc(cpu);
    }
L_001a8520:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x950u);
    }
L_001a8524:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a8528:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a852c:;
    {
        cpu->r[14] = 0x001a8534u;
    }
L_001a8530:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8534u)) return;
    }
L_001a8534:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8584;
        }
    }
L_001a853c:;
    {
        cpu->r[3] = rd32(0x001a8544u + + 0x1ccu);
    }
L_001a8540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8544:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a8548:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001a854c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a8550:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a8554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a85b8;
        }
    }
L_001a8558:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a855c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a8560:;
    {
        cpu->r[14] = 0x001a8564u; fn_0018ba6c(cpu);
    }
L_001a8564:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a8568:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a856c:;
    {
        cpu->r[14] = 0x001a8570u; fn_001aaf48(cpu);
    }
L_001a8570:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8574:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8578:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a857c:;
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
L_001a8580:;
    {
        return fn_000f361c(cpu);
    }
L_001a8584:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x94u);
    }
L_001a8588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a858c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8660;
        }
    }
L_001a8590:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a8594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a85d0;
        }
    }
L_001a8598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a859c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a85b0;
        }
    }
L_001a85a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a85a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a85a8:;
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
L_001a85ac:;
    {
        return fn_00114a58(cpu);
    }
L_001a85b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a85b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a85b8u)) return;
    }
L_001a85b8:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a85bc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a85c0:;
    {
        cpu->r[14] = 0x001a85c4u; fn_0018ba6c(cpu);
    }
L_001a85c4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a85c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a85cc:;
    {
        goto L_001a856c;
    }
L_001a85d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a85d4:;
    {
        cpu->r[14] = 0x001a85d8u; fn_0010da28(cpu);
    }
L_001a85d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a85dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a85b0;
        }
    }
L_001a85e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_001a85e4:;
    {
        cpu->r[2] = 0x0000041du;
    }
L_001a85e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a85ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8670;
        }
    }
L_001a85f0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001a85f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a85f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a85b0;
        }
    }
L_001a85fc:;
    {
        cpu->r[6] = rd32(0x001a8604u + + 0x10cu);
    }
L_001a8600:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a8604:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a8608:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a860c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8610:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a8614:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a8618:;
    {
        cpu->r[14] = 0x001a861cu; fn_000fd224(cpu);
    }
L_001a861c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001a8620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a86ec;
        }
    }
L_001a8624:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8628:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001a862c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a8630:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a8634:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a8638:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001a863c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001a8640:;
    {
        cpu->r[14] = 0x001a8644u; fn_00096928(cpu);
    }
L_001a8644:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a8648:;
    {
        cpu->r[14] = 0x001a864cu; fn_0009992c(cpu);
    }
L_001a864c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a8650:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a8654:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a8658:;
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
L_001a865c:;
    {
        return fn_000f34e8(cpu);
    }
L_001a8660:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a8668:;
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
L_001a866c:;
    {
        return fn_00128a5c(cpu);
    }
L_001a8670:;
    {
        cpu->r[3] = rd32(0x001a8678u + + 0x98u);
    }
L_001a8674:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001a8678:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a867c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a8680:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a8684:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a8688:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001a868c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001a8690:;
    {
        cpu->r[14] = 0x001a8694u; fn_00096928(cpu);
    }
L_001a8694:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_001a8698:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001a869c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a86a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a86a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a86c4;
        }
    }
L_001a86a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a86ac:;
    {
        cpu->r[14] = 0x001a86b0u; fn_0009992c(cpu);
    }
L_001a86b0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a86b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a86b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a86bc:;
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
L_001a86c0:;
    {
        return fn_000f34e8(cpu);
    }
L_001a86c4:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a86c8:;
    {
        cpu->r[14] = 0x001a86ccu; fn_0018ba6c(cpu);
    }
L_001a86cc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a86d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a86d4:;
    {
        cpu->r[14] = 0x001a86d8u; fn_001aaf48(cpu);
    }
L_001a86d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a86dc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a86e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a86e4:;
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
L_001a86e8:;
    {
        return fn_000f361c(cpu);
    }
L_001a86ec:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a86f0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a86f4:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a86f8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a86fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a8700:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a8704:;
    {
        cpu->r[14] = 0x001a8708u; fn_000fd248(cpu);
    }
L_001a8708:;
    {
        goto L_001a8624;
    }
}

/* _ZN19GS_ClientConnecting8DoActionEii @ 001a8714 (arm) */
void fn_001a8714(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8714:;
    {
        cpu->r[3] = rd32(0x001a871cu + + 0x9cu);
    }
L_001a8718:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a871c:;
    {
        cpu->r[4] = rd32(0x001a8724u + + 0x98u);
    }
L_001a8720:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8728u, cpu->r[3], 0, 0);
    }
L_001a8724:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a8728:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001a872c:;
    {
        cpu->r[4] = 0x00005f53u;
    }
L_001a8730:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a8734:;
    {
        cpu->r[4] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_001a8738:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001a873c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8740u)) return;
        }
    }
L_001a8740:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a8744:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001a8748:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a874cu)) return;
        }
    }
L_001a874c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a8750:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001a8754:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a87a8;
        }
    }
L_001a8758:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001a875c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_001a8760:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001a8764:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
        }
    }
L_001a8768:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001a876c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_001a8770:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_001a8774:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_001a8778:;
    {
        cpu->r[2] = 0x0000041du;
    }
L_001a877c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001a8780:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[5]);
    }
L_001a8784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8788u)) return;
        }
    }
L_001a8788:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001a878c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001a8790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a8794:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001a8798:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_001a879c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a87a0u)) return;
        }
    }
L_001a87a0:;
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
L_001a87a4:;
    {
        return fn_0010df70(cpu);
    }
L_001a87a8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a87ac:;
    {
        cpu->r[14] = 0x001a87b4u;
    }
L_001a87b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a87b4u)) return;
    }
L_001a87b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a87b8u)) return;
    }
}

/* _ZN19GS_ClientConnectingC1Ev @ 001a87c0 (arm) */
void fn_001a87c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a87c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a87c4:;
    {
        cpu->r[4] = rd32(0x001a87ccu + + 0x38u);
    }
L_001a87c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a87cc:;
    {
        cpu->r[14] = 0x001a87d0u; fn_0010ffa8(cpu);
    }
L_001a87d0:;
    {
        cpu->r[2] = rd32(0x001a87d8u + + 0x30u);
    }
L_001a87d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a87dcu, cpu->r[4], 0, 0);
    }
L_001a87d8:;
    {
        cpu->r[3] = rd32(0x001a87e0u + + 0x2cu);
    }
L_001a87dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a87e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a87e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a87e8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a87ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a87f0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a87f4:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a87f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a87fc:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001a8800:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8804u)) return;
    }
}

/* _ZN19GS_ClientConnectingC2Ev @ 001a8810 (arm) */
void fn_001a8810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8810:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a8814:;
    {
        cpu->r[4] = rd32(0x001a881cu + + 0x38u);
    }
L_001a8818:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a881c:;
    {
        cpu->r[14] = 0x001a8820u; fn_0010ffa8(cpu);
    }
L_001a8820:;
    {
        cpu->r[2] = rd32(0x001a8828u + + 0x30u);
    }
L_001a8824:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a882cu, cpu->r[4], 0, 0);
    }
L_001a8828:;
    {
        cpu->r[3] = rd32(0x001a8830u + + 0x2cu);
    }
L_001a882c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8830:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a8834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8838:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a883c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a8840:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a8844:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a8848:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a884c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001a8850:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8854u)) return;
    }
}

/* _ZN19GS_ClientConnectingD0Ev @ 001a8860 (arm) */
void fn_001a8860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8860:;
    {
        cpu->r[3] = rd32(0x001a8868u + + 0x2cu);
    }
L_001a8864:;
    {
        cpu->r[2] = rd32(0x001a886cu + + 0x2cu);
    }
L_001a8868:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8870u, cpu->r[3], 0, 0);
    }
L_001a886c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8870:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a8874:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a887c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a8880:;
    {
        cpu->r[14] = 0x001a8884u; fn_000ec21c(cpu);
    }
L_001a8884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a8888:;
    {
        cpu->r[14] = 0x001a888cu; fn_0018ba20(cpu);
    }
L_001a888c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a8890:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8894u)) return;
    }
}

/* _ZN19GS_ClientConnecting6RenderEv @ 001a889c (arm) */
void fn_001a889c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a889c:;
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
L_001a88a0:;
    {
        cpu->r[4] = rd32(0x001a88a8u + + 0x31cu);
    }
L_001a88a4:;
    {
        cpu->r[3] = rd32(0x001a88acu + + 0x31cu);
    }
L_001a88a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000019cu, 1, 0);
    }
L_001a88ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a88b4u, cpu->r[4], 0, 0);
    }
L_001a88b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a88b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a88b8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a88bc:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001a88c0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a88c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a88c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8a80;
        }
    }
L_001a88cc:;
    {
        cpu->r[3] = rd32(0x001a88d4u + + 0x2f8u);
    }
L_001a88d0:;
    {
        cpu->r[7] = rd32(0x001a88d8u + + 0x2f8u);
    }
L_001a88d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a88d8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a88dc:;
    {
        cpu->r[14] = 0x001a88e0u; fn_0012f780(cpu);
    }
L_001a88e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a88e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a88e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a88ec:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001a88f0:;
    {
        cpu->r[14] = 0x001a88f4u; fn_00113570(cpu);
    }
L_001a88f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001a88f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a88fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a892c;
        }
    }
L_001a8900:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a8904:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a8908:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a890c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8910:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a8914:;
    {
        cpu->r[14] = 0x001a891cu;
    }
L_001a8918:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a891cu)) return;
    }
L_001a891c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001a8920:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a8924:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a8928:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a8904;
        }
    }
L_001a892c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8930:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a8934:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a8938:;
    {
        cpu->r[14] = 0x001a8940u;
    }
L_001a893c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8940u)) return;
    }
L_001a8940:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a8944:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8948:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a894c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a8950:;
    {
        cpu->r[14] = 0x001a8958u;
    }
L_001a8954:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8958u)) return;
    }
L_001a8958:;
    {
        cpu->r[3] = rd32(0x001a8960u + + 0x274u);
    }
L_001a895c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8960:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a8964:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a8968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8a3c;
        }
    }
L_001a896c:;
    {
        cpu->r[6] = rd32(0x001a8974u + + 0x264u);
    }
L_001a8970:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a8974:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a8978:;
    {
        cpu->r[14] = 0x001a897cu; fn_00096a08(cpu);
    }
L_001a897c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a8980:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_001a8984:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a8988:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a898c:;
    {
        cpu->r[14] = 0x001a8990u; fn_0018aa44(cpu);
    }
L_001a8990:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a8994:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a8998:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a899c:;
    {
        cpu->r[0] = 0x00000423u;
    }
L_001a89a0:;
    {
        cpu->r[14] = 0x001a89a4u; fn_000aeb58(cpu);
    }
L_001a89a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a89a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a89ac:;
    {
        cpu->r[14] = 0x001a89b0u; fn_000ae160(cpu);
    }
L_001a89b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a89b4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x54u);
    }
L_001a89b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a89bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a89c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a89c4:;
    {
        cpu->r[12] = rd16(cpu->r[3]);
    }
L_001a89c8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001a89cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_001a89d0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a89d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_001a89d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000003cu, 1, 0);
    }
L_001a89dc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a89e0:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[12]);
    }
L_001a89e4:;
    {
        cpu->r[14] = 0x001a89e8u; fn_000a9818(cpu);
    }
L_001a89e8:;
    {
        cpu->r[12] = rd32(0x001a89f0u + + 0x1ecu);
    }
L_001a89ec:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a89f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a89f4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001a89f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a89fc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001a8a00:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a8a04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001a8a08:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a8a0c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a8a10:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_001a8a14:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_001a8a18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001a8a1c:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001a8a20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a8a24:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a8a28:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a8a2c:;
    {
        cpu->r[14] = 0x001a8a30u; fn_000ac4bc(cpu);
    }
L_001a8a30:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[10]);
    }
L_001a8a34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000019cu, 0, 0);
    }
L_001a8a38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8a3cu)) return;
    }
L_001a8a3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8a40:;
    {
        cpu->r[14] = 0x001a8a44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8a44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a896c;
        }
    }
L_001a8a4c:;
    {
        cpu->r[6] = rd32(0x001a8a54u + + 0x184u);
    }
L_001a8a50:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8a54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8a58:;
    {
        cpu->r[14] = 0x001a8a5cu; fn_0018aa20(cpu);
    }
L_001a8a5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8a60:;
    {
        cpu->r[14] = 0x001a8a64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a8a64:;
    {
        cpu->r[3] = rd32(0x001a8a6cu + + 0x174u);
    }
L_001a8a68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8a6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8a70:;
    {
        cpu->r[3] = rd32(0x001a8a78u + + 0x16cu);
    }
L_001a8a74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8a78:;
    {
        cpu->r[14] = 0x001a8a7cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8a7c:;
    {
        goto L_001a8970;
    }
L_001a8a80:;
    {
        cpu->r[7] = rd32(0x001a8a88u + + 0x14cu);
    }
L_001a8a84:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a8a88:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a8a8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a8a90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8b44;
        }
    }
L_001a8a94:;
    {
        cpu->r[6] = rd32(0x001a8a9cu + + 0x13cu);
    }
L_001a8a98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8a9c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a8aa0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a8aa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8aa8:;
    {
        cpu->r[14] = 0x001a8aacu; fn_0018aa44(cpu);
    }
L_001a8aac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a8ab0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a8ab4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a8ab8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a8abc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a8ac0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a8ac4:;
    {
        cpu->r[14] = 0x001a8ac8u; fn_000ad8a0(cpu);
    }
L_001a8ac8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001a8acc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a8ad0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a8ad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8b88;
        }
    }
L_001a8ad8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001a8adc:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a8ae0:;
    {
        cpu->r[14] = 0x001a8ae4u; fn_00096a08(cpu);
    }
L_001a8ae4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a8ae8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a8aec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8af0:;
    {
        cpu->r[14] = 0x001a8af4u; fn_0018aa44(cpu);
    }
L_001a8af4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a8af8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a8afc:;
    {
        cpu->r[0] = 0x00000421u;
    }
L_001a8b00:;
    {
        cpu->r[14] = 0x001a8b04u; fn_000aeb58(cpu);
    }
L_001a8b04:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_001a8b08:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001a8b0c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a8b10:;
    {
        cpu->r[3] = rd32(0x001a8b18u + + 0xb8u);
    }
L_001a8b14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a8b18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8b1c:;
    {
        cpu->r[3] = rd32(0x001a8b24u + + 0xb8u);
    }
L_001a8b20:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a8b24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8b28:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a8b2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a8b30:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a8b34:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a8b38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8b3c:;
    {
        cpu->r[14] = 0x001a8b40u; fn_000ad19c(cpu);
    }
L_001a8b40:;
    {
        goto L_001a8a34;
    }
L_001a8b44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8b48:;
    {
        cpu->r[14] = 0x001a8b4cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8b4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8b50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8a94;
        }
    }
L_001a8b54:;
    {
        cpu->r[6] = rd32(0x001a8b5cu + + 0x7cu);
    }
L_001a8b58:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001a8b5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8b60:;
    {
        cpu->r[14] = 0x001a8b64u; fn_0018aa20(cpu);
    }
L_001a8b64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8b68:;
    {
        cpu->r[14] = 0x001a8b6cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a8b6c:;
    {
        cpu->r[3] = rd32(0x001a8b74u + + 0x6cu);
    }
L_001a8b70:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8b74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8b78:;
    {
        cpu->r[3] = rd32(0x001a8b80u + + 0x64u);
    }
L_001a8b7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8b80:;
    {
        cpu->r[14] = 0x001a8b84u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8b84:;
    {
        goto L_001a8a98;
    }
L_001a8b88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a8b8c:;
    {
        cpu->r[14] = 0x001a8b90u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8b90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8ad8;
        }
    }
L_001a8b98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8b9c:;
    {
        cpu->r[14] = 0x001a8ba0u; fn_0018aa20(cpu);
    }
L_001a8ba0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a8ba4:;
    {
        cpu->r[14] = 0x001a8ba8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a8ba8:;
    {
        cpu->r[3] = rd32(0x001a8bb0u + + 0x30u);
    }
L_001a8bac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a8bb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8bb4:;
    {
        cpu->r[3] = rd32(0x001a8bbcu + + 0x28u);
    }
L_001a8bb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8bbc:;
    {
        cpu->r[14] = 0x001a8bc0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8bc0:;
    {
        goto L_001a8ad8;
    }
}

/* _ZN20GS_ClientWaitingRoom8isKindOfEi @ 001a8be8 (arm) */
void fn_001a8be8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8be8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000057u, 1, 1);
    }
L_001a8bec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a8bf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a8bf4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ClientWaitingRoom17ApplyMenuSettingsEv @ 001a8bf8 (arm) */
void fn_001a8bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8bf8:;
    {
        cpu->r[3] = rd32(0x001a8c00u + + 0x48u);
    }
L_001a8bfc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a8c00:;
    {
        cpu->r[12] = rd32(0x001a8c08u + + 0x44u);
    }
L_001a8c04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8c0cu, cpu->r[3], 0, 0);
    }
L_001a8c08:;
    {
        cpu->r[2] = rd32(0x001a8c10u + + 0x40u);
    }
L_001a8c0c:;
    {
        wr8(cpu->r[0] + + 0x8fcu, cpu->r[1]);
    }
L_001a8c10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a8c14:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a8c1cu, cpu->r[2], 0, 0);
    }
L_001a8c18:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001a8c1c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001a8c20:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[12]);
    }
L_001a8c24:;
    {
        cpu->r[2] = 0x0000062eu;
    }
L_001a8c28:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_001a8c2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8c30:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_001a8c34:;
    {
        wr32(cpu->r[0] + + 0x970u, cpu->r[3]);
    }
L_001a8c38:;
    {
        cpu->r[3] = 0x000000fau;
    }
L_001a8c3c:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001a8c40:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[3]);
    }
L_001a8c44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ClientWaitingRoom8DoActionEii @ 001a8c54 (arm) */
void fn_001a8c54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8c54:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a8c58:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001a8c5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8c60:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001a8c64:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001a8c68:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8c6cu)) return;
        }
    }
L_001a8c6c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a8c70:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001a8c74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a8cb8;
        }
    }
L_001a8c78:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001a8c7c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_001a8c80:;
    {
        wr32(cpu->r[3] + + 0xc4u, cpu->r[1]);
    }
L_001a8c84:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001a8c88:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001a8c8c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_001a8c90:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[12]; cpu->r[12] = v;
        }
    }
L_001a8c94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001a8c98:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001a8c9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001a8ca0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001a8ca4:;
    {
        cpu->r[2] = 0x00000414u;
    }
L_001a8ca8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001a8cac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a8cb0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8f8u, cpu->r[2]);
        }
    }
L_001a8cb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8cb8u)) return;
    }
L_001a8cb8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a8cbc:;
    {
        cpu->r[14] = 0x001a8cc4u;
    }
L_001a8cc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8cc4u)) return;
    }
L_001a8cc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8cc8u)) return;
    }
}

/* _ZN20GS_ClientWaitingRoom19ProcessOnMousePinchEv @ 001a8cc8 (arm) */
void fn_001a8cc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8cc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_71 @ 001a8ccc (arm) */
void fn_001a8ccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8ccc:;
    {
        cpu->r[2] = rd32(0x001a8cd4u + + 0x34u);
    }
L_001a8cd0:;
    {
        cpu->r[0] = rd32(0x001a8cd8u + + 0x34u);
    }
L_001a8cd4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a8cdcu, cpu->r[2], 0, 0);
    }
L_001a8cd8:;
    {
        cpu->r[1] = rd32(0x001a8ce0u + + 0x30u);
    }
L_001a8cdc:;
    {
        cpu->r[3] = rd32(0x001a8ce4u + + 0x30u);
    }
L_001a8ce0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001a8ce4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a8cecu, cpu->r[1], 0, 0);
    }
L_001a8ce8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8cf0u, cpu->r[3], 0, 0);
    }
L_001a8cec:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a8cf0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_001a8cf4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_001a8cf8:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[0]);
    }
L_001a8cfc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001a8d00:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001a8d04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_ClientWaitingRoom6ResumeEv @ 001a8d18 (arm) */
void fn_001a8d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8d18:;
    {
        cpu->r[3] = rd32(0x001a8d20u + + 0x1cu);
    }
L_001a8d1c:;
    {
        cpu->r[2] = rd32(0x001a8d24u + + 0x1cu);
    }
L_001a8d20:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a8d28u, cpu->r[3], 0, 0);
    }
L_001a8d24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a8d28:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a8d2c:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a8d30:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a8d34:;
    {
        wr32(cpu->r[0] + + 0x964u, cpu->r[3]);
    }
L_001a8d38:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN20GS_ClientWaitingRoom18ProcessOnMouseDragEv @ 001a8d44 (arm) */
void fn_001a8d44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8d44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8d48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8d4c:;
    {
        cpu->r[14] = 0x001a8d50u; fn_00110818(cpu);
    }
L_001a8d50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8d54:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a8d58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8d5cu)) return;
    }
}

/* _ZN20GS_ClientWaitingRoom24ProcessOnMouseButtonDownEv @ 001a8d5c (arm) */
void fn_001a8d5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8d5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8d60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8d64:;
    {
        cpu->r[14] = 0x001a8d68u; fn_00110498(cpu);
    }
L_001a8d68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a8d6c:;
    {
        wr8(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a8d70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8d74:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a8d78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8d7cu)) return;
    }
}

/* _ZN20GS_ClientWaitingRoom22ProcessOnMouseButtonUpEv @ 001a8d7c (arm) */
void fn_001a8d7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8d7c:;
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
L_001a8d80:;
    {
        cpu->r[7] = rd32(0x001a8d88u + + 0x1b8u);
    }
L_001a8d84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a8d88:;
    {
        wr8(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_001a8d8c:;
    {
        cpu->r[3] = rd32(0x001a8d94u + + 0x1b0u);
    }
L_001a8d90:;
    {
        cpu->r[7] = add_flags(cpu, 0x001a8d98u, cpu->r[7], 0, 0);
    }
L_001a8d94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_001a8d98:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a8d9c:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a8da0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a8da4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a8da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8efc;
        }
    }
L_001a8dac:;
    {
        cpu->r[4] = rd32(0x001a8db4u + + 0x194u);
    }
L_001a8db0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a8db4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a8db8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a8dbc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001a8dc0:;
    {
        cpu->r[14] = 0x001a8dc4u; fn_0018aa44(cpu);
    }
L_001a8dc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001a8dc8:;
    {
        cpu->r[2] = 0x000000dcu;
    }
L_001a8dcc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a8dd0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a8dd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001a8dd8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001a8ddc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001a8de0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001a8de4:;
    {
        cpu->r[14] = 0x001a8de8u; fn_000a8a2c(cpu);
    }
L_001a8de8:;
    {
        cpu->r[3] = rd32(0x001a8df0u + + 0x15cu);
    }
L_001a8dec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a8df0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x964u);
    }
L_001a8df4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a8df8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a8dfc:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x200u);
    }
L_001a8e00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a8e04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001a8e08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a8e0c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001a8e10:;
    {
        cpu->r[14] = 0x001a8e14u; fn_00110c40(cpu);
    }
L_001a8e14:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001a8e18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a8ef4;
        }
    }
L_001a8e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_001a8e20:;
    {
        cpu->r[1] = rd32(0x001a8e28u + + 0x128u);
    }
L_001a8e24:;
    {
        cpu->r[2] = rd32(0x001a8e2cu + + 0x128u);
    }
L_001a8e28:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001a8e2c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001a8e30:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001a8e34:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a8e38:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001a8e3c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001a8e40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001a8e44:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001a8e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001a8e4c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001a8e50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a8e54:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001a8e58:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a8e5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a8e60:;
    {
        cpu->r[14] = 0x001a8e64u; fn_000a8d10(cpu);
    }
L_001a8e64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a8e68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a8e6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001a8e70:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001a8e74:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_001a8e78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a8e7c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001a8e80:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_001a8e84:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8e88:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001a8e8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001a8e90:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001a8e94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a8ee4;
        }
    }
L_001a8e98:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001a8e9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a8ee4;
        }
    }
L_001a8ea0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a8ea4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a8ea8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a8eac:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a8eb0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x950u);
    }
L_001a8eb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_001a8eb8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_001a8ebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001a8ec0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001a8ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001a8ec8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001a8ecc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a8ee4;
        }
    }
L_001a8ed0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001a8ed4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a8ee4;
        }
    }
L_001a8ed8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x960u);
    }
L_001a8edc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a8ee0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[9] + + 0x96cu, cpu->r[10]);
        }
    }
L_001a8ee4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001a8ee8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a8eec:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001a8ef0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a8e50;
        }
    }
L_001a8ef4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001a8ef8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8efcu)) return;
    }
L_001a8efc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8f00:;
    {
        cpu->r[14] = 0x001a8f04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a8f04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a8f08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8dac;
        }
    }
L_001a8f0c:;
    {
        cpu->r[4] = rd32(0x001a8f14u + + 0x34u);
    }
L_001a8f10:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001a8f14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8f18:;
    {
        cpu->r[14] = 0x001a8f1cu; fn_0018aa20(cpu);
    }
L_001a8f1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8f20:;
    {
        cpu->r[14] = 0x001a8f24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a8f24:;
    {
        cpu->r[3] = rd32(0x001a8f2cu + + 0x2cu);
    }
L_001a8f28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a8f2c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a8f30:;
    {
        cpu->r[3] = rd32(0x001a8f38u + + 0x24u);
    }
L_001a8f34:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a8f38:;
    {
        cpu->r[14] = 0x001a8f3cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a8f3c:;
    {
        goto L_001a8db0;
    }
}

/* _ZN20GS_ClientWaitingRoomD1Ev @ 001a8f60 (arm) */
void fn_001a8f60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8f60:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a8f64:;
    {
        cpu->r[4] = rd32(0x001a8f6cu + + 0x54u);
    }
L_001a8f68:;
    {
        cpu->r[2] = rd32(0x001a8f70u + + 0x54u);
    }
L_001a8f6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a8f70:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a8f78u, cpu->r[4], 0, 0);
    }
L_001a8f74:;
    {
        cpu->r[3] = rd32(0x001a8f7cu + + 0x4cu);
    }
L_001a8f78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a8f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8f80:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001a8f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a8f88:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a8f8c:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_001a8f90:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001a8f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a8f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a8fa0;
        }
    }
L_001a8f9c:;
    {
        cpu->r[14] = 0x001a8fa0u; fn_00096928(cpu);
    }
L_001a8fa0:;
    {
        cpu->r[3] = rd32(0x001a8fa8u + + 0x24u);
    }
L_001a8fa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8fa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a8fac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a8fb0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a8fb4:;
    {
        cpu->r[14] = 0x001a8fb8u; fn_000ec21c(cpu);
    }
L_001a8fb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a8fbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8fc0u)) return;
    }
}

/* _ZN20GS_ClientWaitingRoomD0Ev @ 001a8fd0 (arm) */
void fn_001a8fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8fd0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a8fd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a8fd8:;
    {
        cpu->r[14] = 0x001a8fdcu; fn_001a8f60(cpu);
    }
L_001a8fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a8fe0:;
    {
        cpu->r[14] = 0x001a8fe4u; fn_0018ba20(cpu);
    }
L_001a8fe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a8fe8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a8fecu)) return;
    }
}

/* _ZN20GS_ClientWaitingRoomD2Ev @ 001a8fec (arm) */
void fn_001a8fec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a8fec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a8ff0:;
    {
        cpu->r[4] = rd32(0x001a8ff8u + + 0x54u);
    }
L_001a8ff4:;
    {
        cpu->r[2] = rd32(0x001a8ffcu + + 0x54u);
    }
L_001a8ff8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a8ffc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a9004u, cpu->r[4], 0, 0);
    }
L_001a9000:;
    {
        cpu->r[3] = rd32(0x001a9008u + + 0x4cu);
    }
L_001a9004:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a9008:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a900c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001a9010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a9014:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a9018:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_001a901c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001a9020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a902c;
        }
    }
L_001a9028:;
    {
        cpu->r[14] = 0x001a902cu; fn_00096928(cpu);
    }
L_001a902c:;
    {
        cpu->r[3] = rd32(0x001a9034u + + 0x24u);
    }
L_001a9030:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a9034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a9038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a903c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a9040:;
    {
        cpu->r[14] = 0x001a9044u; fn_000ec21c(cpu);
    }
L_001a9044:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a9048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a904cu)) return;
    }
}

/* _ZN20GS_ClientWaitingRoomC1Ev @ 001a905c (arm) */
void fn_001a905c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a905c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a9060:;
    {
        cpu->r[5] = rd32(0x001a9068u + + 0x50u);
    }
L_001a9064:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9068:;
    {
        cpu->r[14] = 0x001a906cu; fn_0010ffa8(cpu);
    }
L_001a906c:;
    {
        cpu->r[2] = rd32(0x001a9074u + + 0x48u);
    }
L_001a9070:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a9078u, cpu->r[5], 0, 0);
    }
L_001a9074:;
    {
        cpu->r[3] = rd32(0x001a907cu + + 0x44u);
    }
L_001a9078:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a907c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9080:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001a9084:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a9088:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a908c:;
    {
        cpu->r[14] = 0x001a9090u; fn_0009992c(cpu);
    }
L_001a9090:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001a9094:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a9098:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a909c:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a90a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a90a4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a90a8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a90ac:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[2]);
    }
L_001a90b0:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a90b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a90b8u)) return;
    }
}

/* _ZN20GS_ClientWaitingRoomC2Ev @ 001a90c4 (arm) */
void fn_001a90c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a90c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a90c8:;
    {
        cpu->r[5] = rd32(0x001a90d0u + + 0x50u);
    }
L_001a90cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a90d0:;
    {
        cpu->r[14] = 0x001a90d4u; fn_0010ffa8(cpu);
    }
L_001a90d4:;
    {
        cpu->r[2] = rd32(0x001a90dcu + + 0x48u);
    }
L_001a90d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a90e0u, cpu->r[5], 0, 0);
    }
L_001a90dc:;
    {
        cpu->r[3] = rd32(0x001a90e4u + + 0x44u);
    }
L_001a90e0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a90e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a90e8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001a90ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a90f0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a90f4:;
    {
        cpu->r[14] = 0x001a90f8u; fn_0009992c(cpu);
    }
L_001a90f8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001a90fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a9100:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a9104:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a9108:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a910c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a9110:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a9114:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[2]);
    }
L_001a9118:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a911c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9120u)) return;
    }
}

/* _ZN20GS_ClientWaitingRoom6UpdateEv @ 001a912c (arm) */
void fn_001a912c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a912c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x964u);
    }
L_001a9130:;
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
L_001a9134:;
    {
        cpu->r[5] = rd32(0x001a913cu + + 0x598u);
    }
L_001a9138:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x200u);
    }
L_001a913c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001a9140:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a9148u, cpu->r[5], 0, 0);
    }
L_001a9144:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9148:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a914c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001a9150:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x96cu, cpu->r[2]);
        }
    }
L_001a9154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9178;
        }
    }
L_001a9158:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x96cu);
    }
L_001a915c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9160:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a9164:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x96cu, cpu->r[3]);
        }
    }
L_001a9168:;
    {
        cpu->r[14] = 0x001a916cu; fn_000a8558(cpu);
    }
L_001a916c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a9378;
        }
    }
L_001a9174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a9178:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x200u);
    }
L_001a917c:;
    {
        cpu->r[3] = rd32(0x001a9184u + + 0x554u);
    }
L_001a9180:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9184:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a9188:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a918c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9334;
        }
    }
L_001a9190:;
    {
        cpu->r[7] = rd32(0x001a9198u + + 0x544u);
    }
L_001a9194:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a9198:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a919c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a91a0:;
    {
        cpu->r[14] = 0x001a91a4u; fn_0018aa44(cpu);
    }
L_001a91a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a91a8:;
    {
        cpu->r[1] = 0x000000dcu;
    }
L_001a91ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a91b0:;
    {
        cpu->r[14] = 0x001a91b4u; fn_000a8d10(cpu);
    }
L_001a91b4:;
    {
        cpu->r[3] = rd32(0x001a91bcu + + 0x524u);
    }
L_001a91b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a91bc:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001a91c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a91c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00006667u;
        }
    }
L_001a91c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_001a91cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
        }
    }
L_001a91d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_001a91d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
        }
    }
L_001a91d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_001a91dc:;
    {
        if (cond_test(cpu, 1)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
        }
    }
L_001a91e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_001a91e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 3u, &shc), cpu->r[3], 1, 0);
        }
    }
L_001a91e8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a91ec:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001a91f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001a91f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_001a91f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a920c;
        }
    }
L_001a91fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9200:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_001a9204:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_001a9208:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a920c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a9210:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_001a9214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001a9218:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001a921c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001a9220:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x958u);
    }
L_001a9224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9228:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
        }
    }
L_001a922c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a9230:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a9234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a92ec;
        }
    }
L_001a9238:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001a923c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001a9240:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a9244:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_001a9248:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a924c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[2]);
        }
    }
L_001a9250:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a9254:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
        }
    }
L_001a9258:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
        }
    }
L_001a925c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9260:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a9264:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
        }
    }
L_001a9268:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
        }
    }
L_001a926c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001a9270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_001a9274:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a9278:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a927c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a93b4;
        }
    }
L_001a9280:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a9284:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9288:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a928c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a9290:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a9294:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a9298:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001a929c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001a92a0:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_001a92a4:;
    {
        uint32_t v = cpu->r[12] & ~ 0x10000000u; cpu->r[12] = v;
    }
L_001a92a8:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001a92ac:;
    {
        cpu->r[14] = 0x001a92b4u;
    }
L_001a92b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a92b4u)) return;
    }
L_001a92b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a92b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a92bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a93f0;
        }
    }
L_001a92c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a92c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9408;
        }
    }
L_001a92c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a92cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a92e4;
        }
    }
L_001a92d0:;
    {
        cpu->r[2] = rd32(0x001a92d8u + + 0x40cu);
    }
L_001a92d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a92d8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a92dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a92e0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001a92e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a92e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a92ecu)) return;
    }
L_001a92ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a92f0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001a92f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a92f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_001a92fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a9300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a930c;
        }
    }
L_001a9304:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a9308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a9248;
        }
    }
L_001a930c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_001a9310:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001a9314:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_001a9318:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001a931c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_001a9320:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001a9324:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001a9328:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_001a932c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a9330:;
    {
        goto L_001a9248;
    }
L_001a9334:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9338:;
    {
        cpu->r[14] = 0x001a933cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a933c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9190;
        }
    }
L_001a9344:;
    {
        cpu->r[7] = rd32(0x001a934cu + + 0x390u);
    }
L_001a9348:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a934c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9350:;
    {
        cpu->r[14] = 0x001a9354u; fn_0018aa20(cpu);
    }
L_001a9354:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9358:;
    {
        cpu->r[14] = 0x001a935cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a935c:;
    {
        cpu->r[3] = rd32(0x001a9364u + + 0x384u);
    }
L_001a9360:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9364:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9368:;
    {
        cpu->r[3] = rd32(0x001a9370u + + 0x37cu);
    }
L_001a936c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9370:;
    {
        cpu->r[14] = 0x001a9374u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a9374:;
    {
        goto L_001a9194;
    }
L_001a9378:;
    {
        cpu->r[3] = rd32(0x001a9380u + + 0x364u);
    }
L_001a937c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9380:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001a9384:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a9388:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a938c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001a9390:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a9174;
        }
    }
L_001a9394:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9398:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a939c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a93a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a93a4:;
    {
        cpu->r[14] = 0x001a93acu;
    }
L_001a93a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a93acu)) return;
    }
L_001a93ac:;
    {
        cpu->r[14] = 0x001a93b0u; fn_000a8524(cpu);
    }
L_001a93b0:;
    {
        goto L_001a9174;
    }
L_001a93b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a93b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a93bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a93c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a93c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a93c8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a93cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001a93d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001a93d4:;
    {
        cpu->r[12] = 0x10000000u;
    }
L_001a93d8:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001a93dc:;
    {
        cpu->r[14] = 0x001a93e4u;
    }
L_001a93e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a93e4u)) return;
    }
L_001a93e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a93e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a93ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a92c0;
        }
    }
L_001a93f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a93f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a93f8:;
    {
        cpu->r[14] = 0x001a93fcu; fn_000eb59c(cpu);
    }
L_001a93fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9400:;
    {
        cpu->r[14] = 0x001a9404u; fn_00128a5c(cpu);
    }
L_001a9404:;
    {
        goto L_001a92e4;
    }
L_001a9408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a940c:;
    {
        cpu->r[14] = 0x001a9410u; fn_0010da28(cpu);
    }
L_001a9410:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9414:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a92e4;
        }
    }
L_001a9418:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001a941c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a9420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9574;
        }
    }
L_001a9424:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001a9428:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a942c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9554;
        }
    }
L_001a9430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a9434:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a92e4;
        }
    }
L_001a9438:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a943c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9440:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a9444:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001a9448:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a944c:;
    {
        cpu->r[14] = 0x001a9450u; fn_000fd224(cpu);
    }
L_001a9450:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001a9454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9660;
        }
    }
L_001a9458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x96cu);
    }
L_001a945c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9460:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a96ac;
        }
    }
L_001a9464:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a9468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_001a946c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001a9470:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001a9474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9684;
        }
    }
L_001a9478:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a947c:;
    {
        cpu->r[2] = 0x00005fa8u;
    }
L_001a9480:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x100u);
    }
L_001a9484:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a9488:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a948c:;
    {
        cpu->r[2] = 0x00005facu;
    }
L_001a9490:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x101u);
    }
L_001a9494:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a9498:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_001a949c:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x102u);
    }
L_001a94a0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a94a4:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_001a94a8:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x103u);
    }
L_001a94ac:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a94b0:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001a94b4:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x104u;
        cpu->r[0] = rd8(cpu->r[1] + + 0x104u);
        cpu->r[1] = wb_tmp;
    }
L_001a94b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001a94bc:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a94c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a94c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_001a94c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001a94cc:;
    {
        cpu->r[14] = 0x001a94d0u; fn_00093230(cpu);
    }
L_001a94d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a94d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a94d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_001a94dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001a94e0:;
    {
        cpu->r[14] = 0x001a94e4u; fn_000ae3d0(cpu);
    }
L_001a94e4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a94e8:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a94ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a94f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a94f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a94f8:;
    {
        cpu->r[14] = 0x001a9500u;
    }
L_001a94fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9500u)) return;
    }
L_001a9500:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a9504:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006400u, 0, 0);
    }
L_001a9508:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000005au, 0, 0);
    }
L_001a950c:;
    {
        cpu->r[14] = 0x001a9510u; fn_000ae3d0(cpu);
    }
L_001a9510:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a9514:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x96cu);
    }
L_001a9518:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a951c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a9520:;
    {
        cpu->r[14] = 0x001a9528u;
    }
L_001a9524:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9528u)) return;
    }
L_001a9528:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a952c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a95f8;
        }
    }
L_001a9530:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a9534:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9538:;
    {
        cpu->r[14] = 0x001a953cu; fn_0018ba6c(cpu);
    }
L_001a953c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9540:;
    {
        cpu->r[14] = 0x001a9544u; fn_001aa9c0(cpu);
    }
L_001a9544:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a9548:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a954c:;
    {
        cpu->r[14] = 0x001a9550u; fn_000f361c(cpu);
    }
L_001a9550:;
    {
        goto L_001a92e4;
    }
L_001a9554:;
    {
        cpu->r[3] = rd32(0x001a955cu + + 0x194u);
    }
L_001a9558:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a955c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a9560:;
    {
        cpu->r[14] = 0x001a9564u; fn_00096928(cpu);
    }
L_001a9564:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9568:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a956c:;
    {
        cpu->r[14] = 0x001a9570u; fn_000f34e8(cpu);
    }
L_001a9570:;
    {
        goto L_001a92e4;
    }
L_001a9574:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9578:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a957c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a9580:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001a9584:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a9588:;
    {
        cpu->r[14] = 0x001a958cu; fn_000fd224(cpu);
    }
L_001a958c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001a9590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a963c;
        }
    }
L_001a9594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x970u);
    }
L_001a9598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a959c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a9620;
        }
    }
L_001a95a0:;
    {
        cpu->r[14] = 0x001a95a4u; fn_0009b4d0(cpu);
    }
L_001a95a4:;
    {
        cpu->r[3] = rd32(0x001a95acu + + 0x144u);
    }
L_001a95a8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a95ac:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[0]);
    }
L_001a95b0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a95b4:;
    {
        cpu->r[14] = 0x001a95b8u; fn_0009992c(cpu);
    }
L_001a95b8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001a95bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a95c0:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a95c4:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a95c8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a95cc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a95d0:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[2]);
    }
L_001a95d4:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a95d8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a95dc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001a95e0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001a95e4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a95e8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001a95ec:;
    {
        cpu->r[3] = 0x000000fau;
    }
L_001a95f0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a95f4:;
    {
        goto L_001a92e4;
    }
L_001a95f8:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a95fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9600:;
    {
        cpu->r[14] = 0x001a9604u; fn_0018ba6c(cpu);
    }
L_001a9604:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a9608:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a960c:;
    {
        cpu->r[14] = 0x001a9610u; fn_001aaf48(cpu);
    }
L_001a9610:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a9614:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a9618:;
    {
        cpu->r[14] = 0x001a961cu; fn_000f361c(cpu);
    }
L_001a961c:;
    {
        goto L_001a92e4;
    }
L_001a9620:;
    {
        cpu->r[14] = 0x001a9624u; fn_0009b4d0(cpu);
    }
L_001a9624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x970u);
    }
L_001a9628:;
    {
        cpu->r[2] = 0x00000bb8u;
    }
L_001a962c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001a9630:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a9634:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001a95d8;
        }
    }
L_001a9638:;
    {
        goto L_001a95a0;
    }
L_001a963c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9640:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a9644:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a9648:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a964c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a9650:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a9654:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9658:;
    {
        cpu->r[14] = 0x001a965cu; fn_000fd248(cpu);
    }
L_001a965c:;
    {
        goto L_001a9594;
    }
L_001a9660:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9664:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a9668:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a966c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a9670:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a9674:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a9678:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a967c:;
    {
        cpu->r[14] = 0x001a9680u; fn_000fd248(cpu);
    }
L_001a9680:;
    {
        goto L_001a9458;
    }
L_001a9684:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a9688:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a968c:;
    {
        cpu->r[14] = 0x001a9690u; fn_0018ba6c(cpu);
    }
L_001a9690:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a9694:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9698:;
    {
        cpu->r[14] = 0x001a969cu; fn_001aaf48(cpu);
    }
L_001a969c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a96a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a96a4:;
    {
        cpu->r[14] = 0x001a96a8u; fn_000f361c(cpu);
    }
L_001a96a8:;
    {
        goto L_001a92e4;
    }
L_001a96ac:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a96b0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a96b4:;
    {
        cpu->r[14] = 0x001a96b8u; fn_0018ba6c(cpu);
    }
L_001a96b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a96bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a96c0:;
    {
        cpu->r[14] = 0x001a96c4u; fn_001aaf48(cpu);
    }
L_001a96c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a96c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a96cc:;
    {
        cpu->r[14] = 0x001a96d0u; fn_000f361c(cpu);
    }
L_001a96d0:;
    {
        goto L_001a92e4;
    }
}

/* _ZN20GS_ClientWaitingRoom13DrawTrackListEv @ 001a96f4 (arm) */
void fn_001a96f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a96f4:;
    {
        cpu->r[1] = rd32(0x001a96fcu + + 0x578u);
    }
L_001a96f8:;
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
L_001a96fc:;
    {
        cpu->r[7] = rd32(0x001a9704u + + 0x574u);
    }
L_001a9700:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a9708u, cpu->r[1], 0, 0);
    }
L_001a9704:;
    {
        cpu->r[2] = rd32(0x001a970cu + + 0x570u);
    }
L_001a9708:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000022cu, 1, 0);
    }
L_001a970c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9710:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_001a9714:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001a9718:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_001a971c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001a9720:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a9724:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a9728:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001a972c:;
    {
        wr32(cpu->r[13] + + 0x224u, cpu->r[3]);
    }
L_001a9730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9be4;
        }
    }
L_001a9734:;
    {
        cpu->r[5] = rd32(0x001a973cu + + 0x544u);
    }
L_001a9738:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a973c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9740:;
    {
        cpu->r[14] = 0x001a9744u; fn_00096a08(cpu);
    }
L_001a9744:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9748:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a974c:;
    {
        cpu->r[8] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_001a9750:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a9754:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9758:;
    {
        cpu->r[14] = 0x001a975cu; fn_0018aa44(cpu);
    }
L_001a975c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9760:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_001a9764:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a9768:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a976c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a9770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9c30;
        }
    }
L_001a9774:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9778:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a977c:;
    {
        cpu->r[12] = rd32(0x001a9784u + + 0x500u);
    }
L_001a9780:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9784:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001a9788:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_001a978c:;
    {
        cpu->r[14] = 0x001a9790u; fn_0018aa44(cpu);
    }
L_001a9790:;
    {
        cpu->r[14] = rd32(0x001a9798u + + 0x4f0u);
    }
L_001a9794:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001a9798:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000001ecu, 0, 0);
    }
L_001a979c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000001e8u, 0, 0);
    }
L_001a97a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_001a97a4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001a97a8:;
    {
        cpu->r[14] = 0x001a97acu; fn_000a8d10(cpu);
    }
L_001a97ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a97b0:;
    {
        cpu->r[1] = 0x000000dcu;
    }
L_001a97b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000001e4u, 0, 0);
    }
L_001a97b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000001e0u, 0, 0);
    }
L_001a97bc:;
    {
        cpu->r[14] = 0x001a97c0u; fn_000a8d10(cpu);
    }
L_001a97c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a97c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a97c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a97cc:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a97d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a97d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a97d8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a97dc:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_001a97e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x200u);
    }
L_001a97e4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001a97e8:;
    {
        cpu->r[14] = 0x001a97ecu; fn_0012f780(cpu);
    }
L_001a97ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1ecu);
    }
L_001a97f0:;
    {
        cpu->r[2] = 0x00000069u;
    }
L_001a97f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1e8u);
    }
L_001a97f8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001a97fc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a9800:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_001a9804:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9808:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_001a980c:;
    {
        cpu->r[14] = 0x001a9810u; fn_0012fa2c(cpu);
    }
L_001a9810:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a9814:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a9818:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a9b7c;
        }
    }
L_001a981c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000001f0u, 0, 0);
    }
L_001a9820:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a9824:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001a9828:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001a982c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001a9830:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001a9834:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001a9838:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a983c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001a9840:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001a9844:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001a9848:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_001a984c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001a9850:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_001a9854:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001a9858:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_001a985c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001a9860:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_001a9864:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001a9868:;
    {
        goto L_001a999c;
    }
L_001a986c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9870:;
    {
        cpu->r[1] = 0x000000dcu;
    }
L_001a9874:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a9878:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a987c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a9880:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a9884:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a9888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000073u, 0, 0);
    }
L_001a988c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1ecu);
    }
L_001a9890:;
    {
        cpu->r[9] = 0x00000356u;
    }
L_001a9894:;
    {
        cpu->r[10] = 0x00000010u;
    }
L_001a9898:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001a989c:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_001a98a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a98a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a98a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a98ac:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a98b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1e0u);
    }
L_001a98b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_001a98b8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_001a98bc:;
    {
        cpu->r[14] = 0x001a98c0u; fn_000ad8a0(cpu);
    }
L_001a98c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a98c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a98c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a98cc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x50u);
    }
L_001a98d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a98d4:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_001a98d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a98dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001a98e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000082u, 0, 0);
    }
L_001a98e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1e0u);
    }
L_001a98e8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001a98ec:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a98f0:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[8]);
    }
L_001a98f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001a98f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a98fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000000ccu;
        }
    }
L_001a9900:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000000b1u;
        }
    }
L_001a9904:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[12]; cpu->r[3] = v;
    }
L_001a9908:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a990c:;
    {
        cpu->r[14] = 0x001a9910u; fn_000ad19c(cpu);
    }
L_001a9910:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a9914:;
    {
        cpu->r[0] = 0x00000135u;
    }
L_001a9918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a991c:;
    {
        cpu->r[1] = 0x0000011au;
    }
L_001a9920:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001a9924:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a9928:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_001a992c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1e0u);
    }
L_001a9930:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000082u, 0, 0);
    }
L_001a9934:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001a9938:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[12]);
    }
L_001a993c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_001a9940:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a9944:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a9948:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a994c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a9950:;
    {
        cpu->r[14] = 0x001a9954u; fn_000ad19c(cpu);
    }
L_001a9954:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a9958:;
    {
        cpu->r[12] = 0x0000019du;
    }
L_001a995c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a9960:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001a9964:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001a9968:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a996c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001a9970:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1e0u);
    }
L_001a9974:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000082u, 0, 0);
    }
L_001a9978:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000001b8u;
        }
    }
L_001a997c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a9980:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_001a9984:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a9988:;
    {
        cpu->r[14] = 0x001a998cu; fn_000ad19c(cpu);
    }
L_001a998c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a9990:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a9994:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_001a9998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9b7c;
        }
    }
L_001a999c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a99a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001a99a4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001a99a8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a99ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a998c;
        }
    }
L_001a99b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000017cu, 0, 0);
    }
L_001a99b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a99b8:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001a99bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a99c0:;
    {
        cpu->r[14] = 0x001a99c4u; imp_memset(cpu); /* memset */
    }
L_001a99c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a99c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a99cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a99d0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a99d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a99d8:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_001a99dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001a99e0:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_001a99e4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001a99e8:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_001a99ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001a99f0:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_001a99f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a99f8:;
    {
        wr16(cpu->r[2], cpu->r[3]);
    }
L_001a99fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a9a00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a9a04:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_001a9a08:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001a9a0c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a9a10:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_001a9a14:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a9a18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a9a1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a9a20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a9a24:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_001a9a28:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001a9a2c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a9a30:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001a9a34:;
    {
        cpu->r[14] = 0x001a9a38u; imp_strlen(cpu); /* strlen */
    }
L_001a9a38:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a9a3c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a9a40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9a44:;
    {
        cpu->r[14] = 0x001a9a48u; imp_memcpy(cpu); /* memcpy */
    }
L_001a9a48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9a4c:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_001a9a50:;
    {
        cpu->r[14] = 0x001a9a54u; imp_strrchr(cpu); /* strrchr */
    }
L_001a9a54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9a58:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[10]);
        }
    }
L_001a9a5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9a60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9a64:;
    {
        cpu->r[14] = 0x001a9a68u; fn_000ae3d0(cpu);
    }
L_001a9a68:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a9a6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9a70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a9a74:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001a9a78:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_001a9a7c:;
    {
        cpu->r[12] = 0x0000005cu;
    }
L_001a9a80:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001a9a84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9a88:;
    {
        cpu->r[14] = 0x001a9a8cu; fn_00099114(cpu);
    }
L_001a9a8c:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_001a9a90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a9a94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a9a98:;
    {
        cpu->r[14] = 0x001a9a9cu; imp_memset(cpu); /* memset */
    }
L_001a9a9c:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x100u);
    }
L_001a9aa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9aa4:;
    {
        cpu->r[14] = 0x001a9aa8u; fn_00096b5c(cpu);
    }
L_001a9aa8:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x104u);
    }
L_001a9aac:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_001a9ab0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9ab4:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_001a9ab8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_001a9abc:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x444u);
    }
L_001a9ac0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_001a9ac4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a9ac8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_001a9acc:;
    {
        cpu->r[14] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001a9ad0:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_001a9ad4:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0xcu);
    }
L_001a9ad8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_001a9adc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_001a9ae0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a9ae4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001a9ae8:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a9aec:;
    {
        cpu->r[10] = rd32(cpu->r[14] + + 0x10u);
    }
L_001a9af0:;
    {
        cpu->r[14] = 0x001a9af4u; imp_memset(cpu); /* memset */
    }
L_001a9af4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a9af8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9afc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9b00:;
    {
        cpu->r[14] = 0x001a9b04u; fn_000aeb58(cpu);
    }
L_001a9b04:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a9b08:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a9b0c:;
    {
        cpu->r[12] = 0x000000b2u;
    }
L_001a9b10:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9b14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a9b18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9b1c:;
    {
        cpu->r[14] = 0x001a9b20u; fn_00099114(cpu);
    }
L_001a9b20:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001a9b24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9b28:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9b2c:;
    {
        cpu->r[14] = 0x001a9b30u; fn_000aeb58(cpu);
    }
L_001a9b30:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a9b34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a9b38:;
    {
        cpu->r[12] = 0x00000082u;
    }
L_001a9b3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9b40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a9b44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9b48:;
    {
        cpu->r[14] = 0x001a9b4cu; fn_00099114(cpu);
    }
L_001a9b4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x96cu);
    }
L_001a9b50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001a9b54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a986c;
        }
    }
L_001a9b58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9b5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a9b60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a9b64:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a9b68:;
    {
        cpu->r[1] = 0x000000ddu;
    }
L_001a9b6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a9b70:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001a9b74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000073u, 0, 0);
    }
L_001a9b78:;
    {
        goto L_001a988c;
    }
L_001a9b7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9b80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a9b84:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a9b88:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a9b8c:;
    {
        cpu->r[14] = 0x001a9b90u; fn_0012f780(cpu);
    }
L_001a9b90:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9b94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a9b98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a9b9c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a9ba0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a9ba4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001a9ba8:;
    {
        cpu->r[12] = rd32(0x001a9bb0u + + 0xdcu);
    }
L_001a9bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a9bb0:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001a9bb4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a9bb8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9bbc:;
    {
        cpu->r[14] = 0x001a9bc0u; fn_0012fa2c(cpu);
    }
L_001a9bc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9bc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a9bc8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a9bcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x224u);
    }
L_001a9bd0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a9bd4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a9bd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a9c70;
        }
    }
L_001a9bdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_001a9be0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9be4u)) return;
    }
L_001a9be4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a9be8:;
    {
        cpu->r[14] = 0x001a9becu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a9bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9734;
        }
    }
L_001a9bf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9bf8:;
    {
        cpu->r[5] = rd32(0x001a9c00u + + 0x80u);
    }
L_001a9bfc:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001a9c00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9c04:;
    {
        cpu->r[14] = 0x001a9c08u; fn_0018aa20(cpu);
    }
L_001a9c08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a9c0c:;
    {
        cpu->r[14] = 0x001a9c10u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a9c10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9c14:;
    {
        cpu->r[3] = rd32(0x001a9c1cu + + 0x74u);
    }
L_001a9c18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9c1c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a9c20:;
    {
        cpu->r[3] = rd32(0x001a9c28u + + 0x6cu);
    }
L_001a9c24:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a9c28:;
    {
        cpu->r[14] = 0x001a9c2cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a9c2c:;
    {
        goto L_001a9738;
    }
L_001a9c30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9c34:;
    {
        cpu->r[14] = 0x001a9c38u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a9c38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9774;
        }
    }
L_001a9c40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9c44:;
    {
        cpu->r[14] = 0x001a9c48u; fn_0018aa20(cpu);
    }
L_001a9c48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9c4c:;
    {
        cpu->r[14] = 0x001a9c50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a9c50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a9c54:;
    {
        cpu->r[3] = rd32(0x001a9c5cu + + 0x34u);
    }
L_001a9c58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9c5c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a9c60:;
    {
        cpu->r[3] = rd32(0x001a9c68u + + 0x2cu);
    }
L_001a9c64:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a9c68:;
    {
        cpu->r[14] = 0x001a9c6cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a9c6c:;
    {
        goto L_001a9774;
    }
L_001a9c70:;
    {
        cpu->r[14] = 0x001a9c74u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001a9c74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[0], 2, (cpu->r[13] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001a9c78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001a9c7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001a9c80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_001a9c84:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_001a9c88:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001a9c8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001a9c90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001a9c94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN20GS_ClientWaitingRoom6RenderEv @ 001a9c98 (arm) */
void fn_001a9c98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a9c98:;
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
L_001a9c9c:;
    {
        cpu->r[5] = rd32(0x001a9ca4u + + 0x338u);
    }
L_001a9ca0:;
    {
        cpu->r[3] = rd32(0x001a9ca8u + + 0x338u);
    }
L_001a9ca4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001a9ca8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a9cb0u, cpu->r[5], 0, 0);
    }
L_001a9cac:;
    {
        cpu->r[2] = rd32(0x001a9cb4u + + 0x330u);
    }
L_001a9cb0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a9cb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9cb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001a9cbc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a9cc0:;
    {
        cpu->r[14] = 0x001a9cc4u; fn_0012f780(cpu);
    }
L_001a9cc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9ccc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9cd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001a9cd4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001a9cd8:;
    {
        cpu->r[14] = 0x001a9cdcu; fn_00113570(cpu);
    }
L_001a9cdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a9ce0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9ce4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a9d14;
        }
    }
L_001a9ce8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a9cec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a9cf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a9cf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9cf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9cfc:;
    {
        cpu->r[14] = 0x001a9d04u;
    }
L_001a9d00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9d04u)) return;
    }
L_001a9d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a9d08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a9d0c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a9d10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a9cec;
        }
    }
L_001a9d14:;
    {
        cpu->r[7] = rd32(0x001a9d1cu + + 0x2ccu);
    }
L_001a9d18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9d1c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a9d20:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a9d24:;
    {
        cpu->r[14] = 0x001a9d2cu;
    }
L_001a9d28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9d2cu)) return;
    }
L_001a9d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a9d30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9d34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a9d38:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a9d3c:;
    {
        cpu->r[14] = 0x001a9d44u;
    }
L_001a9d40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9d44u)) return;
    }
L_001a9d44:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a9d48:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a9d4c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a9d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9ef8;
        }
    }
L_001a9d54:;
    {
        cpu->r[6] = rd32(0x001a9d5cu + + 0x290u);
    }
L_001a9d58:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a9d5c:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a9d60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9d64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9d68:;
    {
        cpu->r[14] = 0x001a9d6cu; fn_0018aa44(cpu);
    }
L_001a9d6c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a9d70:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a9d74:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a9d78:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a9d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9f3c;
        }
    }
L_001a9d80:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a9d84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9d88:;
    {
        cpu->r[14] = 0x001a9d8cu; fn_00096a08(cpu);
    }
L_001a9d8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a9d90:;
    {
        cpu->r[9] = 0x00200000u;
    }
L_001a9d94:;
    {
        cpu->r[11] = 0x00000356u;
    }
L_001a9d98:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a9d9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a9da0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001a9da4:;
    {
        cpu->r[14] = 0x001a9da8u; fn_0018aa44(cpu);
    }
L_001a9da8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001a9dac:;
    {
        cpu->r[1] = 0x000000d9u;
    }
L_001a9db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a9db4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a9db8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a9dbc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9dc0:;
    {
        wr8(cpu->r[8] + + 0x50u, cpu->r[12]);
    }
L_001a9dc4:;
    {
        cpu->r[14] = 0x001a9dc8u; fn_000a8d10(cpu);
    }
L_001a9dc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9dcc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9dd0:;
    {
        cpu->r[1] = 0x000000d9u;
    }
L_001a9dd4:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_001a9dd8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a9ddc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a9de0:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001a9de4:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a9de8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001a9dec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a9df0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a9df4:;
    {
        cpu->r[14] = 0x001a9df8u; fn_000ad8a0(cpu);
    }
L_001a9df8:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001a9dfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a9e00:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001a9e04:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_001a9e08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9e0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001a9e10:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a9e14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a9e18:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a9e1c:;
    {
        cpu->r[14] = 0x001a9e20u; fn_000ad8a0(cpu);
    }
L_001a9e20:;
    {
        cpu->r[3] = rd32(0x001a9e28u + + 0x1c8u);
    }
L_001a9e24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9e28:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a9e2c:;
    {
        cpu->r[14] = 0x001a9e30u; fn_000962d0(cpu);
    }
L_001a9e30:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a9e34:;
    {
        cpu->r[1] = 0x0000046au;
    }
L_001a9e38:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_001a9e3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001a9e40:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001a9e44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000000cbu;
        }
    }
L_001a9e48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000000b0u;
        }
    }
L_001a9e4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a9e50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_001a9e54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9e58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x0000004bu;
        }
    }
L_001a9e5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000050u;
        }
    }
L_001a9e60:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a9e64:;
    {
        cpu->r[14] = 0x001a9e68u; fn_000ad200(cpu);
    }
L_001a9e68:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001a9e6c:;
    {
        cpu->r[3] = 0x0000011au;
    }
L_001a9e70:;
    {
        cpu->r[2] = 0x00000135u;
    }
L_001a9e74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_001a9e78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9e7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001a9e80:;
    {
        cpu->r[1] = 0x0000046cu;
    }
L_001a9e84:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a9e88:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001a9e8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a9e90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9e94:;
    {
        cpu->r[14] = 0x001a9e98u; fn_000ad200(cpu);
    }
L_001a9e98:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a9e9c:;
    {
        cpu->r[1] = 0x000001b7u;
    }
L_001a9ea0:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a9ea4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9ea8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001a9eac:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001a9eb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001a9eb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000019cu;
        }
    }
L_001a9eb8:;
    {
        cpu->r[1] = 0x0000046du;
    }
L_001a9ebc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9ec0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a9ec4:;
    {
        cpu->r[14] = 0x001a9ec8u; fn_000ad200(cpu);
    }
L_001a9ec8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a9ecc:;
    {
        cpu->r[14] = 0x001a9ed0u; fn_000960f4(cpu);
    }
L_001a9ed0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001a9ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9fc8;
        }
    }
L_001a9ed8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a9edc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x200u);
    }
L_001a9ee0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a9ee4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a9f78;
        }
    }
L_001a9ee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9eec:;
    {
        cpu->r[14] = 0x001a9ef0u; fn_001a96f4(cpu);
    }
L_001a9ef0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001a9ef4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9ef8u)) return;
    }
L_001a9ef8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9efc:;
    {
        cpu->r[14] = 0x001a9f00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a9f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9d54;
        }
    }
L_001a9f08:;
    {
        cpu->r[6] = rd32(0x001a9f10u + + 0xdcu);
    }
L_001a9f0c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a9f10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9f14:;
    {
        cpu->r[14] = 0x001a9f18u; fn_0018aa20(cpu);
    }
L_001a9f18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9f1c:;
    {
        cpu->r[14] = 0x001a9f20u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a9f20:;
    {
        cpu->r[3] = rd32(0x001a9f28u + + 0xccu);
    }
L_001a9f24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9f28:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9f2c:;
    {
        cpu->r[3] = rd32(0x001a9f34u + + 0xc4u);
    }
L_001a9f30:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9f34:;
    {
        cpu->r[14] = 0x001a9f38u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a9f38:;
    {
        goto L_001a9d58;
    }
L_001a9f3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9f40:;
    {
        cpu->r[14] = 0x001a9f44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a9f44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a9f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a9d80;
        }
    }
L_001a9f4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9f50:;
    {
        cpu->r[14] = 0x001a9f54u; fn_0018aa20(cpu);
    }
L_001a9f54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a9f58:;
    {
        cpu->r[14] = 0x001a9f5cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a9f5c:;
    {
        cpu->r[3] = rd32(0x001a9f64u + + 0x90u);
    }
L_001a9f60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9f64:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9f68:;
    {
        cpu->r[3] = rd32(0x001a9f70u + + 0x88u);
    }
L_001a9f6c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a9f70:;
    {
        cpu->r[14] = 0x001a9f74u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a9f74:;
    {
        goto L_001a9d80;
    }
L_001a9f78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a9f7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a9f80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001a9f84:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001a9f88:;
    {
        cpu->r[14] = 0x001a9f8cu; fn_000a8d10(cpu);
    }
L_001a9f8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a9f90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a9f94:;
    {
        cpu->r[1] = 0x0000045eu;
    }
L_001a9f98:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a9f9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a9fa0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a9fa4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a9fa8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a9fac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a9fb0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a9fb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a9fb8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a9fbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000069u, 0, 0);
    }
L_001a9fc0:;
    {
        cpu->r[14] = 0x001a9fc4u; fn_000ad200(cpu);
    }
L_001a9fc4:;
    {
        goto L_001a9ef0;
    }
L_001a9fc8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a9fcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a9fd0:;
    {
        cpu->r[14] = 0x001a9fd8u;
    }
L_001a9fd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a9fd8u)) return;
    }
L_001a9fd8:;
    {
        goto L_001a9ed8;
    }
}

/* _ZN21GS_ClientWaitingStart8isKindOfEi @ 001a9ffc (arm) */
void fn_001a9ffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a9ffc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000021u, 1, 1);
    }
L_001aa000:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001aa004:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001aa008:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_ClientWaitingStart17ApplyMenuSettingsEv @ 001aa00c (arm) */
void fn_001aa00c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa00c:;
    {
        cpu->r[3] = rd32(0x001aa014u + + 0x24u);
    }
L_001aa010:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001aa014:;
    {
        cpu->r[1] = 0x00000402u;
    }
L_001aa018:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_001aa01c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa024u, cpu->r[3], 0, 0);
    }
L_001aa020:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_001aa024:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001aa028:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001aa02c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001aa030:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[1]);
    }
L_001aa034:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_72 @ 001aa03c (arm) */
void fn_001aa03c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa03c:;
    {
        cpu->r[3] = rd32(0x001aa044u + + 0x44u);
    }
L_001aa040:;
    {
        cpu->r[1] = rd32(0x001aa048u + + 0x44u);
    }
L_001aa044:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa04cu, cpu->r[3], 0, 0);
    }
L_001aa048:;
    {
        cpu->r[2] = rd32(0x001aa050u + + 0x40u);
    }
L_001aa04c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aa050:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aa058u, cpu->r[2], 0, 0);
    }
L_001aa054:;
    {
        cpu->r[1] = rd32(0x001aa05cu + + 0x38u);
    }
L_001aa058:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001aa05c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aa060:;
    {
        cpu->r[3] = rd32(0x001aa068u + + 0x30u);
    }
L_001aa064:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001aa068:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001aa06c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa074u, cpu->r[3], 0, 0);
    }
L_001aa070:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001aa074:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_001aa078:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001aa07c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001aa080:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001aa084:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_ClientWaitingStart6RenderEv @ 001aa09c (arm) */
void fn_001aa09c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa09c:;
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
L_001aa0a0:;
    {
        cpu->r[5] = rd32(0x001aa0a8u + + 0x1bcu);
    }
L_001aa0a4:;
    {
        cpu->r[7] = rd32(0x001aa0acu + + 0x1bcu);
    }
L_001aa0a8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001aa0ac:;
    {
        cpu->r[5] = add_flags(cpu, 0x001aa0b4u, cpu->r[5], 0, 0);
    }
L_001aa0b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_001aa0b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001aa0b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001aa0bc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001aa0c0:;
    {
        cpu->r[14] = 0x001aa0c4u; fn_00113570(cpu);
    }
L_001aa0c4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001aa0c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aa0cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aa0d0:;
    {
        cpu->r[14] = 0x001aa0d8u;
    }
L_001aa0d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa0d8u)) return;
    }
L_001aa0d8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8d4u);
    }
L_001aa0dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aa0e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001aa110;
        }
    }
L_001aa0e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001aa0e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aa0ec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001aa0f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aa0f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001aa0f8:;
    {
        cpu->r[14] = 0x001aa100u;
    }
L_001aa0fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa100u)) return;
    }
L_001aa100:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8d4u);
    }
L_001aa104:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001aa108:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001aa10c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aa0e8;
        }
    }
L_001aa110:;
    {
        cpu->r[3] = rd32(0x001aa118u + + 0x154u);
    }
L_001aa114:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aa118:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001aa11c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001aa120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa220;
        }
    }
L_001aa124:;
    {
        cpu->r[4] = rd32(0x001aa12cu + + 0x144u);
    }
L_001aa128:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001aa12c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xcu);
    }
L_001aa130:;
    {
        cpu->r[14] = 0x001aa134u; fn_00096a08(cpu);
    }
L_001aa134:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001aa138:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001aa13c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001aa140:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001aa144:;
    {
        cpu->r[14] = 0x001aa148u; fn_0018aa44(cpu);
    }
L_001aa148:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001aa14c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001aa150:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_001aa154:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001aa158:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xb0u);
    }
L_001aa15c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001aa160:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001aa164:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001aa168:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001aa16c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001aa170:;
    {
        cpu->r[14] = 0x001aa174u; fn_000a8a2c(cpu);
    }
L_001aa174:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001aa178:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aa17c:;
    {
        cpu->r[2] = rd32(0x001aa184u + + 0xf0u);
    }
L_001aa180:;
    {
        cpu->r[0] = 0x00000420u;
    }
L_001aa184:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x54u);
    }
L_001aa188:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001aa18c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001aa190:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001aa194:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001aa198:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa4u);
    }
L_001aa19c:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_001aa1a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001aa1a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001aa1a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001aa1ac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001aa1b0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_001aa1b4:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001aa1b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000003cu, 1, 0);
    }
L_001aa1bc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_001aa1c0:;
    {
        cpu->r[14] = 0x001aa1c4u; fn_000aeb58(cpu);
    }
L_001aa1c4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001aa1c8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001aa1cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001aa1d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aa1d4:;
    {
        cpu->r[14] = 0x001aa1d8u; fn_000a9818(cpu);
    }
L_001aa1d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aa1dc:;
    {
        cpu->r[0] = 0x00000420u;
    }
L_001aa1e0:;
    {
        cpu->r[14] = 0x001aa1e4u; fn_000aeb58(cpu);
    }
L_001aa1e4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001aa1e8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001aa1ec:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001aa1f0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001aa1f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001aa1f8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001aa1fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_001aa200:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001aa204:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001aa208:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001aa20c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aa210:;
    {
        cpu->r[14] = 0x001aa214u; fn_000ac4bc(cpu);
    }
L_001aa214:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[10]);
    }
L_001aa218:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_001aa21c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa220u)) return;
    }
L_001aa220:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aa224:;
    {
        cpu->r[14] = 0x001aa228u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001aa228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aa22c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa124;
        }
    }
L_001aa230:;
    {
        cpu->r[4] = rd32(0x001aa238u + + 0x38u);
    }
L_001aa234:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001aa238:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001aa23c:;
    {
        cpu->r[14] = 0x001aa240u; fn_0018aa20(cpu);
    }
L_001aa240:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aa244:;
    {
        cpu->r[14] = 0x001aa248u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001aa248:;
    {
        cpu->r[3] = rd32(0x001aa250u + + 0x28u);
    }
L_001aa24c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001aa250:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aa254:;
    {
        cpu->r[3] = rd32(0x001aa25cu + + 0x20u);
    }
L_001aa258:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aa25c:;
    {
        cpu->r[14] = 0x001aa260u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001aa260:;
    {
        goto L_001aa128;
    }
}

/* _ZN21GS_ClientWaitingStart6UpdateEv @ 001aa280 (arm) */
void fn_001aa280(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa280:;
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
L_001aa284:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aa288:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x950u);
    }
L_001aa28c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001aa290:;
    {
        cpu->r[5] = rd32(0x001aa298u + + 0x514u);
    }
L_001aa294:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x316u);
    }
L_001aa298:;
    {
        cpu->r[5] = add_flags(cpu, 0x001aa2a0u, cpu->r[5], 0, 0);
    }
L_001aa29c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001aa2a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa2e8;
        }
    }
L_001aa2a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001aa2a8:;
    {
        cpu->r[14] = 0x001aa2acu; fn_001b2ae4(cpu);
    }
L_001aa2ac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aa2b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa2c0;
        }
    }
L_001aa2b4:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_001aa2b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001aa2bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa31c;
        }
    }
L_001aa2c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001aa2c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001aa2c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa310;
        }
    }
L_001aa2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001aa2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa654;
        }
    }
L_001aa2d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aa2d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001aa2dc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001aa2e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001aa2e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa2e8u)) return;
    }
L_001aa2e8:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001aa2ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa2f0:;
    {
        cpu->r[14] = 0x001aa2f4u; fn_0018ba6c(cpu);
    }
L_001aa2f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aa2f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aa2fc:;
    {
        cpu->r[14] = 0x001aa300u; fn_001aaf48(cpu);
    }
L_001aa300:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa304:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aa308:;
    {
        cpu->r[14] = 0x001aa30cu; fn_000f361c(cpu);
    }
L_001aa30c:;
    {
        goto L_001aa2e0;
    }
L_001aa310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aa314:;
    {
        cpu->r[14] = 0x001aa318u; fn_00128a5c(cpu);
    }
L_001aa318:;
    {
        goto L_001aa2e0;
    }
L_001aa31c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001aa320:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001aa324:;
    {
        cpu->r[14] = 0x001aa328u; fn_0018ba6c(cpu);
    }
L_001aa328:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001aa32c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001aa330:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001aa334:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001aa338:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aa33c:;
    {
        cpu->r[14] = 0x001aa340u; fn_001b374c(cpu);
    }
L_001aa340:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aa344:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001aa348:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa34c:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_001aa350:;
    {
        cpu->r[14] = 0x001aa354u; fn_001b3628(cpu);
    }
L_001aa354:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa358:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000027u, 0, 0);
    }
L_001aa35c:;
    {
        cpu->r[14] = 0x001aa360u; fn_001b350c(cpu);
    }
L_001aa360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa364:;
    {
        cpu->r[2] = 0x00005fa8u;
    }
L_001aa368:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa36c:;
    {
        cpu->r[2] = 0x00005facu;
    }
L_001aa370:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa374:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_001aa378:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa37c:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_001aa380:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa384:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_001aa388:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_001aa38c:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001aa390:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001aa394:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_001aa398:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa39c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001aa3a0:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_001aa3a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_001aa3a8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001aa3ac:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_001aa3b0:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[8]);
    }
L_001aa3b4:;
    {
        cpu->r[14] = 0x001aa3b8u; fn_001b350c(cpu);
    }
L_001aa3b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa3bc:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_001aa3c0:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x26u);
    }
L_001aa3c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00005f00u, 0, 0);
    }
L_001aa3c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa3cc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001aa3d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000bcu, 0, 0);
    }
L_001aa3d4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001aa3d8:;
    {
        cpu->r[14] = 0x001aa3dcu; fn_001b3580(cpu);
    }
L_001aa3dc:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001aa3e0:;
    {
        cpu->r[14] = 0x001aa3e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001aa3e4:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0x3u;
        wr8(cpu->r[10] + - 0x3u, cpu->r[9]);
        cpu->r[10] = wb_tmp;
    }
L_001aa3e8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001aa3ec:;
    {
        cpu->r[0] = 0x00000031u;
    }
L_001aa3f0:;
    {
        cpu->r[14] = 0x001aa3f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001aa3f4:;
    {
        cpu->r[3] = rd32(0x001aa3fcu + + 0x3b4u);
    }
L_001aa3f8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_001aa3fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa404u, cpu->r[3], 0, 0);
    }
L_001aa400:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001aa404:;
    {
        cpu->r[3] = rd32(0x001aa40cu + + 0x3a8u);
    }
L_001aa408:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa410u, cpu->r[3], 0, 0);
    }
L_001aa40c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001aa410:;
    {
        cpu->r[3] = rd32(0x001aa418u + + 0x3a0u);
    }
L_001aa414:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001aa418:;
    {
        cpu->r[3] = rd32(0x001aa420u + + 0x39cu);
    }
L_001aa41c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa424u, cpu->r[3], 0, 0);
    }
L_001aa420:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001aa424:;
    {
        cpu->r[3] = rd32(0x001aa42cu + + 0x394u);
    }
L_001aa428:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa430u, cpu->r[3], 0, 0);
    }
L_001aa42c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001aa430:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001aa434:;
    {
        goto L_001aa564;
    }
L_001aa438:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa43c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aa440:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001aa444:;
    {
        cpu->r[14] = 0x001aa448u; fn_001b3648(cpu);
    }
L_001aa448:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001aa44c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001aa450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa488;
        }
    }
L_001aa454:;
    {
        cpu->r[1] = rd32(0x001aa45cu + + 0x368u);
    }
L_001aa458:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001aa45c:;
    {
        cpu->r[2] = rd32(0x001aa464u + + 0x364u);
    }
L_001aa460:;
    {
        cpu->r[14] = 0x000000b0u;
    }
L_001aa464:;
    {
        cpu->r[3] = rd32(0x001aa46cu + + 0x360u);
    }
L_001aa468:;
    {
        cpu->r[1] = add_flags(cpu, 0x001aa470u, cpu->r[1], 0, 0);
    }
L_001aa46c:;
    {
        cpu->r[12] = rd32(0x001aa474u + + 0x35cu);
    }
L_001aa470:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aa478u, cpu->r[2], 0, 0);
    }
L_001aa474:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa47cu, cpu->r[3], 0, 0);
    }
L_001aa478:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001aa47c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001aa484u, cpu->r[12], 0, 0);
    }
L_001aa480:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aa484:;
    {
        cpu->r[14] = 0x001aa488u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001aa488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa48c:;
    {
        cpu->r[2] = 0x00000066u;
    }
L_001aa490:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aa494:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_001aa498:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001aa49c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001aa4a0:;
    {
        cpu->r[14] = 0x001aa4a4u; fn_000ae3d0(cpu);
    }
L_001aa4a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa4a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa4ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001aa4b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001500u, 0, 0);
    }
L_001aa4b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_001aa4b8:;
    {
        cpu->r[14] = 0x001aa4bcu; fn_001b350c(cpu);
    }
L_001aa4bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa4c0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001aa4c4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001aa4c8:;
    {
        cpu->r[14] = 0x001aa4ccu; fn_001b3648(cpu);
    }
L_001aa4cc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001aa4d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_001aa4d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa50c;
        }
    }
L_001aa4d8:;
    {
        cpu->r[1] = rd32(0x001aa4e0u + + 0x2f4u);
    }
L_001aa4dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001aa4e0:;
    {
        cpu->r[2] = rd32(0x001aa4e8u + + 0x2f0u);
    }
L_001aa4e4:;
    {
        cpu->r[14] = 0x000000bcu;
    }
L_001aa4e8:;
    {
        cpu->r[3] = rd32(0x001aa4f0u + + 0x2ecu);
    }
L_001aa4ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001aa4f4u, cpu->r[1], 0, 0);
    }
L_001aa4f0:;
    {
        cpu->r[12] = rd32(0x001aa4f8u + + 0x2e8u);
    }
L_001aa4f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aa4fcu, cpu->r[2], 0, 0);
    }
L_001aa4f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa500u, cpu->r[3], 0, 0);
    }
L_001aa4fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001aa500:;
    {
        cpu->r[12] = add_flags(cpu, 0x001aa508u, cpu->r[12], 0, 0);
    }
L_001aa504:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aa508:;
    {
        cpu->r[14] = 0x001aa50cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001aa50c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa510:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001aa514:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001aa518:;
    {
        cpu->r[5] = 0x000063e8u;
    }
L_001aa51c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_001aa520:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_001aa524:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001aa528:;
    {
        cpu->r[14] = 0x001aa52cu; fn_00093230(cpu);
    }
L_001aa52c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa530:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001aa534:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001aa538:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aa53c:;
    {
        cpu->r[14] = 0x001aa544u;
    }
L_001aa540:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa544u)) return;
    }
L_001aa544:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001aa548:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aa54c:;
    {
        cpu->r[14] = 0x001aa550u; imp_strcmp(cpu); /* strcmp */
    }
L_001aa550:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aa554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa6c0;
        }
    }
L_001aa558:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001aa55c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001aa560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa6e8;
        }
    }
L_001aa564:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x26u);
    }
L_001aa568:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001aa56c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aa438;
        }
    }
L_001aa570:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa574:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aa578:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001aa57c:;
    {
        cpu->r[14] = 0x001aa580u; fn_001b3648(cpu);
    }
L_001aa580:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001aa584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001aa588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa5c0;
        }
    }
L_001aa58c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001aa590:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001aa594:;
    {
        cpu->r[2] = rd32(0x001aa59cu + + 0x248u);
    }
L_001aa598:;
    {
        cpu->r[14] = 0x000000d1u;
    }
L_001aa59c:;
    {
        cpu->r[3] = rd32(0x001aa5a4u + + 0x244u);
    }
L_001aa5a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001aa5a8u, cpu->r[12], 0, 0);
    }
L_001aa5a4:;
    {
        cpu->r[12] = rd32(0x001aa5acu + + 0x240u);
    }
L_001aa5a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aa5b0u, cpu->r[2], 0, 0);
    }
L_001aa5ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aa5b4u, cpu->r[3], 0, 0);
    }
L_001aa5b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001aa5b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001aa5bcu, cpu->r[12], 0, 0);
    }
L_001aa5b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aa5bc:;
    {
        cpu->r[14] = 0x001aa5c0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001aa5c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa5c4:;
    {
        cpu->r[2] = 0x00000066u;
    }
L_001aa5c8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aa5cc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_001aa5d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001aa5d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001aa5d8:;
    {
        cpu->r[14] = 0x001aa5dcu; fn_000ae3d0(cpu);
    }
L_001aa5dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa5e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa5e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001aa5e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001680u, 0, 0);
    }
L_001aa5ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000025u, 0, 0);
    }
L_001aa5f0:;
    {
        cpu->r[14] = 0x001aa5f4u; fn_001b350c(cpu);
    }
L_001aa5f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa5f8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001aa5fc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001aa600:;
    {
        cpu->r[14] = 0x001aa604u; fn_001b3648(cpu);
    }
L_001aa604:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001aa608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_001aa60c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa630;
        }
    }
L_001aa610:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001aa614:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001aa618:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001aa61c:;
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
L_001aa620:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aa624:;
    {
        cpu->r[12] = 0x000000dfu;
    }
L_001aa628:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001aa62c:;
    {
        cpu->r[14] = 0x001aa630u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001aa630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa634:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001aa638:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001aa63c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11] + cpu->r[3]; cpu->r[3] = v;
    }
L_001aa640:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001aa644:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001680u, 0, 0);
    }
L_001aa648:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002du, 0, 0);
    }
L_001aa64c:;
    {
        cpu->r[14] = 0x001aa650u; fn_00093230(cpu);
    }
L_001aa650:;
    {
        goto L_001aa558;
    }
L_001aa654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f4u);
    }
L_001aa658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aa65c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001aa660:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_001aa664:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aa2e0;
        }
    }
L_001aa668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001aa66c:;
    {
        cpu->r[2] = 0x0000041du;
    }
L_001aa670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001aa674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa768;
        }
    }
L_001aa678:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001aa67c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001aa680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aa2e0;
        }
    }
L_001aa684:;
    {
        cpu->r[3] = rd32(0x001aa68cu + + 0x164u);
    }
L_001aa688:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001aa68c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aa690:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001aa694:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa698:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001aa69c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001aa6a0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001aa6a4:;
    {
        cpu->r[14] = 0x001aa6a8u; fn_00096928(cpu);
    }
L_001aa6a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001aa6ac:;
    {
        cpu->r[14] = 0x001aa6b0u; fn_0009992c(cpu);
    }
L_001aa6b0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001aa6b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aa6b8:;
    {
        cpu->r[14] = 0x001aa6bcu; fn_000f34e8(cpu);
    }
L_001aa6bc:;
    {
        goto L_001aa2e0;
    }
L_001aa6c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa6c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001aa6c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001aa6cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aa6d0:;
    {
        cpu->r[14] = 0x001aa6d8u;
    }
L_001aa6d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa6d8u)) return;
    }
L_001aa6d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa6dc:;
    {
        cpu->r[3] = 0x000063ecu;
    }
L_001aa6e0:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001aa6e4:;
    {
        goto L_001aa558;
    }
L_001aa6e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001aa6ec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001aa6f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa6fc;
        }
    }
L_001aa6f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aa6f8:;
    {
        cpu->r[14] = 0x001aa6fcu; fn_0018ba60(cpu);
    }
L_001aa6fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001aa700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa70c;
        }
    }
L_001aa704:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001aa708:;
    {
        cpu->r[14] = 0x001aa70cu; fn_0018ba60(cpu);
    }
L_001aa70c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001aa710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa724;
        }
    }
L_001aa714:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa718:;
    {
        cpu->r[14] = 0x001aa71cu; fn_001b36e4(cpu);
    }
L_001aa71c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aa720:;
    {
        cpu->r[14] = 0x001aa724u; fn_0018ba20(cpu);
    }
L_001aa724:;
    {
        cpu->r[3] = rd32(0x001aa72cu + + 0xc4u);
    }
L_001aa728:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aa72c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001aa730:;
    {
        cpu->r[14] = 0x001aa734u; fn_00099968(cpu);
    }
L_001aa734:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001aa738:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aa73c:;
    {
        cpu->r[14] = 0x001aa740u; fn_000f35e4(cpu);
    }
L_001aa740:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001aa744:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001aa748:;
    {
        cpu->r[14] = 0x001aa74cu; fn_0018ba6c(cpu);
    }
L_001aa74c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aa750:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aa754:;
    {
        cpu->r[14] = 0x001aa758u; fn_000f22d4(cpu);
    }
L_001aa758:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa75c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aa760:;
    {
        cpu->r[14] = 0x001aa764u; fn_000f361c(cpu);
    }
L_001aa764:;
    {
        goto L_001aa2e0;
    }
L_001aa768:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa76c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001aa770:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001aa774:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001aa778:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001aa77c:;
    {
        cpu->r[14] = 0x001aa780u; fn_000fd224(cpu);
    }
L_001aa780:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001aa784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aa684;
        }
    }
L_001aa788:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aa78c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001aa790:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001aa794:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001aa798:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001aa79c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001aa7a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aa7a4:;
    {
        cpu->r[14] = 0x001aa7a8u; fn_000fd248(cpu);
    }
L_001aa7a8:;
    {
        goto L_001aa684;
    }
}

/* _ZN21GS_ClientWaitingStart8DoActionEii @ 001aa7f4 (arm) */
void fn_001aa7f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa7f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001aa7f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aa7fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001aa800:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aa804:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa808u)) return;
        }
    }
L_001aa808:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001aa80c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001aa810:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aa88c;
        }
    }
L_001aa814:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001aa818:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001aa81c:;
    {
        cpu->r[3] = 0x0000041du;
    }
L_001aa820:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001aa824:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_001aa828:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001aa82c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001aa830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001aa834:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001aa838:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001aa83c:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001aa840:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa844u)) return;
        }
    }
L_001aa844:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001aa848:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_001aa84c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001aa850:;
    {
        cpu->r[14] = 0x001aa854u; fn_00093f34(cpu);
    }
L_001aa854:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001aa858:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aa85c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001aa860:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001aa864:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001aa868:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001aa86c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa870u)) return;
        }
    }
L_001aa870:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001aa874:;
    {
        cpu->r[14] = 0x001aa878u; fn_00093f34(cpu);
    }
L_001aa878:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001aa87c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001aa880:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001aa884:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001aa888:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa88cu)) return;
    }
L_001aa88c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001aa890:;
    {
        cpu->r[14] = 0x001aa898u;
    }
L_001aa894:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa898u)) return;
    }
L_001aa898:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa89cu)) return;
    }
}

/* _ZN21GS_ClientWaitingStartD1Ev @ 001aa89c (arm) */
void fn_001aa89c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa89c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aa8a0:;
    {
        cpu->r[4] = rd32(0x001aa8a8u + + 0x68u);
    }
L_001aa8a4:;
    {
        cpu->r[3] = rd32(0x001aa8acu + + 0x68u);
    }
L_001aa8a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aa8ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aa8b4u, cpu->r[4], 0, 0);
    }
L_001aa8b0:;
    {
        cpu->r[2] = rd32(0x001aa8b8u + + 0x60u);
    }
L_001aa8b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aa8b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aa8bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aa8c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aa8c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aa8c8:;
    {
        cpu->r[2] = 0x00005f98u;
    }
L_001aa8cc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001aa8d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001aa8d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa8f0;
        }
    }
L_001aa8d8:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001aa8dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001aa8e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa8e4:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001aa8e8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001aa8ec:;
    {
        cpu->r[14] = 0x001aa8f0u; fn_00096928(cpu);
    }
L_001aa8f0:;
    {
        cpu->r[3] = rd32(0x001aa8f8u + + 0x24u);
    }
L_001aa8f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa8f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aa8fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aa900:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aa904:;
    {
        cpu->r[14] = 0x001aa908u; fn_000ec21c(cpu);
    }
L_001aa908:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa90c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa910u)) return;
    }
}

/* _ZN21GS_ClientWaitingStartD0Ev @ 001aa920 (arm) */
void fn_001aa920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa920:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aa924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aa928:;
    {
        cpu->r[14] = 0x001aa92cu; fn_001aa89c(cpu);
    }
L_001aa92c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aa930:;
    {
        cpu->r[14] = 0x001aa934u; fn_0018ba20(cpu);
    }
L_001aa934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aa938:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa93cu)) return;
    }
}

/* _ZN21GS_ClientWaitingStartD2Ev @ 001aa93c (arm) */
void fn_001aa93c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa93c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aa940:;
    {
        cpu->r[4] = rd32(0x001aa948u + + 0x68u);
    }
L_001aa944:;
    {
        cpu->r[3] = rd32(0x001aa94cu + + 0x68u);
    }
L_001aa948:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aa94c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aa954u, cpu->r[4], 0, 0);
    }
L_001aa950:;
    {
        cpu->r[2] = rd32(0x001aa958u + + 0x60u);
    }
L_001aa954:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aa958:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aa95c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aa960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aa964:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aa968:;
    {
        cpu->r[2] = 0x00005f98u;
    }
L_001aa96c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001aa970:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001aa974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aa990;
        }
    }
L_001aa978:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001aa97c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001aa980:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aa984:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001aa988:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001aa98c:;
    {
        cpu->r[14] = 0x001aa990u; fn_00096928(cpu);
    }
L_001aa990:;
    {
        cpu->r[3] = rd32(0x001aa998u + + 0x24u);
    }
L_001aa994:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa998:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aa99c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aa9a0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aa9a4:;
    {
        cpu->r[14] = 0x001aa9a8u; fn_000ec21c(cpu);
    }
L_001aa9a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa9ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aa9b0u)) return;
    }
}

/* _ZN21GS_ClientWaitingStartC1Ev @ 001aa9c0 (arm) */
void fn_001aa9c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aa9c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aa9c4:;
    {
        cpu->r[4] = rd32(0x001aa9ccu + + 0x38u);
    }
L_001aa9c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aa9cc:;
    {
        cpu->r[14] = 0x001aa9d0u; fn_0010ffa8(cpu);
    }
L_001aa9d0:;
    {
        cpu->r[2] = rd32(0x001aa9d8u + + 0x30u);
    }
L_001aa9d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aa9dcu, cpu->r[4], 0, 0);
    }
L_001aa9d8:;
    {
        cpu->r[3] = rd32(0x001aa9e0u + + 0x2cu);
    }
L_001aa9dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aa9e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aa9e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aa9e8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001aa9ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aa9f0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aa9f4:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001aa9f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001aa9fc:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001aaa00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aaa04u)) return;
    }
}

/* _ZN21GS_ClientWaitingStartC2Ev @ 001aaa10 (arm) */
void fn_001aaa10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaa10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aaa14:;
    {
        cpu->r[4] = rd32(0x001aaa1cu + + 0x38u);
    }
L_001aaa18:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aaa1c:;
    {
        cpu->r[14] = 0x001aaa20u; fn_0010ffa8(cpu);
    }
L_001aaa20:;
    {
        cpu->r[2] = rd32(0x001aaa28u + + 0x30u);
    }
L_001aaa24:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aaa2cu, cpu->r[4], 0, 0);
    }
L_001aaa28:;
    {
        cpu->r[3] = rd32(0x001aaa30u + + 0x2cu);
    }
L_001aaa2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aaa30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001aaa34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aaa38:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001aaa3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aaa40:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aaa44:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001aaa48:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001aaa4c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001aaa50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aaa54u)) return;
    }
}

/* _ZN17GS_ConnectionLost8isKindOfEi @ 001aaa60 (arm) */
void fn_001aaa60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaa60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_001aaa64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001aaa68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001aaa6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_73 @ 001aaa70 (arm) */
void fn_001aaa70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaa70:;
    {
        cpu->r[3] = rd32(0x001aaa78u + + 0x48u);
    }
L_001aaa74:;
    {
        cpu->r[1] = rd32(0x001aaa7cu + + 0x48u);
    }
L_001aaa78:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aaa80u, cpu->r[3], 0, 0);
    }
L_001aaa7c:;
    {
        cpu->r[2] = rd32(0x001aaa84u + + 0x44u);
    }
L_001aaa80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aaa84:;
    {
        cpu->r[2] = add_flags(cpu, 0x001aaa8cu, cpu->r[2], 0, 0);
    }
L_001aaa88:;
    {
        cpu->r[1] = rd32(0x001aaa90u + + 0x3cu);
    }
L_001aaa8c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001aaa90:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001aaa94:;
    {
        cpu->r[3] = rd32(0x001aaa9cu + + 0x34u);
    }
L_001aaa98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000108u, 1, 0);
    }
L_001aaa9c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001aaaa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aaaa8u, cpu->r[3], 0, 0);
    }
L_001aaaa4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001aaaa8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x0000003cu, 1, 0);
    }
L_001aaaac:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001aaab0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001aaab4:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_001aaab8:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001aaabc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17GS_ConnectionLostD1Ev @ 001aaad4 (arm) */
void fn_001aaad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaad4:;
    {
        cpu->r[3] = rd32(0x001aaadcu + + 0x24u);
    }
L_001aaad8:;
    {
        cpu->r[2] = rd32(0x001aaae0u + + 0x24u);
    }
L_001aaadc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aaae4u, cpu->r[3], 0, 0);
    }
L_001aaae0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aaae4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aaae8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aaaec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aaaf0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aaaf4:;
    {
        cpu->r[14] = 0x001aaaf8u; fn_000ec21c(cpu);
    }
L_001aaaf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aaafc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aab00u)) return;
    }
}

/* _ZN17GS_ConnectionLost6UpdateEv @ 001aab08 (arm) */
void fn_001aab08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aab08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001aab0c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001aab10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001aab14:;
    {
        cpu->r[4] = rd32(0x001aab1cu + + 0x3d8u);
    }
L_001aab18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001aab1c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aab20:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aab28u, cpu->r[4], 0, 0);
    }
L_001aab24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aab44;
        }
    }
L_001aab28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001aab2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aab50;
        }
    }
L_001aab30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aab34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001aab38:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_001aab3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aab40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aab44u)) return;
    }
L_001aab44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aab48:;
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
L_001aab4c:;
    {
        return fn_00128a5c(cpu);
    }
L_001aab50:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_001aab54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aab58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001aab5c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[3]);
        }
    }
L_001aab60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aab3c;
        }
    }
L_001aab64:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xc4u);
    }
L_001aab68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001aab6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aab3c;
        }
    }
L_001aab70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001aab74:;
    {
        cpu->r[14] = 0x001aab78u; fn_00096928(cpu);
    }
L_001aab78:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x950u);
    }
L_001aab7c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001aab80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aabb0;
        }
    }
L_001aab84:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000006u, 1, 1);
    }
L_001aab88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aac9c;
        }
    }
L_001aab8c:;
    {
        cpu->r[0] = rd32(0x001aab94u + + 0x364u);
    }
L_001aab90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aab94:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001aab98:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001aab9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001aaba0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001aaba4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aaba8:;
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
L_001aabac:;
    {
        return fn_0009b14c(cpu);
    }
L_001aabb0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aabb4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001aabb8:;
    {
        cpu->r[14] = 0x001aabbcu; fn_000f35e4(cpu);
    }
L_001aabbc:;
    {
        cpu->r[14] = 0x001aabc0u; fn_000979a0(cpu);
    }
L_001aabc0:;
    {
        cpu->r[14] = 0x001aabc4u; fn_00093f98(cpu);
    }
L_001aabc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aabc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aae14;
        }
    }
L_001aabcc:;
    {
        cpu->r[5] = rd32(0x001aabd4u + + 0x324u);
    }
L_001aabd0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aabd4:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001aabd8:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_001aabdc:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_001aabe0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001aabe4:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001aabe8:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001aabec:;
    {
        cpu->r[14] = 0x001aabf0u; fn_0018ba6c(cpu);
    }
L_001aabf0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001aabf4:;
    {
        cpu->r[14] = 0x001aabf8u; fn_0010ff40(cpu);
    }
L_001aabf8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aabfc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aac00:;
    {
        cpu->r[14] = 0x001aac04u; fn_000f361c(cpu);
    }
L_001aac04:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001aac08:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_001aac0c:;
    {
        cpu->r[14] = 0x001aac10u; fn_0018ba6c(cpu);
    }
L_001aac10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aac14:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001aac18:;
    {
        cpu->r[14] = 0x001aac1cu; fn_001ade44(cpu);
    }
L_001aac1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aac20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aac24:;
    {
        cpu->r[14] = 0x001aac28u; fn_000f361c(cpu);
    }
L_001aac28:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_001aac2c:;
    {
        cpu->r[3] = 0x000063c1u;
    }
L_001aac30:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001aac34:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aac38:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_001aac3c:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_001aac40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aac44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aae7c;
        }
    }
L_001aac48:;
    {
        cpu->r[3] = 0x0000675eu;
    }
L_001aac4c:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001aac50:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_001aac54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aac58:;
    {
        cpu->r[3] = 0x00005f54u;
    }
L_001aac5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001aac60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001aac64:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001aac68:;
    {
        cpu->r[14] = 0x001aac6cu; fn_0018ba6c(cpu);
    }
L_001aac6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aac70:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aac74:;
    {
        cpu->r[14] = 0x001aac78u; fn_001aeb50(cpu);
    }
L_001aac78:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aac7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aac80:;
    {
        cpu->r[14] = 0x001aac84u; fn_000f361c(cpu);
    }
L_001aac84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aac88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aac8c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001aac90:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_001aac94:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001aac98:;
    {
        goto L_001aab3c;
    }
L_001aac9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aaca0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001aaca4:;
    {
        cpu->r[14] = 0x001aaca8u; fn_000f35e4(cpu);
    }
L_001aaca8:;
    {
        cpu->r[14] = 0x001aacacu; fn_000979a0(cpu);
    }
L_001aacac:;
    {
        cpu->r[14] = 0x001aacb0u; fn_00093f98(cpu);
    }
L_001aacb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aacb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001aae48;
        }
    }
L_001aacb8:;
    {
        cpu->r[5] = rd32(0x001aacc0u + + 0x238u);
    }
L_001aacbc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aacc0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001aacc4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_001aacc8:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_001aaccc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001aacd0:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001aacd4:;
    {
        wr8(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001aacd8:;
    {
        cpu->r[14] = 0x001aacdcu; fn_0018ba6c(cpu);
    }
L_001aacdc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001aace0:;
    {
        cpu->r[14] = 0x001aace4u; fn_0010ff40(cpu);
    }
L_001aace4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aace8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aacec:;
    {
        cpu->r[14] = 0x001aacf0u; fn_000f361c(cpu);
    }
L_001aacf0:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001aacf4:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_001aacf8:;
    {
        cpu->r[14] = 0x001aacfcu; fn_0018ba6c(cpu);
    }
L_001aacfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aad00:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aad04:;
    {
        cpu->r[14] = 0x001aad08u; fn_001ade44(cpu);
    }
L_001aad08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aad0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aad10:;
    {
        cpu->r[14] = 0x001aad14u; fn_000f361c(cpu);
    }
L_001aad14:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_001aad18:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_001aad1c:;
    {
        cpu->r[14] = 0x001aad20u; fn_0018ba6c(cpu);
    }
L_001aad20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aad24:;
    {
        cpu->r[14] = 0x001aad28u; fn_0019a244(cpu);
    }
L_001aad28:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aad2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001aad30:;
    {
        cpu->r[14] = 0x001aad34u; fn_000f361c(cpu);
    }
L_001aad34:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aad38:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001aad3c:;
    {
        cpu->r[14] = 0x001aad40u; fn_001933d4(cpu);
    }
L_001aad40:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_001aad44:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001aad48:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001aad4c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001aad50:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x8au);
    }
L_001aad54:;
    {
        wr8(cpu->r[0] + + 0x90u, cpu->r[3]);
    }
L_001aad58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001aad5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aaee8;
        }
    }
L_001aad60:;
    {
        cpu->r[3] = 0x00006782u;
    }
L_001aad64:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_001aad68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aad6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aaea4;
        }
    }
L_001aad70:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_001aad74:;
    {
        cpu->r[14] = 0x001aad78u; fn_0018ba6c(cpu);
    }
L_001aad78:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001aad7c:;
    {
        cpu->r[14] = 0x001aad80u; fn_0019ac34(cpu);
    }
L_001aad80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aad84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aad88:;
    {
        cpu->r[14] = 0x001aad8cu; fn_000f361c(cpu);
    }
L_001aad8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aad90:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001aad94:;
    {
        cpu->r[3] = 0x00006784u;
    }
L_001aad98:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_001aad9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001aada0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aaec8;
        }
    }
L_001aada4:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_001aada8:;
    {
        cpu->r[14] = 0x001aadacu; fn_0018ba6c(cpu);
    }
L_001aadac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001aadb0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001aadb4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001aadb8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001aadbc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aadc0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001aadc4:;
    {
        cpu->r[12] = 0x000004c1u;
    }
L_001aadc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001aadcc:;
    {
        cpu->r[12] = 0x00000412u;
    }
L_001aadd0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001aadd4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aadd8:;
    {
        cpu->r[14] = 0x001aaddcu; fn_001239a4(cpu);
    }
L_001aaddc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aade0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aade4:;
    {
        cpu->r[14] = 0x001aade8u; fn_000f361c(cpu);
    }
L_001aade8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aadec:;
    {
        cpu->r[0] = 0x000009c8u;
    }
L_001aadf0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001aadf4:;
    {
        cpu->r[14] = 0x001aadf8u; fn_0018ba6c(cpu);
    }
L_001aadf8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aadfc:;
    {
        cpu->r[14] = 0x001aae00u; fn_0019bd08(cpu);
    }
L_001aae00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aae04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aae08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aae0c:;
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
L_001aae10:;
    {
        return fn_000f361c(cpu);
    }
L_001aae14:;
    {
        cpu->r[5] = rd32(0x001aae1cu + + 0xdcu);
    }
L_001aae18:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aae1c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aae20:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aae24:;
    {
        cpu->r[14] = 0x001aae28u; fn_00099b28(cpu);
    }
L_001aae28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aae2c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001aae30:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aae34:;
    {
        cpu->r[14] = 0x001aae38u; fn_000a2764(cpu);
    }
L_001aae38:;
    {
        cpu->r[14] = 0x001aae3cu; fn_000979a0(cpu);
    }
L_001aae3c:;
    {
        cpu->r[14] = 0x001aae40u; fn_00093fb8(cpu);
    }
L_001aae40:;
    {
        cpu->r[14] = 0x001aae44u; fn_000a0ea4(cpu);
    }
L_001aae44:;
    {
        goto L_001aabd0;
    }
L_001aae48:;
    {
        cpu->r[5] = rd32(0x001aae50u + + 0xa8u);
    }
L_001aae4c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001aae50:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aae54:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aae58:;
    {
        cpu->r[14] = 0x001aae5cu; fn_00099b28(cpu);
    }
L_001aae5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aae60:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001aae64:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001aae68:;
    {
        cpu->r[14] = 0x001aae6cu; fn_000a2764(cpu);
    }
L_001aae6c:;
    {
        cpu->r[14] = 0x001aae70u; fn_000979a0(cpu);
    }
L_001aae70:;
    {
        cpu->r[14] = 0x001aae74u; fn_00093fb8(cpu);
    }
L_001aae74:;
    {
        cpu->r[14] = 0x001aae78u; fn_000a0ea4(cpu);
    }
L_001aae78:;
    {
        goto L_001aacbc;
    }
L_001aae7c:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_001aae80:;
    {
        cpu->r[14] = 0x001aae84u; fn_0018ba6c(cpu);
    }
L_001aae84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001aae88:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001aae8c:;
    {
        cpu->r[14] = 0x001aae90u; fn_001abc1c(cpu);
    }
L_001aae90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aae94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001aae98:;
    {
        cpu->r[14] = 0x001aae9cu; fn_000f361c(cpu);
    }
L_001aae9c:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_001aaea0:;
    {
        goto L_001aac48;
    }
L_001aaea4:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_001aaea8:;
    {
        cpu->r[14] = 0x001aaeacu; fn_0018ba6c(cpu);
    }
L_001aaeac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aaeb0:;
    {
        cpu->r[14] = 0x001aaeb4u; fn_0019d45c(cpu);
    }
L_001aaeb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001aaeb8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001aaebc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001aaec0:;
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
L_001aaec4:;
    {
        return fn_000f361c(cpu);
    }
L_001aaec8:;
    {
        cpu->r[0] = 0x000009b8u;
    }
L_001aaecc:;
    {
        cpu->r[14] = 0x001aaed0u; fn_0018ba6c(cpu);
    }
L_001aaed0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001aaed4:;
    {
        cpu->r[14] = 0x001aaed8u; fn_0019f5a8(cpu);
    }
L_001aaed8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aaedc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001aaee0:;
    {
        cpu->r[14] = 0x001aaee4u; fn_000f361c(cpu);
    }
L_001aaee4:;
    {
        goto L_001aade8;
    }
L_001aaee8:;
    {
        cpu->r[14] = 0x001aaeecu; fn_001c4600(cpu);
    }
L_001aaeec:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_001aaef0:;
    {
        goto L_001aad60;
    }
}

/* _ZN17GS_ConnectionLost8DoActionEii @ 001aaefc (arm) */
void fn_001aaefc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaefc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001aaf00:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001aaf04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001aaf08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001aaf0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aaf18;
        }
    }
L_001aaf10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001aaf14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aaf18u)) return;
    }
L_001aaf18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001aaf1c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001aaf20:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[1]);
    }
L_001aaf24:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001aaf28:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001aaf2c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[1]);
    }
L_001aaf30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001aaf34:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001aaf38:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001aaf3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aaf40:;
    {
        cpu->r[14] = 0x001aaf44u; fn_000fd248(cpu);
    }
L_001aaf44:;
    {
        goto L_001aaf10;
    }
}

/* _ZN17GS_ConnectionLostC1Ei @ 001aaf48 (arm) */
void fn_001aaf48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaf48:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aaf4c:;
    {
        cpu->r[4] = rd32(0x001aaf54u + + 0x28u);
    }
L_001aaf50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aaf54:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001aaf58:;
    {
        cpu->r[14] = 0x001aaf5cu; fn_0010ffa8(cpu);
    }
L_001aaf5c:;
    {
        cpu->r[3] = rd32(0x001aaf64u + + 0x1cu);
    }
L_001aaf60:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aaf68u, cpu->r[4], 0, 0);
    }
L_001aaf64:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_001aaf68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aaf6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aaf70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aaf74:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aaf78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aaf7cu)) return;
    }
}

/* _ZN17GS_ConnectionLostC2Ei @ 001aaf84 (arm) */
void fn_001aaf84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaf84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aaf88:;
    {
        cpu->r[4] = rd32(0x001aaf90u + + 0x28u);
    }
L_001aaf8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001aaf90:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001aaf94:;
    {
        cpu->r[14] = 0x001aaf98u; fn_0010ffa8(cpu);
    }
L_001aaf98:;
    {
        cpu->r[3] = rd32(0x001aafa0u + + 0x1cu);
    }
L_001aaf9c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aafa4u, cpu->r[4], 0, 0);
    }
L_001aafa0:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_001aafa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001aafa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001aafac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001aafb0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001aafb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aafb8u)) return;
    }
}

/* _ZN17GS_ConnectionLostD0Ev @ 001aafc0 (arm) */
void fn_001aafc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aafc0:;
    {
        cpu->r[3] = rd32(0x001aafc8u + + 0x2cu);
    }
L_001aafc4:;
    {
        cpu->r[2] = rd32(0x001aafccu + + 0x2cu);
    }
L_001aafc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aafd0u, cpu->r[3], 0, 0);
    }
L_001aafcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001aafd0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001aafd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aafd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001aafdc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001aafe0:;
    {
        cpu->r[14] = 0x001aafe4u; fn_000ec21c(cpu);
    }
L_001aafe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aafe8:;
    {
        cpu->r[14] = 0x001aafecu; fn_0018ba20(cpu);
    }
L_001aafec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001aaff0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aaff4u)) return;
    }
}

/* _ZN17GS_ConnectionLost6RenderEv @ 001aaffc (arm) */
void fn_001aaffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aaffc:;
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
L_001ab000:;
    {
        cpu->r[5] = rd32(0x001ab008u + + 0x230u);
    }
L_001ab004:;
    {
        cpu->r[8] = rd32(0x001ab00cu + + 0x230u);
    }
L_001ab008:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001ab00c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ab014u, cpu->r[5], 0, 0);
    }
L_001ab010:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ab014:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001ab018:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ab01c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab118;
        }
    }
L_001ab024:;
    {
        cpu->r[7] = rd32(0x001ab02cu + + 0x214u);
    }
L_001ab028:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ab02c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001ab030:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ab034:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001ab038:;
    {
        cpu->r[14] = 0x001ab03cu; fn_0018aa44(cpu);
    }
L_001ab03c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001ab040:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ab044:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ab048:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001ab04c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001ab050:;
    {
        cpu->r[14] = 0x001ab054u; fn_000ad8a0(cpu);
    }
L_001ab054:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ab058:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ab05c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ab088;
        }
    }
L_001ab060:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ab064:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab068:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab06c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab070:;
    {
        cpu->r[14] = 0x001ab078u;
    }
L_001ab074:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab078u)) return;
    }
L_001ab078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ab07c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001ab080:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ab084:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ab060;
        }
    }
L_001ab088:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001ab08c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ab090:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab1f8;
        }
    }
L_001ab098:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ab09c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ab0a0:;
    {
        cpu->r[14] = 0x001ab0a4u; fn_00096a08(cpu);
    }
L_001ab0a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab0a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab0ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001ab0b0:;
    {
        cpu->r[14] = 0x001ab0b4u; fn_0018aa44(cpu);
    }
L_001ab0b4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab110;
        }
    }
L_001ab0bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ab0c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ab0c4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = 0x00000498u;
        }
    }
L_001ab0c8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ab160;
        }
    }
L_001ab0cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ab0d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000499u;
        }
    }
L_001ab0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab160;
        }
    }
L_001ab0d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001ab0dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x0000049au;
        }
    }
L_001ab0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab160;
        }
    }
L_001ab0e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001ab0e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x0000049bu;
        }
    }
L_001ab0ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab160;
        }
    }
L_001ab0f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001ab0f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x0000049cu;
        }
    }
L_001ab0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab160;
        }
    }
L_001ab0fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001ab100:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x0000049du;
        }
    }
L_001ab104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab160;
        }
    }
L_001ab108:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001ab10c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab15c;
        }
    }
L_001ab110:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001ab114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab118u)) return;
    }
L_001ab118:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab11c:;
    {
        cpu->r[14] = 0x001ab120u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab120:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab024;
        }
    }
L_001ab128:;
    {
        cpu->r[7] = rd32(0x001ab130u + + 0x110u);
    }
L_001ab12c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001ab130:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab134:;
    {
        cpu->r[14] = 0x001ab138u; fn_0018aa20(cpu);
    }
L_001ab138:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab13c:;
    {
        cpu->r[14] = 0x001ab140u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab140:;
    {
        cpu->r[3] = rd32(0x001ab148u + + 0xfcu);
    }
L_001ab144:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab148:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab14c:;
    {
        cpu->r[3] = rd32(0x001ab154u + + 0xf4u);
    }
L_001ab150:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab154:;
    {
        cpu->r[14] = 0x001ab158u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab158:;
    {
        goto L_001ab028;
    }
L_001ab15c:;
    {
        cpu->r[7] = 0x0000049eu;
    }
L_001ab160:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ab164:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab168:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab16c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001ab170:;
    {
        cpu->r[14] = 0x001ab178u;
    }
L_001ab174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab178u)) return;
    }
L_001ab178:;
    {
        cpu->r[3] = rd32(0x001ab180u + + 0xccu);
    }
L_001ab17c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ab180:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab184:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ab188:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 0);
    }
L_001ab18c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab190:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab194:;
    {
        cpu->r[14] = 0x001ab198u; fn_000a9818(cpu);
    }
L_001ab198:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ab19c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab1a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab1a4:;
    {
        cpu->r[14] = 0x001ab1acu;
    }
L_001ab1a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab1acu)) return;
    }
L_001ab1ac:;
    {
        cpu->r[14] = rd32(0x001ab1b4u + + 0x9cu);
    }
L_001ab1b0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ab1b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ab1b8:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001ab1bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001ab1c0:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001ab1c4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ab1c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001ab1cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001ab1d0:;
    {
        cpu->r[4] = 0x00000011u;
    }
L_001ab1d4:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001ab1d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ab1dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001ab1e0:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001ab1e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ab1e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab1ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab1f0:;
    {
        cpu->r[14] = 0x001ab1f4u; fn_000ac4bc(cpu);
    }
L_001ab1f4:;
    {
        goto L_001ab110;
    }
L_001ab1f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab1fc:;
    {
        cpu->r[14] = 0x001ab200u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab200:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab098;
        }
    }
L_001ab208:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001ab20c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab210:;
    {
        cpu->r[14] = 0x001ab214u; fn_0018aa20(cpu);
    }
L_001ab214:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab218:;
    {
        cpu->r[14] = 0x001ab21cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab21c:;
    {
        cpu->r[3] = rd32(0x001ab224u + + 0x20u);
    }
L_001ab220:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab224:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab228:;
    {
        cpu->r[3] = rd32(0x001ab230u + + 0x18u);
    }
L_001ab22c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab230:;
    {
        cpu->r[14] = 0x001ab234u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab234:;
    {
        goto L_001ab098;
    }
}

/* _ZN17GS_ConnectionLost17ApplyMenuSettingsEv @ 001ab254 (arm) */
void fn_001ab254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab254:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ab258:;
    {
        cpu->r[4] = rd32(0x001ab260u + + 0x13cu);
    }
L_001ab25c:;
    {
        cpu->r[5] = rd32(0x001ab264u + + 0x13cu);
    }
L_001ab260:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ab264:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ab26cu, cpu->r[4], 0, 0);
    }
L_001ab268:;
    {
        cpu->r[3] = rd32(0x001ab270u + + 0x134u);
    }
L_001ab26c:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001ab270:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001ab274:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001ab278:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ab280u, cpu->r[3], 0, 0);
    }
L_001ab27c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001ab280:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ab284:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001ab288:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ab28c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab2a4;
        }
    }
L_001ab294:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001ab298:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001ab29c:;
    {
        cpu->r[14] = 0x001ab2a0u; fn_000c0d80(cpu);
    }
L_001ab2a0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001ab2a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ab2a8:;
    {
        cpu->r[14] = 0x001ab2acu; fn_00099b0c(cpu);
    }
L_001ab2ac:;
    {
        cpu->r[3] = 0x00000402u;
    }
L_001ab2b0:;
    {
        wr32(cpu->r[6] + + 0x8e0u, cpu->r[3]);
    }
L_001ab2b4:;
    {
        cpu->r[3] = rd32(0x001ab2bcu + + 0xecu);
    }
L_001ab2b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab2bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001ab2c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab2c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab320;
        }
    }
L_001ab2c8:;
    {
        cpu->r[6] = rd32(0x001ab2d0u + + 0xdcu);
    }
L_001ab2cc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001ab2d0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ab2d4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001ab2d8:;
    {
        cpu->r[14] = 0x001ab2dcu; fn_00096a08(cpu);
    }
L_001ab2dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab2e0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab2e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab2e8:;
    {
        cpu->r[14] = 0x001ab2ecu; fn_0018aa44(cpu);
    }
L_001ab2ec:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab2f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab364;
        }
    }
L_001ab2f4:;
    {
        cpu->r[3] = rd32(0x001ab2fcu + + 0xb4u);
    }
L_001ab2f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab2fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ab300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_001ab304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab308u)) return;
        }
    }
L_001ab308:;
    {
        cpu->r[3] = rd32(0x001ab310u + + 0xa4u);
    }
L_001ab30c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ab314u, cpu->r[3], 0, 0);
    }
L_001ab310:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001ab314:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 0);
    }
L_001ab318:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_001ab31c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab320u)) return;
    }
L_001ab320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab324:;
    {
        cpu->r[14] = 0x001ab328u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab328:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab2c8;
        }
    }
L_001ab330:;
    {
        cpu->r[6] = rd32(0x001ab338u + + 0x74u);
    }
L_001ab334:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab338:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab33c:;
    {
        cpu->r[14] = 0x001ab340u; fn_0018aa20(cpu);
    }
L_001ab340:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab344:;
    {
        cpu->r[14] = 0x001ab348u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab348:;
    {
        cpu->r[3] = rd32(0x001ab350u + + 0x68u);
    }
L_001ab34c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab350:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab354:;
    {
        cpu->r[3] = rd32(0x001ab35cu + + 0x60u);
    }
L_001ab358:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab35c:;
    {
        cpu->r[14] = 0x001ab360u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab360:;
    {
        goto L_001ab2cc;
    }
L_001ab364:;
    {
        cpu->r[14] = 0x001ab368u; fn_00097ad0(cpu);
    }
L_001ab368:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ab36c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ab370:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001ab374:;
    {
        cpu->r[14] = 0x001ab378u; fn_00096a08(cpu);
    }
L_001ab378:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001ab37c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ab380:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab384:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab388:;
    {
        cpu->r[14] = 0x001ab38cu; fn_0018aa58(cpu);
    }
L_001ab38c:;
    {
        cpu->r[14] = 0x001ab390u; fn_00097ad0(cpu);
    }
L_001ab390:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ab394:;
    {
        cpu->r[14] = 0x001ab398u; fn_0018b5c8(cpu);
    }
L_001ab398:;
    {
        goto L_001ab2f4;
    }
}

/* _ZN17GS_ConnectionLost11InitSpritesEv @ 001ab3c0 (arm) */
void fn_001ab3c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab3c0:;
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
L_001ab3c4:;
    {
        cpu->r[4] = rd32(0x001ab3ccu + + 0x254u);
    }
L_001ab3c8:;
    {
        cpu->r[7] = rd32(0x001ab3d0u + + 0x254u);
    }
L_001ab3cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ab3d0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ab3d8u, cpu->r[4], 0, 0);
    }
L_001ab3d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ab3d8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ab3dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab4ec;
        }
    }
L_001ab3e4:;
    {
        cpu->r[6] = rd32(0x001ab3ecu + + 0x23cu);
    }
L_001ab3e8:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001ab3ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ab3f0:;
    {
        cpu->r[14] = 0x001ab3f4u; fn_00096a08(cpu);
    }
L_001ab3f4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab3f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab3fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab400:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab404:;
    {
        cpu->r[14] = 0x001ab408u; fn_0018aa44(cpu);
    }
L_001ab408:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ab40c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001ab410:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab414:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_001ab418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab5e4;
        }
    }
L_001ab41c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001ab420:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ab424:;
    {
        cpu->r[14] = 0x001ab428u; fn_00096a08(cpu);
    }
L_001ab428:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab42c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab430:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab434:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab438:;
    {
        cpu->r[14] = 0x001ab43cu; fn_0018aa44(cpu);
    }
L_001ab43c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ab440:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001ab444:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab448:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_001ab44c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab5a8;
        }
    }
L_001ab450:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001ab454:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ab458:;
    {
        cpu->r[14] = 0x001ab45cu; fn_00096a08(cpu);
    }
L_001ab45c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab460:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab464:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab468:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab46c:;
    {
        cpu->r[14] = 0x001ab470u; fn_0018aa44(cpu);
    }
L_001ab470:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ab474:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001ab478:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab47c:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_001ab480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab56c;
        }
    }
L_001ab484:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001ab488:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ab48c:;
    {
        cpu->r[14] = 0x001ab490u; fn_00096a08(cpu);
    }
L_001ab490:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab494:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab498:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab49c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab4a0:;
    {
        cpu->r[14] = 0x001ab4a4u; fn_0018aa44(cpu);
    }
L_001ab4a4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ab4a8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001ab4ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ab4b0:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_001ab4b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab530;
        }
    }
L_001ab4b8:;
    {
        cpu->r[3] = rd32(0x001ab4c0u + + 0x16cu);
    }
L_001ab4bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ab4c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab4c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001ab4c8:;
    {
        cpu->r[14] = 0x001ab4ccu; fn_000f3430(cpu);
    }
L_001ab4cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab4d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001ab4d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab4d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_001ab4dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_001ab4e0:;
    {
        cpu->r[14] = 0x001ab4e4u; fn_0018aa44(cpu);
    }
L_001ab4e4:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_001ab4e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab4ecu)) return;
    }
L_001ab4ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab4f0:;
    {
        cpu->r[14] = 0x001ab4f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab4f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab3e4;
        }
    }
L_001ab4fc:;
    {
        cpu->r[6] = rd32(0x001ab504u + + 0x124u);
    }
L_001ab500:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ab504:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab508:;
    {
        cpu->r[14] = 0x001ab50cu; fn_0018aa20(cpu);
    }
L_001ab50c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab510:;
    {
        cpu->r[14] = 0x001ab514u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab514:;
    {
        cpu->r[3] = rd32(0x001ab51cu + + 0x114u);
    }
L_001ab518:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab51c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab520:;
    {
        cpu->r[3] = rd32(0x001ab528u + + 0x10cu);
    }
L_001ab524:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab528:;
    {
        cpu->r[14] = 0x001ab52cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab52c:;
    {
        goto L_001ab3e8;
    }
L_001ab530:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab534:;
    {
        cpu->r[14] = 0x001ab538u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab538:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab4b8;
        }
    }
L_001ab540:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab544:;
    {
        cpu->r[14] = 0x001ab548u; fn_0018aa20(cpu);
    }
L_001ab548:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab54c:;
    {
        cpu->r[14] = 0x001ab550u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab550:;
    {
        cpu->r[3] = rd32(0x001ab558u + + 0xd8u);
    }
L_001ab554:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab558:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab55c:;
    {
        cpu->r[3] = rd32(0x001ab564u + + 0xd0u);
    }
L_001ab560:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab564:;
    {
        cpu->r[14] = 0x001ab568u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab568:;
    {
        goto L_001ab4b8;
    }
L_001ab56c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab570:;
    {
        cpu->r[14] = 0x001ab574u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab574:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab484;
        }
    }
L_001ab57c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab580:;
    {
        cpu->r[14] = 0x001ab584u; fn_0018aa20(cpu);
    }
L_001ab584:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab588:;
    {
        cpu->r[14] = 0x001ab58cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab58c:;
    {
        cpu->r[3] = rd32(0x001ab594u + + 0x9cu);
    }
L_001ab590:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab594:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab598:;
    {
        cpu->r[3] = rd32(0x001ab5a0u + + 0x94u);
    }
L_001ab59c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab5a0:;
    {
        cpu->r[14] = 0x001ab5a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab5a4:;
    {
        goto L_001ab484;
    }
L_001ab5a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab5ac:;
    {
        cpu->r[14] = 0x001ab5b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab5b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab5b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab450;
        }
    }
L_001ab5b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab5bc:;
    {
        cpu->r[14] = 0x001ab5c0u; fn_0018aa20(cpu);
    }
L_001ab5c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab5c4:;
    {
        cpu->r[14] = 0x001ab5c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab5c8:;
    {
        cpu->r[3] = rd32(0x001ab5d0u + + 0x60u);
    }
L_001ab5cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab5d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab5d4:;
    {
        cpu->r[3] = rd32(0x001ab5dcu + + 0x58u);
    }
L_001ab5d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab5dc:;
    {
        cpu->r[14] = 0x001ab5e0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab5e0:;
    {
        goto L_001ab450;
    }
L_001ab5e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab5e8:;
    {
        cpu->r[14] = 0x001ab5ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ab5ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab5f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab41c;
        }
    }
L_001ab5f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab5f8:;
    {
        cpu->r[14] = 0x001ab5fcu; fn_0018aa20(cpu);
    }
L_001ab5fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ab600:;
    {
        cpu->r[14] = 0x001ab604u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ab604:;
    {
        cpu->r[3] = rd32(0x001ab60cu + + 0x24u);
    }
L_001ab608:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ab60c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab610:;
    {
        cpu->r[3] = rd32(0x001ab618u + + 0x1cu);
    }
L_001ab614:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ab618:;
    {
        cpu->r[14] = 0x001ab61cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ab61c:;
    {
        goto L_001ab41c;
    }
}

/* _ZN24GS_MPLocalChooseCommType8isKindOfEi @ 001ab638 (arm) */
void fn_001ab638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab638:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000055u, 1, 1);
    }
L_001ab63c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ab640:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ab644:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_MPLocalChooseCommType17ApplyMenuSettingsEv @ 001ab648 (arm) */
void fn_001ab648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab648:;
    {
        cpu->r[3] = rd32(0x001ab650u + + 0x44u);
    }
L_001ab64c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ab650:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_001ab654:;
    {
        cpu->r[1] = rd32(0x001ab65cu + + 0x3cu);
    }
L_001ab658:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ab660u, cpu->r[3], 0, 0);
    }
L_001ab65c:;
    {
        cpu->r[2] = rd32(0x001ab664u + + 0x38u);
    }
L_001ab660:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ab664:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ab66cu, cpu->r[2], 0, 0);
    }
L_001ab668:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ab66c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001ab670:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001ab674:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_001ab678:;
    {
        cpu->r[3] = 0x0000064eu;
    }
L_001ab67c:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_001ab680:;
    {
        cpu->r[3] = 0x0000040cu;
    }
L_001ab684:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_001ab688:;
    {
        cpu->r[3] = 0x0000064du;
    }
L_001ab68c:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_001ab690:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_74 @ 001ab6a0 (arm) */
void fn_001ab6a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab6a0:;
    {
        cpu->r[3] = rd32(0x001ab6a8u + + 0x20u);
    }
L_001ab6a4:;
    {
        cpu->r[1] = rd32(0x001ab6acu + + 0x20u);
    }
L_001ab6a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ab6b0u, cpu->r[3], 0, 0);
    }
L_001ab6ac:;
    {
        cpu->r[2] = rd32(0x001ab6b4u + + 0x1cu);
    }
L_001ab6b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ab6b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ab6bcu, cpu->r[2], 0, 0);
    }
L_001ab6b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ab6bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001ab6c0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001ab6c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_MPLocalChooseCommTypeD1Ev @ 001ab6d4 (arm) */
void fn_001ab6d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab6d4:;
    {
        cpu->r[3] = rd32(0x001ab6dcu + + 0x24u);
    }
L_001ab6d8:;
    {
        cpu->r[2] = rd32(0x001ab6e0u + + 0x24u);
    }
L_001ab6dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ab6e4u, cpu->r[3], 0, 0);
    }
L_001ab6e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ab6e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ab6e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ab6ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ab6f0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ab6f4:;
    {
        cpu->r[14] = 0x001ab6f8u; fn_000ec21c(cpu);
    }
L_001ab6f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab6fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab700u)) return;
    }
}

/* _ZN24GS_MPLocalChooseCommType8DoActionEii @ 001ab708 (arm) */
void fn_001ab708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab708:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ab70c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ab710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ab714:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ab718:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ab71c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab728;
        }
    }
L_001ab720:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001ab724:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab728u)) return;
    }
L_001ab728:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001ab72c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ab730:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ab7a8;
        }
    }
L_001ab734:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001ab738:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001ab73c:;
    {
        cpu->r[3] = 0x0000064du;
    }
L_001ab740:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001ab744:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_001ab748:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001ab74c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001ab750:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001ab754:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001ab758:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ab75c:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001ab760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab7c4;
        }
    }
L_001ab764:;
    {
        cpu->r[3] = 0x0000064eu;
    }
L_001ab768:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001ab76c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ab720;
        }
    }
L_001ab770:;
    {
        cpu->r[14] = 0x001ab774u; fn_001b0590(cpu);
    }
L_001ab774:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab778:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001ab77c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001ab780:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ab7b8;
        }
    }
L_001ab784:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ab788:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ab78c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ab790:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001ab794:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ab798:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001ab79c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ab7a0:;
    {
        cpu->r[14] = 0x001ab7a4u; fn_000fd248(cpu);
    }
L_001ab7a4:;
    {
        goto L_001ab720;
    }
L_001ab7a8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ab7ac:;
    {
        cpu->r[14] = 0x001ab7b4u;
    }
L_001ab7b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab7b4u)) return;
    }
L_001ab7b4:;
    {
        goto L_001ab720;
    }
L_001ab7b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab7bc:;
    {
        cpu->r[14] = 0x001ab7c0u; fn_0010df70(cpu);
    }
L_001ab7c0:;
    {
        goto L_001ab784;
    }
L_001ab7c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ab7c8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ab7cc:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ab7d0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ab7d4:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[1]);
    }
L_001ab7d8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001ab7dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001ab7e0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ab7e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ab7e8:;
    {
        cpu->r[14] = 0x001ab7ecu; fn_000fd248(cpu);
    }
L_001ab7ec:;
    {
        goto L_001ab720;
    }
}

/* _ZN24GS_MPLocalChooseCommType6RenderEv @ 001ab7f0 (arm) */
void fn_001ab7f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ab7f0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001ab7f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001ab7f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ab7fc:;
    {
        cpu->r[14] = 0x001ab800u; fn_0010d9cc(cpu);
    }
L_001ab800:;
    {
        cpu->r[5] = rd32(0x001ab808u + + 0x1f4u);
    }
L_001ab804:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ab80cu, cpu->r[5], 0, 0);
    }
L_001ab808:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ab80c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab884;
        }
    }
L_001ab810:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001ab814:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ab818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ab87c;
        }
    }
L_001ab81c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ab820:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ab824:;
    {
        cpu->r[14] = 0x001ab828u; fn_00093f34(cpu);
    }
L_001ab828:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 8u, &shc), cpu->r[6], 1, 0);
    }
L_001ab82c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ab830:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ab834:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab838:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ab83c:;
    {
        cpu->r[14] = 0x001ab840u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ab840:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000feu, 1, 1);
    }
L_001ab844:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00ff0000u;
        }
    }
L_001ab848:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ab888;
        }
    }
L_001ab84c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ab850:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ab854:;
    {
        cpu->r[14] = 0x001ab858u; fn_00093f34(cpu);
    }
L_001ab858:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 8u, &shc), cpu->r[6], 1, 0);
    }
L_001ab85c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ab860:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ab864:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab868:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ab86c:;
    {
        cpu->r[14] = 0x001ab870u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ab870:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001ab874:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[7] = v;
    }
L_001ab878:;
    {
        goto L_001ab888;
    }
L_001ab87c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ab880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ab998;
        }
    }
L_001ab884:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001ab888:;
    {
        cpu->r[3] = rd32(0x001ab890u + + 0x170u);
    }
L_001ab88c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ab890:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001ab894:;
    {
        cpu->r[14] = 0x001ab898u; fn_0012f780(cpu);
    }
L_001ab898:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab89c:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001ab8a0:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001ab8a4:;
    {
        cpu->r[14] = 0x001ab8a8u; fn_00113570(cpu);
    }
L_001ab8a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ab8ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ab8b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ab8f0;
        }
    }
L_001ab8b4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ab8b8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001ab8bc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001ab8c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ab8c4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x908u, cpu->r[7]);
        }
    }
L_001ab8c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab8cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab8d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ab8d4:;
    {
        cpu->r[14] = 0x001ab8dcu;
    }
L_001ab8d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab8dcu)) return;
    }
L_001ab8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ab8e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ab8e4:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[6]);
    }
L_001ab8e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ab8ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ab8bc;
        }
    }
L_001ab8f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab8f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab8f8:;
    {
        cpu->r[14] = 0x001ab900u;
    }
L_001ab8fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab900u)) return;
    }
L_001ab900:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ab904:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ab908:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ab90c:;
    {
        cpu->r[14] = 0x001ab914u;
    }
L_001ab910:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab914u)) return;
    }
L_001ab914:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ab918:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ab91c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ab920:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ab924:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x48u);
    }
L_001ab928:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[3]);
    }
L_001ab92c:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[6]);
    }
L_001ab930:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_001ab934:;
    {
        cpu->r[14] = 0x001ab938u; fn_000aeb58(cpu);
    }
L_001ab938:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_001ab93c:;
    {
        cpu->r[3] = 0x00000080u;
    }
L_001ab940:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001ab944:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ab948:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab94c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab950:;
    {
        cpu->r[14] = 0x001ab954u; fn_000ad19c(cpu);
    }
L_001ab954:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ab958:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001ab95c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ab960:;
    {
        cpu->r[14] = 0x001ab964u; fn_000aeb58(cpu);
    }
L_001ab964:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_001ab968:;
    {
        cpu->r[3] = 0x00000113u;
    }
L_001ab96c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ab970:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001ab974:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ab978:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab97c:;
    {
        cpu->r[14] = 0x001ab980u; fn_000ad19c(cpu);
    }
L_001ab980:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001ab984:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_001ab988:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[6]);
    }
L_001ab98c:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[2]);
    }
L_001ab990:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ab994:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ab998u)) return;
    }
L_001ab998:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ab99c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ab9a0:;
    {
        cpu->r[14] = 0x001ab9a4u; fn_00093f34(cpu);
    }
L_001ab9a4:;
    {
        cpu->r[6] = (~0x000000feu);
    }
L_001ab9a8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[7] = v;
    }
L_001ab9ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ab9b0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ab9b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ab9b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ab9bc:;
    {
        cpu->r[14] = 0x001ab9c0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ab9c0:;
    {
        add_flags(cpu, cpu->r[0], 0x000000feu, 0, 1);
    }
L_001ab9c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ab884;
        }
    }
L_001ab9c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_001ab9cc:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ab9d0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_001ab9d4:;
    {
        cpu->r[14] = 0x001ab9d8u; fn_00093f34(cpu);
    }
L_001ab9d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ab9dc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ab9e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ab9e4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ab9e8:;
    {
        cpu->r[14] = 0x001ab9ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ab9ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000ffu, 0, 0);
    }
L_001ab9f0:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[7] = v;
    }
L_001ab9f4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 16u, &shc); cpu->r[7] = v;
    }
L_001ab9f8:;
    {
        goto L_001ab888;
    }
}

/* _ZN24GS_MPLocalChooseCommType6UpdateEv @ 001aba04 (arm) */
void fn_001aba04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aba04:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001aba08:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x94u);
    }
L_001aba0c:;
    {
        cpu->r[5] = rd32(0x001aba14u + + 0x104u);
    }
L_001aba10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001aba14:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001aba18:;
    {
        cpu->r[5] = add_flags(cpu, 0x001aba20u, cpu->r[5], 0, 0);
    }
L_001aba1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001aba28;
        }
    }
L_001aba20:;
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
L_001aba24:;
    {
        return fn_00114a58(cpu);
    }
L_001aba28:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_001aba2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aba30u)) return;
        }
    }
L_001aba30:;
    {
        cpu->r[14] = 0x001aba34u; fn_0010da28(cpu);
    }
L_001aba34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aba38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aba3cu)) return;
        }
    }
L_001aba3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001aba40:;
    {
        cpu->r[2] = 0x0000064du;
    }
L_001aba44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001aba48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aba64;
        }
    }
L_001aba4c:;
    {
        cpu->r[2] = 0x0000064eu;
    }
L_001aba50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001aba54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aba88;
        }
    }
L_001aba58:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001aba5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001aba60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aba70;
        }
    }
L_001aba64:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001aba68:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001aba6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001aba70u)) return;
    }
L_001aba70:;
    {
        cpu->r[3] = rd32(0x001aba78u + + 0xa4u);
    }
L_001aba74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001aba78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001aba7c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001aba80:;
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
L_001aba84:;
    {
        return fn_000f34e8(cpu);
    }
L_001aba88:;
    {
        cpu->r[14] = 0x001aba8cu; fn_001b0590(cpu);
    }
L_001aba8c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aba90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abad0;
        }
    }
L_001aba94:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001aba98:;
    {
        cpu->r[3] = 0x00005f54u;
    }
L_001aba9c:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001abaa0:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001abaa4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001abaa8:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001abaac:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001abab0:;
    {
        cpu->r[14] = 0x001abab4u; fn_0018ba6c(cpu);
    }
L_001abab4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001abab8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ababc:;
    {
        cpu->r[14] = 0x001abac0u; fn_001aeb50(cpu);
    }
L_001abac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abac4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001abac8:;
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
L_001abacc:;
    {
        return fn_000f361c(cpu);
    }
L_001abad0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001abad4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001abad8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001abadc:;
    {
        cpu->r[14] = 0x001abae0u; fn_0018ba6c(cpu);
    }
L_001abae0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001abae4:;
    {
        cpu->r[14] = 0x001abae8u; fn_000a7570(cpu);
    }
L_001abae8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001abaec:;
    {
        cpu->r[0] = 0x000004a6u;
    }
L_001abaf0:;
    {
        cpu->r[14] = 0x001abaf4u; fn_000aeb58(cpu);
    }
L_001abaf4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001abaf8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001abafc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001abb00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001abb04:;
    {
        cpu->r[14] = 0x001abb08u; fn_000a7bb0(cpu);
    }
L_001abb08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001abb0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001abb10:;
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
L_001abb14:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN24GS_MPLocalChooseCommTypeC2Eb @ 001abb20 (arm) */
void fn_001abb20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abb20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001abb24:;
    {
        cpu->r[4] = rd32(0x001abb2cu + + 0x9cu);
    }
L_001abb28:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001abb2c:;
    {
        cpu->r[14] = 0x001abb30u; fn_001100c0(cpu);
    }
L_001abb30:;
    {
        cpu->r[2] = rd32(0x001abb38u + + 0x94u);
    }
L_001abb34:;
    {
        cpu->r[4] = add_flags(cpu, 0x001abb3cu, cpu->r[4], 0, 0);
    }
L_001abb38:;
    {
        cpu->r[3] = rd32(0x001abb40u + + 0x90u);
    }
L_001abb3c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001abb40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abb44:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001abb48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001abb4c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001abb50:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001abb54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abb84;
        }
    }
L_001abb58:;
    {
        cpu->r[6] = rd32(0x001abb60u + + 0x74u);
    }
L_001abb5c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001abb60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001abb64:;
    {
        cpu->r[14] = 0x001abb68u; fn_00096a08(cpu);
    }
L_001abb68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001abb6c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001abb70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001abb74:;
    {
        cpu->r[14] = 0x001abb78u; fn_0018aa44(cpu);
    }
L_001abb78:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001abb7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001abb80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001abb84u)) return;
    }
L_001abb84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abb88:;
    {
        cpu->r[14] = 0x001abb8cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001abb8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001abb90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abb58;
        }
    }
L_001abb94:;
    {
        cpu->r[6] = rd32(0x001abb9cu + + 0x38u);
    }
L_001abb98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001abb9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abba0:;
    {
        cpu->r[14] = 0x001abba4u; fn_0018aa20(cpu);
    }
L_001abba4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abba8:;
    {
        cpu->r[14] = 0x001abbacu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001abbac:;
    {
        cpu->r[3] = rd32(0x001abbb4u + + 0x24u);
    }
L_001abbb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abbb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abbb8:;
    {
        cpu->r[3] = rd32(0x001abbc0u + + 0x1cu);
    }
L_001abbbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abbc0:;
    {
        cpu->r[14] = 0x001abbc4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001abbc4:;
    {
        goto L_001abb5c;
    }
}

/* _ZN24GS_MPLocalChooseCommTypeD0Ev @ 001abbe0 (arm) */
void fn_001abbe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abbe0:;
    {
        cpu->r[3] = rd32(0x001abbe8u + + 0x2cu);
    }
L_001abbe4:;
    {
        cpu->r[2] = rd32(0x001abbecu + + 0x2cu);
    }
L_001abbe8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001abbf0u, cpu->r[3], 0, 0);
    }
L_001abbec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001abbf0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001abbf4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001abbf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001abbfc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001abc00:;
    {
        cpu->r[14] = 0x001abc04u; fn_000ec21c(cpu);
    }
L_001abc04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abc08:;
    {
        cpu->r[14] = 0x001abc0cu; fn_0018ba20(cpu);
    }
L_001abc0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abc10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001abc14u)) return;
    }
}

/* _ZN24GS_MPLocalChooseCommTypeC1Eb @ 001abc1c (arm) */
void fn_001abc1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abc1c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001abc20:;
    {
        cpu->r[4] = rd32(0x001abc28u + + 0x9cu);
    }
L_001abc24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001abc28:;
    {
        cpu->r[14] = 0x001abc2cu; fn_001100c0(cpu);
    }
L_001abc2c:;
    {
        cpu->r[2] = rd32(0x001abc34u + + 0x94u);
    }
L_001abc30:;
    {
        cpu->r[4] = add_flags(cpu, 0x001abc38u, cpu->r[4], 0, 0);
    }
L_001abc34:;
    {
        cpu->r[3] = rd32(0x001abc3cu + + 0x90u);
    }
L_001abc38:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001abc3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abc40:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001abc44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001abc48:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001abc4c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001abc50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abc80;
        }
    }
L_001abc54:;
    {
        cpu->r[6] = rd32(0x001abc5cu + + 0x74u);
    }
L_001abc58:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001abc5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001abc60:;
    {
        cpu->r[14] = 0x001abc64u; fn_00096a08(cpu);
    }
L_001abc64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001abc68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001abc6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001abc70:;
    {
        cpu->r[14] = 0x001abc74u; fn_0018aa44(cpu);
    }
L_001abc74:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_001abc78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001abc7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001abc80u)) return;
    }
L_001abc80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abc84:;
    {
        cpu->r[14] = 0x001abc88u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001abc88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001abc8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abc54;
        }
    }
L_001abc90:;
    {
        cpu->r[6] = rd32(0x001abc98u + + 0x38u);
    }
L_001abc94:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001abc98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abc9c:;
    {
        cpu->r[14] = 0x001abca0u; fn_0018aa20(cpu);
    }
L_001abca0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abca4:;
    {
        cpu->r[14] = 0x001abca8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001abca8:;
    {
        cpu->r[3] = rd32(0x001abcb0u + + 0x24u);
    }
L_001abcac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abcb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abcb4:;
    {
        cpu->r[3] = rd32(0x001abcbcu + + 0x1cu);
    }
L_001abcb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001abcbc:;
    {
        cpu->r[14] = 0x001abcc0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001abcc0:;
    {
        goto L_001abc58;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClient8isKindOfEi @ 001abcdc (arm) */
void fn_001abcdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abcdc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000054u, 1, 1);
    }
L_001abce0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001abce4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001abce8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_75 @ 001abcec (arm) */
void fn_001abcec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abcec:;
    {
        cpu->r[3] = rd32(0x001abcf4u + + 0x64u);
    }
L_001abcf0:;
    {
        cpu->r[2] = rd32(0x001abcf8u + + 0x64u);
    }
L_001abcf4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001abcfcu, cpu->r[3], 0, 0);
    }
L_001abcf8:;
    {
        cpu->r[0] = rd32(0x001abd00u + + 0x60u);
    }
L_001abcfc:;
    {
        cpu->r[1] = rd32(0x001abd04u + + 0x60u);
    }
L_001abd00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001abd04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001abd08:;
    {
        cpu->r[1] = add_flags(cpu, 0x001abd10u, cpu->r[1], 0, 0);
    }
L_001abd0c:;
    {
        cpu->r[3] = rd32(0x001abd14u + + 0x54u);
    }
L_001abd10:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001abd14:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001abd18:;
    {
        cpu->r[3] = add_flags(cpu, 0x001abd20u, cpu->r[3], 0, 0);
    }
L_001abd1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_001abd20:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001abd24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001abd28:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000008cu, 1, 0);
    }
L_001abd2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001abd30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001abd34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_001abd38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_001abd3c:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[12]);
    }
L_001abd40:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001abd44:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001abd48:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 0);
    }
L_001abd4c:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[1]);
    }
L_001abd50:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_001abd54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClient6RenderEv @ 001abd6c (arm) */
void fn_001abd6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abd6c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001abd70:;
    {
        cpu->r[5] = rd32(0x001abd78u + + 0x218u);
    }
L_001abd74:;
    {
        cpu->r[3] = rd32(0x001abd7cu + + 0x218u);
    }
L_001abd78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001abd7c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001abd84u, cpu->r[5], 0, 0);
    }
L_001abd80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001abd84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001abd88:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001abd8c:;
    {
        cpu->r[14] = 0x001abd90u; fn_0012f780(cpu);
    }
L_001abd90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abd94:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001abd98:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001abd9c:;
    {
        cpu->r[14] = 0x001abda0u; fn_00113570(cpu);
    }
L_001abda0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001abda4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001abda8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001abdd8;
        }
    }
L_001abdac:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001abdb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001abdb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001abdb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abdbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001abdc0:;
    {
        cpu->r[14] = 0x001abdc8u;
    }
L_001abdc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001abdc8u)) return;
    }
L_001abdc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001abdcc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001abdd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001abdd4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001abdb0;
        }
    }
L_001abdd8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_001abddc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001abde0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001abf44;
        }
    }
L_001abde4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abde8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001abdec:;
    {
        cpu->r[14] = 0x001abdf4u;
    }
L_001abdf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001abdf4u)) return;
    }
L_001abdf4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001abdf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abdfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001abe00:;
    {
        cpu->r[14] = 0x001abe08u;
    }
L_001abe04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001abe08u)) return;
    }
L_001abe08:;
    {
        cpu->r[3] = rd32(0x001abe10u + + 0x188u);
    }
L_001abe0c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001abe10:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001abe14:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001abe18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abf00;
        }
    }
L_001abe1c:;
    {
        cpu->r[6] = rd32(0x001abe24u + + 0x178u);
    }
L_001abe20:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001abe24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001abe28:;
    {
        cpu->r[14] = 0x001abe2cu; fn_00096a08(cpu);
    }
L_001abe2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001abe30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001abe34:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001abe38:;
    {
        cpu->r[14] = 0x001abe3cu; fn_0018aa44(cpu);
    }
L_001abe3c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001abe40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abf58;
        }
    }
L_001abe44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001abe48:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001abe4c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001abe50:;
    {
        cpu->r[14] = 0x001abe54u; fn_000978a8(cpu);
    }
L_001abe54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001abe58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001abe5c:;
    {
        cpu->r[1] = 0x000000aau;
    }
L_001abe60:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001abe64:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001abe68:;
    {
        cpu->r[14] = 0x001abe6cu; fn_000a8d10(cpu);
    }
L_001abe6c:;
    {
        cpu->r[3] = rd32(0x001abe74u + + 0x12cu);
    }
L_001abe70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abe74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000500u, 0, 0);
    }
L_001abe78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_001abe7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001abe80:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001abe84:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_001abe88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001abe8c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000a0u, 1, 0);
    }
L_001abe90:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_001abe94:;
    {
        cpu->r[14] = 0x001abe9cu;
    }
L_001abe98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001abe9cu)) return;
    }
L_001abe9c:;
    {
        cpu->r[2] = rd32(0x001abea4u + + 0x100u);
    }
L_001abea0:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001abea4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001abea8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_001abeac:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001abeb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001abeb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001abeb8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001abebc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001abec0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001abec4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001abec8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001abecc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_001abed0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001abed4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_001abed8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000003u, 0, 0);
    }
L_001abedc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001abee0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[14];
        }
    }
L_001abee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 1, 1u, &shc), 0, 0);
    }
L_001abee8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
    }
L_001abeec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001abef0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001abef4:;
    {
        cpu->r[14] = 0x001abef8u; fn_000ad19c(cpu);
    }
L_001abef8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001abefc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001abf00u)) return;
    }
L_001abf00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abf04:;
    {
        cpu->r[14] = 0x001abf08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001abf08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001abf0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abe1c;
        }
    }
L_001abf10:;
    {
        cpu->r[6] = rd32(0x001abf18u + + 0x84u);
    }
L_001abf14:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001abf18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abf1c:;
    {
        cpu->r[14] = 0x001abf20u; fn_0018aa20(cpu);
    }
L_001abf20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001abf24:;
    {
        cpu->r[14] = 0x001abf28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001abf28:;
    {
        cpu->r[3] = rd32(0x001abf30u + + 0x78u);
    }
L_001abf2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001abf30:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001abf34:;
    {
        cpu->r[3] = rd32(0x001abf3cu + + 0x70u);
    }
L_001abf38:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001abf3c:;
    {
        cpu->r[14] = 0x001abf40u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001abf40:;
    {
        goto L_001abe20;
    }
L_001abf44:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001abf48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001abf4c:;
    {
        cpu->r[14] = 0x001abf54u;
    }
L_001abf50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001abf54u)) return;
    }
L_001abf54:;
    {
        goto L_001abde4;
    }
L_001abf58:;
    {
        cpu->r[1] = rd32(0x001abf60u + + 0x50u);
    }
L_001abf5c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001abf60:;
    {
        cpu->r[2] = rd32(0x001abf68u + + 0x4cu);
    }
L_001abf64:;
    {
        cpu->r[14] = 0x00000086u;
    }
L_001abf68:;
    {
        cpu->r[3] = rd32(0x001abf70u + + 0x48u);
    }
L_001abf6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001abf74u, cpu->r[1], 0, 0);
    }
L_001abf70:;
    {
        cpu->r[12] = rd32(0x001abf78u + + 0x44u);
    }
L_001abf74:;
    {
        cpu->r[2] = add_flags(cpu, 0x001abf7cu, cpu->r[2], 0, 0);
    }
L_001abf78:;
    {
        cpu->r[3] = add_flags(cpu, 0x001abf80u, cpu->r[3], 0, 0);
    }
L_001abf7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001abf80:;
    {
        cpu->r[12] = add_flags(cpu, 0x001abf88u, cpu->r[12], 0, 0);
    }
L_001abf84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001abf88:;
    {
        cpu->r[14] = 0x001abf8cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001abf8c:;
    {
        goto L_001abe44;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClient6UpdateEv @ 001abfc0 (arm) */
void fn_001abfc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001abfc0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001abfc4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001abfc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001abfcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001abfd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001abfd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac02c;
        }
    }
L_001abfd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001abfdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001abff4;
        }
    }
L_001abfe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001abfe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ac024;
        }
    }
L_001abfe8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001abfec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001abff0:;
    {
        return fn_00114a58(cpu);
    }
L_001abff4:;
    {
        cpu->r[14] = 0x001abff8u; fn_0010da28(cpu);
    }
L_001abff8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001abffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac024;
        }
    }
L_001ac000:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001ac004:;
    {
        cpu->r[2] = 0x00000415u;
    }
L_001ac008:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ac00c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac04c;
        }
    }
L_001ac010:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001ac014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ac018:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ac01c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001ac020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac038;
        }
    }
L_001ac024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ac028:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac02cu)) return;
    }
L_001ac02c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ac030:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001ac034:;
    {
        return fn_0010efe4(cpu);
    }
L_001ac038:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac03c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ac040:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ac044:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001ac048:;
    {
        return fn_000f34e8(cpu);
    }
L_001ac04c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac050:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001ac054:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001ac058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001500u, 0, 0);
    }
L_001ac05c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_001ac060:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ac064:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001ac068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_001ac06c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001ac070:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[12]);
    }
L_001ac074:;
    {
        cpu->r[14] = 0x001ac078u; imp_memcpy(cpu); /* memcpy */
    }
L_001ac078:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ac07c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x490u);
    }
L_001ac080:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ac084:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001ac088:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ac08c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ac090:;
    {
        cpu->r[14] = 0x001ac094u; fn_000fd248(cpu);
    }
L_001ac094:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac098:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001ac09c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001ac0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac0cc;
        }
    }
L_001ac0a8:;
    {
        cpu->r[0] = 0x00000974u;
    }
L_001ac0ac:;
    {
        cpu->r[14] = 0x001ac0b0u; fn_0018ba6c(cpu);
    }
L_001ac0b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ac0b4:;
    {
        cpu->r[14] = 0x001ac0b8u; fn_001a905c(cpu);
    }
L_001ac0b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac0bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ac0c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ac0c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001ac0c8:;
    {
        return fn_000f361c(cpu);
    }
L_001ac0cc:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_001ac0d0:;
    {
        cpu->r[14] = 0x001ac0d4u; fn_0018ba6c(cpu);
    }
L_001ac0d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ac0d8:;
    {
        cpu->r[14] = 0x001ac0dcu; fn_0019fb34(cpu);
    }
L_001ac0dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac0e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ac0e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ac0e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001ac0ec:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClientD1Ev @ 001ac0f0 (arm) */
void fn_001ac0f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac0f0:;
    {
        cpu->r[3] = rd32(0x001ac0f8u + + 0x24u);
    }
L_001ac0f4:;
    {
        cpu->r[2] = rd32(0x001ac0fcu + + 0x24u);
    }
L_001ac0f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac100u, cpu->r[3], 0, 0);
    }
L_001ac0fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac100:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac104:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ac10c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ac110:;
    {
        cpu->r[14] = 0x001ac114u; fn_000ec21c(cpu);
    }
L_001ac114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac118:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac11cu)) return;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClientD0Ev @ 001ac124 (arm) */
void fn_001ac124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac124:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac128:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac12c:;
    {
        cpu->r[14] = 0x001ac130u; fn_001ac0f0(cpu);
    }
L_001ac130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac134:;
    {
        cpu->r[14] = 0x001ac138u; fn_0018ba20(cpu);
    }
L_001ac138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac13c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac140u)) return;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClientD2Ev @ 001ac140 (arm) */
void fn_001ac140(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac140:;
    {
        cpu->r[3] = rd32(0x001ac148u + + 0x24u);
    }
L_001ac144:;
    {
        cpu->r[2] = rd32(0x001ac14cu + + 0x24u);
    }
L_001ac148:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac150u, cpu->r[3], 0, 0);
    }
L_001ac14c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac150:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac154:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ac15c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ac160:;
    {
        cpu->r[14] = 0x001ac164u; fn_000ec21c(cpu);
    }
L_001ac164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac168:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac16cu)) return;
    }
}

/* _ZN36GS_MultiplayerCarSelectionMenuClient17ApplyMenuSettingsEv @ 001ac174 (arm) */
void fn_001ac174(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac174:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ac178:;
    {
        wr8(cpu->r[0] + + 0x8fcu, cpu->r[3]);
    }
L_001ac17c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac180:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac184:;
    {
        cpu->r[14] = 0x001ac188u; fn_00119dfc(cpu);
    }
L_001ac188:;
    {
        cpu->r[3] = rd32(0x001ac190u + + 0x18u);
    }
L_001ac18c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001ac190:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_001ac194:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac19cu, cpu->r[3], 0, 0);
    }
L_001ac198:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_001ac19c:;
    {
        cpu->r[3] = 0x00000417u;
    }
L_001ac1a0:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001ac1a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac1a8u)) return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenu8isKindOfEi @ 001ac1ac (arm) */
void fn_001ac1ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac1ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000053u, 1, 1);
    }
L_001ac1b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ac1b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ac1b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_76 @ 001ac1bc (arm) */
void fn_001ac1bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac1bc:;
    {
        cpu->r[3] = rd32(0x001ac1c4u + + 0x68u);
    }
L_001ac1c0:;
    {
        cpu->r[2] = rd32(0x001ac1c8u + + 0x68u);
    }
L_001ac1c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac1ccu, cpu->r[3], 0, 0);
    }
L_001ac1c8:;
    {
        cpu->r[1] = rd32(0x001ac1d0u + + 0x64u);
    }
L_001ac1cc:;
    {
        cpu->r[0] = rd32(0x001ac1d4u + + 0x64u);
    }
L_001ac1d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac1d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ac1dcu, cpu->r[1], 0, 0);
    }
L_001ac1d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001ac1dc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ac1e0:;
    {
        cpu->r[3] = rd32(0x001ac1e8u + + 0x54u);
    }
L_001ac1e4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_001ac1e8:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_001ac1ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ac1f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac1f8u, cpu->r[3], 0, 0);
    }
L_001ac1f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001ac1f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ac1fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_001ac200:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001ac204:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_001ac208:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001ac20c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001ac210:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000008cu, 1, 0);
    }
L_001ac214:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 0);
    }
L_001ac218:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[0]);
    }
L_001ac21c:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_001ac220:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[1]);
    }
L_001ac224:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_001ac228:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenuD1Ev @ 001ac240 (arm) */
void fn_001ac240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac240:;
    {
        cpu->r[3] = rd32(0x001ac248u + + 0x24u);
    }
L_001ac244:;
    {
        cpu->r[2] = rd32(0x001ac24cu + + 0x24u);
    }
L_001ac248:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac250u, cpu->r[3], 0, 0);
    }
L_001ac24c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac250:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac254:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac258:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ac25c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ac260:;
    {
        cpu->r[14] = 0x001ac264u; fn_000ec21c(cpu);
    }
L_001ac264:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac268:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac26cu)) return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenu8DoActionEii @ 001ac274 (arm) */
void fn_001ac274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac274:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ac278:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ac27c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ac280:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac284:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ac288:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac28cu)) return;
        }
    }
L_001ac28c:;
    {
        cpu->r[14] = 0x001ac290u; fn_0011986c(cpu);
    }
L_001ac290:;
    {
        cpu->r[3] = 0x00000412u;
    }
L_001ac294:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001ac298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac29cu)) return;
        }
    }
L_001ac29c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001ac2a0:;
    {
        cpu->r[14] = 0x001ac2a4u; fn_00093f34(cpu);
    }
L_001ac2a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001ac2a8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001ac2ac:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_001ac2b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac2b4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ac2b8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ac2bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ac2c0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001ac2c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac2c8u)) return;
        }
    }
L_001ac2c8:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001ac2cc:;
    {
        cpu->r[14] = 0x001ac2d0u; fn_00093f34(cpu);
    }
L_001ac2d0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001ac2d4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001ac2d8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ac2dc:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001ac2e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac2e4u)) return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenu6UpdateEv @ 001ac2e4 (arm) */
void fn_001ac2e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac2e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001ac2e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ac2ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ac2f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac2f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac348;
        }
    }
L_001ac2f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ac2fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac310;
        }
    }
L_001ac300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac308u)) return;
        }
    }
L_001ac308:;
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
L_001ac30c:;
    {
        return fn_00114a58(cpu);
    }
L_001ac310:;
    {
        cpu->r[14] = 0x001ac314u; fn_0010da28(cpu);
    }
L_001ac314:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ac318:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac31cu)) return;
        }
    }
L_001ac31c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001ac320:;
    {
        cpu->r[2] = 0x00000412u;
    }
L_001ac324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ac328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac350;
        }
    }
L_001ac32c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001ac330:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ac334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac338u)) return;
        }
    }
L_001ac338:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac33c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ac340:;
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
L_001ac344:;
    {
        return fn_000f34e8(cpu);
    }
L_001ac348:;
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
L_001ac34c:;
    {
        return fn_0010efe4(cpu);
    }
L_001ac350:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac354:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001ac358:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001ac35c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001500u, 0, 0);
    }
L_001ac360:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_001ac364:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ac368:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_001ac36c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_001ac370:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001ac374:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_001ac378:;
    {
        cpu->r[14] = 0x001ac37cu; imp_memcpy(cpu); /* memcpy */
    }
L_001ac37c:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_001ac380:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x438u);
    }
L_001ac384:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001ac388:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001ac38c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001ac390:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_001ac394:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_001ac398:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ac39c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ac3a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x34u);
    }
L_001ac3a4:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_001ac3a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_001ac3ac:;
    {
        cpu->r[3] = 0x00005fa8u;
    }
L_001ac3b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001ac3b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac3b8u)) return;
        }
    }
L_001ac3b8:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_001ac3bc:;
    {
        cpu->r[14] = 0x001ac3c0u; fn_0018ba6c(cpu);
    }
L_001ac3c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ac3c4:;
    {
        cpu->r[14] = 0x001ac3c8u; fn_001afc34(cpu);
    }
L_001ac3c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac3cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ac3d0:;
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
L_001ac3d4:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenu17ApplyMenuSettingsEv @ 001ac3d8 (arm) */
void fn_001ac3d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac3d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ac3dc:;
    {
        wr8(cpu->r[0] + + 0x8fcu, cpu->r[3]);
    }
L_001ac3e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac3e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac3e8:;
    {
        cpu->r[14] = 0x001ac3ecu; fn_00119dfc(cpu);
    }
L_001ac3ec:;
    {
        cpu->r[3] = rd32(0x001ac3f4u + + 0x18u);
    }
L_001ac3f0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001ac3f4:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_001ac3f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac400u, cpu->r[3], 0, 0);
    }
L_001ac3fc:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_001ac400:;
    {
        cpu->r[3] = 0x00000418u;
    }
L_001ac404:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001ac408:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac40cu)) return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenuD0Ev @ 001ac410 (arm) */
void fn_001ac410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac410:;
    {
        cpu->r[3] = rd32(0x001ac418u + + 0x2cu);
    }
L_001ac414:;
    {
        cpu->r[2] = rd32(0x001ac41cu + + 0x2cu);
    }
L_001ac418:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac420u, cpu->r[3], 0, 0);
    }
L_001ac41c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac420:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ac42c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ac430:;
    {
        cpu->r[14] = 0x001ac434u; fn_000ec21c(cpu);
    }
L_001ac434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac438:;
    {
        cpu->r[14] = 0x001ac43cu; fn_0018ba20(cpu);
    }
L_001ac43c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac440:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac444u)) return;
    }
}

/* _ZN28GS_MultiplayerCreateRaceMenu6RenderEv @ 001ac44c (arm) */
void fn_001ac44c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac44c:;
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
L_001ac450:;
    {
        cpu->r[6] = rd32(0x001ac458u + + 0x368u);
    }
L_001ac454:;
    {
        cpu->r[3] = rd32(0x001ac45cu + + 0x368u);
    }
L_001ac458:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac45c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001ac464u, cpu->r[6], 0, 0);
    }
L_001ac460:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001ac464:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac468:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001ac46c:;
    {
        cpu->r[14] = 0x001ac470u; fn_0012f780(cpu);
    }
L_001ac470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac474:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001ac478:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001ac47c:;
    {
        cpu->r[14] = 0x001ac480u; fn_00113570(cpu);
    }
L_001ac480:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ac484:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac488:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ac4b8;
        }
    }
L_001ac48c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ac490:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ac494:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ac498:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac49c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ac4a0:;
    {
        cpu->r[14] = 0x001ac4a8u;
    }
L_001ac4a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac4a8u)) return;
    }
L_001ac4a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001ac4ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ac4b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ac4b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ac490;
        }
    }
L_001ac4b8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_001ac4bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac4c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ac73c;
        }
    }
L_001ac4c4:;
    {
        cpu->r[7] = rd32(0x001ac4ccu + + 0x2fcu);
    }
L_001ac4c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac4cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ac4d0:;
    {
        cpu->r[14] = 0x001ac4d8u;
    }
L_001ac4d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac4d8u)) return;
    }
L_001ac4d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ac4dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac4e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ac4e4:;
    {
        cpu->r[14] = 0x001ac4ecu;
    }
L_001ac4e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac4ecu)) return;
    }
L_001ac4ec:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001ac4f0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001ac4f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ac4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac6b8;
        }
    }
L_001ac4fc:;
    {
        cpu->r[5] = rd32(0x001ac504u + + 0x2c8u);
    }
L_001ac500:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001ac504:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac508:;
    {
        cpu->r[14] = 0x001ac50cu; fn_00096a08(cpu);
    }
L_001ac50c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ac510:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ac514:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001ac518:;
    {
        cpu->r[14] = 0x001ac51cu; fn_0018aa44(cpu);
    }
L_001ac51c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ac520:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001ac524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac788;
        }
    }
L_001ac528:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001ac52c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001ac530:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ac534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac6fc;
        }
    }
L_001ac538:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001ac53c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac540:;
    {
        cpu->r[14] = 0x001ac544u; fn_00096a08(cpu);
    }
L_001ac544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ac548:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ac54c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001ac550:;
    {
        cpu->r[14] = 0x001ac554u; fn_0018aa44(cpu);
    }
L_001ac554:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ac558:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001ac55c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac750;
        }
    }
L_001ac560:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ac564:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ac568:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001ac56c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001ac570:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001ac574:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_001ac578:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001ac57c:;
    {
        cpu->r[10] = 0x00000011u;
    }
L_001ac580:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001ac584:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ac588:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001ac58c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001ac590:;
    {
        cpu->r[14] = 0x001ac594u; fn_000a8a2c(cpu);
    }
L_001ac594:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac598:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_001ac59c:;
    {
        cpu->r[0] = rd32(0x001ac5a4u + + 0x22cu);
    }
L_001ac5a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ac5a4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_001ac5a8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001ac5ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_001ac5b0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_001ac5b4:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001ac5b8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ac5bc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_001ac5c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ac5c4:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_001ac5c8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001ac5cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ac5d0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000104u, 1, 0);
    }
L_001ac5d4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001ac5d8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_001ac5dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_001ac5e0:;
    {
        cpu->r[14] = 0x001ac5e4u; fn_000aeb58(cpu);
    }
L_001ac5e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 3, 31u, &shc), 0, 0);
    }
L_001ac5e8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 3, 31u, &shc), 0, 0);
    }
L_001ac5ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_001ac5f0:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_001ac5f4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001ac5f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 1u, &shc), 0, 0);
    }
L_001ac5fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_001ac600:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ac604:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ac608:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ac60c:;
    {
        cpu->r[14] = 0x001ac610u; fn_000ad19c(cpu);
    }
L_001ac610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac614:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ac618:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001ac61c:;
    {
        cpu->r[8] = rd32(cpu->r[8]);
    }
L_001ac620:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001ac624:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0xc8u);
    }
L_001ac628:;
    {
        cpu->r[14] = 0x001ac62cu; fn_000978a8(cpu);
    }
L_001ac62c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x000000a0u, 1, 0);
    }
L_001ac630:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001ac634:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
    }
L_001ac638:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_001ac63c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000500u, 0, 0);
    }
L_001ac640:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_001ac648:;
    {
        cpu->r[14] = 0x001ac64cu; guest_call(cpu, cpu->r[11]);
    }
L_001ac64c:;
    {
        cpu->r[3] = rd32(0x001ac654u + + 0x180u);
    }
L_001ac650:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001ac654:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 1, 1u, &shc), 0, 0);
    }
L_001ac658:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ac65c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ac664:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ac668:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001ac66c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ac670:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[14];
        }
    }
L_001ac674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 1, 2u, &shc), 0, 0);
    }
L_001ac678:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_001ac67c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ac680:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ac684:;
    {
        cpu->r[14] = 0x001ac688u; fn_000ad19c(cpu);
    }
L_001ac688:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ac68c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001ac690:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001ac694:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001ac698:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_001ac69c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001ac6a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001ac6a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001ac6a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001ac6ac:;
    {
        cpu->r[14] = 0x001ac6b0u; fn_000a8a2c(cpu);
    }
L_001ac6b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001ac6b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac6b8u)) return;
    }
L_001ac6b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ac6bc:;
    {
        cpu->r[14] = 0x001ac6c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ac6c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ac6c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac4fc;
        }
    }
L_001ac6c8:;
    {
        cpu->r[5] = rd32(0x001ac6d0u + + 0xfcu);
    }
L_001ac6cc:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001ac6d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ac6d4:;
    {
        cpu->r[14] = 0x001ac6d8u; fn_0018aa20(cpu);
    }
L_001ac6d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ac6dc:;
    {
        cpu->r[14] = 0x001ac6e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ac6e0:;
    {
        cpu->r[3] = rd32(0x001ac6e8u + + 0xf0u);
    }
L_001ac6e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ac6e8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac6ec:;
    {
        cpu->r[3] = rd32(0x001ac6f4u + + 0xe8u);
    }
L_001ac6f0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac6f4:;
    {
        cpu->r[14] = 0x001ac6f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ac6f8:;
    {
        goto L_001ac500;
    }
L_001ac6fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ac700:;
    {
        cpu->r[14] = 0x001ac704u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001ac704:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ac708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac538;
        }
    }
L_001ac70c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001ac710:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ac714:;
    {
        cpu->r[14] = 0x001ac718u; fn_0018aa20(cpu);
    }
L_001ac718:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ac71c:;
    {
        cpu->r[14] = 0x001ac720u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001ac720:;
    {
        cpu->r[3] = rd32(0x001ac728u + + 0xb0u);
    }
L_001ac724:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ac728:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac72c:;
    {
        cpu->r[3] = rd32(0x001ac734u + + 0xa8u);
    }
L_001ac730:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001ac734:;
    {
        cpu->r[14] = 0x001ac738u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001ac738:;
    {
        goto L_001ac538;
    }
L_001ac73c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ac740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac744:;
    {
        cpu->r[14] = 0x001ac74cu;
    }
L_001ac748:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac74cu)) return;
    }
L_001ac74c:;
    {
        goto L_001ac4c4;
    }
L_001ac750:;
    {
        cpu->r[1] = rd32(0x001ac758u + + 0x88u);
    }
L_001ac754:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001ac758:;
    {
        cpu->r[2] = rd32(0x001ac760u + + 0x84u);
    }
L_001ac75c:;
    {
        cpu->r[14] = 0x00000088u;
    }
L_001ac760:;
    {
        cpu->r[3] = rd32(0x001ac768u + + 0x80u);
    }
L_001ac764:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ac76cu, cpu->r[1], 0, 0);
    }
L_001ac768:;
    {
        cpu->r[12] = rd32(0x001ac770u + + 0x7cu);
    }
L_001ac76c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ac774u, cpu->r[2], 0, 0);
    }
L_001ac770:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac778u, cpu->r[3], 0, 0);
    }
L_001ac774:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001ac778:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ac780u, cpu->r[12], 0, 0);
    }
L_001ac77c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ac780:;
    {
        cpu->r[14] = 0x001ac784u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001ac784:;
    {
        goto L_001ac560;
    }
L_001ac788:;
    {
        cpu->r[1] = rd32(0x001ac790u + + 0x60u);
    }
L_001ac78c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001ac790:;
    {
        cpu->r[2] = rd32(0x001ac798u + + 0x5cu);
    }
L_001ac794:;
    {
        cpu->r[14] = 0x00000086u;
    }
L_001ac798:;
    {
        cpu->r[3] = rd32(0x001ac7a0u + + 0x58u);
    }
L_001ac79c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ac7a4u, cpu->r[1], 0, 0);
    }
L_001ac7a0:;
    {
        cpu->r[12] = rd32(0x001ac7a8u + + 0x54u);
    }
L_001ac7a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ac7acu, cpu->r[2], 0, 0);
    }
L_001ac7a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac7b0u, cpu->r[3], 0, 0);
    }
L_001ac7ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001ac7b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ac7b8u, cpu->r[12], 0, 0);
    }
L_001ac7b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ac7b8:;
    {
        cpu->r[14] = 0x001ac7bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001ac7bc:;
    {
        goto L_001ac528;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen8isKindOfEi @ 001ac800 (arm) */
void fn_001ac800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac800:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000052u, 1, 1);
    }
L_001ac804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ac808:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ac80c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_77 @ 001ac810 (arm) */
void fn_001ac810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac810:;
    {
        cpu->r[3] = rd32(0x001ac818u + + 0x20u);
    }
L_001ac814:;
    {
        cpu->r[1] = rd32(0x001ac81cu + + 0x20u);
    }
L_001ac818:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ac820u, cpu->r[3], 0, 0);
    }
L_001ac81c:;
    {
        cpu->r[2] = rd32(0x001ac824u + + 0x1cu);
    }
L_001ac820:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ac824:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ac82cu, cpu->r[2], 0, 0);
    }
L_001ac828:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ac82c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001ac830:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001ac834:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen6ResumeEv @ 001ac844 (arm) */
void fn_001ac844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac844:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ac848:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac84c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001ac850:;
    {
        cpu->r[5] = rd32(0x001ac858u + + 0x94u);
    }
L_001ac854:;
    {
        cpu->r[14] = 0x001ac858u; fn_001142a0(cpu);
    }
L_001ac858:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ac85c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001ac860:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ac864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ac868:;
    {
        cpu->r[2] = 0x000000e8u;
    }
L_001ac86c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ac870:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ac878u, cpu->r[5], 0, 0);
    }
L_001ac874:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ac878:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001ac87c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001ac880:;
    {
        cpu->r[14] = 0x001ac884u; fn_000a8a2c(cpu);
    }
L_001ac884:;
    {
        cpu->r[2] = rd32(0x001ac88cu + + 0x64u);
    }
L_001ac888:;
    {
        cpu->r[3] = 0x00000190u;
    }
L_001ac88c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001ac890:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ac894:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ac898:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001ac89c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ac8a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ac8a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ac8a8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001ac8ac:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001ac8b0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001ac8b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001ac8b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001ac8bc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001ac8c0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001ac8c4:;
    {
        cpu->r[14] = 0x001ac8c8u; fn_000ec75c(cpu);
    }
L_001ac8c8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001ac8cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001ac8d0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001ac8d4:;
    {
        cpu->r[2] = 0x00000190u;
    }
L_001ac8d8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_001ac8dc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001ac8e0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_001ac8e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ac8e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac8ecu)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen6UpdateEv @ 001ac8f4 (arm) */
void fn_001ac8f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac8f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ac8f8:;
    {
        cpu->r[4] = rd32(0x001ac900u + + 0xb0u);
    }
L_001ac8fc:;
    {
        cpu->r[6] = rd32(0x001ac904u + + 0xb0u);
    }
L_001ac900:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_001ac904:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ac90cu, cpu->r[4], 0, 0);
    }
L_001ac908:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ac90c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ac910:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ac914:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac918:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ac91c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac92c;
        }
    }
L_001ac920:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001ac924:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ac928:;
    {
        cpu->r[14] = 0x001ac92cu; fn_000c1c08(cpu);
    }
L_001ac92c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001ac930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ac934:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac938u)) return;
        }
    }
L_001ac938:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ac93c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ac94c;
        }
    }
L_001ac940:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ac944:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_001ac948:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac94cu)) return;
    }
L_001ac94c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8f4u);
    }
L_001ac950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac954:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001ac958:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x8f4u, cpu->r[3]);
        }
    }
L_001ac95c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ac960u)) return;
        }
    }
L_001ac960:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_001ac964:;
    {
        cpu->r[3] = 0x000004f3u;
    }
L_001ac968:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ac96c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ac940;
        }
    }
L_001ac970:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ac974:;
    {
        cpu->r[14] = 0x001ac978u; fn_00096928(cpu);
    }
L_001ac978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ac97c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ac980:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ac984:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ac988:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_001ac98c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001ac990:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ac994:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00006780u;
        }
    }
L_001ac998:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001ac99c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_001ac9a0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001ac9a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ac9a8:;
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
L_001ac9ac:;
    {
        return fn_0009b14c(cpu);
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen8DoActionEii @ 001ac9b8 (arm) */
void fn_001ac9b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ac9b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ac9bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001ac9c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ac9c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ac9c8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001ac9cc:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001ac9d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001ac9d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001ac9d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ac9dc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001ac9e0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001ac9e4:;
    {
        cpu->r[14] = 0x001ac9e8u; fn_00093f34(cpu);
    }
L_001ac9e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ac9ec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ac9f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ac9f4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ac9f8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_001ac9fc:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_001aca00:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001aca04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001aca08:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001aca0c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001aca10:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001aca14:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001aca18:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001aca1c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[12]);
    }
L_001aca20:;
    {
        cpu->r[14] = 0x001aca24u; fn_000fd248(cpu);
    }
L_001aca24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001aca28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001aca2cu)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreen17ApplyMenuSettingsEv @ 001aca2c (arm) */
void fn_001aca2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001aca2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001aca30:;
    {
        cpu->r[4] = rd32(0x001aca38u + + 0x68u);
    }
L_001aca34:;
    {
        cpu->r[5] = rd32(0x001aca3cu + + 0x68u);
    }
L_001aca38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001aca3c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001aca44u, cpu->r[4], 0, 0);
    }
L_001aca40:;
    {
        cpu->r[3] = rd32(0x001aca48u + + 0x60u);
    }
L_001aca44:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_001aca48:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001aca4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aca50:;
    {
        cpu->r[3] = add_flags(cpu, 0x001aca58u, cpu->r[3], 0, 0);
    }
L_001aca54:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[6]);
    }
L_001aca58:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001aca5c:;
    {
        cpu->r[3] = 0x0000062bu;
    }
L_001aca60:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_001aca64:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_001aca68:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001aca6c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_001aca70:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001aca74:;
    {
        cpu->r[14] = 0x001aca78u; fn_00097d9c(cpu);
    }
L_001aca78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001aca7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001aca88;
        }
    }
L_001aca80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001aca84:;
    {
        cpu->r[14] = 0x001aca88u; fn_000a5c98(cpu);
    }
L_001aca88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001aca8c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001aca90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001aca94:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001aca98:;
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
L_001aca9c:;
    {
        return fn_0018cbb0(cpu);
    }
}

/* _ZN27GS_MultiplayerEndRaceScreenD1Ev @ 001acaac (arm) */
void fn_001acaac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acaac:;
    {
        cpu->r[3] = rd32(0x001acab4u + + 0x24u);
    }
L_001acab0:;
    {
        cpu->r[2] = rd32(0x001acab8u + + 0x24u);
    }
L_001acab4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001acabcu, cpu->r[3], 0, 0);
    }
L_001acab8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001acabc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001acac0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001acac4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001acac8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001acacc:;
    {
        cpu->r[14] = 0x001acad0u; fn_000ec21c(cpu);
    }
L_001acad0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001acad8u)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreenD0Ev @ 001acae0 (arm) */
void fn_001acae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acae0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001acae4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001acae8:;
    {
        cpu->r[14] = 0x001acaecu; fn_001acaac(cpu);
    }
L_001acaec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acaf0:;
    {
        cpu->r[14] = 0x001acaf4u; fn_0018ba20(cpu);
    }
L_001acaf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acaf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001acafcu)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreenD2Ev @ 001acafc (arm) */
void fn_001acafc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acafc:;
    {
        cpu->r[3] = rd32(0x001acb04u + + 0x24u);
    }
L_001acb00:;
    {
        cpu->r[2] = rd32(0x001acb08u + + 0x24u);
    }
L_001acb04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001acb0cu, cpu->r[3], 0, 0);
    }
L_001acb08:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001acb0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001acb10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001acb14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001acb18:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001acb1c:;
    {
        cpu->r[14] = 0x001acb20u; fn_000ec21c(cpu);
    }
L_001acb20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acb24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001acb28u)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreenC1Ev @ 001acb30 (arm) */
void fn_001acb30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acb30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001acb34:;
    {
        cpu->r[5] = rd32(0x001acb3cu + + 0x58u);
    }
L_001acb38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001acb3c:;
    {
        cpu->r[14] = 0x001acb40u; fn_0010ffa8(cpu);
    }
L_001acb40:;
    {
        cpu->r[3] = rd32(0x001acb48u + + 0x50u);
    }
L_001acb44:;
    {
        cpu->r[5] = add_flags(cpu, 0x001acb4cu, cpu->r[5], 0, 0);
    }
L_001acb48:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001acb4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001acb50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001acb54:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001acb58:;
    {
        cpu->r[14] = 0x001acb5cu; fn_00093f34(cpu);
    }
L_001acb5c:;
    {
        cpu->r[3] = rd32(0x001acb64u + + 0x38u);
    }
L_001acb60:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001acb64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001acb68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001acb6c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001acb70:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001acb74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001acb78:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001acb7c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_001acb80:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001acb84:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001acb88:;
    {
        cpu->r[14] = 0x001acb8cu; fn_000c0d80(cpu);
    }
L_001acb8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acb90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001acb94u)) return;
    }
}

/* _ZN27GS_MultiplayerEndRaceScreenC2Ev @ 001acba0 (arm) */
void fn_001acba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001acba0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001acba4:;
    {
        cpu->r[5] = rd32(0x001acbacu + + 0x58u);
    }
L_001acba8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001acbac:;
    {
        cpu->r[14] = 0x001acbb0u; fn_0010ffa8(cpu);
    }
L_001acbb0:;
    {
        cpu->r[3] = rd32(0x001acbb8u + + 0x50u);
    }
L_001acbb4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001acbbcu, cpu->r[5], 0, 0);
    }
L_001acbb8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001acbbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001acbc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001acbc4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001acbc8:;
    {
        cpu->r[14] = 0x001acbccu; fn_00093f34(cpu);
    }
L_001acbcc:;
    {
        cpu->r[3] = rd32(0x001acbd4u + + 0x38u);
    }
L_001acbd0:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001acbd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001acbd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001acbdc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001acbe0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001acbe4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001acbe8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001acbec:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_001acbf0:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_001acbf4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001acbf8:;
    {
        cpu->r[14] = 0x001acbfcu; fn_000c0d80(cpu);
    }
L_001acbfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001acc00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001acc04u)) return;
    }
}
