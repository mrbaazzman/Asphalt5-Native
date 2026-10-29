#include "functions.h"

/* _tr_flush_block @ 0007d218 (arm) */
void fn_0007d218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007d218:;
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
L_0007d21c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0007d220:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0007d224:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0007d228:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0007d22c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0007d230:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x84u);
    }
L_0007d234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007d238:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000005u, 0, 0);
        }
    }
L_0007d23c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0007d240:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007d244:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d31c;
        }
    }
L_0007d248:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007d24c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d398;
        }
    }
L_0007d250:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0007d254:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000b10u, 0, 0);
    }
L_0007d258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d25c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0007d260:;
    {
        cpu->r[14] = 0x0007d264u; fn_0007b830(cpu);
    }
L_0007d264:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000b20u, 0, 0);
    }
L_0007d268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d26c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0007d270:;
    {
        cpu->r[14] = 0x0007d274u; fn_0007b830(cpu);
    }
L_0007d274:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0007d278:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d27c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb1cu);
    }
L_0007d280:;
    {
        cpu->r[14] = 0x0007d284u; fn_0007bf7c(cpu);
    }
L_0007d284:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000980u, 0, 0);
    }
L_0007d288:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb28u);
    }
L_0007d28c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d290:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0007d294:;
    {
        cpu->r[6] = 0x00000012u;
    }
L_0007d298:;
    {
        cpu->r[14] = 0x0007d29cu; fn_0007bf7c(cpu);
    }
L_0007d29c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d2a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000b30u, 0, 0);
    }
L_0007d2a4:;
    {
        cpu->r[14] = 0x0007d2a8u; fn_0007b830(cpu);
    }
L_0007d2a8:;
    {
        cpu->r[2] = rd32(0x0007d2b0u + + 0x698u);
    }
L_0007d2ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007d2b4u, cpu->r[2], 0, 0);
    }
L_0007d2b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000650u, 0, 0);
    }
L_0007d2b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0007d2b8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[6]);
    }
L_0007d2bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000029cu, 0, 0);
    }
L_0007d2c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007d2c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007d2c8:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x6u);
    }
L_0007d2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007d2d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d2e0;
        }
    }
L_0007d2d4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0007d2d8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0007d2dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d2b8;
        }
    }
L_0007d2e0:;
    {
        cpu->r[1] = 0x000016a8u;
    }
L_0007d2e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007d2e8:;
    {
        cpu->r[2] = 0x000016acu;
    }
L_0007d2ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d2f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0007d2f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0007d2f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_0007d2fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0007d300:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000au, 0, 0);
    }
L_0007d304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_0007d308:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0007d30c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 3u, &shc); cpu->r[2] = v;
    }
L_0007d310:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[3] = v;
    }
L_0007d314:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007d318:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007d31c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0007d320:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0007d324:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0007d328:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0007d32c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007d330:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0007d334:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007d338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d6b4;
        }
    }
L_0007d33c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_0007d340:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0007d344:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
        }
    }
L_0007d348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d408;
        }
    }
L_0007d34c:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007d350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0007d354:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_0007d358:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d7e4;
        }
    }
L_0007d35c:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d360:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d364:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007d368:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0007d36c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[12]);
    }
L_0007d370:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d374:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d378:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d37c:;
    {
        cpu->r[1] = rd32(0x0007d384u + + 0x5c8u);
    }
L_0007d380:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d384:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007d38cu, cpu->r[1], 0, 0);
    }
L_0007d388:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000660u, 0, 0);
    }
L_0007d38c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0007d390:;
    {
        cpu->r[14] = 0x0007d394u; fn_0007ccd4(cpu);
    }
L_0007d394:;
    {
        goto L_0007d6c8;
    }
L_0007d398:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0007d39c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0007d3a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0007d3a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d250;
        }
    }
L_0007d3a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0007d3ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d3b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0007d3b4:;
    {
        cpu->r[1] = rd16(cpu->r[2]);
    }
L_0007d3b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007d3bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007d3c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d3f4;
        }
    }
L_0007d3c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0007d3cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d3b4;
        }
    }
L_0007d3d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000ccu, 0, 0);
    }
L_0007d3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
    }
L_0007d3d8:;
    {
        cpu->r[1] = rd16(cpu->r[2]);
    }
L_0007d3dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007d3e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007d3e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d3f4;
        }
    }
L_0007d3e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d3ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0007d3f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d3d8;
        }
    }
L_0007d3f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0007d3f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0007d3fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0007d400:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_0007d404:;
    {
        goto L_0007d254;
    }
L_0007d408:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007d40c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d410:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000du, 1, 1);
    }
L_0007d414:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d848;
        }
    }
L_0007d418:;
    {
        cpu->r[0] = 0x000016b8u;
    }
L_0007d41c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d420:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007d424:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007d428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0007d42c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d430:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0007d434:;
    {
        cpu->r[1] = rd16(cpu->r[4] + cpu->r[0]);
    }
L_0007d438:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d43c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xb1cu);
    }
L_0007d440:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d444:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d448:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb28u);
    }
L_0007d44c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007d450:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0007d454:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d8c8;
        }
    }
L_0007d458:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[12], 0x00000100u, 1, 0);
    }
L_0007d45c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d460:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d464:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d468:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[5], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d46c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0007d470:;
    {
        cpu->r[0] = 0x000016bcu;
    }
L_0007d474:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007d478:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007d47c:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d480:;
    {
        wr8(cpu->r[7] + cpu->r[14], cpu->r[3]);
    }
L_0007d484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d488:;
    {
        cpu->r[14] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d48c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d490:;
    {
        uint32_t v = shifter(cpu->r[14], 3, 8u, &shc); cpu->r[14] = v;
    }
L_0007d494:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_0007d498:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007d49c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_0007d4a0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d4a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_0007d4a8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d4ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0007d4b0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0007d4b4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d4b8:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0007d4bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d8f8;
        }
    }
L_0007d4c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007d4c4:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d4c8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d4cc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d4d0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d4d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d4d8:;
    {
        cpu->r[0] = 0x000016bcu;
    }
L_0007d4dc:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d4e0:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0007d4e4:;
    {
        wr8(cpu->r[14] + cpu->r[12], cpu->r[2]);
    }
L_0007d4e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007d4ec:;
    {
        cpu->r[5] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d4f0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d4f4:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d4fc:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007d500:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[5]);
    }
L_0007d504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007d508:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_0007d50c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d510:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_0007d514:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d518:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0007d51c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0007d520:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d524:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0007d528:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d924;
        }
    }
L_0007d52c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_0007d530:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d534:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d538:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d53c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[5], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d540:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0007d544:;
    {
        cpu->r[0] = 0x000016bcu;
    }
L_0007d548:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007d54c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007d550:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d554:;
    {
        wr8(cpu->r[7] + cpu->r[14], cpu->r[3]);
    }
L_0007d558:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d55c:;
    {
        cpu->r[14] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d564:;
    {
        uint32_t v = shifter(cpu->r[14], 3, 8u, &shc); cpu->r[14] = v;
    }
L_0007d568:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_0007d56c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007d570:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_0007d574:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d578:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_0007d57c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0007d580:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d584:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d588:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0007d58c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d674;
        }
    }
L_0007d590:;
    {
        cpu->r[11] = rd32(0x0007d598u + + 0x3b8u);
    }
L_0007d594:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d598:;
    {
        cpu->r[9] = rd32(0x0007d5a0u + + 0x3b4u);
    }
L_0007d59c:;
    {
        cpu->r[0] = 0x000016bcu;
    }
L_0007d5a0:;
    {
        cpu->r[11] = add_flags(cpu, 0x0007d5a8u, cpu->r[11], 0, 0);
    }
L_0007d5a4:;
    {
        cpu->r[9] = add_flags(cpu, 0x0007d5acu, cpu->r[9], 0, 0);
    }
L_0007d5a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000650u, 0, 0);
    }
L_0007d5ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000650u, 0, 0);
    }
L_0007d5b0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_0007d5b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_0007d5b8:;
    {
        goto L_0007d62c;
    }
L_0007d5bc:;
    {
        cpu->r[12] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_0007d5c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d5c4:;
    {
        cpu->r[10] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d5c8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0007d5cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000029cu, 0, 0);
    }
L_0007d5d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d5d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007d5d8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d5dc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007d5e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007d5e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0007d5e8:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x6u);
    }
L_0007d5ec:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d5f0:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d5f4:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0007d5f8:;
    {
        wr8(cpu->r[8] + cpu->r[5], cpu->r[2]);
    }
L_0007d5fc:;
    {
        cpu->r[5] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d600:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d604:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007d608:;
    {
        wr8(cpu->r[2] + cpu->r[14], cpu->r[5]);
    }
L_0007d60c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007d610:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_0007d614:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_0007d618:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000du, 1, 0);
    }
L_0007d61c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d620:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d624:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_0007d628:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d674;
        }
    }
L_0007d62c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007d630:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d634:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0007d638:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000du, 1, 1);
    }
L_0007d63c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0007d640:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d5bc;
        }
    }
L_0007d644:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[3]);
    }
L_0007d648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d64c:;
    {
        cpu->r[5] = rd16(cpu->r[4] + cpu->r[12]);
    }
L_0007d650:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0007d654:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000029cu, 0, 0);
    }
L_0007d658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0007d65c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007d660:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x6u);
    }
L_0007d664:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[14]);
    }
L_0007d668:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d66c:;
    {
        wr16(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_0007d670:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d62c;
        }
    }
L_0007d674:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0007d678:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000980u, 0, 0);
    }
L_0007d67c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007d680:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007d684:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d688:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0007d68c:;
    {
        cpu->r[14] = 0x0007d690u; fn_0007c0c0(cpu);
    }
L_0007d690:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007d694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d698:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007d69c:;
    {
        cpu->r[14] = 0x0007d6a0u; fn_0007c0c0(cpu);
    }
L_0007d6a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d6a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0007d6a8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0007d6ac:;
    {
        cpu->r[14] = 0x0007d6b0u; fn_0007ccd4(cpu);
    }
L_0007d6b0:;
    {
        goto L_0007d6c8;
    }
L_0007d6b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0007d6b8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0007d6bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007d6c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d6c4:;
    {
        cpu->r[14] = 0x0007d6c8u; fn_0007c694(cpu);
    }
L_0007d6c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d6cc:;
    {
        cpu->r[1] = 0x00000478u;
    }
L_0007d6d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0007d6d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007d6d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007d6dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007d6e0:;
    {
        wr16(cpu->r[2] + + 0x94u, cpu->r[0]);
    }
L_0007d6e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d6d0;
        }
    }
L_0007d6e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d6ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0007d6f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007d6f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000980u, 0, 0);
    }
L_0007d6f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 1);
    }
L_0007d6fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007d700:;
    {
        wr16(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_0007d704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d6ec;
        }
    }
L_0007d708:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d70c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0007d710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007d714:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000a70u, 0, 0);
    }
L_0007d718:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000004cu, 1, 1);
    }
L_0007d71c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007d720:;
    {
        wr16(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_0007d724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d70c;
        }
    }
L_0007d728:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d72c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0007d730:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007d734:;
    {
        cpu->r[3] = 0x00000494u;
    }
L_0007d738:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_0007d73c:;
    {
        cpu->r[3] = 0x000016acu;
    }
L_0007d740:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007d744:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0007d748:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007d74c:;
    {
        cpu->r[3] = 0x000016a8u;
    }
L_0007d750:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007d754:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_0007d758:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007d75c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007d7b4;
        }
    }
L_0007d760:;
    {
        cpu->r[3] = 0x000016bcu;
    }
L_0007d764:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007d768:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0007d76c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d7bc;
        }
    }
L_0007d770:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007d774:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d778:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d77c:;
    {
        cpu->r[5] = rd16(cpu->r[4] + cpu->r[2]);
    }
L_0007d780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007d784:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d788:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_0007d78c:;
    {
        cpu->r[1] = rd16(cpu->r[4] + cpu->r[2]);
    }
L_0007d790:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d794:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 8u, &shc); cpu->r[1] = v;
    }
L_0007d798:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0007d79c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0007d7a0:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007d7a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d7a8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0007d7ac:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007d7b0:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0007d7b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0007d7b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007d7bcu)) return;
    }
L_0007d7bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007d7c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007d7a0;
        }
    }
L_0007d7c4:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007d7c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d7cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d7d0:;
    {
        cpu->r[0] = rd16(cpu->r[4] + cpu->r[2]);
    }
L_0007d7d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d7d8:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_0007d7dc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_0007d7e0:;
    {
        goto L_0007d7a0;
    }
L_0007d7e4:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007d7e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d7ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d7f0:;
    {
        cpu->r[6] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d7f4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_0007d7f8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d7fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d800:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[14], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d804:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[14]);
    }
L_0007d808:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0007d80c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007d810:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d814:;
    {
        wr8(cpu->r[7] + cpu->r[12], cpu->r[3]);
    }
L_0007d818:;
    {
        cpu->r[12] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_0007d81c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d820:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007d824:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[12]);
    }
L_0007d828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0007d82c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_0007d830:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d834:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 0);
    }
L_0007d838:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0007d83c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d840:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d844:;
    {
        goto L_0007d37c;
    }
L_0007d848:;
    {
        cpu->r[0] = 0x000016b8u;
    }
L_0007d84c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d850:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007d854:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007d858:;
    {
        cpu->r[7] = rd16(cpu->r[4] + cpu->r[0]);
    }
L_0007d85c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007d860:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d868:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[14], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d86c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007d870:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[14]);
    }
L_0007d874:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d878:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d87c:;
    {
        wr8(cpu->r[8] + cpu->r[12], cpu->r[2]);
    }
L_0007d880:;
    {
        cpu->r[12] = rd16(cpu->r[4] + cpu->r[0]);
    }
L_0007d884:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007d888:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007d88c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_0007d890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d894:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xb1cu);
    }
L_0007d898:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d89c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 0);
    }
L_0007d8a0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d8a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0007d8a8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_0007d8ac:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d8b0:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d8b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb28u);
    }
L_0007d8b8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d8bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007d8c0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0007d8c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d458;
        }
    }
L_0007d8c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007d8cc:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007d8d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000100u, 1, 0);
    }
L_0007d8d4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d8d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d8dc:;
    {
        cpu->r[0] = 0x000016b8u;
    }
L_0007d8e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
    }
L_0007d8e4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d8e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0007d8ec:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d8f0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d8f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d4c0;
        }
    }
L_0007d8f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007d8fc:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007d900:;
    {
        cpu->r[0] = 0x000016b8u;
    }
L_0007d904:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007d908:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d90c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
    }
L_0007d910:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007d914:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0007d918:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007d91c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d920:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007d52c;
        }
    }
L_0007d924:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007d928:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_0007d92c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007d930:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d934:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007d938:;
    {
        wr16(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_0007d93c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0007d940:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0007d944:;
    {
        goto L_0007d588;
    }
}

/* uncompress @ 0007d958 (arm) */
void fn_0007d958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007d958:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0007d95c:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0007d960:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000038u, 1, 0);
    }
L_0007d964:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0007d968:;
    {
        cpu->r[1] = rd32(0x0007d970u + + 0x9cu);
    }
L_0007d96c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_0007d970:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0007d974:;
    {
        cpu->r[2] = 0x00000038u;
    }
L_0007d978:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0007d97c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007d984u, cpu->r[1], 0, 0);
    }
L_0007d980:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0007d984:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0007d988:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0007d98c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007d990:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0007d994:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0007d998:;
    {
        cpu->r[14] = 0x0007d99cu; fn_00079014(cpu);
    }
L_0007d99c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007d9a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007d9b0;
        }
    }
L_0007d9a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007d9a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0007d9ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007d9b0u)) return;
    }
L_0007d9b0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0007d9b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0007d9b8:;
    {
        cpu->r[14] = 0x0007d9bcu; fn_000796cc(cpu);
    }
L_0007d9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0007d9c0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007d9c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d9e0;
        }
    }
L_0007d9c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007d9cc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0007d9d0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0007d9d4:;
    {
        cpu->r[14] = 0x0007d9d8u; fn_00079024(cpu);
    }
L_0007d9d8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007d9dc:;
    {
        goto L_0007d9a4;
    }
L_0007d9e0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0007d9e4:;
    {
        cpu->r[14] = 0x0007d9e8u; fn_00079024(cpu);
    }
L_0007d9e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0007d9ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007da04;
        }
    }
L_0007d9f0:;
    {
        add_flags(cpu, cpu->r[6], 0x00000005u, 0, 1);
    }
L_0007d9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d9a4;
        }
    }
L_0007d9f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007d9fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007da00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007d9a4;
        }
    }
L_0007da04:;
    {
        cpu->r[6] = (~0x00000002u);
    }
L_0007da08:;
    {
        goto L_0007d9a4;
    }
}

/* zlibVersion @ 0007da10 (arm) */
void fn_0007da10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da10:;
    {
        cpu->r[0] = rd32(0x0007da18u + + 0x4u);
    }
L_0007da14:;
    {
        cpu->r[0] = add_flags(cpu, 0x0007da1cu, cpu->r[0], 0, 0);
    }
L_0007da18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* zlibCompileFlags @ 0007da20 (arm) */
void fn_0007da20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da20:;
    {
        cpu->r[0] = 0x00000055u;
    }
L_0007da24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* zError @ 0007da28 (arm) */
void fn_0007da28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da28:;
    {
        cpu->r[3] = rd32(0x0007da30u + + 0x14u);
    }
L_0007da2c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000002u, cpu->r[0], 1, 0);
    }
L_0007da30:;
    {
        cpu->r[2] = rd32(0x0007da38u + + 0x10u);
    }
L_0007da34:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007da3cu, cpu->r[3], 0, 0);
    }
L_0007da38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007da3c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0007da40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* zcfree @ 0007da4c (arm) */
void fn_0007da4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da4c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0007da50:;
    {
        imp_free(cpu); /* tail free */ return;
    }
}

/* zcalloc @ 0007da54 (arm) */
void fn_0007da54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da54:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[0] = v;
    }
L_0007da58:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* bio_create @ 0007da5c (arm) */
void fn_0007da5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da5c:;
    {
        cpu->r[3] = rd32(0x0007da64u + + 0x1cu);
    }
L_0007da60:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_0007da64:;
    {
        cpu->r[2] = rd32(0x0007da6cu + + 0x18u);
    }
L_0007da68:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007da70u, cpu->r[3], 0, 0);
    }
L_0007da6c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0007da70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007da74:;
    {
        cpu->r[14] = 0x0007da7cu;
    }
L_0007da78:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007da7cu)) return;
    }
L_0007da7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007da80u)) return;
    }
}

/* bio_destroy @ 0007da88 (arm) */
void fn_0007da88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007da88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007da8c:;
    {
        cpu->r[3] = rd32(0x0007da94u + + 0x1cu);
    }
L_0007da90:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0007da94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007da9cu, cpu->r[3], 0, 0);
    }
L_0007da98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007da9cu)) return;
        }
    }
L_0007da9c:;
    {
        cpu->r[2] = rd32(0x0007daa4u + + 0x10u);
    }
L_0007daa0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007daa4:;
    {
        cpu->r[14] = 0x0007daacu;
    }
L_0007daa8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007daacu)) return;
    }
L_0007daac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dab0u)) return;
    }
}

/* bio_numbytes @ 0007dab8 (arm) */
void fn_0007dab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dab8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0007dabc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007dac0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0007dac4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* bio_init_enc @ 0007dac8 (arm) */
void fn_0007dac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dac8:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0007dacc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007dad0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007dad4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007dad8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0007dadc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0007dae0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0007dae4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0007dae8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* bio_init_dec @ 0007daec (arm) */
void fn_0007daec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007daec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007daf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007daf4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007daf8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0007dafc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0007db00:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0007db04:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0007db08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* bio_write @ 0007db0c (arm) */
void fn_0007db0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007db0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007db10:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_0007db14:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007db8c;
        }
    }
L_0007db18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007db1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007db20:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007db24:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_0007db28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007db2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007db70;
        }
    }
L_0007db30:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007db34:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007db38:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007db3c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 24u, &shc); cpu->r[4] = v;
    }
L_0007db40:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0007db44:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 24u, &shc); cpu->r[8] = v;
    }
L_0007db48:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 16u, &shc); cpu->r[4] = v;
    }
L_0007db4c:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000ff00u, 1, 1);
    }
