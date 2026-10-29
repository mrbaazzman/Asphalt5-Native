#include "functions.h"

/* _ZN5Lib3D20RegisterBillboardFmtEv @ 0012f3d4 (arm) */
void fn_0012f3d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f3d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012f3d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b0u, 1, 0);
    }
L_0012f3dc:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0012f3e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012f3e4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012f3e8:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_0012f3ec:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0012f3f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f3f4:;
    {
        wr8(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0012f3f8:;
    {
        cpu->r[14] = 0x00000009u;
    }
L_0012f3fc:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0012f400:;
    {
        wr8(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0012f404:;
    {
        wr8(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0012f408:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0012f40c:;
    {
        wr8(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0012f410:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0012f414:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0012f418:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0012f41c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0012f420:;
    {
        cpu->r[14] = 0x0000000bu;
    }
L_0012f424:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0012f428:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0012f42c:;
    {
        cpu->r[14] = 0x00000005u;
    }
L_0012f430:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0012f434:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0012f438:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_0012f43c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0012f440:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0012f444:;
    {
        cpu->r[14] = 0x0000000eu;
    }
L_0012f448:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0012f44c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_0012f450:;
    {
        cpu->r[14] = 0x0000000fu;
    }
L_0012f454:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0012f458:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_0012f45c:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_0012f460:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_0012f464:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0012f468:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_0012f46c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0012f470:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0012f474:;
    {
        cpu->r[14] = 0x00000012u;
    }
L_0012f478:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_0012f47c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[14]);
    }
L_0012f480:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_0012f484:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_0012f488:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[14]);
    }
L_0012f48c:;
    {
        cpu->r[14] = 0x00000014u;
    }
L_0012f490:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_0012f494:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0012f498:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[12]);
    }
L_0012f49c:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_0012f4a0:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0012f4a4:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[2]);
    }
L_0012f4a8:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_0012f4ac:;
    {
        wr8(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_0012f4b0:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_0012f4b4:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[14]);
    }
L_0012f4b8:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[12]);
    }
L_0012f4bc:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[2]);
    }
L_0012f4c0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[12]);
    }
L_0012f4c4:;
    {
        cpu->r[14] = 0x0012f4c8u; fn_0012f2c4(cpu);
    }
L_0012f4c8:;
    {
        cpu->r[3] = 0x000012e4u;
    }
L_0012f4cc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0012f4d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0012f4d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f4d8u)) return;
    }
}

/* _ZN5Lib3D16Register2DVtxFmtEv @ 0012f4d8 (arm) */
void fn_0012f4d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f4d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012f4dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b0u, 1, 0);
    }
L_0012f4e0:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0012f4e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012f4e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012f4ec:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_0012f4f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0012f4f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f4f8:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0012f4fc:;
    {
        cpu->r[14] = 0x00000009u;
    }
L_0012f500:;
    {
        wr8(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0012f504:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0012f508:;
    {
        wr8(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0012f50c:;
    {
        wr8(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0012f510:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0012f514:;
    {
        wr8(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0012f518:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0012f51c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0012f520:;
    {
        cpu->r[14] = 0x00000003u;
    }
L_0012f524:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0012f528:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0012f52c:;
    {
        cpu->r[14] = 0x0000000bu;
    }
L_0012f530:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0012f534:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0012f538:;
    {
        cpu->r[14] = 0x00000005u;
    }
L_0012f53c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0012f540:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0012f544:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_0012f548:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0012f54c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0012f550:;
    {
        cpu->r[14] = 0x0000000eu;
    }
L_0012f554:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0012f558:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_0012f55c:;
    {
        cpu->r[14] = 0x0000000fu;
    }
L_0012f560:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_0012f564:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_0012f568:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_0012f56c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0012f570:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0012f574:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_0012f578:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_0012f57c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0012f580:;
    {
        cpu->r[14] = 0x00000012u;
    }
L_0012f584:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_0012f588:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[14]);
    }
L_0012f58c:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_0012f590:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_0012f594:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[14]);
    }
L_0012f598:;
    {
        cpu->r[14] = 0x00000014u;
    }
L_0012f59c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0012f5a0:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[12]);
    }
L_0012f5a4:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_0012f5a8:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0012f5ac:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[2]);
    }
L_0012f5b0:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_0012f5b4:;
    {
        wr8(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_0012f5b8:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_0012f5bc:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[14]);
    }
L_0012f5c0:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[12]);
    }
L_0012f5c4:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[2]);
    }
L_0012f5c8:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[12]);
    }
L_0012f5cc:;
    {
        cpu->r[14] = 0x0012f5d0u; fn_0012f2c4(cpu);
    }
L_0012f5d0:;
    {
        cpu->r[3] = 0x000012e0u;
    }
L_0012f5d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0012f5d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0012f5dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f5e0u)) return;
    }
}

/* _Z17gltIsExtSupportedPKc @ 0012f5e0 (arm) */
void fn_0012f5e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f5e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012f5e4:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_0012f5e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012f5ec:;
    {
        cpu->r[14] = 0x0012f5f0u; imp_strchr(cpu); /* strchr */
    }
L_0012f5f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012f5f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f600;
        }
    }
L_0012f5f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0012f5fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f600u)) return;
    }
L_0012f600:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_0012f604:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012f608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f5f8;
        }
    }
L_0012f60c:;
    {
        cpu->r[0] = 0x00001f03u;
    }
L_0012f610:;
    {
        cpu->r[14] = 0x0012f614u; imp_glGetString(cpu); /* glGetString */
    }
L_0012f614:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f61c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012f620:;
    {
        cpu->r[14] = 0x0012f624u; imp_strstr(cpu); /* strstr */
    }
L_0012f624:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012f628:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012f62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f5f8;
        }
    }
L_0012f630:;
    {
        cpu->r[14] = 0x0012f634u; imp_strlen(cpu); /* strlen */
    }
L_0012f634:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_0012f638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0012f63c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0012f640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f650;
        }
    }
L_0012f644:;
    {
        cpu->r[2] = rd8(cpu->r[6] + - 0x1u);
    }
L_0012f648:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0012f64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f618;
        }
    }
L_0012f650:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[0]);
    }
L_0012f654:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0012f658:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0012f65c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_0012f660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f618;
        }
    }
L_0012f664:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0012f668:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f66cu)) return;
    }
}

/* _ZN5Lib3D16Begin2DRenderingEv @ 0012f66c (arm) */
void fn_0012f66c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f66c:;
    {
        cpu->r[3] = 0x000012c4u;
    }
L_0012f670:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012f674:;
    {
        cpu->r[6] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012f678:;
    {
        cpu->r[4] = rd32(0x0012f680u + + 0xf0u);
    }
L_0012f67c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012f680:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0012f684:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012f688:;
    {
        cpu->r[4] = add_flags(cpu, 0x0012f690u, cpu->r[4], 0, 0);
    }
L_0012f68c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f764;
        }
    }
L_0012f690:;
    {
        cpu->r[2] = 0x00000207u;
    }
L_0012f694:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0012f698:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012f69c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00001300u, 0, 0);
    }
L_0012f6a0:;
    {
        cpu->r[14] = 0x0012f6a4u; fn_0012e9c4(cpu);
    }
L_0012f6a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012f6a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012f6ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_0012f6b0:;
    {
        cpu->r[14] = 0x0012f6b4u; fn_0012e264(cpu);
    }
L_0012f6b4:;
    {
        cpu->r[3] = rd32(0x0012f6bcu + + 0xb8u);
    }
L_0012f6b8:;
    {
        cpu->r[0] = rd32(0x0012f6c0u + + 0xb8u);
    }
L_0012f6bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f6c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0012f6c8u + + 0xa4u);
    }
L_0012f6c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0012f6c8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f6cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_0012f6d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0012f6d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0012f6d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_0012f6dc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0012f6e0:;
    {
        cpu->r[8] = 0x000011e8u;
    }
L_0012f6e4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0012f6e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0012f6ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012f6f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0012f6f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0012f6f8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012f6fc:;
    {
        cpu->r[14] = 0x0012f700u; fn_0015375c(cpu);
    }
L_0012f700:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0012f704:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012f708:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0012f70c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012f710:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012f714:;
    {
        cpu->r[14] = 0x0012f71cu;
    }
L_0012f718:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f71cu)) return;
    }
L_0012f71c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0012f720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012f724:;
    {
        cpu->r[14] = 0x0012f728u; fn_0012e264(cpu);
    }
L_0012f728:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012f72c:;
    {
        cpu->r[14] = 0x0012f730u; fn_00153600(cpu);
    }
L_0012f730:;
    {
        cpu->r[3] = rd32(0x0012f738u + + 0x44u);
    }
L_0012f734:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0012f738:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012f73c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f740:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012f744:;
    {
        cpu->r[14] = 0x0012f748u; fn_0009b31c(cpu);
    }
L_0012f748:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0012f74c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0012f750:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0012f754:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012f758:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012f75c:;
    {
        cpu->r[14] = 0x0012f764u;
    }
L_0012f760:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f764u)) return;
    }
L_0012f764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012f768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f76cu)) return;
    }
}

/* _ZN5Lib3D7Flush2DEv @ 0012f780 (arm) */
void fn_0012f780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012f780:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0012f784:;
    {
        cpu->r[3] = 0x000012f8u;
    }
L_0012f788:;
    {
        cpu->r[6] = 0x000012ccu;
    }
L_0012f78c:;
    {
        cpu->r[5] = rd32(0x0012f794u + + 0x28cu);
    }
L_0012f790:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0012f794:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012f798:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0012f79c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0012f7a4u, cpu->r[5], 0, 0);
    }
L_0012f7a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012f7a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0012f7a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012f7ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f7b8;
        }
    }
L_0012f7b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012f7b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f7b8u)) return;
    }
L_0012f7b8:;
    {
        cpu->r[7] = rd32(0x0012f7c0u + + 0x264u);
    }
L_0012f7bc:;
    {
        cpu->r[14] = 0x0012f7c0u; fn_0012f66c(cpu);
    }
L_0012f7c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012f7c4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012f7c8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0012f7cc:;
    {
        cpu->r[14] = 0x0012f7d0u; fn_0012e1c8(cpu);
    }
L_0012f7d0:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_0012f7d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f7d8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0012f7dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f7e0:;
    {
        cpu->r[1] = 0x00001402u;
    }
L_0012f7e4:;
    {
        cpu->r[14] = 0x0012f7e8u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0012f7e8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0012f7ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012f7f0:;
    {
        cpu->r[14] = 0x0012f7f4u; fn_0012e19c(cpu);
    }
L_0012f7f4:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_0012f7f8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012f7fc:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_0012f800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f804:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f808:;
    {
        cpu->r[14] = 0x0012f80cu; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_0012f80c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0012f810:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f814:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0012f818:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012f81c:;
    {
        cpu->r[14] = 0x0012f824u;
    }
L_0012f820:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012f824u)) return;
    }
L_0012f824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012f828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012f82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f8dc;
        }
    }
L_0012f830:;
    {
        cpu->r[3] = 0x000012ecu;
    }
L_0012f834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f838:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012f83c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000012c0u, 0, 0);
        }
    }
L_0012f840:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0012f844:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
        }
    }
L_0012f848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f9a8;
        }
    }
L_0012f84c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012f850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f9e4;
        }
    }
L_0012f854:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0012f858:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f85c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f860:;
    {
        cpu->r[14] = 0x0012f864u; fn_0012f12c(cpu);
    }
L_0012f864:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012f868:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012f86c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012f870:;
    {
        cpu->r[14] = 0x0012f874u; fn_0012e150(cpu);
    }
L_0012f874:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_0012f878:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0012f87c:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0012f880:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f884:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f888:;
    {
        cpu->r[14] = 0x0012f88cu; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0012f88c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_0012f890:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f894:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012f898:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012f89c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f8a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000cu;
        }
    }
L_0012f8a4:;
    {
        cpu->r[14] = 0x0012f8a8u; fn_0014814c(cpu);
    }
L_0012f8a8:;
    {
        cpu->r[6] = 0x000012ccu;
    }
L_0012f8ac:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012f8b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f8b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012f8b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0012f8bc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0012f8c0:;
    {
        cpu->r[14] = 0x0012f8c4u; imp_glDrawArrays(cpu); /* glDrawArrays */
    }
L_0012f8c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012f8c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f8cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012f8d0:;
    {
        cpu->r[14] = 0x0012f8d4u; fn_0012e150(cpu);
    }
L_0012f8d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012f8d8:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012f8dc:;
    {
        cpu->r[6] = 0x000012f8u;
    }
L_0012f8e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012f8e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012f8e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012f908;
        }
    }
L_0012f8ec:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012f8f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f8f4:;
    {
        cpu->r[14] = 0x0012f8f8u; fn_00147ccc(cpu);
    }
L_0012f8f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f8fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0012f900:;
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
L_0012f904:;
    {
        return fn_0012ea40(cpu);
    }
L_0012f908:;
    {
        cpu->r[3] = 0x000012f0u;
    }
L_0012f90c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0012f910:;
    {
        cpu->r[1] = 0x00001402u;
    }
L_0012f914:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f91c:;
    {
        cpu->r[14] = 0x0012f920u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0012f920:;
    {
        cpu->r[3] = 0x000012f4u;
    }
L_0012f924:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012f928:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_0012f92c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f930:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0012f934:;
    {
        cpu->r[14] = 0x0012f938u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_0012f938:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f93c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f940:;
    {
        cpu->r[14] = 0x0012f944u; fn_0012e230(cpu);
    }
L_0012f944:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012f948:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f94c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012f950:;
    {
        cpu->r[14] = 0x0012f954u; fn_0012e150(cpu);
    }
L_0012f954:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_0012f958:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f95c:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012f960:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012f964:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f968:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000bu;
        }
    }
L_0012f96c:;
    {
        cpu->r[14] = 0x0012f970u; fn_0014814c(cpu);
    }
L_0012f970:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012f974:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0012f978:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f97c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0012f980:;
    {
        cpu->r[14] = 0x0012f984u; imp_glDrawArrays(cpu); /* glDrawArrays */
    }
L_0012f984:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012f988:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f98c:;
    {
        cpu->r[14] = 0x0012f990u; fn_0012e19c(cpu);
    }
L_0012f990:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0012f994:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f998:;
    {
        cpu->r[14] = 0x0012f99cu; fn_0012e1c8(cpu);
    }
L_0012f99c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012f9a0:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0012f9a4:;
    {
        goto L_0012f8ec;
    }
L_0012f9a8:;
    {
        cpu->r[3] = 0x000012d0u;
    }
L_0012f9ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012f9b0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0012f9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012f9e4;
        }
    }
L_0012f9b8:;
    {
        cpu->r[0] = rd32(0x0012f9c0u + + 0x68u);
    }
L_0012f9bc:;
    {
        cpu->r[2] = 0x000012fcu;
    }
L_0012f9c0:;
    {
        cpu->r[1] = (cpu->r[3] >> 8) & 0xffffu;
    }
L_0012f9c4:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_0012f9c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0012f9cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0012f9d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0012f9d4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012f9d8:;
    {
        cpu->r[14] = 0x0012f9dcu; fn_00135cf4(cpu);
    }
L_0012f9dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012f9e0:;
    {
        goto L_0012f84c;
    }
L_0012f9e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012f9e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f9ec:;
    {
        cpu->r[14] = 0x0012f9f0u; fn_0012e230(cpu);
    }
L_0012f9f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0012f9f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012f9f8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012f9fc:;
    {
        cpu->r[14] = 0x0012fa00u; fn_0012e150(cpu);
    }
L_0012fa00:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_0012fa04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012fa08:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0012fa0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012fa10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012fa14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000bu;
        }
    }
L_0012fa18:;
    {
        cpu->r[14] = 0x0012fa1cu; fn_0014814c(cpu);
    }
L_0012fa1c:;
    {
        goto L_0012f8a8;
    }
}

/* _ZN5Lib3D7SetClipEiiii @ 0012fa2c (arm) */
void fn_0012fa2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012fa2c:;
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
L_0012fa30:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012fa34:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012fa38:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0012fa3c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0012fa40:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0012fa44:;
    {
        cpu->r[14] = 0x0012fa48u; fn_0012f780(cpu);
    }
L_0012fa48:;
    {
        cpu->r[4] = rd32(0x0012fa50u + + 0x48u);
    }
L_0012fa4c:;
    {
        cpu->r[3] = rd32(0x0012fa54u + + 0x48u);
    }
L_0012fa50:;
    {
        cpu->r[2] = 0x00001300u;
    }
L_0012fa54:;
    {
        cpu->r[4] = add_flags(cpu, 0x0012fa5cu, cpu->r[4], 0, 0);
    }
L_0012fa58:;
    {
        cpu->r[1] = 0x00001304u;
    }
L_0012fa5c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[10]);
    }
L_0012fa60:;
    {
        cpu->r[2] = 0x0000130cu;
    }
L_0012fa64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012fa68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012fa6c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0012fa70:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012fa74:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0012fa78:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0012fa7c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[8]);
    }
L_0012fa80:;
    {
        cpu->r[1] = 0x00001308u;
    }
L_0012fa84:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_0012fa88:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[7]);
    }
L_0012fa8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_0012fa90:;
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
L_0012fa94:;
    {
        imp_glScissor(cpu); /* tail glScissor */ return;
    }
}

/* _ZN5Lib3D6InitGXEv @ 0012faa0 (arm) */
void fn_0012faa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012faa0:;
    {
        cpu->r[3] = rd32(0x0012faa8u + + 0x78u);
    }
L_0012faa4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012faa8:;
    {
        cpu->r[12] = rd32(0x0012fab0u + + 0x74u);
    }
L_0012faac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012fab0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012fab8u, cpu->r[3], 0, 0);
    }
L_0012fab4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0012fab8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012fabc:;
    {
        cpu->r[12] = rd32(0x0012fac4u + + 0x64u);
    }
L_0012fac0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0012fac4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012fac8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0012facc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012fad0:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0012fad4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012fad8:;
    {
        cpu->r[14] = 0x0012fadcu; fn_0012ed70(cpu);
    }
L_0012fadc:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0012fae0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012fae4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012fae8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012faec:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012faf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012faf4:;
    {
        cpu->r[14] = 0x0012faf8u; fn_0012fa2c(cpu);
    }
L_0012faf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012fafc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012fb00:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0012fb04:;
    {
        wr8(cpu->r[13] + + 0xfu, cpu->r[3]);
    }
L_0012fb08:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0012fb0c:;
    {
        wr8(cpu->r[13] + + 0xdu, cpu->r[3]);
    }
L_0012fb10:;
    {
        wr8(cpu->r[13] + + 0xeu, cpu->r[3]);
    }
L_0012fb14:;
    {
        cpu->r[14] = 0x0012fb18u; fn_0012e3f4(cpu);
    }
L_0012fb18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0012fb1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012fb20u)) return;
    }
}

/* _ZN5Lib3D19paint2DModuleCoordsEPsiPf @ 0012fb2c (arm) */
void fn_0012fb2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012fb2c:;
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
L_0012fb30:;
    {
        cpu->r[4] = 0x000012ccu;
    }
L_0012fb34:;
    {
        cpu->r[5] = 0x000012dcu;
    }
L_0012fb38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_0012fb3c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012fb40:;
    {
        cpu->r[4] = 0x000012d8u;
    }
L_0012fb44:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0012fb48:;
    {
        cpu->r[2] = (~shifter(cpu->r[2], 1, 16u, &shc));
    }
L_0012fb4c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012fb50:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0012fb54:;
    {
        cpu->r[11] = rd16(cpu->r[1]);
    }
L_0012fb58:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0012fb5c:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_0012fb60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0012fb64:;
    {
        cpu->r[4] = 0x000012d4u;
    }
L_0012fb68:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012fb6c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0012fb70:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012fb74:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_0012fb78:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012fb7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], cpu->r[8], 0, 0);
    }
L_0012fb80:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fb84:;
    {
        wr16(cpu->r[4] + cpu->r[8], cpu->r[11]);
    }
L_0012fb88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_0012fb8c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_0012fb90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0012fb94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0012fb98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_0012fb9c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0012fba0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_0012fba4:;
    {
        cpu->r[11] = rd16(cpu->r[1] + + 0x2u);
    }
L_0012fba8:;
    {
        wr16(cpu->r[7] + + 0x2u, cpu->r[11]);
    }
L_0012fbac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012fbb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0012fbb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0012fbb8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012fbbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0012fbc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fbc4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_0012fbc8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012fbcc:;
    {
        wr8(cpu->r[11] + shifter(cpu->r[6], 2, 3u, &shc), cpu->r[5]);
    }
L_0012fbd0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012fbd4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fbd8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0012fbdc:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[5]);
    }
L_0012fbe0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fbe4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fbe8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[10]);
    }
L_0012fbec:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[5]);
    }
L_0012fbf0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_0012fbf4:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[2]);
    }
L_0012fbf8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fbfc:;
    {
        cpu->r[9] = rd16(cpu->r[1] + + 0x4u);
    }
L_0012fc00:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_0012fc04:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[9]);
    }
L_0012fc08:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0012fc0c:;
    {
        cpu->r[11] = rd16(cpu->r[1] + + 0x6u);
    }
L_0012fc10:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0012fc14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fc18:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_0012fc1c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_0012fc20:;
    {
        wr16(cpu->r[7] + + 0x2u, cpu->r[11]);
    }
L_0012fc24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0012fc28:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0012fc2c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012fc30:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012fc34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fc38:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0012fc3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fc40:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0012fc44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fc48:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0012fc4c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fc50:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0012fc54:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012fc58:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0012fc5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012fc60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0012fc64:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[6], 2, 4u, &shc), cpu->r[10]);
    }
L_0012fc68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0012fc6c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012fc70:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012fc74:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012fc78:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fc7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fc80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_0012fc84:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[5]);
    }
L_0012fc88:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0012fc8c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012fc90:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[5]);
    }
L_0012fc94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_0012fc98:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012fc9c:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[5]);
    }
L_0012fca0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012fca4:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_0012fca8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0012fcac:;
    {
        cpu->r[11] = rd16(cpu->r[1] + + 0x8u);
    }
L_0012fcb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fcb4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012fcb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0012fcbc:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fcc0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012fcc4:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[11]);
    }
L_0012fcc8:;
    {
        cpu->r[8] = rd16(cpu->r[1] + + 0xau);
    }
L_0012fccc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012fcd0:;
    {
        wr16(cpu->r[7] + + 0x2u, cpu->r[8]);
    }
L_0012fcd4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fcd8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0012fcdc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fce0:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[5]);
    }
L_0012fce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0012fce8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012fcec:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[5]);
    }
L_0012fcf0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012fcf4:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[5]);
    }
L_0012fcf8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_0012fcfc:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[2]);
    }
L_0012fd00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_0012fd04:;
    {
        cpu->r[7] = rd16(cpu->r[1] + + 0xcu);
    }
L_0012fd08:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fd0c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012fd10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_0012fd14:;
    {
        wr16(cpu->r[6] + + 0x2u, cpu->r[7]);
    }
L_0012fd18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0012fd1c:;
    {
        cpu->r[8] = rd16(cpu->r[1] + + 0xeu);
    }
L_0012fd20:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[8]);
    }
L_0012fd24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012fd28:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fd2c:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[5]);
    }
L_0012fd30:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012fd34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0012fd38:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012fd3c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012fd40:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[5]);
    }
L_0012fd44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0012fd48:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0012fd4c:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[5]);
    }
L_0012fd50:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012fd54:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[2]);
    }
L_0012fd58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_0012fd5c:;
    {
        cpu->r[11] = rd16(cpu->r[1]);
    }
L_0012fd60:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fd64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012fd68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_0012fd6c:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fd70:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012fd74:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[11]);
    }
L_0012fd78:;
    {
        cpu->r[4] = rd16(cpu->r[1] + + 0x2u);
    }
L_0012fd7c:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[4]);
    }
L_0012fd80:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012fd84:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[5]);
    }
L_0012fd88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fd8c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012fd90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0012fd94:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[5]);
    }
L_0012fd98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0012fd9c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012fda0:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[5]);
    }
L_0012fda4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012fda8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_0012fdac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0012fdb0:;
    {
        cpu->r[11] = rd16(cpu->r[1] + + 0x8u);
    }
L_0012fdb4:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fdb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0012fdbc:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fdc0:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[11]);
    }
L_0012fdc4:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0xau);
    }
L_0012fdc8:;
    {
        wr16(cpu->r[10] + + 0x4u, cpu->r[1]);
    }
L_0012fdcc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012fdd0:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[5]);
    }
L_0012fdd4:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[5]);
    }
L_0012fdd8:;
    {
        wr8(cpu->r[4] + + 0x2u, cpu->r[2]);
    }
L_0012fddc:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[5]);
    }
L_0012fde0:;
    {
        cpu->r[4] = 0x000012ccu;
    }
L_0012fde4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_0012fde8:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fdec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012fdf0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_0012fdf4:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012fdf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012fdfc:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0012fe00:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_0012fe04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0012fe14;
        }
    }
L_0012fe08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0012fe0c:;
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
L_0012fe10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0012fe14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0012fe18:;
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
L_0012fe1c:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D13paint2DModuleEiiiiiPfi @ 0012fe20 (arm) */
void fn_0012fe20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012fe20:;
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
L_0012fe24:;
    {
        cpu->r[6] = 0x000012d8u;
    }