L_0007db50:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_0007db54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_0007db58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000008u;
        }
    }
L_0007db5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0007db60:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007db64:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t wb_tmp = cpu->r[6] + 0x00000001u;
        wr8(cpu->r[6], cpu->r[8]);
        cpu->r[6] = wb_tmp;
        }
    }
L_0007db68:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_0007db6c:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
        }
    }
L_0007db70:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007db74:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0007db78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007db7c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007db80:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007db84:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_0007db88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007db1c;
        }
    }
L_0007db8c:;
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
        cpu->r[8] = v4;
        cpu->r[13] += 20u;
    }
L_0007db90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* bio_read @ 0007db94 (arm) */
void fn_0007db94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007db94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0007db98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_0007db9c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0007dba0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007dc18;
        }
    }
L_0007dba4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007dba8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007dbac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007dbb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007dbb4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 24u, &shc); cpu->r[4] = v;
    }
L_0007dbb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007dbbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007dc00;
        }
    }
L_0007dbc0:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 16u, &shc); cpu->r[2] = v;
    }
L_0007dbc4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007dbc8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007dbcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000ff00u, 1, 1);
    }
L_0007dbd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000007u;
        }
    }
L_0007dbd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000008u;
        }
    }
L_0007dbd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000006u;
        }
    }
L_0007dbdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_0007dbe0:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0007dbe4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0007dbe8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0007dbec:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[6]);
    }
L_0007dbf0:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t wb_tmp = cpu->r[5] + 0x00000001u;
        cpu->r[4] = rd8(cpu->r[5]);
        cpu->r[5] = wb_tmp;
        }
    }
L_0007dbf4:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v = cpu->r[4] | cpu->r[2]; cpu->r[2] = v;
        }
    }
L_0007dbf8:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_0007dbfc:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
        }
    }
L_0007dc00:;
    {
        uint32_t v = shifter(cpu->r[2], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_0007dc04:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007dc08:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[4] = v;
    }
L_0007dc0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc), 0, 0);
    }
L_0007dc10:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0007dc14:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007dbb0;
        }
    }
L_0007dc18:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007dc1c:;
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
L_0007dc20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* bio_flush @ 0007dc24 (arm) */
void fn_0007dc24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dc24:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007dc28:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007dc2c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007dc30:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_0007dc34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0007dc38:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 16u, &shc); cpu->r[3] = v;
    }
L_0007dc3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000ff00u, 1, 1);
    }
L_0007dc40:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0007dc44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_0007dc48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000008u;
        }
    }
L_0007dc4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007dc50:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007dc54:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0007dc58:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007dc80;
        }
    }
L_0007dc5c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007dc60:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[1] = v;
    }
L_0007dc64:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_0007dc68:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007dc6c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0007dc70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_0007dc74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007dc8c;
        }
    }
L_0007dc78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007dc7c:;
    {
        goto L_0007dc84;
    }
L_0007dc80:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0007dc84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0007dc88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007dc8c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007dc90:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007dc94:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 24u, &shc); cpu->r[12] = v;
    }
L_0007dc98:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 16u, &shc); cpu->r[1] = v;
    }
L_0007dc9c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0007dca0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000ff00u, 1, 1);
    }
L_0007dca4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000007u;
        }
    }
L_0007dca8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000008u;
        }
    }
L_0007dcac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0007dcb0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0007dcb4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007dc80;
        }
    }
L_0007dcb8:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 24u, &shc); cpu->r[12] = v;
    }
L_0007dcbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007dcc0:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[12]);
    }
L_0007dcc4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0007dcc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007dccc:;
    {
        goto L_0007dc84;
    }
}

/* bio_inalign @ 0007dcd0 (arm) */
void fn_0007dcd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dcd0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007dcd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007dcd8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007dcdc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0007dce0:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[0] = v;
    }
L_0007dce4:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000ffu, 1, 1);
    }
L_0007dce8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0007dcec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_0007dcf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007dd3c;
        }
    }
L_0007dcf4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_0007dcf8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_0007dcfc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007dd00:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 16u, &shc); cpu->r[1] = v;
    }
L_0007dd04:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_0007dd08:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000ff00u, 1, 1);
    }
L_0007dd0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000007u;
        }
    }
L_0007dd10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000008u;
        }
    }
L_0007dd14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0007dd18:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_0007dd1c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0007dd20:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0007dd24:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_0007dd28:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t wb_tmp = cpu->r[12] + 0x00000001u;
        cpu->r[4] = rd8(cpu->r[12]);
        cpu->r[12] = wb_tmp;
        }
    }
L_0007dd2c:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0007dd30:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v = cpu->r[4] | cpu->r[1]; cpu->r[1] = v;
        }
    }
L_0007dd34:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
        }
    }
L_0007dd38:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
        }
    }
L_0007dd3c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0007dd40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* opj_cio_close @ 0007dd44 (arm) */
void fn_0007dd44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dd44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0007dd48:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007dd4c:;
    {
        cpu->r[4] = rd32(0x0007dd54u + + 0x50u);
    }
L_0007dd50:;
    {
        cpu->r[4] = add_flags(cpu, 0x0007dd58u, cpu->r[4], 0, 0);
    }
L_0007dd54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dd58u)) return;
        }
    }
L_0007dd58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0007dd5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0007dd60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007dd7c;
        }
    }
L_0007dd64:;
    {
        cpu->r[6] = rd32(0x0007dd6cu + + 0x3cu);
    }
L_0007dd68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007dd6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0007dd70:;
    {
        cpu->r[14] = 0x0007dd78u;
    }
L_0007dd74:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dd78u)) return;
    }
L_0007dd78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dd7cu)) return;
    }
L_0007dd7c:;
    {
        cpu->r[6] = rd32(0x0007dd84u + + 0x24u);
    }
L_0007dd80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0007dd84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0007dd88:;
    {
        cpu->r[14] = 0x0007dd90u;
    }
L_0007dd8c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dd90u)) return;
    }
L_0007dd90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0007dd94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007dd98:;
    {
        cpu->r[14] = 0x0007dda0u;
    }
L_0007dd9c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dda0u)) return;
    }
L_0007dda0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dda4u)) return;
    }
}

/* cio_tell @ 0007ddac (arm) */
void fn_0007ddac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ddac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007ddb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007ddb4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0007ddb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* cio_seek @ 0007ddbc (arm) */
void fn_0007ddbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ddbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007ddc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007ddc4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0007ddc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* cio_numbytesleft @ 0007ddcc (arm) */
void fn_0007ddcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ddcc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007ddd0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007ddd4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0007ddd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* cio_getbp @ 0007dddc (arm) */
void fn_0007dddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dddc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007dde0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* cio_skip @ 0007dde4 (arm) */
void fn_0007dde4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007dde4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007dde8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007ddec:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0007ddf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* cio_bytein @ 0007ddf4 (arm) */
void fn_0007ddf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ddf4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007ddf8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007ddfc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0007de00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007de04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0007de08:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007de20;
        }
    }
L_0007de0c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_0007de10:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0007de14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0007de18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0007de1c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007de20u)) return;
    }
L_0007de20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0007de24:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007de28:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0007de2c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0007de30:;
    {
        cpu->r[2] = rd32(0x0007de38u + + 0x10u);
    }
L_0007de34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007de38:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007de40u, cpu->r[2], 0, 0);
    }
L_0007de3c:;
    {
        cpu->r[14] = 0x0007de40u; fn_00080304(cpu);
    }
L_0007de40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007de44:;
    {
        goto L_0007de14;
    }
}

/* cio_read @ 0007de4c (arm) */
void fn_0007de4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007de4c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0007de50:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0007de54:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007de58:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0007de5c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007de80;
        }
    }
L_0007de60:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007de64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007de68:;
    {
        cpu->r[14] = 0x0007de6cu; fn_0007ddf4(cpu);
    }
L_0007de6c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[3] = v;
    }
L_0007de70:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0007de74:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_0007de78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_0007de7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007de64;
        }
    }
L_0007de80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007de84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007de88u)) return;
    }
}

/* cio_byteout @ 0007de88 (arm) */
void fn_0007de88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007de88:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007de8c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007de90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007de94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0007de98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0007de9c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007deb0;
        }
    }
L_0007dea0:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        wr8(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_0007dea4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0007dea8:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0007deac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007deb0u)) return;
    }
L_0007deb0:;
    {
        cpu->r[2] = rd32(0x0007deb8u + + 0x14u);
    }
L_0007deb4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007deb8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0007debc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007dec4u, cpu->r[2], 0, 0);
    }
L_0007dec0:;
    {
        cpu->r[14] = 0x0007dec4u; fn_00080304(cpu);
    }
L_0007dec4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007dec8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007deccu)) return;
    }
}

/* cio_write @ 0007ded0 (arm) */
void fn_0007ded0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ded0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0007ded4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007ded8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0007dedc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007dee0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0007dee4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007df10;
        }
    }
L_0007dee8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0007deec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007def0:;
    {
        uint32_t v = shifter(cpu->r[5], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007def4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0007def8:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_0007defc:;
    {
        cpu->r[14] = 0x0007df00u; fn_0007de88(cpu);
    }
L_0007df00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007df04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007df08u)) return;
        }
    }
L_0007df08:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_0007df0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007dee8;
        }
    }
L_0007df10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0007df14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007df18u)) return;
    }
}

/* opj_cio_open @ 0007df18 (arm) */
void fn_0007df18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007df18:;
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
L_0007df1c:;
    {
        cpu->r[5] = rd32(0x0007df24u + + 0x16cu);
    }
L_0007df20:;
    {
        cpu->r[7] = rd32(0x0007df28u + + 0x16cu);
    }
L_0007df24:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007df28:;
    {
        cpu->r[5] = add_flags(cpu, 0x0007df30u, cpu->r[5], 0, 0);
    }
L_0007df2c:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0007df30:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0007df34:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0007df38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0007df3c:;
    {
        cpu->r[14] = 0x0007df44u;
    }
L_0007df40:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007df44u)) return;
    }
L_0007df44:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007df48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e000;
        }
    }
L_0007df4c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007df50:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_0007df54:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_0007df58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0007df5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0007df60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e008;
        }
    }
L_0007df64:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007df68:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_0007df6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e064;
        }
    }
L_0007df70:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0007df74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e064;
        }
    }
L_0007df78:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_0007df7c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0007df80:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0007df84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007df88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e030;
        }
    }
L_0007df8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007df90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x40u);
    }
L_0007df94:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0007df98:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_0007df9c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0007dfa4u + + 0xdcu);
    }
L_0007dfa0:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0007dfa8u + + 0xe0u);
    }
L_0007dfa4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0007dfa8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_0007dfac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_d(cpu,7);
    }
L_0007dfb0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0007dfb4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0007dfb8:;
    {
        cpu->r[14] = 0x0007dfc0u;
    }
L_0007dfbc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007dfc0u)) return;
    }
L_0007dfc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007dfc4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007dfc8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0007dfcc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0007dfd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e010;
        }
    }
L_0007dfd4:;
    {
        cpu->r[2] = rd32(0x0007dfdcu + + 0xbcu);
    }
L_0007dfd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007dfdc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007dfe0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007dfe8u, cpu->r[2], 0, 0);
    }
L_0007dfe4:;
    {
        cpu->r[14] = 0x0007dfe8u; fn_00080304(cpu);
    }
L_0007dfe8:;
    {
        cpu->r[3] = rd32(0x0007dff0u + + 0xacu);
    }
L_0007dfec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007dff0:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0007dff4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0007dff8:;
    {
        cpu->r[14] = 0x0007e000u;
    }
L_0007dffc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e000u)) return;
    }
L_0007e000:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e008u)) return;
    }
L_0007e008:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0007e00c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_0007e010:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007e014:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e018:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0007e01c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_0007e020:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0007e024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0007e028:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_0007e02c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e030u)) return;
    }
L_0007e030:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0007e034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e054;
        }
    }
L_0007e038:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0007e03c:;
    {
        cpu->r[3] = rd32(0x0007e044u + + 0x58u);
    }
L_0007e040:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0007e044:;
    {
        cpu->r[14] = 0x0007e04cu;
    }
L_0007e048:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e04cu)) return;
    }
L_0007e04c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e054u)) return;
    }
L_0007e054:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0007e058:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007e05c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x40u);
    }
L_0007e060:;
    {
        goto L_0007df94;
    }
L_0007e064:;
    {
        cpu->r[3] = rd32(0x0007e06cu + + 0x30u);
    }
L_0007e068:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e06c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007e070:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0007e074:;
    {
        cpu->r[14] = 0x0007e07cu;
    }
L_0007e078:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007e07cu)) return;
    }
L_0007e07c:;
    {
        goto L_0007e000;
    }
}

/* sub_0007e0a0 @ 0007e0a0 (arm) */
void fn_0007e0a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007e0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e0a4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_0007e0a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e1c8;
        }
    }
L_0007e0ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e0b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0007e0b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0007e0b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e0bc:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
        }
    }
L_0007e0c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e1c0;
        }
    }
L_0007e0c4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007e0c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e160;
        }
    }
L_0007e0cc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007e0d0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0007e0d4:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0007e0d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_0007e0dc:;
    {
        goto L_0007e120;
    }
L_0007e0e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e0e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[8]);
        }
    }
L_0007e0e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[12]);
        }
    }
L_0007e0ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007e0f0:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0007e0f4:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e0f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e0fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[8]);
        }
    }
L_0007e100:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e104:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[12] + + 0x8u);
        }
    }
L_0007e108:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0007e10c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0007e110:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[4], 1, 1u, &shc), 1, 0);
    }
L_0007e114:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[4]);
    }
L_0007e118:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0007e11c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e160;
        }
    }
L_0007e120:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e124:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_0007e128:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e0e0;
        }
    }
L_0007e12c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0007e130:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0007e134:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e138:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[4];
        }
    }
L_0007e13c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e0ec;
        }
    }
L_0007e140:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0007e144:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0007e148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e14c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e150:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[4], 1, 1u, &shc), 1, 0);
    }
L_0007e154:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[4]);
    }
L_0007e158:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0007e15c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007e120;
        }
    }
L_0007e160:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e164:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e1c0;
        }
    }
L_0007e168:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0007e16c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0007e170:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0007e174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007e178:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0007e17c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e180:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_0007e184:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e198;
        }
    }
L_0007e18c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e190:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007e194:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[12] + - 0x4u);
        }
    }
L_0007e198:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e19c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e1a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = rd32(cpu->r[7]);
        }
    }
L_0007e1a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[12] + + 0x4u);
        }
    }
L_0007e1a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007e1ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0007e1b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0007e1b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 1, 2u, &shc), 0, 0);
    }
L_0007e1b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000008u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_0007e1bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e17c;
        }
    }
L_0007e1c0:;
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
L_0007e1c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007e1c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e1cc:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
        }
    }
L_0007e1d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0007e1d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0007e1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e2bc;
        }
    }
L_0007e1dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e1e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e234;
        }
    }
L_0007e1e4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0007e1e8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0007e1ec:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0007e1f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0007e1f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e1f8:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_0007e1fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = rd32(cpu->r[7]);
        }
    }
L_0007e200:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = rd32(cpu->r[12] + + 0x4u);
        }
    }
L_0007e204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e208:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e20c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e21c;
        }
    }
L_0007e210:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e214:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007e218:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = rd32(cpu->r[12] + - 0x4u);
        }
    }
L_0007e21c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e220:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0007e224:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e228:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[4], 1, 1u, &shc), 1, 0);
    }
L_0007e22c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000008u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_0007e230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e1f4;
        }
    }
L_0007e234:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e238:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e1c0;
        }
    }
L_0007e23c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007e240:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007e244:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0007e248:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007e24c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_0007e250:;
    {
        goto L_0007e298;
    }
L_0007e254:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0007e258:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[8]);
        }
    }
L_0007e25c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0007e260:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0007e264:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_0007e268:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e26c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[8]);
        }
    }
L_0007e270:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0007e274:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_0007e278:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_0007e27c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007e280:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007e284:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e288:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
    }
L_0007e28c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0007e290:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007e294:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e1c0;
        }
    }
L_0007e298:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007e29c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007e2a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e254;
        }
    }
L_0007e2a4:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_0007e2a8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0007e2ac:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e2b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[12];
        }
    }
L_0007e2b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007e274;
        }
    }
L_0007e2b8:;
    {
        goto L_0007e260;
    }
L_0007e2bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0007e2c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0007e2c4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0007e2c8:;
    {
        goto L_0007e1c0;
    }
}

/* sub_0007e2cc @ 0007e2cc (arm) */
void fn_0007e2cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007e2cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007e2d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_0007e2d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e2d8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0007e2dc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0007e2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e400;
        }
    }
L_0007e2e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e2e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0007e2ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0007e2f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e2f4:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
        }
    }
L_0007e2f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e3f8;
        }
    }
L_0007e2fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e300:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e358;
        }
    }
L_0007e304:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[6] = v;
    }
L_0007e308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e30c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_0007e310:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0007e314:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e318:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0007e31c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_0007e320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e330;
        }
    }
L_0007e324:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0007e328:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[6]);
        }
    }
L_0007e32c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[0] + - 0x4u);
        }
    }
L_0007e330:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0007e334:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007e338:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[6]);
        }
    }
L_0007e33c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e340:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0007e344:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_0007e348:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007e34c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[12], 1, 2u, &shc), 1, 0);
    }
L_0007e350:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000008u;
        wr32(cpu->r[0], cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_0007e354:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e314;
        }
    }
L_0007e358:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007e35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e3f8;
        }
    }
L_0007e360:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007e364:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0007e368:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0007e36c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007e370:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_0007e374:;
    {
        goto L_0007e3b8;
    }
L_0007e378:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0007e37c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[8]);
        }
    }
L_0007e380:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1]);
        }
    }
L_0007e384:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0007e388:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007e38c:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e390:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e394:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[8]);
        }
    }
L_0007e398:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e39c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
        }
    }
L_0007e3a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_0007e3a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0007e3a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
    }
L_0007e3ac:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_0007e3b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0007e3b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e3f8;
        }
    }
L_0007e3b8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007e3bc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x4u);
    }
L_0007e3c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e378;
        }
    }
L_0007e3c4:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0007e3c8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007e3cc:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e3d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_0007e3d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e384;
        }
    }
L_0007e3d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0007e3dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_0007e3e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e3e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e3e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
    }
L_0007e3ec:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_0007e3f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0007e3f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007e3b8;
        }
    }
L_0007e3f8:;
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
L_0007e3fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007e400:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007e404:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
        }
    }
L_0007e408:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0007e40c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0007e410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e4f8;
        }
    }
L_0007e414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e418:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e498;
        }
    }
L_0007e41c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007e420:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0007e424:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0007e428:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_0007e42c:;
    {
        goto L_0007e474;
    }
L_0007e430:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007e434:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[8]);
        }
    }
L_0007e438:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1]);
        }
    }
L_0007e43c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007e440:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007e444:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e448:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[8]);
        }
    }
L_0007e44c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
        }
    }
L_0007e450:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0007e454:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0007e458:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_0007e45c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e460:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007e464:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[0], 1, 2u, &shc), 1, 0);
    }
L_0007e468:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_0007e46c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0007e470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e498;
        }
    }
L_0007e474:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007e478:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x4u);
    }
L_0007e47c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e430;
        }
    }
L_0007e480:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0007e484:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007e488:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007e48c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_0007e490:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007e450;
        }
    }
L_0007e494:;
    {
        goto L_0007e43c;
    }
L_0007e498:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e49c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e3f8;
        }
    }
L_0007e4a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0007e4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007e4a8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0007e4ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007e4b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_0007e4b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e4b8:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0007e4bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = rd32(cpu->r[7]);
        }
    }
L_0007e4c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e4c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e4c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_0007e4cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e4dc;
        }
    }
L_0007e4d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e4d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[7]);
        }
    }
L_0007e4d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[0] + - 0x4u);
        }
    }
L_0007e4dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007e4e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0007e4e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0007e4e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
    }
L_0007e4ec:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000008u;
        wr32(cpu->r[0], cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_0007e4f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e4b4;
        }
    }
L_0007e4f4:;
    {
        goto L_0007e3f8;
    }
L_0007e4f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0007e4fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0007e500:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0007e504:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0007e508:;
    {
        goto L_0007e3f8;
    }
}

/* sub_0007e50c @ 0007e50c (arm) */
void fn_0007e50c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007e50c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e510:;
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
L_0007e514:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0007e518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e5f4;
        }
    }
L_0007e51c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e520:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0007e524:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_0007e528:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e52c:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
        }
    }
L_0007e530:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0007e534:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e610;
        }
    }
L_0007e538:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007e53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e980;
        }
    }
L_0007e540:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007e544:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0007e548:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0007e54c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0007e550:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_0007e554:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0007e558:;
    {
        goto L_0007e5d0;
    }
L_0007e55c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e560:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e564:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[12]);
        }
    }
L_0007e568:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[8]);
        }
    }
L_0007e56c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0007e570:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0007e574:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0007e578:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e57c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
        }
    }
L_0007e580:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[10]);
        }
    }
L_0007e584:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007e588:;
    {
        cpu->r[11] = 0x000032c1u;
    }
L_0007e58c:;
    {
        cpu->r[10] = 0x00001000u;
    }
L_0007e590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e594:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[11]; cpu->r[4] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0007e598:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0007e59c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007e5a0:;
    {
        uint32_t v = cpu->r[4] & cpu->r[10]; cpu->r[0] = v;
    }
L_0007e5a4:;
    {
        uint32_t v = cpu->r[5] & cpu->r[11]; cpu->r[1] = v;
    }
L_0007e5a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_0007e5ac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007e5b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e5b4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[4] = v;
    }
L_0007e5b8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 1);
    }
L_0007e5bc:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[1], 2, 19u, &shc); cpu->r[4] = v;
    }
L_0007e5c0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_0007e5c4:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[7]);
    }
L_0007e5c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0007e5cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e978;
        }
    }
L_0007e5d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e5d4:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_0007e5d8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e55c;
        }
    }
L_0007e5dc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0007e5e0:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0007e5e4:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0007e5e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0007e5ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007e584;
        }
    }
L_0007e5f0:;
    {
        goto L_0007e56c;
    }
L_0007e5f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e5f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_0007e5fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_0007e600:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e604:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
        }
    }
L_0007e608:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0007e60c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007e61c;
        }
    }
L_0007e610:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0007e614:;
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
L_0007e618:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007e61c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e620:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e6a4;
        }
    }
L_0007e624:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[10] = v;
    }
L_0007e628:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007e62c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0007e630:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007e634:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0007e638:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0007e63c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e640:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0007e644:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[7]);
        }
    }
L_0007e648:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0007e64c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e650:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e664;
        }
    }
L_0007e658:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e65c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007e660:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = rd32(cpu->r[6] + - 0x4u);
        }
    }
L_0007e664:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0007e668:;
    {
        cpu->r[4] = 0x000032c1u;
    }
L_0007e66c:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e670:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e674:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[4]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0007e678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e67c:;
    {
        uint32_t v = cpu->r[10] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007e680:;
    {
        uint32_t v = cpu->r[11] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007e684:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 1);
    }
L_0007e688:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e68c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[10] = v;
    }
L_0007e690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e694:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[10] = v;
    }
L_0007e698:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 0);
    }
L_0007e69c:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000008u;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_0007e6a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e63c;
        }
    }
L_0007e6a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007e6a8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007e6ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e778;
        }
    }
L_0007e6b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007e6b4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007e6b8:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0007e6bc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007e6c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_0007e6c4:;
    {
        cpu->r[11] = 0x000001b2u;
    }
L_0007e6c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0007e6cc:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0007e6d0:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0007e6d4:;
    {
        goto L_0007e748;
    }
L_0007e6d8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_0007e6dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e6e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_0007e6e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4]);
        }
    }
L_0007e6e8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0007e6ec:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0007e6f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0007e6f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e6f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0007e6fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[8]);
        }
    }
L_0007e700:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007e704:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e708:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e70c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e710:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[11]; cpu->r[4] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0007e714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007e718:;
    {
        uint32_t v = cpu->r[4] & cpu->r[8]; cpu->r[0] = v;
    }
L_0007e71c:;
    {
        uint32_t v = cpu->r[5] & cpu->r[9]; cpu->r[1] = v;
    }
L_0007e720:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_0007e724:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007e728:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e72c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[4] = v;
    }
L_0007e730:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0007e734:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[1], 2, 19u, &shc); cpu->r[4] = v;
    }
L_0007e738:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_0007e73c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0007e740:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007e744:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e770;
        }
    }
L_0007e748:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007e74c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007e750:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e6d8;
        }
    }
L_0007e754:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0007e758:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0007e75c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0007e760:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_0007e764:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0007e768:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007e700;
        }
    }
L_0007e76c:;
    {
        goto L_0007e6e8;
    }
L_0007e770:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0007e774:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0007e778:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e77c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e800;
        }
    }
L_0007e780:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[10] = v;
    }
L_0007e784:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007e788:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0007e78c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007e790:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0007e794:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0007e798:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e79c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0007e7a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[7]);
        }
    }
L_0007e7a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0007e7a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e7ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e7b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e7c0;
        }
    }
L_0007e7b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007e7b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007e7bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = rd32(cpu->r[6] + - 0x4u);
        }
    }
L_0007e7c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0007e7c4:;
    {
        cpu->r[4] = 0x00001c41u;
    }
L_0007e7c8:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e7cc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e7d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[4]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0007e7d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e7d8:;
    {
        uint32_t v = cpu->r[10] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007e7dc:;
    {
        uint32_t v = cpu->r[11] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007e7e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 1);
    }
L_0007e7e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e7e8:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[10] = v;
    }
L_0007e7ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e7f0:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[10] = v;
    }
L_0007e7f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_0007e7f8:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000008u;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_0007e7fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e798;
        }
    }
L_0007e800:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007e804:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007e808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e8d4;
        }
    }
L_0007e80c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007e810:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007e814:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0007e818:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007e81c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_0007e820:;
    {
        cpu->r[11] = 0x00000e31u;
    }
L_0007e824:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0007e828:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0007e82c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0007e830:;
    {
        goto L_0007e8a4;
    }
L_0007e834:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_0007e838:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e83c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_0007e840:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4]);
        }
    }
L_0007e844:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0007e848:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0007e84c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0007e850:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007e854:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0007e858:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[8]);
        }
    }
L_0007e85c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007e860:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e864:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e86c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[11]; cpu->r[4] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0007e870:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007e874:;
    {
        uint32_t v = cpu->r[4] & cpu->r[8]; cpu->r[0] = v;
    }
L_0007e878:;
    {
        uint32_t v = cpu->r[5] & cpu->r[9]; cpu->r[1] = v;
    }
L_0007e87c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_0007e880:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007e884:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e888:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[4] = v;
    }
L_0007e88c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0007e890:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[1], 2, 19u, &shc); cpu->r[4] = v;
    }
L_0007e894:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_0007e898:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0007e89c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007e8a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e8cc;
        }
    }
L_0007e8a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007e8a8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007e8ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007e834;
        }
    }
L_0007e8b0:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0007e8b4:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0007e8b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0007e8bc:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_0007e8c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0007e8c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007e85c;
        }
    }
L_0007e8c8:;
    {
        goto L_0007e844;
    }
L_0007e8cc:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0007e8d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0007e8d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007e8d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e924;
        }
    }
L_0007e8dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007e8e0:;
    {
        cpu->r[10] = 0x000013aeu;
    }
L_0007e8e4:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0007e8e8:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e8ec:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e8f0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007e8f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007e8f8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[10]; cpu->r[6] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_0007e8fc:;
    {
        uint32_t v = cpu->r[6] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007e900:;
    {
        uint32_t v = cpu->r[7] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007e904:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 1);
    }
L_0007e908:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e90c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0007e910:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[6] = v;
    }
L_0007e914:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[6] = v;
    }
L_0007e918:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[6]);
    }
L_0007e91c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007e920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e8f0;
        }
    }
L_0007e924:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007e928:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007e92c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e610;
        }
    }
L_0007e930:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007e934:;
    {
        cpu->r[12] = 0x00001a03u;
    }
L_0007e938:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e93c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e940:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007e944:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007e948:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[12]; cpu->r[6] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_0007e94c:;
    {
        uint32_t v = cpu->r[6] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007e950:;
    {
        uint32_t v = cpu->r[7] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007e954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 1);
    }
L_0007e958:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e95c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0007e960:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[3] = v;
    }
L_0007e964:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[3] = v;
    }
L_0007e968:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0007e96c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0007e970:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007e940;
        }
    }
L_0007e974:;
    {
        goto L_0007e610;
    }
L_0007e978:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0007e97c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007e980:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007e984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ea08;
        }
    }
L_0007e988:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[10] = v;
    }
L_0007e98c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007e990:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0007e994:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007e998:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0007e99c:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0007e9a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007e9a4:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0007e9a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007e9ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007e9bc;
        }
    }
L_0007e9b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e9b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007e9b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[6] + - 0x4u);
        }
    }
L_0007e9bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007e9c0:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007e9c4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007e9c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007e9cc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = rd32(cpu->r[7]);
        }
    }
L_0007e9d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0007e9d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0007e9d8:;
    {
        cpu->r[4] = 0x000001b2u;
    }
L_0007e9dc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[4]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0007e9e0:;
    {
        uint32_t v = cpu->r[10] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007e9e4:;
    {
        uint32_t v = cpu->r[11] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007e9e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 1);
    }
L_0007e9ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007e9f0:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[10] = v;
    }
L_0007e9f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007e9f8:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[10] = v;
    }
L_0007e9fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 0);
    }
L_0007ea00:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000008u;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_0007ea04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007e9a0;
        }
    }
L_0007ea08:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ea0c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007ea10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ead4;
        }
    }
L_0007ea14:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007ea18:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007ea1c:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0007ea20:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007ea24:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_0007ea28:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0007ea2c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0007ea30:;
    {
        goto L_0007eaa8;
    }
L_0007ea34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007ea38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007ea3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_0007ea40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[10]);
        }
    }
L_0007ea44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0007ea48:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0007ea4c:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0007ea50:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007ea54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0007ea58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[11]);
        }
    }
L_0007ea5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007ea60:;
    {
        cpu->r[0] = 0x00001c41u;
    }
L_0007ea64:;
    {
        cpu->r[10] = 0x00001000u;
    }
L_0007ea68:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0007ea6c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[0]; cpu->r[4] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0007ea70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ea74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007ea78:;
    {
        uint32_t v = cpu->r[4] & cpu->r[10]; cpu->r[0] = v;
    }
L_0007ea7c:;
    {
        uint32_t v = cpu->r[5] & cpu->r[11]; cpu->r[1] = v;
    }
L_0007ea80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_0007ea84:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ea88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007ea8c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[4] = v;
    }
L_0007ea90:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 1);
    }
L_0007ea94:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[1], 2, 19u, &shc); cpu->r[4] = v;
    }
L_0007ea98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_0007ea9c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0007eaa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007eaa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007eacc;
        }
    }
L_0007eaa8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007eaac:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007eab0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007ea34;
        }
    }
L_0007eab4:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0007eab8:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0007eabc:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0007eac0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0007eac4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007ea5c;
        }
    }
L_0007eac8:;
    {
        goto L_0007ea44;
    }
L_0007eacc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0007ead0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007ead4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007ead8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007eb5c;
        }
    }
L_0007eadc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[10] = v;
    }
L_0007eae0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007eae4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0007eae8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007eaec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0007eaf0:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0007eaf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007eaf8:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0007eafc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0007eb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007eb10;
        }
    }
L_0007eb04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007eb08:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0007eb0c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[6] + - 0x4u);
        }
    }
L_0007eb10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007eb14:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007eb18:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007eb1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007eb20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = rd32(cpu->r[7]);
        }
    }
L_0007eb24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0007eb28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0007eb2c:;
    {
        cpu->r[4] = 0x00000e31u;
    }
L_0007eb30:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[4]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0007eb34:;
    {
        uint32_t v = cpu->r[10] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007eb38:;
    {
        uint32_t v = cpu->r[11] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007eb3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 1);
    }
L_0007eb40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007eb44:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[10] = v;
    }
L_0007eb48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007eb4c:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[10] = v;
    }
L_0007eb50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_0007eb54:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000008u;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_0007eb58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007eaf4;
        }
    }
L_0007eb5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007eb60:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007eb64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ebb0;
        }
    }
L_0007eb68:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007eb6c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0007eb70:;
    {
        cpu->r[7] = 0x000013aeu;
    }
L_0007eb74:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007eb78:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007eb7c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007eb80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007eb84:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[7]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0007eb88:;
    {
        uint32_t v = cpu->r[10] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007eb8c:;
    {
        uint32_t v = cpu->r[11] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007eb90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 1);
    }
L_0007eb94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007eb98:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_0007eb9c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[12] = v;
    }
L_0007eba0:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[12] = v;
    }
L_0007eba4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0007eba8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007ebac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007eb7c;
        }
    }
L_0007ebb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007ebb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007e610;
        }
    }
L_0007ebb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ebbc:;
    {
        cpu->r[10] = 0x00001a03u;
    }
L_0007ebc0:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0007ebc4:;
    {
        cpu->r[8] = 0x00001000u;
    }
L_0007ebc8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007ebcc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007ebd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ebd4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[10]; cpu->r[6] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_0007ebd8:;
    {
        uint32_t v = cpu->r[6] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007ebdc:;
    {
        uint32_t v = cpu->r[7] & cpu->r[9]; cpu->r[5] = v;
    }
L_0007ebe0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 1);
    }
L_0007ebe4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_0007ebe8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0007ebec:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 13u, &shc); cpu->r[1] = v;
    }
L_0007ebf0:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[5], 2, 19u, &shc); cpu->r[1] = v;
    }
L_0007ebf4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0007ebf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007ebfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ebcc;
        }
    }
L_0007ec00:;
    {
        goto L_0007e610;
    }
}

/* dwt_encode @ 0007ec04 (arm) */
void fn_0007ec04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ec04:;
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
L_0007ec08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0007ec0c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0007ec10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007ec14:;
    {
        cpu->r[0] = rd32(0x0007ec1cu + + 0x3acu);
    }
L_0007ec18:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0007ec1c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0007ec24u, cpu->r[0], 0, 0);
    }
L_0007ec20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0007ec24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007ec28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007ec2c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0007ec30:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0007ec34:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0007ec38:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007ec3c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0007ec40:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0007ec44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007ec48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007ec4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007ec50:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0007ec54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007efc0;
        }
    }
L_0007ec58:;
    {
        cpu->r[14] = rd32(0x0007ec60u + + 0x36cu);
    }
L_0007ec5c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007ec60:;
    {
        cpu->r[1] = rd32(0x0007ec68u + + 0x368u);
    }
L_0007ec64:;
    {
        cpu->r[2] = 0x0000007cu;
    }
L_0007ec68:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0007ec6c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0007ec70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ec74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007ec78:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_0007ec7c:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_0007ec80:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0007ec84:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_0007ec88:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0007ec8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007ec90:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000f8u, 1, 0);
    }
L_0007ec94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0007ec98:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0007ec9c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0007eca0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007eca4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007eca8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007ecac:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x14u);
    }
L_0007ecb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_0007ecb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0007ecb8:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_0007ecbc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007ecc0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007ecc4:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0xcu);
    }
L_0007ecc8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 31u, &shc); cpu->r[2] = v;
    }
L_0007eccc:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x8u);
    }
L_0007ecd0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_0007ecd4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007ecd8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_0007ecdc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_0007ece0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007ece4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0007ece8:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_0007ecec:;
    {
        uint32_t v = cpu->r[14] & 0x00000001u; cpu->r[14] = v;
    }
L_0007ecf0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_0007ecf4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007ecf8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0007ecfc:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_0007ed00:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0007ed04:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007ed08:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0007ed0c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0007ed10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007ed14:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_0007ed18:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0007ed1c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[11], cpu->r[4], 1, 0);
    }
L_0007ed20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0007ed24:;
    {
        cpu->r[14] = 0x0007ed2cu;
    }
L_0007ed28:;
    {
        uint32_t t = rd32(cpu->r[1]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007ed2cu)) return;
    }
L_0007ed2c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007ed30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ed34:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007ed38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ee34;
        }
    }
L_0007ed3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007ed40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007ed44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ed48:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0007ed4c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0007ed50:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4]; cpu->r[3] = v;
    }
L_0007ed54:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000001u, cpu->r[14], 1, 0);
    }
L_0007ed58:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0007ed5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_0007ed60:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0007ed64:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0007ed68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ed6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007ed70:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0007ed74:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0007ed78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ed9c;
        }
    }
L_0007ed7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ed80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ed84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0007ed88:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[7];
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_0007ed8c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_0007ed90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007ed94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0007ed98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ed88;
        }
    }
L_0007ed9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007eda0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007eda4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0007eda8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007edac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007edb0:;
    {
        cpu->r[14] = 0x0007edb4u; fn_0007e0a0(cpu);
    }
L_0007edb4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007edb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007edbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ede8;
        }
    }
L_0007edc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007edc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007edc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_0007edcc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007edd0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0007edd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007edd8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0007eddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007ede0:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[7];
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007ede4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007edd0;
        }
    }
L_0007ede8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007edec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ee18;
        }
    }
L_0007edf0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007edf4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007edf8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007edfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_0007ee00:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0007ee04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007ee08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007ee0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007ee10:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[7];
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007ee14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ee00;
        }
    }
L_0007ee18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007ee1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ee20:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0007ee24:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0007ee28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ed74;
        }
    }
L_0007ee2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007ee30:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0007ee34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ee38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007ee3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007ee40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007ee44:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0007ee48:;
    {
        cpu->r[14] = 0x0007ee50u;
    }
L_0007ee4c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007ee50u)) return;
    }
L_0007ee50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ee54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_0007ee58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ee5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0007ee60:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0007ee64:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 0);
    }
L_0007ee68:;
    {
        cpu->r[14] = 0x0007ee70u;
    }
L_0007ee6c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007ee70u)) return;
    }
L_0007ee70:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0007ee74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ee78:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0007ee7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ef74;
        }
    }
L_0007ee80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007ee84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ee88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ee8c:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 0);
    }
L_0007ee90:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0007ee94:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007ee98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0007ee9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007eea0:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_0007eea4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0007eea8:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0007eeac:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0007eeb0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0007eeb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007eeb8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007eebc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0007eec0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007eee4;
        }
    }
L_0007eec4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007eec8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007eecc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007eed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007eed4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0007eed8:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[1]);
    }
L_0007eedc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007eee0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007eecc;
        }
    }
L_0007eee4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0007eee8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007eeec:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0007eef0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007eef4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007eef8:;
    {
        cpu->r[14] = 0x0007eefcu; fn_0007e0a0(cpu);
    }
L_0007eefc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007ef00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ef04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ef28;
        }
    }
L_0007ef08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007ef0c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007ef10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0007ef14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0007ef18:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_0007ef1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007ef20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0007ef24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ef10;
        }
    }
L_0007ef28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007ef2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ef58;
        }
    }
L_0007ef30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007ef34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ef38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0007ef3c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007ef40:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0007ef44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007ef48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007ef4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007ef50:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007ef54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ef40;
        }
    }
L_0007ef58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007ef5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ef60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ef64:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_0007ef68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0007ef6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007eeb4;
        }
    }
L_0007ef70:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0007ef74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007ef78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0007ef7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007ef80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ef84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007ef88:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0007ef8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007ef90:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_0007ef94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000007cu, 1, 0);
    }
L_0007ef98:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0007ef9c:;
    {
        cpu->r[14] = 0x0007efa4u;
    }
L_0007efa0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007efa4u)) return;
    }
L_0007efa4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007efa8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007efac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007efb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007efb4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000007cu, 1, 0);
    }
L_0007efb8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0007efbc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007eca0;
        }
    }
L_0007efc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0007efc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007efc8u)) return;
    }
}

/* dwt_getgain @ 0007efd4 (arm) */
void fn_0007efd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007efd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007efd8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0007efdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007efe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0007efe4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0007efe8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0007efec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* dwt_getnorm @ 0007eff0 (arm) */
void fn_0007eff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007eff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007eff4:;
    {
        cpu->r[3] = rd32(0x0007effcu + + 0x10u);
    }
L_0007eff8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0007effc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007f004u, cpu->r[3], 0, 0);
    }