L_0012fe28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b0u, 1, 0);
    }
L_0012fe2c:;
    {
        cpu->r[4] = 0x000012ccu;
    }
L_0012fe30:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0012fe34:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0012fe38:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0012fe3c:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_0012fe40:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[6]);
    }
L_0012fe44:;
    {
        cpu->r[6] = 0x000012d4u;
    }
L_0012fe48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0012fe4c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0012fe50:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0012fe54:;
    {
        cpu->r[6] = 0x000012dcu;
    }
L_0012fe58:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[3] = v;
    }
L_0012fe5c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0012fe60:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0012fe64:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0012fe68:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[10]);
    }
L_0012fe6c:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[6]);
    }
L_0012fe70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_0012fe74:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[6]);
    }
L_0012fe78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012fe7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0012fe80:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[10]);
    }
L_0012fe84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012fe88:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[10]);
    }
L_0012fe8c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012fe90:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[10]);
    }
L_0012fe94:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0012fe98:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[6]);
    }
L_0012fe9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fea0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012fea4:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0012fea8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x78u);
    }
L_0012feac:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[6]);
    }
L_0012feb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012feb4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012feb8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[10]);
    }
L_0012febc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x80u);
    }
L_0012fec0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_0012fec4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fec8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012fecc:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[10]);
    }
L_0012fed0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x74u);
    }
L_0012fed4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[6]);
    }
L_0012fed8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fedc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012fee0:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[6]);
    }
L_0012fee4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[10]);
    }
L_0012fee8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012feec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0012fef0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[6]);
    }
L_0012fef4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fef8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012fefc:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[6]);
    }
L_0012ff00:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[10]);
    }
L_0012ff04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff08:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_0012ff0c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[6]);
    }
L_0012ff10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff14:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0012ff18:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[6]);
    }
L_0012ff1c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_0012ff20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff24:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x60u);
    }
L_0012ff28:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[6]);
    }
L_0012ff2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff30:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0012ff34:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[6]);
    }
L_0012ff38:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[10]);
    }
L_0012ff3c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff40:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x54u);
    }
L_0012ff44:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[10]);
    }
L_0012ff48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012ff4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0012ff50:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_0012ff54:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0012ff58:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[10]);
    }
L_0012ff5c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0012ff60:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_0012ff64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0012ff68:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_0012ff6c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0012ff70:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xdcu);
    }
L_0012ff74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff78:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_0012ff7c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x38u);
    }
L_0012ff80:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd6u);
    }
L_0012ff84:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0012ff88:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
    }
L_0012ff8c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012ff90:;
    {
        cpu->r[7] = (~cpu->r[7]);
    }
L_0012ff94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ff98:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[6]);
    }
L_0012ff9c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_0012ffa0:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_0012ffa4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0012ffa8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_0012ffac:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012ffb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ffb4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_0012ffb8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ffbc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_0012ffc0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xd0u);
    }
L_0012ffc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0012ffc8:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[6]);
    }
L_0012ffcc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0012ffd0:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0012ffd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012ffd8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_0012ffdc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_0012ffe0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0012ffe4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_0012ffe8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012ffec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0012fff0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0012fff4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012fff8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0012fffc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_00130000:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_00130004:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_00130008:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0013000c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00130010:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130014:;
    {
        wr16(cpu->r[11] + cpu->r[3], cpu->r[9]);
    }
L_00130018:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xacu);
    }
L_0013001c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00130020:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_00130024:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd8u);
    }
L_00130028:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_0013002c:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[2]);
    }
L_00130030:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00130034:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[11]);
    }
L_00130038:;
    {
        cpu->r[8] = (cpu->r[10] >> 16) & 0xffu;
    }
L_0013003c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_00130040:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[10]);
    }
L_00130044:;
    {
        wr8(cpu->r[1] + shifter(cpu->r[5], 2, 3u, &shc), cpu->r[8]);
    }
L_00130048:;
    {
        cpu->r[1] = (cpu->r[10] >> 8) & 0xffu;
    }
L_0013004c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00130050:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[1]);
    }
L_00130054:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x90u);
    }
L_00130058:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013005c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00130060:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[11]);
    }
L_00130064:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[6]);
    }
L_00130068:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0013006c:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[7]);
    }
L_00130070:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00130074:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00130078:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013007c:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[5], 2, 4u, &shc), cpu->r[10]);
    }
L_00130080:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00130084:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_00130088:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x98u);
    }
L_0013008c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00130090:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130094:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x94u);
    }
L_00130098:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[10]);
    }
L_0013009c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001300a0:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[2]);
    }
L_001300a4:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[8]);
    }
L_001300a8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x84u);
    }
L_001300ac:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[1]);
    }
L_001300b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x70u);
    }
L_001300b4:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[6]);
    }
L_001300b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001300bc:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[7]);
    }
L_001300c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001300c4:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_001300c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x78u);
    }
L_001300cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x80u);
    }
L_001300d0:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001300d4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xacu);
    }
L_001300d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001300dc:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[5]);
    }
L_001300e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x74u);
    }
L_001300e4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001300e8:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001300ec:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[11]);
    }
L_001300f0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x68u);
    }
L_001300f4:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[8]);
    }
L_001300f8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x64u);
    }
L_001300fc:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[1]);
    }
L_00130100:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x50u);
    }
L_00130104:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[6]);
    }
L_00130108:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0013010c:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[7]);
    }
L_00130110:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00130114:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_00130118:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013011c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_00130120:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00130124:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xacu);
    }
L_00130128:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_0013012c:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[9]);
    }
L_00130130:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00130134:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[11]);
    }
L_00130138:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013013c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_00130140:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[8]);
    }
L_00130144:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_00130148:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[1]);
    }
L_0013014c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_00130150:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[6]);
    }
L_00130154:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00130158:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[7]);
    }
L_0013015c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_00130160:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x38u);
    }
L_00130164:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00130168:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013016c:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130170:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[9]);
    }
L_00130174:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_00130178:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013017c:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[2]);
    }
L_00130180:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00130184:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130188:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[8]);
    }
L_0013018c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_00130190:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[1]);
    }
L_00130194:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00130198:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[6]);
    }
L_0013019c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001301a0:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[7]);
    }
L_001301a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001301a8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xacu);
    }
L_001301ac:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001301b0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001301b4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_001301b8:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001301bc:;
    {
        wr16(cpu->r[10] + + 0x4u, cpu->r[5]);
    }
L_001301c0:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[2]);
    }
L_001301c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001301c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_001301cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001301d0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001301d4:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[8]);
    }
L_001301d8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_001301dc:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[1]);
    }
L_001301e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001301e4:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[7]);
    }
L_001301e8:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[6]);
    }
L_001301ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001301f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa0u);
    }
L_001301f4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001301f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001301fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_00130200:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130208:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0013020c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_00130210:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00130220;
        }
    }
L_00130214:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_00130218:;
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
L_0013021c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00130220:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_00130224:;
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
L_00130228:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D12Set2DTextureEiii @ 0013022c (arm) */
void fn_0013022c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013022c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00130230:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00130234:;
    {
        cpu->r[3] = 0x000012d0u;
    }
L_00130238:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[5] = v;
    }
L_0013023c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00130240:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00130244:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00130248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00130250;
        }
    }
L_0013024c:;
    {
        cpu->r[14] = 0x00130250u; fn_0012f780(cpu);
    }
L_00130250:;
    {
        cpu->r[3] = 0x000012d0u;
    }
L_00130254:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00130258:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0013025c:;
    {
        cpu->r[3] = 0x000012fcu;
    }
L_00130260:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00130264:;
    {
        cpu->r[3] = 0x000012ecu;
    }
L_00130268:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0013026c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00130270u)) return;
    }
}

/* _ZN5Lib3D12Set2DTextureEP7Texture @ 00130270 (arm) */
void fn_00130270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130270:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00130274:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00130278:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013027c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00130284;
        }
    }
L_00130280:;
    {
        cpu->r[14] = 0x00130284u; fn_0012f780(cpu);
    }
L_00130284:;
    {
        cpu->r[3] = 0x000012ecu;
    }
L_00130288:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0013028c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00130290:;
    {
        cpu->r[3] = 0x000012d0u;
    }
L_00130294:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00130298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013029cu)) return;
    }
}

/* _ZN5Lib3D11DrawTextureEP7Textureiiiiiiiiiii @ 0013029c (arm) */
void fn_0013029c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013029c:;
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
L_001302a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001302a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001302a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001302ac:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001302b0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x60u);
    }
L_001302b4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001302b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x70u);
    }
L_001302bc:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001302c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001302c4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001302c8:;
    {
        cpu->r[14] = 0x001302ccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001302cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_001302d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001302d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_001302d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001302dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001302e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001302e4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001302e8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001302ec:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001302f0:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_001302f4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001302f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001302fc:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00130300:;
    {
        cpu->r[14] = 0x00130304u; fn_00130270(cpu);
    }
L_00130304:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00130308:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[10];
    }
L_0013030c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00130310:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00130314:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_00130318:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0013031c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00130320:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00130324:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_00130328:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013032c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_00130330:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_00130334:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00130338:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0013033c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00130340:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_00130344:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00130348:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0013034c:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00130350:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[7]);
        cpu->r[12] = wb_tmp;
    }
L_00130354:;
    {
        cpu->r[14] = (uint32_t)((uint16_t)cpu->r[14]);
    }
L_00130358:;
    {
        wr32(cpu->r[12], cpu->r[7]);
    }
L_0013035c:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_00130360:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00130364:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_00130368:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_0013036c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00130370:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[5]);
    }
L_00130374:;
    {
        wr16(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_00130378:;
    {
        wr16(cpu->r[13] + + 0x2eu, cpu->r[8]);
    }
L_0013037c:;
    {
        wr16(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_00130380:;
    {
        wr16(cpu->r[13] + + 0x22u, cpu->r[5]);
    }
L_00130384:;
    {
        wr16(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_00130388:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[8]);
    }
L_0013038c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00130390:;
    {
        vfp_vsub(cpu, 16, 16, 16);
    }
L_00130394:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_00130398:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0013039c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001303a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001303a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001303a8:;
    {
        cpu->r[14] = 0x001303acu; fn_0012fb2c(cpu);
    }
L_001303ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001303b0:;
    {
        cpu->r[14] = 0x001303b4u; fn_0012f780(cpu);
    }
L_001303b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001303b8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001303bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001303c0u)) return;
    }
}

/* _ZN5Lib3D10draw2DLineEiiii @ 001303c0 (arm) */
void fn_001303c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001303c0:;
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
L_001303c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001303c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001303cc:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001303d0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_001303d4:;
    {
        cpu->r[1] = (~0xff000000u);
    }
L_001303d8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001303dc:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_001303e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001303e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001303e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001303ec:;
    {
        cpu->r[14] = 0x001303f0u; fn_0013022c(cpu);
    }
L_001303f0:;
    {
        cpu->r[2] = 0x000012f8u;
    }
L_001303f4:;
    {
        cpu->r[3] = 0x000012f4u;
    }
L_001303f8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001303fc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00130400:;
    {
        cpu->r[3] = 0x000012f0u;
    }
L_00130404:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 3u, &shc); cpu->r[1] = v;
    }
L_00130408:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013040c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_00130410:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_00130414:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00130418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0013041c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00130420:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130424:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00130428:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_0013042c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00130430:;
    {
        wr16(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_00130434:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00130438:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[11]);
    }
L_0013043c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00130440:;
    {
        cpu->r[11] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_00130444:;
    {
        cpu->r[5] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00130448:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013044c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00130450:;
    {
        wr8(cpu->r[9] + shifter(cpu->r[8], 2, 3u, &shc), cpu->r[5]);
    }
L_00130454:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[1] = v;
    }
L_00130458:;
    {
        cpu->r[3] = (cpu->r[3] >> 8) & 0xffu;
    }
L_0013045c:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[3]);
    }
L_00130460:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_00130464:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[11]);
    }
L_00130468:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[1]);
    }
L_0013046c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_00130470:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00130474:;
    {
        wr16(cpu->r[6] + + 0x4u, cpu->r[10]);
    }
L_00130478:;
    {
        wr16(cpu->r[6] + + 0x2u, cpu->r[7]);
    }
L_0013047c:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[5]);
    }
L_00130480:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[3]);
    }
L_00130484:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00130488:;
    {
        wr8(cpu->r[8] + + 0x2u, cpu->r[1]);
    }
L_0013048c:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[11]);
    }
L_00130490:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00130494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130498:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0013049c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001304a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001304ac;
        }
    }
L_001304a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001304a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001304acu)) return;
    }
L_001304ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001304b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001304b4:;
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
L_001304b8:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D10draw2DRectEiiii @ 001304bc (arm) */
void fn_001304bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001304bc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001304c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001304c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001304c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001304cc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_001304d0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001304d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001304d8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001304dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001304e0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001304e4:;
    {
        cpu->r[14] = 0x001304e8u; fn_001303c0(cpu);
    }
L_001304e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001304ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001304f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001304f4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001304f8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001304fc:;
    {
        cpu->r[14] = 0x00130500u; fn_001303c0(cpu);
    }
L_00130500:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00130504:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00130508:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0013050c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00130510:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00130514:;
    {
        cpu->r[14] = 0x00130518u; fn_001303c0(cpu);
    }
L_00130518:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013051c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00130520:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00130524:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00130528:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0013052c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00130530:;
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
L_00130534:;
    {
        return fn_001303c0(cpu);
    }
}

/* _ZN5Lib3D10fill2DQuadEiiiiiiii @ 00130538 (arm) */
void fn_00130538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130538:;
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
L_0013053c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_00130540:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00130544:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_00130548:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xd8u);
    }
L_0013054c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00130550:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xe4u);
    }
L_00130554:;
    {
        cpu->r[7] = 0x000012ccu;
    }
L_00130558:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0013055c:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_00130560:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00130564:;
    {
        cpu->r[1] = (~0xff000000u);
    }
L_00130568:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_0013056c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00130570:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[6]);
    }
L_00130574:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xdcu);
    }
L_00130578:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0013057c:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[11]);
    }
L_00130580:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[12]);
    }
L_00130584:;
    {
        cpu->r[14] = 0x00130588u; fn_0013022c(cpu);
    }
L_00130588:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_0013058c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00130590:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_00130594:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[5]);
    }
L_00130598:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013059c:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_001305a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001305a4:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_001305a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001305ac:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_001305b0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[5] = v;
    }
L_001305b4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[6]);
    }
L_001305b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001305bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001305c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001305c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_001305c8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001305cc:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[8]);
    }
L_001305d0:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_001305d4:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_001305d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001305dc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[6]);
    }
L_001305e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001305e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001305ecu + + 0x318u);
    }
L_001305e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001305ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_001305f0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_001305f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_001305f8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_001305fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00130600:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_00130604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00130608:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_0013060c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_00130610:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130614:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[6]);
    }
L_00130618:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013061c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00130620:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00130624:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00130628:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[6]);
    }
L_0013062c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00130634:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00130638:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_0013063c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[6]);
    }
L_00130640:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00130648:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0013064c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00130650:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[6]);
    }
L_00130654:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0013065c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[6]);
    }
L_00130660:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00130664:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130668:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_0013066c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[6]);
    }
L_00130670:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00130678:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[6]);
    }
L_0013067c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_00130680:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130684:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_00130688:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_0013068c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130690:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00130694:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00130698:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_0013069c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306a0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_001306a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306a8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[6]);
    }
L_001306ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306b0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_001306b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306b8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_001306bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_001306c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001306cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001306d4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_001306d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_001306dc:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_001306e0:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[6]);
    }
L_001306e4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_001306e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001306ec:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_001306f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001306f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001306f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001306fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00130700:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00130704:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x98u);
    }
L_00130708:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0013070c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00130710:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_00130714:;
    {
        wr16(cpu->r[1] + cpu->r[5], cpu->r[6]);
    }
L_00130718:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013071c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00130720:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00130724:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00130728:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013072c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x94u);
    }
L_00130730:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00130734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00130738:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0013073c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_00130740:;
    {
        wr16(cpu->r[2] + + 0x2u, cpu->r[1]);
    }
L_00130744:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00130748:;
    {
        cpu->r[1] = (cpu->r[12] >> 16) & 0xffu;
    }
L_0013074c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00130750:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00130754:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00130758:;
    {
        wr8(cpu->r[11] + shifter(cpu->r[0], 2, 3u, &shc), cpu->r[1]);
    }
L_0013075c:;
    {
        cpu->r[12] = (cpu->r[12] >> 8) & 0xffu;
    }
L_00130760:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[12]);
    }
L_00130764:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00130768:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[3]);
    }
L_0013076c:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[2]);
    }
L_00130770:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00130774:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00130778:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013077c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00130780:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[0], 2, 4u, &shc), cpu->r[8]);
    }
L_00130784:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00130788:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x84u);
    }
L_0013078c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00130790:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130794:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00130798:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[8]);
    }
L_0013079c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_001307a0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001307a4:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[0]);
    }
L_001307a8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[1]);
    }
L_001307ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001307b0:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_001307b4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x64u);
    }
L_001307b8:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[3]);
    }
L_001307bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x60u);
    }
L_001307c0:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_001307c4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x90u);
    }
L_001307c8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001307cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_001307d0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001307d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001307d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001307dc:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[8]);
    }
L_001307e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001307e4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001307e8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x68u);
    }
L_001307ec:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[8]);
    }
L_001307f0:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[1]);
    }
L_001307f4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_001307f8:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[12]);
    }
L_001307fc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_00130800:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[3]);
    }
L_00130804:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_00130808:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[2]);
    }
L_0013080c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00130810:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00130814:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00130818:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013081c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_00130820:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130824:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[11]);
    }
L_00130828:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013082c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xacu);
    }
L_00130830:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_00130834:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[11]);
    }
L_00130838:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[1]);
    }
L_0013083c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_00130840:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[12]);
    }
L_00130844:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00130848:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[3]);
    }
L_0013084c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_00130850:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[2]);
    }
L_00130854:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x98u);
    }
L_00130858:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013085c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00130860:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130864:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_00130868:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013086c:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[0]);
    }
L_00130870:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00130874:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_00130878:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013087c:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[0]);
    }
L_00130880:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[1]);
    }
L_00130884:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00130888:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_0013088c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00130890:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[3]);
    }
L_00130894:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00130898:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_0013089c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001308a0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_001308a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001308a8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001308ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_001308b0:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001308b4:;
    {
        wr16(cpu->r[11] + + 0x4u, cpu->r[8]);
    }
L_001308b8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_001308bc:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[0]);
    }
L_001308c0:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[1]);
    }
L_001308c4:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[12]);
    }
L_001308c8:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[2]);
    }
L_001308cc:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[3]);
    }
L_001308d0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001308d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001308d8:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001308dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001308e0:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_001308e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001308e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001308f4;
        }
    }
L_001308ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001308f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001308f4u)) return;
    }
L_001308f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001308f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001308fc:;
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
L_00130900:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D8fillRectEiiii @ 00130908 (arm) */
void fn_00130908(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130908:;
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
L_0013090c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_00130910:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00130914:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00130918:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0013091c:;
    {
        cpu->r[1] = (~0xff000000u);
    }
L_00130920:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_00130924:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00130928:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013092c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xd0u);
    }
L_00130930:;
    {
        cpu->r[14] = 0x00130934u; fn_0013022c(cpu);
    }
L_00130934:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_00130938:;
    {
        cpu->r[6] = 0x000012ccu;
    }
L_0013093c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00130940:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00130944:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_00130948:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0013094c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_00130950:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_00130954:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013095cu + + 0x360u);
    }
L_00130958:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_0013095c:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_00130960:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00130964:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00130968:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013096c:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_00130970:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00130974:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00130978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013097c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00130980:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00130984:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00130988:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[3]);
    }
L_0013098c:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_00130990:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00130994:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00130998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_0013099c:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_001309a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001309a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_001309a8:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[8]);
    }
L_001309ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001309b0:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[8]);
    }
L_001309b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001309b8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[8]);
    }
L_001309bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001309c0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[8]);
    }
L_001309c4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001309c8:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[3]);
    }
L_001309cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001309d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001309d4:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[8]);
    }
L_001309d8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x74u);
    }
L_001309dc:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_001309e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001309e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001309e8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[8]);
    }
L_001309ec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_001309f0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_001309f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001309f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001309fc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_00130a00:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[8]);
    }
L_00130a04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a08:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_00130a0c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_00130a10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00130a18:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_00130a1c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[8]);
    }
L_00130a20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a24:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00130a28:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_00130a2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00130a34:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00130a38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a3c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00130a40:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[8]);
    }
L_00130a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a48:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00130a4c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00130a50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a54:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00130a58:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[8]);
    }
L_00130a5c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x60u);
    }
L_00130a60:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00130a64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00130a6c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[8]);
    }
L_00130a70:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_00130a74:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00130a78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a7c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00130a80:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_00130a84:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00130a88:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00130a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130a90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00130a94:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[8]);
    }
L_00130a98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_00130a9c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00130aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130aa4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00130aa8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_00130aac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x40u);
    }
L_00130ab0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00130ab4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130ab8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00130abc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00130ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130ac4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00130ac8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[8]);
    }
L_00130acc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00130ad0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_00130ad4:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_00130ad8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_00130adc:;
    {
        wr16(cpu->r[2] + cpu->r[0], cpu->r[5]);
    }
L_00130ae0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00130ae4:;
    {
        wr16(cpu->r[9] + + 0x2u, cpu->r[10]);
    }
L_00130ae8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130aec:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00130af0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_00130af4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130af8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00130afc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130b00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00130b04:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00130b08:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00130b0c:;
    {
        cpu->r[0] = (cpu->r[1] >> 16) & 0xffu;
    }
L_00130b10:;
    {
        wr8(cpu->r[9] + shifter(cpu->r[12], 2, 3u, &shc), cpu->r[0]);
    }
L_00130b14:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_00130b18:;
    {
        cpu->r[9] = rd32(cpu->r[13]);
    }
L_00130b1c:;
    {
        cpu->r[1] = (cpu->r[1] >> 8) & 0xffu;
    }
L_00130b20:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_00130b24:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00130b28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00130b2c:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[1]);
    }
L_00130b30:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00130b34:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x90u);
    }
L_00130b38:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[11]);
    }
L_00130b3c:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[3]);
    }
L_00130b40:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00130b44:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00130b48:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_00130b4c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00130b50:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[12], 2, 4u, &shc), cpu->r[9]);
    }
L_00130b54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00130b58:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130b5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x98u);
    }
L_00130b60:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x94u);
    }
L_00130b64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_00130b68:;
    {
        wr16(cpu->r[9] + + 0x2u, cpu->r[7]);
    }
L_00130b6c:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[10]);
    }
L_00130b70:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[0]);
    }
L_00130b74:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x84u);
    }
L_00130b78:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[1]);
    }
L_00130b7c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x70u);
    }
L_00130b80:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[3]);
    }
L_00130b84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00130b88:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[2]);
    }
L_00130b8c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x78u);
    }
L_00130b90:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x80u);
    }
L_00130b94:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130b98:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x74u);
    }
L_00130b9c:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[7]);
    }
L_00130ba0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x68u);
    }
L_00130ba4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00130ba8:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130bac:;
    {
        wr16(cpu->r[9] + + 0x2u, cpu->r[8]);
    }
L_00130bb0:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[0]);
    }
L_00130bb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_00130bb8:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[1]);
    }
L_00130bbc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_00130bc0:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[3]);
    }
L_00130bc4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00130bc8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[2]);
    }
L_00130bcc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x58u);
    }
L_00130bd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
    }
L_00130bd4:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130bd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_00130bdc:;
    {
        wr16(cpu->r[9] + + 0x2u, cpu->r[5]);
    }
L_00130be0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_00130be4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00130be8:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130bec:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[8]);
    }
L_00130bf0:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[0]);
    }
L_00130bf4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_00130bf8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[1]);
    }
L_00130bfc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00130c00:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[3]);
    }
L_00130c04:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00130c08:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[2]);
    }
L_00130c0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00130c10:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_00130c14:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c18:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00130c1c:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[5]);
    }
L_00130c20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00130c24:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00130c28:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c2c:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[10]);
    }
L_00130c30:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[0]);
    }
L_00130c34:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00130c38:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[1]);
    }
L_00130c3c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_00130c40:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[3]);
    }
L_00130c44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00130c48:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[2]);
    }
L_00130c4c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00130c50:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_00130c54:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00130c5c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c60:;
    {
        wr16(cpu->r[11] + + 0x4u, cpu->r[8]);
    }
L_00130c64:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00130c68:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[7]);
    }
L_00130c6c:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[0]);
    }
L_00130c70:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_00130c74:;
    {
        wr8(cpu->r[9] + + 0x1u, cpu->r[1]);
    }
L_00130c78:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00130c7c:;
    {
        wr8(cpu->r[11] + + 0x2u, cpu->r[2]);
    }
L_00130c80:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[3]);
    }
L_00130c84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00130c88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00130c8c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00130c94:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00130c98:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_00130c9c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_00130ca0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00130cac;
        }
    }
L_00130ca4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_00130ca8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00130cacu)) return;
    }
L_00130cac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130cb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_00130cb4:;
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
L_00130cb8:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D12EndRenderingEv @ 00130cc0 (arm) */
void fn_00130cc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130cc0:;
    {
        cpu->r[3] = 0x000012ccu;
    }
L_00130cc4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00130cc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00130ccc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00130cd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00130cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00130cdc;
        }
    }