L_0007f000:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0007f004:;
    {
        uint64_t v = rd64(cpu->r[1] + cpu->r[3]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_0007f008:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* dwt_encode_real @ 0007f010 (arm) */
void fn_0007f010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f010:;
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
L_0007f014:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0007f018:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0007f01c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007f020:;
    {
        cpu->r[0] = rd32(0x0007f028u + + 0x3acu);
    }
L_0007f024:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0007f028:;
    {
        cpu->r[0] = add_flags(cpu, 0x0007f030u, cpu->r[0], 0, 0);
    }
L_0007f02c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0007f030:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007f034:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007f038:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0007f03c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0007f040:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0007f044:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007f048:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0007f04c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0007f050:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007f054:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007f058:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007f05c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0007f060:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f3cc;
        }
    }
L_0007f064:;
    {
        cpu->r[14] = rd32(0x0007f06cu + + 0x36cu);
    }
L_0007f068:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007f06c:;
    {
        cpu->r[1] = rd32(0x0007f074u + + 0x368u);
    }
L_0007f070:;
    {
        cpu->r[2] = 0x0000007cu;
    }
L_0007f074:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0007f078:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0007f07c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007f080:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007f084:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_0007f088:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_0007f08c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0007f090:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_0007f094:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0007f098:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007f09c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000f8u, 1, 0);
    }
L_0007f0a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0007f0a4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0007f0a8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0007f0ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007f0b0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007f0b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007f0b8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x14u);
    }
L_0007f0bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_0007f0c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0007f0c4:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_0007f0c8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0007f0cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007f0d0:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0xcu);
    }
L_0007f0d4:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 31u, &shc); cpu->r[2] = v;
    }
L_0007f0d8:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x8u);
    }
L_0007f0dc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_0007f0e0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f0e4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_0007f0e8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_0007f0ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007f0f0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0007f0f4:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_0007f0f8:;
    {
        uint32_t v = cpu->r[14] & 0x00000001u; cpu->r[14] = v;
    }
L_0007f0fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_0007f100:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007f104:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0007f108:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_0007f10c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0007f110:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007f114:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0007f118:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0007f11c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007f120:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_0007f124:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0007f128:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[11], cpu->r[4], 1, 0);
    }
L_0007f12c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0007f130:;
    {
        cpu->r[14] = 0x0007f138u;
    }
L_0007f134:;
    {
        uint32_t t = rd32(cpu->r[1]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f138u)) return;
    }
L_0007f138:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007f13c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f140:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007f144:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f240;
        }
    }
L_0007f148:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007f14c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007f150:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007f154:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0007f158:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0007f15c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4]; cpu->r[3] = v;
    }
L_0007f160:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000001u, cpu->r[14], 1, 0);
    }
L_0007f164:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0007f168:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_0007f16c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0007f170:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0007f174:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007f178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007f17c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0007f180:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0007f184:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f1a8;
        }
    }
L_0007f188:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007f18c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f190:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0007f194:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[7];
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_0007f198:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_0007f19c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007f1a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0007f1a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f194;
        }
    }
L_0007f1a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007f1ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007f1b0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0007f1b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007f1b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007f1bc:;
    {
        cpu->r[14] = 0x0007f1c0u; fn_0007e50c(cpu);
    }
L_0007f1c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007f1c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f1c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f1f4;
        }
    }
L_0007f1cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007f1d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f1d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_0007f1d8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007f1dc:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0007f1e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007f1e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0007f1e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007f1ec:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[7];
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007f1f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f1dc;
        }
    }
L_0007f1f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007f1f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f224;
        }
    }
L_0007f1fc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007f200:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f204:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007f208:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_0007f20c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0007f210:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007f214:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007f218:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007f21c:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[7];
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007f220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f20c;
        }
    }
L_0007f224:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007f228:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007f22c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0007f230:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0007f234:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f180;
        }
    }
L_0007f238:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007f23c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0007f240:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007f244:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007f248:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007f24c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007f250:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0007f254:;
    {
        cpu->r[14] = 0x0007f25cu;
    }
L_0007f258:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f25cu)) return;
    }
L_0007f25c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007f260:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_0007f264:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f268:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0007f26c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0007f270:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 0);
    }
L_0007f274:;
    {
        cpu->r[14] = 0x0007f27cu;
    }
L_0007f278:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f27cu)) return;
    }
L_0007f27c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0007f280:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f284:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0007f288:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f380;
        }
    }
L_0007f28c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007f290:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f294:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007f298:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 0);
    }
L_0007f29c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0007f2a0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007f2a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0007f2a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007f2ac:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_0007f2b0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0007f2b4:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0007f2b8:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0007f2bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0007f2c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007f2c4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0007f2c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0007f2cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f2f0;
        }
    }
L_0007f2d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f2d4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007f2d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007f2dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007f2e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0007f2e4:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[1]);
    }
L_0007f2e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007f2ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f2d8;
        }
    }
L_0007f2f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0007f2f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007f2f8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0007f2fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007f300:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007f304:;
    {
        cpu->r[14] = 0x0007f308u; fn_0007e50c(cpu);
    }
L_0007f308:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007f30c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f310:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f334;
        }
    }
L_0007f314:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007f318:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007f31c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0007f320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0007f324:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_0007f328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007f32c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0007f330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f31c;
        }
    }
L_0007f334:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007f338:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f364;
        }
    }
L_0007f33c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007f340:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f344:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0007f348:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0007f34c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0007f350:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007f354:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007f358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007f35c:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0007f360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f34c;
        }
    }
L_0007f364:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007f368:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007f36c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007f370:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_0007f374:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0007f378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f2c0;
        }
    }
L_0007f37c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0007f380:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007f384:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0007f388:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007f38c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007f390:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007f394:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0007f398:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007f39c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_0007f3a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000007cu, 1, 0);
    }
L_0007f3a4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0007f3a8:;
    {
        cpu->r[14] = 0x0007f3b0u;
    }
L_0007f3ac:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f3b0u)) return;
    }
L_0007f3b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007f3b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007f3b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007f3bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007f3c0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000007cu, 1, 0);
    }
L_0007f3c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0007f3c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007f0ac;
        }
    }
L_0007f3cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0007f3d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f3d4u)) return;
    }
}

/* dwt_getgain_real @ 0007f3e0 (arm) */
void fn_0007f3e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f3e0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007f3e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* dwt_getnorm_real @ 0007f3e8 (arm) */
void fn_0007f3e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f3e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007f3ec:;
    {
        cpu->r[3] = rd32(0x0007f3f4u + + 0x14u);
    }
L_0007f3f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0007f3f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007f3fcu, cpu->r[3], 0, 0);
    }
L_0007f3f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0007f3fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000140u, 0, 0);
    }
L_0007f400:;
    {
        uint64_t v = rd64(cpu->r[3]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_0007f404:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_0007f40c @ 0007f40c (arm) */
void fn_0007f40c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f40c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007f410:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0007f414:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0007f418:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007f41c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0007f420:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0007f424:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_0007f428:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_0007f42c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0007f430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007f434:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007f438:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_0007f43c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0007f440:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_0007f444:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0007f448:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0007f44c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0007f450:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0007f454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_0007f458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f41c;
        }
    }
L_0007f45c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_0007f460 @ 0007f460 (arm) */
void fn_0007f460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007f464:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0007f468:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0007f46c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0007f470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f4fc;
        }
    }
L_0007f474:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007f478:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_0007f47c:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[0]);
    }
L_0007f480:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0007f484:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0007f488:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0007f48c:;
    {
        vfp_vadd(cpu, 8, 8, 14);
    }
L_0007f490:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_0007f494:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_0007f498:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[12]);
    }
L_0007f49c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12] + - 0xcu);
    }
L_0007f4a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + - 0x8u);
    }
L_0007f4a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + - 0x4u);
    }
L_0007f4a8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12] + - 0x10u);
    }
L_0007f4ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007f4b0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0007f4b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0007f4b8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007f4bc:;
    {
        vfp_vadd(cpu, 7, 4, 7);
    }
L_0007f4c0:;
    {
        vfp_vadd(cpu, 9, 5, 9);
    }
L_0007f4c4:;
    {
        vfp_vadd(cpu, 10, 6, 10);
    }
L_0007f4c8:;
    {
        vfp_vmla(cpu, 11, 7, 15);
    }
L_0007f4cc:;
    {
        vfp_vmla(cpu, 12, 8, 15);
    }
L_0007f4d0:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0007f4d4:;
    {
        vfp_vmla(cpu, 13, 9, 15);
    }
L_0007f4d8:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0007f4dc:;
    {
        vfp_vmla(cpu, 14, 10, 15);
    }
L_0007f4e0:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0007f4e4:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0007f4e8:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_0007f4ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f478;
        }
    }
L_0007f4f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0xf8000001u, 1, 0);
    }
L_0007f4f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 5u, &shc), 0, 0);
    }
L_0007f4f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 5u, &shc), 0, 0);
    }
L_0007f4fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007f500:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007f568;
        }
    }
L_0007f504:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_0007f508:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0007f50c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_0007f510:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0007f514:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0007f518:;
    {
        vfp_vmul(cpu, 8, 15, 11);
    }
L_0007f51c:;
    {
        vfp_vmul(cpu, 9, 15, 12);
    }
L_0007f520:;
    {
        vfp_vmul(cpu, 10, 15, 13);
    }
L_0007f524:;
    {
        vfp_vmul(cpu, 11, 15, 14);
    }
L_0007f528:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12] + - 0xcu);
    }
L_0007f52c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + - 0x8u);
    }
L_0007f530:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + - 0x4u);
    }
L_0007f534:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + - 0x10u);
    }
L_0007f538:;
    {
        vfp_vadd(cpu, 12, 12, 10);
    }
L_0007f53c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007f540:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007f544:;
    {
        vfp_vadd(cpu, 13, 13, 9);
    }
L_0007f548:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0007f54c:;
    {
        vfp_vadd(cpu, 14, 14, 11);
    }
L_0007f550:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0007f554:;
    {
        vfp_vadd(cpu, 15, 15, 8);
    }
L_0007f558:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0007f55c:;
    {
        *(uint32_t*)G(cpu->r[12] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f560:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0007f564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f528;
        }
    }
L_0007f568:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0007f56c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_0007f570 @ 0007f570 (arm) */
void fn_0007f570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f570:;
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
L_0007f574:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007f578:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0007f57c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0007f580:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007f584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f5b0;
        }
    }
L_0007f588:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007f58c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007f590:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f6cc;
        }
    }
L_0007f594:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_0007f598:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f59c:;
    {
        cpu->r[8] = 0x00000020u;
    }
L_0007f5a0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0007f5a4:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0007f5a8:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007f5ac:;
    {
        goto L_0007f5d4;
    }
L_0007f5b0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f5b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007f5b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f6bc;
        }
    }
L_0007f5bc:;
    {
        cpu->r[8] = 0x00000010u;
    }
L_0007f5c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0007f5c4:;
    {
        cpu->r[7] = 0x00000020u;
    }
L_0007f5c8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_0007f5cc:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_0007f5d0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0007f5d4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f5d8:;
    {
        cpu->r[2] = 0x00007658u;
    }
L_0007f5dc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3f9du << 16);
    }
L_0007f5e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0007f5e4:;
    {
        cpu->r[14] = 0x0007f5e8u; fn_0007f40c(cpu);
    }
L_0007f5e8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f5ec:;
    {
        cpu->r[2] = 0x00001800u;
    }
L_0007f5f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007f5f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0007f5f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3fd0u << 16);
    }
L_0007f5fc:;
    {
        cpu->r[14] = 0x0007f600u; fn_0007f40c(cpu);
    }
L_0007f600:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007f604:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007f608:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0007f610u + + 0xe0u);
    }
L_0007f60c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f610:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0007f614:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007f618:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007f61c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f620:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0007f624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0007f628:;
    {
        cpu->r[14] = 0x0007f62cu; fn_0007f460(cpu);
    }
L_0007f62c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0007f630:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0007f638u + + 0xbcu);
    }
L_0007f634:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f638:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_0007f63c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007f640:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007f644:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f648:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0007f64c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0007f650:;
    {
        cpu->r[14] = 0x0007f654u; fn_0007f460(cpu);
    }
L_0007f654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007f658:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007f65c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0007f664u + + 0x94u);
    }
L_0007f660:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f664:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0007f668:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0007f66c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_0007f670:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007f674:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0007f67c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0007f680:;
    {
        cpu->r[14] = 0x0007f684u; fn_0007f460(cpu);
    }
L_0007f684:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0007f688:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0007f68c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0007f694u + + 0x68u);
    }
L_0007f690:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007f694:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_0007f698:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0007f69c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0007f6a0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0007f6a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_0007f6a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0007f6ac:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f6b0:;
    {
        cpu->r[14] = 0x0007f6b4u; fn_0007f460(cpu);
    }
L_0007f6b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0007f6b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007f6bcu)) return;
    }
L_0007f6bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007f6c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007f6c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007f5bc;
        }
    }
L_0007f6c8:;
    {
        goto L_0007f6b4;
    }
L_0007f6cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f6d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0007f6d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f6b4;
        }
    }
L_0007f6d8:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_0007f6dc:;
    {
        cpu->r[8] = 0x00000020u;
    }
L_0007f6e0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0007f6e4:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0007f6e8:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0007f6ec:;
    {
        goto L_0007f5d4;
    }
}

/* dwt_decode_real @ 0007f700 (arm) */
void fn_0007f700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007f700:;
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
L_0007f704:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_0007f708:;
    {
        cpu->r[3] = rd32(0x0007f710u + + 0x6e0u);
    }
L_0007f70c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[0]);
    }
L_0007f710:;
    {
        cpu->r[0] = rd32(0x0007f718u + + 0x6dcu);
    }
L_0007f714:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[1]);
    }
L_0007f718:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007f71c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0007f724u, cpu->r[0], 0, 0);
    }
L_0007f720:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[0]);
    }
L_0007f724:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_0007f728:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_0007f72c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007f730:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0007f734:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007f738:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_0007f73c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007f740:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f744:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_0007f748:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007f74c:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007f750:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_0007f754:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_0007f758:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0007f75c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 0);
    }
L_0007f760:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0007f764:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_0007f768:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
    }
L_0007f76c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[14]);
    }
L_0007f770:;
    {
        cpu->r[6] = rd32(cpu->r[12]);
    }
L_0007f774:;
    {
        goto L_0007f7a4;
    }
L_0007f778:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x84u);
    }
L_0007f77c:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x7cu);
    }
L_0007f780:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x88u);
    }
L_0007f784:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x80u);
    }
L_0007f788:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 0);
    }
L_0007f78c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000007cu, 0, 0);
    }
L_0007f790:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0007f794:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 1);
    }
L_0007f798:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[14];
        }
    }
L_0007f79c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0007f7a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0007f7a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007f7a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f778;
        }
    }
L_0007f7ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_0007f7b0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0007f7b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_0007f7b8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[12] = v;
    }
L_0007f7bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_0007f7c0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0007f7c4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_0007f7c8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0007f7cc:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0007f7d0:;
    {
        cpu->r[14] = 0x0007f7d4u; guest_call(cpu, cpu->r[6]);
    }
L_0007f7d4:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_0007f7d8:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0007f7dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x74u);
    }
L_0007f7e0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_0007f7e4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0007f7e8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0007f7ec:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_0007f7f0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0007f7f4:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[10]);
    }
L_0007f7f8:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0007f7fc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0007f800:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_0007f804:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0007f808:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[0]);
    }
L_0007f80c:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[0]);
    }
L_0007f810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007fc18;
        }
    }
L_0007f814:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x64u);
    }
L_0007f818:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007f81c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007f820:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007f824:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_0007f828:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[6]);
    }
L_0007f82c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x7cu);
    }
L_0007f830:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x88u);
    }
L_0007f834:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x80u);
    }
L_0007f838:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x84u);
    }
L_0007f83c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[3] = v;
    }
L_0007f840:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0007f844:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_0007f848:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0007f84c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0007f850:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007f854:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[2] = v;
    }
L_0007f858:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_0007f85c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0007f860:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[12]);
    }
L_0007f864:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007f868:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_0007f86c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0007f870:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x18u);
    }
L_0007f874:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007f878:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007f87c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0007f880:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007f884:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0007f888:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0007f88c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007f890:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_0007f894:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fbbc;
        }
    }
L_0007f898:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0007f89c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0007f8a0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007f8a4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0007f8a8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0007f8ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], cpu->r[5], 0, 0);
    }
L_0007f8b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_0007f8b4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0007f8b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007f8bc:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_0007f8c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007f8c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0007f8c8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0007f8cc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0007f8d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0007f8d4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0007f8d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0007f8dc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_0007f8e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0007f8e4:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0007f8e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007f8ec:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 0);
    }
L_0007f8f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_0007f8f4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0007f8f8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007f8fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0007f900:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[14] = v;
    }
L_0007f904:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x54u);
    }
L_0007f908:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0007f90c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0007f910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_0007f914:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_0007f918:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_0007f91c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007f920:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0007f924:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007f928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0007f92c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0007f930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0007f934:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0007f938:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_0007f93c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0007f940:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007f944:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0007f948:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0007f94c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007f9f4;
        }
    }
L_0007f950:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007f954:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007f958:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007f95c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007f960:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0007f964:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0007f968:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0007f96c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0007f970:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0007f974:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0007f978:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_0007f97c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_0007f980:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0007f984:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f988:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007f9dc;
        }
    }
L_0007f98c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007f990:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0007f994:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007f998:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_0007f99c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_0007f9a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_0007f9a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0007f9a8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f9ac:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f9b0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0007f9b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0007f9b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007f9dc;
        }
    }
L_0007f9bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_0007f9c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0007f9c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_0007f9c8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007f9cc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_0007f9d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
        }
    }
L_0007f9d4:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
        }
    }
L_0007f9d8:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0007f9dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007f9e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007f9e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_0007f9e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_0007f9ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f970;
        }
    }
L_0007f9f0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007f9f4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007f9f8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007f9fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0007fa00:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0007fa04:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_0007fa08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0007fa0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007fa24;
        }
    }
L_0007fa10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007fa14:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_0007fa18:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0007fa1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0007fa20:;
    {
        goto L_0007f940;
    }
L_0007fa24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_0007fa28:;
    {
        cpu->r[14] = 0x0007fa2cu; fn_0007f570(cpu);
    }
L_0007fa2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007fa30:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 1);
    }
L_0007fa34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007fae4;
        }
    }
L_0007fa38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007fa3c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0007fa40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007fa94;
        }
    }
L_0007fa44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007fa48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007fa4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007fa50:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_0007fa54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_0007fa58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0007fa5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0007fa60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0007fa64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007fb78;
        }
    }
L_0007fa68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007fa6c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000003u, 1, 1);
    }
L_0007fa70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_0007fa74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007fc38;
        }
    }
L_0007fa78:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0007fa7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_0007fa80:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0007fa84:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
    }
L_0007fa88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007fa8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_0007fa90:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007fa78;
        }
    }
L_0007fa94:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007fa98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0007fa9c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0007faa0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007faa4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007faa8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[10]);
    }
L_0007faac:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0007fab0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0007fab4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[14]);
    }
L_0007fab8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fbb0;
        }
    }
L_0007fabc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_0007fac0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x94u);
    }
L_0007fac4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007fac8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_0007facc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0007fad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007fad4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[9]);
    }
L_0007fad8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0007fadc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0007fae0:;
    {
        goto L_0007f8e8;
    }
L_0007fae4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007fae8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007faec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007fa94;
        }
    }
L_0007faf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007faf4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007faf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_0007fafc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007fb00:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007fb04:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0007fb08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_0007fb0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007fb10:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0007fb14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0007fb18:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007fb1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0007fb20:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007fb24:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0007fb28:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_0007fb2c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0007fb30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007fb34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0007fb38:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_0007fb3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0007fb40:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fb44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0007fb48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0007fb4c:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fb50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0007fb54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0007fb58:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fb5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0007fb60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0007fb64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0007fb68:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fb6c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_0007fb70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007fb30;
        }
    }
L_0007fb74:;
    {
        goto L_0007fa94;
    }
L_0007fb78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007fb7c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007fb80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0007fb84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_0007fb88:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fb8c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0007fb90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0007fb94:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0007fb98:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[9]);
    }
L_0007fb9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007fba0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_0007fba4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0007fba8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007fb80;
        }
    }
L_0007fbac:;
    {
        goto L_0007fa94;
    }
L_0007fbb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_0007fbb4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007fbb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0007fbbc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_0007fbc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_0007fbc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007fbc8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007fbcc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0007fbd0:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0007fbd4:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x80u);
    }
L_0007fbd8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007fbdc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
    }
L_0007fbe0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007fbe4:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_0007fbe8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0007fbec:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[2]);
    }
L_0007fbf0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007fc7c;
        }
    }
L_0007fbf4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x74u);
    }
L_0007fbf8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007fbfc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x64u);
    }
L_0007fc00:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0007fc04:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[10]);
    }
L_0007fc08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000007cu, 0, 0);
    }
L_0007fc0c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_0007fc10:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[6]);
    }
L_0007fc14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007f814;
        }
    }
L_0007fc18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_0007fc1c:;
    {
        cpu->r[3] = rd32(0x0007fc24u + + 0x1d4u);
    }
L_0007fc20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_0007fc24:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0007fc28:;
    {
        cpu->r[14] = 0x0007fc30u;
    }
L_0007fc2c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007fc30u)) return;
    }
L_0007fc30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_0007fc34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007fc38u)) return;
    }
L_0007fc38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007fc3c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_0007fc40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0007fc44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0007fc48:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fc4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_0007fc50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0007fc54:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0007fc58:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0007fc5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0007fc60:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0007fc64:;
    {
        wr32(cpu->r[14] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[9]);
    }
L_0007fc68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007fc6c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_0007fc70:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0007fc74:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007fc40;
        }
    }
L_0007fc78:;
    {
        goto L_0007fa94;
    }
L_0007fc7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007fc80:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0007fc84:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_0007fc88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007fc8c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0007fc90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007fc94:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[9] = v;
    }
L_0007fc98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0007fc9c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_0007fca0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0007fca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007fca8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0007fcac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0007fcb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fcec;
        }
    }
L_0007fcb4:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0007fcb8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007fcbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007fcc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007fcc4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0007fcc8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007fccc:;
    {
        cpu->r[14] = 0x0007fcd0u; imp_memcpy(cpu); /* memcpy */
    }
L_0007fcd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_0007fcd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000020u, 0, 0);
    }
L_0007fcd8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0007fcdc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0007fce0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007fcbc;
        }
    }
L_0007fce4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0007fce8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0007fcec:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[3] = v;
    }
L_0007fcf0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_0007fcf4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 0);
    }
L_0007fcf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007fcfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0007fd00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007fd04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fd3c;
        }
    }
L_0007fd08:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0007fd0c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0007fd10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007fd14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0007fd18:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007fd1c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0007fd20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007fd24:;
    {
        cpu->r[14] = 0x0007fd28u; imp_memcpy(cpu); /* memcpy */
    }
L_0007fd28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_0007fd2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000020u, 0, 0);
    }
L_0007fd30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0007fd34:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0007fd38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007fd14;
        }
    }
L_0007fd3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007fd40:;
    {
        cpu->r[14] = 0x0007fd44u; fn_0007f570(cpu);
    }
L_0007fd44:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000003u, 1, 1);
    }
L_0007fd48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007fda4;
        }
    }
L_0007fd4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007fd50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007fd54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = cpu->r[10];
        }
    }
L_0007fd58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0007fd5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
        }
    }
L_0007fd60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fd88;
        }
    }
L_0007fd64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_0007fd68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007fd6c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0007fd70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0007fd74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_0007fd78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007fd7c:;
    {
        cpu->r[14] = 0x0007fd80u; imp_memcpy(cpu); /* memcpy */
    }
L_0007fd80:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0007fd84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007fd64;
        }
    }
L_0007fd88:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_0007fd8c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000010u, 1, 0);
    }
L_0007fd90:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0007fd94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007fde4;
        }
    }
L_0007fd98:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_0007fd9c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007fda0:;
    {
        goto L_0007fbf4;
    }
L_0007fda4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0007fda8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007fdac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007fd88;
        }
    }
L_0007fdb0:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0007fdb4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007fdb8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0007fdbc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_0007fdc0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0007fdc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007fdc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0007fdcc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_0007fdd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007fdd4:;
    {
        cpu->r[14] = 0x0007fdd8u; imp_memcpy(cpu); /* memcpy */
    }
L_0007fdd8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0007fddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007fdbc;
        }
    }
L_0007fde0:;
    {
        goto L_0007fd88;
    }
L_0007fde4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_0007fde8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_0007fdec:;
    {
        goto L_0007fca0;
    }
}

/* dwt_calc_explicit_stepsizes @ 0007fe00 (arm) */
void fn_0007fe00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007fe00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0007fe04:;
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
L_0007fe08:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0007fe0c:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_0007fe10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0007fe14:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0007fe18:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_0007fe1c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0007fe20:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 0);
    }
L_0007fe24:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007fe28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ffc8;
        }
    }
L_0007fe2c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007fe30:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007fe34:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0007fe38:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0007fe3c:;
    {
        cpu->r[3] = rd32(0x0007fe44u + + 0x19cu);
    }
L_0007fe40:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007fe44:;
    {
        cpu->r[11] = 0x00005556u;
    }
L_0007fe48:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0007fe4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007fe54u, cpu->r[3], 0, 0);
    }
L_0007fe50:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x5555u << 16);
    }
L_0007fe54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0007fe58:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0007fe5c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x18u);
    }
L_0007fe60:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0007fe68u + + 0x170u);
    }
L_0007fe64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ff90;
        }
    }
L_0007fe68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007fe6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ff90;
        }
    }
L_0007fe70:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007fe74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0007fe78:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_0007fe7c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[5] = 0x00000002u;
        }
    }
L_0007fe80:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007fe84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00002000u;
        }
    }
L_0007fe88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
        }
    }
L_0007fe8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_0007fe90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007fef8;
        }
    }
L_0007fe94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007fe98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007fe9c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007fea0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0007fea4:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0007fea8:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_0007feac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
    }
L_0007feb0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0007feb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0007feb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007febc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0007fec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000140u, 0, 0);
    }
L_0007fec4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[3]);
    }
L_0007fec8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_0007fecc:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0007fed0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_0007fed4:;
    {
        cpu->r[14] = 0x0007fed8u; imp_floor(cpu); /* floor */
    }
L_0007fed8:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0007fedc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_0007fee0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0007fee4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007fee8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0007feec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x0000000bu;
        }
    }
L_0007fef0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x0000000cu);
        }
    }
L_0007fef4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ff34;
        }
    }
L_0007fef8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007fefc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0007ff00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0007ff04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007ff08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007fefc;
        }
    }
L_0007ff0c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000du, 1, 0);
    }
L_0007ff10:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0007ff14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ff18:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0007ff1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007ff20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007ff24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007ff18;
        }
    }
L_0007ff28:;
    {
        cpu->r[2] = sub_flags(cpu, 0x0000000bu, cpu->r[3], 1, 1);
    }
L_0007ff2c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_0007ff30:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007ff98;
        }
    }
L_0007ff34:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007ff38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_0007ff3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007ff40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0007ff44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0007ff48:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 21u, &shc); cpu->r[3] = v;
    }
L_0007ff4c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_0007ff50:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 21u, &shc); cpu->r[3] = v;
    }
L_0007ff54:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_0007ff58:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_0007ff5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ffc8;
        }
    }
L_0007ff60:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007ff64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
        }
    }
L_0007ff68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_0007ff6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[4];
        }
    }
L_0007ff70:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0007ff74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
        }
    }
L_0007ff78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0007ff7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_0007ff80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_0007ff84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0007ff88:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007ff8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007fe68;
        }
    }
L_0007ff90:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007ff94:;
    {
        goto L_0007fe80;
    }
L_0007ff98:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0007ff9c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0007ffa0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007ffa4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[3] = v;
    }
L_0007ffa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_0007ffac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007ffb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0007ffb4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_0007ffb8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 21u, &shc); cpu->r[3] = v;
    }
L_0007ffbc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_0007ffc0:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_0007ffc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007ff60;
        }
    }
L_0007ffc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0007ffcc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0007ffd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007ffd4u)) return;
    }
}

/* dwt_decode @ 0007ffe8 (arm) */
void fn_0007ffe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ffe8:;
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
L_0007ffec:;
    {
        cpu->r[2] = rd32(0x0007fff4u + + 0x2ecu);
    }
L_0007fff0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0007fff4:;
    {
        cpu->r[3] = rd32(0x0007fffcu + + 0x2e8u);
    }
L_0007fff8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00080000u, cpu->r[2], 0, 0);
    }
L_0007fffc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_00080000:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00080004:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00080008:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008000c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_00080010:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00080014:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00080018:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0008001c:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00080020:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00080024:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x8u);
    }
L_00080028:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0008002c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0xcu);
    }
L_00080030:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00080034:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00080038:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0008003c:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_00080040:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00080044:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
    }
L_00080048:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0008004c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00080050:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00080054:;
    {
        goto L_00080084;
    }
L_00080058:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x84u);
    }
L_0008005c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x7cu);
    }
L_00080060:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x88u);
    }
L_00080064:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x80u);
    }
L_00080068:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_0008006c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_00080070:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
    }
L_00080074:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_00080078:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = cpu->r[5];
        }
    }
L_0008007c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 1);
    }
L_00080080:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[14];
        }
    }
L_00080084:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00080088:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080058;
        }
    }
L_0008008c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00080090:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00080094:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00080098:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0008009c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000800a0:;
    {
        cpu->r[14] = 0x000800a4u; guest_call(cpu, cpu->r[2]);
    }
L_000800a4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_000800a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000800ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000800b0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000800b4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000800b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000800bc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000800c0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000800c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080200;
        }
    }
L_000800c8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_000800cc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000800d0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_000800d4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x7cu);
    }
L_000800d8:;
    {
        cpu->r[6] = rd32(cpu->r[10] + + 0x88u);
    }
L_000800dc:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x80u);
    }
L_000800e0:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x84u);
    }
L_000800e4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[1] = v;
    }
L_000800e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_000800ec:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x18u);
    }
L_000800f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000800f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000800f8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_000800fc:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_00080100:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_00080104:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_00080108:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0008010c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_00080110:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00080114:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000801bc;
        }
    }
L_00080118:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008011c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00080120:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00080124:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080128:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0008012c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_00080130:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_00080134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008015c;
        }
    }
L_00080138:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0008013c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00080140:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00080144:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
    }
L_00080148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008014c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00080150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080140;
        }
    }
L_00080154:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00080158:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008015c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00080160:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00080164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008018c;
        }
    }
L_00080168:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[2], 1, 0);
    }
L_0008016c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00080170:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00080174:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00080178:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0008017c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 3u, &shc), cpu->r[2]);
    }
L_00080180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00080184:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00080188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080178;
        }
    }
L_0008018c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00080190:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00080194:;
    {
        cpu->r[14] = 0x00080198u; fn_0007e2cc(cpu);
    }
L_00080198:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008019c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000801a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000801a4:;
    {
        cpu->r[14] = 0x000801a8u; imp_memcpy(cpu); /* memcpy */
    }
L_000801a8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_000801ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_000801b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000801b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
        }
    }
L_000801b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080124;
        }
    }
L_000801bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000801c0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000801c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_000801c8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000801cc:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x80u);
    }
L_000801d0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_000801d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000801d8:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[12] = v;
    }
L_000801dc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000801e0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000801e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00080220;
        }
    }
L_000801e8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_000801ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000007cu, 0, 0);
    }
L_000801f0:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000801f4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000801f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000801fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000800c8;
        }
    }
L_00080200:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00080204:;
    {
        cpu->r[3] = rd32(0x0008020cu + + 0xdcu);
    }
L_00080208:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008020c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00080210:;
    {
        cpu->r[14] = 0x00080218u;
    }
L_00080214:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080218u)) return;
    }
L_00080218:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0008021c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080220u)) return;
    }
L_00080220:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_00080224:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00080228:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008022c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00080230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080258;
        }
    }
L_00080234:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00080238:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008023c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00080240:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[8];
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_00080244:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 3u, &shc), cpu->r[0]);
    }
L_00080248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008024c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00080250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080240;
        }
    }
L_00080254:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00080258:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008025c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00080260:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00080264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080294;
        }
    }
L_00080268:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008026c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 0);
    }
L_00080270:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00080274:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00080278:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008027c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00080280:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[8];
        cpu->r[0] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00080284:;
    {
        wr32(cpu->r[14] + shifter(cpu->r[3], 2, 3u, &shc), cpu->r[0]);
    }
L_00080288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008028c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00080290:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080280;
        }
    }
L_00080294:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00080298:;
    {
        cpu->r[14] = 0x0008029cu; fn_0007e2cc(cpu);
    }
L_0008029c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000802a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000802c4;
        }
    }
L_000802a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000802a8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000802ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000802b0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000802b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000802b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000802bc:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[8];
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_000802c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000802b0;
        }
    }
L_000802c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000802c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000802cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_000802d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000801e8;
        }
    }
L_000802d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000802d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000802dc:;
    {
        goto L_00080228;
    }
}

/* opj_set_event_mgr @ 000802ec (arm) */
void fn_000802ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000802ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000802f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
        }
    }
L_000802f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000802f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3]);
        }
    }
L_000802fc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3], cpu->r[1]);
        }
    }
L_00080300:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* opj_event_msg @ 00080304 (arm) */
void fn_00080304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080304:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[2]);
        wr32(cpu->r[13] + 4u, cpu->r[3]);
    }
L_00080308:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0008030c:;
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
L_00080310:;
    {
        cpu->r[4] = rd32(0x00080318u + + 0xccu);
    }
L_00080314:;
    {
        cpu->r[5] = rd32(0x0008031cu + + 0xccu);
    }
L_00080318:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000020cu, 1, 0);
    }
L_0008031c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00080324u, cpu->r[4], 0, 0);
    }
L_00080320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080324:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00080328:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x228u);
    }
L_0008032c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00080330:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00080334:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[2]);
    }
L_00080338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080358;
        }
    }
L_0008033c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00080340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000803d8;
        }
    }
L_00080344:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_00080348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080360;
        }
    }
L_0008034c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00080350:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[3]);
        }
    }
L_00080354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080364;
        }
    }
L_00080358:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008035c:;
    {
        goto L_00080378;
    }
L_00080360:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x8u);
    }
L_00080364:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00080368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080358;
        }
    }
L_0008036c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00080370:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008039c;
        }
    }
L_00080374:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00080378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0008037c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x204u);
    }
L_00080380:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00080384:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00080388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000803e0;
        }
    }
L_0008038c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_00080390:;
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
L_00080394:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00080398:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0008039c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000803a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000803a4:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000803a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000803ac:;
    {
        cpu->r[14] = 0x000803b0u; imp_memset(cpu); /* memset */
    }
L_000803b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_000803b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000803b8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000803bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000803c0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000803c4:;
    {
        cpu->r[14] = 0x000803c8u; imp_vsprintf(cpu); /* vsprintf */
    }
L_000803c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000803cc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_000803d0:;
    {
        cpu->r[14] = 0x000803d4u; guest_call(cpu, cpu->r[8]);
    }
L_000803d4:;
    {
        goto L_00080374;
    }
L_000803d8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_000803dc:;
    {
        goto L_00080364;
    }
L_000803e0:;
    {
        cpu->r[14] = 0x000803e4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000803e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[12] + (-cpu->r[4]);
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[12]);
        cpu->r[12] = wb_tmp;
        }
    }
L_000803e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* opj_image_create0 @ 000803ec (arm) */
void fn_000803ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000803ec:;
    {
        cpu->r[3] = rd32(0x000803f4u + + 0x1cu);
    }
L_000803f0:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_000803f4:;
    {
        cpu->r[2] = rd32(0x000803fcu + + 0x18u);
    }
L_000803f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00080400u, cpu->r[3], 0, 0);
    }
L_000803fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00080400:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00080404:;
    {
        cpu->r[14] = 0x0008040cu;
    }
L_00080408:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008040cu)) return;
    }
L_0008040c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00080410u)) return;
    }
}

/* opj_image_destroy @ 00080418 (arm) */
void fn_00080418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080418:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0008041c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080420:;
    {
        cpu->r[7] = rd32(0x00080428u + + 0xa0u);
    }
L_00080424:;
    {
        cpu->r[7] = add_flags(cpu, 0x0008042cu, cpu->r[7], 0, 0);
    }
L_00080428:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008042cu)) return;
        }
    }
L_0008042c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_00080430:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00080434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000804a8;
        }
    }
L_00080438:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008043c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00080440:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000804c0;
        }
    }
L_00080444:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00080448:;
    {
        cpu->r[8] = rd32(0x00080450u + + 0x7cu);
    }
L_0008044c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00080450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00080454:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00080458:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0008045c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00080460:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008047c;
        }
    }
L_00080468:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0008046c:;
    {
        cpu->r[14] = 0x00080474u;
    }
L_00080470:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080474u)) return;
    }
L_00080474:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00080478:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008047c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00080480:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00080450;
        }
    }
L_00080484:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00080488:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0008048c:;
    {
        cpu->r[14] = 0x00080494u;
    }
L_00080490:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080494u)) return;
    }
L_00080494:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00080498:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008049c:;
    {
        cpu->r[14] = 0x000804a4u;
    }
L_000804a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000804a4u)) return;
    }
L_000804a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000804a8u)) return;
    }
L_000804a8:;
    {
        cpu->r[8] = rd32(0x000804b0u + + 0x1cu);
    }
L_000804ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000804b0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000804b4:;
    {
        cpu->r[14] = 0x000804bcu;
    }
L_000804b8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000804bcu)) return;
    }
L_000804bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000804c0u)) return;
    }
L_000804c0:;
    {
        cpu->r[8] = rd32(0x000804c8u + + 0x4u);
    }
L_000804c4:;
    {
        goto L_00080484;
    }
}

/* opj_image_create @ 000804d0 (arm) */
void fn_000804d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000804d0:;
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
L_000804d4:;
    {
        cpu->r[7] = rd32(0x000804dcu + + 0x148u);
    }
L_000804d8:;
    {
        cpu->r[3] = rd32(0x000804e0u + + 0x148u);
    }
L_000804dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000804e0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000804e8u, cpu->r[7], 0, 0);
    }
L_000804e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000804e8:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_000804ec:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000804f0:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000804f4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000804f8:;
    {
        cpu->r[14] = 0x00080500u;
    }
L_000804fc:;
    {
        uint32_t t = rd32(cpu->r[10]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080500u)) return;
    }
L_00080500:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000805fc;
        }
    }
L_00080508:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008050c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[4]);
    }
L_00080510:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_00080514:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00080518:;
    {
        cpu->r[14] = 0x00080520u;
    }
L_0008051c:;
    {
        uint32_t t = rd32(cpu->r[10]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080520u)) return;
    }
L_00080520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00080528:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0008052c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080608;
        }
    }
L_00080530:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00080534:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
        }
    }
L_00080538:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_0008053c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = cpu->r[9];
        }
    }
L_00080540:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00080554;
        }
    }
L_00080544:;
    {
        goto L_000805fc;
    }
L_00080548:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
    }
L_0008054c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000805fc;
        }
    }
L_00080550:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x18u);
    }
L_00080554:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00080558:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_0008055c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00080560:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_00080564:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_00080568:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008056c:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[3]);
    }
L_00080570:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x8u);
    }
L_00080574:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[0]);
    }
L_00080578:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_0008057c:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[3]);
    }
L_00080580:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_00080584:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00080588:;
    {
        wr32(cpu->r[10] + + 0x10u, cpu->r[2]);
    }
L_0008058c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_00080590:;
    {
        wr32(cpu->r[10] + + 0x14u, cpu->r[3]);
    }
L_00080594:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00080598:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008059c:;
    {
        wr32(cpu->r[10] + + 0x18u, cpu->r[3]);
    }
L_000805a0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_000805a4:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[3]);
    }
L_000805a8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x20u);
    }
L_000805ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_000805b0:;
    {
        wr32(cpu->r[10] + + 0x20u, cpu->r[3]);
    }
L_000805b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000805b8:;
    {
        cpu->r[14] = 0x000805c0u;
    }
L_000805bc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000805c0u)) return;
    }
L_000805c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000805c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000805c8:;
    {
        wr32(cpu->r[10] + + 0x2cu, cpu->r[0]);
    }
L_000805cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00080548;
        }
    }
L_000805d0:;
    {
        cpu->r[3] = rd32(0x000805d8u + + 0x54u);
    }