L_00130cd8:;
    {
        cpu->r[14] = 0x00130cdcu; fn_0012f780(cpu);
    }
L_00130cdc:;
    {
        cpu->r[5] = 0x000011e8u;
    }
L_00130ce0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00130ce4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130ce8:;
    {
        cpu->r[14] = 0x00130cecu; fn_0012e264(cpu);
    }
L_00130cec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00130cf0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00130cf4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00130cf8:;
    {
        cpu->r[14] = 0x00130d00u;
    }
L_00130cfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00130d00u)) return;
    }
L_00130d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130d04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00130d08:;
    {
        cpu->r[14] = 0x00130d0cu; fn_0012e264(cpu);
    }
L_00130d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00130d10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00130d14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00130d18:;
    {
        cpu->r[14] = 0x00130d20u;
    }
L_00130d1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00130d20u)) return;
    }
L_00130d20:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_00130d24:;
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
L_00130d28:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _Z11DrawTextureiiiiiiiiiiii @ 00130d2c (arm) */
void fn_00130d2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130d2c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00130d30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000090u, 1, 0);
    }
L_00130d34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00130d38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00130d3c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00130d40:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00130d44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130d48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00130d4c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00130d50:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00130d54:;
    {
        cpu->r[14] = 0x00130d58u; fn_0013368c(cpu);
    }
L_00130d58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130d5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00130d60:;
    {
        cpu->r[5] = rd32(0x00130d68u + + 0x74u);
    }
L_00130d64:;
    {
        cpu->r[14] = 0x00130d68u; fn_00133b78(cpu);
    }
L_00130d68:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00130d6c:;
    {
        cpu->r[0] = rd32(0x00130d74u + + 0x6cu);
    }
L_00130d70:;
    {
        cpu->r[5] = add_flags(cpu, 0x00130d78u, cpu->r[5], 0, 0);
    }
L_00130d74:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00130d78:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00130d7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00130d80:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00130d84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
    }
L_00130d88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00130d8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00130d90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00130d94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb0u);
    }
L_00130d98:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00130d9c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00130da0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb4u);
    }
L_00130da4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00130da8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb8u);
    }
L_00130dac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00130db0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00130db4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00130db8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc0u);
    }
L_00130dbc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00130dc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_00130dc4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00130dc8:;
    {
        cpu->r[14] = 0x00130dccu; fn_0013029c(cpu);
    }
L_00130dcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00130dd0:;
    {
        cpu->r[14] = 0x00130dd4u; fn_00135120(cpu);
    }
L_00130dd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_00130dd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00130ddcu)) return;
    }
}

/* _ZN5Lib3D13drawBillboardE7GXColorR8Vector3dffbfffff @ 00130de4 (arm) */
void fn_00130de4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00130de4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00130de8:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00130dec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a0u, 1, 0);
    }
L_00130df0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00130df8u + + 0x2b8u);
    }
L_00130df4:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[3];
    }
L_00130df8:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0xc0u);
    }
L_00130dfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00130e00:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_00130e04:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00130e08:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2]);
    }
L_00130e0c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00130e10:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x84u);
    }
L_00130e14:;
    {
        vfp_vsub(cpu, 12, 12, 6);
    }
L_00130e18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x48u);
    }
L_00130e1c:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00130e20:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[1] + + 0xc0u);
    }
L_00130e24:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0xc4u);
    }
L_00130e28:;
    {
        *vfp_s(cpu, 0) = *(float*)G(0x00130e30u + + 0x284u);
    }
L_00130e2c:;
    {
        cpu->r[4] = rd32(0x00130e34u + + 0x288u);
    }
L_00130e30:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0xc8u);
    }
L_00130e34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00130e38:;
    {
        cpu->r[6] = rd32(0x00130e40u + + 0x280u);
    }
L_00130e3c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00130e44u, cpu->r[4], 0, 0);
    }
L_00130e40:;
    {
        cpu->r[14] = rd8(cpu->r[13] + + 0x4u);
    }
L_00130e44:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x5u);
    }
L_00130e48:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0xccu);
    }
L_00130e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00130e50:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0xd4u);
    }
L_00130e54:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x6u);
    }
L_00130e58:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0xd0u);
    }
L_00130e5c:;
    {
        wr8(cpu->r[13] + + 0x84u, cpu->r[14]);
    }
L_00130e60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00130e64:;
    {
        vfp_vmul(cpu, 14, 12, 12);
    }
L_00130e68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00130e6c:;
    {
        wr8(cpu->r[13] + + 0x85u, cpu->r[12]);
    }
L_00130e70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00130e74:;
    {
        wr8(cpu->r[13] + + 0x88u, cpu->r[14]);
    }
L_00130e78:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00130e7c:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_00130e80:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x7u);
    }
L_00130e84:;
    {
        wr8(cpu->r[13] + + 0x89u, cpu->r[12]);
    }
L_00130e88:;
    {
        wr8(cpu->r[13] + + 0x86u, cpu->r[2]);
    }
L_00130e8c:;
    {
        wr8(cpu->r[13] + + 0x87u, cpu->r[3]);
    }
L_00130e90:;
    {
        wr8(cpu->r[13] + + 0x8au, cpu->r[2]);
    }
L_00130e94:;
    {
        wr8(cpu->r[13] + + 0x8bu, cpu->r[3]);
    }
L_00130e98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00130e9c:;
    {
        cpu->r[0] = rd32(0x00130ea4u + + 0x220u);
    }
L_00130ea0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00130ea4:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[14]);
    }
L_00130ea8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00130eac:;
    {
        vfp_vsub(cpu, 15, 15, 5);
    }
L_00130eb0:;
    {
        wr8(cpu->r[13] + + 0x8du, cpu->r[12]);
    }
L_00130eb4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00130eb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00130ebc:;
    {
        wr8(cpu->r[13] + + 0x90u, cpu->r[14]);
    }
L_00130ec0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00130ec4:;
    {
        wr8(cpu->r[13] + + 0x91u, cpu->r[12]);
    }
L_00130ec8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00130ecc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00130ed0:;
    {
        wr8(cpu->r[13] + + 0x8eu, cpu->r[2]);
    }
L_00130ed4:;
    {
        wr8(cpu->r[13] + + 0x8fu, cpu->r[3]);
    }
L_00130ed8:;
    {
        wr8(cpu->r[13] + + 0x92u, cpu->r[2]);
    }
L_00130edc:;
    {
        wr8(cpu->r[13] + + 0x93u, cpu->r[3]);
    }
L_00130ee0:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00130ee4:;
    {
        vfp_vsub(cpu, 4, 4, 3);
    }
L_00130ee8:;
    {
        vfp_vmla(cpu, 14, 4, 4);
    }
L_00130eec:;
    {
        vfp_vsqrt(cpu, 14, 14);
    }
L_00130ef0:;
    {
        vfp_vdiv(cpu, 13, 13, 14);
    }
L_00130ef4:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 2, 2, 14);
        }
    }
L_00130ef8:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 7, 7, 14);
        }
    }
L_00130efc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00130f04u + + 0x1b4u);
    }
L_00130f00:;
    {
        vfp_vmul(cpu, 1, 4, 13);
    }
L_00130f04:;
    {
        vfp_vmul(cpu, 4, 12, 13);
    }
L_00130f08:;
    {
        vfp_vmul(cpu, 12, 2, 14);
    }
L_00130f0c:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00130f10:;
    {
        vfp_vadd(cpu, 2, 2, 12);
    }
L_00130f14:;
    {
        vfp_vmul(cpu, 13, 4, 4);
    }
L_00130f18:;
    {
        vfp_vmul(cpu, 14, 7, 14);
    }
L_00130f1c:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,6);
    }
L_00130f20:;
    {
        vfp_vneg(cpu, 4, 4);
    }
L_00130f24:;
    {
        vfp_vmla(cpu, 17, 2, 15);
    }
L_00130f28:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,5);
    }
L_00130f2c:;
    {
        vfp_vmul(cpu, 18, 4, 1);
    }
L_00130f30:;
    {
        vfp_vnmul(cpu, 19, 15, 1);
    }
L_00130f34:;
    {
        vfp_vmla(cpu, 13, 15, 15);
    }
L_00130f38:;
    {
        vfp_vadd(cpu, 7, 7, 14);
    }
L_00130f3c:;
    {
        vfp_vmla(cpu, 16, 4, 2);
    }
L_00130f40:;
    {
        *vfp_s(cpu,1) = *vfp_s(cpu,3);
    }
L_00130f44:;
    {
        vfp_vmla(cpu, 5, 4, 12);
    }
L_00130f48:;
    {
        vfp_vmla(cpu, 6, 12, 15);
    }
L_00130f4c:;
    {
        vfp_vmul(cpu, 4, 19, 7);
    }
L_00130f50:;
    {
        vfp_vmul(cpu, 15, 18, 7);
    }
L_00130f54:;
    {
        vfp_vmla(cpu, 1, 2, 0);
    }
L_00130f58:;
    {
        *vfp_s(cpu,2) = *vfp_s(cpu,17);
    }
L_00130f5c:;
    {
        vfp_vmla(cpu, 3, 12, 0);
    }
L_00130f60:;
    {
        vfp_vmul(cpu, 17, 13, 7);
    }
L_00130f64:;
    {
        vfp_vmul(cpu, 0, 13, 14);
    }
L_00130f68:;
    {
        vfp_vmul(cpu, 13, 19, 14);
    }
L_00130f6c:;
    {
        vfp_vadd(cpu, 12, 15, 2);
    }
L_00130f70:;
    {
        vfp_vadd(cpu, 7, 4, 16);
    }
L_00130f74:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00130f78:;
    {
        vfp_vmul(cpu, 14, 18, 14);
    }
L_00130f7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00130f80:;
    {
        vfp_vadd(cpu, 12, 13, 5);
    }
L_00130f84:;
    {
        vfp_vadd(cpu, 7, 17, 1);
    }
L_00130f88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00130f8c:;
    {
        vfp_vadd(cpu, 2, 14, 2);
    }
L_00130f90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00130f94:;
    {
        vfp_vadd(cpu, 12, 0, 3);
    }
L_00130f98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 2);
    }
L_00130f9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 2);
    }
L_00130fa0:;
    {
        vfp_vadd(cpu, 7, 14, 6);
    }
L_00130fa4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00130fa8:;
    {
        vfp_vadd(cpu, 5, 4, 5);
    }
L_00130fac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00130fb0:;
    {
        vfp_vadd(cpu, 6, 15, 6);
    }
L_00130fb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00130fb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00130fbc:;
    {
        vfp_vadd(cpu, 3, 17, 3);
    }
L_00130fc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00130fc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00130fc8:;
    {
        vfp_vadd(cpu, 13, 13, 16);
    }
L_00130fcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00130fd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00130fd4:;
    {
        vfp_vadd(cpu, 14, 0, 1);
    }
L_00130fd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00130fdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00130fe0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00130fe4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00130fe8:;
    {
        wr8(cpu->r[13] + + 0x98u, cpu->r[14]);
    }
L_00130fec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00130ff0:;
    {
        wr8(cpu->r[13] + + 0x99u, cpu->r[12]);
    }
L_00130ff4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00130ff8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00130ffc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00131000:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[14]);
    }
L_00131004:;
    {
        wr8(cpu->r[13] + + 0x95u, cpu->r[12]);
    }
L_00131008:;
    {
        wr8(cpu->r[13] + + 0x9au, cpu->r[2]);
    }
L_0013100c:;
    {
        wr8(cpu->r[13] + + 0x9bu, cpu->r[3]);
    }
L_00131010:;
    {
        wr8(cpu->r[13] + + 0x96u, cpu->r[2]);
    }
L_00131014:;
    {
        wr8(cpu->r[13] + + 0x97u, cpu->r[3]);
    }
L_00131018:;
    {
        cpu->r[14] = 0x0013101cu; fn_0012e124(cpu);
    }
L_0013101c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00131020:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00131024:;
    {
        cpu->r[14] = 0x00131028u; fn_0012e150(cpu);
    }
L_00131028:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013102c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_00131030:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00131034:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00131038:;
    {
        cpu->r[14] = 0x0013103cu; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0013103c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00131040:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00131044:;
    {
        cpu->r[14] = 0x00131048u; fn_0012e1c8(cpu);
    }
L_00131048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013104c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00131050:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00131054:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00131058:;
    {
        cpu->r[14] = 0x0013105cu; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0013105c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00131060:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00131064:;
    {
        cpu->r[14] = 0x00131068u; fn_0012e19c(cpu);
    }
L_00131068:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0013106c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00131070:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00131074:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00131078:;
    {
        cpu->r[14] = 0x0013107cu; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_0013107c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_00131080:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00131084:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00131088:;
    {
        cpu->r[14] = 0x0013108cu; imp_glDrawArrays(cpu); /* glDrawArrays */
    }
L_0013108c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00131090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00131094:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00131098:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0013109c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001310ac;
        }
    }
L_001310a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_001310a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001310a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001310acu)) return;
    }
L_001310ac:;
    {
        cpu->r[14] = 0x001310b0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001310b0:;
    {
        if (cond_test(cpu, 4)) {
        /* svc */
        }
    }
L_001310b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_001310b8:;
    {
        if (cond_test(cpu, 12)) {
        /* svc */
        }
    }
L_001310bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[4]);
        cpu->r[9] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_001310c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001310c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN5Lib3D7fillArcEiiiiffi @ 001310c8 (arm) */
void fn_001310c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001310c8:;
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
L_001310cc:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_001310d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001310d4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_001310d8:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001310dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001310e0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x74u);
    }
L_001310e4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_001310e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_001310ec:;
    {
        vfp_vsub(cpu, 16, 16, 18);
    }
L_001310f0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001310f4:;
    {
        cpu->r[1] = (~0xff000000u);
    }
L_001310f8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001310fc:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_00131100:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00131104:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00131108:;
    {
        cpu->r[14] = 0x0013110cu; fn_0013022c(cpu);
    }
L_0013110c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00131110:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00131114:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00131118:;
    {
        cpu->r[1] = 0x000012c8u;
    }
L_0013111c:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_00131120:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00131124:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00131128:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_0013112c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00131130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00131134:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_00131138:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0013113c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00131140:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00131144:;
    {
        cpu->r[3] = 0x000012ccu;
    }
L_00131148:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[8]);
    }
L_0013114c:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[9] = v;
    }
L_00131150:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00131154:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_00131158:;
    {
        cpu->r[10] = (cpu->r[8] >> 16) & 0xffu;
    }
L_0013115c:;
    {
        cpu->r[8] = (cpu->r[8] >> 8) & 0xffu;
    }
L_00131160:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00131164:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_00131168:;
    {
        vfp_vdiv(cpu, 21, 16, 15);
    }
L_0013116c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00131170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001312cc;
        }
    }
L_00131174:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00131178:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013117c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_00131180:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
    }
L_00131184:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[5] = v;
    }
L_00131188:;
    {
        *vfp_s(cpu,22) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0013118c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00131190:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_00131194:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00131198:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0013119c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001311a0:;
    {
        cpu->r[14] = 0x001311a4u; imp_cosf(cpu); /* cosf */
    }
L_001311a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001311a8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001311ac:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001311b4u + + 0x158u);
    }
L_001311b0:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001311b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001311b8:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001311bc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
    }
L_001311c0:;
    {
        cpu->r[14] = 0x001311c4u; imp_sinf(cpu); /* sinf */
    }
L_001311c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_001311c8:;
    {
        *vfp_s(cpu,23) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001311cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_001311d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_001311d4:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001311d8:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001311dc:;
    {
        vfp_vmul(cpu, 16, 22, 16);
    }
L_001311e0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001311e4:;
    {
        vfp_vmul(cpu, 15, 23, 14);
    }
L_001311e8:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_001311ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001311f0:;
    {
        vfp_vadd(cpu, 16, 16, 19);
    }
L_001311f4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001311f8:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_001311fc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131200:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[3]);
    }
L_00131204:;
    {
        vfp_vadd(cpu, 18, 18, 21);
    }
L_00131208:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0013120c:;
    {
        wr16(cpu->r[5], cpu->r[2]);
    }
L_00131210:;
    {
        wr8(cpu->r[4], cpu->r[10]);
    }
L_00131214:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[8]);
    }
L_00131218:;
    {
        wr8(cpu->r[4] + + 0x2u, cpu->r[7]);
    }
L_0013121c:;
    {
        wr8(cpu->r[4] + + 0x3u, cpu->r[9]);
    }
L_00131220:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00131224:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00131228:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0013122c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00131230:;
    {
        wr16(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_00131234:;
    {
        wr16(cpu->r[5] + + 0x6u, cpu->r[2]);
    }
L_00131238:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
    }
L_0013123c:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_00131240:;
    {
        wr8(cpu->r[4] + + 0x5u, cpu->r[8]);
    }
L_00131244:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[7]);
    }
L_00131248:;
    {
        wr8(cpu->r[4] + + 0x7u, cpu->r[9]);
    }
L_0013124c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00131250:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00131254:;
    {
        cpu->r[14] = 0x00131258u; imp_cosf(cpu); /* cosf */
    }
L_00131258:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0013125c:;
    {
        vfp_vmul(cpu, 16, 14, 22);
    }
L_00131260:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
    }
L_00131264:;
    {
        vfp_vadd(cpu, 15, 16, 19);
    }
L_00131268:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0013126c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131270:;
    {
        wr16(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00131274:;
    {
        cpu->r[14] = 0x00131278u; imp_sinf(cpu); /* sinf */
    }
L_00131278:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013127c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_00131280:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00131284:;
    {
        vfp_vmul(cpu, 15, 14, 23);
    }
L_00131288:;
    {
        vfp_vsub(cpu, 14, 20, 15);
    }
L_0013128c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00131290:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00131294:;
    {
        wr16(cpu->r[5] + + 0xau, cpu->r[3]);
    }
L_00131298:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[10]);
    }
L_0013129c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001312a0:;
    {
        wr8(cpu->r[4] + + 0x9u, cpu->r[8]);
    }
L_001312a4:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[7]);
    }
L_001312a8:;
    {
        wr8(cpu->r[4] + + 0xbu, cpu->r[9]);
    }
L_001312ac:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001312b0:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001312b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001312b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001312bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001311e8;
        }
    }
L_001312c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001312c4:;
    {
        cpu->r[3] = 0x000012ccu;
    }
L_001312c8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001312cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001312d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001312d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_001312d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_001312dc:;
    {
        cpu->r[3] = 0x000012ccu;
    }
L_001312e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000007fu, 1, 1);
    }
L_001312e4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001312e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001312f8;
        }
    }
L_001312ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001312f0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_001312f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001312f8u)) return;
    }
L_001312f8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001312fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00131300:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_00131304:;
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
L_00131308:;
    {
        return fn_0012f780(cpu);
    }
}

/* _ZN5Lib3D13Init3DShadersEv @ 00131310 (arm) */
void fn_00131310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131310:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_00131314:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00131318:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0013131c:;
    {
        cpu->r[14] = 0x00131320u; fn_00148870(cpu);
    }
L_00131320:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131324:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000064u);
        }
    }
L_00131328:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013132c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00131330u)) return;
    }
}

/* _ZN5Lib3D18DestroyPostProcessEv @ 00131330 (arm) */
void fn_00131330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131330:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00131334:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00131338:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0013133c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131340:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131344u)) return;
        }
    }
L_00131344:;
    {
        cpu->r[14] = 0x00131348u; fn_001324c8(cpu);
    }
L_00131348:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_0013134c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00131350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131354u)) return;
        }
    }
L_00131354:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131358:;
    {
        cpu->r[14] = 0x0013135cu; fn_0013249c(cpu);
    }
L_0013135c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131360:;
    {
        cpu->r[14] = 0x00131364u; fn_0018ba20(cpu);
    }
L_00131364:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131368:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0013136c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131370u)) return;
    }
}

/* _ZN5Lib3D9TerminateEv @ 00131370 (arm) */
void fn_00131370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131370:;
    {
        return fn_00131330(cpu);
    }
}

/* _ZN5Lib3D17CreatePostProcessEv @ 00131374 (arm) */
void fn_00131374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131374:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00131378:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013137c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00131380:;
    {
        cpu->r[0] = 0x00000128u;
    }
L_00131384:;
    {
        cpu->r[14] = 0x00131388u; fn_0018ba6c(cpu);
    }
L_00131388:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013138c:;
    {
        cpu->r[14] = 0x00131390u; fn_00132420(cpu);
    }
L_00131390:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00131394:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00131398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001313ac;
        }
    }
L_0013139c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001313a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001313a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001313a8:;
    {
        return fn_001324e8(cpu);
    }
L_001313ac:;
    {
        cpu->r[1] = rd32(0x001313b4u + + 0x40u);
    }
L_001313b0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001313b4:;
    {
        cpu->r[12] = rd32(0x001313bcu + + 0x3cu);
    }
L_001313b8:;
    {
        cpu->r[14] = 0x000000f4u;
    }
L_001313bc:;
    {
        cpu->r[2] = rd32(0x001313c4u + + 0x38u);
    }
L_001313c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001313c8u, cpu->r[1], 0, 0);
    }
L_001313c4:;
    {
        cpu->r[3] = rd32(0x001313ccu + + 0x34u);
    }
L_001313c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001313d0u, cpu->r[12], 0, 0);
    }
L_001313cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001313d4u, cpu->r[2], 0, 0);
    }
L_001313d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_001313d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001313dcu, cpu->r[3], 0, 0);
    }
L_001313d8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001313dc:;
    {
        cpu->r[14] = 0x001313e0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001313e0:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001313e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001313e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013139c;
        }
    }
L_001313ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001313f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001313f4u)) return;
    }
}

/* _ZN5Lib3D6Init3DEv @ 00131404 (arm) */
void fn_00131404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131404:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00131408:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013140c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00131410:;
    {
        cpu->r[0] = 0x00000900u;
    }
L_00131414:;
    {
        cpu->r[14] = 0x00131418u; imp_glFrontFace(cpu); /* glFrontFace */
    }
L_00131418:;
    {
        cpu->r[0] = 0x00000c00u;
    }
L_0013141c:;
    {
        cpu->r[14] = 0x00131420u; imp__Znaj(cpu); /* _Znaj */
    }
L_00131420:;
    {
        cpu->r[5] = 0x000012d4u;
    }
L_00131424:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_00131428:;
    {
        cpu->r[0] = 0x00000300u;
    }
L_0013142c:;
    {
        cpu->r[14] = 0x00131430u; imp__Znaj(cpu); /* _Znaj */
    }
L_00131430:;
    {
        cpu->r[3] = 0x000012e8u;
    }
L_00131434:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00131438:;
    {
        cpu->r[2] = 0x00000300u;
    }
L_0013143c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00131440:;
    {
        cpu->r[14] = 0x00131444u; imp_memset(cpu); /* memset */
    }
L_00131444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00131448:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013144c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013145c;
        }
    }
L_00131450:;
    {
        cpu->r[0] = (~0x00000009u);
    }
L_00131454:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00131458:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013145cu)) return;
    }
L_0013145c:;
    {
        cpu->r[0] = 0x00000c00u;
    }
L_00131460:;
    {
        cpu->r[14] = 0x00131464u; imp__Znaj(cpu); /* _Znaj */
    }
L_00131464:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_00131468:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013146c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00131470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013147c;
        }
    }
L_00131474:;
    {
        cpu->r[0] = (~0x0000000au);
    }
L_00131478:;
    {
        goto L_00131454;
    }
L_0013147c:;
    {
        cpu->r[0] = 0x00001800u;
    }
L_00131480:;
    {
        cpu->r[14] = 0x00131484u; imp__Znaj(cpu); /* _Znaj */
    }
L_00131484:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_00131488:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013148c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00131490:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000000bu);
        }
    }
L_00131494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131454;
        }
    }
L_00131498:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_0013149c:;
    {
        cpu->r[14] = 0x001314a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001314a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001314a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001314a8:;
    {
        cpu->r[3] = 0x000012f0u;
    }
L_001314ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001314b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131450;
        }
    }
L_001314b4:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_001314b8:;
    {
        cpu->r[14] = 0x001314bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001314bc:;
    {
        cpu->r[3] = 0x000012f4u;
    }
L_001314c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001314c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001314c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131474;
        }
    }
L_001314cc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001314d0:;
    {
        cpu->r[6] = 0x000001d0u;
    }
L_001314d4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001314d8:;
    {
        wr32(cpu->r[4] + + 0xe84u, cpu->r[3]);
    }
L_001314dc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[4]; cpu->r[0] = v;
    }
L_001314e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001314e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001314e8:;
    {
        cpu->r[2] = 0x000001d0u;
    }
L_001314ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001314f0:;
    {
        cpu->r[14] = 0x001314f4u; imp_memset(cpu); /* memset */
    }
L_001314f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_001314f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001314dc;
        }
    }
L_001314fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131500:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00131504:;
    {
        cpu->r[14] = 0x00131508u; fn_0012faa0(cpu);
    }
L_00131508:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013150c:;
    {
        cpu->r[14] = 0x00131510u; fn_0012dd30(cpu);
    }
L_00131510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131514:;
    {
        cpu->r[14] = 0x00131518u; fn_0012f4d8(cpu);
    }
L_00131518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013151c:;
    {
        cpu->r[14] = 0x00131520u; fn_0012f3d4(cpu);
    }
L_00131520:;
    {
        cpu->r[6] = 0x00000044u;
    }
L_00131524:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5]; cpu->r[0] = v;
    }
L_00131528:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013152c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001440u, 0, 0);
    }
L_00131530:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00131534:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00131538:;
    {
        cpu->r[14] = 0x0013153cu; fn_00153600(cpu);
    }
L_0013153c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_00131540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131524;
        }
    }
L_00131544:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00131548:;
    {
        cpu->r[14] = 0x0013154cu; fn_0018ba6c(cpu);
    }
L_0013154c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00131550:;
    {
        cpu->r[14] = 0x00131554u; fn_00147c80(cpu);
    }
L_00131554:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00131558:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013155c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000063u);
        }
    }
L_00131560:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131454;
        }
    }
L_00131568:;
    {
        cpu->r[3] = rd32(0x00131570u + + 0xbcu);
    }
L_0013156c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00131570:;
    {
        cpu->r[2] = 0x00001230u;
    }
L_00131574:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00131578:;
    {
        cpu->r[3] = add_flags(cpu, 0x00131580u, cpu->r[3], 0, 0);
    }
L_0013157c:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00131580:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[5]);
    }
L_00131584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131588:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_0013158c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00131590:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[5]);
    }
L_00131594:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_00131598:;
    {
        wr8(cpu->r[13] + + 0x7u, cpu->r[5]);
    }
L_0013159c:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x4u;
        cpu->r[12] = rd32(cpu->r[6] + - 0x4u);
        cpu->r[6] = wb_tmp;
    }
L_001315a0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001315a4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001315a8:;
    {
        cpu->r[3] = 0x00001238u;
    }
L_001315ac:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001315b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_001315b4:;
    {
        cpu->r[14] = 0x001315b8u; fn_0012eecc(cpu);
    }
L_001315b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001315bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001315c0:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001315c4:;
    {
        cpu->r[14] = 0x001315c8u; fn_0012ef84(cpu);
    }
L_001315c8:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001315cc:;
    {
        cpu->r[3] = 0x00001234u;
    }
L_001315d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001315d4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001315d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_001315dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001315e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001315e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001315e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001315ec:;
    {
        cpu->r[14] = 0x001315f0u; fn_0012eecc(cpu);
    }
L_001315f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001315f4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001315f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001315fc:;
    {
        cpu->r[14] = 0x00131600u; fn_0012ef84(cpu);
    }
L_00131600:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00131604:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131608:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0013160c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00131614:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131618:;
    {
        cpu->r[3] = 0x00001240u;
    }
L_0013161c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131620:;
    {
        cpu->r[14] = 0x00131624u; fn_00131374(cpu);
    }
L_00131624:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131628:;
    {
        goto L_00131454;
    }
}

/* _ZN5Lib3D11PostProcessEv @ 00131630 (arm) */
void fn_00131630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131630:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00131634:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00131638:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013163c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00131640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013164c;
        }
    }
L_00131644:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00131648:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013164cu)) return;
    }
L_0013164c:;
    {
        cpu->r[14] = 0x00131650u; fn_00131374(cpu);
    }
L_00131650:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00131654:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00131658:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013165cu)) return;
    }
}

/* _ZN5Lib3DC1Ev @ 0013165c (arm) */
void fn_0013165c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013165c:;
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
L_00131660:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000e80u, 0, 0);
    }
L_00131664:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_00131668:;
    {
        cpu->r[11] = rd32(0x00131670u + + 0x3a0u);
    }
L_0013166c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000ea0u, 0, 0);
    }
L_00131670:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00131674:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00131678:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013167c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00131680:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00131684:;
    {
        cpu->r[14] = 0x00131688u; fn_00155264(cpu);
    }
L_00131688:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013168c:;
    {
        cpu->r[11] = add_flags(cpu, 0x00131694u, cpu->r[11], 0, 0);
    }
L_00131690:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[7]);
    }
L_00131694:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131698:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_0013169c:;
    {
        cpu->r[14] = 0x001316a0u; fn_001535e0(cpu);
    }
L_001316a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000264u, 1, 1);
    }
L_001316a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_001316a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131690;
        }
    }
L_001316ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00001100u, 0, 0);
    }
L_001316b0:;
    {
        cpu->r[9] = rd32(0x001316b8u + + 0x35cu);
    }
L_001316b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_001316b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x000000e8u, 0, 0);
    }
L_001316bc:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_001316c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001316c4:;
    {
        cpu->r[14] = 0x001316c8u; fn_001551b8(cpu);
    }
L_001316c8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_001316cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001316d0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_001316d4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001316d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001316c0;
        }
    }
L_001316dc:;
    {
        cpu->r[3] = 0x0000122cu;
    }
L_001316e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000011c0u, 0, 0);
    }
L_001316e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001316e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_001316ec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001316f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00001340u, 0, 0);
    }
L_001316f4:;
    {
        cpu->r[14] = 0x001316f8u; fn_001535e0(cpu);
    }
L_001316f8:;
    {
        cpu->r[3] = 0x00001358u;
    }
L_001316fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00131704u + + 0x304u);
    }
L_00131700:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131704:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131708:;
    {
        cpu->r[3] = 0x000012b8u;
    }
L_0013170c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001300u, 0, 0);
    }
L_00131710:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x0000001cu, 0, 0);
    }
L_00131714:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131718:;
    {
        cpu->r[3] = 0x000012a4u;
    }
L_0013171c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00131720:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000010cu, 0, 0);
    }
L_00131724:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131728:;
    {
        cpu->r[3] = 0x000012a8u;
    }
L_0013172c:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00131730:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131734:;
    {
        cpu->r[3] = 0x000012acu;
    }
L_00131738:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0013173c:;
    {
        cpu->r[3] = 0x000012b0u;
    }
L_00131740:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131744:;
    {
        cpu->r[3] = 0x000012b4u;
    }
L_00131748:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0013174c:;
    {
        cpu->r[14] = 0x00131750u; fn_001535e0(cpu);
    }
L_00131750:;
    {
        cpu->r[3] = rd32(0x00131758u + + 0x2c0u);
    }
L_00131754:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00131758:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013175c:;
    {
        cpu->r[14] = 0x00131760u; fn_001551b8(cpu);
    }
L_00131760:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00131764:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00131768:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013176c:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_00131770:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00131774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131758;
        }
    }
L_00131778:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001440u, 0, 0);
    }
L_0013177c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131780:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00131784:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00131788:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_0013178c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_00131794:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00131798:;
    {
        cpu->r[14] = 0x0013179cu; fn_001535e0(cpu);
    }
L_0013179c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001317a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_001317a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000002a8u, 1, 1);
    }
L_001317a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131788;
        }
    }
L_001317ac:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_001317b0:;
    {
        cpu->r[2] = 0x000012d0u;
    }
L_001317b4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001317b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001317bc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001317c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000028u, 0, 0);
    }
L_001317c4:;
    {
        cpu->r[3] = rd32(0x001317ccu + + 0x250u);
    }
L_001317c8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001317cc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001317d0:;
    {
        cpu->r[2] = 0x000012ccu;
    }
L_001317d4:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001317d8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_001317dc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001317e0:;
    {
        cpu->r[14] = 0x001317e4u; fn_0012df6c(cpu);
    }
L_001317e4:;
    {
        cpu->r[3] = rd32(0x001317ecu + + 0x234u);
    }
L_001317e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001317ec:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001317f0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001317f4:;
    {
        cpu->r[14] = 0x001317f8u; fn_0012df84(cpu);
    }
L_001317f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001317fc:;
    {
        cpu->r[14] = 0x00131800u; fn_0012df9c(cpu);
    }
L_00131800:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00131804:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4248u << 16);
    }
L_00131808:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013180c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131810:;
    {
        cpu->r[14] = 0x00131814u; fn_0012ec44(cpu);
    }
L_00131814:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_00131818:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_0013181c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00131820:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131824:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_00131828:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013182c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131830:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_00131834:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131838:;
    {
        cpu->r[3] = 0x000012f0u;
    }
L_0013183c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131840:;
    {
        cpu->r[3] = 0x000012f4u;
    }
L_00131844:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131848:;
    {
        cpu->r[3] = 0x000012f8u;
    }
L_0013184c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131850:;
    {
        cpu->r[14] = 0x00131854u; fn_001555f8(cpu);
    }
L_00131854:;
    {
        cpu->r[3] = 0x00001110u;
    }
L_00131858:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013185c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00131860:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00131864:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00131868:;
    {
        cpu->r[14] = 0x00131870u;
    }
L_0013186c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00131870u)) return;
    }
L_00131870:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00131874:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00131878:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000018u;
        cpu->r[3] = rd32(cpu->r[7]);
        cpu->r[7] = wb_tmp;
    }
L_0013187c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00131880:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00131884:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00131888:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001100u, 0, 0);
    }
L_0013188c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_00131890:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00131894:;
    {
        cpu->r[14] = 0x0013189cu;
    }
L_00131898:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013189cu)) return;
    }
L_0013189c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_001318a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131870;
        }
    }
L_001318a4:;
    {
        cpu->r[6] = 0x0000001eu;
    }
L_001318a8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001318ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_001318b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001318b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001318b8:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000018u;
        cpu->r[3] = rd32(cpu->r[9]);
        cpu->r[9] = wb_tmp;
    }
L_001318bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001318c0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001318c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001340u, 0, 0);
    }
L_001318c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_001318cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_001318d0:;
    {
        cpu->r[14] = 0x001318d8u;
    }
L_001318d4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001318d8u)) return;
    }
L_001318d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_001318dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001318ac;
        }
    }
L_001318e0:;
    {
        cpu->r[0] = 0x000001b0u;
    }
L_001318e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001318e8:;
    {
        cpu->r[14] = 0x001318ecu; fn_0018ba6c(cpu);
    }
L_001318ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001318f0:;
    {
        cpu->r[14] = 0x001318f4u; fn_00151c88(cpu);
    }
L_001318f4:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_001318f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001318fc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131900:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_00131904:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_00131908:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0013190c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_00131910:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131914:;
    {
        cpu->r[14] = 0x00131918u; fn_0012dfe0(cpu);
    }
L_00131918:;
    {
        cpu->r[2] = 0x000017a7u;
    }
L_0013191c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00001240u, 0, 0);
    }
L_00131920:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00001740u, 0, 0);
    }
L_00131924:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131928:;
    {
        cpu->r[2] = 0x000017a6u;
    }
L_0013192c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_00131930:;
    {
        wr32(cpu->r[14] + + 0x4u, cpu->r[5]);
    }
L_00131934:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131938:;
    {
        cpu->r[2] = 0x000017a5u;
    }
L_0013193c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00131940:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[5]);
    }
L_00131944:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131948:;
    {
        cpu->r[2] = 0x000017a4u;
    }
L_0013194c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131950:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000024u, 0, 0);
    }
L_00131954:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131958:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013195c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131960:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131964:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00131968:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_0013196c:;
    {
        wr32(cpu->r[12] + + 0x28u, cpu->r[5]);
    }
L_00131970:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131974:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[5]);
    }
L_00131978:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_0013197c:;
    {
        wr32(cpu->r[12] + + 0x20u, cpu->r[5]);
    }
L_00131980:;
    {
        wr32(cpu->r[12] + + 0x24u, cpu->r[5]);
    }
L_00131984:;
    {
        cpu->r[14] = 0x00131988u; imp_memset(cpu); /* memset */
    }
L_00131988:;
    {
        cpu->r[3] = 0x000012c0u;
    }
L_0013198c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00131994u + + 0x78u);
    }
L_00131990:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131994:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131998:;
    {
        cpu->r[3] = 0x00001284u;
    }
L_0013199c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001319a0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001319a4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319a8:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_001319ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001319b0:;
    {
        cpu->r[3] = 0x000012c4u;
    }
L_001319b4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319b8:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_001319bc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319c0:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_001319c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001319c8:;
    {
        cpu->r[3] = 0x000012bcu;
    }
L_001319cc:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319d0:;
    {
        cpu->r[3] = 0x000012bdu;
    }
L_001319d4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319d8:;
    {
        cpu->r[3] = 0x000012beu;
    }
L_001319dc:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319e0:;
    {
        cpu->r[3] = 0x000012bfu;
    }
L_001319e4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319e8:;
    {
        cpu->r[3] = 0x00001748u;
    }
L_001319ec:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319f0:;
    {
        cpu->r[3] = 0x000012ecu;
    }
L_001319f4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001319f8:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_001319fc:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131a00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00131a04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131a08u)) return;
    }
}

/* _ZN5Lib3DC2Ev @ 00131a24 (arm) */
void fn_00131a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131a24:;
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
L_00131a28:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000e80u, 0, 0);
    }
L_00131a2c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_00131a30:;
    {
        cpu->r[11] = rd32(0x00131a38u + + 0x3a0u);
    }
L_00131a34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000ea0u, 0, 0);
    }
L_00131a38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00131a3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00131a40:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00131a44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00131a48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00131a4c:;
    {
        cpu->r[14] = 0x00131a50u; fn_00155264(cpu);
    }
L_00131a50:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00131a54:;
    {
        cpu->r[11] = add_flags(cpu, 0x00131a5cu, cpu->r[11], 0, 0);
    }
L_00131a58:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[7]);
    }
L_00131a5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131a60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_00131a64:;
    {
        cpu->r[14] = 0x00131a68u; fn_001535e0(cpu);
    }
L_00131a68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000264u, 1, 1);
    }
L_00131a6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_00131a70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131a58;
        }
    }
L_00131a74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00001100u, 0, 0);
    }
L_00131a78:;
    {
        cpu->r[9] = rd32(0x00131a80u + + 0x35cu);
    }
L_00131a7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_00131a80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x000000e8u, 0, 0);
    }
L_00131a84:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_00131a88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131a8c:;
    {
        cpu->r[14] = 0x00131a90u; fn_001551b8(cpu);
    }
L_00131a90:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_00131a94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00131a98:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_00131a9c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00131aa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131a88;
        }
    }
L_00131aa4:;
    {
        cpu->r[3] = 0x0000122cu;
    }
L_00131aa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000011c0u, 0, 0);
    }
L_00131aac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00131ab0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_00131ab4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131ab8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00001340u, 0, 0);
    }
L_00131abc:;
    {
        cpu->r[14] = 0x00131ac0u; fn_001535e0(cpu);
    }
L_00131ac0:;
    {
        cpu->r[3] = 0x00001358u;
    }
L_00131ac4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00131accu + + 0x304u);
    }
L_00131ac8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131acc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131ad0:;
    {
        cpu->r[3] = 0x000012b8u;
    }
L_00131ad4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001300u, 0, 0);
    }
L_00131ad8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x0000001cu, 0, 0);
    }
L_00131adc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131ae0:;
    {
        cpu->r[3] = 0x000012a4u;
    }
L_00131ae4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00131ae8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000010cu, 0, 0);
    }
L_00131aec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131af0:;
    {
        cpu->r[3] = 0x000012a8u;
    }
L_00131af4:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00131af8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131afc:;
    {
        cpu->r[3] = 0x000012acu;
    }
L_00131b00:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131b04:;
    {
        cpu->r[3] = 0x000012b0u;
    }
L_00131b08:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131b0c:;
    {
        cpu->r[3] = 0x000012b4u;
    }
L_00131b10:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131b14:;
    {
        cpu->r[14] = 0x00131b18u; fn_001535e0(cpu);
    }
L_00131b18:;
    {
        cpu->r[3] = rd32(0x00131b20u + + 0x2c0u);
    }
L_00131b1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00131b20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131b24:;
    {
        cpu->r[14] = 0x00131b28u; fn_001551b8(cpu);
    }
L_00131b28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00131b2c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00131b30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00131b34:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_00131b38:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00131b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131b20;
        }
    }
L_00131b40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001440u, 0, 0);
    }
L_00131b44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131b48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00131b4c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00131b50:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_00131b54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131b58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_00131b5c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00131b60:;
    {
        cpu->r[14] = 0x00131b64u; fn_001535e0(cpu);
    }
L_00131b64:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00131b68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_00131b6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000002a8u, 1, 1);
    }
L_00131b70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131b50;
        }
    }
L_00131b74:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_00131b78:;
    {
        cpu->r[2] = 0x000012d0u;
    }
L_00131b7c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00131b80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131b84:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131b88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000028u, 0, 0);
    }
L_00131b8c:;
    {
        cpu->r[3] = rd32(0x00131b94u + + 0x250u);
    }
L_00131b90:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00131b94:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00131b98:;
    {
        cpu->r[2] = 0x000012ccu;
    }
L_00131b9c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_00131ba0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_00131ba4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00131ba8:;
    {
        cpu->r[14] = 0x00131bacu; fn_0012df6c(cpu);
    }
L_00131bac:;
    {
        cpu->r[3] = rd32(0x00131bb4u + + 0x234u);
    }
L_00131bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131bb4:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_00131bb8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00131bbc:;
    {
        cpu->r[14] = 0x00131bc0u; fn_0012df84(cpu);
    }
L_00131bc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131bc4:;
    {
        cpu->r[14] = 0x00131bc8u; fn_0012df9c(cpu);
    }
L_00131bc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00131bcc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4248u << 16);
    }
L_00131bd0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00131bd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131bd8:;
    {
        cpu->r[14] = 0x00131bdcu; fn_0012ec44(cpu);
    }
L_00131bdc:;
    {
        cpu->r[3] = 0x000012d4u;
    }
L_00131be0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00131be4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00131be8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131bec:;
    {
        cpu->r[3] = 0x000012d8u;
    }
L_00131bf0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00131bf4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131bf8:;
    {
        cpu->r[3] = 0x000012dcu;
    }
L_00131bfc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131c00:;
    {
        cpu->r[3] = 0x000012f0u;
    }
L_00131c04:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131c08:;
    {
        cpu->r[3] = 0x000012f4u;
    }
L_00131c0c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131c10:;
    {
        cpu->r[3] = 0x000012f8u;
    }
L_00131c14:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131c18:;
    {
        cpu->r[14] = 0x00131c1cu; fn_001555f8(cpu);
    }
L_00131c1c:;
    {
        cpu->r[3] = 0x00001110u;
    }
L_00131c20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00131c24:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00131c28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00131c2c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00131c30:;
    {
        cpu->r[14] = 0x00131c38u;
    }
L_00131c34:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00131c38u)) return;
    }
L_00131c38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00131c3c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00131c40:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000018u;
        cpu->r[3] = rd32(cpu->r[7]);
        cpu->r[7] = wb_tmp;
    }
L_00131c44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00131c48:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00131c4c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00131c50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001100u, 0, 0);
    }
L_00131c54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_00131c58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00131c5c:;
    {
        cpu->r[14] = 0x00131c64u;
    }
L_00131c60:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00131c64u)) return;
    }
L_00131c64:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_00131c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131c38;
        }
    }
L_00131c6c:;
    {
        cpu->r[6] = 0x0000001eu;
    }
L_00131c70:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00131c74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00131c78:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00131c7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00131c80:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000018u;
        cpu->r[3] = rd32(cpu->r[9]);
        cpu->r[9] = wb_tmp;
    }
L_00131c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_00131c88:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00131c8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001340u, 0, 0);
    }
L_00131c90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_00131c94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_00131c98:;
    {
        cpu->r[14] = 0x00131ca0u;
    }
L_00131c9c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00131ca0u)) return;
    }
L_00131ca0:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_00131ca4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131c74;
        }
    }
L_00131ca8:;
    {
        cpu->r[0] = 0x000001b0u;
    }
L_00131cac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00131cb0:;
    {
        cpu->r[14] = 0x00131cb4u; fn_0018ba6c(cpu);
    }
L_00131cb4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00131cb8:;
    {
        cpu->r[14] = 0x00131cbcu; fn_00151c88(cpu);
    }
L_00131cbc:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_00131cc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131cc4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131cc8:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_00131ccc:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_00131cd0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131cd4:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_00131cd8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131cdc:;
    {
        cpu->r[14] = 0x00131ce0u; fn_0012dfe0(cpu);
    }
L_00131ce0:;
    {
        cpu->r[2] = 0x000017a7u;
    }
L_00131ce4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00001240u, 0, 0);
    }
L_00131ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00001740u, 0, 0);
    }
L_00131cec:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131cf0:;
    {
        cpu->r[2] = 0x000017a6u;
    }
L_00131cf4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_00131cf8:;
    {
        wr32(cpu->r[14] + + 0x4u, cpu->r[5]);
    }
L_00131cfc:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131d00:;
    {
        cpu->r[2] = 0x000017a5u;
    }
L_00131d04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00131d08:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[5]);
    }
L_00131d0c:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131d10:;
    {
        cpu->r[2] = 0x000017a4u;
    }
L_00131d14:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000024u, 0, 0);
    }
L_00131d1c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131d20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00131d24:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131d28:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00131d2c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00131d30:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131d34:;
    {
        wr32(cpu->r[12] + + 0x28u, cpu->r[5]);
    }
L_00131d38:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_00131d3c:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[5]);
    }
L_00131d40:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00131d44:;
    {
        wr32(cpu->r[12] + + 0x20u, cpu->r[5]);
    }
L_00131d48:;
    {
        wr32(cpu->r[12] + + 0x24u, cpu->r[5]);
    }
L_00131d4c:;
    {
        cpu->r[14] = 0x00131d50u; imp_memset(cpu); /* memset */
    }
L_00131d50:;
    {
        cpu->r[3] = 0x000012c0u;
    }
L_00131d54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00131d5cu + + 0x78u);
    }
L_00131d58:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00131d5c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00131d60:;
    {
        cpu->r[3] = 0x00001284u;
    }
L_00131d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131d68:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00131d6c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131d70:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_00131d74:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131d78:;
    {
        cpu->r[3] = 0x000012c4u;
    }
L_00131d7c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131d80:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_00131d84:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131d88:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_00131d8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00131d90:;
    {
        cpu->r[3] = 0x000012bcu;
    }
L_00131d94:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131d98:;
    {
        cpu->r[3] = 0x000012bdu;
    }
L_00131d9c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131da0:;
    {
        cpu->r[3] = 0x000012beu;
    }
L_00131da4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131da8:;
    {
        cpu->r[3] = 0x000012bfu;
    }
L_00131dac:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131db0:;
    {
        cpu->r[3] = 0x00001748u;
    }
L_00131db4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131db8:;
    {
        cpu->r[3] = 0x000012ecu;
    }
L_00131dbc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131dc0:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_00131dc4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00131dc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00131dcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131dd0u)) return;
    }
}

/* _ZN5Lib3D16ComputeDOT3LightEP7CMatrix8Vector3d @ 00131dec (arm) */
void fn_00131dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131dec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00131df0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_00131df4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00131df8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00131dfc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00131e00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e04:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00131e08:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131e0c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00131e10:;
    {
        cpu->r[14] = 0x00131e14u; fn_00153624(cpu);
    }
L_00131e14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00131e18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e1c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00131e20:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00131e24:;
    {
        cpu->r[14] = 0x00131e28u; fn_0015364c(cpu);
    }
L_00131e28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e2c:;
    {
        cpu->r[14] = 0x00131e30u; fn_00153d94(cpu);
    }
L_00131e30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e34:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00131e38:;
    {
        cpu->r[14] = 0x00131e3cu; fn_00153c38(cpu);
    }
L_00131e3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131e40:;
    {
        cpu->r[14] = 0x00131e44u; fn_00155f80(cpu);
    }
L_00131e44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00131e4cu + + 0x60u);
    }
L_00131e48:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_00131e4c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4]);
    }
L_00131e50:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00131e54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00131e58:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x44u);
    }
L_00131e5c:;
    {
        vfp_vmla(cpu, 11, 13, 15);
    }
L_00131e60:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00131e64:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,11);
    }
L_00131e68:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_00131e6c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00131e70:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00131e74:;
    {
        vfp_vmla(cpu, 11, 14, 15);
    }
L_00131e78:;
    {
        vfp_vmla(cpu, 15, 12, 15);
    }
L_00131e7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00131e80:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00131e84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00131e88:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00131e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131ea0;
        }
    }
L_00131e90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e94:;
    {
        cpu->r[14] = 0x00131e98u; fn_000b2bc8(cpu);
    }
L_00131e98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00131e9c:;
    {
        cpu->r[14] = 0x00131ea0u; fn_0018ba20(cpu);
    }
L_00131ea0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131ea4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00131ea8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00131eacu)) return;
    }
}

/* _ZN5Lib3DD2Ev @ 00131eb0 (arm) */
void fn_00131eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00131eb0:;
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
L_00131eb4:;
    {
        cpu->r[4] = 0x000012d4u;
    }
L_00131eb8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00131ebc:;
    {
        cpu->r[8] = rd32(0x00131ec4u + + 0x230u);
    }
L_00131ec0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_00131ec4:;
    {
        cpu->r[8] = add_flags(cpu, 0x00131eccu, cpu->r[8], 0, 0);
    }
L_00131ec8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131ecc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131edc;
        }
    }
L_00131ed0:;
    {
        cpu->r[14] = 0x00131ed4u; fn_0018ba60(cpu);
    }
L_00131ed4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131ed8:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131edc:;
    {
        cpu->r[4] = 0x000012d8u;
    }
L_00131ee0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00131ee4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131ef8;
        }
    }
L_00131eec:;
    {
        cpu->r[14] = 0x00131ef0u; fn_0018ba60(cpu);
    }
L_00131ef0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131ef4:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131ef8:;
    {
        cpu->r[4] = 0x000012dcu;
    }