L_000805d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000805d8:;
    {
        cpu->r[0] = rd32(0x000805e0u + + 0x50u);
    }
L_000805dc:;
    {
        cpu->r[2] = 0x00000025u;
    }
L_000805e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000805e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000805ecu, cpu->r[0], 0, 0);
    }
L_000805e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000a8u, 0, 0);
    }
L_000805ec:;
    {
        cpu->r[14] = 0x000805f0u; imp_fwrite(cpu); /* fwrite */
    }
L_000805f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000805f4:;
    {
        cpu->r[14] = 0x000805f8u; fn_00080418(cpu);
    }
L_000805f8:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000805fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00080600:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00080604:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080608u)) return;
    }
L_00080608:;
    {
        cpu->r[3] = rd32(0x00080610u + + 0x1cu);
    }
L_0008060c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00080610:;
    {
        cpu->r[0] = rd32(0x00080618u + + 0x1cu);
    }
L_00080614:;
    {
        cpu->r[2] = 0x00000025u;
    }
L_00080618:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0008061c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00080624u, cpu->r[0], 0, 0);
    }
L_00080620:;
    {
        goto L_000805e8;
    }
}

/* j2k_convert_progression_order @ 00080638 (arm) */
void fn_00080638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0008063c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_00080670;
        case 1: goto L_0008067c;
        case 2: goto L_00080688;
        case 3: goto L_00080694;
        case 4: goto L_00080658;
        default: guest_unimplemented(cpu, 0x0008063cu); return; }
        }
    }
L_00080640:;
    {
        goto L_00080664;
    }
L_00080658:;
    {
        cpu->r[0] = rd32(0x00080660u + + 0x40u);
    }
L_0008065c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00080664u, cpu->r[0], 0, 0);
    }
L_00080660:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00080664:;
    {
        cpu->r[0] = rd32(0x0008066cu + + 0x38u);
    }
L_00080668:;
    {
        cpu->r[0] = add_flags(cpu, 0x00080670u, cpu->r[0], 0, 0);
    }
L_0008066c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00080670:;
    {
        cpu->r[0] = rd32(0x00080678u + + 0x30u);
    }
L_00080674:;
    {
        cpu->r[0] = add_flags(cpu, 0x0008067cu, cpu->r[0], 0, 0);
    }
L_00080678:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0008067c:;
    {
        cpu->r[0] = rd32(0x00080684u + + 0x28u);
    }
L_00080680:;
    {
        cpu->r[0] = add_flags(cpu, 0x00080688u, cpu->r[0], 0, 0);
    }
L_00080684:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00080688:;
    {
        cpu->r[0] = rd32(0x00080690u + + 0x20u);
    }
L_0008068c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00080694u, cpu->r[0], 0, 0);
    }
L_00080690:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00080694:;
    {
        cpu->r[0] = rd32(0x0008069cu + + 0x18u);
    }
L_00080698:;
    {
        cpu->r[0] = add_flags(cpu, 0x000806a0u, cpu->r[0], 0, 0);
    }
L_0008069c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_000806b8 @ 000806b8 (arm) */
void fn_000806b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000806b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_000806bc:;
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
L_000806c0:;
    {
        cpu->r[6] = 0x000015d4u;
    }
L_000806c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000806c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000806cc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[3]; cpu->r[6] = v;
    }
L_000806d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_000806d4:;
    {
        cpu->r[14] = 0x000806d8u; fn_00080638(cpu);
    }
L_000806d8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000806dc:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x10u);
    }
L_000806e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000806e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000806e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000806ecu)) return;
        }
    }
L_000806ec:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000806f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000806f4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000806f8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5] + cpu->r[6]; cpu->r[5] = v;
    }
L_000806fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000208u, 0, 0);
    }
L_00080700:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000200u, 0, 0);
    }
L_00080704:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x0000020cu, 0, 0);
    }
L_00080708:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000204u, 0, 0);
    }
L_0008070c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00080710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080788;
        }
    }
L_00080714:;
    {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_00080718:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008071c:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x11u);
    }
L_00080720:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_00080724:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
        }
    }
L_00080728:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008072c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[3]);
        }
    }
L_00080730:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000043u, 1, 0);
    }
L_00080734:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_00080738:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_000807b0;
        case 1: goto L_00080788;
        case 2: goto L_00080788;
        case 3: goto L_00080788;
        case 4: goto L_00080788;
        case 5: goto L_00080788;
        case 6: goto L_00080788;
        case 7: goto L_00080788;
        case 8: goto L_00080788;
        case 9: goto L_00080780;
        case 10: goto L_00080788;
        case 11: goto L_00080788;
        case 12: goto L_00080788;
        case 13: goto L_000807a4;
        case 14: goto L_00080788;
        case 15: goto L_00080798;
        default: guest_unimplemented(cpu, 0x00080738u); return; }
        }
    }
L_0008073c:;
    {
        goto L_00080788;
    }
L_00080780:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_00080784:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_00080788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008078c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00080790:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008070c;
        }
    }
L_00080794:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080798u)) return;
    }
L_00080798:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0008079c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_000807a0:;
    {
        goto L_00080788;
    }
L_000807a4:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_000807a8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_000807ac:;
    {
        goto L_00080788;
    }
L_000807b0:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000807b4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_000807b8:;
    {
        goto L_00080788;
    }
}

/* j2k_create_decompress @ 000807bc (arm) */
void fn_000807bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000807bc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000807c0:;
    {
        cpu->r[4] = rd32(0x000807c8u + + 0x6cu);
    }
L_000807c4:;
    {
        cpu->r[3] = rd32(0x000807ccu + + 0x6cu);
    }
L_000807c8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000807cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000807d4u, cpu->r[4], 0, 0);
    }
L_000807d0:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_000807d4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000807d8:;
    {
        cpu->r[14] = 0x000807e0u;
    }
L_000807dc:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000807e0u)) return;
    }
L_000807e0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000807e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080810;
        }
    }
L_000807e8:;
    {
        cpu->r[0] = 0x000015d4u;
    }
L_000807ec:;
    {
        cpu->r[14] = 0x000807f4u;
    }
L_000807f0:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000807f4u)) return;
    }
L_000807f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000807f8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000807fc:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_00080800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00080804:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[7]);
        }
    }
L_00080808:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
        }
    }
L_0008080c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080818;
        }
    }
L_00080810:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00080814:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080818u)) return;
    }
L_00080818:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008081c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00080820:;
    {
        cpu->r[3] = rd32(0x00080828u + + 0x14u);
    }
L_00080824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00080828:;
    {
        cpu->r[14] = 0x00080830u;
    }
L_0008082c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080830u)) return;
    }
L_00080830:;
    {
        goto L_00080810;
    }
}

/* j2k_destroy_decompress @ 00080840 (arm) */
void fn_00080840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080840:;
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
L_00080844:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00080848:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x34u);
    }
L_0008084c:;
    {
        cpu->r[7] = rd32(0x00080854u + + 0x1acu);
    }
L_00080850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080854:;
    {
        cpu->r[7] = add_flags(cpu, 0x0008085cu, cpu->r[7], 0, 0);
    }
L_00080858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000809f8;
        }
    }
L_0008085c:;
    {
        cpu->r[8] = rd32(0x00080864u + + 0x1a0u);
    }
L_00080860:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00080864:;
    {
        cpu->r[14] = 0x0008086cu;
    }
L_00080868:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008086cu)) return;
    }
L_0008086c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x30u);
    }
L_00080870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080884;
        }
    }
L_00080878:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0008087c:;
    {
        cpu->r[14] = 0x00080884u;
    }
L_00080880:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080884u)) return;
    }
L_00080884:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x38u);
    }
L_00080888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008088c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000808e0;
        }
    }
L_00080890:;
    {
        cpu->r[2] = 0x00001430u;
    }
L_00080894:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00080898:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008089c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000808b0;
        }
    }
L_000808a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000808a4:;
    {
        cpu->r[14] = 0x000808acu;
    }
L_000808a8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000808acu)) return;
    }
L_000808ac:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x38u);
    }
L_000808b0:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_000808b4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000808b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000808bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000808d0;
        }
    }
L_000808c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000808c4:;
    {
        cpu->r[14] = 0x000808ccu;
    }
L_000808c8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000808ccu)) return;
    }
L_000808cc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x38u);
    }
L_000808d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000808d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000808d8:;
    {
        cpu->r[14] = 0x000808e0u;
    }
L_000808dc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000808e0u)) return;
    }
L_000808e0:;
    {
        cpu->r[5] = rd32(cpu->r[11] + + 0x40u);
    }
L_000808e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000808e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000809e4;
        }
    }
L_000808ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x6cu);
    }
L_000808f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000808f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008098c;
        }
    }
L_000808f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_000808fc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_00080900:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00080904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080908:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008097c;
        }
    }
L_0008090c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00080910:;
    {
        cpu->r[9] = 0x00001430u;
    }
L_00080914:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00080918:;
    {
        cpu->r[10] = 0x000015d0u;
    }
L_0008091c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00080920:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00080924:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00080928:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008092c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080944;
        }
    }
L_00080930:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00080934:;
    {
        cpu->r[14] = 0x0008093cu;
    }
L_00080938:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008093cu)) return;
    }
L_0008093c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00080940:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00080944:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00080948:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000015c0u, 0, 0);
    }
L_0008094c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_00080950:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080968;
        }
    }
L_00080958:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0008095c:;
    {
        cpu->r[14] = 0x00080964u;
    }
L_00080960:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080964u)) return;
    }
L_00080964:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00080968:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_0008096c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x44u);
    }
L_00080970:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00080974:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00080978:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008091c;
        }
    }
L_0008097c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00080980:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00080984:;
    {
        cpu->r[14] = 0x0008098cu;
    }
L_00080988:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008098cu)) return;
    }
L_0008098c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x58u);
    }
L_00080990:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000809a4;
        }
    }
L_00080998:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0008099c:;
    {
        cpu->r[14] = 0x000809a4u;
    }
L_000809a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000809a4u)) return;
    }
L_000809a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000809a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000809ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000809bc;
        }
    }
L_000809b0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000809b4:;
    {
        cpu->r[14] = 0x000809bcu;
    }
L_000809b8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000809bcu)) return;
    }
L_000809bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_000809c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000809c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000809d4;
        }
    }
L_000809c8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000809cc:;
    {
        cpu->r[14] = 0x000809d4u;
    }
L_000809d0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000809d4u)) return;
    }
L_000809d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000809d8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000809dc:;
    {
        cpu->r[14] = 0x000809e4u;
    }
L_000809e0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000809e4u)) return;
    }
L_000809e4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000809e8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000809ec:;
    {
        cpu->r[14] = 0x000809f4u;
    }
L_000809f0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000809f4u)) return;
    }
L_000809f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000809f8u)) return;
    }
L_000809f8:;
    {
        cpu->r[8] = rd32(0x00080a00u + + 0x4u);
    }
L_000809fc:;
    {
        goto L_0008086c;
    }
}

/* j2k_setup_decoder @ 00080a08 (arm) */
void fn_00080a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080a08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00080a0c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_00080a10:;
    {
        cpu->r[3] = rd32(0x00080a18u + + 0x48u);
    }
L_00080a14:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00080a18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00080a20u, cpu->r[3], 0, 0);
    }
L_00080a1c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00080a20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00080a24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080a28u)) return;
        }
    }
L_00080a28:;
    {
        cpu->r[2] = rd32(0x00080a30u + + 0x34u);
    }
L_00080a2c:;
    {
        cpu->r[0] = 0x00000074u;
    }
L_00080a30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00080a34:;
    {
        cpu->r[14] = 0x00080a3cu;
    }
L_00080a38:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080a3cu)) return;
    }
L_00080a3c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00080a40:;
    {
        cpu->r[2] = 0x0000201cu;
    }
L_00080a44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00080a48:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00080a4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00080a50:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_00080a54:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00080a58:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00080a5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080a60u)) return;
    }
}

/* j2k_create_compress @ 00080a68 (arm) */
void fn_00080a68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080a68:;
    {
        cpu->r[3] = rd32(0x00080a70u + + 0x28u);
    }
L_00080a6c:;
    {
        cpu->r[2] = rd32(0x00080a74u + + 0x28u);
    }
L_00080a70:;
    {
        cpu->r[3] = add_flags(cpu, 0x00080a78u, cpu->r[3], 0, 0);
    }
L_00080a74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00080a78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00080a7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00080a80:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_00080a84:;
    {
        cpu->r[14] = 0x00080a8cu;
    }
L_00080a88:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080a8cu)) return;
    }
L_00080a8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080a90:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[4]);
        }
    }
L_00080a94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00080a98u)) return;
    }
}

/* j2k_destroy_compress @ 00080aa0 (arm) */
void fn_00080aa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00080aa0:;
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
L_00080aa4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080aa8:;
    {
        cpu->r[8] = rd32(0x00080ab0u + + 0xf0u);
    }
L_00080aac:;
    {
        cpu->r[8] = add_flags(cpu, 0x00080ab4u, cpu->r[8], 0, 0);
    }
L_00080ab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080ab4u)) return;
        }
    }
L_00080ab4:;
    {
        cpu->r[5] = rd32(cpu->r[9] + + 0x40u);
    }
L_00080ab8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00080abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080b88;
        }
    }
L_00080ac0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_00080ac4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080ac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080b80;
        }
    }
L_00080acc:;
    {
        cpu->r[10] = rd32(0x00080ad4u + + 0xd0u);
    }
L_00080ad0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080ad4:;
    {
        cpu->r[14] = 0x00080adcu;
    }
L_00080ad8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080adcu)) return;
    }
L_00080adc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_00080ae0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00080ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00080af4;
        }
    }
L_00080ae8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080aec:;
    {
        cpu->r[14] = 0x00080af4u;
    }
L_00080af0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080af4u)) return;
    }
L_00080af4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_00080af8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x44u);
    }
L_00080afc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00080b00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00080b04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00080b50;
        }
    }
L_00080b08:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00080b0c:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080b10:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00080b14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00080b18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00080b1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00080b20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000015c0u, 0, 0);
    }
L_00080b24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000015c0u, 0, 0);
    }
L_00080b28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_00080b2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00080b30:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00080b34:;
    {
        cpu->r[14] = 0x00080b3cu;
    }
L_00080b38:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b3cu)) return;
    }
L_00080b3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_00080b40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x44u);
    }
L_00080b44:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00080b48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00080b4c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00080b14;
        }
    }
L_00080b50:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080b54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00080b58:;
    {
        cpu->r[14] = 0x00080b60u;
    }
L_00080b5c:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b60u)) return;
    }
L_00080b60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00080b64:;
    {
        cpu->r[14] = 0x00080b6cu;
    }
L_00080b68:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b6cu)) return;
    }
L_00080b6c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080b70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00080b74:;
    {
        cpu->r[14] = 0x00080b7cu;
    }
L_00080b78:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b7cu)) return;
    }
L_00080b7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b80u)) return;
    }
L_00080b80:;
    {
        cpu->r[10] = rd32(0x00080b88u + + 0x1cu);
    }
L_00080b84:;
    {
        goto L_00080adc;
    }
L_00080b88:;
    {
        cpu->r[10] = rd32(0x00080b90u + + 0x14u);
    }
L_00080b8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00080b90:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00080b94:;
    {
        cpu->r[14] = 0x00080b9cu;
    }
L_00080b98:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00080b9cu)) return;
    }
L_00080b9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00080ba0u)) return;
    }
}

/* sub_00081c08 @ 00081c08 (arm) */
void fn_00081c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00081c08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_00081c0c:;
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
L_00081c10:;
    {
        cpu->r[8] = rd32(0x00081c18u + + 0x168u);
    }
L_00081c14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00081c18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00081c1c:;
    {
        cpu->r[8] = add_flags(cpu, 0x00081c24u, cpu->r[8], 0, 0);
    }
L_00081c20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00081c24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00081c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00081d2c;
        }
    }
L_00081c2c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00081c30:;
    {
        cpu->r[14] = 0x00081c34u; fn_0008d508(cpu);
    }
L_00081c34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00081c38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00081c3c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00081c40:;
    {
        cpu->r[14] = 0x00081c44u; fn_0008d5c4(cpu);
    }
L_00081c44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00081c48:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x50u);
    }
L_00081c4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00081c50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00081d00;
        }
    }
L_00081c54:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00081c58:;
    {
        cpu->r[10] = rd32(0x00081c60u + + 0x124u);
    }
L_00081c5c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00081c60:;
    {
        goto L_00081c74;
    }
L_00081c64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00081c68:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x50u);
    }
L_00081c6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00081c70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00081d00;
        }
    }
L_00081c74:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x44u);
    }
L_00081c78:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00081c7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00081c80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00081c84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00081c88:;
    {
        cpu->r[14] = 0x00081c8cu; fn_0008fb28(cpu);
    }
L_00081c8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_00081c90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00081c94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00081c98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_00081c9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4cu);
    }
L_00081ca0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x44u);
    }
L_00081ca4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00081ca8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00081cac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00081cb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00081cb4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00081cb8:;
    {
        cpu->r[14] = 0x00081cbcu; fn_0008e578(cpu);
    }
L_00081cbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_00081cc0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00081cc4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00081cc8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00081ccc:;
    {
        cpu->r[14] = 0x00081cd4u;
    }
L_00081cd0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00081cd4u)) return;
    }
L_00081cd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00081cd8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00081cdc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00081ce0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00081ce4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[9]);
    }
L_00081ce8:;
    {
        cpu->r[14] = 0x00081cecu; fn_0008e148(cpu);
    }
L_00081cec:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00081cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00081c64;
        }
    }
L_00081cf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00081cf8:;
    {
        uint32_t v = cpu->r[3] | 0x00000080u; cpu->r[3] = v;
    }
L_00081cfc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00081d00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00081d04:;
    {
        cpu->r[14] = 0x00081d08u; fn_0008e118(cpu);
    }
L_00081d08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00081d0c:;
    {
        cpu->r[14] = 0x00081d10u; fn_0008d584(cpu);
    }
L_00081d10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00081d14:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_00081d18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000a0u;
        }
    }
L_00081d1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000020u;
        }
    }
L_00081d20:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00081d24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00081d28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00081d2cu)) return;
    }
L_00081d2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_00081d30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00081d34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00081d10;
        }
    }
L_00081d38:;
    {
        cpu->r[10] = rd32(0x00081d40u + + 0x44u);
    }
L_00081d3c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00081d40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_00081d44:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00081d48:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00081d4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4cu);
    }
L_00081d50:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00081d54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00081d58:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00081d5c:;
    {
        cpu->r[14] = 0x00081d64u;
    }
L_00081d60:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00081d64u)) return;
    }
L_00081d64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_00081d68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_00081d6c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x50u);
    }
L_00081d70:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[9]);
    }
L_00081d74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00081d78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00081d4c;
        }
    }
L_00081d7c:;
    {
        goto L_00081d10;
    }
}

/* sub_000822c0 @ 000822c0 (arm) */
void fn_000822c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000822c0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x40u);
    }
L_000822c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000822c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000822cc:;
    {
        cpu->r[4] = 0x00000434u;
    }
L_000822d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000822d4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_000822d8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x6cu);
    }
L_000822dc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x48u);
    }
L_000822e0:;
    {
        cpu->r[0] = 0x000015d4u;
    }
L_000822e4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_000822e8:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_000822ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000822f0:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000822f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000822f8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_000822fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00082300:;
    {
        cpu->r[14] = 0x00082304u; fn_0007ded0(cpu);
    }
L_00082304:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00082308:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008230c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00082310:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00082314:;
    {
        cpu->r[14] = 0x00082318u; fn_0007ded0(cpu);
    }
L_00082318:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_0008231c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00082324:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00082328:;
    {
        cpu->r[14] = 0x0008232cu; fn_0007ded0(cpu);
    }
L_0008232c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00082330:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082334:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00082338:;
    {
        cpu->r[14] = 0x0008233cu; fn_0007ded0(cpu);
    }
L_0008233c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00082340:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_00082344:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082348:;
    {
        cpu->r[14] = 0x0008234cu; fn_0007ded0(cpu);
    }
L_0008234c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00082350:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00082354:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00082358u)) return;
        }
    }
L_00082358:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0008235c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082360:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00082364u)) return;
        }
    }
L_00082364:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00082368:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008236c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3b0u);
    }
L_00082370:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082374:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x32cu);
    }
L_00082378:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0008237c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00082380:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00082384:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00082388:;
    {
        cpu->r[14] = 0x0008238cu; fn_0007ded0(cpu);
    }
L_0008238c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00082390:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00082394:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008236c;
        }
    }
L_00082398:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008239cu)) return;
    }
}

/* sub_0008239c @ 0008239c (arm) */
void fn_0008239c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008239c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000823a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000823a4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_000823a8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000823ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_000823b0:;
    {
        cpu->r[14] = 0x000015d4u;
    }
L_000823b4:;
    {
        cpu->r[7] = 0x00000434u;
    }
L_000823b8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x48u);
    }
L_000823bc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12] + cpu->r[3]; cpu->r[12] = v;
    }
L_000823c0:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_000823c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000823c8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000823cc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[3]; cpu->r[7] = v;
    }
L_000823d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x324u);
    }
L_000823d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_000823d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_000823dc:;
    {
        cpu->r[14] = 0x000823e0u; fn_0007ded0(cpu);
    }
L_000823e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_000823e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000823e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082444;
        }
    }
L_000823ec:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x4u);
    }
L_000823f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_000823f4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 0);
    }
L_000823f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000823fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00082400u)) return;
        }
    }
L_00082400:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_00082404:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00082408:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008240c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00082414:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082418:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008241c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00082420:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
        }
    }
L_00082424:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 11u, &shc), 0, 0);
        }
    }
L_00082428:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008242c:;
    {
        cpu->r[14] = 0x00082430u; fn_0007ded0(cpu);
    }
L_00082430:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00082434:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00082438:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008243cu)) return;
        }
    }
L_0008243c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00082440:;
    {
        goto L_00082408;
    }
L_00082444:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00082448:;
    {
        goto L_00082400;
    }
}

/* sub_0008244c @ 0008244c (arm) */
void fn_0008244c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008244c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_00082450:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082454:;
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
L_00082458:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008245c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x48u);
    }
L_00082460:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00082464:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00082468:;
    {
        cpu->r[8] = 0x000015d4u;
    }
L_0008246c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00082470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082474:;
    {
        cpu->r[1] = 0x0000ff53u;
    }
L_00082478:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3cu);
    }
L_0008247c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[3]; cpu->r[8] = v;
    }
L_00082480:;
    {
        cpu->r[14] = 0x00082484u; fn_0007ded0(cpu);
    }
L_00082484:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082488:;
    {
        cpu->r[14] = 0x0008248cu; fn_0007ddac(cpu);
    }
L_0008248c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00082490:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00082494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082498:;
    {
        cpu->r[14] = 0x0008249cu; fn_0007dde4(cpu);
    }
L_0008249c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x10u);
    }
L_000824a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000824a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000824a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000100u, 1, 1);
    }
L_000824ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000824b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_000824b4:;
    {
        cpu->r[14] = 0x000824b8u; fn_0007ded0(cpu);
    }
L_000824b8:;
    {
        cpu->r[3] = 0x00000434u;
    }
L_000824bc:;
    {
        cpu->r[1] = 0x000015d0u;
    }
L_000824c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000824c4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_000824c8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000824cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000824d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000824d4:;
    {
        cpu->r[14] = 0x000824d8u; fn_0007ded0(cpu);
    }
L_000824d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000824dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000824e0:;
    {
        cpu->r[14] = 0x000824e4u; fn_000822c0(cpu);
    }
L_000824e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000824e8:;
    {
        cpu->r[14] = 0x000824ecu; fn_0007ddac(cpu);
    }
L_000824ec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000824f0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_000824f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000824f8:;
    {
        cpu->r[14] = 0x000824fcu; fn_0007ddbc(cpu);
    }
L_000824fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00082500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082504:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082508:;
    {
        cpu->r[14] = 0x0008250cu; fn_0007ded0(cpu);
    }
L_0008250c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00082514:;
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
L_00082518:;
    {
        return fn_0007ddbc(cpu);
    }
}

/* sub_0008251c @ 0008251c (arm) */
void fn_0008251c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008251c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00082520:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x48u);
    }
L_00082524:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00082528:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0008252c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082530:;
    {
        cpu->r[1] = 0x0000ff5du;
    }
L_00082534:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082538:;
    {
        cpu->r[14] = 0x0008253cu; fn_0007ded0(cpu);
    }
L_0008253c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082540:;
    {
        cpu->r[14] = 0x00082544u; fn_0007ddac(cpu);
    }
L_00082544:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00082548:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008254c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082550:;
    {
        cpu->r[14] = 0x00082554u; fn_0007dde4(cpu);
    }
L_00082554:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3cu);
    }
L_00082558:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008255c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082560:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_00082564:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000100u, 1, 1);
    }
L_00082568:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008256c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_00082570:;
    {
        cpu->r[14] = 0x00082574u; fn_0007ded0(cpu);
    }
L_00082574:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00082578:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008257c:;
    {
        cpu->r[14] = 0x00082580u; fn_0008239c(cpu);
    }
L_00082580:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082584:;
    {
        cpu->r[14] = 0x00082588u; fn_0007ddac(cpu);
    }
L_00082588:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008258c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_00082590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082594:;
    {
        cpu->r[14] = 0x00082598u; fn_0007ddbc(cpu);
    }
L_00082598:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0008259c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000825a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000825a4:;
    {
        cpu->r[14] = 0x000825a8u; fn_0007ded0(cpu);
    }
L_000825a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000825ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000825b0:;
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
L_000825b4:;
    {
        return fn_0007ddbc(cpu);
    }
}

/* sub_000825b8 @ 000825b8 (arm) */
void fn_000825b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000825b8:;
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
L_000825bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000825c0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_000825c4:;
    {
        cpu->r[8] = 0x000015d4u;
    }
L_000825c8:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000825cc:;
    {
        cpu->r[1] = 0x0000ff5fu;
    }
L_000825d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_000825d4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000825d8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x48u);
    }
L_000825dc:;
    {
        cpu->r[9] = 0x00000101u;
    }
L_000825e0:;
    {
        cpu->r[7] = rd32(cpu->r[14] + + 0x10u);
    }
L_000825e4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[3]; cpu->r[8] = v;
    }
L_000825e8:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_000825ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000825f0:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x1a4u);
    }
L_000825f4:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000825f8:;
    {
        cpu->r[14] = 0x000825fcu; fn_0007ded0(cpu);
    }
L_000825fc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_00082600:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00082604:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000007u;
        }
    }
L_00082608:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000009u;
        }
    }
L_0008260c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082610:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00082614:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[1] = v;
    }
L_00082618:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0008261c:;
    {
        cpu->r[14] = 0x00082620u; fn_0007ded0(cpu);
    }
L_00082620:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00082624:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00082628u)) return;
        }
    }
L_00082628:;
    {
        cpu->r[11] = 0x00000094u;
    }
L_0008262c:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00082630:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_00082634:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000094u, 0, 0);
    }
L_00082638:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_0008263c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_00082640:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1acu);
    }
L_00082644:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00082648:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_0008264c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082650:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00082654:;
    {
        cpu->r[14] = 0x00082658u; fn_0007ded0(cpu);
    }
L_00082658:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0008265c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00082660:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00082664:;
    {
        cpu->r[14] = 0x00082668u; fn_0007ded0(cpu);
    }
L_00082668:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b4u);
    }
L_0008266c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082670:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00082674:;
    {
        cpu->r[14] = 0x00082678u; fn_0007ded0(cpu);
    }
L_00082678:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1b4u);
    }
L_0008267c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_00082680:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082684:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b8u);
    }
L_00082688:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008268c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00082690:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[12]);
        }
    }
L_00082694:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[3]);
        }
    }
L_00082698:;
    {
        cpu->r[14] = 0x0008269cu; fn_0007ded0(cpu);
    }
L_0008269c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1b8u);
    }
L_000826a0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000826a4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000826a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1bcu);
    }
L_000826ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000826b0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000826b4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[12]);
        }
    }
L_000826b8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[3]);
        }
    }
L_000826bc:;
    {
        cpu->r[14] = 0x000826c0u; fn_0007ded0(cpu);
    }
L_000826c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1bcu);
    }
L_000826c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1d0u);
    }
L_000826c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000826cc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000826d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000826d4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[3]);
        }
    }
L_000826d8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[7]);
        }
    }
L_000826dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_000826e0:;
    {
        cpu->r[14] = 0x000826e4u; fn_0007ded0(cpu);
    }
L_000826e4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_000826e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008263c;
        }
    }
L_000826ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000826f0u)) return;
    }
}

/* j2k_setup_encoder @ 000826f0 (arm) */
void fn_000826f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000826f0:;
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
L_000826f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000826f8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_000826fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00082700:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00082704:;
    {
        cpu->r[0] = rd32(0x0008270cu + + 0x818u);
    }
L_00082708:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0008270c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00082710:;
    {
        cpu->r[0] = add_flags(cpu, 0x00082718u, cpu->r[0], 0, 0);
    }
L_00082714:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00082718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082c88;
        }
    }
L_0008271c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00082720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082c88;
        }
    }
L_00082724:;
    {
        cpu->r[1] = rd32(0x0008272cu + + 0x7fcu);
    }
L_00082728:;
    {
        cpu->r[0] = 0x00000074u;
    }
L_0008272c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00082730:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00082734:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00082738:;
    {
        cpu->r[14] = 0x00082740u;
    }
L_0008273c:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00082740u)) return;
    }
L_00082740:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00082744:;
    {
        cpu->r[1] = 0x000048f4u;
    }
L_00082748:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0008274c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[3]);
    }
L_00082750:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[3]);
    }
L_00082754:;
    {
        cpu->r[3] = 0x000048f8u;
    }
L_00082758:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0008275c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082760:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00082764:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[0]);
    }
L_00082768:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0008276c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082770:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00082774:;
    {
        cpu->r[2] = 0x000048fcu;
    }
L_00082778:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0008277c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00082780:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00082784:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00082788:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0008278c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00082790:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00082794:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00082798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000827d8;
        }
    }
L_0008279c:;
    {
        cpu->r[3] = 0x000015d8u;
    }
L_000827a0:;
    {
        cpu->r[2] = 0x000012b4u;
    }
L_000827a4:;
    {
        cpu->r[6] = 0x0000000cu;
    }
L_000827a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000827ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000827b0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000827b4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_000827b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000827bc:;
    {
        cpu->r[14] = 0x000827c4u;
    }
L_000827c0:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000827c4u)) return;
    }
L_000827c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000827c8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000827cc:;
    {
        wr32(cpu->r[3] + + 0x70u, cpu->r[0]);
    }
L_000827d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_000827d4:;
    {
        cpu->r[14] = 0x000827d8u; imp_memcpy(cpu); /* memcpy */
    }
L_000827d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000827dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_000827e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_000827e4:;
    {
        wr32(cpu->r[10] + + 0x38u, cpu->r[3]);
    }
L_000827e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000827ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000827f0:;
    {
        wr32(cpu->r[10] + + 0x3cu, cpu->r[3]);
    }
L_000827f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000827f8:;
    {
        wr32(cpu->r[10] + + 0x30u, cpu->r[3]);
    }
L_000827fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00082800:;
    {
        wr32(cpu->r[10] + + 0x34u, cpu->r[3]);
    }
L_00082804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082838;
        }
    }
L_00082808:;
    {
        cpu->r[14] = 0x0008280cu; imp_strlen(cpu); /* strlen */
    }
L_0008280c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00082810:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_00082814:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[11]);
    }
L_00082818:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008281c:;
    {
        cpu->r[14] = 0x00082824u;
    }
L_00082820:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00082824u)) return;
    }
L_00082824:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00082828:;
    {
        wr32(cpu->r[10] + + 0x40u, cpu->r[0]);
    }
L_0008282c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082838;
        }
    }
L_00082830:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00082834:;
    {
        cpu->r[14] = 0x00082838u; imp_strcpy(cpu); /* strcpy */
    }
L_00082838:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0008283c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082cc4;
        }
    }
L_00082844:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082848:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008284c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x30u);
    }
L_00082850:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x34u);
    }
L_00082854:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00082858:;
    {
        wr32(cpu->r[11] + + 0x38u, cpu->r[2]);
    }
L_0008285c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_00082860:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00082864:;
    {
        wr32(cpu->r[11] + + 0x3cu, cpu->r[3]);
    }
L_00082868:;
    {
        cpu->r[3] = 0x00004900u;
    }
L_0008286c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00082870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082890;
        }
    }
L_00082878:;
    {
        cpu->r[3] = 0x00004901u;
    }
L_0008287c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082880:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082884:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00082888:;
    {
        wr8(cpu->r[12] + + 0x10u, cpu->r[2]);
    }
L_0008288c:;
    {
        wr8(cpu->r[12] + + 0x11u, cpu->r[3]);
    }
L_00082890:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082894:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082898:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0008289c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000828a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000828a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000828e0;
        }
    }
L_000828a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000828ac:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000828b0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000828b4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_000828b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000828bc:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x8u);
    }
L_000828c0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x18u);
    }
L_000828c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000828c8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0]; cpu->r[0] = v;
    }
L_000828cc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_000828d0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[2]);
    }
L_000828d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_000828d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000828dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000828b4;
        }
    }
L_000828e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000828e4:;
    {
        cpu->r[0] = 0x000015d4u;
    }
L_000828e8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000828ec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_000828f0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x48u);
    }
L_000828f4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x44u);
    }
L_000828f8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_000828fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00082900:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00082904:;
    {
        cpu->r[14] = 0x0008290cu;
    }
L_00082908:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008290cu)) return;
    }
L_0008290c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082910:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x48u);
    }
L_00082914:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x44u);
    }
L_00082918:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008291c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082920:;
    {
        wr32(cpu->r[12] + + 0x6cu, cpu->r[0]);
    }
L_00082924:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082c88;
        }
    }
L_00082928:;
    {
        cpu->r[7] = 0x000015f4u;
    }
L_0008292c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00082930:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00082934:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00082938:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008293c:;
    {
        cpu->r[2] = 0x000012b4u;
    }
L_00082940:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x6cu);
    }
L_00082944:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00082948:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008294c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00082950:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00082954:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00082958:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_0008295c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000829a8;
        }
    }
L_00082960:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082964:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00082968:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008296c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082eb0;
        }
    }
L_00082970:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x20u);
    }
L_00082974:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001280u, 0, 0);
    }
L_00082978:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_0008297c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082980:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00082984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082c90;
        }
    }
L_00082988:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008298c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00001440u, 0, 0);
    }
L_00082990:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00082994:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x190u);
    }
L_00082998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008299c:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000829a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000829a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00082988;
        }
    }
L_000829a8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000829ac:;
    {
        cpu->r[6] = 0x000012b0u;
    }
L_000829b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000829b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000829b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_000829bc:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[3]);
    }
L_000829c0:;
    {
        cpu->r[3] = 0x00004902u;
    }
L_000829c4:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[2]);
    }
L_000829c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000829cc:;
    {
        wr32(cpu->r[11] + + 0x1a8u, cpu->r[12]);
    }
L_000829d0:;
    {
        wr32(cpu->r[11] + + 0x10u, cpu->r[3]);
    }
L_000829d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000829d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000829dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082f14;
        }
    }
L_000829e0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000829e4:;
    {
        wr32(cpu->r[11] + + 0x1a8u, cpu->r[0]);
    }
L_000829e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000829ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000829f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082a98;
        }
    }
L_000829f4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000829f8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_000829fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082a00:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00082a04:;
    {
        cpu->r[14] = 0x00000094u;
    }
L_00082a08:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_00082a0c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082a10:;
    {
        goto L_00082a28;
    }
L_00082a14:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_00082a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082a4c;
        }
    }
L_00082a1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00082a20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00082a24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082a94;
        }
    }
L_00082a28:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x60u);
    }
L_00082a2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00082a30:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[3] = v;
    }
L_00082a34:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_00082a38:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_00082a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000094u, 0, 0);
    }
L_00082a40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00082a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00082a48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082a14;
        }
    }
L_00082a4c:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x38u);
    }
L_00082a50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00082a54:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x60u);
    }
L_00082a58:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x30u);
    }
L_00082a5c:;
    {
        wr32(cpu->r[3] + + 0x1b4u, cpu->r[11]);
    }
L_00082a60:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x3cu);
    }
L_00082a64:;
    {
        wr32(cpu->r[3] + + 0x1dcu, cpu->r[10]);
    }
L_00082a68:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x34u);
    }
L_00082a6c:;
    {
        wr32(cpu->r[3] + + 0x1b8u, cpu->r[11]);
    }
L_00082a70:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x40u);
    }
L_00082a74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x50u);
    }
L_00082a78:;
    {
        wr32(cpu->r[3] + + 0x1acu, cpu->r[9]);
    }
L_00082a7c:;
    {
        wr32(cpu->r[3] + + 0x1bcu, cpu->r[11]);
    }
L_00082a80:;
    {
        wr32(cpu->r[3] + + 0x1b0u, cpu->r[10]);
    }
L_00082a84:;
    {
        wr32(cpu->r[3] + + 0x1ccu, cpu->r[2]);
    }
L_00082a88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00082a8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00082a90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082a28;
        }
    }
L_00082a94:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_00082a98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082a9c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00082aa0:;
    {
        wr32(cpu->r[0] + + 0x1a4u, cpu->r[12]);
    }
L_00082aa4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00082aa8:;
    {
        cpu->r[0] = 0x00000434u;
    }
L_00082aac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00082ab0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_00082ab4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00082ab8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_00082abc:;
    {
        cpu->r[14] = 0x00082ac4u;
    }
L_00082ac0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00082ac4u)) return;
    }
L_00082ac4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00082ac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082acc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00082ad0:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_00082ad4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00082ad8:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[0]);
    }
L_00082adc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082c54;
        }
    }
L_00082ae0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00082ae4:;
    {
        cpu->r[6] = 0x0000000fu;
    }
L_00082ae8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00082aec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00082af0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00082af4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00082af8:;
    {
        cpu->r[1] = 0x000015d8u;
    }
L_00082afc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00082b00:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_00082b04:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_00082b08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00082b0c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00082b10:;
    {
        cpu->r[3] = 0x000015dcu;
    }
L_00082b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082b18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082b1c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082b20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082b38;
        }
    }
L_00082b24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082b28:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00082b2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082b30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082b34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082b28;
        }
    }
L_00082b38:;
    {
        cpu->r[3] = 0x000015e0u;
    }
L_00082b3c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00082b40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082b44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082b48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082b4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082b64;
        }
    }
L_00082b50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082b54:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00082b58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082b5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082b60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082b54;
        }
    }
L_00082b64:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00082b68:;
    {
        cpu->r[2] = 0x000015e4u;
    }
L_00082b6c:;
    {
        cpu->r[3] = 0x000015e8u;
    }
L_00082b70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00082b74:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00082b78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082b7c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[2], 1, 1);
    }
L_00082b80:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082b84:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00082b88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082b8c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00082b90:;
    {
        wr32(cpu->r[0] + + 0x324u, cpu->r[2]);
    }
L_00082b94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082b98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00082b9c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00082ba0:;
    {
        cpu->r[3] = 0x000015ecu;
    }
L_00082ba4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00082ba8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082bac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00082bb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000015f0u;
        }
    }
L_00082bb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00082bb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_00082bbc:;
    {
        wr32(cpu->r[0] + + 0x328u, cpu->r[3]);
    }
L_00082bc0:;
    {
        cpu->r[3] = 0x000048f4u;
    }
L_00082bc4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00082bc8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00082bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082d14;
        }
    }
L_00082bd0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_00082bd4:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_00082bd8:;
    {
        wr32(cpu->r[0] + + 0x3b0u, cpu->r[3]);
    }
L_00082bdc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00082be0:;
    {
        wr32(cpu->r[0] + + 0x32cu, cpu->r[3]);
    }
L_00082be4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082c0c;
        }
    }
L_00082be8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00082bec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00082bf0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00082bf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082bf8:;
    {
        wr32(cpu->r[3] + + 0x330u, cpu->r[1]);
    }
L_00082bfc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00082c00:;
    {
        wr32(cpu->r[3] + + 0x3b4u, cpu->r[1]);
    }
L_00082c04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082c08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00082bf4;
        }
    }
L_00082c0c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00082c10:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000430u, 0, 0);
    }