L_00131efc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00131f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131f14;
        }
    }
L_00131f08:;
    {
        cpu->r[14] = 0x00131f0cu; fn_0018ba60(cpu);
    }
L_00131f0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131f10:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131f14:;
    {
        cpu->r[4] = 0x000012e8u;
    }
L_00131f18:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00131f1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131f30;
        }
    }
L_00131f24:;
    {
        cpu->r[14] = 0x00131f28u; fn_0018ba60(cpu);
    }
L_00131f28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131f2c:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131f30:;
    {
        cpu->r[4] = 0x000012f0u;
    }
L_00131f34:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00131f38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131f4c;
        }
    }
L_00131f40:;
    {
        cpu->r[14] = 0x00131f44u; fn_0018ba60(cpu);
    }
L_00131f44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131f48:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131f4c:;
    {
        cpu->r[4] = 0x000012f4u;
    }
L_00131f50:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00131f54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00131f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131f68;
        }
    }
L_00131f5c:;
    {
        cpu->r[14] = 0x00131f60u; fn_0018ba60(cpu);
    }
L_00131f60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131f64:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00131f68:;
    {
        cpu->r[5] = 0x00001288u;
    }
L_00131f6c:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00131f70:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00131f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131f90;
        }
    }
L_00131f78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131f7c:;
    {
        cpu->r[14] = 0x00131f80u; fn_00148900(cpu);
    }
L_00131f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131f84:;
    {
        cpu->r[14] = 0x00131f88u; fn_0018ba20(cpu);
    }
L_00131f88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131f8c:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_00131f90:;
    {
        cpu->r[5] = 0x00001314u;
    }
L_00131f94:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00131f98:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00131f9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131fc8;
        }
    }
L_00131fa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000016cu, 0, 0);
    }
L_00131fa4:;
    {
        cpu->r[14] = 0x00131fa8u; fn_000b2bc8(cpu);
    }
L_00131fa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000128u, 0, 0);
    }
L_00131fac:;
    {
        cpu->r[14] = 0x00131fb0u; fn_000b2bc8(cpu);
    }
L_00131fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131fb4:;
    {
        cpu->r[14] = 0x00131fb8u; fn_000b2bc8(cpu);
    }
L_00131fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00131fbc:;
    {
        cpu->r[14] = 0x00131fc0u; fn_0018ba20(cpu);
    }
L_00131fc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00131fc4:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_00131fc8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001440u, 0, 0);
    }
L_00131fcc:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00131fd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x000002b4u, 0, 0);
    }
L_00131fd4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00131fd8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_00131fdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00131fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00131ff4;
        }
    }
L_00131fe4:;
    {
        cpu->r[14] = 0x00131fe8u; fn_000b2bc8(cpu);
    }
L_00131fe8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00131fec:;
    {
        cpu->r[14] = 0x00131ff0u; fn_0018ba20(cpu);
    }
L_00131ff0:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[10]);
    }
L_00131ff4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_00131ff8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00131ffc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00131fd8;
        }
    }
L_00132000:;
    {
        cpu->r[3] = rd32(0x00132008u + + 0xf0u);
    }
L_00132004:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001340u, 0, 0);
    }
L_00132008:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x0000010cu, 0, 0);
    }
L_0013200c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001cu, 0, 0);
    }
L_00132010:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00132014:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00132018:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x18u;
        wr32(cpu->r[4] + - 0x18u, cpu->r[5]);
        cpu->r[4] = wb_tmp;
    }
L_0013201c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132020:;
    {
        cpu->r[14] = 0x00132024u; fn_00155630(cpu);
    }
L_00132024:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00132028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132018;
        }
    }
L_0013202c:;
    {
        cpu->r[5] = 0x00001358u;
    }
L_00132030:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00132034:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00132038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132054;
        }
    }
L_0013203c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132040:;
    {
        cpu->r[14] = 0x00132044u; fn_000b2bc8(cpu);
    }
L_00132044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132048:;
    {
        cpu->r[14] = 0x0013204cu; fn_0018ba20(cpu);
    }
L_0013204c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132050:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_00132054:;
    {
        cpu->r[5] = 0x0000122cu;
    }
L_00132058:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0013205c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00132060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013207c;
        }
    }
L_00132064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132068:;
    {
        cpu->r[14] = 0x0013206cu; fn_000b2bc8(cpu);
    }
L_0013206c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132070:;
    {
        cpu->r[14] = 0x00132074u; fn_0018ba20(cpu);
    }
L_00132074:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132078:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_0013207c:;
    {
        cpu->r[3] = rd32(0x00132084u + + 0x78u);
    }
L_00132080:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001100u, 0, 0);
    }
L_00132084:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x000000e8u, 0, 0);
    }
L_00132088:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_0013208c:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00132090:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00132094:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x18u;
        wr32(cpu->r[4] + - 0x18u, cpu->r[5]);
        cpu->r[4] = wb_tmp;
    }
L_00132098:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013209c:;
    {
        cpu->r[14] = 0x001320a0u; fn_00155630(cpu);
    }
L_001320a0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001320a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132094;
        }
    }
L_001320a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000ea0u, 0, 0);
    }
L_001320ac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001320b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000270u, 0, 0);
    }
L_001320b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001320b8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_001320bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001320c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001320d4;
        }
    }
L_001320c4:;
    {
        cpu->r[14] = 0x001320c8u; fn_000b2bc8(cpu);
    }
L_001320c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001320cc:;
    {
        cpu->r[14] = 0x001320d0u; fn_0018ba20(cpu);
    }
L_001320d0:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[8]);
    }
L_001320d4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_001320d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001320dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001320b8;
        }
    }
L_001320e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000e80u, 0, 0);
    }
L_001320e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001320e8:;
    {
        cpu->r[14] = 0x001320ecu; fn_001556c0(cpu);
    }
L_001320ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001320f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001320f4u)) return;
    }
}

/* _ZN5Lib3DD1Ev @ 00132100 (arm) */
void fn_00132100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132100:;
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
L_00132104:;
    {
        cpu->r[4] = 0x000012d4u;
    }
L_00132108:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013210c:;
    {
        cpu->r[8] = rd32(0x00132114u + + 0x288u);
    }
L_00132110:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_00132114:;
    {
        cpu->r[8] = add_flags(cpu, 0x0013211cu, cpu->r[8], 0, 0);
    }
L_00132118:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013211c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013212c;
        }
    }
L_00132120:;
    {
        cpu->r[14] = 0x00132124u; fn_0018ba60(cpu);
    }
L_00132124:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132128:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_0013212c:;
    {
        cpu->r[4] = 0x000012d8u;
    }
L_00132130:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00132134:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132138:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132148;
        }
    }
L_0013213c:;
    {
        cpu->r[14] = 0x00132140u; fn_0018ba60(cpu);
    }
L_00132140:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132144:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00132148:;
    {
        cpu->r[4] = 0x000012dcu;
    }
L_0013214c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00132150:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132164;
        }
    }
L_00132158:;
    {
        cpu->r[14] = 0x0013215cu; fn_0018ba60(cpu);
    }
L_0013215c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132160:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00132164:;
    {
        cpu->r[4] = 0x000012e8u;
    }
L_00132168:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0013216c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132180;
        }
    }
L_00132174:;
    {
        cpu->r[14] = 0x00132178u; fn_0018ba60(cpu);
    }
L_00132178:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013217c:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_00132180:;
    {
        cpu->r[4] = 0x000012f0u;
    }
L_00132184:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00132188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013218c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013219c;
        }
    }
L_00132190:;
    {
        cpu->r[14] = 0x00132194u; fn_0018ba60(cpu);
    }
L_00132194:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132198:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_0013219c:;
    {
        cpu->r[4] = 0x000012f4u;
    }
L_001321a0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001321a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001321a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001321b8;
        }
    }
L_001321ac:;
    {
        cpu->r[14] = 0x001321b0u; fn_0018ba60(cpu);
    }
L_001321b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001321b4:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_001321b8:;
    {
        cpu->r[5] = 0x00001288u;
    }
L_001321bc:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001321c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001321c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001321e0;
        }
    }
L_001321c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001321cc:;
    {
        cpu->r[14] = 0x001321d0u; fn_00148900(cpu);
    }
L_001321d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001321d4:;
    {
        cpu->r[14] = 0x001321d8u; fn_0018ba20(cpu);
    }
L_001321d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001321dc:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_001321e0:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_001321e4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001321e8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001321ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132270;
        }
    }
L_001321f0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1acu);
    }
L_001321f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001321f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132214;
        }
    }
L_001321fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132200:;
    {
        cpu->r[14] = 0x00132204u; fn_000b2bc8(cpu);
    }
L_00132204:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132208:;
    {
        cpu->r[14] = 0x0013220cu; fn_0018ba20(cpu);
    }
L_0013220c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132210:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_00132214:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x168u);
    }
L_00132218:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013221c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132238;
        }
    }
L_00132220:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132224:;
    {
        cpu->r[14] = 0x00132228u; fn_000b2bc8(cpu);
    }
L_00132228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013222c:;
    {
        cpu->r[14] = 0x00132230u; fn_0018ba20(cpu);
    }
L_00132230:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132234:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
    }
L_00132238:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x40u);
    }
L_0013223c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00132240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013225c;
        }
    }
L_00132244:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132248:;
    {
        cpu->r[14] = 0x0013224cu; fn_000b2bc8(cpu);
    }
L_0013224c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132250:;
    {
        cpu->r[14] = 0x00132254u; fn_0018ba20(cpu);
    }
L_00132254:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132258:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_0013225c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132260:;
    {
        cpu->r[14] = 0x00132264u; fn_0018ba20(cpu);
    }
L_00132264:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_00132268:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013226c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00132270:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001440u, 0, 0);
    }
L_00132274:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00132278:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x000002b4u, 0, 0);
    }
L_0013227c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00132280:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_00132284:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00132288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013229c;
        }
    }
L_0013228c:;
    {
        cpu->r[14] = 0x00132290u; fn_000b2bc8(cpu);
    }
L_00132290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132294:;
    {
        cpu->r[14] = 0x00132298u; fn_0018ba20(cpu);
    }
L_00132298:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[10]);
    }
L_0013229c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_001322a0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001322a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132280;
        }
    }
L_001322a8:;
    {
        cpu->r[3] = rd32(0x001322b0u + + 0xf0u);
    }
L_001322ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001340u, 0, 0);
    }
L_001322b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x0000010cu, 0, 0);
    }
L_001322b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001cu, 0, 0);
    }
L_001322b8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001322bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001322c0:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x18u;
        wr32(cpu->r[4] + - 0x18u, cpu->r[5]);
        cpu->r[4] = wb_tmp;
    }
L_001322c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001322c8:;
    {
        cpu->r[14] = 0x001322ccu; fn_00155630(cpu);
    }
L_001322cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001322d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001322c0;
        }
    }
L_001322d4:;
    {
        cpu->r[5] = 0x00001358u;
    }
L_001322d8:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001322dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001322e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001322fc;
        }
    }
L_001322e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001322e8:;
    {
        cpu->r[14] = 0x001322ecu; fn_000b2bc8(cpu);
    }
L_001322ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001322f0:;
    {
        cpu->r[14] = 0x001322f4u; fn_0018ba20(cpu);
    }
L_001322f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001322f8:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_001322fc:;
    {
        cpu->r[5] = 0x0000122cu;
    }
L_00132300:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00132304:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00132308:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132324;
        }
    }
L_0013230c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132310:;
    {
        cpu->r[14] = 0x00132314u; fn_000b2bc8(cpu);
    }
L_00132314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132318:;
    {
        cpu->r[14] = 0x0013231cu; fn_0018ba20(cpu);
    }
L_0013231c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132320:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_00132324:;
    {
        cpu->r[3] = rd32(0x0013232cu + + 0x78u);
    }
L_00132328:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00001100u, 0, 0);
    }
L_0013232c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x000000e8u, 0, 0);
    }
L_00132330:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_00132334:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00132338:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0013233c:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x18u;
        wr32(cpu->r[4] + - 0x18u, cpu->r[5]);
        cpu->r[4] = wb_tmp;
    }
L_00132340:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132344:;
    {
        cpu->r[14] = 0x00132348u; fn_00155630(cpu);
    }
L_00132348:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0013234c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013233c;
        }
    }
L_00132350:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000ea0u, 0, 0);
    }
L_00132354:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00132358:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000270u, 0, 0);
    }
L_0013235c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00132360:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_00132364:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00132368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013237c;
        }
    }
L_0013236c:;
    {
        cpu->r[14] = 0x00132370u; fn_000b2bc8(cpu);
    }
L_00132370:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132374:;
    {
        cpu->r[14] = 0x00132378u; fn_0018ba20(cpu);
    }
L_00132378:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[8]);
    }
L_0013237c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_00132380:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00132384:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132360;
        }
    }
L_00132388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000e80u, 0, 0);
    }
L_0013238c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00132390:;
    {
        cpu->r[14] = 0x00132394u; fn_001556c0(cpu);
    }
L_00132394:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00132398:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013239cu)) return;
    }
}

/* _ZN10LibEffectsC2Ev @ 001323a8 (arm) */
void fn_001323a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001323a8:;
    {
        cpu->r[1] = rd32(0x001323b0u + + 0x6cu);
    }
L_001323ac:;
    {
        cpu->r[2] = (~0x00000033u);
    }
L_001323b0:;
    {
        cpu->r[12] = 0x00000033u;
    }
L_001323b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001323bcu + + 0x58u);
    }
L_001323b8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001323bc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001323c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001323c8u, cpu->r[1], 0, 0);
    }
L_001323c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001323ccu + + 0x4cu);
    }
L_001323c8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_001323cc:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_001323d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001323d4:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[2]);
    }
L_001323d8:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[12]);
    }
L_001323dc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001323e0:;
    {
        wr8(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001323e4:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_001323e8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_001323ec:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_001323f0:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001323f4:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_001323f8:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[12]);
    }
L_001323fc:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_00132400:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00132404:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[1]);
    }
L_00132408:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_0013240c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00132410:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffectsC1Ev @ 00132420 (arm) */
void fn_00132420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132420:;
    {
        cpu->r[1] = rd32(0x00132428u + + 0x6cu);
    }
L_00132424:;
    {
        cpu->r[2] = (~0x00000033u);
    }
L_00132428:;
    {
        cpu->r[12] = 0x00000033u;
    }
L_0013242c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00132434u + + 0x58u);
    }
L_00132430:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00132434:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00132438:;
    {
        cpu->r[1] = add_flags(cpu, 0x00132440u, cpu->r[1], 0, 0);
    }
L_0013243c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00132444u + + 0x4cu);
    }
L_00132440:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_00132444:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_00132448:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013244c:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[2]);
    }
L_00132450:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[12]);
    }
L_00132454:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00132458:;
    {
        wr8(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_0013245c:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_00132460:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_00132464:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_00132468:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0013246c:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_00132470:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[12]);
    }
L_00132474:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_00132478:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013247c:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[1]);
    }
L_00132480:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_00132484:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00132488:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffectsD2Ev @ 00132498 (arm) */
void fn_00132498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132498:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffectsD1Ev @ 0013249c (arm) */
void fn_0013249c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013249c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects17RenderTargetGroupD2Ev @ 001324a0 (arm) */
void fn_001324a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects17RenderTargetGroupD1Ev @ 001324a4 (arm) */
void fn_001324a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects14restoreTUSetupEv @ 001324a8 (arm) */
void fn_001324a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects12saveTUStatesEv @ 001324ac (arm) */
void fn_001324ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects14TakeScreenShotEPKc @ 001324b0 (arm) */
void fn_001324b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001324b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects17RenderTargetGroup6createEjjjjii @ 001324b8 (arm) */
void fn_001324b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001324bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects17RenderTargetGroup15RenderLuminanceEjf @ 001324c0 (arm) */
void fn_001324c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects17RenderTargetGroup13RenderBlurredEjf @ 001324c4 (arm) */
void fn_001324c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects8ShutdownEv @ 001324c8 (arm) */
void fn_001324c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects13enableTextureEjj @ 001324cc (arm) */
void fn_001324cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects14disableTextureEj @ 001324d0 (arm) */
void fn_001324d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects13setupSubtractEv @ 001324d4 (arm) */
void fn_001324d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects20setupModulateByColorEv @ 001324d8 (arm) */
void fn_001324d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects13setupAddColorEv @ 001324dc (arm) */
void fn_001324dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects4drawEPNS_17RenderTargetGroupEj @ 001324e0 (arm) */
void fn_001324e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects5BeginEv @ 001324e4 (arm) */
void fn_001324e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects4InitEv @ 001324e8 (arm) */
void fn_001324e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects6RenderEv @ 001324ec (arm) */
void fn_001324ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects22BeginRenderTargetGroupEPNS_17RenderTargetGroupE @ 001324f0 (arm) */
void fn_001324f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10LibEffects20EndRenderTargetGroupEPNS_17RenderTargetGroupE @ 001324f4 (arm) */
void fn_001324f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z7LoadTGAP12TextureImagePc @ 001324f8 (arm) */
void fn_001324f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001324f8:;
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
L_001324fc:;
    {
        cpu->r[4] = rd32(0x00132504u + + 0x24cu);
    }
L_00132500:;
    {
        cpu->r[7] = rd32(0x00132508u + + 0x24cu);
    }
L_00132504:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00132508:;
    {
        cpu->r[4] = add_flags(cpu, 0x00132510u, cpu->r[4], 0, 0);
    }
L_0013250c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00132510:;
    {
        cpu->r[1] = rd32(0x00132518u + + 0x240u);
    }
L_00132514:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00132518:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0013251c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132520:;
    {
        cpu->r[1] = add_flags(cpu, 0x00132528u, cpu->r[1], 0, 0);
    }
L_00132524:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00132528:;
    {
        wr8(cpu->r[13] + + 0x3bu, cpu->r[3]);
    }
L_0013252c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00132530:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00132534:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[12]);
    }
L_00132538:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[3]);
    }
L_0013253c:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[3]);
    }
L_00132540:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00132544:;
    {
        wr8(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_00132548:;
    {
        wr8(cpu->r[13] + + 0x35u, cpu->r[3]);
    }
L_0013254c:;
    {
        wr8(cpu->r[13] + + 0x36u, cpu->r[3]);
    }
L_00132550:;
    {
        wr8(cpu->r[13] + + 0x37u, cpu->r[3]);
    }
L_00132554:;
    {
        wr8(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00132558:;
    {
        wr8(cpu->r[13] + + 0x39u, cpu->r[3]);
    }
L_0013255c:;
    {
        wr8(cpu->r[13] + + 0x3au, cpu->r[3]);
    }
L_00132560:;
    {
        cpu->r[14] = 0x00132564u; imp_fopen(cpu); /* fopen */
    }
L_00132564:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132568:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_0013256c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013259c;
        }
    }
L_00132570:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00132574:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00132578:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013257c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00132580:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00132584:;
    {
        cpu->r[14] = 0x00132588u; imp_fread(cpu); /* fread */
    }
L_00132588:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 1);
    }
L_0013258c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001325b8;
        }
    }
L_00132590:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00132594:;
    {
        cpu->r[14] = 0x00132598u; imp_fclose(cpu); /* fclose */
    }
L_00132598:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013259c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001325a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001325a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001325a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001325ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013274c;
        }
    }
L_001325b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001325b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001325b8u)) return;
    }
L_001325b8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001325bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001325c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001325c4:;
    {
        cpu->r[14] = 0x001325c8u; imp_memcmp(cpu); /* memcmp */
    }
L_001325c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001325cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132590;
        }
    }
L_001325d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001325d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001325d8:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001325dc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001325e0:;
    {
        cpu->r[14] = 0x001325e4u; imp_fread(cpu); /* fread */
    }
L_001325e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_001325e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132590;
        }
    }
L_001325ec:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x1du);
    }
L_001325f0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1cu);
    }
L_001325f4:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x1fu);
    }
L_001325f8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 8u, &shc), 0, 0);
    }
L_001325fc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1eu);
    }
L_00132600:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00132604:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[10]);
    }
L_00132608:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_0013260c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_00132610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132590;
        }
    }
L_00132614:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00132618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132590;
        }
    }
L_0013261c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x20u);
    }
L_00132620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_00132624:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
        }
    }
L_00132628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132590;
        }
    }
L_0013262c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[2] = v;
    }
L_00132630:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[8] = v;
    }
L_00132634:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00132638:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[10] = v;
    }
L_0013263c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00132640:;
    {
        cpu->r[14] = 0x00132644u; imp_malloc(cpu); /* malloc */
    }
L_00132644:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132648:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_0013264c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132590;
        }
    }
L_00132650:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00132654:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00132658:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013265c:;
    {
        cpu->r[14] = 0x00132660u; imp_fread(cpu); /* fread */
    }
L_00132660:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_00132664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013267c;
        }
    }
L_00132668:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013266c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132590;
        }
    }
L_00132674:;
    {
        cpu->r[14] = 0x00132678u; imp_free(cpu); /* free */
    }
L_00132678:;
    {
        goto L_00132590;
    }
L_0013267c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132680:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00132684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001326b0;
        }
    }
L_00132688:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0013268c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00132690:;
    {
        cpu->r[14] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_00132694:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00132698:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[14]);
    }
L_0013269c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001326a0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001326a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001326a8:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[12]);
    }
L_001326ac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00132688;
        }
    }
L_001326b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001326b4:;
    {
        cpu->r[14] = 0x001326b8u; imp_fclose(cpu); /* fclose */
    }
L_001326b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001326bc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001326c0:;
    {
        cpu->r[14] = 0x001326c4u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_001326c4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_001326c8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001326cc:;
    {
        cpu->r[14] = 0x001326d0u; imp_glBindTexture(cpu); /* glBindTexture */
    }
L_001326d0:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001326d4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001326d8:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_001326dc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_001326e0:;
    {
        cpu->r[14] = 0x001326e4u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_001326e4:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001326e8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001326ec:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_001326f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_001326f4:;
    {
        cpu->r[14] = 0x001326f8u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_001326f8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[6] = v0;
        cpu->r[12] = v1;
    }
L_001326fc:;
    {
        cpu->r[2] = 0x00001907u;
    }
L_00132700:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00132704:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00132708:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0013270c:;
    {
        cpu->r[1] = 0x00001908u;
    }
L_00132710:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_00132714:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_00132718:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0013271c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00132720:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00132724:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00132728:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0013272c:;
    {
        cpu->r[5] = 0x00001401u;
    }
L_00132730:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00132734:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00132738:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0013273c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00132740:;
    {
        cpu->r[14] = 0x00132744u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00132744:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00132748:;
    {
        goto L_0013259c;
    }
L_0013274c:;
    {
        cpu->r[14] = 0x00132750u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00132750:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[8], 2, 30u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_00132754:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00132758:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[13] & shifter(cpu->r[0], 4, (cpu->r[5] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
}

/* _ZN11CObjectInfoC2Ev @ 0013275c (arm) */
void fn_0013275c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013275c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00132760:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00132764:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CObjectInfoC1Ev @ 00132768 (arm) */
void fn_00132768(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132768:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013276c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00132770:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CObjectInfoD2Ev @ 00132774 (arm) */
void fn_00132774(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132774:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00132778:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013277c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00132784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001327a0;
        }
    }
L_00132788:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013278c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00132790:;
    {
        cpu->r[14] = 0x00132798u;
    }
L_00132794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00132798u)) return;
    }
L_00132798:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013279c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001327a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001327a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001327a8u)) return;
    }
}

/* _ZN11CObjectInfoD1Ev @ 001327a8 (arm) */
void fn_001327a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001327a8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001327ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001327b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001327b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001327b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001327d4;
        }
    }
L_001327bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001327c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001327c4:;
    {
        cpu->r[14] = 0x001327ccu;
    }
L_001327c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001327ccu)) return;
    }
L_001327cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001327d0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001327d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001327d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001327dcu)) return;
    }
}

/* _ZN14ObjectsLibraryC2Ev @ 001327dc (arm) */
void fn_001327dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001327dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001327e0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001327e4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001327e8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001327ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ObjectsLibraryC1Ev @ 001327f0 (arm) */
void fn_001327f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001327f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001327f4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001327f8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001327fc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00132800:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ObjectsLibrary5CleanEv @ 00132804 (arm) */
void fn_00132804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132804:;
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
L_00132808:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[9] = v1;
    }
L_0013280c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00132810:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00132814:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_00132818:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013281c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132820u)) return;
        }
    }
L_00132820:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00132824:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00132828:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0013282c:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_00132830:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00132834:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00132880;
        }
    }
L_00132838:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0013283c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00132840:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_00132844:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_00132848:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013284c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00132850:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_00132854:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00132858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132870;
        }
    }
L_0013285c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00132860:;
    {
        cpu->r[14] = 0x00132868u;
    }
L_00132864:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00132868u)) return;
    }
L_00132868:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013286c:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[4];
        wr32(cpu->r[3] + cpu->r[4], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_00132870:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00132874:;
    {
        wr8(cpu->r[3] + + 0xau, cpu->r[7]);
    }
L_00132878:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_0013287c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132844;
        }
    }
L_00132880:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00132884:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_00132888:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013288cu)) return;
        }
    }
L_0013288c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00132890:;
    {
        goto L_00132828;
    }
}

/* _ZN14ObjectsLibrary11GetObjIndexEii @ 00132894 (arm) */
void fn_00132894(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132894:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00132898:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0013289c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001328a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001328a4:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
    }
L_001328a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001328ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001328b0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001328b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001328b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001328bc:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x8u);
    }
L_001328c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001328c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001328c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001328d4;
        }
    }
L_001328cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001328d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001328e0;
        }
    }
L_001328d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001328d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001328ac;
        }
    }
L_001328dc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001328e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001328e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ObjectsLibrary10GetObjAnimEti @ 001328e8 (arm) */
void fn_001328e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001328e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001328ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001328f0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001328f4:;
    {
        cpu->r[14] = 0x001328f8u; fn_00132894(cpu);
    }
L_001328f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001328fc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
        }
    }
L_00132900:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00132904:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5]);
        }
    }
L_00132908:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_0013290c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00132910:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_00132914:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132918u)) return;
    }
}

/* _ZN14ObjectsLibrary11GetObjFlagsEthi @ 00132918 (arm) */
void fn_00132918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132918:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013291c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00132920:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00132924:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00132928:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013292c:;
    {
        cpu->r[14] = 0x00132930u; fn_00132894(cpu);
    }
L_00132930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132934:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
        }
    }
L_00132938:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013293c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_00132940:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00132944:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00132948:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_0013294c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd8(cpu->r[0] + + 0xau);
        }
    }
L_00132950:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[5] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00132954:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132958u)) return;
    }
}

/* _ZN14ObjectsLibrary11SetObjFlagsEthi @ 00132958 (arm) */
void fn_00132958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132958:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013295c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00132960:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00132964:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00132968:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013296c:;
    {
        cpu->r[14] = 0x00132970u; fn_00132894(cpu);
    }
L_00132970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132974:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132978u)) return;
        }
    }
L_00132978:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013297c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00132980:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00132984:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00132988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013298c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xau);
    }
L_00132990:;
    {
        uint32_t v = cpu->r[5] | cpu->r[3]; cpu->r[5] = v;
    }
L_00132994:;
    {
        wr8(cpu->r[0] + + 0xau, cpu->r[5]);
    }
L_00132998:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013299cu)) return;
    }
}

/* _ZN14ObjectsLibrary15GetObjAnimIndexEii @ 0013299c (arm) */
void fn_0013299c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013299c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001329a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001329a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001329a8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001329b4;
        }
    }
L_001329ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001329b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001329b4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001329b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001329bc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001329ac;
        }
    }
L_001329c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001329c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001329c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001329cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ObjectsLibrary13CleanAniIndexEii @ 001329d0 (arm) */
void fn_001329d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001329d0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001329d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001329d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001329dc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001329e0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001329e4u)) return;
        }
    }
L_001329e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001329e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001329ec:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001329f0u)) return;
        }
    }
L_001329f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001329f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001329f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001329fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132a00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132a04u)) return;
        }
    }
L_00132a04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00132a08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00132a0c:;
    {
        cpu->r[14] = 0x00132a14u;
    }
L_00132a10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00132a14u)) return;
    }
L_00132a14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00132a18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00132a1c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
    }
L_00132a20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132a24u)) return;
    }
}

/* _ZN14ObjectsLibrary8CleanAniEti @ 00132a24 (arm) */
void fn_00132a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132a24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00132a28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00132a2c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00132a30:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00132a34:;
    {
        cpu->r[14] = 0x00132a38u; fn_00132894(cpu);
    }
L_00132a38:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132a3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00132ae0;
        }
    }
L_00132a40:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00132a44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00132a48:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00132a4c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00132a50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00132a94;
        }
    }
L_00132a54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00132a58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00132a5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00132a60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132a8c;
        }
    }
L_00132a68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00132a6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00132a70:;
    {
        cpu->r[14] = 0x00132a78u;
    }
L_00132a74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00132a78u)) return;
    }
L_00132a78:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00132a7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00132a80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00132a84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00132a88:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00132a8c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00132a90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132a94u)) return;
    }
L_00132a94:;
    {
        cpu->r[1] = rd32(0x00132a9cu + + 0x7cu);
    }
L_00132a98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00132a9c:;
    {
        cpu->r[2] = rd32(0x00132aa4u + + 0x78u);
    }
L_00132aa0:;
    {
        cpu->r[14] = 0x00000113u;
    }
L_00132aa4:;
    {
        cpu->r[3] = rd32(0x00132aacu + + 0x74u);
    }
L_00132aa8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00132ab0u, cpu->r[1], 0, 0);
    }
L_00132aac:;
    {
        cpu->r[12] = rd32(0x00132ab4u + + 0x70u);
    }
L_00132ab0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00132ab8u, cpu->r[2], 0, 0);
    }
L_00132ab4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00132abcu, cpu->r[3], 0, 0);
    }
L_00132ab8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00132abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00132ac4u, cpu->r[12], 0, 0);
    }
L_00132ac0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00132ac4:;
    {
        cpu->r[14] = 0x00132ac8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00132ac8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00132acc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00132ad0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00132ad4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00132ad8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00132a8c;
        }
    }
L_00132adc:;
    {
        goto L_00132a54;
    }
L_00132ae0:;
    {
        cpu->r[1] = rd32(0x00132ae8u + + 0x40u);
    }
L_00132ae4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00132ae8:;
    {
        cpu->r[2] = rd32(0x00132af0u + + 0x3cu);
    }
L_00132aec:;
    {
        cpu->r[14] = 0x00000113u;
    }
L_00132af0:;
    {
        cpu->r[3] = rd32(0x00132af8u + + 0x38u);
    }
L_00132af4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00132afcu, cpu->r[1], 0, 0);
    }
L_00132af8:;
    {
        cpu->r[12] = rd32(0x00132b00u + + 0x34u);
    }
L_00132afc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00132b04u, cpu->r[2], 0, 0);
    }
L_00132b00:;
    {
        cpu->r[3] = add_flags(cpu, 0x00132b08u, cpu->r[3], 0, 0);
    }
L_00132b04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00132b08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00132b10u, cpu->r[12], 0, 0);
    }
L_00132b0c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00132b10:;
    {
        cpu->r[14] = 0x00132b14u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00132b14:;
    {
        goto L_00132a8c;
    }
}

/* _ZN14ObjectsLibrary15LoadObjectIndexEii @ 00132b38 (arm) */
void fn_00132b38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132b38:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00132b3c:;
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
L_00132b40:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00132b44:;
    {
        cpu->r[7] = rd32(0x00132b4cu + + 0x17cu);
    }
L_00132b48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00132b4c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00132b50:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00132b54:;
    {
        cpu->r[7] = add_flags(cpu, 0x00132b5cu, cpu->r[7], 0, 0);
    }
L_00132b58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00132b68;
        }
    }
L_00132b5c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00132b60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00132b64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132b68u)) return;
    }
L_00132b68:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00132b6c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00132b70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00132b5c;
        }
    }
L_00132b74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00132b7c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00132b80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00132b84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132b88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00132b8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132b60;
        }
    }
L_00132b90:;
    {
        cpu->r[3] = rd32(0x00132b98u + + 0x134u);
    }
L_00132b94:;
    {
        cpu->r[11] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00132b98:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00132b9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00132ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132c7c;
        }
    }
L_00132ba4:;
    {
        cpu->r[9] = rd32(0x00132bacu + + 0x124u);
    }
L_00132ba8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_00132bac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00132bb0:;
    {
        cpu->r[14] = 0x00132bb4u; fn_00189f5c(cpu);
    }
L_00132bb4:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00132bb8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00132bbc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00132bc0:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_00132bc4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00132bc8:;
    {
        cpu->r[14] = 0x00132bccu; fn_001897b4(cpu);
    }
L_00132bcc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00132bd0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00132bd4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00132bd8:;
    {
        cpu->r[14] = 0x00132bdcu; fn_0018972c(cpu);
    }
L_00132bdc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132be0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00132be4:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00132be8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00132bec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00132bf0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00132bf4:;
    {
        cpu->r[14] = 0x00132bf8u; fn_0018a578(cpu);
    }
L_00132bf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00132bfc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00132c00:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00132c04:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00132c08:;
    {
        cpu->r[14] = 0x00132c0cu; fn_000fc5d4(cpu);
    }
L_00132c0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132c10:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_00132c14:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00132c18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00132c1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00132c20:;
    {
        uint32_t v = cpu->r[12] * cpu->r[8] + cpu->r[3]; cpu->r[12] = v;
    }
L_00132c24:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_00132c28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00132c2c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00132c30:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x4u);
    }
L_00132c34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00132c38:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00132c3c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00132c40:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_00132c44:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_00132c48:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00132c4c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00132c50:;
    {
        cpu->r[14] = 0x00132c54u; fn_0014156c(cpu);
    }
L_00132c54:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132c58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_00132c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132b60;
        }
    }
L_00132c60:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00132c64:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00132c68:;
    {
        cpu->r[14] = 0x00132c6cu; fn_00189870(cpu);
    }
L_00132c6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132c70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00132c74:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[4]);
    }
L_00132c78:;
    {
        goto L_00132b60;
    }
L_00132c7c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00132c80:;
    {
        cpu->r[14] = 0x00132c84u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00132c84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132ba4;
        }
    }
L_00132c8c:;
    {
        cpu->r[9] = rd32(0x00132c94u + + 0x3cu);
    }
L_00132c90:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_00132c94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00132c98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00132c9c:;
    {
        cpu->r[14] = 0x00132ca0u; fn_00189f48(cpu);
    }
L_00132ca0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00132ca4:;
    {
        cpu->r[14] = 0x00132ca8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00132ca8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00132cac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00132cb0:;
    {
        cpu->r[3] = rd32(0x00132cb8u + + 0x1cu);
    }
L_00132cb4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00132cb8:;
    {
        cpu->r[3] = rd32(0x00132cc0u + + 0x18u);
    }
L_00132cbc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00132cc0:;
    {
        cpu->r[14] = 0x00132cc4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00132cc4:;
    {
        goto L_00132ba8;
    }
}

/* _ZN14ObjectsLibrary10LoadObjectEti @ 00132cdc (arm) */
void fn_00132cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132cdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00132ce0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00132ce4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00132ce8:;
    {
        cpu->r[14] = 0x00132cecu; fn_00132894(cpu);
    }
L_00132cec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132cf0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00132d04;
        }
    }
L_00132cf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132cf8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00132cfc:;
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
L_00132d00:;
    {
        return fn_00132b38(cpu);
    }
L_00132d04:;
    {
        cpu->r[0] = (~0x00000063u);
    }
L_00132d08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132d0cu)) return;
    }
}

/* _ZN10ObjectPackD1Ev @ 00132d0c (arm) */
void fn_00132d0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132d0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00132d10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00132d14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132d18:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00132d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132d64;
        }
    }
L_00132d20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00132d24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00132d28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00132d2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00132d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132d3c;
        }
    }
L_00132d34:;
    {
        goto L_00132d54;
    }
L_00132d38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132d3c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 0);
    }
L_00132d40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132d44:;
    {
        cpu->r[14] = 0x00132d48u; fn_001327a8(cpu);
    }
L_00132d48:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132d4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00132d50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132d38;
        }
    }
L_00132d54:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00132d58:;
    {
        cpu->r[14] = 0x00132d5cu; fn_0018ba60(cpu);
    }
L_00132d5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132d60:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00132d64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132d68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132d6cu)) return;
    }
}

/* _ZN14ObjectsLibrary18Package_UnRegisterEi @ 00132d6c (arm) */
void fn_00132d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132d6c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00132d70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00132d74:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00132d78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00132d7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00132d80:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_00132d84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132d88u)) return;
        }
    }
L_00132d88:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00132d8c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00132d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132db0;
        }
    }
L_00132d94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00132d98:;
    {
        cpu->r[14] = 0x00132d9cu; fn_00132d0c(cpu);
    }
L_00132d9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00132da0:;
    {
        cpu->r[14] = 0x00132da4u; fn_0018ba20(cpu);
    }
L_00132da4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00132da8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00132dac:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_00132db0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00132db4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00132db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132dbcu)) return;
    }
}

/* _ZN14ObjectsLibrary11FreeAllDataEv @ 00132dbc (arm) */
void fn_00132dbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132dbc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00132dc0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00132dc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00132dc8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00132dcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00132dd0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00132dd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132dd8u)) return;
        }
    }
L_00132dd8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00132ddc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132de0:;
    {
        cpu->r[14] = 0x00132de4u; fn_00132d6c(cpu);
    }
L_00132de4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00132de8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00132dec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00132df0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00132df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132dd8;
        }
    }
L_00132df8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132dfcu)) return;
    }
}

/* _ZN10ObjectPackD2Ev @ 00132dfc (arm) */
void fn_00132dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132dfc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00132e00:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00132e04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00132e08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00132e0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132e54;
        }
    }
L_00132e10:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00132e14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00132e18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00132e1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00132e20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132e2c;
        }
    }
L_00132e24:;
    {
        goto L_00132e44;
    }
L_00132e28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132e2c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 0);
    }
L_00132e30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132e34:;
    {
        cpu->r[14] = 0x00132e38u; fn_001327a8(cpu);
    }
L_00132e38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00132e3c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00132e40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132e28;
        }
    }
L_00132e44:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00132e48:;
    {
        cpu->r[14] = 0x00132e4cu; fn_0018ba60(cpu);
    }
L_00132e4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00132e50:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00132e54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132e58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132e5cu)) return;
    }
}

/* _ZN10ObjectPackC1Ei @ 00132e5c (arm) */
void fn_00132e5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132e5c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00132e60:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00132e64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00132e68:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00132e6c:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00132e70:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00132e74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00132e78:;
    {
        cpu->r[14] = 0x00132e7cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00132e7c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00132e80:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00132e84:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00132e88:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00132e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132eb0;
        }
    }
L_00132e90:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00132e94:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00132e98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132e9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00132ea0:;
    {
        cpu->r[14] = 0x00132ea4u; fn_00132768(cpu);
    }
L_00132ea4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00132ea8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00132eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132e98;
        }
    }
L_00132eb0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_00132eb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00132eb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132ebcu)) return;
    }
}

/* _ZN10ObjectPackC2Ei @ 00132ebc (arm) */
void fn_00132ebc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132ebc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00132ec0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00132ec4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00132ec8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00132ecc:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00132ed0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00132ed4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00132ed8:;
    {
        cpu->r[14] = 0x00132edcu; imp__Znaj(cpu); /* _Znaj */
    }
L_00132edc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00132ee0:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00132ee4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00132ee8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00132eec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132f10;
        }
    }
L_00132ef0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00132ef4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00132ef8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00132efc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00132f00:;
    {
        cpu->r[14] = 0x00132f04u; fn_00132768(cpu);
    }
L_00132f04:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00132f08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00132f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00132ef8;
        }
    }
L_00132f10:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_00132f14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00132f18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132f1cu)) return;
    }
}

/* _ZN14ObjectsLibraryD2Ev @ 00132f1c (arm) */
void fn_00132f1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132f1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00132f20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00132f24:;
    {
        cpu->r[14] = 0x00132f28u; fn_00132dbc(cpu);
    }
L_00132f28:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00132f2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132f4c;
        }
    }
L_00132f34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00132f38:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00132f3c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00132f40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00132f44:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00132f54;
        }
    }
L_00132f48:;
    {
        cpu->r[14] = 0x00132f4cu; fn_002082a8(cpu);
    }
L_00132f4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132f50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132f54u)) return;
    }
L_00132f54:;
    {
        cpu->r[14] = 0x00132f58u; fn_0018ba20(cpu);
    }
L_00132f58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132f5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132f60u)) return;
    }
}

/* _ZN14ObjectsLibraryD1Ev @ 00132f60 (arm) */
void fn_00132f60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132f60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00132f64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00132f68:;
    {
        cpu->r[14] = 0x00132f6cu; fn_00132dbc(cpu);
    }
L_00132f6c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00132f70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00132f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132f90;
        }
    }
L_00132f78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00132f7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00132f80:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00132f84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00132f88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00132f98;
        }
    }
L_00132f8c:;
    {
        cpu->r[14] = 0x00132f90u; fn_002082a8(cpu);
    }
L_00132f90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132f94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132f98u)) return;
    }
L_00132f98:;
    {
        cpu->r[14] = 0x00132f9cu; fn_0018ba20(cpu);
    }
L_00132f9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00132fa0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00132fa4u)) return;
    }
}

/* _ZN14ObjectsLibrary16Package_RegisterEi @ 00132fa4 (arm) */
void fn_00132fa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00132fa4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00132fa8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00132fac:;
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
L_00132fb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00132fb4:;
    {
        cpu->r[4] = rd32(0x00132fbcu + + 0x2a8u);
    }
L_00132fb8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00132fbc:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_00132fc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00132fc4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00132fccu, cpu->r[4], 0, 0);
    }
L_00132fc8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00132fcc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00132fd8;
        }
    }
L_00132fd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00132fd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00132fd8u)) return;
    }
L_00132fd8:;
    {
        cpu->r[3] = rd32(0x00132fe0u + + 0x288u);
    }
L_00132fdc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00132fe0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00132fe4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00132fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001330c8;
        }
    }
L_00132fec:;
    {
        cpu->r[7] = rd32(0x00132ff4u + + 0x278u);
    }
L_00132ff0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00132ff4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00132ff8:;
    {
        cpu->r[14] = 0x00132ffcu; fn_00189f5c(cpu);
    }
L_00132ffc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00133000:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00133004:;
    {
        cpu->r[14] = 0x00133008u; fn_001897b4(cpu);
    }
L_00133008:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013300c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133190;
        }
    }
L_00133010:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133014:;
    {
        cpu->r[14] = 0x00133018u; fn_000fc650(cpu);
    }
L_00133018:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013301c:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_00133020:;
    {
        cpu->r[14] = 0x00133024u; fn_0018ba6c(cpu);
    }
L_00133024:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00133028:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0013302c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00133030:;
    {
        cpu->r[14] = 0x00133034u; fn_00132e5c(cpu);
    }
L_00133034:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00133038:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013303c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00133040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013310c;
        }
    }
L_00133044:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_00133048:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
    }
L_0013304c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00133050:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00133054:;
    {
        cpu->r[6] = rd32(cpu->r[10] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00133058:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0013305c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00133060:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_00133064:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_00133068:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001330b8;
        }
    }
L_0013306c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00133070:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_00133074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133078:;
    {
        cpu->r[14] = 0x0013307cu; fn_000fc628(cpu);
    }
L_0013307c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00133080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133084:;
    {
        cpu->r[14] = 0x00133088u; fn_000fc650(cpu);
    }
L_00133088:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0013308c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00133090:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_00133094:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00133098:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_0013309c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001330a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_001330a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001330a8:;
    {
        if (cond_test(cpu, 12)) {
        wr16(cpu->r[3] + + 0x8u, cpu->r[0]);
        }
    }
L_001330ac:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[10]);
        }
    }
L_001330b0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001330b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00133074;
        }
    }
L_001330b8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001330bc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001330c0:;
    {
        cpu->r[14] = 0x001330c4u; fn_00189870(cpu);
    }
L_001330c4:;
    {
        goto L_00132fd0;
    }
L_001330c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001330cc:;
    {
        cpu->r[14] = 0x001330d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001330d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001330d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00132fec;
        }
    }
L_001330d8:;
    {
        cpu->r[7] = rd32(0x001330e0u + + 0x18cu);
    }
L_001330dc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001330e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001330e4:;
    {
        cpu->r[14] = 0x001330e8u; fn_00189f48(cpu);
    }
L_001330e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001330ec:;
    {
        cpu->r[14] = 0x001330f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001330f0:;
    {
        cpu->r[3] = rd32(0x001330f8u + + 0x178u);
    }
L_001330f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001330f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001330fc:;
    {
        cpu->r[3] = rd32(0x00133104u + + 0x170u);
    }
L_00133100:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00133104:;
    {
        cpu->r[14] = 0x00133108u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00133108:;
    {
        goto L_00132ff0;
    }
L_0013310c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00133110:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00133114:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00133118:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0013311c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[1], 0, 0);
        }
    }
L_00133120:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_00133124:;
    {
        add_flags(cpu, cpu->r[12], 0xc0000001u, 0, 1);
    }
L_00133128:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001331c8;
        }
    }
L_0013312c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00133130:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001331c8;
        }
    }
L_00133134:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00133138:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[12];
        }
    }
L_0013313c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133240;
        }
    }
L_00133140:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00133144:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_00133148:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133214;
        }
    }
L_0013314c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00133150:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00133154:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
    }
L_00133158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133184;
        }
    }
L_0013315c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00133160:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00133164:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00133168:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001331f8;
        }
    }
L_0013316c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00133170:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00133174:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00133178:;
    {
        cpu->r[14] = 0x0013317cu; fn_002082a8(cpu);
    }
L_0013317c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00133180:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00133184:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00133188:;
    {
        wr32(cpu->r[5], cpu->r[10]);
    }
L_0013318c:;
    {
        goto L_00133050;
    }
L_00133190:;
    {
        cpu->r[1] = rd32(0x00133198u + + 0xe0u);
    }
L_00133194:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00133198:;
    {
        cpu->r[12] = rd32(0x001331a0u + + 0xdcu);
    }
L_0013319c:;
    {
        cpu->r[14] = 0x00000064u;
    }
L_001331a0:;
    {
        cpu->r[2] = rd32(0x001331a8u + + 0xd8u);
    }
L_001331a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001331acu, cpu->r[1], 0, 0);
    }
L_001331a8:;
    {
        cpu->r[3] = rd32(0x001331b0u + + 0xd4u);
    }
L_001331ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x001331b4u, cpu->r[12], 0, 0);
    }
L_001331b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001331b8u, cpu->r[2], 0, 0);
    }
L_001331b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001331b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001331c0u, cpu->r[3], 0, 0);
    }
L_001331bc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001331c0:;
    {
        cpu->r[14] = 0x001331c4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001331c4:;
    {
        goto L_00133010;
    }
L_001331c8:;
    {
        cpu->r[12] = (~0x00000003u);
    }
L_001331cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001331d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001331d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001331d8:;
    {
        cpu->r[14] = 0x001331dcu; fn_0018ba6c(cpu);
    }
L_001331dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001331e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001331e4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001331e8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001331ec:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000003u; cpu->r[12] = v;
    }
L_001331f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001331f4:;
    {
        goto L_00133140;
    }
L_001331f8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001331fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00133200:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00133204:;
    {
        cpu->r[14] = 0x00133208u; fn_0018ba20(cpu);
    }
L_00133208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013320c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00133210:;
    {
        goto L_00133184;
    }
L_00133214:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00133218:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013321c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00133220:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00133224:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00133228:;
    {
        cpu->r[14] = 0x0013322cu; imp_memmove(cpu); /* memmove */
    }
L_0013322c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00133230:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00133234:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00133238:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0013323c:;
    {
        goto L_0013314c;
    }
L_00133240:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00133244:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00133248:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000080u, 1, 1);
    }
L_0013324c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001331d0;
        }
    }
L_00133250:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00133254:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00133258:;
    {
        cpu->r[14] = 0x0013325cu; fn_00208278(cpu);
    }
L_0013325c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00133260:;
    {
        goto L_001331e0;
    }
}

/* _ZN8COverlayC2Ev @ 00133288 (arm) */
void fn_00133288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133288:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013328c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00133290:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00133294:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00133298:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0013329c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001332a0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001332a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8COverlayC1Ev @ 001332a8 (arm) */
void fn_001332a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001332a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001332ac:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001332b0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001332b4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001332b8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001332bc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001332c0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001332c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8COverlay9FillDecalEiiP12CDecalModule @ 001332c8 (arm) */
void fn_001332c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001332c8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001332cc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x14u);
    }
L_001332d0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x10u);
    }
L_001332d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001332d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001332dc:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x3u);
    }
L_001332e0:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x2u);
    }
L_001332e4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001332e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001332ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001332f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001332f4:;
    {
        cpu->r[2] = rd8(cpu->r[12] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_001332f8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1u);
    }
L_001332fc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00133300:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00133304:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00133308:;
    {
        cpu->r[1] = rd8(cpu->r[0] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_0013330c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x1u);
    }
L_00133310:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00133314:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000a000u, 0, 0);
    }
L_00133318:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000027u, 0, 0);
    }
L_0013331c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_00133320:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x3u);
    }
L_00133324:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_00133328:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_0013332c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_00133330:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_00133334:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x5u);
    }
L_00133338:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x4u);
    }
L_0013333c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00133340:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_00133344:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_00133348:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x7u);
    }
L_0013334c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x6u);
    }
L_00133350:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00133354:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_00133358:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_0013335c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x9u);
    }
L_00133360:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x8u);
    }
L_00133364:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00133368:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 2u, &shc); cpu->r[2] = v;
    }
L_0013336c:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_00133370:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x3u);
    }
L_00133374:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2u);
    }
L_00133378:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_0013337c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00133380:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00133384:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00133388:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0013338c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00133390:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00133394:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x5u);
    }
L_00133398:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x4u);
    }
L_0013339c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001333a0:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001333a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001333a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001333ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001333b0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001333b4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001333b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001333bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8COverlay4LoadEii @ 001333c0 (arm) */
void fn_001333c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001333c0:;
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
L_001333c4:;
    {
        cpu->r[5] = rd32(0x001333ccu + + 0x1a0u);
    }
L_001333c8:;
    {
        cpu->r[3] = rd32(0x001333d0u + + 0x1a0u);
    }