L_00082c14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_00082c18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00082c1c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_00082c20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_00082c24:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000030u, 0, 0);
    }
L_00082c28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00082c2c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_00082c30:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_00082c34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00082c38:;
    {
        cpu->r[14] = 0x00082c3cu; fn_0007fe00(cpu);
    }
L_00082c3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00082c40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00082c44:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_00082c48:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x000015d0u;
        }
    }
L_00082c4c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
        }
    }
L_00082c50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082af4;
        }
    }
L_00082c54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082c58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00082c5c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_00082c60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00082c64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00082c68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_00082c6c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000015c0u, 0, 0);
    }
L_00082c70:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_00082c74:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00082c78:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00082c7c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00082c80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00082c84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082938;
        }
    }
L_00082c88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00082c8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00082c90u)) return;
    }
L_00082c90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082c94:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[0] = ea + 4u;
    }
L_00082c98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00082c9c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00082ca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082ca4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000829a8;
        }
    }
L_00082ca8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082cac:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[0] = ea + 4u;
    }
L_00082cb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00082cb4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00082cb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082cbc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00082c90;
        }
    }
L_00082cc0:;
    {
        goto L_000829a8;
    }
L_00082cc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082cc8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00082ccc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x38u);
    }
L_00082cd0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x30u);
    }
L_00082cd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00082cd8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00082cdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00082ce0:;
    {
        cpu->r[14] = 0x00082ce4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00082ce4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082ce8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x3cu);
    }
L_00082cec:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x34u);
    }
L_00082cf0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00082cf4:;
    {
        wr32(cpu->r[10] + + 0x44u, cpu->r[0]);
    }
L_00082cf8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00082cfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00082d00:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00082d04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00082d08:;
    {
        cpu->r[14] = 0x00082d0cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00082d0c:;
    {
        wr32(cpu->r[10] + + 0x48u, cpu->r[0]);
    }
L_00082d10:;
    {
        goto L_00082868;
    }
L_00082d14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00082d18:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00082d1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082d4c;
        }
    }
L_00082d20:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00082d24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00082d28:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00082d2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082c0c;
        }
    }
L_00082d30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082d34:;
    {
        wr32(cpu->r[3] + + 0x32cu, cpu->r[6]);
    }
L_00082d38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00082d3c:;
    {
        wr32(cpu->r[3] + + 0x3b0u, cpu->r[6]);
    }
L_00082d40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082d44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00082d30;
        }
    }
L_00082d48:;
    {
        goto L_00082c0c;
    }
L_00082d4c:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x4u);
    }
L_00082d50:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00082d54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082c0c;
        }
    }
L_00082d58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00082d5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00082d60:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], 0x000000ecu, 0, 0);
    }
L_00082d64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_00082d68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00082d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000032cu, 0, 0);
    }
L_00082d70:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_00082d74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082e14;
        }
    }
L_00082d78:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_00082d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x000015c0u, 0, 0);
    }
L_00082d80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_00082d84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082d88:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00082d8c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[12] + - 0x4u, cpu->r[2]);
        }
    }
L_00082d90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082db8;
        }
    }
L_00082d94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082d98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082d9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082db4;
        }
    }
L_00082da0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082da4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00082da8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082dac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082da4;
        }
    }
L_00082db4:;
    {
        wr32(cpu->r[12] + - 0x4u, cpu->r[2]);
    }
L_00082db8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00001640u, 0, 0);
    }
L_00082dbc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x3cu);
    }
L_00082dc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082dc4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00082dc8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[14] + - 0x4u, cpu->r[3]);
        }
    }
L_00082dcc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082df0;
        }
    }
L_00082dd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082ea8;
        }
    }
L_00082ddc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00082de0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082de4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082ddc;
        }
    }
L_00082dec:;
    {
        wr32(cpu->r[14] + - 0x4u, cpu->r[2]);
    }
L_00082df0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00082df4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000004u, 1, 0);
    }
L_00082df8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_00082dfc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00082e00:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_00082e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082c0c;
        }
    }
L_00082e08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00082e0c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00082e10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082d78;
        }
    }
L_00082e14:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00082e18:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_00082e1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000570u, 0, 0);
    }
L_00082e20:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000590u, 0, 0);
    }
L_00082e24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_00082e28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000eu, 0, 0);
    }
L_00082e2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00082e30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00082e34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00082e38:;
    {
        cpu->r[11] = rd32(cpu->r[11] + + 0x4u);
    }
L_00082e3c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00082e40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00082e44:;
    {
        uint32_t v = shifter(cpu->r[11], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00082e48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00082e4c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[12] + - 0x4u, cpu->r[11]);
        }
    }
L_00082e50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082e78;
        }
    }
L_00082e54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00082e58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00082e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082e74;
        }
    }
L_00082e60:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00082e64:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00082e68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00082e6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00082e70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082e64;
        }
    }
L_00082e74:;
    {
        wr32(cpu->r[12] + - 0x4u, cpu->r[11]);
    }
L_00082e78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082e7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00082e80:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[14] + - 0x4u, cpu->r[2]);
        }
    }
L_00082e84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00082df0;
        }
    }
L_00082e88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082e8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00082e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082ea8;
        }
    }
L_00082e94:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00082e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082e9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00082ea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082e94;
        }
    }
L_00082ea4:;
    {
        goto L_00082dec;
    }
L_00082ea8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082eac:;
    {
        goto L_00082dec;
    }
L_00082eb0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_00082eb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001280u, 0, 0);
    }
L_00082eb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_00082ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082ec0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082ec4:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x20u);
    }
L_00082ec8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00082ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082eec;
        }
    }
L_00082ed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082ed4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[0] = ea + 4u;
    }
L_00082ed8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00082edc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00082ee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082ee4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082ed0;
        }
    }
L_00082ee8:;
    {
        goto L_000829a8;
    }
L_00082eec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00082ef0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x190u);
    }
L_00082ef4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00082ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00001440u, 0, 0);
    }
L_00082efc:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00082f00:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[0] = ea + 4u;
    }
L_00082f04:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00082f08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00082f0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00082eec;
        }
    }
L_00082f10:;
    {
        goto L_000829a8;
    }
L_00082f14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00082f18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00082f1c:;
    {
        wr32(cpu->r[1] + + 0x1a4u, cpu->r[2]);
    }
L_00082f20:;
    {
        goto L_00082aa4;
    }
}

/* j2k_decode_jpt_stream @ 00082f2c (arm) */
void fn_00082f2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00082f2c:;
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
L_00082f30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00082f34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00082f38:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00082f3c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[1]);
    }
L_00082f40:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00082f44:;
    {
        cpu->r[10] = rd32(cpu->r[0]);
    }
L_00082f48:;
    {
        cpu->r[14] = 0x00082f4cu; fn_000803ec(cpu);
    }
L_00082f4c:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00082f50:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00082f54:;
    {
        cpu->r[6] = rd32(0x00082f5cu + + 0x208u);
    }
L_00082f58:;
    {
        cpu->r[6] = add_flags(cpu, 0x00082f60u, cpu->r[6], 0, 0);
    }
L_00082f5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00082f60:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_00082f64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00082f68:;
    {
        cpu->r[14] = 0x00082f6cu; fn_00085a9c(cpu);
    }
L_00082f6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00082f70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00082f74:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00082f78:;
    {
        cpu->r[14] = 0x00082f7cu; fn_00085b24(cpu);
    }
L_00082f7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082f80:;
    {
        cpu->r[14] = 0x00082f84u; fn_0007ddac(cpu);
    }
L_00082f84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00082f88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00082f8c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00082f90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000830c0;
        }
    }
L_00082f94:;
    {
        cpu->r[7] = rd32(0x00082f9cu + + 0x1ccu);
    }
L_00082f98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082f9c:;
    {
        cpu->r[14] = 0x00082fa0u; fn_0007ddcc(cpu);
    }
L_00082fa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00082fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083120;
        }
    }
L_00082fa8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082fac:;
    {
        cpu->r[14] = 0x00082fb0u; fn_0007ddac(cpu);
    }
L_00082fb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00082fb4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_00082fb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00082fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083070;
        }
    }
L_00082fc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00082fc4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00082fc8:;
    {
        cpu->r[14] = 0x00082fccu; fn_0007de4c(cpu);
    }
L_00082fcc:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 8u, &shc); cpu->r[3] = v;
    }
L_00082fd0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00082fd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00082fd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008312c;
        }
    }
L_00082fdc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00082fe0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00082fe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082fe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082ffc;
        }
    }
L_00082fec:;
    {
        goto L_00083004;
    }
L_00082ff0:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0xcu;
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
        cpu->r[1] = wb_tmp;
    }
L_00082ff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00082ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083004;
        }
    }
L_00082ffc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00083000:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082ff0;
        }
    }
L_00083004:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_00083008:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0008300c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00083010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000830ec;
        }
    }
L_00083014:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00083018:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008301c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008302c;
        }
    }
L_00083020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083024:;
    {
        cpu->r[14] = 0x00083028u; guest_call(cpu, cpu->r[3]);
    }
L_00083028:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008302c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_00083030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083064;
        }
    }
L_00083034:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000040u, 1, 1);
    }
L_00083038:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00082f98;
        }
    }
L_0008303c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083040:;
    {
        cpu->r[14] = 0x00083044u; fn_00081c08(cpu);
    }
L_00083044:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00083048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0008304c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083064;
        }
    }
L_00083050:;
    {
        cpu->r[2] = rd32(0x00083058u + + 0x114u);
    }
L_00083054:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00083058:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0008305c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00083064u, cpu->r[2], 0, 0);
    }
L_00083060:;
    {
        cpu->r[14] = 0x00083064u; fn_00080304(cpu);
    }
L_00083064:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083068:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0008306c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00083070u)) return;
    }
L_00083070:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00083074:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00083078:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008307c:;
    {
        cpu->r[14] = 0x00083080u; fn_00085b24(cpu);
    }
L_00083080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083084:;
    {
        cpu->r[14] = 0x00083088u; fn_0007ddac(cpu);
    }
L_00083088:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008308c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00083090:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00083094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00082fc0;
        }
    }
L_00083098:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008309c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000830a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000830a4:;
    {
        cpu->r[14] = 0x000830a8u; fn_00080418(cpu);
    }
L_000830a8:;
    {
        cpu->r[2] = rd32(0x000830b0u + + 0xc0u);
    }
L_000830ac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000830b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000830b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000830bcu, cpu->r[2], 0, 0);
    }
L_000830b8:;
    {
        cpu->r[14] = 0x000830bcu; fn_00080304(cpu);
    }
L_000830bc:;
    {
        goto L_00083064;
    }
L_000830c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000830c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000830c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000830cc:;
    {
        cpu->r[14] = 0x000830d0u; fn_00080418(cpu);
    }
L_000830d0:;
    {
        cpu->r[2] = rd32(0x000830d8u + + 0x9cu);
    }
L_000830d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000830d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000830dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000830e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000830e8u, cpu->r[2], 0, 0);
    }
L_000830e4:;
    {
        cpu->r[14] = 0x000830e8u; fn_00080304(cpu);
    }
L_000830e8:;
    {
        goto L_00083064;
    }
L_000830ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000830f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000830f4:;
    {
        cpu->r[14] = 0x000830f8u; fn_00080418(cpu);
    }
L_000830f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000830fc:;
    {
        cpu->r[14] = 0x00083100u; fn_0007ddac(cpu);
    }
L_00083100:;
    {
        cpu->r[2] = rd32(0x00083108u + + 0x70u);
    }
L_00083104:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00083108:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0008310c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00083114u, cpu->r[2], 0, 0);
    }
L_00083110:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_00083114:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00083118:;
    {
        cpu->r[14] = 0x0008311cu; fn_00080304(cpu);
    }
L_0008311c:;
    {
        goto L_00083064;
    }
L_00083120:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083124:;
    {
        cpu->r[14] = 0x00083128u; fn_00081c08(cpu);
    }
L_00083128:;
    {
        goto L_00083064;
    }
L_0008312c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083130:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00083134:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00083138:;
    {
        cpu->r[14] = 0x0008313cu; fn_00080418(cpu);
    }
L_0008313c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083140:;
    {
        cpu->r[14] = 0x00083144u; fn_0007ddac(cpu);
    }
L_00083144:;
    {
        cpu->r[2] = rd32(0x0008314cu + + 0x30u);
    }
L_00083148:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008314c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_00083150:;
    {
        cpu->r[2] = add_flags(cpu, 0x00083158u, cpu->r[2], 0, 0);
    }
L_00083154:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_00083158:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0008315c:;
    {
        cpu->r[14] = 0x00083160u; fn_00080304(cpu);
    }
L_00083160:;
    {
        goto L_00083064;
    }
}

/* j2k_decode @ 00083180 (arm) */
void fn_00083180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00083180:;
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
L_00083184:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00083188:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008318c:;
    {
        cpu->r[6] = rd32(0x00083194u + + 0x19cu);
    }
L_00083190:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00083194:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00083198:;
    {
        cpu->r[6] = add_flags(cpu, 0x000831a0u, cpu->r[6], 0, 0);
    }
L_0008319c:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_000831a0:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[1]);
    }
L_000831a4:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_000831a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000831bc;
        }
    }
L_000831ac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000831b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000831b4:;
    {
        cpu->r[2] = 0x00000060u;
    }
L_000831b8:;
    {
        cpu->r[14] = 0x000831bcu; imp_memset(cpu); /* memset */
    }
L_000831bc:;
    {
        cpu->r[14] = 0x000831c0u; fn_000803ec(cpu);
    }
L_000831c0:;
    {
        cpu->r[9] = rd32(0x000831c8u + + 0x16cu);
    }
L_000831c4:;
    {
        cpu->r[11] = 0x0000ff90u;
    }
L_000831c8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000831cc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_000831d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000831d4:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_000831d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000831dc:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000831e0:;
    {
        cpu->r[14] = 0x000831e4u; fn_0007de4c(cpu);
    }
L_000831e4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 8u, &shc); cpu->r[3] = v;
    }
L_000831e8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000831ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_000831f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000832dc;
        }
    }
L_000831f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000831f8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000831fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00083200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083214;
        }
    }
L_00083204:;
    {
        goto L_0008321c;
    }
L_00083208:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0xcu;
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
        cpu->r[0] = wb_tmp;
    }
L_0008320c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00083210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008321c;
        }
    }
L_00083214:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00083218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083208;
        }
    }
L_0008321c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_00083220:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00083224:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00083228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000832a8;
        }
    }
L_0008322c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_00083230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083244;
        }
    }
L_00083234:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083238:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_0008323c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00083240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083318;
        }
    }
L_00083244:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00083248:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008324c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008325c;
        }
    }
L_00083250:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083254:;
    {
        cpu->r[14] = 0x00083258u; guest_call(cpu, cpu->r[3]);
    }
L_00083258:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008325c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000080u; set_nz(cpu, v); }
    }
L_00083260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083310;
        }
    }
L_00083264:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_00083268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008329c;
        }
    }
L_0008326c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000040u, 1, 1);
    }
L_00083270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000831d8;
        }
    }
L_00083274:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083278:;
    {
        cpu->r[14] = 0x0008327cu; fn_00081c08(cpu);
    }
L_0008327c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00083280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_00083284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008329c;
        }
    }
L_00083288:;
    {
        cpu->r[2] = rd32(0x00083290u + + 0xa8u);
    }
L_0008328c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00083290:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00083294:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008329cu, cpu->r[2], 0, 0);
    }
L_00083298:;
    {
        cpu->r[14] = 0x0008329cu; fn_00080304(cpu);
    }
L_0008329c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000832a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000832a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000832a8u)) return;
    }
L_000832a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000832ac:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000832b0:;
    {
        cpu->r[14] = 0x000832b4u; fn_00080418(cpu);
    }
L_000832b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000832b8:;
    {
        cpu->r[14] = 0x000832bcu; fn_0007ddac(cpu);
    }
L_000832bc:;
    {
        cpu->r[2] = rd32(0x000832c4u + + 0x78u);
    }
L_000832c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000832c4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000832c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000832d0u, cpu->r[2], 0, 0);
    }
L_000832cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_000832d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000832d4:;
    {
        cpu->r[14] = 0x000832d8u; fn_00080304(cpu);
    }
L_000832d8:;
    {
        goto L_0008329c;
    }
L_000832dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000832e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000832e4:;
    {
        cpu->r[14] = 0x000832e8u; fn_00080418(cpu);
    }
L_000832e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000832ec:;
    {
        cpu->r[14] = 0x000832f0u; fn_0007ddac(cpu);
    }
L_000832f0:;
    {
        cpu->r[2] = rd32(0x000832f8u + + 0x48u);
    }
L_000832f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000832f8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000832fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00083304u, cpu->r[2], 0, 0);
    }
L_00083300:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_00083304:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00083308:;
    {
        cpu->r[14] = 0x0008330cu; fn_00080304(cpu);
    }
L_0008330c:;
    {
        goto L_0008329c;
    }
L_00083310:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00083314:;
    {
        goto L_0008329c;
    }
L_00083318:;
    {
        cpu->r[2] = rd32(0x00083320u + + 0x24u);
    }
L_0008331c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00083320:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00083324:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008332cu, cpu->r[2], 0, 0);
    }
L_00083328:;
    {
        cpu->r[14] = 0x0008332cu; fn_00080304(cpu);
    }
L_0008332c:;
    {
        goto L_0008329c;
    }
}

/* j2k_calculate_tp @ 00083348 (arm) */
void fn_00083348(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00083348:;
    {
        cpu->r[1] = rd32(0x00083350u + + 0x188u);
    }
L_0008334c:;
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
L_00083350:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00083354:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00083358:;
    {
        cpu->r[12] = rd32(0x00083360u + + 0x17cu);
    }
L_0008335c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00083360:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00083364:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00083368:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_0008336c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00083370:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083374:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_00083378:;
    {
        cpu->r[3] = add_flags(cpu, 0x00083380u, cpu->r[3], 0, 0);
    }
L_0008337c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00083380:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00083384:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00083388:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0008338c:;
    {
        cpu->r[14] = 0x00083394u;
    }
L_00083390:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00083394u)) return;
    }
L_00083394:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083398:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x44u);
    }
L_0008339c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000833a0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000833a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000833a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000833ac:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[0]);
    }
L_000833b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00083450;
        }
    }
L_000833b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000833b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000833bc:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000833c0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000833c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000833c8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x6cu);
    }
L_000833cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000833d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_000833d4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1a4u);
    }
L_000833d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000833dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000833e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008345c;
        }
    }
L_000833e4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000833e8:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000833ec:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000833f0:;
    {
        goto L_00083420;
    }
L_000833f4:;
    {
        cpu->r[14] = 0x000833f8u; fn_000806b8(cpu);
    }
L_000833f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000833fc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00083400:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00083404:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00083408:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0008340c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_00083410:;
    {
        cpu->r[14] = 0x00083414u; fn_00086e20(cpu);
    }
L_00083414:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x1a4u);
    }
L_00083418:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008341c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008345c;
        }
    }
L_00083420:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00083424:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00083428:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008342c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00083430:;
    {
        cpu->r[14] = 0x00083434u; fn_00086f00(cpu);
    }
L_00083434:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00083438:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0008343c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00083440:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00083444:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000833f4;
        }
    }
L_0008344c:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_00083450:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00083454:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00083458:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008345cu)) return;
    }
L_0008345c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083460:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x44u);
    }
L_00083464:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x14u);
    }
L_00083468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008346c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[7]);
    }
L_00083470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000834a4;
        }
    }
L_00083474:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x58u);
    }
L_00083478:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_0008347c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00083480:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083484:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00083488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008348c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00083490:;
    {
        wr32(cpu->r[4] + + 0x238u, cpu->r[7]);
    }
L_00083494:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00083498:;
    {
        cpu->r[14] = 0x000834a0u;
    }
L_0008349c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000834a0u)) return;
    }
L_000834a0:;
    {
        wr32(cpu->r[4] + + 0x23cu, cpu->r[0]);
    }
L_000834a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_000834a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000834ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x44u);
    }
L_000834b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[12] = v1;
    }
L_000834b4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000834b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000015c0u, 0, 0);
    }
L_000834bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_000834c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000240u, 0, 0);
    }
L_000834c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000834c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000834cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000834d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000833c8;
        }
    }
L_000834d4:;
    {
        goto L_00083450;
    }
}