L_001333cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001333d0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001333d8u, cpu->r[5], 0, 0);
    }
L_001333d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001333d8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001333dc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001333e0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001333e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001333e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133528;
        }
    }
L_001333ec:;
    {
        cpu->r[7] = rd32(0x001333f4u + + 0x180u);
    }
L_001333f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001333f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001333f8:;
    {
        cpu->r[14] = 0x001333fcu; fn_00189f5c(cpu);
    }
L_001333fc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00133400:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00133404:;
    {
        cpu->r[14] = 0x00133408u; fn_001897b4(cpu);
    }
L_00133408:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013340c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133520;
        }
    }
L_00133410:;
    {
        cpu->r[14] = 0x00133414u; fn_000fc5dc(cpu);
    }
L_00133414:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00133418:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013341c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133420:;
    {
        cpu->r[14] = 0x00133424u; fn_000fc650(cpu);
    }
L_00133424:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00133428:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013342c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133430:;
    {
        cpu->r[14] = 0x00133434u; fn_000fc5ec(cpu);
    }
L_00133434:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133438:;
    {
        cpu->r[14] = 0x0013343cu; fn_000fc628(cpu);
    }
L_0013343c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00133440:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133444:;
    {
        cpu->r[14] = 0x00133448u; fn_000fc5dc(cpu);
    }
L_00133448:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0013344c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00133450:;
    {
        cpu->r[6] = (uint32_t)((int32_t)(int16_t)(cpu->r[6] & 0xffff) * (int32_t)(int16_t)(cpu->r[1] & 0xffff));
    }
L_00133454:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00133458:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_0013345c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133460:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_00133464:;
    {
        cpu->r[14] = 0x00133468u; fn_000fc5ec(cpu);
    }
L_00133468:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013346c:;
    {
        cpu->r[14] = 0x00133470u; fn_000fc650(cpu);
    }
L_00133470:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00133474:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00133478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013347c:;
    {
        cpu->r[14] = 0x00133480u; fn_000fc650(cpu);
    }
L_00133480:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00133484:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00133488:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013348c:;
    {
        cpu->r[14] = 0x00133490u; fn_000fc650(cpu);
    }
L_00133490:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00133494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00133498:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013349c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001334a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001334a4:;
    {
        cpu->r[14] = 0x001334a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001334a8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001334ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001334b0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001334b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001334b8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001334bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001334c0:;
    {
        cpu->r[14] = 0x001334c4u; fn_000fc5f4(cpu);
    }
L_001334c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001334c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001334cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001334d0:;
    {
        cpu->r[14] = 0x001334d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001334d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001334d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001334dc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001334e0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001334e4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001334e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001334ec:;
    {
        cpu->r[14] = 0x001334f0u; fn_000fc5f4(cpu);
    }
L_001334f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001334f4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001334f8:;
    {
        cpu->r[14] = 0x001334fcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001334fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00133500:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00133504:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00133508:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0013350c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00133510:;
    {
        cpu->r[14] = 0x00133514u; fn_000fc5f4(cpu);
    }
L_00133514:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00133518:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0013351c:;
    {
        cpu->r[14] = 0x00133520u; fn_00189870(cpu);
    }
L_00133520:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00133524:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00133528u)) return;
    }
L_00133528:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013352c:;
    {
        cpu->r[14] = 0x00133530u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00133530:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001333ec;
        }
    }
L_00133538:;
    {
        cpu->r[7] = rd32(0x00133540u + + 0x34u);
    }
L_0013353c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00133540:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00133544:;
    {
        cpu->r[14] = 0x00133548u; fn_00189f48(cpu);
    }
L_00133548:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013354c:;
    {
        cpu->r[14] = 0x00133550u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00133550:;
    {
        cpu->r[3] = rd32(0x00133558u + + 0x20u);
    }
L_00133554:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00133558:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013355c:;
    {
        cpu->r[3] = rd32(0x00133564u + + 0x18u);
    }
L_00133560:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00133564:;
    {
        cpu->r[14] = 0x00133568u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00133568:;
    {
        goto L_001333f0;
    }
}

/* _ZN8COverlayD1Ev @ 00133580 (arm) */
void fn_00133580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133580:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00133584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133588:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0013358c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001335a0;
        }
    }
L_00133594:;
    {
        cpu->r[14] = 0x00133598u; fn_0018ba60(cpu);
    }
L_00133598:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013359c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001335a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001335a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001335a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001335b8;
        }
    }
L_001335ac:;
    {
        cpu->r[14] = 0x001335b0u; fn_0018ba60(cpu);
    }
L_001335b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001335b4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001335b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001335bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001335c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001335d0;
        }
    }
L_001335c4:;
    {
        cpu->r[14] = 0x001335c8u; fn_0018ba60(cpu);
    }
L_001335c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001335cc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001335d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001335d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001335d8u)) return;
    }
}

/* _ZN8COverlayD2Ev @ 001335d8 (arm) */
void fn_001335d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001335d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001335dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001335e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001335e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001335e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001335f8;
        }
    }
L_001335ec:;
    {
        cpu->r[14] = 0x001335f0u; fn_0018ba60(cpu);
    }
L_001335f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001335f4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001335f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001335fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133610;
        }
    }
L_00133604:;
    {
        cpu->r[14] = 0x00133608u; fn_0018ba60(cpu);
    }
L_00133608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013360c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00133610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00133614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133628;
        }
    }
L_0013361c:;
    {
        cpu->r[14] = 0x00133620u; fn_0018ba60(cpu);
    }
L_00133620:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00133624:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00133628:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013362c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133630u)) return;
    }
}

/* _ZN7TextureC2Eii @ 00133630 (arm) */
void fn_00133630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133630:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00133634:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_00133638:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0013363c:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[12]);
    }
L_00133640:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00133644:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00133648:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[4]);
    }
L_0013364c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00133650:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_00133654:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00133658:;
    {
        wr16(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_0013365c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00133660:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00133664:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_00133668:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_0013366c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_00133670:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[12]);
    }
L_00133674:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[4]);
    }
L_00133678:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[12]);
    }
L_0013367c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[12]);
    }
L_00133680:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00133684:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00133688:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7TextureC1Eii @ 0013368c (arm) */
void fn_0013368c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013368c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00133690:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_00133694:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00133698:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[12]);
    }
L_0013369c:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001336a0:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_001336a4:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[4]);
    }
L_001336a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001336ac:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001336b0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001336b4:;
    {
        wr16(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_001336b8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_001336bc:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_001336c0:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_001336c4:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_001336c8:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_001336cc:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[12]);
    }
L_001336d0:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[4]);
    }
L_001336d4:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[12]);
    }
L_001336d8:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[12]);
    }
L_001336dc:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001336e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001336e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z17CountNumMipLevelsii @ 001336e8 (arm) */
void fn_001336e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001336e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001336ec:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
        }
    }
L_001336f0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001336f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001336f8:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001336fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00133700:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00133704:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00133708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0013370c:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
        }
    }
L_00133710:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00133714:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00133700;
        }
    }
L_00133718:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z18getOpenGLFiltering12_GXTexFilter @ 0013371c (arm) */
void fn_0013371c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013371c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00133720:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00133724:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00133728:;
    {
        cpu->r[3] = rd32(0x00133730u + + 0x8u);
    }
L_0013372c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00133734u, cpu->r[3], 0, 0);
    }
L_00133730:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00133734:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Texture11CreateDepthEii @ 0013373c (arm) */
void fn_0013373c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013373c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00133740:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Texture9SetActiveEi11_GXTexMapID @ 00133744 (arm) */
void fn_00133744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133744:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Texture7SetMaskEPhi @ 00133748 (arm) */
void fn_00133748(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133748:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0013374c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x58u);
    }
L_00133750:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00133754:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133784;
        }
    }
L_00133758:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x54u);
    }
L_0013375c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00133760:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00133764:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00133768:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013376c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133770:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
        }
    }
L_00133774:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
        }
    }
L_00133778:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
        }
    }
L_0013377c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00133780:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00133760;
        }
    }
L_00133784:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00133788:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Texture11RenderPixelEffhhhh @ 0013378c (arm) */
void fn_0013378c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013378c:;
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
L_00133790:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00133794:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00133798:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x38u);
    }
L_0013379c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001337a0:;
    {
        cpu->r[3] = 0x00001908u;
    }
L_001337a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001337a8:;
    {
        cpu->r[5] = rd32(0x001337b0u + + 0xe8u);
    }
L_001337ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001337b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001337b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001337bcu, cpu->r[5], 0, 0);
    }
L_001337b8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_001337bc:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x48u);
    }
L_001337c0:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x4cu);
    }
L_001337c4:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x50u);
    }
L_001337c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133840;
        }
    }
L_001337cc:;
    {
        cpu->r[3] = 0x000080e1u;
    }
L_001337d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001337d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001337e4;
        }
    }
L_001337d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001337dc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001337e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001337e4u)) return;
    }
L_001337e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001337e8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_001337ec:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001337f0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x4u);
    }
L_001337f4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001337f8:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[8] = v;
    }
L_001337fc:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[7] = v;
    }
L_00133800:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 24u, &shc); cpu->r[6] = v;
    }
L_00133804:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00133808:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0013380c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00133810:;
    {
        cpu->r[14] = 0x00133814u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00133814:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[9];
    }
L_00133818:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0013381c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00133820:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00133824:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00133828:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[11] = v;
    }
L_0013382c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00133830:;
    {
        cpu->r[14] = 0x00133834u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00133834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00133838:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_0013383c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[6]);
    }
L_00133840:;
    {
        cpu->r[3] = rd32(0x00133848u + + 0x54u);
    }
L_00133844:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00133848:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013384c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00133850:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00133854:;
    {
        cpu->r[14] = 0x00133858u; fn_0012f114(cpu);
    }
L_00133858:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_0013385c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x48u);
    }
L_00133860:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00133864:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00133868:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0013386c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_00133870:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00133874:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00133878:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0013387c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00133880:;
    {
        cpu->r[14] = 0x00001401u;
    }
L_00133884:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00133888:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0013388c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00133890:;
    {
        cpu->r[14] = 0x00133894u; imp_glTexSubImage2D(cpu); /* glTexSubImage2D */
    }
L_00133894:;
    {
        goto L_001337d8;
    }
}

/* _ZN7Texture13UpdateTextureEPh @ 001338a0 (arm) */
void fn_001338a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001338a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_001338a4:;
    {
        cpu->r[2] = 0x00001909u;
    }
L_001338a8:;
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
L_001338ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001338b0:;
    {
        cpu->r[6] = rd32(0x001338b8u + + 0x2a8u);
    }
L_001338b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001338b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001338bc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001338c0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001338c8u, cpu->r[6], 0, 0);
    }
L_001338c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133ab8;
        }
    }
L_001338c8:;
    {
        cpu->r[2] = 0x0000190au;
    }
L_001338cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001338d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133a1c;
        }
    }
L_001338d4:;
    {
        cpu->r[2] = 0x00001908u;
    }
L_001338d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001338dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133968;
        }
    }
L_001338e0:;
    {
        cpu->r[1] = rd32(0x001338e8u + + 0x27cu);
    }
L_001338e4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001338e8:;
    {
        cpu->r[12] = rd32(0x001338f0u + + 0x278u);
    }
L_001338ec:;
    {
        cpu->r[14] = 0x00000840u;
    }
L_001338f0:;
    {
        cpu->r[2] = rd32(0x001338f8u + + 0x274u);
    }
L_001338f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001338fcu, cpu->r[1], 0, 0);
    }
L_001338f8:;
    {
        cpu->r[3] = rd32(0x00133900u + + 0x270u);
    }
L_001338fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00133904u, cpu->r[12], 0, 0);
    }
L_00133900:;
    {
        cpu->r[2] = add_flags(cpu, 0x00133908u, cpu->r[2], 0, 0);
    }
L_00133904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00133908:;
    {
        cpu->r[3] = add_flags(cpu, 0x00133910u, cpu->r[3], 0, 0);
    }
L_0013390c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00133910:;
    {
        cpu->r[14] = 0x00133914u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00133914:;
    {
        cpu->r[3] = rd32(0x0013391cu + + 0x258u);
    }
L_00133918:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x44u);
    }
L_0013391c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00133920:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00133924:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00133928:;
    {
        cpu->r[14] = 0x0013392cu; fn_0012f114(cpu);
    }
L_0013392c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x38u);
    }
L_00133930:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00133934:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00133938:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013393c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133940:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00133944:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00133948:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0013394c:;
    {
        cpu->r[12] = 0x00001401u;
    }
L_00133950:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00133954:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00133958:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_0013395c:;
    {
        cpu->r[14] = 0x00133960u; imp_glTexSubImage2D(cpu); /* glTexSubImage2D */
    }
L_00133960:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00133964:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00133968u)) return;
    }
L_00133968:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[11] = v1;
    }
L_0013396c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133970:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00133974:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_00133978:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0013397c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00133980:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_00133984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133a0c;
        }
    }
L_00133988:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0013398c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133990:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133a00;
        }
    }
L_00133994:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 2u, &shc); cpu->r[7] = v;
    }
L_00133998:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013399c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7]; cpu->r[10] = v;
    }
L_001339a0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 2u, &shc), 1, 0);
    }
L_001339a4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001339a8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[12] = v;
    }
L_001339ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001339b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_001339b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[12], 2, 2u, &shc), 1, 0);
    }
L_001339b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 5u, &shc), 0, 0);
    }
L_001339bc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_001339c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001339c4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001339c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001339cc:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x20u);
    }
L_001339d0:;
    {
        cpu->r[0] = rd16(cpu->r[4] + cpu->r[0]);
    }
L_001339d4:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001339d8:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_001339dc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[11] = v;
    }
L_001339e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_001339e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 2, 8u, &shc), 0, 0);
    }
L_001339e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 16u, &shc), 0, 0);
    }
L_001339ec:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
    }
L_001339f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001339f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001339f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001339a8;
        }
    }
L_001339fc:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x8u);
    }
L_00133a00:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00133a04:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 1);
    }
L_00133a08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013398c;
        }
    }
L_00133a0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_00133a10:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00133a14:;
    {
        cpu->r[14] = 0x00133a18u; imp_memcpy(cpu); /* memcpy */
    }
L_00133a18:;
    {
        goto L_00133914;
    }
L_00133a1c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[11] = v1;
    }
L_00133a20:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133a24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00133a28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00133a2c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00133a30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00133a34:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00133a38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133a0c;
        }
    }
L_00133a3c:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_00133a40:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00133a44:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00133a48:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00133a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133a50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133aa4;
        }
    }
L_00133a54:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[10] = v;
    }
L_00133a58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00133a5c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10]; cpu->r[9] = v;
    }
L_00133a60:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[10], 2, 2u, &shc), 1, 0);
    }
L_00133a64:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00133a68:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[0] = v;
    }
L_00133a6c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_00133a70:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5] + cpu->r[2]; cpu->r[12] = v;
    }
L_00133a74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00133a78:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00133a7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00133a80:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[5], 2, 4u, &shc), cpu->r[0], 1, 0);
    }
L_00133a84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00133a88:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_00133a8c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00133a90:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[14] = v;
    }
L_00133a94:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00133a98:;
    {
        cpu->r[14] = rd16(cpu->r[4] + cpu->r[14]);
    }
L_00133a9c:;
    {
        wr16(cpu->r[1] + cpu->r[12], cpu->r[14]);
    }
L_00133aa0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00133a68;
        }
    }
L_00133aa4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00133aa8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 1);
    }
L_00133aac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133b4c;
        }
    }
L_00133ab0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00133ab4:;
    {
        goto L_00133a4c;
    }
L_00133ab8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[11] = v1;
    }
L_00133abc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133ac0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_00133ac4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_00133ac8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00133acc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00133ad0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 3u, &shc); cpu->r[7] = v;
    }
L_00133ad4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133a0c;
        }
    }
L_00133ad8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00133adc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00133ae0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00133b2c;
        }
    }
L_00133ae4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[14] = v;
    }
L_00133ae8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00133aec:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14]; cpu->r[8] = v;
    }
L_00133af0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[14], 2, 2u, &shc), 1, 0);
    }
L_00133af4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_00133af8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[0] = v;
    }
L_00133afc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00133b00:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00133b04:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_00133b08:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00133b0c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[9], 2, 5u, &shc), cpu->r[0], 1, 0);
    }
L_00133b10:;
    {
        cpu->r[0] = rd8(cpu->r[10] + cpu->r[0]);
    }
L_00133b14:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_00133b18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00133b1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00133b20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00133b24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00133af8;
        }
    }
L_00133b28:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x8u);
    }
L_00133b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00133b30:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_00133b34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00133adc;
        }
    }
L_00133b38:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_00133b3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_00133b40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00133b44:;
    {
        cpu->r[14] = 0x00133b48u; imp_memcpy(cpu); /* memcpy */
    }
L_00133b48:;
    {
        goto L_00133914;
    }
L_00133b4c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00133b50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_00133b54:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00133b58:;
    {
        cpu->r[14] = 0x00133b5cu; imp_memcpy(cpu); /* memcpy */
    }
L_00133b5c:;
    {
        goto L_00133914;
    }
}

/* _ZN7Texture13AttachTextureEi @ 00133b78 (arm) */
void fn_00133b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133b78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00133b7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133b80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_00133b84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00133b88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133b8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133b9c;
        }
    }
L_00133b90:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00133b94:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00133b98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133b9cu)) return;
    }
L_00133b9c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00133ba0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00133ba4:;
    {
        cpu->r[14] = 0x00133ba8u; imp__Znaj(cpu); /* _Znaj */
    }
L_00133ba8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00133bac:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00133bb0:;
    {
        goto L_00133b90;
    }
}

/* sub_00133bb4 @ 00133bb4 (arm) */
void fn_00133bb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133bb4:;
    {
        cpu->r[3] = rd32(0x00133bbcu + + 0x30u);
    }
L_00133bb8:;
    {
        cpu->r[2] = 0x00000c00u;
    }
L_00133bbc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00133bc0:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133bc4:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00133bc8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x461cu << 16);
    }
L_00133bcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00133bd4u, cpu->r[3], 0, 0);
    }
L_00133bd0:;
    {
        cpu->r[14] = 0x00133bd4u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00133bd4:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00133bd8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133bdc:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00133be0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00133be4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00133be8:;
    {
        imp_glTexParameterf(cpu); /* tail glTexParameterf */ return;
    }
}

/* sub_00133bf0 @ 00133bf0 (arm) */
void fn_00133bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133bf0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00133bf4:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_00133bf8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00133bfc:;
    {
        cpu->r[14] = 0x00133c00u; fn_0018bb78(cpu);
    }
L_00133c00:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133c14;
        }
    }
L_00133c08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133c0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00133c10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133c14u)) return;
    }
L_00133c14:;
    {
        cpu->r[1] = rd32(0x00133c1cu + + 0x30u);
    }
L_00133c18:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00133c1c:;
    {
        cpu->r[12] = rd32(0x00133c24u + + 0x2cu);
    }
L_00133c20:;
    {
        cpu->r[14] = 0x00000049u;
    }
L_00133c24:;
    {
        cpu->r[2] = rd32(0x00133c2cu + + 0x28u);
    }
L_00133c28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00133c30u, cpu->r[1], 0, 0);
    }
L_00133c2c:;
    {
        cpu->r[3] = rd32(0x00133c34u + + 0x24u);
    }
L_00133c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00133c38u, cpu->r[12], 0, 0);
    }
L_00133c34:;
    {
        cpu->r[2] = add_flags(cpu, 0x00133c3cu, cpu->r[2], 0, 0);
    }
L_00133c38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000028u, 0, 0);
    }
L_00133c3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00133c44u, cpu->r[3], 0, 0);
    }
L_00133c40:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00133c44:;
    {
        cpu->r[14] = 0x00133c48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00133c48:;
    {
        goto L_00133c08;
    }
}

/* _ZN7Texture6CreateEiii @ 00133c5c (arm) */
void fn_00133c5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133c5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00133c60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00133c64:;
    {
        cpu->r[5] = rd32(0x00133c6cu + + 0x178u);
    }
L_00133c68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00133c6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00133c70:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00133c74:;
    {
        cpu->r[5] = add_flags(cpu, 0x00133c7cu, cpu->r[5], 0, 0);
    }
L_00133c78:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00133c7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133c80:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00133c84:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00133c88:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00133c8c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00133c90:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00133c94:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00133c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133cf0;
        }
    }
L_00133c9c:;
    {
        cpu->r[1] = rd32(0x00133ca4u + + 0x144u);
    }
L_00133ca0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00133ca4:;
    {
        cpu->r[12] = rd32(0x00133cacu + + 0x140u);
    }
L_00133ca8:;
    {
        cpu->r[14] = 0x0000072au;
    }
L_00133cac:;
    {
        cpu->r[2] = rd32(0x00133cb4u + + 0x13cu);
    }
L_00133cb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00133cb8u, cpu->r[1], 0, 0);
    }
L_00133cb4:;
    {
        cpu->r[3] = rd32(0x00133cbcu + + 0x138u);
    }
L_00133cb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00133cc0u, cpu->r[12], 0, 0);
    }
L_00133cbc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00133cc4u, cpu->r[2], 0, 0);
    }
L_00133cc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00133cc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00133cccu, cpu->r[3], 0, 0);
    }
L_00133cc8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00133ccc:;
    {
        cpu->r[14] = 0x00133cd0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00133cd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00133cd4:;
    {
        cpu->r[14] = 0x00133cd8u; fn_00133bf0(cpu);
    }
L_00133cd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133cdc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00133ce0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00133ce4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133d0c;
        }
    }
L_00133ce8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00133cec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00133cf0u)) return;
    }
L_00133cf0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00133cf4:;
    {
        cpu->r[3] = 0x0000190au;
    }
L_00133cf8:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00133cfc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[0] = v;
    }
L_00133d00:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00133d04:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00133d08:;
    {
        goto L_00133cd4;
    }
L_00133d0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00133d10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00133d14:;
    {
        cpu->r[14] = 0x00133d18u; imp_memset(cpu); /* memset */
    }
L_00133d18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00133d1c:;
    {
        cpu->r[14] = 0x00133d20u; imp__Znaj(cpu); /* _Znaj */
    }
L_00133d20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133d24:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00133d28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000015u);
        }
    }
L_00133d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133ce8;
        }
    }
L_00133d30:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00133d34:;
    {
        cpu->r[14] = 0x00133d38u; imp__Znaj(cpu); /* _Znaj */
    }
L_00133d38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133d3c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00133d40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00133d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133ce8;
        }
    }
L_00133d48:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00133d4c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00133d50:;
    {
        cpu->r[14] = 0x00133d54u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00133d54:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00133d58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00133d5c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00133d60:;
    {
        cpu->r[14] = 0x00133d64u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00133d64:;
    {
        cpu->r[3] = rd32(0x00133d6cu + + 0x8cu);
    }
L_00133d68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00133d6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00133d70:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00133d74:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00133d78:;
    {
        cpu->r[14] = 0x00133d7cu; fn_0012f114(cpu);
    }
L_00133d7c:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00133d80:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133d84:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00133d88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00133d8c:;
    {
        cpu->r[14] = 0x00133d90u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00133d90:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00133d94:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133d98:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00133d9c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00133da0:;
    {
        cpu->r[14] = 0x00133da4u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00133da4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x38u);
    }
L_00133da8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_00133dac:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133db0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_00133db4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00133db8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00133dbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00133dc0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00133dc4:;
    {
        cpu->r[12] = 0x00001401u;
    }
L_00133dc8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00133dcc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00133dd0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00133dd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00133dd8:;
    {
        cpu->r[14] = 0x00133ddcu; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00133ddc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00133de0:;
    {
        goto L_00133ce8;
    }
}

/* _ZN7Texture13CreateRamp256Ev @ 00133dfc (arm) */
void fn_00133dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133dfc:;
    {
        cpu->r[1] = 0x00000100u;
    }
L_00133e00:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00133e04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00133e08:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00133e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133e10:;
    {
        cpu->r[14] = 0x00133e14u; fn_00133c5c(cpu);
    }
L_00133e14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133e18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00133e1c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133e20u)) return;
        }
    }
L_00133e20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00133e24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00133e28:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[12] = v;
    }
L_00133e2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00133e30:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 10u, &shc); cpu->r[0] = v;
    }
L_00133e34:;
    {
        cpu->r[14] = (cpu->r[3] >> 2) & 0x3u;
    }
L_00133e38:;
    {
        uint32_t v = cpu->r[3] & 0x00000003u; cpu->r[5] = v;
    }
L_00133e3c:;
    {
        uint32_t v = cpu->r[12] & 0x000000fcu; cpu->r[12] = v;
    }
L_00133e40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00133e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_00133e48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00010000u, 1, 1);
    }
L_00133e4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00133e50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_00133e54:;
    {
        wr16(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_00133e58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133e28;
        }
    }
L_00133e5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133e60:;
    {
        cpu->r[14] = 0x00133e64u; fn_001338a0(cpu);
    }
L_00133e64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00133e68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00133e6cu)) return;
    }
}

/* _ZN7Texture12CreateRamp16Ev @ 00133e6c (arm) */
void fn_00133e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133e6c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00133e70:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00133e74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00133e78:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00133e7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133e80:;
    {
        cpu->r[14] = 0x00133e84u; fn_00133c5c(cpu);
    }
L_00133e84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133e88:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00133e8c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133e90u)) return;
        }
    }
L_00133e90:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_00133e94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00133e98:;
    {
        cpu->r[12] = (cpu->r[3] >> 5) & 0x1u;
    }
L_00133e9c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[2] = v;
    }
L_00133ea0:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_00133ea4:;
    {
        cpu->r[0] = (cpu->r[3] >> 3) & 0x3u;
    }
L_00133ea8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_00133eac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00133eb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00133eb4:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[2]);
    }
L_00133eb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00133ebc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000100u, 1, 1);
    }
L_00133ec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133e98;
        }
    }
L_00133ec4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00133ec8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00133ecc:;
    {
        cpu->r[14] = 0x00133ed0u; fn_001338a0(cpu);
    }
L_00133ed0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00133ed4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00133ed8u)) return;
    }
}

/* _ZN7Texture9LoadRGB16EP8LZMAFile @ 00133ed8 (arm) */
void fn_00133ed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00133ed8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00133edc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00133ee0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00133ee4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00133ee8:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00133eec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00133ef0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00133ef4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_00133ef8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_00133efc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00133f00:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_00133f04:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00133f08:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_00133f0c:;
    {
        cpu->r[6] = rd32(0x00133f14u + + 0x140u);
    }
L_00133f10:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00133f14:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00133f18:;
    {
        cpu->r[14] = 0x00133f1cu; fn_00133bf0(cpu);
    }
L_00133f1c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00133f24u, cpu->r[6], 0, 0);
    }
L_00133f20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133f24:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00133f28:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00133f2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00133f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00133f3c;
        }
    }
L_00133f34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00133f38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00133f3cu)) return;
    }
L_00133f3c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00133f40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00133f44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00133f48:;
    {
        cpu->r[14] = 0x00133f4cu; fn_000fc5f4(cpu);
    }
L_00133f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00133f50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00133f54:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[3] = v;
    }
L_00133f58:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00133f5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00133f60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000190au;
        }
    }
L_00133f64:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
        }
    }
L_00133f68:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
        }
    }
L_00133f6c:;
    {
        cpu->r[14] = 0x00133f70u; imp__Znaj(cpu); /* _Znaj */
    }
L_00133f70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133f74:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00133f78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000015u);
        }
    }
L_00133f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133f34;
        }
    }
L_00133f80:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00133f84:;
    {
        cpu->r[14] = 0x00133f88u; imp__Znaj(cpu); /* _Znaj */
    }
L_00133f88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00133f8c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00133f90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00133f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133f34;
        }
    }
L_00133f98:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00133f9c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00133fa0:;
    {
        cpu->r[14] = 0x00133fa4u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00133fa4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00133fa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00133fac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00133fb0:;
    {
        cpu->r[14] = 0x00133fb4u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00133fb4:;
    {
        cpu->r[3] = rd32(0x00133fbcu + + 0x9cu);
    }
L_00133fb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00133fbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00133fc0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00133fc4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00133fc8:;
    {
        cpu->r[14] = 0x00133fccu; fn_0012f114(cpu);
    }
L_00133fcc:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00133fd0:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133fd4:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00133fd8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00133fdc:;
    {
        cpu->r[14] = 0x00133fe0u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00133fe0:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00133fe4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00133fe8:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00133fec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00133ff0:;
    {
        cpu->r[14] = 0x00133ff4u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00133ff4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_00133ff8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_00133ffc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00134000:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134004:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134008:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0013400c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134010:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00134014:;
    {
        cpu->r[14] = 0x00001401u;
    }
L_00134018:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0013401c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00134020:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00134024:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00134028:;
    {
        cpu->r[14] = 0x0013402cu; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_0013402c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00134030:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134034:;
    {
        cpu->r[14] = 0x00134038u; fn_001338a0(cpu);
    }
L_00134038:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013403c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00134040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00133f34;
        }
    }
L_00134044:;
    {
        cpu->r[14] = 0x00134048u; fn_0018ba60(cpu);
    }
L_00134048:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013404c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_00134050:;
    {
        goto L_00133f34;
    }
}

/* _ZN7Texture7Load_I8EP8LZMAFile @ 0013405c (arm) */
void fn_0013405c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013405c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00134060:;
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
L_00134064:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134068:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0013406c:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00134070:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00134074:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[8]);
    }
L_00134078:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[5]);
    }
L_0013407c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00134080:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00134084:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[7]);
    }
L_00134088:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013408c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00134090:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_00134094:;
    {
        cpu->r[14] = 0x00134098u; fn_00133bf0(cpu);
    }
L_00134098:;
    {
        cpu->r[6] = rd32(0x001340a0u + + 0x110u);
    }
L_0013409c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001340a4u, cpu->r[6], 0, 0);
    }
L_001340a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001340a4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_001340a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_001340ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001340b8;
        }
    }
L_001340b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001340b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001340b8u)) return;
    }
L_001340b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001340bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001340c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001340c4:;
    {
        cpu->r[14] = 0x001340c8u; fn_000fc5f4(cpu);
    }
L_001340c8:;
    {
        cpu->r[3] = 0x00001909u;
    }
L_001340cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001340d0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001340d4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001340d8:;
    {
        cpu->r[14] = 0x001340dcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001340dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001340e0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001340e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000015u);
        }
    }
L_001340e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001340b0;
        }
    }
L_001340ec:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001340f0:;
    {
        cpu->r[14] = 0x001340f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001340f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001340f8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001340fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00134100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001340b0;
        }
    }
L_00134104:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00134108:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_0013410c:;
    {
        cpu->r[14] = 0x00134110u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00134110:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00134114:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134118:;
    {
        cpu->r[14] = 0x0013411cu; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_0013411c:;
    {
        cpu->r[3] = rd32(0x00134124u + + 0x90u);
    }
L_00134120:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134124:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00134128:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0013412c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00134130:;
    {
        cpu->r[14] = 0x00134134u; fn_0012f114(cpu);
    }
L_00134134:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00134138:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0013413c:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00134140:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134144:;
    {
        cpu->r[14] = 0x00134148u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134148:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0013414c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134150:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00134154:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134158:;
    {
        cpu->r[14] = 0x0013415cu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_0013415c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_00134160:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134164:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134168:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013416c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00134170:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00134174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134178:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0013417c:;
    {
        cpu->r[14] = 0x00001401u;
    }
L_00134180:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00134184:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00134188:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0013418c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00134190:;
    {
        cpu->r[14] = 0x00134194u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00134194:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00134198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013419c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001340b0;
        }
    }
L_001341a0:;
    {
        cpu->r[14] = 0x001341a4u; fn_0018ba60(cpu);
    }
L_001341a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001341a8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001341ac:;
    {
        goto L_001340b0;
    }
}

/* _ZN7Texture11LoadIndexedEP8LZMAFile @ 001341b8 (arm) */
void fn_001341b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001341b8:;
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
L_001341bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001341c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001341c4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001341c8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001341cc:;
    {
        cpu->r[14] = 0x001341d0u; fn_000fc678(cpu);
    }
L_001341d0:;
    {
        cpu->r[8] = rd32(0x001341d8u + + 0x454u);
    }
L_001341d4:;
    {
        cpu->r[8] = add_flags(cpu, 0x001341dcu, cpu->r[8], 0, 0);
    }
L_001341d8:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001341dc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001341e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001341e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001341e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000100u;
        }
    }
L_001341ec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_001341f0:;
    {
        cpu->r[14] = 0x001341f4u; fn_000fc678(cpu);
    }
L_001341f4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001341f8:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001341fc:;
    {
        uint32_t v = cpu->r[9] & 0x0000001fu; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00134200:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000020u, 0, 0);
        }
    }
L_00134204:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
        }
    }
L_00134208:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_0013420c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00134210:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_00134214:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00134218:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[0] = v;
    }
L_0013421c:;
    {
        cpu->r[14] = 0x00134220u; fn_00133bf0(cpu);
    }
L_00134220:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134224:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00134228:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013422c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134238;
        }
    }
L_00134230:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00134234:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134238u)) return;
    }
L_00134238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013423c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134240:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134284;
        }
    }
L_00134244:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00134248:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0013424c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00134250:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00134254:;
    {
        goto L_0013425c;
    }
L_00134258:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013425c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00134260:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00134264:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00134268:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013426c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_00134270:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00134274:;
    {
        cpu->r[14] = 0x00134278u; fn_000fc5f4(cpu);
    }
L_00134278:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013427c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00134280:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00134258;
        }
    }
L_00134284:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00134288:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0013428c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134290:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_00134294:;
    {
        cpu->r[14] = 0x00134298u; fn_00133bf0(cpu);
    }
L_00134298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013429c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_001342a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_001342a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134230;
        }
    }
L_001342a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001342ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001342b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001342b4:;
    {
        cpu->r[14] = 0x001342b8u; fn_000fc5f4(cpu);
    }
L_001342b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001342bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001342c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001342c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001342c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001342cc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_001342d0:;
    {
        cpu->r[14] = 0x001342d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001342d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001342d8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001342dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_001342e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134230;
        }
    }
L_001342e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001342e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001342ec:;
    {
        cpu->r[14] = 0x001342f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001342f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001342f4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001342f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000020u);
        }
    }
L_001342fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134230;
        }
    }
L_00134300:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00134304:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00134308:;
    {
        cpu->r[14] = 0x0013430cu; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_0013430c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00134310:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134314:;
    {
        cpu->r[14] = 0x00134318u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00134318:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013431c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134320:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134514;
        }
    }
L_00134324:;
    {
        cpu->r[3] = rd32(0x0013432cu + + 0x304u);
    }
L_00134328:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013432c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00134330:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_00134334:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_00134338:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0013433c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00134340:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134344:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00134348:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0013434c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00134350:;
    {
        cpu->r[14] = 0x00134354u; fn_0012f114(cpu);
    }
L_00134354:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00134358:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0013435c:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00134360:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134364:;
    {
        cpu->r[14] = 0x00134368u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134368:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0013436c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134370:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00134374:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134378:;
    {
        cpu->r[14] = 0x0013437cu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_0013437c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_00134380:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00134384:;
    {
        cpu->r[14] = 0x00134388u; imp__Znaj(cpu); /* _Znaj */
    }
L_00134388:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_0013438c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134390:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_00134394:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = cpu->r[3];
        }
    }
L_00134398:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013439c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[9] = v;
    }
L_001343a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001343a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134410;
        }
    }
L_001343a8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001343ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001343b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134404;
        }
    }
L_001343b4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001343b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001343bc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[11] = v;
    }
L_001343c0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[10], 2, 2u, &shc), 1, 0);
    }
L_001343c4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[10] = v;
    }
L_001343c8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001343cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001343d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001343d4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_001343d8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[12], 2, 5u, &shc), cpu->r[1], 1, 0);
    }
L_001343dc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[8]; cpu->r[3] = v;
    }
L_001343e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001343e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_001343e8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001343ec:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001343f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001343f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001343f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001343fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001343c8;
        }
    }
L_00134400:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134404:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00134408:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_0013440c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001343ac;
        }
    }
L_00134410:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[2] = v;
    }
L_00134414:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134418:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0013441c:;
    {
        cpu->r[14] = 0x00134420u; imp_memcpy(cpu); /* memcpy */
    }
L_00134420:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00134424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134430;
        }
    }
L_00134428:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013442c:;
    {
        cpu->r[14] = 0x00134430u; fn_0018ba60(cpu);
    }
L_00134430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00134434:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00134438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013455c;
        }
    }
L_0013443c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00134440:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x48u);
    }
L_00134444:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[0] = v;
    }
L_00134448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013444c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001344c0;
        }
    }
L_00134450:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00134454:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00134458:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[8]; cpu->r[8] = v;
    }
L_0013445c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134460:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00134464:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00134468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013446c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00134470:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00134474:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00134478:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0013447c:;
    {
        wr8(cpu->r[8] + + 0x3u, cpu->r[6]);
    }
L_00134480:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[1] = v;
    }
L_00134484:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[12] = v;
    }
L_00134488:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 3u, &shc); cpu->r[2] = v;
    }
L_0013448c:;
    {
        uint32_t v = cpu->r[12] & 0x000000ffu; cpu->r[12] = v;
    }
L_00134490:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_00134494:;
    {
        uint32_t v = cpu->r[2] & 0x000000fcu; cpu->r[2] = v;
    }
L_00134498:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[12], 3, 5u, &shc); cpu->r[12] = v;
    }
L_0013449c:;
    {
        wr8(cpu->r[8], cpu->r[12]);
    }
L_001344a0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[2], 3, 6u, &shc); cpu->r[2] = v;
    }
L_001344a4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[1], 3, 5u, &shc); cpu->r[1] = v;
    }
L_001344a8:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[2]);
    }
L_001344ac:;
    {
        wr8(cpu->r[8] + + 0x2u, cpu->r[1]);
    }
L_001344b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001344b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013445c;
        }
    }
L_001344b8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_001344bc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x48u);
    }
L_001344c0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[14] = v;
    }
L_001344c4:;
    {
        cpu->r[2] = 0x00001908u;
    }
L_001344c8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_001344cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001344d0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_001344d4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001344d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001344dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001344e0:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[14] = v;
    }
L_001344e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001344e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001344ec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001344f0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14] + cpu->r[8]; cpu->r[14] = v;
    }
L_001344f4:;
    {
        cpu->r[12] = 0x00001401u;
    }
L_001344f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001344fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00134500:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00134504:;
    {
        cpu->r[14] = 0x00134508u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00134508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013450c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00134510:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00134340;
        }
    }
L_00134514:;
    {
        cpu->r[14] = 0x00134518u; imp_glGetError(cpu); /* glGetError */
    }
L_00134518:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013451c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134230;
        }
    }
L_00134520:;
    {
        cpu->r[1] = rd32(0x00134528u + + 0x10cu);
    }
L_00134524:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00134528:;
    {
        cpu->r[12] = rd32(0x00134530u + + 0x108u);
    }
L_0013452c:;
    {
        cpu->r[14] = 0x000006aau;
    }
L_00134530:;
    {
        cpu->r[2] = rd32(0x00134538u + + 0x104u);
    }
L_00134534:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013453cu, cpu->r[1], 0, 0);
    }
L_00134538:;
    {
        cpu->r[3] = rd32(0x00134540u + + 0x100u);
    }
L_0013453c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00134544u, cpu->r[12], 0, 0);
    }
L_00134540:;
    {
        cpu->r[2] = add_flags(cpu, 0x00134548u, cpu->r[2], 0, 0);
    }
L_00134544:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_00134548:;
    {
        cpu->r[3] = add_flags(cpu, 0x00134550u, cpu->r[3], 0, 0);
    }
L_0013454c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00134550:;
    {
        cpu->r[14] = 0x00134554u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00134554:;
    {
        cpu->r[0] = (~0x0000006eu);
    }
L_00134558:;
    {
        goto L_00134230;
    }
L_0013455c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_00134560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001344b8;
        }
    }
L_00134564:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00134568:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013456c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[14] = v;
    }
L_00134570:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00134574:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001344c0;
        }
    }
L_00134578:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013457c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[8]; cpu->r[2] = v;
    }
L_00134580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00134584:;
    {
        goto L_001345b8;
    }
L_00134588:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[10], 3, 4u, &shc); cpu->r[10] = v;
    }
L_0013458c:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[8], 3, 4u, &shc); cpu->r[8] = v;
    }
L_00134590:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[12], 3, 4u, &shc); cpu->r[12] = v;
    }
L_00134594:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[0], 3, 5u, &shc); cpu->r[0] = v;
    }
L_00134598:;
    {
        wr8(cpu->r[2] + - 0x4u, cpu->r[10]);
    }
L_0013459c:;
    {
        wr8(cpu->r[2] + - 0x3u, cpu->r[8]);
    }
L_001345a0:;
    {
        wr8(cpu->r[2] + - 0x2u, cpu->r[12]);
    }
L_001345a4:;
    {
        wr8(cpu->r[2] + - 0x1u, cpu->r[0]);
    }
L_001345a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001345ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001345b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_001345b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001344b8;
        }
    }
L_001345b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001345bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_001345c0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_001345c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001345c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001345cc:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_001345d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_001345d4:;
    {
        uint32_t v = cpu->r[3] & 0x000000f0u; cpu->r[8] = v;
    }
L_001345d8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 7u, &shc); cpu->r[0] = v;
    }
L_001345dc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 4u, &shc); cpu->r[12] = v;
    }
L_001345e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[10] = v;
    }
L_001345e4:;
    {
        uint32_t v = cpu->r[12] & 0x000000f0u; cpu->r[12] = v;
    }
L_001345e8:;
    {
        uint32_t v = cpu->r[10] & 0x000000ffu; cpu->r[10] = v;
    }
L_001345ec:;
    {
        uint32_t v = cpu->r[0] & 0x000000e0u; cpu->r[0] = v;
    }
L_001345f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134588;
        }
    }
L_001345f4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_001345f8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 7u, &shc); cpu->r[12] = v;
    }
L_001345fc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_00134600:;
    {
        uint32_t v = cpu->r[12] & 0x000000f8u; cpu->r[12] = v;
    }
L_00134604:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_00134608:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_0013460c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[12], 3, 5u, &shc); cpu->r[12] = v;
    }
L_00134610:;
    {
        wr8(cpu->r[2] + - 0x1u, cpu->r[6]);
    }
L_00134614:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[0], 3, 5u, &shc); cpu->r[0] = v;
    }
L_00134618:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[3], 3, 5u, &shc); cpu->r[3] = v;
    }
L_0013461c:;
    {
        wr8(cpu->r[2] + - 0x2u, cpu->r[12]);
    }
L_00134620:;
    {
        wr8(cpu->r[2] + - 0x4u, cpu->r[0]);
    }
L_00134624:;
    {
        wr8(cpu->r[2] + - 0x3u, cpu->r[3]);
    }
L_00134628:;
    {
        goto L_001345a8;
    }
}

/* _ZN7Texture12SetFilteringE12_GXTexFilterS0_ @ 00134644 (arm) */
void fn_00134644(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00134644:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00134648:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013464c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00134650:;
    {
        cpu->r[14] = 0x00134654u; fn_0013371c(cpu);
    }
L_00134654:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00134658:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013465c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134660:;
    {
        cpu->r[14] = 0x00134664u; imp_glTexParameteri(cpu); /* glTexParameteri */
    }
L_00134664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00134668:;
    {
        cpu->r[14] = 0x0013466cu; fn_0013371c(cpu);
    }
L_0013466c:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00134670:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00134674:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134678:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0013467c:;
    {
        imp_glTexParameteri(cpu); /* tail glTexParameteri */ return;
    }
}

/* _ZN7Texture11SetWrappingE14_GXTexWrapModeS0_ @ 00134680 (arm) */
void fn_00134680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00134680:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00134684:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00134688:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013468c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00134690:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001346e0;
        }
    }
L_00134698:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013469c:;
    {
        cpu->r[6] = 0x0000812fu;
    }
L_001346a0:;
    {
        cpu->r[5] = 0x00002901u;
    }
L_001346a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001346a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001346ac:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_001346b0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001346b4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001346b8:;
    {
        cpu->r[1] = 0x00002802u;
    }
L_001346bc:;
    {
        cpu->r[14] = 0x001346c0u; imp_glTexParameteri(cpu); /* glTexParameteri */
    }
L_001346c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001346c4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001346c8:;
    {
        cpu->r[1] = 0x00002803u;
    }
L_001346cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001346d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001346d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001346d8:;
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
L_001346dc:;
    {
        imp_glTexParameteri(cpu); /* tail glTexParameteri */ return;
    }
L_001346e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_001346e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001346e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134698;
        }
    }
L_001346ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001346f0u)) return;
    }
}

/* _ZN7Texture10CreateRampEi @ 001346f0 (arm) */
void fn_001346f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001346f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_001346f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001346f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001346fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134710;
        }
    }
L_00134700:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000100u, 1, 1);
    }
L_00134704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134718;
        }
    }
L_00134708:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0013470c:;
    {
        return fn_00133dfc(cpu);
    }
L_00134710:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00134714:;
    {
        return fn_00133e6c(cpu);
    }
L_00134718:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013471c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00134720:;
    {
        cpu->r[14] = 0x00134724u; fn_00134680(cpu);
    }
L_00134724:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00134728:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013472c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00134730:;
    {
        cpu->r[14] = 0x00134734u; fn_00134644(cpu);
    }
L_00134734:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00134738:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013473cu)) return;
    }
}

/* _ZN7Texture13LoadRGBA_4444EP8LZMAFilej @ 0013473c (arm) */
void fn_0013473c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013473c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00134740:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134744:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00134748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0013474c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00134750:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00134754:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_00134758:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[8]);
    }
L_0013475c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_00134760:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00134764:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00134768:;
    {
        cpu->r[14] = 0x0013476cu; fn_000fc628(cpu);
    }
L_0013476c:;
    {
        cpu->r[5] = rd32(0x00134774u + + 0x1c8u);
    }
L_00134770:;
    {
        cpu->r[5] = add_flags(cpu, 0x00134778u, cpu->r[5], 0, 0);
    }
L_00134774:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00134778:;
    {
        cpu->r[14] = 0x0013477cu; fn_00133bf0(cpu);
    }
L_0013477c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134780:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00134784:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_00134788:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134794;
        }
    }
L_0013478c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00134790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134794u)) return;
    }
L_00134794:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00134798:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013479c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001347a0:;
    {
        cpu->r[14] = 0x001347a4u; fn_000fc5f4(cpu);
    }
L_001347a4:;
    {
        cpu->r[3] = 0x00001908u;
    }
L_001347a8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001347ac:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001347b0:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001347b4:;
    {
        cpu->r[14] = 0x001347b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001347b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001347bc:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001347c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_001347c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013478c;
        }
    }
L_001347c8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001347cc:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_001347d0:;
    {
        cpu->r[14] = 0x001347d4u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_001347d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001347d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001347dc:;
    {
        cpu->r[14] = 0x001347e0u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_001347e0:;
    {
        cpu->r[3] = rd32(0x001347e8u + + 0x158u);
    }
L_001347e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_001347e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001347ec:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001347f0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001347f4:;
    {
        cpu->r[14] = 0x001347f8u; fn_0012f114(cpu);
    }
L_001347f8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001347fc:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134800:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00134804:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134808:;
    {
        cpu->r[14] = 0x0013480cu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_0013480c:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00134810:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134814:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00134818:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_0013481c:;
    {
        cpu->r[14] = 0x00134820u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134820:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134824:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013482c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[0] = v;
    }
L_00134830:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00134834:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00134838:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013483c:;
    {
        uint32_t v = cpu->r[2] & 0xff000000u; cpu->r[2] = v;
    }
L_00134840:;
    {
        sub_flags(cpu, cpu->r[2], 0xff000000u, 1, 1);
    }
L_00134844:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134928;
        }
    }
L_00134848:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0013484c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00134834;
        }
    }
L_00134850:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00134854:;
    {
        cpu->r[14] = 0x00134858u; imp__Znaj(cpu); /* _Znaj */
    }
L_00134858:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013485c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00134860:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00134864:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001348c0;
        }
    }
L_00134868:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013486c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00134870:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1u);
    }
L_00134874:;
    {
        cpu->r[12] = rd8(cpu->r[3]);
    }
L_00134878:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_0013487c:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x3u);
    }
L_00134880:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00134884:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[1] = v;
    }
L_00134888:;
    {
        uint32_t v = cpu->r[0] & 0x000000f0u; cpu->r[12] = v;
    }
L_0013488c:;
    {
        uint32_t v = cpu->r[1] | cpu->r[14]; cpu->r[1] = v;
    }
L_00134890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00134894:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00134898:;
    {
        uint32_t v = cpu->r[1] & 0x00f00000u; cpu->r[14] = v;
    }
L_0013489c:;
    {
        uint32_t v = cpu->r[1] & 0xf0000000u; cpu->r[0] = v;
    }
L_001348a0:;
    {
        cpu->r[1] = (cpu->r[1] >> 4) & 0xfu;
    }
L_001348a4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[14], 3, 12u, &shc); cpu->r[12] = v;
    }
L_001348a8:;
    {
        uint32_t v = cpu->r[12] | cpu->r[1]; cpu->r[1] = v;
    }
L_001348ac:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 3, 16u, &shc); cpu->r[1] = v;
    }
L_001348b0:;
    {
        wr16(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_001348b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001348b8:;
    {
        sub_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_001348bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00134870;
        }
    }
L_001348c0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001348c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001348c8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_001348cc:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001348d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001348d4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001348d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001348dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001348e0:;
    {
        cpu->r[12] = 0x00008033u;
    }
L_001348e4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001348e8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001348ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001348f0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_001348f4:;
    {
        cpu->r[14] = 0x001348f8u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_001348f8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001348fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134908;
        }
    }
L_00134900:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00134904:;
    {
        cpu->r[14] = 0x00134908u; fn_0018ba60(cpu);
    }
L_00134908:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013490c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013478c;
        }
    }
L_00134914:;
    {
        cpu->r[14] = 0x00134918u; fn_0018ba48(cpu);
    }
L_00134918:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013491c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134920:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00134924:;
    {
        goto L_0013478c;
    }
L_00134928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013492c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[0] = v;
    }
L_00134930:;
    {
        uint32_t v = cpu->r[3] | 0x00000040u; cpu->r[3] = v;
    }
L_00134934:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00134938:;
    {
        goto L_00134850;
    }
}
