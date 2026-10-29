#include "functions.h"

/* _ZN6gxMenu6UpdateEv @ 000eb420 (arm) */
void fn_000eb420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb420:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eb424:;
    {
        cpu->r[5] = rd32(0x000eb42cu + + 0x164u);
    }
L_000eb428:;
    {
        cpu->r[2] = rd32(0x000eb430u + + 0x164u);
    }
L_000eb42c:;
    {
        cpu->r[1] = 0x00001bc0u;
    }
L_000eb430:;
    {
        cpu->r[5] = add_flags(cpu, 0x000eb438u, cpu->r[5], 0, 0);
    }
L_000eb434:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000eb438:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eb43c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb440:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000eb444:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000eb448:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000eb44c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_000eb450:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000eb454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb580;
        }
    }
L_000eb458:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x90u);
    }
L_000eb45c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eb460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb494;
        }
    }
L_000eb464:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eb468:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb540;
        }
    }
L_000eb46c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000002u; set_nz(cpu, v); }
    }
L_000eb470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb570;
        }
    }
L_000eb474:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_000eb478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb52c;
        }
    }
L_000eb47c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_000eb480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb4b4;
        }
    }
L_000eb484:;
    {
        { uint32_t v = cpu->r[6] & 0x00000100u; set_nz(cpu, v); }
    }
L_000eb488:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb4cc;
        }
    }
L_000eb48c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eb490:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb494u)) return;
    }
L_000eb494:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_000eb498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb550;
        }
    }
L_000eb49c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_000eb4a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb560;
        }
    }
L_000eb4a4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eb4a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb52c;
        }
    }
L_000eb4ac:;
    {
        { uint32_t v = cpu->r[6] & 0x00000002u; set_nz(cpu, v); }
    }
L_000eb4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb484;
        }
    }
L_000eb4b4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000eb4b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb4bc:;
    {
        cpu->r[14] = 0x000eb4c4u;
    }
L_000eb4c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb4c4u)) return;
    }
L_000eb4c4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000100u; set_nz(cpu, v); }
    }
L_000eb4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb48c;
        }
    }
L_000eb4cc:;
    {
        cpu->r[0] = rd32(0x000eb4d4u + + 0xc4u);
    }
L_000eb4d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eb4d4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000eb4d8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_000eb4dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000eb4e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000eb4e4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000eb4e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eb4ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eb4f0:;
    {
        cpu->r[14] = 0x000eb4f4u; fn_000fd248(cpu);
    }
L_000eb4f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eb4f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000eb4fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb48c;
        }
    }
L_000eb500:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_000eb504:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000eb508:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 3u, &shc), 0, 1);
    }
L_000eb50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb48c;
        }
    }
L_000eb510:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_000eb514:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb518:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000eb51c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000eb520:;
    {
        cpu->r[14] = 0x000eb528u;
    }
L_000eb524:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb528u)) return;
    }
L_000eb528:;
    {
        goto L_000eb48c;
    }
L_000eb52c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000eb530:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb534:;
    {
        cpu->r[14] = 0x000eb53cu;
    }
L_000eb538:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb53cu)) return;
    }
L_000eb53c:;
    {
        goto L_000eb484;
    }
L_000eb540:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000eb544:;
    {
        cpu->r[14] = 0x000eb54cu;
    }
L_000eb548:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb54cu)) return;
    }
L_000eb54c:;
    {
        goto L_000eb474;
    }
L_000eb550:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000eb554:;
    {
        cpu->r[14] = 0x000eb55cu;
    }
L_000eb558:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb55cu)) return;
    }
L_000eb55c:;
    {
        goto L_000eb4a4;
    }
L_000eb560:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000eb564:;
    {
        cpu->r[14] = 0x000eb56cu;
    }
L_000eb568:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb56cu)) return;
    }
L_000eb56c:;
    {
        goto L_000eb4a4;
    }
L_000eb570:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000eb574:;
    {
        cpu->r[14] = 0x000eb57cu;
    }
L_000eb578:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb57cu)) return;
    }
L_000eb57c:;
    {
        goto L_000eb474;
    }
L_000eb580:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000eb584:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eb588:;
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
L_000eb58c:;
    {
        return fn_00097a04(cpu);
    }
}

/* _ZN6gxMenu13CheckClearKeyEi @ 000eb59c (arm) */
void fn_000eb59c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb59c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000eb5a0:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000eb5a4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000eb5a8:;
    {
        cpu->r[4] = rd32(0x000eb5b0u + + 0xdcu);
    }
L_000eb5ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb5b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000eb5b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000eb5bcu, cpu->r[4], 0, 0);
    }
L_000eb5b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000eb5bc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000eb5c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000eb5c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00200000u; set_nz(cpu, v); }
    }
L_000eb5c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb5d4;
        }
    }
L_000eb5cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000eb5d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb5d4u)) return;
    }
L_000eb5d4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000eb5d8:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_000eb5dc:;
    {
        cpu->r[14] = 0x000eb5e4u;
    }
L_000eb5e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb5e4u)) return;
    }
L_000eb5e4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb5e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb680;
        }
    }
L_000eb5ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000eb5f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eb5f4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000eb5f8:;
    {
        cpu->r[14] = 0x000eb600u;
    }
L_000eb5fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb600u)) return;
    }
L_000eb600:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb61c;
        }
    }
L_000eb608:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000eb60c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000eb610:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000eb614:;
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
L_000eb618:;
    {
        return fn_00096990(cpu);
    }
L_000eb61c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000eb620:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000eb624:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000eb628:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_000eb62c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eb630:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000eb634:;
    {
        cpu->r[14] = 0x000eb638u; fn_000fd248(cpu);
    }
L_000eb638:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_000eb63c:;
    {
        cpu->r[14] = 0x000eb640u; fn_0018ba6c(cpu);
    }
L_000eb640:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000eb644:;
    {
        cpu->r[14] = 0x000eb648u; fn_000a7570(cpu);
    }
L_000eb648:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000eb64c:;
    {
        cpu->r[0] = 0x000006a4u;
    }
L_000eb650:;
    {
        cpu->r[14] = 0x000eb654u; fn_000aeb58(cpu);
    }
L_000eb654:;
    {
        cpu->r[3] = rd32(0x000eb65cu + + 0x34u);
    }
L_000eb658:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb65c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000eb660:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000eb664:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eb668:;
    {
        cpu->r[14] = 0x000eb66cu; fn_000a7bb0(cpu);
    }
L_000eb66c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000eb670:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000eb674:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000eb678:;
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
L_000eb67c:;
    {
        return fn_000f361c(cpu);
    }
L_000eb680:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000eb684:;
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
L_000eb688:;
    {
        return fn_00072478(cpu);
    }
}

/* _ZN6gxMenu13OnMouseActionEi @ 000eb694 (arm) */
void fn_000eb694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb694:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x80u);
    }
L_000eb698:;
    {
        cpu->r[3] = rd32(0x000eb6a0u + + 0x74u);
    }
L_000eb69c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000eb6a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb6a8u, cpu->r[3], 0, 0);
    }
L_000eb6a4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000eb6a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eb6d8;
        }
    }
L_000eb6ac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x78u);
    }
L_000eb6b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000eb6b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb6e0;
        }
    }
L_000eb6b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_000eb6bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000eb6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000eb6c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000eb6c8:;
    {
        { uint32_t v = cpu->r[3] & 0x02000000u; set_nz(cpu, v); }
    }
L_000eb6cc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000eb6d0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
        }
    }
L_000eb6d4:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[3]);
    }
L_000eb6d8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000eb6dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000eb6e0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x88u);
    }
L_000eb6e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000eb6e8:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_000eb6ec:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[4]);
    }
L_000eb6f0:;
    {
        cpu->r[0] = rd32(0x000eb6f8u + + 0x20u);
    }
L_000eb6f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_000eb6f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_000eb6fc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000eb700:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000eb704:;
    {
        uint32_t v = cpu->r[2] | 0x00004000u; cpu->r[2] = v;
    }
L_000eb708:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000eb70c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000eb710:;
    {
        return fn_00096990(cpu);
    }
}

/* _ZN11gxGameState12AddRectangleEiiiii @ 000eb71c (arm) */
void fn_000eb71c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb71c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000eb720:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb724:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eb728:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000eb72c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000eb730:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000eb734:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000eb738:;
    {
        cpu->r[14] = 0x000eb73cu; fn_0018ba6c(cpu);
    }
L_000eb73c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000eb740:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000eb744:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000eb748:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000eb74c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_000eb750:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eb754:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000eb758:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000eb75c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_000eb760:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000eb764:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000eb768:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000eb76c:;
    {
        cpu->r[14] = 0x000eb770u; fn_000eab24(cpu);
    }
L_000eb770:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000eb774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_000eb778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb7ac;
        }
    }
L_000eb77c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_000eb780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000eb784:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000eb788:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eb7b4;
        }
    }
L_000eb78c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000eb790:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000eb794:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000eb798:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000eb79c:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_000eb7a0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_000eb7a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000eb7a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb7d4;
        }
    }
L_000eb7ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eb7b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb7b4u)) return;
    }
L_000eb7b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000eb7b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 0, 1);
    }
L_000eb7bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb7e4;
        }
    }
L_000eb7c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000eb7c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb7c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb81c;
        }
    }
L_000eb7cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000eb7d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000eb814;
        }
    }
L_000eb7d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eb7d8:;
    {
        cpu->r[14] = 0x000eb7dcu; fn_0018ba20(cpu);
    }
L_000eb7dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000eb7e0:;
    {
        goto L_000eb7ac;
    }
L_000eb7e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000eb7e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb7ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb814;
        }
    }
L_000eb7f0:;
    {
        cpu->r[14] = 0x000eb7f4u; fn_0018ba60(cpu);
    }
L_000eb7f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000eb7f8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_000eb7fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000eb800:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_000eb804:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000eb808:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[6]);
    }
L_000eb80c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000eb810:;
    {
        goto L_000eb798;
    }
L_000eb814:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000eb818:;
    {
        goto L_000eb798;
    }
L_000eb81c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000eb820:;
    {
        cpu->r[14] = 0x000eb824u; imp__Znaj(cpu); /* _Znaj */
    }
L_000eb824:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb828:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000eb82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb7d4;
        }
    }
L_000eb830:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000eb834:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_000eb838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000eb83c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000eb840:;
    {
        goto L_000eb798;
    }
}

/* _ZN11gxGameState11CreateRectsEi @ 000eb844 (arm) */
void fn_000eb844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb844:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eb848:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000eb84c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb850:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb878;
        }
    }
L_000eb854:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_000eb858:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb8b0;
        }
    }
L_000eb860:;
    {
        cpu->r[14] = 0x000eb864u; fn_0018ba60(cpu);
    }
L_000eb864:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000eb868:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_000eb86c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000eb870:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_000eb874:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb878u)) return;
    }
L_000eb878:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_000eb87c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eb880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb898;
        }
    }
L_000eb884:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000eb888:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000eb88c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000eb890:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000eb894:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb898u)) return;
    }
L_000eb898:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000eb89c:;
    {
        cpu->r[14] = 0x000eb8a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000eb8a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb8a4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000eb8a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb8acu)) return;
        }
    }
L_000eb8ac:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_000eb8b0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000eb8b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb8b8u)) return;
    }
}

/* _ZN6gxMenu11CreateItemsEi @ 000eb8b8 (arm) */
void fn_000eb8b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb8b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000eb8bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000eb8c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb8c4:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[1]);
    }
L_000eb8c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb8d4;
        }
    }
L_000eb8cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000eb8d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb8d4u)) return;
    }
L_000eb8d4:;
    {
        cpu->r[14] = 0x000eb8d8u; fn_000eb844(cpu);
    }
L_000eb8d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb8dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000eb8e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb8e4u)) return;
        }
    }
L_000eb8e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_000eb8e8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_000eb8ec:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_000eb8f0:;
    {
        cpu->r[14] = 0x000eb8f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000eb8f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb8f8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[0]);
    }
L_000eb8fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_000eb900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb8cc;
        }
    }
L_000eb904:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb908u)) return;
    }
}

/* _ZN11gxGameState8FindRectEii @ 000eb908 (arm) */
void fn_000eb908(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb908:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_000eb90c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000eb910:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000eb914:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000eb918:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eb980;
        }
    }
L_000eb91c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000eb920:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000eb924:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_000eb928:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eb92c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000eb930:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000eb934:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000eb938:;
    {
        vfp_sync_flags(cpu);
    }
L_000eb93c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eb974;
        }
    }
L_000eb940:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000eb944:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000eb948:;
    {
        vfp_sync_flags(cpu);
    }
L_000eb94c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eb974;
        }
    }
L_000eb950:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000eb954:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000eb958:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_000eb95c:;
    {
        vfp_sync_flags(cpu);
    }
L_000eb960:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eb974;
        }
    }
L_000eb964:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_000eb968:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000eb96c:;
    {
        vfp_sync_flags(cpu);
    }
L_000eb970:;
    {
        if (cond_test(cpu, 10)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000eb974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000eb978:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000eb97c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb92c;
        }
    }
L_000eb980:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_000eb984:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState18ProcessOnMouseDragEv @ 000eb988 (arm) */
void fn_000eb988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb988:;
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
L_000eb98c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000eb990:;
    {
        cpu->r[10] = rd32(0x000eb998u + + 0x470u);
    }
L_000eb994:;
    {
        cpu->r[3] = rd32(0x000eb99cu + + 0x470u);
    }
L_000eb998:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000eb99c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000eb9a4u, cpu->r[10], 0, 0);
    }
L_000eb9a0:;
    {
        cpu->r[2] = rd32(0x000eb9a8u + + 0x468u);
    }
L_000eb9a4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_000eb9a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000eb9ac:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000eb9b0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000eb9b4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000eb9b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000eb9bc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000eb9c0:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_000eb9c4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000eb9c8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000eb9cc:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_000eb9d0:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[7]);
    }
L_000eb9d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ebcc4;
        }
    }
L_000eb9d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000eb9dc:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000eb9e0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000eb9e4:;
    {
        cpu->r[3] = rd32(0x000eb9ecu + + 0x428u);
    }
L_000eb9e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb9f0u, cpu->r[3], 0, 0);
    }
L_000eb9ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000eb9f0:;
    {
        cpu->r[3] = rd32(0x000eb9f8u + + 0x420u);
    }
L_000eb9f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb9fcu, cpu->r[3], 0, 0);
    }
L_000eb9f8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000eb9fc:;
    {
        cpu->r[3] = rd32(0x000eba04u + + 0x418u);
    }
L_000eba00:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eba08u, cpu->r[3], 0, 0);
    }
L_000eba04:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000eba08:;
    {
        cpu->r[3] = rd32(0x000eba10u + + 0x410u);
    }
L_000eba0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eba14u, cpu->r[3], 0, 0);
    }
L_000eba10:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000eba14:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000eba18:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000eba1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eba20:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000eba24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000eba28:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[2]);
    }
L_000eba2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ebcd0;
        }
    }
L_000eba30:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x34u);
    }
L_000eba34:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000eba38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000eba3c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000eba40:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[4]);
    }
L_000eba44:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000eba48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ebcac;
        }
    }
L_000eba4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000eba50:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_000eba54:;
    {
        cpu->r[2] = rd32(0x000eba5cu + + 0x3c8u);
    }
L_000eba58:;
    {
        cpu->r[9] = rd32(0x000eba60u + + 0x3c8u);
    }
L_000eba5c:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[12] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_000eba60:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000eba64:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000eba68:;
    {
        goto L_000ebb9c;
    }
L_000eba6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000eba70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ebab4;
        }
    }
L_000eba74:;
    {
        cpu->r[1] = rd32(0x000eba7cu + + 0x3b0u);
    }
L_000eba78:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000eba7c:;
    {
        cpu->r[2] = rd32(0x000eba84u + + 0x3acu);
    }
L_000eba80:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000eba84:;
    {
        cpu->r[3] = rd32(0x000eba8cu + + 0x3a8u);
    }
L_000eba88:;
    {
        cpu->r[1] = add_flags(cpu, 0x000eba90u, cpu->r[1], 0, 0);
    }
L_000eba8c:;
    {
        cpu->r[12] = rd32(0x000eba94u + + 0x3a4u);
    }
L_000eba90:;
    {
        cpu->r[2] = add_flags(cpu, 0x000eba98u, cpu->r[2], 0, 0);
    }
L_000eba94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eba9cu, cpu->r[3], 0, 0);
    }
L_000eba98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000eba9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ebaa4u, cpu->r[12], 0, 0);
    }
L_000ebaa0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebaa4:;
    {
        cpu->r[14] = 0x000ebaa8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebaa8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebaac:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebab0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ebab4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000ebab8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ebabc:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[1]);
    }
L_000ebac0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ebafc;
        }
    }
L_000ebac4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ebac8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebacc:;
    {
        cpu->r[3] = rd32(0x000ebad4u + + 0x368u);
    }
L_000ebad0:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ebad4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ebadcu, cpu->r[2], 0, 0);
    }
L_000ebad8:;
    {
        cpu->r[2] = rd32(0x000ebae0u + + 0x360u);
    }
L_000ebadc:;
    {
        cpu->r[12] = rd32(0x000ebae4u + + 0x360u);
    }
L_000ebae0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ebae8u, cpu->r[3], 0, 0);
    }
L_000ebae4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebaecu, cpu->r[2], 0, 0);
    }
L_000ebae8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ebaec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ebaf4u, cpu->r[12], 0, 0);
    }
L_000ebaf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebaf4:;
    {
        cpu->r[14] = 0x000ebaf8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebaf8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebafc:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ebb00:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000ebb04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000ebb08:;
    {
        cpu->r[14] = rd32(cpu->r[11] + + 0x1cu);
    }
L_000ebb0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ebb10:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x20u);
    }
L_000ebb14:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x14u);
    }
L_000ebb18:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000ebb1c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x18u);
    }
L_000ebb20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ebb24:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000ebb28:;
    {
        wr32(cpu->r[11] + + 0x18u, cpu->r[3]);
    }
L_000ebb2c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000ebb30:;
    {
        wr32(cpu->r[11] + + 0x14u, cpu->r[2]);
    }
L_000ebb34:;
    {
        wr32(cpu->r[11] + + 0x1cu, cpu->r[12]);
    }
L_000ebb38:;
    {
        wr32(cpu->r[11] + + 0x20u, cpu->r[1]);
    }
L_000ebb3c:;
    {
        cpu->r[14] = 0x000ebb40u; fn_0009b4d0(cpu);
    }
L_000ebb40:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x28u);
    }
L_000ebb44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ebb48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ebb84;
        }
    }
L_000ebb4c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x1cu);
    }
L_000ebb50:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11] + + 0x20u);
    }
L_000ebb54:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ebb58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ebb60u + + 0x2a4u);
    }
L_000ebb5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000ebb60:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ebb64:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ebb68:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000ebb6c:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000ebb70:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ebb74:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_000ebb78:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ebb7c:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ebb80:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ebb84:;
    {
        wr32(cpu->r[11] + + 0x28u, cpu->r[0]);
    }
L_000ebb88:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebb8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ebb90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000ebb94:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000ebb98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ebcac;
        }
    }
L_000ebb9c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000ebba0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000ebba4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000ebba8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ebbac:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000ebbb0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x4u);
    }
L_000ebbb4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebbdc;
        }
    }
L_000ebbb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ebbbc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebbc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ebbc4:;
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
L_000ebbc8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebbcc:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ebbd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ebbd4:;
    {
        cpu->r[14] = 0x000ebbd8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebbd8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebbdc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000ebbe0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebbe4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ebbe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ebbec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000ebbf0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ebbf4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ebb8c;
        }
    }
L_000ebbf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000ebbfc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000ebc00:;
    {
        vfp_sync_flags(cpu);
    }
L_000ebc04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ebb8c;
        }
    }
L_000ebc08:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_000ebc0c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ebc10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000ebc14:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ebc18:;
    {
        vfp_sync_flags(cpu);
    }
L_000ebc1c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ebb8c;
        }
    }
L_000ebc20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000ebc24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ebc28:;
    {
        vfp_sync_flags(cpu);
    }
L_000ebc2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ebb8c;
        }
    }
L_000ebc30:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000ebc34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebc78;
        }
    }
L_000ebc38:;
    {
        cpu->r[1] = rd32(0x000ebc40u + + 0x208u);
    }
L_000ebc3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebc40:;
    {
        cpu->r[2] = rd32(0x000ebc48u + + 0x204u);
    }
L_000ebc44:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ebc48:;
    {
        cpu->r[3] = rd32(0x000ebc50u + + 0x200u);
    }
L_000ebc4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ebc54u, cpu->r[1], 0, 0);
    }
L_000ebc50:;
    {
        cpu->r[12] = rd32(0x000ebc58u + + 0x1fcu);
    }
L_000ebc54:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebc5cu, cpu->r[2], 0, 0);
    }
L_000ebc58:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ebc60u, cpu->r[3], 0, 0);
    }
L_000ebc5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ebc60:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ebc68u, cpu->r[12], 0, 0);
    }
L_000ebc64:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebc68:;
    {
        cpu->r[14] = 0x000ebc6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebc6c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebc70:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebc74:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ebc78:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x24u);
    }
L_000ebc7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000ebc80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eba6c;
        }
    }
L_000ebc84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ebc88:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ebc8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000ebc90:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_000ebc94:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ebc98:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_000ebc9c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_000ebca0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ebca4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000ebca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ebb9c;
        }
    }
L_000ebcac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ebcb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ebcb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ebd5c;
        }
    }
L_000ebcb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ebcbc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000ebcc0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eba14;
        }
    }
L_000ebcc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ebcc8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000ebccc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ebcd0u)) return;
    }
L_000ebcd0:;
    {
        cpu->r[4] = rd32(0x000ebcd8u + + 0x180u);
    }
L_000ebcd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebcd8:;
    {
        cpu->r[5] = rd32(0x000ebce0u + + 0x17cu);
    }
L_000ebcdc:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ebce0:;
    {
        cpu->r[9] = rd32(0x000ebce8u + + 0x178u);
    }
L_000ebce4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ebcecu, cpu->r[4], 0, 0);
    }
L_000ebce8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ebcf0u, cpu->r[5], 0, 0);
    }
L_000ebcec:;
    {
        cpu->r[11] = rd32(0x000ebcf4u + + 0x170u);
    }
L_000ebcf0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ebcf8u, cpu->r[9], 0, 0);
    }
L_000ebcf4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ebcf8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ebcfc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ebd00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ebd04:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ebd0cu, cpu->r[11], 0, 0);
    }
L_000ebd08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ebd0c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000ebd10:;
    {
        cpu->r[14] = 0x000ebd14u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebd14:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebd18:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebd1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ebd20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000ebd24:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000ebd28:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x34u);
    }
L_000ebd2c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000ebd30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000eba38;
        }
    }
L_000ebd34:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ebd38:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ebd3c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ebd40:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebd44:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ebd48:;
    {
        cpu->r[14] = 0x000ebd4cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebd4c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebd50:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebd54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ebd58:;
    {
        goto L_000eba38;
    }
L_000ebd5c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000ebd60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebd9c;
        }
    }
L_000ebd64:;
    {
        cpu->r[1] = rd32(0x000ebd6cu + + 0xfcu);
    }
L_000ebd68:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebd6c:;
    {
        cpu->r[2] = rd32(0x000ebd74u + + 0xf8u);
    }
L_000ebd70:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ebd74:;
    {
        cpu->r[3] = rd32(0x000ebd7cu + + 0xf4u);
    }
L_000ebd78:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ebd80u, cpu->r[1], 0, 0);
    }
L_000ebd7c:;
    {
        cpu->r[12] = rd32(0x000ebd84u + + 0xf0u);
    }
L_000ebd80:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebd88u, cpu->r[2], 0, 0);
    }
L_000ebd84:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ebd8cu, cpu->r[3], 0, 0);
    }
L_000ebd88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ebd8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ebd94u, cpu->r[12], 0, 0);
    }
L_000ebd90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebd94:;
    {
        cpu->r[14] = 0x000ebd98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebd98:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebd9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebda0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ebda4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x34u);
    }
L_000ebda8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ebdac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ebcb8;
        }
    }
L_000ebdb0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000ebdb4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebdf8;
        }
    }
L_000ebdb8:;
    {
        cpu->r[1] = rd32(0x000ebdc0u + + 0xb8u);
    }
L_000ebdbc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebdc0:;
    {
        cpu->r[2] = rd32(0x000ebdc8u + + 0xb4u);
    }
L_000ebdc4:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ebdc8:;
    {
        cpu->r[3] = rd32(0x000ebdd0u + + 0xb0u);
    }
L_000ebdcc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ebdd4u, cpu->r[1], 0, 0);
    }
L_000ebdd0:;
    {
        cpu->r[12] = rd32(0x000ebdd8u + + 0xacu);
    }
L_000ebdd4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebddcu, cpu->r[2], 0, 0);
    }
L_000ebdd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ebde0u, cpu->r[3], 0, 0);
    }
L_000ebddc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ebde0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ebde8u, cpu->r[12], 0, 0);
    }
L_000ebde4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebde8:;
    {
        cpu->r[14] = 0x000ebdecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebdec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ebdf0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ebdf4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ebdf8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ebdfc:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[2]);
    }
L_000ebe00:;
    {
        goto L_000ebcb8;
    }
}

/* _ZN11gxGameState19RemoveAllRectanglesEv @ 000ebe88 (arm) */
void fn_000ebe88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ebe88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ebe8c:;
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
L_000ebe90:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ebe94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ebe98:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ebe9c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ebf58;
        }
    }
L_000ebea0:;
    {
        cpu->r[8] = rd32(0x000ebea8u + + 0xb8u);
    }
L_000ebea4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000ebea8:;
    {
        cpu->r[10] = rd32(0x000ebeb0u + + 0xb4u);
    }
L_000ebeac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[7] = v;
    }
L_000ebeb0:;
    {
        cpu->r[9] = rd32(0x000ebeb8u + + 0xb0u);
    }
L_000ebeb4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ebebcu, cpu->r[8], 0, 0);
    }
L_000ebeb8:;
    {
        cpu->r[2] = rd32(0x000ebec0u + + 0xacu);
    }
L_000ebebc:;
    {
        cpu->r[10] = add_flags(cpu, 0x000ebec4u, cpu->r[10], 0, 0);
    }
L_000ebec0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ebec8u, cpu->r[9], 0, 0);
    }
L_000ebec4:;
    {
        cpu->r[11] = 0x0000006au;
    }
L_000ebec8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebed0u, cpu->r[2], 0, 0);
    }
L_000ebecc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ebed0:;
    {
        goto L_000ebef4;
    }
L_000ebed4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ebed8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_000ebedc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000ebee0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000ebee4:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000ebee8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_000ebeec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ebf58;
        }
    }
L_000ebef0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ebef4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ebef8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebf1c;
        }
    }
L_000ebefc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ebf00:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ebf04:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ebf08:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ebf0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebf10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_000ebf14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ebf18:;
    {
        cpu->r[14] = 0x000ebf1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ebf1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ebf20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ebf24:;
    {
        cpu->r[14] = 0x000ebf28u; fn_0018ba20(cpu);
    }
L_000ebf28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ebf2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ebf30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ebedc;
        }
    }
L_000ebf34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ebf38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ebed4;
        }
    }
L_000ebf3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ebf40:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000ebf44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000ebf48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000ebf4c:;
    {
        cpu->r[14] = 0x000ebf50u; imp_memcpy(cpu); /* memcpy */
    }
L_000ebf50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ebf54:;
    {
        goto L_000ebed4;
    }
L_000ebf58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ebf5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ebf60u)) return;
    }
}

/* _ZN11gxGameStateD1Ev @ 000ebf70 (arm) */
void fn_000ebf70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ebf70:;
    {
        cpu->r[2] = rd32(0x000ebf78u + + 0xd8u);
    }
L_000ebf74:;
    {
        cpu->r[1] = rd32(0x000ebf7cu + + 0xd8u);
    }
L_000ebf78:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ebf80u, cpu->r[2], 0, 0);
    }
L_000ebf7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ebf80:;
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
L_000ebf84:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ebf88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ebf8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ebf90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000ebf94:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ebf98:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000ebf9c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_000ebfa0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ec024;
        }
    }
L_000ebfa4:;
    {
        cpu->r[8] = rd32(0x000ebfacu + + 0xacu);
    }
L_000ebfa8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ebfac:;
    {
        cpu->r[10] = rd32(0x000ebfb4u + + 0xa8u);
    }
L_000ebfb0:;
    {
        cpu->r[7] = 0x0000006au;
    }
L_000ebfb4:;
    {
        cpu->r[9] = rd32(0x000ebfbcu + + 0xa4u);
    }
L_000ebfb8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ebfc0u, cpu->r[8], 0, 0);
    }
L_000ebfbc:;
    {
        cpu->r[11] = rd32(0x000ebfc4u + + 0xa0u);
    }
L_000ebfc0:;
    {
        cpu->r[10] = add_flags(cpu, 0x000ebfc8u, cpu->r[10], 0, 0);
    }
L_000ebfc4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_000ebfc8:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ebfd0u, cpu->r[9], 0, 0);
    }
L_000ebfcc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ebfd4u, cpu->r[11], 0, 0);
    }
L_000ebfd0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000ebfd4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000ebfd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ebfdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec018;
        }
    }
L_000ebfe0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ebfe4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ec00c;
        }
    }
L_000ebfe8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ebfec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ebff0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ebff4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ebff8:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000ebffc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ec000:;
    {
        cpu->r[14] = 0x000ec004u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ec004:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ec008:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ec00c:;
    {
        cpu->r[14] = 0x000ec010u; fn_0018ba20(cpu);
    }
L_000ec010:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ec014:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ec018:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ec01c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ec020:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ebfd0;
        }
    }
L_000ec024:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ec028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec044;
        }
    }
L_000ec02c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ec030:;
    {
        cpu->r[14] = 0x000ec034u; fn_0018ba60(cpu);
    }
L_000ec034:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec038:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_000ec03c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_000ec040:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_000ec044:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ec048:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ec04c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec050u)) return;
    }
}

/* _ZN11gxGameStateD0Ev @ 000ec068 (arm) */
void fn_000ec068(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec068:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec06c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec070:;
    {
        cpu->r[14] = 0x000ec074u; fn_000ebf70(cpu);
    }
L_000ec074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec078:;
    {
        cpu->r[14] = 0x000ec07cu; fn_0018ba20(cpu);
    }
L_000ec07c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec080:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec084u)) return;
    }
}

/* _ZN11gxGameStateD2Ev @ 000ec084 (arm) */
void fn_000ec084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec084:;
    {
        cpu->r[2] = rd32(0x000ec08cu + + 0xd8u);
    }
L_000ec088:;
    {
        cpu->r[1] = rd32(0x000ec090u + + 0xd8u);
    }
L_000ec08c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ec094u, cpu->r[2], 0, 0);
    }
L_000ec090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ec094:;
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
L_000ec098:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ec09c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ec0a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ec0a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000ec0a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ec0ac:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000ec0b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_000ec0b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ec138;
        }
    }
L_000ec0b8:;
    {
        cpu->r[8] = rd32(0x000ec0c0u + + 0xacu);
    }
L_000ec0bc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ec0c0:;
    {
        cpu->r[10] = rd32(0x000ec0c8u + + 0xa8u);
    }
L_000ec0c4:;
    {
        cpu->r[7] = 0x0000006au;
    }
L_000ec0c8:;
    {
        cpu->r[9] = rd32(0x000ec0d0u + + 0xa4u);
    }
L_000ec0cc:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ec0d4u, cpu->r[8], 0, 0);
    }
L_000ec0d0:;
    {
        cpu->r[11] = rd32(0x000ec0d8u + + 0xa0u);
    }
L_000ec0d4:;
    {
        cpu->r[10] = add_flags(cpu, 0x000ec0dcu, cpu->r[10], 0, 0);
    }
L_000ec0d8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_000ec0dc:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ec0e4u, cpu->r[9], 0, 0);
    }
L_000ec0e0:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ec0e8u, cpu->r[11], 0, 0);
    }
L_000ec0e4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000ec0e8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000ec0ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec12c;
        }
    }
L_000ec0f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ec0f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ec120;
        }
    }
L_000ec0fc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ec100:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ec104:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ec108:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ec10c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000ec110:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ec114:;
    {
        cpu->r[14] = 0x000ec118u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ec118:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ec11c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ec120:;
    {
        cpu->r[14] = 0x000ec124u; fn_0018ba20(cpu);
    }
L_000ec124:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ec128:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ec12c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ec130:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ec134:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ec0e4;
        }
    }
L_000ec138:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ec13c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec158;
        }
    }
L_000ec140:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ec144:;
    {
        cpu->r[14] = 0x000ec148u; fn_0018ba60(cpu);
    }
L_000ec148:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec14c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_000ec150:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_000ec154:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_000ec158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ec15c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ec160:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec164u)) return;
    }
}

/* _ZN8GS_ErrorD1Ev @ 000ec17c (arm) */
void fn_000ec17c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec17c:;
    {
        cpu->r[3] = rd32(0x000ec184u + + 0x24u);
    }
L_000ec180:;
    {
        cpu->r[2] = rd32(0x000ec188u + + 0x24u);
    }
L_000ec184:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec18cu, cpu->r[3], 0, 0);
    }
L_000ec188:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec18c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec190:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec198:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ec19c:;
    {
        cpu->r[14] = 0x000ec1a0u; fn_000ec084(cpu);
    }
L_000ec1a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec1a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec1a8u)) return;
    }
}

/* _ZN6gxMenuD1Ev @ 000ec1b0 (arm) */
void fn_000ec1b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec1b0:;
    {
        cpu->r[3] = rd32(0x000ec1b8u + + 0x40u);
    }
L_000ec1b4:;
    {
        cpu->r[2] = rd32(0x000ec1bcu + + 0x40u);
    }
L_000ec1b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec1c0u, cpu->r[3], 0, 0);
    }
L_000ec1bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec1c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec1c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x88u);
    }
L_000ec1c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec1cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec1d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec1d4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000ec1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec1e8;
        }
    }
L_000ec1dc:;
    {
        cpu->r[14] = 0x000ec1e0u; fn_0018ba60(cpu);
    }
L_000ec1e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec1e4:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_000ec1e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec1ec:;
    {
        cpu->r[14] = 0x000ec1f0u; fn_000ec084(cpu);
    }
L_000ec1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec1f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec1f8u)) return;
    }
}

/* _ZN6gxMenuD0Ev @ 000ec200 (arm) */
void fn_000ec200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec200:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec204:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec208:;
    {
        cpu->r[14] = 0x000ec20cu; fn_000ec1b0(cpu);
    }
L_000ec20c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec210:;
    {
        cpu->r[14] = 0x000ec214u; fn_0018ba20(cpu);
    }
L_000ec214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec218:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec21cu)) return;
    }
}

/* _ZN6gxMenuD2Ev @ 000ec21c (arm) */
void fn_000ec21c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec21c:;
    {
        cpu->r[3] = rd32(0x000ec224u + + 0x40u);
    }
L_000ec220:;
    {
        cpu->r[2] = rd32(0x000ec228u + + 0x40u);
    }
L_000ec224:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec22cu, cpu->r[3], 0, 0);
    }
L_000ec228:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec22c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec230:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x88u);
    }
L_000ec234:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec23c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec240:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000ec244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec254;
        }
    }
L_000ec248:;
    {
        cpu->r[14] = 0x000ec24cu; fn_0018ba60(cpu);
    }
L_000ec24c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec250:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_000ec254:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec258:;
    {
        cpu->r[14] = 0x000ec25cu; fn_000ec084(cpu);
    }
L_000ec25c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec260:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec264u)) return;
    }
}

/* _ZN6GS_RunD1Ev @ 000ec26c (arm) */
void fn_000ec26c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec26c:;
    {
        cpu->r[3] = rd32(0x000ec274u + + 0x24u);
    }
L_000ec270:;
    {
        cpu->r[2] = rd32(0x000ec278u + + 0x24u);
    }
L_000ec274:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec27cu, cpu->r[3], 0, 0);
    }
L_000ec278:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec27c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec280:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec284:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec288:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ec28c:;
    {
        cpu->r[14] = 0x000ec290u; fn_000ec21c(cpu);
    }
L_000ec290:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec294:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec298u)) return;
    }
}

/* _ZN6GS_RunD0Ev @ 000ec2a0 (arm) */
void fn_000ec2a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec2a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec2a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec2a8:;
    {
        cpu->r[14] = 0x000ec2acu; fn_000ec26c(cpu);
    }
L_000ec2ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec2b0:;
    {
        cpu->r[14] = 0x000ec2b4u; fn_0018ba20(cpu);
    }
L_000ec2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec2b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec2bcu)) return;
    }
}

/* _ZN6GS_RunD2Ev @ 000ec2bc (arm) */
void fn_000ec2bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec2bc:;
    {
        cpu->r[3] = rd32(0x000ec2c4u + + 0x24u);
    }
L_000ec2c0:;
    {
        cpu->r[2] = rd32(0x000ec2c8u + + 0x24u);
    }
L_000ec2c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec2ccu, cpu->r[3], 0, 0);
    }
L_000ec2c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec2cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec2d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec2d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec2d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ec2dc:;
    {
        cpu->r[14] = 0x000ec2e0u; fn_000ec21c(cpu);
    }
L_000ec2e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec2e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec2e8u)) return;
    }
}

/* _ZN8GS_ErrorD0Ev @ 000ec2f0 (arm) */
void fn_000ec2f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec2f0:;
    {
        cpu->r[3] = rd32(0x000ec2f8u + + 0x2cu);
    }
L_000ec2f4:;
    {
        cpu->r[2] = rd32(0x000ec2fcu + + 0x2cu);
    }
L_000ec2f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec300u, cpu->r[3], 0, 0);
    }
L_000ec2fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec300:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec304:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec308:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ec30c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000ec310:;
    {
        cpu->r[14] = 0x000ec314u; fn_000ec084(cpu);
    }
L_000ec314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec318:;
    {
        cpu->r[14] = 0x000ec31cu; fn_0018ba20(cpu);
    }
L_000ec31c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ec320:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec324u)) return;
    }
}

/* _ZN11gxGameState6RectAtEi @ 000ec32c (arm) */
void fn_000ec32c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec32c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ec330:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000ec334:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000ec338:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ec33c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ec340:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ec344:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ec37c;
        }
    }
L_000ec348:;
    {
        cpu->r[1] = rd32(0x000ec350u + + 0x3cu);
    }
L_000ec34c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ec350:;
    {
        cpu->r[2] = rd32(0x000ec358u + + 0x38u);
    }
L_000ec354:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ec358:;
    {
        cpu->r[3] = rd32(0x000ec360u + + 0x34u);
    }
L_000ec35c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ec364u, cpu->r[1], 0, 0);
    }
L_000ec360:;
    {
        cpu->r[12] = rd32(0x000ec368u + + 0x30u);
    }
L_000ec364:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ec36cu, cpu->r[2], 0, 0);
    }
L_000ec368:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec370u, cpu->r[3], 0, 0);
    }
L_000ec36c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ec370:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ec378u, cpu->r[12], 0, 0);
    }
L_000ec374:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ec378:;
    {
        cpu->r[14] = 0x000ec37cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ec37c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ec380:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000ec384:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ec388:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec38cu)) return;
    }
}

/* _ZN11gxGameState15RemoveRectangleEi @ 000ec39c (arm) */
void fn_000ec39c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec39c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ec3a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ec3a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ec3a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec3ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec3b0u)) return;
        }
    }
L_000ec3b0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x10u);
    }
L_000ec3b4:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000ec3b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ec3bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000ec3c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000ec3c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[5];
        }
    }
L_000ec3c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_000ec3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec400;
        }
    }
L_000ec3d0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ec3d4:;
    {
        goto L_000ec3e8;
    }
L_000ec3d8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000ec3dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ec3e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000ec3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec3fc;
        }
    }
L_000ec3e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ec3ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000ec3f0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000ec3f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ec3d8;
        }
    }
L_000ec3f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec3fcu)) return;
    }
L_000ec3fc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000ec400:;
    {
        cpu->r[14] = 0x000ec404u; fn_0018ba20(cpu);
    }
L_000ec404:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ec408:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000ec40c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec410u)) return;
        }
    }
L_000ec410:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000ec414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ec424;
        }
    }
L_000ec418:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ec41c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000ec420:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec424u)) return;
    }
L_000ec424:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ec428:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ec42c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000ec430:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000ec434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000ec438:;
    {
        cpu->r[14] = 0x000ec43cu; imp_memcpy(cpu); /* memcpy */
    }
L_000ec43c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ec440:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ec444:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000ec448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec44cu)) return;
    }
}

/* _ZN11gxGameState8FindRectEi @ 000ec44c (arm) */
void fn_000ec44c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec44c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_000ec450:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000ec454:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ec458:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ec494;
        }
    }
L_000ec45c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x10u);
    }
L_000ec460:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000ec464:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ec468:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000ec46c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ec470:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ec488;
        }
    }
L_000ec474:;
    {
        goto L_000ec498;
    }
L_000ec478:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000ec47c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ec480:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000ec484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec498;
        }
    }
L_000ec488:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ec48c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000ec490:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ec478;
        }
    }
L_000ec494:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ec498:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000ec49c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState15AdjustRectangleEiPi @ 000ec4a0 (arm) */
void fn_000ec4a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec4a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec4a4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000ec4a8:;
    {
        cpu->r[14] = 0x000ec4acu; fn_000ec44c(cpu);
    }
L_000ec4ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec4b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000ec4b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec4b8u)) return;
        }
    }
L_000ec4b8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_000ec4bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4]);
    }
L_000ec4c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_000ec4c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_000ec4c8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ec4cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec4d0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec4d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000ec4d8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ec4dc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000ec4e0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ec4e4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ec4e8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec4ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec4f0u)) return;
    }
}

/* _ZN11gxGameState15UnhideRectangleEi @ 000ec4f0 (arm) */
void fn_000ec4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec4f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec4f4:;
    {
        cpu->r[14] = 0x000ec4f8u; fn_000ec44c(cpu);
    }
L_000ec4f8:;
    {
        cpu->r[3] = rd32(0x000ec500u + + 0x4cu);
    }
L_000ec4fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec504u, cpu->r[3], 0, 0);
    }
L_000ec500:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec504:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000ec508:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec50cu)) return;
        }
    }
L_000ec50c:;
    {
        cpu->r[1] = rd32(0x000ec514u + + 0x3cu);
    }
L_000ec510:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ec514:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec518:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ec51c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ec520:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000ec524:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec528:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ec52c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec530:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000ec534:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
        }
    }
L_000ec538:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_000ec53c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_000ec540:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000ec544:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec548:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec54cu)) return;
    }
}

/* _ZN11gxGameState17isHiddenRectangleEi @ 000ec554 (arm) */
void fn_000ec554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec554:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec558:;
    {
        cpu->r[14] = 0x000ec55cu; fn_000ec44c(cpu);
    }
L_000ec55c:;
    {
        cpu->r[3] = rd32(0x000ec564u + + 0x28u);
    }
L_000ec560:;
    {
        cpu->r[2] = rd32(0x000ec568u + + 0x28u);
    }
L_000ec564:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec56cu, cpu->r[3], 0, 0);
    }
L_000ec568:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec56c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ec570:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ec574:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ec578:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ec57c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec580:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ec584:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000ec588:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec58cu)) return;
    }
}

/* _ZN11gxGameState13HideRectangleEi @ 000ec594 (arm) */
void fn_000ec594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec594:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec598:;
    {
        cpu->r[14] = 0x000ec59cu; fn_000ec44c(cpu);
    }
L_000ec59c:;
    {
        cpu->r[3] = rd32(0x000ec5a4u + + 0x4cu);
    }
L_000ec5a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec5a8u, cpu->r[3], 0, 0);
    }
L_000ec5a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec5a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000ec5ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec5b0u)) return;
        }
    }
L_000ec5b0:;
    {
        cpu->r[1] = rd32(0x000ec5b8u + + 0x3cu);
    }
L_000ec5b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ec5b8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec5bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ec5c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ec5c4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000ec5c8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec5cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ec5d0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec5d4:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000ec5d8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
        }
    }
L_000ec5dc:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_000ec5e0:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_000ec5e4:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000ec5e8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec5ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec5f0u)) return;
    }
}

/* _ZN11gxGameState20isScrollingRectangleEi @ 000ec5f8 (arm) */
void fn_000ec5f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec5f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec5fc:;
    {
        cpu->r[14] = 0x000ec600u; fn_000ec44c(cpu);
    }
L_000ec600:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec604:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec608u)) return;
        }
    }
L_000ec608:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000ec60c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ec610:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ec614:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec618:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ec61c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000ec620:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec624u)) return;
    }
}

/* _ZN11gxGameState21UpdateScrollRectangleEi @ 000ec624 (arm) */
void fn_000ec624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec624:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec628:;
    {
        cpu->r[14] = 0x000ec62cu; fn_000ec44c(cpu);
    }
L_000ec62c:;
    {
        cpu->r[3] = rd32(0x000ec634u + + 0xf0u);
    }
L_000ec630:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec638u, cpu->r[3], 0, 0);
    }
L_000ec634:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec638:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000ec63c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec640u)) return;
        }
    }
L_000ec640:;
    {
        cpu->r[1] = rd32(0x000ec648u + + 0xe0u);
    }
L_000ec644:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000ec648:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ec64c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ec650:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ec654:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000ec658:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec65c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ec6b0;
        }
    }
L_000ec660:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
    }
L_000ec664:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_000ec668:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec670u + + 0x9cu);
    }
L_000ec66c:;
    {
        vfp_vsub(cpu, 12, 14, 15);
    }
L_000ec670:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_000ec674:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000ec678:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec67c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ec6e4;
        }
    }
L_000ec680:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ec684:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec688:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ec6f0;
        }
    }
L_000ec68c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec694u + + 0x7cu);
    }
L_000ec690:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_000ec694:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec69cu + + 0x78u);
    }
L_000ec698:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec69c:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_000ec6a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ec6a8u + + 0x70u);
    }
L_000ec6a4:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000ec6a8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec6ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec6b0u)) return;
    }
L_000ec6b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_000ec6b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ec6b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec6bc:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_000ec6c0:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000ec6c4:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_000ec6c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec6d0u + + 0x3cu);
    }
L_000ec6cc:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_000ec6d0:;
    {
        vfp_vsub(cpu, 12, 14, 15);
    }
L_000ec6d4:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_000ec6d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000ec6dc:;
    {
        vfp_sync_flags(cpu);
    }
L_000ec6e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ec680;
        }
    }
L_000ec6e4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec6e8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ec6ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec6f0u)) return;
    }
L_000ec6f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec6f8u + + 0x24u);
    }
L_000ec6f4:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_000ec6f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ec700u + + 0x20u);
    }
L_000ec6fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec700:;
    {
        vfp_vdiv(cpu, 15, 14, 13);
    }
L_000ec704:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec708:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec70cu)) return;
    }
}

/* _ZN11gxGameState15ScrollRectangleEii @ 000ec72c (arm) */
void fn_000ec72c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec72c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ec730:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000ec734:;
    {
        cpu->r[14] = 0x000ec738u; fn_000ec44c(cpu);
    }
L_000ec738:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec73c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
        }
    }
L_000ec740:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000ec744:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000ec748:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_000ec74c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
        }
    }
L_000ec750:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vadd(cpu, 15, 14, 15);
        }
    }
L_000ec754:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000ec758:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec75cu)) return;
    }
}

/* _ZN11gxGameState15AdjustRectangleEiiiii @ 000ec75c (arm) */
void fn_000ec75c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec75c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ec760:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000ec764:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000ec768:;
    {
        cpu->r[14] = 0x000ec76cu; fn_000ec44c(cpu);
    }
L_000ec76c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ec770:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000ec774:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec778u)) return;
        }
    }
L_000ec778:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ec77c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000ec780:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[4];
    }
L_000ec784:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ec788:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000ec78c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000ec790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ec794:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000ec798:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ec79c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000ec7a0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000ec7a4:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec7a8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec7ac:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec7b0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ec7b4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000ec7b8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_000ec7bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec7c0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ec7c4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec7c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec7ccu)) return;
    }
}

/* _ZN6GS_Run13DisableButtonEi @ 000ec7cc (arm) */
void fn_000ec7cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec7cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_000ec7d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000ec7d4:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000ec7d8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000ec7dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ec7e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_000ec7e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ec7e8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000ec7ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ec7f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ec7f4:;
    {
        cpu->r[14] = 0x000ec7f8u; fn_000ec75c(cpu);
    }
L_000ec7f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ec7fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec800u)) return;
    }
}

/* _ZN11gxGameState24ProcessOnMouseButtonDownEv @ 000ec800 (arm) */
void fn_000ec800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec800:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ec804:;
    {
        cpu->r[5] = rd32(0x000ec80cu + + 0x17cu);
    }
L_000ec808:;
    {
        cpu->r[8] = rd32(0x000ec810u + + 0x17cu);
    }
L_000ec80c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ec810:;
    {
        cpu->r[7] = rd32(0x000ec818u + + 0x178u);
    }
L_000ec814:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ec81cu, cpu->r[5], 0, 0);
    }
L_000ec818:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000ec81c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ec820:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000ec824:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000ec828:;
    {
        cpu->r[14] = 0x000ec82cu; fn_000eb908(cpu);
    }
L_000ec82c:;
    {
        cpu->r[1] = rd32(0x000ec834u + + 0x160u);
    }
L_000ec830:;
    {
        cpu->r[2] = 0x000067c0u;
    }
L_000ec834:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec838:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000ec83c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ec840:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_000ec844:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ec848:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ec84c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ec850:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec854u)) return;
        }
    }
L_000ec854:;
    {
        wr8(cpu->r[6] + + 0x64u, cpu->r[3]);
    }
L_000ec858:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_000ec85c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ec860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000ec864:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x34u, cpu->r[3]);
        }
    }
L_000ec868:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ec86c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ec870:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x34u, cpu->r[3]);
        }
    }
L_000ec874:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
        }
    }
L_000ec878:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000ec87c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ec880:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ec884:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000ec888:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000ec88c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ec890:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_000ec894:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_000ec898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_000ec89c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000ec8a0:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000ec8a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ec8a8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000ec8ac:;
    {
        wr32(cpu->r[6] + + 0x60u, cpu->r[4]);
    }
L_000ec8b0:;
    {
        wr8(cpu->r[4] + + 0x35u, cpu->r[14]);
    }
L_000ec8b4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000ec8b8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_000ec8bc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_000ec8c0:;
    {
        cpu->r[14] = 0x000ec8c4u; fn_0009b4d0(cpu);
    }
L_000ec8c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_000ec8c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ec8cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ec908;
        }
    }
L_000ec8d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_000ec8d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000ec8d8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ec8dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ec8e4u + + 0x9cu);
    }
L_000ec8e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000ec8e4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ec8e8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ec8ec:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000ec8f0:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000ec8f4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ec8f8:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_000ec8fc:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ec900:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ec904:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec908:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_000ec90c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_000ec910:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ec914:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ec91cu + + 0x68u);
    }
L_000ec918:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec91c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ec920:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000ec924:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ec928:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ec92c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000ec930:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_000ec934:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000ec938:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_000ec93c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_000ec940:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ec944:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_000ec948:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000ec94c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[1]);
    }
L_000ec950:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ec954:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000ec958:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_000ec95c:;
    {
        cpu->r[14] = 0x000ec960u; fn_0009b4d0(cpu);
    }
L_000ec960:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_000ec964:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ec968:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ec96c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000ec970:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ec974:;
    {
        cpu->r[14] = 0x000ec97cu;
    }
L_000ec978:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec97cu)) return;
    }
L_000ec97c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec980u)) return;
    }
}

/* _ZN6GS_Run24ProcessOnMouseButtonDownEv @ 000ec998 (arm) */
void fn_000ec998(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec998:;
    {
        cpu->r[3] = rd32(0x000ec9a0u + + 0x50u);
    }
L_000ec99c:;
    {
        cpu->r[2] = rd32(0x000ec9a4u + + 0x50u);
    }
L_000ec9a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ec9a8u, cpu->r[3], 0, 0);
    }
L_000ec9a4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ec9a8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ec9ac:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_000ec9b0:;
    {
        cpu->r[4] = 0x00008818u;
    }
L_000ec9b4:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000ec9b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ec9bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ec9c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000ec9c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000ec9c8:;
    {
        cpu->r[14] = 0x000ec9ccu; fn_00149710(cpu);
    }
L_000ec9cc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ec9d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000ec9d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000ec9d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x15cu);
    }
L_000ec9dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ec9e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ec9e4u)) return;
        }
    }
L_000ec9e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ec9e8:;
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
L_000ec9ec:;
    {
        return fn_000ec800(cpu);
    }
}

/* _ZN11gxGameState22ProcessOnMouseButtonUpEv @ 000ec9f8 (arm) */
void fn_000ec9f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ec9f8:;
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
L_000ec9fc:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000eca00:;
    {
        cpu->r[10] = rd32(0x000eca08u + + 0x654u);
    }
L_000eca04:;
    {
        cpu->r[2] = rd32(0x000eca0cu + + 0x654u);
    }
L_000eca08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_000eca0c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000eca14u, cpu->r[10], 0, 0);
    }
L_000eca10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000eca14:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000eca18:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000eca1c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000eca20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000eca24:;
    {
        cpu->r[2] = rd32(0x000eca2cu + + 0x638u);
    }
L_000eca28:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000eca2c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000eca30:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000eca34:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000eca38:;
    {
        cpu->r[2] = 0x000067c0u;
    }
L_000eca3c:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[7]);
    }
L_000eca40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ecf28;
        }
    }
L_000eca44:;
    {
        cpu->r[2] = rd32(0x000eca4cu + + 0x61cu);
    }
L_000eca48:;
    {
        cpu->r[1] = rd32(0x000eca50u + + 0x61cu);
    }
L_000eca4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000eca54u, cpu->r[2], 0, 0);
    }
L_000eca50:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000eca54:;
    {
        cpu->r[1] = add_flags(cpu, 0x000eca5cu, cpu->r[1], 0, 0);
    }
L_000eca58:;
    {
        cpu->r[2] = rd32(0x000eca60u + + 0x610u);
    }
L_000eca5c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000eca60:;
    {
        cpu->r[1] = rd32(0x000eca68u + + 0x60cu);
    }
L_000eca64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000eca6cu, cpu->r[2], 0, 0);
    }
L_000eca68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eca6c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000eca70:;
    {
        cpu->r[12] = rd32(0x000eca78u + + 0x600u);
    }
L_000eca74:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000eca78:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000eca7c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_000eca80:;
    {
        cpu->r[1] = rd32(0x000eca88u + + 0x5f4u);
    }
L_000eca84:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000eca88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000eca8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000eca94u, cpu->r[1], 0, 0);
    }
L_000eca90:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000eca94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000eca98:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000eca9c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000ecaa0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecaa4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ecaa8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000ecaac:;
    {
        wr8(cpu->r[1] + + 0x35u, cpu->r[0]);
    }
L_000ecab0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecaf0;
        }
    }
L_000ecab4:;
    {
        cpu->r[1] = rd32(0x000ecabcu + + 0x5c4u);
    }
L_000ecab8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecabc:;
    {
        cpu->r[2] = rd32(0x000ecac4u + + 0x5c0u);
    }
L_000ecac0:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ecac4:;
    {
        cpu->r[3] = rd32(0x000ecaccu + + 0x5bcu);
    }
L_000ecac8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ecad0u, cpu->r[1], 0, 0);
    }
L_000ecacc:;
    {
        cpu->r[12] = rd32(0x000ecad4u + + 0x5b8u);
    }
L_000ecad0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ecad8u, cpu->r[2], 0, 0);
    }
L_000ecad4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ecadcu, cpu->r[3], 0, 0);
    }
L_000ecad8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ecadc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ecae4u, cpu->r[12], 0, 0);
    }
L_000ecae0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecae4:;
    {
        cpu->r[14] = 0x000ecae8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecae8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecaec:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecaf0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ecaf4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecaf8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ecafc:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
    }
L_000ecb00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecb40;
        }
    }
L_000ecb04:;
    {
        cpu->r[1] = rd32(0x000ecb0cu + + 0x584u);
    }
L_000ecb08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecb0c:;
    {
        cpu->r[2] = rd32(0x000ecb14u + + 0x580u);
    }
L_000ecb10:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ecb14:;
    {
        cpu->r[3] = rd32(0x000ecb1cu + + 0x57cu);
    }
L_000ecb18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ecb20u, cpu->r[1], 0, 0);
    }
L_000ecb1c:;
    {
        cpu->r[12] = rd32(0x000ecb24u + + 0x578u);
    }
L_000ecb20:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ecb28u, cpu->r[2], 0, 0);
    }
L_000ecb24:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ecb2cu, cpu->r[3], 0, 0);
    }
L_000ecb28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ecb2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ecb34u, cpu->r[12], 0, 0);
    }
L_000ecb30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecb34:;
    {
        cpu->r[14] = 0x000ecb38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecb38:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecb3c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecb40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ecb44:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ecb48:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ecb4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ecb50:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000ecb54:;
    {
        wr8(cpu->r[2] + + 0x40u, cpu->r[4]);
    }
L_000ecb58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ecd48;
        }
    }
L_000ecb5c:;
    {
        cpu->r[2] = rd32(0x000ecb64u + + 0x53cu);
    }
L_000ecb60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ecb64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ecb68:;
    {
        cpu->r[9] = rd32(0x000ecb70u + + 0x580u);
    }
L_000ecb6c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000ecb70:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_000ecb74:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[12] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_000ecb78:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ecb7c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000ecb80:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecb84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000ecb88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ecb8c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_000ecb90:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x4u);
    }
L_000ecb94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecbc0;
        }
    }
L_000ecb98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ecb9c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecba0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000ecba4:;
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
L_000ecba8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecbac:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ecbb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ecbb4:;
    {
        cpu->r[14] = 0x000ecbb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecbb8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecbbc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ecbc0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000ecbc4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecbc8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_000ecbcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ecbd0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000ecbd4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecbd8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecd38;
        }
    }
L_000ecbdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000ecbe0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000ecbe4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecbe8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecd34;
        }
    }
L_000ecbec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_000ecbf0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ecbf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000ecbf8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ecbfc:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecc00:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecd34;
        }
    }
L_000ecc04:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000ecc08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ecc0c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecc10:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecd34;
        }
    }
L_000ecc14:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecc18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecc5c;
        }
    }
L_000ecc1c:;
    {
        cpu->r[1] = rd32(0x000ecc24u + + 0x480u);
    }
L_000ecc20:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecc24:;
    {
        cpu->r[2] = rd32(0x000ecc2cu + + 0x47cu);
    }
L_000ecc28:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ecc2c:;
    {
        cpu->r[3] = rd32(0x000ecc34u + + 0x478u);
    }
L_000ecc30:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ecc38u, cpu->r[1], 0, 0);
    }
L_000ecc34:;
    {
        cpu->r[12] = rd32(0x000ecc3cu + + 0x474u);
    }
L_000ecc38:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ecc40u, cpu->r[2], 0, 0);
    }
L_000ecc3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ecc44u, cpu->r[3], 0, 0);
    }
L_000ecc40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ecc44:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ecc4cu, cpu->r[12], 0, 0);
    }
L_000ecc48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecc4c:;
    {
        cpu->r[14] = 0x000ecc50u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecc50:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecc54:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecc58:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_000ecc5c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecc60:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ecc64:;
    {
        wr8(cpu->r[2] + + 0x34u, cpu->r[3]);
    }
L_000ecc68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecca4;
        }
    }
L_000ecc6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ecc70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecc74:;
    {
        cpu->r[3] = rd32(0x000ecc7cu + + 0x438u);
    }
L_000ecc78:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ecc7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ecc84u, cpu->r[2], 0, 0);
    }
L_000ecc80:;
    {
        cpu->r[2] = rd32(0x000ecc88u + + 0x430u);
    }
L_000ecc84:;
    {
        cpu->r[12] = rd32(0x000ecc8cu + + 0x430u);
    }
L_000ecc88:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ecc90u, cpu->r[3], 0, 0);
    }
L_000ecc8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ecc94u, cpu->r[2], 0, 0);
    }
L_000ecc90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ecc94:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ecc9cu, cpu->r[12], 0, 0);
    }
L_000ecc98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecc9c:;
    {
        cpu->r[14] = 0x000ecca0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecca0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecca4:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_000ecca8:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000eccac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000eccb0:;
    {
        cpu->r[14] = rd32(cpu->r[11] + + 0x1cu);
    }
L_000eccb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000eccb8:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x20u);
    }
L_000eccbc:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x14u);
    }
L_000eccc0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000eccc4:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x18u);
    }
L_000eccc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ecccc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000eccd0:;
    {
        wr32(cpu->r[11] + + 0x18u, cpu->r[3]);
    }
L_000eccd4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000eccd8:;
    {
        wr32(cpu->r[11] + + 0x14u, cpu->r[2]);
    }
L_000eccdc:;
    {
        wr32(cpu->r[11] + + 0x1cu, cpu->r[12]);
    }
L_000ecce0:;
    {
        wr32(cpu->r[11] + + 0x20u, cpu->r[1]);
    }
L_000ecce4:;
    {
        cpu->r[14] = 0x000ecce8u; fn_0009b4d0(cpu);
    }
L_000ecce8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x28u);
    }
L_000eccec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000eccf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ecd2c;
        }
    }
L_000eccf4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x1cu);
    }
L_000eccf8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11] + + 0x20u);
    }
L_000eccfc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ecd00:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ecd08u + + 0x350u);
    }
L_000ecd04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000ecd08:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ecd0c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ecd10:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000ecd14:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000ecd18:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ecd1c:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_000ecd20:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ecd24:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ecd28:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ecd2c:;
    {
        wr32(cpu->r[11] + + 0x28u, cpu->r[0]);
    }
L_000ecd30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecd34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ecd38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ecd3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000ecd40:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_000ecd44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ecb7c;
        }
    }
L_000ecd48:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecd4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecd8c;
        }
    }
L_000ecd50:;
    {
        cpu->r[1] = rd32(0x000ecd58u + + 0x368u);
    }
L_000ecd54:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ecd58:;
    {
        cpu->r[2] = rd32(0x000ecd60u + + 0x364u);
    }
L_000ecd5c:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ecd60:;
    {
        cpu->r[3] = rd32(0x000ecd68u + + 0x360u);
    }
L_000ecd64:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ecd6cu, cpu->r[1], 0, 0);
    }
L_000ecd68:;
    {
        cpu->r[12] = rd32(0x000ecd70u + + 0x35cu);
    }
L_000ecd6c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ecd74u, cpu->r[2], 0, 0);
    }
L_000ecd70:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ecd78u, cpu->r[3], 0, 0);
    }
L_000ecd74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ecd78:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ecd80u, cpu->r[12], 0, 0);
    }
L_000ecd7c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ecd80:;
    {
        cpu->r[14] = 0x000ecd84u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ecd84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecd88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ecd8c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecd90:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ecd94:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x24u);
    }
L_000ecd98:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 1);
    }
L_000ecd9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed260;
        }
    }
L_000ecda0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ecda4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_000ecda8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ecdac:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_000ecdb0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_000ecdb4:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000ecdb8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000ecdbc:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[3];
    }
L_000ecdc0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ecdc4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ed160;
        }
    }
L_000ecdc8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecdcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ecdd4u + + 0x384u);
    }
L_000ecdd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ecdd4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_000ecdd8:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_000ecddc:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000ecde0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000ecde4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ecdecu + + 0x36cu);
    }
L_000ecde8:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_000ecdec:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_000ecdf0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000ecdf4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ecdfcu + + 0x35cu);
    }
L_000ecdf8:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_000ecdfc:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000ece00:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ece04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ece0cu + + 0x34cu);
    }
L_000ece08:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000ece0c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ece10:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000ece14:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000ece18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ece1c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000ece20:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ece24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ece28:;
    {
        cpu->r[14] = 0x000ece2cu; fn_000eab24(cpu);
    }
L_000ece2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ece30:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ece34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ece70;
        }
    }
L_000ece38:;
    {
        cpu->r[1] = rd32(0x000ece40u + + 0x290u);
    }
L_000ece3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ece40:;
    {
        cpu->r[2] = rd32(0x000ece48u + + 0x28cu);
    }
L_000ece44:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ece48:;
    {
        cpu->r[3] = rd32(0x000ece50u + + 0x288u);
    }
L_000ece4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ece54u, cpu->r[1], 0, 0);
    }
L_000ece50:;
    {
        cpu->r[12] = rd32(0x000ece58u + + 0x284u);
    }
L_000ece54:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ece5cu, cpu->r[2], 0, 0);
    }
L_000ece58:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ece60u, cpu->r[3], 0, 0);
    }
L_000ece5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ece60:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ece68u, cpu->r[12], 0, 0);
    }
L_000ece64:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ece68:;
    {
        cpu->r[14] = 0x000ece6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ece6c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ece70:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_000ece74:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ece78:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ece7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ece80:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,19));
    }
L_000ece84:;
    {
        vfp_sync_flags(cpu);
    }
L_000ece88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecf1c;
        }
    }
L_000ece8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000ece90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), *vfp_s(cpu,15));
    }
L_000ece94:;
    {
        vfp_sync_flags(cpu);
    }
L_000ece98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecf1c;
        }
    }
L_000ece9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ecea0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000ecea4:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000ecea8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000eceac:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000eceb0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000eceb4:;
    {
        vfp_sync_flags(cpu);
    }
L_000eceb8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecf1c;
        }
    }
L_000ecebc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000ecec0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ecec4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecec8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecf1c;
        }
    }
L_000ececc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_000eced0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), *vfp_s(cpu,14));
    }
L_000eced4:;
    {
        vfp_sync_flags(cpu);
    }
L_000eced8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecf0c;
        }
    }
L_000ecedc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000ecee0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), *vfp_s(cpu,14));
    }
L_000ecee4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecee8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ecf0c;
        }
    }
L_000eceec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_000ecef0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ecef4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecef8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecf0c;
        }
    }
L_000ecefc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_000ecf00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ecf04:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecf08:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000ecf1c;
        }
    }
L_000ecf0c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecf10:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ed430;
        }
    }
L_000ecf14:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ecf18:;
    {
        wr8(cpu->r[1] + + 0x35u, cpu->r[0]);
    }
L_000ecf1c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ecf20:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ecf24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eca9c;
        }
    }
L_000ecf28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ecf2c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ecf30:;
    {
        wr32(cpu->r[6] + + 0x60u, cpu->r[4]);
    }
L_000ecf34:;
    {
        wr8(cpu->r[6] + + 0x64u, cpu->r[4]);
    }
L_000ecf38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ed038;
        }
    }
L_000ecf3c:;
    {
        cpu->r[1] = rd32(0x000ecf44u + + 0x130u);
    }
L_000ecf40:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000ecf44:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecf48:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_000ecf4c:;
    {
        cpu->r[1] = rd32(0x000ecf54u + + 0x124u);
    }
L_000ecf50:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_000ecf54:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000ecf58:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ecf5c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_000ecf60:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_000ecf64:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000ecf68:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_000ecf6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ecf70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ecf74:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecf78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed044;
        }
    }
L_000ecf7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000ecf80:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ecf84:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecf88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed044;
        }
    }
L_000ecf8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ecf90:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000ecf94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_000ecf98:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecf9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed044;
        }
    }
L_000ecfa0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000ecfa4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000ecfa8:;
    {
        vfp_sync_flags(cpu);
    }
L_000ecfac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed044;
        }
    }
L_000ecfb0:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000ecfb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000ecfb8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x58u);
    }
L_000ecfbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ed4ac;
        }
    }
L_000ecfc0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_000ecfc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ecfc8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_000ecfcc:;
    {
        cpu->r[14] = 0x000ecfd0u; guest_call(cpu, cpu->r[7]);
    }
L_000ecfd0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ecfd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000ecfd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ed474;
        }
    }
L_000ecfdc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ecfe0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000ecfe4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000ecfe8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ecfec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000ecff0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000ed01c;
        case 1: goto L_000ed01c;
        case 2: goto L_000ed508;
        case 3: goto L_000ed528;
        case 4: goto L_000ed038;
        case 5: goto L_000ed548;
        case 6: goto L_000ed564;
        case 7: goto L_000ed4e8;
        case 8: goto L_000ed508;
        default: guest_unimplemented(cpu, 0x000ecff0u); return; }
        }
    }
L_000ecff4:;
    {
        goto L_000ed038;
    }
L_000ed01c:;
    {
        cpu->r[3] = rd32(0x000ed024u + + 0x130u);
    }
L_000ed020:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed024:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed028:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed02c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed030:;
    {
        cpu->r[14] = 0x000ed034u; fn_000959d0(cpu);
    }
L_000ed034:;
    {
        cpu->r[14] = 0x000ed038u; fn_0009562c(cpu);
    }
L_000ed038:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_000ed03c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000ed040:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ed044u)) return;
    }
L_000ed044:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ed048:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000ed04c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000ed050:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ecf68;
        }
    }
L_000ed054:;
    {
        goto L_000ed038;
    }
L_000ed160:;
    {
        cpu->r[4] = rd32(0x000ed168u + - 0x88u);
    }
L_000ed164:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed168:;
    {
        cpu->r[5] = rd32(0x000ed170u + - 0x8cu);
    }
L_000ed16c:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ed170:;
    {
        cpu->r[9] = rd32(0x000ed178u + - 0x90u);
    }
L_000ed174:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ed17cu, cpu->r[4], 0, 0);
    }
L_000ed178:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ed180u, cpu->r[5], 0, 0);
    }
L_000ed17c:;
    {
        cpu->r[11] = rd32(0x000ed184u + - 0x98u);
    }
L_000ed180:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ed188u, cpu->r[9], 0, 0);
    }
L_000ed184:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ed188:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ed18c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed190:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ed198u, cpu->r[11], 0, 0);
    }
L_000ed194:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ed198:;
    {
        cpu->r[14] = 0x000ed19cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed19c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed1a0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ed1a8u + - 0x50u);
    }
L_000ed1a4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed1a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ed1ac:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_000ed1b0:;
    {
        vfp_vadd(cpu, 17, 17, 16);
    }
L_000ed1b4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000ed1b8:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000ed1bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecde0;
        }
    }
L_000ed1c0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ed1c4:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ed1c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed1cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed1d0:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ed1d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ed1d8:;
    {
        cpu->r[14] = 0x000ed1dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed1dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed1e0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed1e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ed1e8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000ed1ec:;
    {
        vfp_vadd(cpu, 18, 18, 16);
    }
L_000ed1f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000ed1f4:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_000ed1f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ecdf0;
        }
    }
L_000ed1fc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ed200:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ed204:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed208:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed20c:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ed210:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ed214:;
    {
        cpu->r[14] = 0x000ed218u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed218:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed21c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed220:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ed224:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000ed228:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_000ed22c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000ed230:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000ed234:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ece00;
        }
    }
L_000ed238:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ed23c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed240:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ed244:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed248:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ed24c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ed250:;
    {
        cpu->r[14] = 0x000ed254u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed254:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed258:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000ed25c:;
    {
        goto L_000ece00;
    }
L_000ed260:;
    {
        cpu->r[9] = rd32(0x000ed268u + - 0x178u);
    }
L_000ed264:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ed268:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000ed26c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0]);
    }
L_000ed270:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_000ed274:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ed2b8;
        }
    }
L_000ed278:;
    {
        cpu->r[1] = rd32(0x000ed280u + - 0x18cu);
    }
L_000ed27c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed280:;
    {
        cpu->r[2] = rd32(0x000ed288u + - 0x190u);
    }
L_000ed284:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed288:;
    {
        cpu->r[3] = rd32(0x000ed290u + - 0x194u);
    }
L_000ed28c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed294u, cpu->r[1], 0, 0);
    }
L_000ed290:;
    {
        cpu->r[12] = rd32(0x000ed298u + - 0x198u);
    }
L_000ed294:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed29cu, cpu->r[2], 0, 0);
    }
L_000ed298:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed2a0u, cpu->r[3], 0, 0);
    }
L_000ed29c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed2a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed2a8u, cpu->r[12], 0, 0);
    }
L_000ed2a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed2a8:;
    {
        cpu->r[14] = 0x000ed2acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed2ac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed2b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed2b4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ed2b8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000ed2bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ed2c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000ed2c4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ed2c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed428;
        }
    }
L_000ed2cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000ed2d0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000ed2d4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ed2d8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed428;
        }
    }
L_000ed2dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000ed2e0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ed2e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000ed2e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ed2ec:;
    {
        vfp_sync_flags(cpu);
    }
L_000ed2f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed428;
        }
    }
L_000ed2f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000ed2f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ed2fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000ed300:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ed428;
        }
    }
L_000ed304:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ed308:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ed348;
        }
    }
L_000ed30c:;
    {
        cpu->r[1] = rd32(0x000ed314u + - 0x210u);
    }
L_000ed310:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed314:;
    {
        cpu->r[2] = rd32(0x000ed31cu + - 0x214u);
    }
L_000ed318:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed31c:;
    {
        cpu->r[3] = rd32(0x000ed324u + - 0x218u);
    }
L_000ed320:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed328u, cpu->r[1], 0, 0);
    }
L_000ed324:;
    {
        cpu->r[12] = rd32(0x000ed32cu + - 0x21cu);
    }
L_000ed328:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed330u, cpu->r[2], 0, 0);
    }
L_000ed32c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed334u, cpu->r[3], 0, 0);
    }
L_000ed330:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed334:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed33cu, cpu->r[12], 0, 0);
    }
L_000ed338:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed33c:;
    {
        cpu->r[14] = 0x000ed340u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed340:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed344:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed348:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ed34c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000ed350:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ed354:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[3]);
    }
L_000ed358:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ed394;
        }
    }
L_000ed35c:;
    {
        cpu->r[1] = rd32(0x000ed364u + - 0x250u);
    }
L_000ed360:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed364:;
    {
        cpu->r[2] = rd32(0x000ed36cu + - 0x254u);
    }
L_000ed368:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed36c:;
    {
        cpu->r[3] = rd32(0x000ed374u + - 0x258u);
    }
L_000ed370:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed378u, cpu->r[1], 0, 0);
    }
L_000ed374:;
    {
        cpu->r[12] = rd32(0x000ed37cu + - 0x25cu);
    }
L_000ed378:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed380u, cpu->r[2], 0, 0);
    }
L_000ed37c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed384u, cpu->r[3], 0, 0);
    }
L_000ed380:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed384:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed38cu, cpu->r[12], 0, 0);
    }
L_000ed388:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed38c:;
    {
        cpu->r[14] = 0x000ed390u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed390:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed394:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ed398:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000ed39c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ed3a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ed3a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_000ed3a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ed3ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ed3b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ed3b4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ed3b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000ed3bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000ed3c0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000ed3c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 0);
    }
L_000ed3c8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_000ed3cc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_000ed3d0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_000ed3d4:;
    {
        cpu->r[14] = 0x000ed3d8u; fn_0009b4d0(cpu);
    }
L_000ed3d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_000ed3dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ed3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed41c;
        }
    }
L_000ed3e4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_000ed3e8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000ed3ec:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ed3f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ed3f8u + - 0x29cu);
    }
L_000ed3f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000ed3f8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ed3fc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ed400:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000ed404:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000ed408:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ed40c:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_000ed410:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ed414:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ed418:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ed41c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000ed420:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed424:;
    {
        goto L_000ecda0;
    }
L_000ed428:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ed42c:;
    {
        goto L_000ecda0;
    }
L_000ed430:;
    {
        cpu->r[1] = rd32(0x000ed438u + - 0x314u);
    }
L_000ed434:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed438:;
    {
        cpu->r[2] = rd32(0x000ed440u + - 0x318u);
    }
L_000ed43c:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed440:;
    {
        cpu->r[3] = rd32(0x000ed448u + - 0x31cu);
    }
L_000ed444:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed44cu, cpu->r[1], 0, 0);
    }
L_000ed448:;
    {
        cpu->r[12] = rd32(0x000ed450u + - 0x320u);
    }
L_000ed44c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed454u, cpu->r[2], 0, 0);
    }
L_000ed450:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed458u, cpu->r[3], 0, 0);
    }
L_000ed454:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed458:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed460u, cpu->r[12], 0, 0);
    }
L_000ed45c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed460:;
    {
        cpu->r[14] = 0x000ed464u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed464:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed468:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed46c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000ed470:;
    {
        goto L_000ecf14;
    }
L_000ed474:;
    {
        cpu->r[1] = rd32(0x000ed47cu + - 0x348u);
    }
L_000ed478:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed47c:;
    {
        cpu->r[2] = rd32(0x000ed484u + - 0x34cu);
    }
L_000ed480:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed484:;
    {
        cpu->r[3] = rd32(0x000ed48cu + - 0x350u);
    }
L_000ed488:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed490u, cpu->r[1], 0, 0);
    }
L_000ed48c:;
    {
        cpu->r[12] = rd32(0x000ed494u + - 0x354u);
    }
L_000ed490:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed498u, cpu->r[2], 0, 0);
    }
L_000ed494:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed49cu, cpu->r[3], 0, 0);
    }
L_000ed498:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed49c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed4a4u, cpu->r[12], 0, 0);
    }
L_000ed4a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed4a4:;
    {
        cpu->r[14] = 0x000ed4a8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed4a8:;
    {
        goto L_000ecfdc;
    }
L_000ed4ac:;
    {
        cpu->r[1] = rd32(0x000ed4b4u + - 0x370u);
    }
L_000ed4b0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed4b4:;
    {
        cpu->r[2] = rd32(0x000ed4bcu + - 0x374u);
    }
L_000ed4b8:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed4bc:;
    {
        cpu->r[3] = rd32(0x000ed4c4u + - 0x378u);
    }
L_000ed4c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed4c8u, cpu->r[1], 0, 0);
    }
L_000ed4c4:;
    {
        cpu->r[12] = rd32(0x000ed4ccu + - 0x37cu);
    }
L_000ed4c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed4d0u, cpu->r[2], 0, 0);
    }
L_000ed4cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed4d4u, cpu->r[3], 0, 0);
    }
L_000ed4d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed4d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed4dcu, cpu->r[12], 0, 0);
    }
L_000ed4d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed4dc:;
    {
        cpu->r[14] = 0x000ed4e0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed4e0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed4e4:;
    {
        goto L_000ecfc0;
    }
L_000ed4e8:;
    {
        cpu->r[3] = rd32(0x000ed4f0u + - 0x39cu);
    }
L_000ed4ec:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed4f0:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed4f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed4fc:;
    {
        cpu->r[14] = 0x000ed500u; fn_00095a0c(cpu);
    }
L_000ed500:;
    {
        cpu->r[14] = 0x000ed504u; fn_0009562c(cpu);
    }
L_000ed504:;
    {
        goto L_000ed038;
    }
L_000ed508:;
    {
        cpu->r[3] = rd32(0x000ed510u + - 0x3bcu);
    }
L_000ed50c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed510:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed514:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed51c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ed520:;
    {
        cpu->r[14] = 0x000ed524u; fn_0009578c(cpu);
    }
L_000ed524:;
    {
        goto L_000ed038;
    }
L_000ed528:;
    {
        cpu->r[3] = rd32(0x000ed530u + - 0x3dcu);
    }
L_000ed52c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed530:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed534:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed53c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ed540:;
    {
        cpu->r[14] = 0x000ed544u; fn_000956d0(cpu);
    }
L_000ed544:;
    {
        goto L_000ed038;
    }
L_000ed548:;
    {
        cpu->r[3] = rd32(0x000ed550u + - 0x3fcu);
    }
L_000ed54c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed550:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed554:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed55c:;
    {
        cpu->r[14] = 0x000ed560u; fn_0009589c(cpu);
    }
L_000ed560:;
    {
        goto L_000ed038;
    }
L_000ed564:;
    {
        cpu->r[3] = rd32(0x000ed56cu + - 0x418u);
    }
L_000ed568:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000ed56c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ed570:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed038;
        }
    }
L_000ed578:;
    {
        cpu->r[14] = 0x000ed57cu; fn_00095848(cpu);
    }
L_000ed57c:;
    {
        goto L_000ed038;
    }
}

/* _ZN6GS_Run16UpdateIngameKeysEv @ 000ed580 (arm) */
void fn_000ed580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ed580:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000ed584:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000ed588:;
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
L_000ed58c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ed590:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ed594:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ed598:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000ed59c:;
    {
        cpu->r[7] = rd32(0x000ed5a4u + + 0x4c4u);
    }
L_000ed5a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000ed5a4:;
    {
        cpu->r[14] = 0x000ed5a8u; fn_000ec624(cpu);
    }
L_000ed5a8:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000ed5ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ed5b0:;
    {
        cpu->r[14] = 0x000ed5b4u; fn_000ec624(cpu);
    }
L_000ed5b4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000ed5b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ed5bc:;
    {
        cpu->r[7] = add_flags(cpu, 0x000ed5c4u, cpu->r[7], 0, 0);
    }
L_000ed5c0:;
    {
        cpu->r[14] = 0x000ed5c4u; fn_000ec624(cpu);
    }
L_000ed5c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ed5c8:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000ed5cc:;
    {
        cpu->r[14] = 0x000ed5d0u; fn_000ec624(cpu);
    }
L_000ed5d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed5d4:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_000ed5d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed5dc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ed5e0:;
    {
        { uint32_t v = cpu->r[4] & 0x00010000u; set_nz(cpu, v); }
    }
L_000ed5e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed63c;
        }
    }
L_000ed5e8:;
    {
        cpu->r[5] = rd32(0x000ed5f0u + + 0x47cu);
    }
L_000ed5ec:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ed5f0:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ed5f4:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_000ed5f8:;
    {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[2]);
    }
L_000ed5fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed880;
        }
    }
L_000ed604:;
    {
        cpu->r[0] = 0x00003490u;
    }
L_000ed608:;
    {
        cpu->r[14] = 0x000ed60cu; fn_0018ba6c(cpu);
    }
L_000ed60c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ed610:;
    {
        cpu->r[14] = 0x000ed614u; fn_001168a8(cpu);
    }
L_000ed614:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ed618:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ed61c:;
    {
        cpu->r[14] = 0x000ed620u; fn_000f361c(cpu);
    }
L_000ed620:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ed624:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000ed628:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ed62c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed630:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ed634:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed638:;
    {
        cpu->r[14] = 0x000ed63cu; fn_000c0d80(cpu);
    }
L_000ed63c:;
    {
        { uint32_t v = cpu->r[4] & 0x00020000u; set_nz(cpu, v); }
    }
L_000ed640:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed64c;
        }
    }
L_000ed644:;
    {
        { uint32_t v = cpu->r[4] & 0x000c0000u; set_nz(cpu, v); }
    }
L_000ed648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed92c;
        }
    }
L_000ed64c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ed654:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ed6f4;
        }
    }
L_000ed658:;
    {
        cpu->r[2] = rd32(0x000ed660u + + 0x40cu);
    }
L_000ed65c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ed660:;
    {
        cpu->r[8] = rd32(0x000ed668u + + 0x408u);
    }
L_000ed664:;
    {
        cpu->r[10] = rd32(0x000ed66cu + + 0x408u);
    }
L_000ed668:;
    {
        cpu->r[9] = rd32(0x000ed670u + + 0x408u);
    }
L_000ed66c:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ed674u, cpu->r[8], 0, 0);
    }
L_000ed670:;
    {
        cpu->r[11] = rd32(0x000ed678u + + 0x404u);
    }
L_000ed674:;
    {
        cpu->r[10] = add_flags(cpu, 0x000ed67cu, cpu->r[10], 0, 0);
    }
L_000ed678:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed67c:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ed684u, cpu->r[9], 0, 0);
    }
L_000ed680:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000ed684:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ed68cu, cpu->r[11], 0, 0);
    }
L_000ed688:;
    {
        goto L_000ed698;
    }
L_000ed68c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ed690:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000ed694:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ed6f4;
        }
    }
L_000ed698:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000ed69c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000ed6a0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x34u);
    }
L_000ed6a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed68c;
        }
    }
L_000ed6ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000ed6b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ed6d8;
        }
    }
L_000ed6b4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ed6b8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ed6bc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ed6c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed6c4:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ed6c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ed6cc:;
    {
        cpu->r[14] = 0x000ed6d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed6d0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed6d4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_000ed6d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000ed6dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000ed6e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed6fc;
        }
    }
L_000ed6e4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed6e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ed6ec:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000ed6f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ed698;
        }
    }
L_000ed6f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ed6f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ed6fcu)) return;
    }
L_000ed6fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000ed700:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000ed704:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_000ed708:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ed70c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed710:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed714:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed6e4;
        }
    }
L_000ed718:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ed71c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed720:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed8b8;
        }
    }
L_000ed728:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000ed72c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed730:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ed734:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed738:;
    {
        cpu->r[14] = 0x000ed73cu; fn_000c0d80(cpu);
    }
L_000ed73c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000ed740:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000ed744:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000ed748:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ed74c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000ed750:;
    {
        cpu->r[14] = 0x000ed754u; fn_0018cbb0(cpu);
    }
L_000ed754:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ed758:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xcu);
    }
L_000ed75c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000ed760:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed764:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_000ed768:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x484u);
        }
    }
L_000ed76c:;
    {
        cpu->r[14] = 0x000ed770u; fn_0018cb94(cpu);
    }
L_000ed770:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed774:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ed778:;
    {
        cpu->r[1] = 0x00000097u;
    }
L_000ed77c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000ed780:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000ed784:;
    {
        cpu->r[14] = 0x000ed788u; fn_000fd224(cpu);
    }
L_000ed788:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ed78c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eda34;
        }
    }
L_000ed790:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_000ed794:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ed798:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ed7d0;
        }
    }
L_000ed79c:;
    {
        cpu->r[1] = rd32(0x000ed7a4u + + 0x2dcu);
    }
L_000ed7a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ed7a4:;
    {
        cpu->r[2] = rd32(0x000ed7acu + + 0x2d8u);
    }
L_000ed7a8:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ed7ac:;
    {
        cpu->r[3] = rd32(0x000ed7b4u + + 0x2d4u);
    }
L_000ed7b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ed7b8u, cpu->r[1], 0, 0);
    }
L_000ed7b4:;
    {
        cpu->r[12] = rd32(0x000ed7bcu + + 0x2d0u);
    }
L_000ed7b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ed7c0u, cpu->r[2], 0, 0);
    }
L_000ed7bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ed7c4u, cpu->r[3], 0, 0);
    }
L_000ed7c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ed7c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ed7ccu, cpu->r[12], 0, 0);
    }
L_000ed7c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ed7cc:;
    {
        cpu->r[14] = 0x000ed7d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ed7d0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_000ed7d4:;
    {
        cpu->r[0] = 0x00001bc0u;
    }
L_000ed7d8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed7dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ed7e0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000ed7e4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_000ed7e8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ed7ec:;
    {
        wr8(cpu->r[2] + + 0x34u, cpu->r[3]);
    }
L_000ed7f0:;
    {
        cpu->r[14] = 0x000ed7f4u; fn_0018b5d8(cpu);
    }
L_000ed7f4:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000ed7f8:;
    {
        cpu->r[14] = 0x000ed7fcu; fn_0018b950(cpu);
    }
L_000ed7fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed800:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000ed804:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed808:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed80c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed828;
        }
    }
L_000ed810:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000ed814:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed818:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed81c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x98u);
        }
    }
L_000ed820:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000ed824:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x98u, cpu->r[2]);
        }
    }
L_000ed828:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000ed82c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000ed830:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000ed834:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ed838:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000ed83c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed85c;
        }
    }
L_000ed844:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000ed848:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ed84c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed850:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00006737u;
        }
    }
L_000ed854:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000ed858:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000ed85c:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000ed860:;
    {
        cpu->r[14] = 0x000ed864u; fn_0018ba6c(cpu);
    }
L_000ed864:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ed868:;
    {
        cpu->r[14] = 0x000ed86cu; fn_0010c950(cpu);
    }
L_000ed86c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ed870:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ed874:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ed878:;
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
L_000ed87c:;
    {
        return fn_000f361c(cpu);
    }
L_000ed880:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000ed884:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000ed888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed88c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed604;
        }
    }
L_000ed890:;
    {
        cpu->r[0] = 0x00006737u;
    }
L_000ed894:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ed898:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[1]);
    }
L_000ed89c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x317u);
    }
L_000ed8a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed8a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed9d0;
        }
    }
L_000ed8a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ed8ac:;
    {
        cpu->r[14] = 0x000ed8b0u; fn_000ba460(cpu);
    }
L_000ed8b0:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_000ed8b4:;
    {
        goto L_000ed604;
    }
L_000ed8b8:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000ed8bc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed8c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed8c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed9e0;
        }
    }
L_000ed8c8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed8cc:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000ed8d0:;
    {
        cpu->r[8] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000ed8d4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000ed8d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ed9e0;
        }
    }
L_000ed8dc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x98u);
    }
L_000ed8e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed8e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ed9e0;
        }
    }
L_000ed8e8:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_000ed8ec:;
    {
        cpu->r[14] = 0x000ed8f0u; fn_0018ba6c(cpu);
    }
L_000ed8f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ed8f4:;
    {
        cpu->r[14] = 0x000ed8f8u; fn_000a7570(cpu);
    }
L_000ed8f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ed8fc:;
    {
        cpu->r[0] = 0x00000427u;
    }
L_000ed900:;
    {
        cpu->r[14] = 0x000ed904u; fn_000aeb58(cpu);
    }
L_000ed904:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ed908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000094u, 0, 0);
    }
L_000ed90c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000ed910:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ed914:;
    {
        cpu->r[14] = 0x000ed918u; fn_000a7bb0(cpu);
    }
L_000ed918:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed91c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed920:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ed924:;
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
L_000ed928:;
    {
        return fn_000f361c(cpu);
    }
L_000ed92c:;
    {
        { uint32_t v = cpu->r[4] & 0x00100000u; set_nz(cpu, v); }
    }
L_000ed930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed64c;
        }
    }
L_000ed934:;
    {
        cpu->r[5] = rd32(0x000ed93cu + + 0x130u);
    }
L_000ed938:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ed93c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ed940:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_000ed944:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[3]);
    }
L_000ed948:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed94c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed988;
        }
    }
L_000ed950:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000ed954:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000ed958:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed95c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed988;
        }
    }
L_000ed960:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_000ed964:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000ed968:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ed96c:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000ed970:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_000ed974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eda58;
        }
    }
L_000ed97c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ed980:;
    {
        cpu->r[14] = 0x000ed984u; fn_000ba460(cpu);
    }
L_000ed984:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_000ed988:;
    {
        cpu->r[0] = 0x00003490u;
    }
L_000ed98c:;
    {
        cpu->r[14] = 0x000ed990u; fn_0018ba6c(cpu);
    }
L_000ed990:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ed994:;
    {
        cpu->r[14] = 0x000ed998u; fn_001168a8(cpu);
    }
L_000ed998:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ed99c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ed9a0:;
    {
        cpu->r[14] = 0x000ed9a4u; fn_000f361c(cpu);
    }
L_000ed9a4:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000ed9a8:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000ed9ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ed9b0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ed9b4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ed9b8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed9bc:;
    {
        cpu->r[14] = 0x000ed9c0u; fn_000c0d80(cpu);
    }
L_000ed9c0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000ed9c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ed9c8:;
    {
        cpu->r[14] = 0x000ed9ccu; fn_00099b14(cpu);
    }
L_000ed9cc:;
    {
        goto L_000ed64c;
    }
L_000ed9d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ed9d4:;
    {
        cpu->r[14] = 0x000ed9d8u; fn_000bd190(cpu);
    }
L_000ed9d8:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_000ed9dc:;
    {
        goto L_000ed604;
    }
L_000ed9e0:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000ed9e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ed9e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ed9ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ed728;
        }
    }
L_000ed9f0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x317u);
    }
L_000ed9f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ed9f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eda18;
        }
    }
L_000ed9fc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eda00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000eda04:;
    {
        cpu->r[14] = 0x000eda08u; fn_000ba460(cpu);
    }
L_000eda08:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000eda0c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000eda10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000eda14:;
    {
        goto L_000ed728;
    }
L_000eda18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000eda1c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eda20:;
    {
        cpu->r[14] = 0x000eda24u; fn_000bd190(cpu);
    }
L_000eda24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000eda28:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000eda2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000eda30:;
    {
        goto L_000ed728;
    }
L_000eda34:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_000eda38:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eda3c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000eda40:;
    {
        cpu->r[1] = 0x00000097u;
    }
L_000eda44:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000eda48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eda4c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eda50:;
    {
        cpu->r[14] = 0x000eda54u; fn_000fd248(cpu);
    }
L_000eda54:;
    {
        goto L_000ed790;
    }
L_000eda58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000eda5c:;
    {
        cpu->r[14] = 0x000eda60u; fn_000bd190(cpu);
    }
L_000eda60:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_000eda64:;
    {
        goto L_000ed988;
    }
}

/* _ZN6GS_Run16UpdateSlowMotionEv @ 000eda90 (arm) */
void fn_000eda90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eda90:;
    {
        cpu->r[3] = rd32(0x000eda98u + + 0x40u);
    }
L_000eda94:;
    {
        cpu->r[2] = rd32(0x000eda9cu + + 0x40u);
    }
L_000eda98:;
    {
        cpu->r[3] = add_flags(cpu, 0x000edaa0u, cpu->r[3], 0, 0);
    }
L_000eda9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000edaa0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000edaa4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000edaa8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000edaac:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000edab0:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000edab4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000edab8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000edabcu)) return;
        }
    }
L_000edabc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000edac0:;
    {
        cpu->r[14] = 0x000edac4u; fn_000d2d4c(cpu);
    }
L_000edac4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000edac8:;
    {
        cpu->r[14] = 0x000edaccu; fn_000c4c34(cpu);
    }
L_000edacc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000edad0:;
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
L_000edad4:;
    {
        return fn_000ed580(cpu);
    }
}

/* _ZN6GS_Run6RenderEv @ 000edae0 (arm) */
void fn_000edae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000edae0:;
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
L_000edae4:;
    {
        cpu->r[4] = rd32(0x000edaecu + + 0x9dcu);
    }
L_000edae8:;
    {
        cpu->r[3] = rd32(0x000edaf0u + + 0x9dcu);
    }
L_000edaec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000edaf0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000edaf8u, cpu->r[4], 0, 0);
    }
L_000edaf4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_000edaf8:;
    {
        cpu->r[7] = rd32(0x000edb00u + + 0x9d0u);
    }
L_000edafc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000edb00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edb04:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000edb08:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000edb0c:;
    {
        cpu->r[3] = rd32(0x000edb14u + + 0x9c0u);
    }
L_000edb10:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000edb14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000edb18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000edb1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edb20:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000edb24:;
    {
        cpu->r[14] = 0x000edb28u; fn_000dbe60(cpu);
    }
L_000edb28:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000edb2c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000edb30:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000edb34:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000edb38:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000edb3c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000edb40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edc4c;
        }
    }
L_000edb44:;
    {
        cpu->r[6] = rd32(0x000edb4cu + + 0x98cu);
    }
L_000edb48:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000edb4c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000edb50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000edb54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000edb58:;
    {
        cpu->r[14] = 0x000edb5cu; fn_0018aa44(cpu);
    }
L_000edb5c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000edb60:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000edb64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000edb68:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000edb6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edc90;
        }
    }
L_000edb70:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000edb74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edb78:;
    {
        cpu->r[14] = 0x000edb7cu; fn_00096a08(cpu);
    }
L_000edb7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000edb80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000edb84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000edb88:;
    {
        cpu->r[14] = 0x000edb8cu; fn_0018aa44(cpu);
    }
L_000edb8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edb90:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000edb94:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000edb98:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000edb9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000edba0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000edba4:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000edba8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000edbac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000edbb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00003e80u;
        }
    }
L_000edbb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000edbb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000edbbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = rd8(cpu->r[3] + cpu->r[2]);
        }
    }
L_000edbc0:;
    {
        cpu->r[2] = 0x00001ca0u;
    }
L_000edbc4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000edbc8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] ^ 0x00000001u; cpu->r[11] = v;
        }
    }
L_000edbcc:;
    {
        cpu->r[10] = rd8(cpu->r[8] + cpu->r[2]);
    }
L_000edbd0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000edbd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edccc;
        }
    }
L_000edbd8:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000edbdc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000edbe0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000edbe4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x15cu);
    }
L_000edbe8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000edbec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edc20;
        }
    }
L_000edbf0:;
    {
        cpu->r[14] = 0x000edbf4u; fn_0009b4d0(cpu);
    }
L_000edbf4:;
    {
        cpu->r[3] = 0x0000b3c5u;
    }
L_000edbf8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x91a2u << 16);
    }
L_000edbfc:;
    {
        cpu->r[2] = 0x00000384u;
    }
L_000edc00:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[0]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000edc04:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 9u, &shc); cpu->r[3] = v;
    }
L_000edc08:;
    {
        uint32_t v = cpu->r[0] - cpu->r[2] * cpu->r[3]; cpu->r[0] = v;
    }
L_000edc0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000258u, 1, 1);
    }
L_000edc10:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000edeec;
        }
    }
L_000edc14:;
    {
        cpu->r[14] = 0x000edc18u; fn_00095a9c(cpu);
    }
L_000edc18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000edc1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000edc20u)) return;
    }
L_000edc20:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000edc24:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000edc28:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000edc2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000edc30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edc14;
        }
    }
L_000edc34:;
    {
        cpu->r[2] = 0x00004c00u;
    }
L_000edc38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000edc3c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000edc40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000edc44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edc14;
        }
    }
L_000edc48:;
    {
        goto L_000edbf0;
    }
L_000edc4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000edc50:;
    {
        cpu->r[14] = 0x000edc54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000edc54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000edc58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edb44;
        }
    }
L_000edc5c:;
    {
        cpu->r[6] = rd32(0x000edc64u + + 0x874u);
    }
L_000edc60:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000edc64:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000edc68:;
    {
        cpu->r[14] = 0x000edc6cu; fn_0018aa20(cpu);
    }
L_000edc6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000edc70:;
    {
        cpu->r[14] = 0x000edc74u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000edc74:;
    {
        cpu->r[3] = rd32(0x000edc7cu + + 0x860u);
    }
L_000edc78:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000edc7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edc80:;
    {
        cpu->r[3] = rd32(0x000edc88u + + 0x858u);
    }
L_000edc84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edc88:;
    {
        cpu->r[14] = 0x000edc8cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000edc8c:;
    {
        goto L_000edb48;
    }
L_000edc90:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000edc94:;
    {
        cpu->r[14] = 0x000edc98u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000edc98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000edc9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edb70;
        }
    }
L_000edca0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000edca4:;
    {
        cpu->r[14] = 0x000edca8u; fn_0018aa20(cpu);
    }
L_000edca8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000edcac:;
    {
        cpu->r[14] = 0x000edcb0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000edcb0:;
    {
        cpu->r[3] = rd32(0x000edcb8u + + 0x824u);
    }
L_000edcb4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000edcb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edcbc:;
    {
        cpu->r[3] = rd32(0x000edcc4u + + 0x81cu);
    }
L_000edcc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edcc4:;
    {
        cpu->r[14] = 0x000edcc8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000edcc8:;
    {
        goto L_000edb70;
    }
L_000edccc:;
    {
        cpu->r[14] = 0x000edcd0u; fn_00096b88(cpu);
    }
L_000edcd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000edcd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edf58;
        }
    }
L_000edcd8:;
    {
        cpu->r[3] = rd32(0x000edce0u + + 0x804u);
    }
L_000edcdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000edce0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000edce4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000edce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edd14;
        }
    }
L_000edcec:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000edcf0:;
    {
        cpu->r[14] = 0x000edcf4u; imp_glDisable(cpu); /* glDisable */
    }
L_000edcf4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edcf8:;
    {
        cpu->r[14] = 0x000edcfcu; fn_0009f244(cpu);
    }
L_000edcfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000edd00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eded4;
        }
    }
L_000edd04:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edd08:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000edd0c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000edd10:;
    {
        goto L_000edbd8;
    }
L_000edd14:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000edd18:;
    {
        cpu->r[14] = 0x000edd1cu; fn_00093f34(cpu);
    }
L_000edd1c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000edd20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000edd24:;
    {
        vfp_sync_flags(cpu);
    }
L_000edd28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edcec;
        }
    }
L_000edd2c:;
    {
        cpu->r[0] = rd32(0x000edd34u + + 0x7b4u);
    }
L_000edd30:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_000edd34:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000edd38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000edd3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000edd40:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000edd44:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000edd48:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_000edd4c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000edd50:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xf0u);
    }
L_000edd54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000edd58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edcec;
        }
    }
L_000edd5c:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000edd60:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000edd64:;
    {
        cpu->r[14] = 0x000edd68u; imp_glEnable(cpu); /* glEnable */
    }
L_000edd68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000edd6c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000edd70:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_000edd74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000edd78:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_000edd7c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000edd80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000edd84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edcec;
        }
    }
L_000edd88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000edd8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000edd90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ee07c;
        }
    }
L_000edd94:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000edd98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000edd9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000edda0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_000edda4:;
    {
        cpu->r[10] = 0x00000018u;
    }
L_000edda8:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_000eddac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000eddb0:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_000eddb4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000eddb8:;
    {
        goto L_000ede30;
    }
L_000eddbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000eddc0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eddc4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000eddc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000eddcc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_000eddd0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000eddd4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eddd8:;
    {
        cpu->r[12] = (cpu->r[1] >> 9) & 0x7fu;
    }
L_000edddc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000edde0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000edde4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000edde8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000eddec:;
    {
        cpu->r[14] = 0x000eddf0u; fn_000ad8a0(cpu);
    }
L_000eddf0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000eddf4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eddf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000eddfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000ede00:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ede04:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_000ede08:;
    {
        cpu->r[12] = (cpu->r[1] >> 9) & 0x7fu;
    }
L_000ede0c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ede10:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ede14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ede18:;
    {
        cpu->r[14] = 0x000ede1cu; fn_000a8d10(cpu);
    }
L_000ede1c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000ede20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ede24:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_000ede28:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000ede2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ee074;
        }
    }
L_000ede30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ede34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ede38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000ede3c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ede40:;
    {
        sub_flags(cpu, cpu->r[2], 0x01000000u, 1, 1);
    }
L_000ede44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ede20;
        }
    }
L_000ede48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000ede4c:;
    {
        cpu->r[14] = 0x000ede50u; fn_000ec44c(cpu);
    }
L_000ede50:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000ede54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ede58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ede5c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ede60:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x34u);
    }
L_000ede64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ede68:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ede6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000ede70:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ede74:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ede78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eddbc;
        }
    }
L_000ede7c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ede80:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ede84:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ede88:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ede8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000ede90:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_000ede94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ede98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ede9c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000edea0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000edea4:;
    {
        cpu->r[14] = 0x000edea8u; fn_000ad8a0(cpu);
    }
L_000edea8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000edeac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000edeb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000edeb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000edeb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000edebc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_000edec0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000edec4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000edec8:;
    {
        cpu->r[14] = 0x000edeccu; fn_000a8d10(cpu);
    }
L_000edecc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000eded0:;
    {
        goto L_000ede20;
    }
L_000eded4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000eded8:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000ededc:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_000edee0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000edee4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000edee8:;
    {
        goto L_000edbd8;
    }
L_000edeec:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000edef0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edef4:;
    {
        cpu->r[14] = 0x000edef8u; fn_0009ecc0(cpu);
    }
L_000edef8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edefc:;
    {
        cpu->r[2] = rd32(0x000edf04u + + 0x5e8u);
    }
L_000edf00:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000edf04:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000edf08:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000edf0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000edf10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000edf14:;
    {
        cpu->r[1] = rd32(0x000edf1cu + + 0x5d4u);
    }
L_000edf18:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000edf1c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000edf20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000edf24:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000edf28:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000edf2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000edf30:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000edf34:;
    {
        cpu->r[1] = 0x0000060fu;
    }
L_000edf38:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000edf3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000014u;
        }
    }
L_000edf40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_000edf44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000edf48:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000edf4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000edf50:;
    {
        cpu->r[14] = 0x000edf54u; fn_000ad200(cpu);
    }
L_000edf54:;
    {
        goto L_000edc14;
    }
L_000edf58:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000edf5c:;
    {
        cpu->r[14] = 0x000edf60u; fn_00096b88(cpu);
    }
L_000edf60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000edf64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000edd04;
        }
    }
L_000edf68:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000edf6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000edf70:;
    {
        cpu->r[14] = 0x000edf74u; fn_000ec44c(cpu);
    }
L_000edf74:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000edf78:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8cu);
    }
L_000edf7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000edf80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000edf84:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000edf88:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x34u);
    }
L_000edf8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000edf90:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000edf94:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
        }
    }
L_000edf98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (cpu->r[1] >> 9) & 0x7fu;
        }
    }
L_000edf9c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000edfa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000edfa4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
        }
    }
L_000edfa8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000edfac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13], cpu->r[12]);
        }
    }
L_000edfb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
        }
    }
L_000edfb4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000edfb8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000edfbc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000edfc0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13], cpu->r[10]);
        }
    }
L_000edfc4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000edfc8:;
    {
        cpu->r[14] = 0x000edfccu; fn_000ad8a0(cpu);
    }
L_000edfcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000edfd0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000edfd4:;
    {
        cpu->r[14] = 0x000edfd8u; fn_000ec44c(cpu);
    }
L_000edfd8:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x34u);
    }
L_000edfdc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000edfe0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000edfe4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000edfe8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000edfec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000edff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee048;
        }
    }
L_000edff4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000edff8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000edffc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee000:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee004:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ee008:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xd4u);
    }
L_000ee00c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee010:;
    {
        cpu->r[14] = (cpu->r[1] >> 9) & 0x7fu;
    }
L_000ee014:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee018:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee01c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_000ee024:;
    {
        cpu->r[14] = 0x000ee028u; fn_000ad8a0(cpu);
    }
L_000ee028:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ee02c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_000ee030:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[2] = v;
    }
L_000ee034:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000ee038:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ee220;
        }
    }
L_000ee03c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ee040:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ee044:;
    {
        goto L_000edbd8;
    }
L_000ee048:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee04c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ee050:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee054:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee058:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xd4u);
    }
L_000ee05c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee060:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee064:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee068:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee06c:;
    {
        cpu->r[14] = 0x000ee070u; fn_000ad8a0(cpu);
    }
L_000ee070:;
    {
        goto L_000ee028;
    }
L_000ee074:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000ee078:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee07c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000ee080:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000edcec;
        }
    }
L_000ee084:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee088:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee08c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000ee090:;
    {
        cpu->r[14] = 0x000ee094u; fn_000ec44c(cpu);
    }
L_000ee094:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee098:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x5cu);
    }
L_000ee09c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ee0a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000ee0a4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ee0a8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee0ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee0b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_000ee0b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ee0b8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13], cpu->r[11]);
        }
    }
L_000ee0bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (cpu->r[1] >> 9) & 0x7fu;
        }
    }
L_000ee0c0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee0c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee0c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13], cpu->r[11]);
        }
    }
L_000ee0cc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee0d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
        }
    }
L_000ee0d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee0d8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee0dc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ee0e0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee0e4:;
    {
        cpu->r[14] = 0x000ee0e8u; fn_000ad8a0(cpu);
    }
L_000ee0e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee0ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee0f0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xd8u);
    }
L_000ee0f4:;
    {
        cpu->r[14] = 0x000ee0f8u; fn_000ec44c(cpu);
    }
L_000ee0f8:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee0fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ee100:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000ee104:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ee108:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ee10c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee284;
        }
    }
L_000ee114:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee118:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ee11c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ee120:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee124:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee128:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x5cu);
    }
L_000ee12c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000ee130:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000ee134:;
    {
        cpu->r[14] = (cpu->r[12] >> 9) & 0x7fu;
    }
L_000ee138:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee13c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_000ee144:;
    {
        cpu->r[14] = 0x000ee148u; fn_000ad8a0(cpu);
    }
L_000ee148:;
    {
        cpu->r[14] = 0x000ee14cu; fn_000979a0(cpu);
    }
L_000ee14c:;
    {
        cpu->r[10] = rd8(cpu->r[0] + + 0xcu);
    }
L_000ee150:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ee154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee2bc;
        }
    }
L_000ee158:;
    {
        cpu->r[14] = 0x000ee15cu; fn_000979a0(cpu);
    }
L_000ee15c:;
    {
        cpu->r[14] = 0x000ee160u; fn_00093fd8(cpu);
    }
L_000ee160:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000ee164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee324;
        }
    }
L_000ee168:;
    {
        cpu->r[14] = 0x000ee16cu; fn_000979a0(cpu);
    }
L_000ee16c:;
    {
        cpu->r[14] = 0x000ee170u; fn_00093fd8(cpu);
    }
L_000ee170:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ee174:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ee2b0;
        }
    }
L_000ee178:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ee17c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ee180:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ee184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee480;
        }
    }
L_000ee188:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ee18c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ee190:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000ee194:;
    {
        cpu->r[14] = 0x000ee198u; fn_0018aa44(cpu);
    }
L_000ee198:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ee19c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ee1a0:;
    {
        cpu->r[14] = 0x000ee1a4u; fn_000960f4(cpu);
    }
L_000ee1a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ee1a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000ee1ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee1b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_000ee1b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[1];
        }
    }
L_000ee1b8:;
    {
        cpu->r[14] = 0x000ee1bcu; fn_000ec44c(cpu);
    }
L_000ee1bc:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ee1c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ee1c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000ee1c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ee1cc:;
    {
        cpu->r[3] = rd32(0x000ee1d4u + + 0x31cu);
    }
L_000ee1d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ee1d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ee1d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000ee1dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000ee1e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000ee1e4:;
    {
        vfp_vadd(cpu, 13, 13, 14);
    }
L_000ee1e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ee1f0u + + 0x2d0u);
    }
L_000ee1ec:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee1f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ee1f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ee1f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000027u, 0, 0);
        }
    }
L_000ee1fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000026u, 0, 0);
        }
    }
L_000ee200:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_000ee204:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ee20cu + + 0x2b8u);
    }
L_000ee208:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000ee20c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ee210:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ee214:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ee218:;
    {
        cpu->r[14] = 0x000ee21cu; fn_000abcec(cpu);
    }
L_000ee21c:;
    {
        goto L_000edcec;
    }
L_000ee220:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ee224:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee228:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000ee22c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ee230:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_000ee234:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000ee238:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000ee23c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000ee240:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000ee244:;
    {
        cpu->r[14] = 0x000ee248u; fn_000a8a2c(cpu);
    }
L_000ee248:;
    {
        cpu->r[2] = rd32(0x000ee250u + + 0x29cu);
    }
L_000ee24c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee250:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000ee254:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000ee258:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000ee25c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000ee260:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ee264:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee268:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ee26c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000ee270:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ee274:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 0);
    }
L_000ee278:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000ee27c:;
    {
        cpu->r[14] = 0x000ee280u; fn_000ad8a0(cpu);
    }
L_000ee280:;
    {
        goto L_000edd04;
    }
L_000ee284:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee288:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ee28c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee290:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee294:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x5cu);
    }
L_000ee298:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee29c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee2a0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee2a4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee2a8:;
    {
        cpu->r[14] = 0x000ee2acu; fn_000ad8a0(cpu);
    }
L_000ee2ac:;
    {
        goto L_000ee148;
    }
L_000ee2b0:;
    {
        cpu->r[14] = 0x000ee2b4u; fn_000979a0(cpu);
    }
L_000ee2b4:;
    {
        cpu->r[14] = 0x000ee2b8u; fn_00093fd8(cpu);
    }
L_000ee2b8:;
    {
        goto L_000edcec;
    }
L_000ee2bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee2c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee2c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x60u);
    }
L_000ee2c8:;
    {
        cpu->r[14] = 0x000ee2ccu; fn_000ec44c(cpu);
    }
L_000ee2cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee2d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x74u);
    }
L_000ee2d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ee2d8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee2dc:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee2e0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ee2e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (cpu->r[1] >> 9) & 0x7fu;
        }
    }
L_000ee2e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee2ec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee2f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_000ee2f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee2f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000ee2fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee300:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee304:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 3, 23u, &shc), 0, 0);
        }
    }
L_000ee308:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
        }
    }
L_000ee30c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13], cpu->r[10]);
        }
    }
L_000ee310:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
        }
    }
L_000ee314:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13], cpu->r[12]);
        }
    }
L_000ee318:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee31c:;
    {
        cpu->r[14] = 0x000ee320u; fn_000ad8a0(cpu);
    }
L_000ee320:;
    {
        goto L_000ee158;
    }
L_000ee324:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee328:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee32c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x90u);
    }
L_000ee330:;
    {
        cpu->r[14] = 0x000ee334u; fn_000ec44c(cpu);
    }
L_000ee334:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ee338:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee33c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee340:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ee344:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee348:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000ee34c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee350:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee430;
        }
    }
L_000ee358:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ee35c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000ee360:;
    {
        cpu->r[0] = 0x00006737u;
    }
L_000ee364:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ee368:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000ee36c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ee370:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ee430;
        }
    }
L_000ee374:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_000ee378:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000ee37c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ee380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee430;
        }
    }
L_000ee384:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee388:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee38c:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0xa4u);
    }
L_000ee390:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee394:;
    {
        cpu->r[1] = (cpu->r[14] >> 9) & 0x7fu;
    }
L_000ee398:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee39c:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 23u, &shc); cpu->r[14] = v;
    }
L_000ee3a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[14], 3, 23u, &shc), 0, 0);
    }
L_000ee3a4:;
    {
        cpu->r[14] = 0x000ee3a8u; fn_000ad8a0(cpu);
    }
L_000ee3a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee3ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ee3b0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xa8u);
    }
L_000ee3b4:;
    {
        cpu->r[14] = 0x000ee3b8u; fn_000ec44c(cpu);
    }
L_000ee3b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ee3bc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee3c0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x34u);
    }
L_000ee3c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ee3c8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee3cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000ee3d0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ee3d4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ee3d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee458;
        }
    }
L_000ee3dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ee3e0:;
    {
        cpu->r[0] = 0x00006737u;
    }
L_000ee3e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000ee3e8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ee3ec:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000ee3f0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ee3f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ee458;
        }
    }
L_000ee3f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_000ee3fc:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000ee400:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ee404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee458;
        }
    }
L_000ee408:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee40c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee410:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0xbcu);
    }
L_000ee414:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee418:;
    {
        cpu->r[1] = (cpu->r[14] >> 9) & 0x7fu;
    }
L_000ee41c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee420:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 23u, &shc); cpu->r[14] = v;
    }
L_000ee424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[14], 3, 23u, &shc), 0, 0);
    }
L_000ee428:;
    {
        cpu->r[14] = 0x000ee42cu; fn_000ad8a0(cpu);
    }
L_000ee42c:;
    {
        goto L_000edcec;
    }
L_000ee430:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee434:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ee438:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee43c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xa4u);
    }
L_000ee440:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000ee444:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000ee448:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee44c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee450:;
    {
        cpu->r[14] = 0x000ee454u; fn_000ad8a0(cpu);
    }
L_000ee454:;
    {
        goto L_000ee3a8;
    }
L_000ee458:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x88u);
    }
L_000ee45c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ee460:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ee464:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xbcu);
    }
L_000ee468:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000ee46c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000ee470:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 23u, &shc); cpu->r[1] = v;
    }
L_000ee474:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_000ee478:;
    {
        cpu->r[14] = 0x000ee47cu; fn_000ad8a0(cpu);
    }
L_000ee47c:;
    {
        goto L_000edcec;
    }
L_000ee480:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ee484:;
    {
        cpu->r[14] = 0x000ee488u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ee488:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ee48c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee188;
        }
    }
L_000ee490:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ee494:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ee498:;
    {
        cpu->r[14] = 0x000ee49cu; fn_0018aa20(cpu);
    }
L_000ee49c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ee4a0:;
    {
        cpu->r[14] = 0x000ee4a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ee4a4:;
    {
        cpu->r[3] = rd32(0x000ee4acu + + 0x30u);
    }
L_000ee4a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ee4ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ee4b0:;
    {
        cpu->r[3] = rd32(0x000ee4b8u + + 0x28u);
    }
L_000ee4b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ee4b8:;
    {
        cpu->r[14] = 0x000ee4bcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000ee4bc:;
    {
        goto L_000ee188;
    }
}

/* _ZN6GS_Run17InitialiseButtonsEv @ 000ee4f4 (arm) */
void fn_000ee4f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ee4f4:;
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
L_000ee4f8:;
    {
        cpu->r[6] = rd32(0x000ee500u + + 0x9b0u);
    }
L_000ee4fc:;
    {
        cpu->r[3] = rd32(0x000ee504u + + 0x9b0u);
    }
L_000ee500:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ee504:;
    {
        cpu->r[6] = add_flags(cpu, 0x000ee50cu, cpu->r[6], 0, 0);
    }
L_000ee508:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ee50c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ee510:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ee514:;
    {
        cpu->r[14] = 0x000ee518u; fn_000960f4(cpu);
    }
L_000ee518:;
    {
        cpu->r[3] = rd32(0x000ee520u + + 0x998u);
    }
L_000ee51c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ee520:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ee524:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ee528:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ee52c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eed40;
        }
    }
L_000ee530:;
    {
        cpu->r[5] = rd32(0x000ee538u + + 0x984u);
    }
L_000ee534:;
    {
        cpu->r[3] = rd32(0x000ee53cu + + 0x984u);
    }
L_000ee538:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000ee53c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000ee540:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ee544:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ee548:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000ee54c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000ee550:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ee554:;
    {
        cpu->r[14] = 0x000ee558u; fn_0018aa44(cpu);
    }
L_000ee558:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ee55c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee560:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_000ee564:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ee568:;
    {
        cpu->r[9] = 0x00000032u;
    }
L_000ee56c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ee570:;
    {
        cpu->r[11] = 0x00000014u;
    }
L_000ee574:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000ee578:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ee57c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000ee580:;
    {
        cpu->r[14] = 0x000ee584u; fn_000a8a2c(cpu);
    }
L_000ee584:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee588:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ee58c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee590:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ee594:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee59c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_000ee5a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee5a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000ee5a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000003u, 0, 0);
    }
L_000ee5ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[12];
        }
    }
L_000ee5b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee5b4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x78u);
    }
L_000ee5b8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000000au, 0, 0);
    }
L_000ee5bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000ee5c0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_000ee5c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ee5c8:;
    {
        cpu->r[14] = 0x000ee5ccu; fn_000ec75c(cpu);
    }
L_000ee5cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000043u, 0, 0);
    }
L_000ee5d0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ee5d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ee5d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee5dc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ee5e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ee5e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000ee5e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ee5ec:;
    {
        cpu->r[14] = 0x000ee5f0u; fn_000a8a2c(cpu);
    }
L_000ee5f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ee5f4:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_000ee5f8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee5fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee600:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee604:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_000ee608:;
    {
        cpu->r[14] = rd32(0x000ee610u + + 0x8b4u);
    }
L_000ee60c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee610:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ee614:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000ee61c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_000ee620:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000036u, 0, 0);
    }
L_000ee624:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee628:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ee62c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000ee630:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000024u, 0, 0);
    }
L_000ee634:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000ee638:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[7], cpu->r[14], 1, 0);
    }
L_000ee63c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 0);
    }
L_000ee640:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ee644:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee648:;
    {
        cpu->r[14] = 0x000ee64cu; fn_000ec75c(cpu);
    }
L_000ee64c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ee650:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000ee654:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee65c:;
    {
        cpu->r[10] = rd32(0x000ee664u + + 0x864u);
    }
L_000ee660:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000ee664:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x168u);
    }
L_000ee668:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000ee66c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000ee670:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000060u, 1, 0);
    }
L_000ee674:;
    {
        cpu->r[12] = 0x00000060u;
    }
L_000ee678:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee67c:;
    {
        cpu->r[14] = 0x000ee680u; fn_000ec75c(cpu);
    }
L_000ee680:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee684:;
    {
        cpu->r[2] = 0x000000d7u;
    }
L_000ee688:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_000ee68c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee690:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xf0u);
    }
L_000ee694:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_000ee698:;
    {
        cpu->r[14] = 0x000ee69cu; fn_000ec75c(cpu);
    }
L_000ee69c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee6a0:;
    {
        cpu->r[12] = 0x00000223u;
    }
L_000ee6a4:;
    {
        cpu->r[2] = 0x0000010fu;
    }
L_000ee6a8:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_000ee6ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee6b0:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x108u);
    }
L_000ee6b4:;
    {
        wr32(cpu->r[14] + + 0x104u, cpu->r[12]);
    }
L_000ee6b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_000ee6bc:;
    {
        cpu->r[14] = 0x000ee6c0u; fn_000ec75c(cpu);
    }
L_000ee6c0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee6c4:;
    {
        cpu->r[2] = 0x00000146u;
    }
L_000ee6c8:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_000ee6cc:;
    {
        cpu->r[12] = 0x00000227u;
    }
L_000ee6d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee6d4:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x120u);
    }
L_000ee6d8:;
    {
        wr32(cpu->r[14] + + 0x11cu, cpu->r[12]);
    }
L_000ee6dc:;
    {
        cpu->r[12] = 0x00000038u;
    }
L_000ee6e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_000ee6e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee6e8:;
    {
        cpu->r[14] = 0x000ee6ecu; fn_000ec75c(cpu);
    }
L_000ee6ec:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee6f0:;
    {
        cpu->r[2] = 0x00000092u;
    }
L_000ee6f4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000ee6f8:;
    {
        cpu->r[12] = 0x00000229u;
    }
L_000ee6fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee700:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x138u);
    }
L_000ee704:;
    {
        wr32(cpu->r[14] + + 0x134u, cpu->r[12]);
    }
L_000ee708:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_000ee70c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee710:;
    {
        cpu->r[12] = 0x0000002du;
    }
L_000ee714:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee718:;
    {
        cpu->r[14] = 0x000ee71cu; fn_000ec75c(cpu);
    }
L_000ee71c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee720:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000ee724:;
    {
        cpu->r[2] = 0x00000612u;
    }
L_000ee728:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee72c:;
    {
        wr32(cpu->r[3] + + 0x13cu, cpu->r[2]);
    }
L_000ee730:;
    {
        cpu->r[2] = 0x0000022cu;
    }
L_000ee734:;
    {
        wr32(cpu->r[3] + + 0x14cu, cpu->r[2]);
    }
L_000ee738:;
    {
        cpu->r[14] = 0x000ee73cu; fn_000ec594(cpu);
    }
L_000ee73c:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000ee740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee744:;
    {
        cpu->r[14] = 0x000ee748u; fn_000ec594(cpu);
    }
L_000ee748:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000ee74c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee750:;
    {
        cpu->r[14] = 0x000ee754u; fn_000ec594(cpu);
    }
L_000ee754:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000ee758:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee75c:;
    {
        cpu->r[14] = 0x000ee760u; fn_000ec594(cpu);
    }
L_000ee760:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000ee764:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ee768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee76c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee770:;
    {
        cpu->r[12] = 0x00000046u;
    }
L_000ee774:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000ee778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000ee77c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000ee780:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xc0u);
    }
L_000ee784:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000ee788:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000023u, 1, 0);
    }
L_000ee78c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000023u, 0, 0);
    }
L_000ee790:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee794:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee798:;
    {
        cpu->r[14] = 0x000ee79cu; fn_000ec75c(cpu);
    }
L_000ee79c:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000ee7a0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ee7a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ee7a8:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_000ee7ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee7b0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[12], 0x00000082u, 1, 0);
    }
L_000ee7b4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ee7b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ee7bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000ee7c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ee7c4:;
    {
        cpu->r[14] = 0x000ee7c8u; fn_000a8a2c(cpu);
    }
L_000ee7c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee7cc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ee7d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee7d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee7d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee7dc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x90u);
    }
L_000ee7e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 0);
    }
L_000ee7e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_000ee7e8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000ee7ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee7f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee7f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee7f8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000ee7fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee800:;
    {
        cpu->r[14] = 0x000ee804u; fn_000ec75c(cpu);
    }
L_000ee804:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ee808:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ee80c:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_000ee810:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee814:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ee818:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ee81c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000ee820:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ee824:;
    {
        cpu->r[14] = 0x000ee828u; fn_000a8a2c(cpu);
    }
L_000ee828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee82c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee830:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000ee834:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee838:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee83c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee840:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_000ee848:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xa8u);
    }
L_000ee84c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 0);
    }
L_000ee850:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000ee854:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000ee858:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000ee85c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 0);
    }
L_000ee860:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ee864:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ee868:;
    {
        cpu->r[14] = 0x000ee86cu; fn_000ec75c(cpu);
    }
L_000ee86c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000ee870:;
    {
        cpu->r[11] = rd32(cpu->r[7]);
    }
L_000ee874:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_000ee878:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000ee87c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ee880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eecc8;
        }
    }
L_000ee884:;
    {
        cpu->r[5] = rd32(0x000ee88cu + + 0x640u);
    }
L_000ee888:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000ee88c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0xcu);
    }
L_000ee890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ee894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eecfc;
        }
    }
L_000ee898:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[11], 0x00000028u, 1, 0);
    }
L_000ee89c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x000000a0u, 1, 0);
    }
L_000ee8a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ee8a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ee8a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000ee8ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee8b0:;
    {
        cpu->r[2] = 0x00000019u;
    }
L_000ee8b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee8b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ee8bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ee8c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ee8c4:;
    {
        cpu->r[14] = 0x000ee8c8u; fn_000a8a2c(cpu);
    }
L_000ee8c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee8cc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ee8d0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee8d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee8d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee8dc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_000ee8e0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee8e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000ee8e8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000ee8ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee8f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_000ee8f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ee8f8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[14], 1, 0);
    }
L_000ee8fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ee900:;
    {
        cpu->r[14] = 0x000ee904u; fn_000ec75c(cpu);
    }
L_000ee904:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000ee908:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ee90c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ee910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eee28;
        }
    }
L_000ee914:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000ee918:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000ee91c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x38u);
    }
L_000ee920:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ee924:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee928:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000217u;
        }
    }
L_000ee92c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000020fu;
        }
    }
L_000ee930:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xbcu, cpu->r[2]);
        }
    }
L_000ee934:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000215u;
        }
    }
L_000ee938:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0xbcu, cpu->r[2]);
        }
    }
L_000ee93c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000020du;
        }
    }
L_000ee940:;
    {
        wr32(cpu->r[3] + + 0xa4u, cpu->r[2]);
    }
L_000ee944:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ee948:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ee94c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eee04;
        }
    }
L_000ee950:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000ee954:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ee958:;
    {
        cpu->r[14] = 0x000ee95cu; fn_00093fd8(cpu);
    }
L_000ee95c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ee960:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eeaf4;
        }
    }
L_000ee964:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000ee968:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee96c:;
    {
        cpu->r[14] = 0x000ee970u; fn_000ec594(cpu);
    }
L_000ee970:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000ee974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee978:;
    {
        cpu->r[14] = 0x000ee97cu; fn_000ec594(cpu);
    }
L_000ee97c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000ee980:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee984:;
    {
        cpu->r[14] = 0x000ee988u; fn_000ec594(cpu);
    }
L_000ee988:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee98c:;
    {
        cpu->r[12] = 0x00000200u;
    }
L_000ee990:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ee994:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ee998:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000ee99c:;
    {
        wr32(cpu->r[14] + + 0x5cu, cpu->r[12]);
    }
L_000ee9a0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ee9a4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000ee9a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ee9ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000ee9b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000ee9b4:;
    {
        cpu->r[14] = 0x000ee9b8u; fn_000a8a2c(cpu);
    }
L_000ee9b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ee9bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ee9c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ee9c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ee9c8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000ee9cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000ee9d0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ee9d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ee9d8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ee9dc:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000ee9e0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ee9e4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ee9e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 0);
    }
L_000ee9ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ee9f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 0);
    }
L_000ee9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000ee9f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x48u);
    }
L_000ee9fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000eea00:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000eea04:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 0);
    }
L_000eea08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eea0c:;
    {
        cpu->r[14] = 0x000eea10u; fn_000ec75c(cpu);
    }
L_000eea10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eea14:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000eea18:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000eea1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eea20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eea24:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000eea28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000eea2c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xd8u);
    }
L_000eea30:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000eea34:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_000eea38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eea3c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000eea40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000eea44:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000eea48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eea4c:;
    {
        cpu->r[14] = 0x000eea50u; fn_000ec75c(cpu);
    }
L_000eea50:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000eea54:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eea58:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eea5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eec84;
        }
    }
L_000eea60:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eea64:;
    {
        cpu->r[14] = 0x000eea68u; fn_00093fd8(cpu);
    }
L_000eea68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000eea6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eecb4;
        }
    }
L_000eea70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eea74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eea78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000eea7c:;
    {
        cpu->r[14] = 0x000eea80u; fn_000ec4f0(cpu);
    }
L_000eea80:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_000eea84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000eea88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eeaac;
        }
    }
L_000eea8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000eea90:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_000eea94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000eea98:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000eea9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000eeaa0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000eeaa4:;
    {
        wr8(cpu->r[2] + + 0x34u, cpu->r[0]);
    }
L_000eeaa8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eea98;
        }
    }
L_000eeaac:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000eeab0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eeab4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eeab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eede0;
        }
    }
L_000eeabc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eeac0:;
    {
        cpu->r[14] = 0x000eeac4u; fn_00093fd8(cpu);
    }
L_000eeac4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000eeac8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_000eed90;
        case 1: goto L_000eed84;
        case 2: goto L_000eeae0;
        case 3: goto L_000eedac;
        default: guest_unimplemented(cpu, 0x000eeac8u); return; }
        }
    }
L_000eeacc:;
    {
        goto L_000eeaec;
    }
L_000eeae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eeae4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eeae8:;
    {
        cpu->r[14] = 0x000eeaecu; fn_000ec7cc(cpu);
    }
L_000eeaec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000eeaf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eeaf4u)) return;
    }
L_000eeaf4:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000eeaf8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eeafc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eeb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eee4c;
        }
    }
L_000eeb04:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eeb08:;
    {
        cpu->r[14] = 0x000eeb0cu; fn_00093fd8(cpu);
    }
L_000eeb0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000eeb10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eea50;
        }
    }
L_000eeb14:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eeb18:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eeb1c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000eeb20:;
    {
        cpu->r[3] = 0x00000204u;
    }
L_000eeb24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000eeb28:;
    {
        wr32(cpu->r[14] + + 0x74u, cpu->r[3]);
    }
L_000eeb2c:;
    {
        cpu->r[3] = 0x00000200u;
    }
L_000eeb30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000eeb34:;
    {
        wr32(cpu->r[14] + + 0x5cu, cpu->r[3]);
    }
L_000eeb38:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000eeb3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eeb40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eeb44:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000eeb48:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000eeb4c:;
    {
        cpu->r[14] = 0x000eeb50u; fn_000a8a2c(cpu);
    }
L_000eeb50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000eeb54:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000eeb58:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_000eeb5c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eeb60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000eeb64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_000eeb68:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_000eeb6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eee94;
        }
    }
L_000eeb70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000eeb74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 0);
    }
L_000eeb78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eeb7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_000eeb80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eeb84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_000eeb88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eeb8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000eeb90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000eeb94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000eeb98:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x48u);
    }
L_000eeb9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000eeba0:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000eeba4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000eeba8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eebac:;
    {
        cpu->r[14] = 0x000eebb0u; fn_000ec75c(cpu);
    }
L_000eebb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000eebb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eebb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eebbc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eebc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eebc4:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000eebc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000eebcc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xd8u);
    }
L_000eebd0:;
    {
        cpu->r[9] = rd32(cpu->r[7]);
    }
L_000eebd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_000eebd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000eebdc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000eebe0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000eebe4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eebe8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000eebec:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000eebf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eebf4:;
    {
        cpu->r[14] = 0x000eebf8u; fn_000ec75c(cpu);
    }
L_000eebf8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eebfc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000eec00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000eec04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000eec08:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000eec0c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eec10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eec14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000eec18:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000eec1c:;
    {
        cpu->r[14] = 0x000eec20u; fn_000a8a2c(cpu);
    }
L_000eec20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000eec24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eec28:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eec2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000eec30:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000eec34:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eec38:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eec3c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000eec40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000eec44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000eec48:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 0);
    }
L_000eec4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000eec50:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_000eec54:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_000eec58:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x60u);
    }
L_000eec5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000eec60:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[8], 1, 0);
    }
L_000eec64:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_000eec68:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000eec6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eec70:;
    {
        cpu->r[14] = 0x000eec74u; fn_000ec75c(cpu);
    }
L_000eec74:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000eec78:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eec7c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eec80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eea60;
        }
    }
L_000eec84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eec88:;
    {
        cpu->r[14] = 0x000eec8cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eec8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eec90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eea60;
        }
    }
L_000eec94:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eec98:;
    {
        cpu->r[14] = 0x000eec9cu; fn_00094228(cpu);
    }
L_000eec9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eeca0:;
    {
        cpu->r[14] = 0x000eeca4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eeca4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eeca8:;
    {
        cpu->r[14] = 0x000eecacu; fn_00093fd8(cpu);
    }
L_000eecac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000eecb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eea70;
        }
    }
L_000eecb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eecb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eecbc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000eecc0:;
    {
        cpu->r[14] = 0x000eecc4u; fn_000ec594(cpu);
    }
L_000eecc4:;
    {
        goto L_000eea80;
    }
L_000eecc8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eeccc:;
    {
        cpu->r[14] = 0x000eecd0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eecd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eecd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee884;
        }
    }
L_000eecd8:;
    {
        cpu->r[5] = rd32(0x000eece0u + + 0x1ecu);
    }
L_000eecdc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eece0:;
    {
        cpu->r[14] = 0x000eece4u; fn_00094228(cpu);
    }
L_000eece4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eece8:;
    {
        cpu->r[14] = 0x000eececu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eecec:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eecf0:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0xcu);
    }
L_000eecf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eecf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee898;
        }
    }
L_000eecfc:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000eed00:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000eed04:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000eed08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eee70;
        }
    }
L_000eed0c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eed10:;
    {
        cpu->r[14] = 0x000eed14u; fn_00093fd8(cpu);
    }
L_000eed14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000eed18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ee898;
        }
    }
L_000eed1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000eed20:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000eed24:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000eed28:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_000eed2c:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_000eed30:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000eed34:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000023u, 1, 0);
    }
L_000eed38:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000055u, 1, 0);
    }
L_000eed3c:;
    {
        goto L_000ee8a0;
    }
L_000eed40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eed44:;
    {
        cpu->r[14] = 0x000eed48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eed48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eed4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee530;
        }
    }
L_000eed50:;
    {
        cpu->r[5] = rd32(0x000eed58u + + 0x164u);
    }
L_000eed54:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eed58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000eed5c:;
    {
        cpu->r[14] = 0x000eed60u; fn_0018aa20(cpu);
    }
L_000eed60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eed64:;
    {
        cpu->r[14] = 0x000eed68u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eed68:;
    {
        cpu->r[3] = rd32(0x000eed70u + + 0x160u);
    }
L_000eed6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000eed70:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000eed74:;
    {
        cpu->r[3] = rd32(0x000eed7cu + + 0x158u);
    }
L_000eed78:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000eed7c:;
    {
        cpu->r[14] = 0x000eed80u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000eed80:;
    {
        goto L_000ee534;
    }
L_000eed84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eed88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eed8c:;
    {
        cpu->r[14] = 0x000eed90u; fn_000ec7cc(cpu);
    }
L_000eed90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eed94:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000eed98:;
    {
        cpu->r[14] = 0x000eed9cu; fn_000ec7cc(cpu);
    }
L_000eed9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eeda0:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000eeda4:;
    {
        cpu->r[14] = 0x000eeda8u; fn_000ec7cc(cpu);
    }
L_000eeda8:;
    {
        goto L_000eeaec;
    }
L_000eedac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eedb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eedb4:;
    {
        cpu->r[14] = 0x000eedb8u; fn_000ec7cc(cpu);
    }
L_000eedb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eedbc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000eedc0:;
    {
        cpu->r[14] = 0x000eedc4u; fn_000ec7cc(cpu);
    }
L_000eedc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eedc8:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000eedcc:;
    {
        cpu->r[14] = 0x000eedd0u; fn_000ec7cc(cpu);
    }
L_000eedd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eedd4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000eedd8:;
    {
        cpu->r[14] = 0x000eeddcu; fn_000ec7cc(cpu);
    }
L_000eeddc:;
    {
        goto L_000eeaec;
    }
L_000eede0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eede4:;
    {
        cpu->r[14] = 0x000eede8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eede8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eedec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eeabc;
        }
    }
L_000eedf0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eedf4:;
    {
        cpu->r[14] = 0x000eedf8u; fn_00094228(cpu);
    }
L_000eedf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eedfc:;
    {
        cpu->r[14] = 0x000eee00u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eee00:;
    {
        goto L_000eeabc;
    }
L_000eee04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee08:;
    {
        cpu->r[14] = 0x000eee0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eee0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eee10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee950;
        }
    }
L_000eee14:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eee18:;
    {
        cpu->r[14] = 0x000eee1cu; fn_00094228(cpu);
    }
L_000eee1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee20:;
    {
        cpu->r[14] = 0x000eee24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eee24:;
    {
        goto L_000ee950;
    }
L_000eee28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee2c:;
    {
        cpu->r[14] = 0x000eee30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eee30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eee34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ee914;
        }
    }
L_000eee38:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000eee3c:;
    {
        cpu->r[14] = 0x000eee40u; fn_00094228(cpu);
    }
L_000eee40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee44:;
    {
        cpu->r[14] = 0x000eee48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eee48:;
    {
        goto L_000ee914;
    }
L_000eee4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee50:;
    {
        cpu->r[14] = 0x000eee54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eee54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eee58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eeb04;
        }
    }
L_000eee5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000eee60:;
    {
        cpu->r[14] = 0x000eee64u; fn_00094228(cpu);
    }
L_000eee64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000eee68:;
    {
        cpu->r[14] = 0x000eee6cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eee6c:;
    {
        goto L_000eeb04;
    }
L_000eee70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eee74:;
    {
        cpu->r[14] = 0x000eee78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eee78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eee7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eed0c;
        }
    }
L_000eee80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000eee84:;
    {
        cpu->r[14] = 0x000eee88u; fn_00094228(cpu);
    }
L_000eee88:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eee8c:;
    {
        cpu->r[14] = 0x000eee90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eee90:;
    {
        goto L_000eed0c;
    }
L_000eee94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000eee98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eee9c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x0000030cu, cpu->r[8], 1, 0);
    }
L_000eeea0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eeea4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000eeea8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_000eeeac:;
    {
        goto L_000eeb8c;
    }
}

/* _ZN6GS_Run17SwitchOrientationEv @ 000eeed8 (arm) */
void fn_000eeed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eeed8:;
    {
        cpu->r[3] = rd32(0x000eeee0u + + 0x38u);
    }
L_000eeedc:;
    {
        cpu->r[2] = rd32(0x000eeee4u + + 0x38u);
    }
L_000eeee0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eeee8u, cpu->r[3], 0, 0);
    }
L_000eeee4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eeee8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eeeec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eeef0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000eeef4:;
    {
        cpu->r[14] = 0x000eeef8u; fn_000960ec(cpu);
    }
L_000eeef8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000eeefc:;
    {
        wr8(cpu->r[4] + + 0xb1u, cpu->r[0]);
    }
L_000eef00:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000eef04:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eef08:;
    {
        cpu->r[14] = 0x000eef0cu; fn_000be91c(cpu);
    }
L_000eef0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eef10:;
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
L_000eef14:;
    {
        return fn_000ee4f4(cpu);
    }
}

/* _ZN6GS_Run6ResumeEv @ 000eef20 (arm) */
void fn_000eef20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eef20:;
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
L_000eef24:;
    {
        cpu->r[4] = rd32(0x000eef2cu + + 0xf4u);
    }
L_000eef28:;
    {
        cpu->r[6] = rd32(0x000eef30u + + 0xf4u);
    }
L_000eef2c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000eef30:;
    {
        cpu->r[4] = add_flags(cpu, 0x000eef38u, cpu->r[4], 0, 0);
    }
L_000eef34:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000eef38:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000eef3c:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_000eef40:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000eef44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eef48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefa4;
        }
    }
L_000eef4c:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000eef50:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000eef54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eef58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefa4;
        }
    }
L_000eef5c:;
    {
        cpu->r[8] = 0x00006737u;
    }
L_000eef60:;
    {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[8]);
    }
L_000eef64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000eef68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefa4;
        }
    }
L_000eef6c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000eef70:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000eef74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000eef78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefa4;
        }
    }
L_000eef7c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x317u);
    }
L_000eef80:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000eef84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000eef88:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eef8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef010;
        }
    }
L_000eef90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000eef94:;
    {
        cpu->r[14] = 0x000eef98u; fn_000968d4(cpu);
    }
L_000eef98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eef9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefd0;
        }
    }
L_000eefa0:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_000eefa4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000eefa8:;
    {
        cpu->r[14] = 0x000eefacu; fn_000960ec(cpu);
    }
L_000eefac:;
    {
        wr8(cpu->r[5] + + 0xb1u, cpu->r[0]);
    }
L_000eefb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eefb4:;
    {
        cpu->r[14] = 0x000eefb8u; fn_000ee4f4(cpu);
    }
L_000eefb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000eefbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eefc0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eefc4:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_000eefc8:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000eefcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eefd0u)) return;
    }
L_000eefd0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000eefd4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000eefd8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000eefdc:;
    {
        wr8(cpu->r[2] + cpu->r[8], cpu->r[3]);
    }
L_000eefe0:;
    {
        cpu->r[14] = 0x000eefe4u; fn_000ba460(cpu);
    }
L_000eefe4:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_000eefe8:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_000eefec:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000eeff0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eeff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eefa4;
        }
    }
L_000eeff8:;
    {
        cpu->r[14] = 0x000eeffcu; fn_0009b4d0(cpu);
    }
L_000eeffc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ef000:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ef004:;
    {
        cpu->r[14] = 0x000ef008u; fn_000967dc(cpu);
    }
L_000ef008:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_000ef00c:;
    {
        goto L_000eefa4;
    }
L_000ef010:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ef014:;
    {
        cpu->r[14] = 0x000ef018u; fn_000bd190(cpu);
    }
L_000ef018:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_000ef01c:;
    {
        goto L_000eefa4;
    }
}

/* _ZN6GS_Run6CreateEv @ 000ef028 (arm) */
void fn_000ef028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ef028:;
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
L_000ef02c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ef030:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000ef034:;
    {
        wr32(cpu->r[0] + + 0xb4u, cpu->r[6]);
    }
L_000ef038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ef03c:;
    {
        cpu->r[14] = 0x000ef040u; fn_0009b4d0(cpu);
    }
L_000ef040:;
    {
        cpu->r[8] = rd32(0x000ef048u + + 0x43cu);
    }
L_000ef044:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000ef048:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ef050u, cpu->r[8], 0, 0);
    }
L_000ef04c:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[0]);
    }
L_000ef050:;
    {
        cpu->r[14] = 0x000ef054u; fn_0009b4d0(cpu);
    }
L_000ef054:;
    {
        cpu->r[3] = rd32(0x000ef05cu + + 0x42cu);
    }
L_000ef058:;
    {
        wr8(cpu->r[4] + + 0xb0u, cpu->r[6]);
    }
L_000ef05c:;
    {
        cpu->r[12] = 0x00001314u;
    }
L_000ef060:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000ef064:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[6]);
    }
L_000ef068:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000ef06c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ef070:;
    {
        wr8(cpu->r[4] + + 0x9fu, cpu->r[7]);
    }
L_000ef074:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[7]);
    }
L_000ef078:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_000ef07c:;
    {
        cpu->r[1] = 0x00009000u;
    }
L_000ef080:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xc630u << 16);
    }
L_000ef084:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000ef088:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[0]);
    }
L_000ef08c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ef090:;
    {
        cpu->r[14] = 0x000ef094u; fn_00151aa0(cpu);
    }
L_000ef094:;
    {
        cpu->r[1] = 0x00003000u;
    }
L_000ef098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ef09c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xc60eu << 16);
    }
L_000ef0a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000ef0a4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ef0a8:;
    {
        cpu->r[14] = 0x000ef0acu; fn_00151aa8(cpu);
    }
L_000ef0ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef0b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ef0b4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x447au << 16);
    }
L_000ef0b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000ef0bc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ef0c0:;
    {
        cpu->r[14] = 0x000ef0c4u; fn_00151ab0(cpu);
    }
L_000ef0c4:;
    {
        cpu->r[2] = 0x0000b000u;
    }
L_000ef0c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ef0cc:;
    {
        cpu->r[1] = 0x00009000u;
    }
L_000ef0d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x45e5u << 16);
    }
L_000ef0d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4348u << 16);
    }
L_000ef0d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ef0dc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xc630u << 16);
    }
L_000ef0e0:;
    {
        cpu->r[14] = 0x000ef0e4u; fn_00151dc8(cpu);
    }
L_000ef0e4:;
    {
        cpu->r[1] = 0x0000b000u;
    }
L_000ef0e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ef0ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xc633u << 16);
    }
L_000ef0f0:;
    {
        cpu->r[14] = 0x000ef0f4u; fn_00152008(cpu);
    }
L_000ef0f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef0f8:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_000ef0fc:;
    {
        cpu->r[14] = 0x000ef100u; fn_000eb8b8(cpu);
    }
L_000ef100:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_000ef104:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000ef108:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ef47c;
        }
    }
L_000ef10c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef110:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_000ef114:;
    {
        cpu->r[11] = 0x00000200u;
    }
L_000ef118:;
    {
        cpu->r[2] = 0x01000000u;
    }
L_000ef11c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000090u, 0, 0);
    }
L_000ef120:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000ef124:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x000000a8u, 0, 0);
    }
L_000ef128:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000ef12c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x000000c0u, 0, 0);
    }
L_000ef130:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000ef134:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x000000d8u, 0, 0);
    }
L_000ef138:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000ef13c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x000000f0u, 0, 0);
    }
L_000ef140:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000ef144:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000108u, 0, 0);
    }
L_000ef148:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000ef14c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000120u, 0, 0);
    }
L_000ef150:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000ef154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000138u, 0, 0);
    }
L_000ef158:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000ef15c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000150u, 0, 0);
    }
L_000ef160:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000ef164:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000168u, 0, 0);
    }
L_000ef168:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000ef16c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ef170:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_000ef174:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000ef178:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_000ef17c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000060u, 0, 0);
    }
L_000ef180:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_000ef184:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[6]);
    }
L_000ef188:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[7]);
    }
L_000ef18c:;
    {
        cpu->r[7] = 0x00000219u;
    }
L_000ef190:;
    {
        wr32(cpu->r[9] + + 0x14u, cpu->r[7]);
    }
L_000ef194:;
    {
        cpu->r[7] = 0x00000204u;
    }
L_000ef198:;
    {
        wr32(cpu->r[10] + + 0x14u, cpu->r[6]);
    }
L_000ef19c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[11]);
    }
L_000ef1a0:;
    {
        wr32(cpu->r[14] + + 0x14u, cpu->r[7]);
    }
L_000ef1a4:;
    {
        cpu->r[7] = 0x00000002u;
    }
L_000ef1a8:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[1]);
    }
L_000ef1ac:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[7]);
    }
L_000ef1b0:;
    {
        cpu->r[7] = 0x0000020du;
    }
L_000ef1b4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_000ef1b8:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_000ef1bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ef1c0:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[7]);
    }
L_000ef1c4:;
    {
        cpu->r[7] = 0x0000020fu;
    }
L_000ef1c8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[6]);
    }
L_000ef1cc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_000ef1d0:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_000ef1d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ef1d8:;
    {
        wr32(cpu->r[3] + + 0x60u, cpu->r[7]);
    }
L_000ef1dc:;
    {
        cpu->r[7] = 0x00000005u;
    }
L_000ef1e0:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[7]);
    }
L_000ef1e4:;
    {
        cpu->r[7] = 0x00000006u;
    }
L_000ef1e8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef1ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ef1f0:;
    {
        wr32(cpu->r[3] + + 0x90u, cpu->r[7]);
    }
L_000ef1f4:;
    {
        cpu->r[7] = 0x00000007u;
    }
L_000ef1f8:;
    {
        wr32(cpu->r[3] + + 0xa8u, cpu->r[7]);
    }
L_000ef1fc:;
    {
        cpu->r[7] = 0x00000008u;
    }
L_000ef200:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[11]);
    }
L_000ef204:;
    {
        wr32(cpu->r[3] + + 0xc0u, cpu->r[7]);
    }
L_000ef208:;
    {
        cpu->r[7] = 0x00000009u;
    }
L_000ef20c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ef210:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[6]);
    }
L_000ef214:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[2]);
    }
L_000ef218:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_000ef21c:;
    {
        wr32(cpu->r[14] + + 0x8u, cpu->r[2]);
    }
L_000ef220:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[6]);
    }
L_000ef224:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000ef228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ef22c:;
    {
        wr32(cpu->r[3] + + 0xd8u, cpu->r[7]);
    }
L_000ef230:;
    {
        cpu->r[7] = 0x0000000au;
    }
L_000ef234:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_000ef238:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000ef23c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ef240:;
    {
        wr32(cpu->r[3] + + 0xf0u, cpu->r[7]);
    }
L_000ef244:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000ef248:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ef24c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000ef250:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ef254:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef258:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_000ef25c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ef260:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef264:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_000ef268:;
    {
        wr32(cpu->r[3] + + 0x108u, cpu->r[0]);
    }
L_000ef26c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ef270:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef274:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_000ef278:;
    {
        wr32(cpu->r[3] + + 0x120u, cpu->r[0]);
    }
L_000ef27c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ef280:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef284:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ef288:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000ef28c:;
    {
        cpu->r[0] = 0x0000000du;
    }
L_000ef290:;
    {
        wr32(cpu->r[3] + + 0x138u, cpu->r[0]);
    }
L_000ef294:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_000ef298:;
    {
        wr32(cpu->r[3] + + 0x168u, cpu->r[0]);
    }
L_000ef29c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ef2a0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_000ef2a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ef2a8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_000ef2ac:;
    {
        wr32(cpu->r[3] + + 0x150u, cpu->r[1]);
    }
L_000ef2b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ef2b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ef2b8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_000ef2bc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_000ef2c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ef2c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ef2c8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_000ef2cc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000ef2d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_000ef2d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ef2d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ef31c;
        }
    }
L_000ef2dc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000ef2e0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000ef2e4:;
    {
        goto L_000ef2ec;
    }
L_000ef2e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef2ec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ef2f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef2f4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ef2f8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ef2fc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ef300:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ef304:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ef308:;
    {
        cpu->r[14] = 0x000ef30cu; fn_000eb71c(cpu);
    }
L_000ef30c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_000ef310:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_000ef314:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000ef318:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ef2e8;
        }
    }
L_000ef31c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ef320:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef324:;
    {
        cpu->r[14] = 0x000ef32cu;
    }
L_000ef328:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ef32cu)) return;
    }
L_000ef32c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef330:;
    {
        cpu->r[14] = 0x000ef334u; fn_000ee4f4(cpu);
    }
L_000ef334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef338:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000ef33c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000ef340:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ef344:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000ef348:;
    {
        cpu->r[14] = 0x000ef350u;
    }
L_000ef34c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ef350u)) return;
    }
L_000ef350:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef354:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ef358:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000ef35c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ef360:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ef364:;
    {
        cpu->r[1] = rd32(0x000ef36cu + + 0x120u);
    }
L_000ef368:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_000ef36c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000ef370:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000ef374:;
    {
        cpu->r[14] = 0x000ef378u; fn_000960ec(cpu);
    }
L_000ef378:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef37c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef380:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef384:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef388:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ef38c:;
    {
        wr8(cpu->r[4] + + 0xb1u, cpu->r[0]);
    }
L_000ef390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c8u, 0, 0);
    }
L_000ef394:;
    {
        cpu->r[14] = 0x000ef398u; fn_000a6504(cpu);
    }
L_000ef398:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef39c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef3a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_000ef3a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef3a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ef3ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef3b0:;
    {
        cpu->r[14] = 0x000ef3b4u; fn_000a6504(cpu);
    }
L_000ef3b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef3b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef3bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000168u, 0, 0);
    }
L_000ef3c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef3c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ef3c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef3cc:;
    {
        cpu->r[14] = 0x000ef3d0u; fn_000a6504(cpu);
    }
L_000ef3d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef3d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef3d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f0u, 0, 0);
    }
L_000ef3dc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef3e0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ef3e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef3e8:;
    {
        cpu->r[14] = 0x000ef3ecu; fn_000a6504(cpu);
    }
L_000ef3ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef3f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef3f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000140u, 0, 0);
    }
L_000ef3f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef3fc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ef400:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef404:;
    {
        cpu->r[14] = 0x000ef408u; fn_000a6504(cpu);
    }
L_000ef408:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef40c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef410:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x41f0u << 16);
    }
L_000ef414:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ef418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000190u, 0, 0);
    }
L_000ef41c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4080u << 16);
    }
L_000ef420:;
    {
        cpu->r[14] = 0x000ef424u; fn_000a6504(cpu);
    }
L_000ef424:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000ef428:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000ef42c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ef430:;
    {
        cpu->r[14] = 0x000ef434u; fn_00096b5c(cpu);
    }
L_000ef434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef438:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_000ef43c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000ef440:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_000ef444:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ef448:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x30u);
    }
L_000ef44c:;
    {
        cpu->r[14] = 0x000ef450u; fn_00099b28(cpu);
    }
L_000ef450:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef454:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef458:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000ef45c:;
    {
        cpu->r[14] = 0x000ef460u; fn_000a2764(cpu);
    }
L_000ef460:;
    {
        cpu->r[3] = rd32(0x000ef468u + + 0x28u);
    }
L_000ef464:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000ef468:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ef46c:;
    {
        cpu->r[14] = 0x000ef470u; fn_00135c14(cpu);
    }
L_000ef470:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ef474:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ef478:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000ef47c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ef480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ef484u)) return;
    }
}

/* _ZN6GS_Run6UpdateEv @ 000ef494 (arm) */
void fn_000ef494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ef494:;
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
L_000ef498:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000ef49c:;
    {
        cpu->r[5] = rd32(0x000ef4a4u + + 0xf18u);
    }
L_000ef4a0:;
    {
        cpu->r[2] = rd32(0x000ef4a8u + + 0xf18u);
    }
L_000ef4a4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000ef4a8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ef4b0u, cpu->r[5], 0, 0);
    }
L_000ef4ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb4u);
    }
L_000ef4b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ef4b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000ef4b8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000ef4bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000ef4c0:;
    {
        wr32(cpu->r[0] + + 0xb4u, cpu->r[3]);
    }
L_000ef4c4:;
    {
        cpu->r[3] = 0x00001284u;
    }
L_000ef4c8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000ef4cc:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_000ef4d0:;
    {
        cpu->r[14] = 0x000ef4d4u; fn_0018ba64(cpu);
    }
L_000ef4d4:;
    {
        cpu->r[14] = 0x000ef4d8u; fn_0018ba68(cpu);
    }
L_000ef4d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef4dc:;
    {
        cpu->r[3] = 0x00001d32u;
    }
L_000ef4e0:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000ef4e4:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_000ef4e8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000ef4ec:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000ef4f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ef4f4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ef4f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000ef4fc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ef500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef5d0;
        }
    }
L_000ef504:;
    {
        cpu->r[7] = rd32(0x000ef50cu + + 0xeb8u);
    }
L_000ef508:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ef50c:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ef510:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ef514:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef518:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ef51c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ef520:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ef524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef9a4;
        }
    }
L_000ef528:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000ef52c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ef530:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef534:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef9a4;
        }
    }
L_000ef538:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000ef53c:;
    {
        cpu->r[10] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000ef540:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ef544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef574;
        }
    }
L_000ef548:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x98u);
    }
L_000ef54c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef550:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000efea8;
        }
    }
L_000ef554:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000ef558:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000ef55c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef560:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef574;
        }
    }
L_000ef564:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x98u);
    }
L_000ef568:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef56c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000ef570:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
        }
    }
L_000ef574:;
    {
        cpu->r[3] = 0x00001cacu;
    }
L_000ef578:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ef57c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000ef580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef9c4;
        }
    }
L_000ef584:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef588:;
    {
        cpu->r[1] = 0x00008508u;
    }
L_000ef58c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ef590:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ef594:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ef598:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efb5c;
        }
    }
L_000ef59c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000ef5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef5dc;
        }
    }
L_000ef5a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x490u);
    }
L_000ef5a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ef5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef5dc;
        }
    }
L_000ef5b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ef5b4:;
    {
        cpu->r[14] = 0x000ef5b8u; fn_000967b0(cpu);
    }
L_000ef5b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ef5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efb78;
        }
    }
L_000ef5c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef5c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef5c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ef5cc:;
    {
        goto L_000ef5dc;
    }
L_000ef5d0:;
    {
        cpu->r[7] = rd32(0x000ef5d8u + + 0xdecu);
    }
L_000ef5d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef5d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ef5dc:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000ef5e0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000ef5e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ef5e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ef5ec:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ef5f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ef5f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ef5f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ef5fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ef600:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ef604:;
    {
        cpu->r[3] = 0x000018e4u;
    }
L_000ef608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000ef60c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ef610:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ef614:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ef618:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c8u, 1, 1);
    }
L_000ef61c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef620:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000419u;
        }
    }
L_000ef624:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x0000001au;
        }
    }
L_000ef628:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_000ef62c:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000ef630:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xa0u);
    }
L_000ef634:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ef638:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_000ef63c:;
    {
        cpu->r[14] = 0x000ef640u; fn_00096b88(cpu);
    }
L_000ef640:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ef644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef7d0;
        }
    }
L_000ef648:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef64c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ef650:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000ef654:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ef658:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ef65c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ef660:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ef664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef9ec;
        }
    }
L_000ef668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ef66c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef670:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ef6b4;
        }
    }
L_000ef674:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ef678:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000ef67c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef684:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ef688:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ef68c:;
    {
        cpu->r[14] = 0x000ef690u; fn_000ec594(cpu);
    }
L_000ef690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef698:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ef69c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_000ef6a0:;
    {
        cpu->r[14] = 0x000ef6a4u; fn_000ec32c(cpu);
    }
L_000ef6a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ef6a8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000ef6ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ef67c;
        }
    }
L_000ef6b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef6b4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ef6b8:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000ef6bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ef6c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ef6c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ef6c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ef6cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ef6d0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000efadc;
        }
    }
L_000ef6d4:;
    {
        cpu->r[3] = rd32(0x000ef6dcu + + 0xcecu);
    }
L_000ef6d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ef6dc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000ef6e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef6e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000efa0c;
        }
    }
L_000ef6e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef6ec:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ef6f0:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ef6f4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000ef6f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef720;
        }
    }
L_000ef700:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef704:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000ef708:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000ef70c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000ef710:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ef714:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ef718:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000ef71c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef728;
        }
    }
L_000ef720:;
    {
        cpu->r[14] = 0x000ef724u; fn_0015ca98(cpu);
    }
L_000ef724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef728:;
    {
        cpu->r[6] = 0x00001bc0u;
    }
L_000ef72c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef730:;
    {
        cpu->r[11] = rd32(0x000ef738u + + 0xc94u);
    }
L_000ef734:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ef738:;
    {
        cpu->r[14] = 0x000ef73cu; fn_0018b5d8(cpu);
    }
L_000ef73c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_000ef740:;
    {
        cpu->r[14] = 0x000ef744u; fn_0018b8fc(cpu);
    }
L_000ef744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef748:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ef74c:;
    {
        cpu->r[9] = rd32(0x000ef754u + + 0xc7cu);
    }
L_000ef750:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ef754:;
    {
        cpu->r[14] = 0x000ef758u; fn_0018b5d8(cpu);
    }
L_000ef758:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_000ef75c:;
    {
        cpu->r[14] = 0x000ef760u; fn_0018b950(cpu);
    }
L_000ef760:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_000ef764:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef768:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efa20;
        }
    }
L_000ef76c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ef770:;
    {
        cpu->r[6] = 0x00005f52u;
    }
L_000ef774:;
    {
        cpu->r[14] = 0x000ef778u; fn_000d7ee4(cpu);
    }
L_000ef778:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ef77c:;
    {
        cpu->r[14] = 0x000ef780u; fn_00151c40(cpu);
    }
L_000ef780:;
    {
        cpu->r[14] = 0x000ef784u; fn_00095a98(cpu);
    }
L_000ef784:;
    {
        cpu->r[14] = 0x000ef788u; fn_0018ba64(cpu);
    }
L_000ef788:;
    {
        cpu->r[14] = 0x000ef78cu; fn_0018ba68(cpu);
    }
L_000ef78c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef790:;
    {
        cpu->r[14] = 0x000ef794u; fn_000ed580(cpu);
    }
L_000ef794:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef798:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ef79c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000ef7a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef7a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efb44;
        }
    }
L_000ef7a8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ef7ac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ef7b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ef7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efb20;
        }
    }
L_000ef7b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000ef7bc:;
    {
        cpu->r[14] = 0x000ef7c0u; fn_00093fd8(cpu);
    }
L_000ef7c0:;
    {
        wr8(cpu->r[4] + + 0xb2u, cpu->r[0]);
    }
L_000ef7c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000ef7c8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000ef7cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ef7d0u)) return;
    }
L_000ef7d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ef7d4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000ef7d8:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000ef7dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ef7e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ef7e4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ef7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef7ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef668;
        }
    }
L_000ef7f0:;
    {
        cpu->r[3] = 0x00001cacu;
    }
L_000ef7f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ef7f8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ef7fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef7c4;
        }
    }
L_000ef800:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000ef804:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ef808:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ef80c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ef810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0210;
        }
    }
L_000ef814:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef81c:;
    {
        cpu->r[11] = rd32(0x000ef824u + + 0xba8u);
    }
L_000ef820:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ef824:;
    {
        cpu->r[14] = 0x000ef828u; fn_000ec594(cpu);
    }
L_000ef828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef82c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef830:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x60u);
    }
L_000ef834:;
    {
        cpu->r[14] = 0x000ef838u; fn_000ec594(cpu);
    }
L_000ef838:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ef83c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ef840:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ef844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efaf8;
        }
    }
L_000ef848:;
    {
        cpu->r[9] = rd32(0x000ef850u + + 0xb80u);
    }
L_000ef84c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000ef850:;
    {
        cpu->r[14] = 0x000ef854u; fn_00093fd8(cpu);
    }
L_000ef854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000ef858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f01dc;
        }
    }
L_000ef85c:;
    {
        cpu->r[14] = 0x000ef860u; fn_000979a0(cpu);
    }
L_000ef860:;
    {
        cpu->r[14] = 0x000ef864u; fn_00093fd8(cpu);
    }
L_000ef864:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ef868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0358;
        }
    }
L_000ef86c:;
    {
        cpu->r[14] = 0x000ef870u; fn_000979a0(cpu);
    }
L_000ef870:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_000ef874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0344;
        }
    }
L_000ef87c:;
    {
        cpu->r[14] = 0x000ef880u; fn_000979a0(cpu);
    }
L_000ef880:;
    {
        cpu->r[14] = 0x000ef884u; fn_00093fd8(cpu);
    }
L_000ef884:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000ef888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f036c;
        }
    }
L_000ef88c:;
    {
        cpu->r[14] = 0x000ef890u; fn_000979a0(cpu);
    }
L_000ef890:;
    {
        cpu->r[14] = 0x000ef894u; fn_00093fd8(cpu);
    }
L_000ef894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ef898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efe94;
        }
    }
L_000ef89c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000ef8a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef8a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000ef8a8:;
    {
        cpu->r[14] = 0x000ef8acu; fn_000ec4f0(cpu);
    }
L_000ef8ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ef8b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ef8b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000efca8;
        }
    }
L_000ef8b8:;
    {
        cpu->r[3] = rd32(0x000ef8c0u + + 0xb14u);
    }
L_000ef8bc:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000ef8c0:;
    {
        cpu->r[12] = rd32(0x000ef8c8u + + 0xb10u);
    }
L_000ef8c4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ef8c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ef8d0u, cpu->r[3], 0, 0);
    }
L_000ef8cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000ef8d0:;
    {
        cpu->r[3] = rd32(0x000ef8d8u + + 0xb04u);
    }
L_000ef8d4:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000ef8d8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000ef8dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ef8e4u, cpu->r[3], 0, 0);
    }
L_000ef8e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000ef8e4:;
    {
        cpu->r[3] = rd32(0x000ef8ecu + + 0xaf4u);
    }
L_000ef8e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ef8f0u, cpu->r[3], 0, 0);
    }
L_000ef8ec:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ef8f0:;
    {
        cpu->r[3] = rd32(0x000ef8f8u + + 0xaecu);
    }
L_000ef8f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ef8fcu, cpu->r[3], 0, 0);
    }
L_000ef8f8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000ef8fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ef900:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000ef904:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000ef908:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x34u);
    }
L_000ef90c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ef910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efee8;
        }
    }
L_000ef914:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000ef918:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ef958;
        }
    }
L_000ef91c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ef920:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ef924:;
    {
        cpu->r[2] = rd32(0x000ef92cu + + 0xabcu);
    }
L_000ef928:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_000ef92c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ef934u, cpu->r[3], 0, 0);
    }
L_000ef930:;
    {
        cpu->r[3] = rd32(0x000ef938u + + 0xab4u);
    }
L_000ef934:;
    {
        cpu->r[12] = rd32(0x000ef93cu + + 0xab4u);
    }
L_000ef938:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ef940u, cpu->r[2], 0, 0);
    }
L_000ef93c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ef944u, cpu->r[3], 0, 0);
    }
L_000ef940:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ef944:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ef94cu, cpu->r[12], 0, 0);
    }
L_000ef948:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ef94c:;
    {
        cpu->r[14] = 0x000ef950u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ef950:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ef954:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000ef958:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000ef95c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000ef960:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_000ef964:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000efe50;
        case 1: goto L_000efc90;
        case 2: goto L_000efe18;
        case 3: goto L_000efc40;
        case 4: goto L_000efc90;
        case 5: goto L_000efdf8;
        case 6: goto L_000efdb8;
        case 7: goto L_000efd98;
        case 8: goto L_000efe18;
        case 9: goto L_000efd78;
        case 10: goto L_000efd58;
        case 11: goto L_000efd38;
        case 12: goto L_000efd18;
        case 13: goto L_000efcf8;
        default: guest_unimplemented(cpu, 0x000ef964u); return; }
        }
    }
L_000ef968:;
    {
        goto L_000efc90;
    }
L_000ef9a4:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000ef9a8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000ef9ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef9b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef554;
        }
    }
L_000ef9b4:;
    {
        cpu->r[3] = 0x00001cacu;
    }
L_000ef9b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ef9bc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000ef9c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef584;
        }
    }
L_000ef9c4:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000ef9c8:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000ef9cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ef9d0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ef9d4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000ef9d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ef9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef584;
        }
    }
L_000ef9e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ef9e4:;
    {
        cpu->r[14] = 0x000ef9e8u; fn_000eb06c(cpu);
    }
L_000ef9e8:;
    {
        goto L_000ef7c4;
    }
L_000ef9ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ef9f0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ef9f4:;
    {
        cpu->r[14] = 0x000ef9f8u; fn_00096b88(cpu);
    }
L_000ef9f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ef9fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efa0c;
        }
    }
L_000efa00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000efa04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efa08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000efbac;
        }
    }
L_000efa0c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_000efa10:;
    {
        cpu->r[11] = rd32(0x000efa18u + + 0x9b4u);
    }
L_000efa14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efa18:;
    {
        cpu->r[9] = rd32(0x000efa20u + + 0x9b0u);
    }
L_000efa1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef76c;
        }
    }
L_000efa20:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000efa24:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000efa28:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000efa2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efb88;
        }
    }
L_000efa30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000efa34:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xcu);
    }
L_000efa38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efa3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef76c;
        }
    }
L_000efa40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000efa44:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000efa48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000efa4c:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000efa50:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000efa54:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000efa58:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efa5c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000efa60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efa64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef76c;
        }
    }
L_000efa68:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000efa6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000efa70:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000efa74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000efa78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000efa7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000efa80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000efa84:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_000efa88:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000efa8c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000efa90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000efa94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef76c;
        }
    }
L_000efa98:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x418u);
    }
L_000efa9c:;
    {
        cpu->r[0] = 0x00003200u;
    }
L_000efaa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000efaa4:;
    {
        cpu->r[14] = 0x000efaa8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000efaa8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10] + + 0x354u);
    }
L_000efaac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000efab0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000efab4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000efab8:;
    {
        vfp_sync_flags(cpu);
    }
L_000efabc:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000f00b4;
        }
    }
L_000efac0:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efac4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efac8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000efacc:;
    {
        cpu->r[14] = 0x000efad0u; fn_0018b5d8(cpu);
    }
L_000efad0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000efad4:;
    {
        cpu->r[14] = 0x000efad8u; fn_0018b8fc(cpu);
    }
L_000efad8:;
    {
        goto L_000ef76c;
    }
L_000efadc:;
    {
        cpu->r[3] = 0x00004324u;
    }
L_000efae0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000efae4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efae8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000efaec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ef6d4;
        }
    }
L_000efaf0:;
    {
        cpu->r[14] = 0x000efaf4u; fn_0015ca98(cpu);
    }
L_000efaf4:;
    {
        goto L_000ef6d4;
    }
L_000efaf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efafc:;
    {
        cpu->r[14] = 0x000efb00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000efb00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000efb04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef848;
        }
    }
L_000efb08:;
    {
        cpu->r[9] = rd32(0x000efb10u + + 0x8c0u);
    }
L_000efb0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000efb10:;
    {
        cpu->r[14] = 0x000efb14u; fn_00094228(cpu);
    }
L_000efb14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efb18:;
    {
        cpu->r[14] = 0x000efb1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000efb1c:;
    {
        goto L_000ef84c;
    }
L_000efb20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efb24:;
    {
        cpu->r[14] = 0x000efb28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000efb28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000efb2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ef7b8;
        }
    }
L_000efb30:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000efb34:;
    {
        cpu->r[14] = 0x000efb38u; fn_00094228(cpu);
    }
L_000efb38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efb3c:;
    {
        cpu->r[14] = 0x000efb40u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000efb40:;
    {
        goto L_000ef7b8;
    }
L_000efb44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000efb48:;
    {
        cpu->r[14] = 0x000efb4cu; fn_000ee4f4(cpu);
    }
L_000efb4c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000efb50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000efb54:;
    {
        wr8(cpu->r[3] + cpu->r[6], cpu->r[2]);
    }
L_000efb58:;
    {
        goto L_000ef7a8;
    }
L_000efb5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000efb60:;
    {
        cpu->r[14] = 0x000efb64u; fn_000967b0(cpu);
    }
L_000efb64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000efb68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc2c;
        }
    }
L_000efb6c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000efb70:;
    {
        cpu->r[14] = 0x000efb74u; fn_000a2898(cpu);
    }
L_000efb74:;
    {
        goto L_000ef7c4;
    }
L_000efb78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000efb7c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000efb80:;
    {
        cpu->r[14] = 0x000efb84u; fn_000a2898(cpu);
    }
L_000efb84:;
    {
        goto L_000ef7c4;
    }
L_000efb88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efb8c:;
    {
        cpu->r[14] = 0x000efb90u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000efb90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000efb94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efa30;
        }
    }
L_000efb98:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000efb9c:;
    {
        cpu->r[14] = 0x000efba0u; fn_00094228(cpu);
    }
L_000efba0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000efba4:;
    {
        cpu->r[14] = 0x000efba8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000efba8:;
    {
        goto L_000efa30;
    }
L_000efbac:;
    {
        cpu->r[3] = rd32(0x000efbb4u + + 0x840u);
    }
L_000efbb0:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000efbb4:;
    {
        cpu->r[11] = rd32(0x000efbbcu + + 0x83cu);
    }
L_000efbb8:;
    {
        cpu->r[9] = 0x00001bc0u;
    }
L_000efbbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000efbc4u, cpu->r[3], 0, 0);
    }
L_000efbc0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000efbc4:;
    {
        cpu->r[3] = rd32(0x000efbccu + + 0x830u);
    }
L_000efbc8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000efbd0u, cpu->r[11], 0, 0);
    }
L_000efbcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000efbd4u, cpu->r[3], 0, 0);
    }
L_000efbd0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000efbd4:;
    {
        cpu->r[3] = rd32(0x000efbdcu + + 0x824u);
    }
L_000efbd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000efbe0u, cpu->r[3], 0, 0);
    }
L_000efbdc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000efbe0:;
    {
        goto L_000efc00;
    }
L_000efbe4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000efbe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0044;
        }
    }
L_000efbec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000efbf0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000efbf4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_000efbf8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000efbfc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000efa0c;
        }
    }
L_000efc00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000efc04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000efc08:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000efc0c:;
    {
        cpu->r[14] = 0x000efc10u; fn_000ec594(cpu);
    }
L_000efc10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000efc14:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000efc18:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000efc1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efbe4;
        }
    }
L_000efc20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000efc24:;
    {
        cpu->r[14] = 0x000efc28u; fn_000ec4f0(cpu);
    }
L_000efc28:;
    {
        goto L_000efbec;
    }
L_000efc2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efc30:;
    {
        cpu->r[2] = 0x00001cacu;
    }
L_000efc34:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000efc38:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000efc3c:;
    {
        goto L_000ef59c;
    }
L_000efc40:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_000efc44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efc48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efc90;
        }
    }
L_000efc4c:;
    {
        cpu->r[14] = 0x000efc50u; fn_000979a0(cpu);
    }
L_000efc50:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_000efc54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efc58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efc5c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000efc60:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000efc64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000efc68:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000efc6c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000efc70:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000efc74:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efc78:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000efc7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efc80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efc84:;
    {
        cpu->r[14] = 0x000efc88u; fn_000eafe8(cpu);
    }
L_000efc88:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000efc8c:;
    {
        cpu->r[14] = 0x000efc90u; fn_0015c728(cpu);
    }
L_000efc90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_000efc94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000efc98:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000efc9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ef8fc;
        }
    }
L_000efca0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000efca4:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000efca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000efcac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efcb0:;
    {
        cpu->r[14] = 0x000efcb4u; fn_000ec44c(cpu);
    }
L_000efcb4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000efcb8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000efcbc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000efcc0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000efcc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f00c8;
        }
    }
L_000efcc8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000efccc:;
    {
        cpu->r[14] = 0x000efcd0u; fn_00093fd8(cpu);
    }
L_000efcd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000efcd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f00ec;
        }
    }
L_000efcd8:;
    {
        cpu->r[14] = 0x000efcdcu; fn_000979a0(cpu);
    }
L_000efcdc:;
    {
        cpu->r[14] = 0x000efce0u; fn_00093fd8(cpu);
    }
L_000efce0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000efce4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f02dc;
        }
    }
L_000efce8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000efcec:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[3]);
    }
L_000efcf0:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[3]);
    }
L_000efcf4:;
    {
        goto L_000ef760;
    }
L_000efcf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efcfc:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efd00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efd04:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efd08:;
    {
        cpu->r[14] = 0x000efd0cu; fn_0018b5d8(cpu);
    }
L_000efd0c:;
    {
        cpu->r[1] = 0x00010000u;
    }
L_000efd10:;
    {
        cpu->r[14] = 0x000efd14u; fn_0018b8fc(cpu);
    }
L_000efd14:;
    {
        goto L_000efc90;
    }
L_000efd18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efd1c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efd20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efd24:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efd28:;
    {
        cpu->r[14] = 0x000efd2cu; fn_0018b5d8(cpu);
    }
L_000efd2c:;
    {
        cpu->r[1] = 0x00100000u;
    }
L_000efd30:;
    {
        cpu->r[14] = 0x000efd34u; fn_0018b8fc(cpu);
    }
L_000efd34:;
    {
        goto L_000efc90;
    }
L_000efd38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efd3c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efd40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efd44:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efd48:;
    {
        cpu->r[14] = 0x000efd4cu; fn_0018b5d8(cpu);
    }
L_000efd4c:;
    {
        cpu->r[1] = 0x00080000u;
    }
L_000efd50:;
    {
        cpu->r[14] = 0x000efd54u; fn_0018b8fc(cpu);
    }
L_000efd54:;
    {
        goto L_000efc90;
    }
L_000efd58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efd5c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efd60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efd64:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efd68:;
    {
        cpu->r[14] = 0x000efd6cu; fn_0018b5d8(cpu);
    }
L_000efd6c:;
    {
        cpu->r[1] = 0x00040000u;
    }
L_000efd70:;
    {
        cpu->r[14] = 0x000efd74u; fn_0018b8fc(cpu);
    }
L_000efd74:;
    {
        goto L_000efc90;
    }
L_000efd78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efd7c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efd80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efd84:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efd88:;
    {
        cpu->r[14] = 0x000efd8cu; fn_0018b5d8(cpu);
    }
L_000efd8c:;
    {
        cpu->r[1] = 0x00020000u;
    }
L_000efd90:;
    {
        cpu->r[14] = 0x000efd94u; fn_0018b8fc(cpu);
    }
L_000efd94:;
    {
        goto L_000efc90;
    }
L_000efd98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efd9c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efda0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efda4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efda8:;
    {
        cpu->r[14] = 0x000efdacu; fn_0018b5d8(cpu);
    }
L_000efdac:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_000efdb0:;
    {
        cpu->r[14] = 0x000efdb4u; fn_0018b8fc(cpu);
    }
L_000efdb4:;
    {
        goto L_000efc90;
    }
L_000efdb8:;
    {
        cpu->r[14] = 0x000efdbcu; fn_000979a0(cpu);
    }
L_000efdbc:;
    {
        cpu->r[14] = 0x000efdc0u; fn_00093fd8(cpu);
    }
L_000efdc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000efdc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000efdc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efdcc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000efdd0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000efdd4:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efdd8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efddc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_000efde0:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000efde4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efde8:;
    {
        cpu->r[14] = 0x000efdecu; fn_000eafe8(cpu);
    }
L_000efdec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000efdf0:;
    {
        cpu->r[14] = 0x000efdf4u; fn_0015c728(cpu);
    }
L_000efdf4:;
    {
        goto L_000efc90;
    }
L_000efdf8:;
    {
        cpu->r[14] = 0x000efdfcu; fn_000979a0(cpu);
    }
L_000efdfc:;
    {
        cpu->r[14] = 0x000efe00u; fn_00093fd8(cpu);
    }
L_000efe00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000efe04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efe08:;
    {
        cpu->r[14] = 0x000efe0cu; fn_000eafe8(cpu);
    }
L_000efe0c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000efe10:;
    {
        cpu->r[14] = 0x000efe14u; fn_0015c728(cpu);
    }
L_000efe14:;
    {
        goto L_000efc90;
    }
L_000efe18:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000efe1c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000efe20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000efe24:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000efe28:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000efe2c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000efe30:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efe34:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000efe38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000efe3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efe40:;
    {
        cpu->r[14] = 0x000efe44u; fn_000eafe8(cpu);
    }
L_000efe44:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000efe48:;
    {
        cpu->r[14] = 0x000efe4cu; fn_0015c728(cpu);
    }
L_000efe4c:;
    {
        goto L_000efc90;
    }
L_000efe50:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000efe54:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000efe58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000efe5c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000efe60:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000efe64:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000efe68:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efe6c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000efe70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000efe74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000efc90;
        }
    }
L_000efe78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efe7c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000efe80:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efe84:;
    {
        cpu->r[14] = 0x000efe88u; fn_0018b5d8(cpu);
    }
L_000efe88:;
    {
        cpu->r[1] = 0x00004000u;
    }
L_000efe8c:;
    {
        cpu->r[14] = 0x000efe90u; fn_0018b8fc(cpu);
    }
L_000efe90:;
    {
        goto L_000efc90;
    }
L_000efe94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000efe98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000efe9c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xd8u);
    }
L_000efea0:;
    {
        cpu->r[14] = 0x000efea4u; fn_000ec594(cpu);
    }
L_000efea4:;
    {
        goto L_000ef8ac;
    }
L_000efea8:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_000efeac:;
    {
        cpu->r[14] = 0x000efeb0u; fn_0018ba6c(cpu);
    }
L_000efeb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000efeb4:;
    {
        cpu->r[14] = 0x000efeb8u; fn_000a7570(cpu);
    }
L_000efeb8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000efebc:;
    {
        cpu->r[0] = 0x00000427u;
    }
L_000efec0:;
    {
        cpu->r[14] = 0x000efec4u; fn_000aeb58(cpu);
    }
L_000efec4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000efec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_000efecc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000efed0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000efed4:;
    {
        cpu->r[14] = 0x000efed8u; fn_000a7bb0(cpu);
    }
L_000efed8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000efedc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000efee0:;
    {
        cpu->r[14] = 0x000efee4u; fn_000f361c(cpu);
    }
L_000efee4:;
    {
        goto L_000ef7c4;
    }
L_000efee8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000efeec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eff18;
        }
    }
L_000efef0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000efef4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000efef8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000efefc:;
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
L_000eff00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eff04:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000eff08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eff0c:;
    {
        cpu->r[14] = 0x000eff10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000eff10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000eff14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000eff18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000eff1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000eff20:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_000eff24:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000f0024;
        case 1: goto L_000efc90;
        case 2: goto L_000efc90;
        case 3: goto L_000efc90;
        case 4: goto L_000efc90;
        case 5: goto L_000efc90;
        case 6: goto L_000efc90;
        case 7: goto L_000f0004;
        case 8: goto L_000efc90;
        case 9: goto L_000effe4;
        case 10: goto L_000effc4;
        case 11: goto L_000effa4;
        case 12: goto L_000eff84;
        case 13: goto L_000eff64;
        default: guest_unimplemented(cpu, 0x000eff24u); return; }
        }
    }
L_000eff28:;
    {
        goto L_000efc90;
    }
L_000eff64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eff68:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000eff6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eff70:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eff74:;
    {
        cpu->r[14] = 0x000eff78u; fn_0018b5d8(cpu);
    }
L_000eff78:;
    {
        cpu->r[1] = 0x00010000u;
    }
L_000eff7c:;
    {
        cpu->r[14] = 0x000eff80u; fn_0018b950(cpu);
    }
L_000eff80:;
    {
        goto L_000efc90;
    }
L_000eff84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eff88:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000eff8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eff90:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eff94:;
    {
        cpu->r[14] = 0x000eff98u; fn_0018b5d8(cpu);
    }
L_000eff98:;
    {
        cpu->r[1] = 0x00100000u;
    }
L_000eff9c:;
    {
        cpu->r[14] = 0x000effa0u; fn_0018b950(cpu);
    }
L_000effa0:;
    {
        goto L_000efc90;
    }
L_000effa4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000effa8:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000effac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000effb0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000effb4:;
    {
        cpu->r[14] = 0x000effb8u; fn_0018b5d8(cpu);
    }
L_000effb8:;
    {
        cpu->r[1] = 0x00080000u;
    }
L_000effbc:;
    {
        cpu->r[14] = 0x000effc0u; fn_0018b950(cpu);
    }
L_000effc0:;
    {
        goto L_000efc90;
    }
L_000effc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000effc8:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000effcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000effd0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000effd4:;
    {
        cpu->r[14] = 0x000effd8u; fn_0018b5d8(cpu);
    }
L_000effd8:;
    {
        cpu->r[1] = 0x00040000u;
    }
L_000effdc:;
    {
        cpu->r[14] = 0x000effe0u; fn_0018b950(cpu);
    }
L_000effe0:;
    {
        goto L_000efc90;
    }
L_000effe4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000effe8:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000effec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000efff0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000efff4:;
    {
        cpu->r[14] = 0x000efff8u; fn_0018b5d8(cpu);
    }
L_000efff8:;
    {
        cpu->r[1] = 0x00020000u;
    }
L_000efffc:;
    {
        cpu->r[14] = 0x000f0000u; fn_0018b950(cpu);
    }
L_000f0000:;
    {
        goto L_000efc90;
    }
L_000f0004:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0008:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000f000c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0010:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f0014:;
    {
        cpu->r[14] = 0x000f0018u; fn_0018b5d8(cpu);
    }
L_000f0018:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_000f001c:;
    {
        cpu->r[14] = 0x000f0020u; fn_0018b950(cpu);
    }
L_000f0020:;
    {
        goto L_000efc90;
    }
L_000f0024:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0028:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000f002c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0030:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f0034:;
    {
        cpu->r[14] = 0x000f0038u; fn_0018b5d8(cpu);
    }
L_000f0038:;
    {
        cpu->r[1] = 0x00004000u;
    }
L_000f003c:;
    {
        cpu->r[14] = 0x000f0040u; fn_0018b950(cpu);
    }
L_000f0040:;
    {
        goto L_000efc90;
    }
L_000f0044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000f0048:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000f004c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f0074;
        }
    }
L_000f0050:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f0054:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f0058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f005c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f0060:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f0064:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f0068:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000f006c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f0070:;
    {
        cpu->r[14] = 0x000f0074u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f0074:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000f0078:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f007c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_000f0080:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x34u);
    }
L_000f0084:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f0088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f02c0;
        }
    }
L_000f008c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0090:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000f0094:;
    {
        cpu->r[14] = 0x000f0098u; fn_0018b5d8(cpu);
    }
L_000f0098:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_000f009c:;
    {
        cpu->r[14] = 0x000f00a0u; fn_0018b8fc(cpu);
    }
L_000f00a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f00a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f00a8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000f00ac:;
    {
        cpu->r[14] = 0x000f00b0u; fn_000ec4f0(cpu);
    }
L_000f00b0:;
    {
        goto L_000efbec;
    }
L_000f00b4:;
    {
        cpu->r[3] = 0x00001c88u;
    }
L_000f00b8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000f00bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000f00c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ef76c;
        }
    }
L_000f00c4:;
    {
        goto L_000efac0;
    }
L_000f00c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f00cc:;
    {
        cpu->r[14] = 0x000f00d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f00d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f00d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000efcc8;
        }
    }
L_000f00d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000f00dc:;
    {
        cpu->r[14] = 0x000f00e0u; fn_00094228(cpu);
    }
L_000f00e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f00e4:;
    {
        cpu->r[14] = 0x000f00e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f00e8:;
    {
        goto L_000efcc8;
    }
L_000f00ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000f00f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000f00f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000f00f8:;
    {
        cpu->r[14] = 0x000f00fcu; fn_000924d0(cpu);
    }
L_000f00fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000f0100:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000f0104:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c8u, 0, 0);
    }
L_000f0108:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f010c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000f0110:;
    {
        cpu->r[14] = 0x000f0114u; fn_000a648c(cpu);
    }
L_000f0114:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f0118:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000f011c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_000f0120:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000f0124:;
    {
        cpu->r[14] = 0x000f0128u; fn_000a648c(cpu);
    }
L_000f0128:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f012c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000f0130:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f0134:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000168u, 0, 0);
    }
L_000f0138:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000f013c:;
    {
        cpu->r[14] = 0x000f0140u; fn_000a648c(cpu);
    }
L_000f0140:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f0144:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000f0148:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000f014c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f0u, 0, 0);
    }
L_000f0150:;
    {
        cpu->r[14] = 0x000f0154u; fn_000a648c(cpu);
    }
L_000f0154:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f0158:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000f015c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_000f0160:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000140u, 0, 0);
    }
L_000f0164:;
    {
        cpu->r[14] = 0x000f0168u; fn_000a648c(cpu);
    }
L_000f0168:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f016c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000f0170:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000190u, 0, 0);
    }
L_000f0174:;
    {
        cpu->r[14] = 0x000f0178u; fn_000a648c(cpu);
    }
L_000f0178:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f017c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0180:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e0u);
    }
L_000f0184:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000f0188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000f018c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000f01cc;
        case 1: goto L_000f01a4;
        case 2: goto L_000f01cc;
        case 3: goto L_000f01a4;
        default: guest_unimplemented(cpu, 0x000f018cu); return; }
        }
    }
L_000f0190:;
    {
        goto L_000efce8;
    }
L_000f01a4:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000f01a8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000f01ac:;
    {
        vfp_vmla(cpu, 15, 17, 17);
    }
L_000f01b0:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000f01b4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000f01b8:;
    {
        cpu->r[14] = 0x000f01bcu; imp_atan2f(cpu); /* atan2f */
    }
L_000f01bc:;
    {
        cpu->r[3] = 0x00001c5cu;
    }
L_000f01c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000f01c4:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_000f01c8:;
    {
        goto L_000efce8;
    }
L_000f01cc:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000f01d0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000f01d4:;
    {
        vfp_vmla(cpu, 15, 16, 16);
    }
L_000f01d8:;
    {
        goto L_000f01b0;
    }
L_000f01dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f01e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f01e4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000f01e8:;
    {
        cpu->r[14] = 0x000f01ecu; fn_000ec594(cpu);
    }
L_000f01ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f01f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f01f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xd8u);
    }
L_000f01f8:;
    {
        cpu->r[14] = 0x000f01fcu; fn_000ec594(cpu);
    }
L_000f01fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f0200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0204:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_000f0208:;
    {
        cpu->r[14] = 0x000f020cu; fn_000ec594(cpu);
    }
L_000f020c:;
    {
        goto L_000ef8ac;
    }
L_000f0210:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f0214:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f0218:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000f021c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f0220:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f0224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ef814;
        }
    }
L_000f0228:;
    {
        cpu->r[14] = 0x000f022cu; fn_000979a0(cpu);
    }
L_000f022c:;
    {
        cpu->r[14] = 0x000f0230u; fn_00093fd8(cpu);
    }
L_000f0230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000f0234:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_000f02a4;
        case 1: goto L_000f0278;
        case 2: goto L_000f025c;
        case 3: goto L_000f024c;
        default: guest_unimplemented(cpu, 0x000f0234u); return; }
        }
    }
L_000f0238:;
    {
        goto L_000ef814;
    }
L_000f024c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0250:;
    {
        cpu->r[1] = 0x00000c61u;
    }
L_000f0254:;
    {
        cpu->r[14] = 0x000f0258u; fn_000a30d4(cpu);
    }
L_000f0258:;
    {
        goto L_000ef814;
    }
L_000f025c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0260:;
    {
        cpu->r[1] = 0x00000c5fu;
    }
L_000f0264:;
    {
        cpu->r[14] = 0x000f0268u; fn_000a30d4(cpu);
    }
L_000f0268:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f026c:;
    {
        cpu->r[1] = 0x00000c5du;
    }
L_000f0270:;
    {
        cpu->r[14] = 0x000f0274u; fn_000a30d4(cpu);
    }
L_000f0274:;
    {
        goto L_000ef814;
    }
L_000f0278:;
    {
        cpu->r[14] = 0x000f027cu; fn_000979a0(cpu);
    }
L_000f027c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_000f0280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f0284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f03a0;
        }
    }
L_000f0288:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f028c:;
    {
        cpu->r[1] = 0x00000c57u;
    }
L_000f0290:;
    {
        cpu->r[14] = 0x000f0294u; fn_000a30d4(cpu);
    }
L_000f0294:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0298:;
    {
        cpu->r[1] = 0x00000c55u;
    }
L_000f029c:;
    {
        cpu->r[14] = 0x000f02a0u; fn_000a30d4(cpu);
    }
L_000f02a0:;
    {
        goto L_000ef814;
    }
L_000f02a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f02a8:;
    {
        cpu->r[1] = 0x00000c5bu;
    }
L_000f02ac:;
    {
        cpu->r[14] = 0x000f02b0u; fn_000a30d4(cpu);
    }
L_000f02b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f02b4:;
    {
        cpu->r[1] = 0x00000c59u;
    }
L_000f02b8:;
    {
        cpu->r[14] = 0x000f02bcu; fn_000a30d4(cpu);
    }
L_000f02bc:;
    {
        goto L_000ef814;
    }
L_000f02c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f02c4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000f02c8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000f02cc:;
    {
        cpu->r[14] = 0x000f02d0u; fn_0018b5d8(cpu);
    }
L_000f02d0:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_000f02d4:;
    {
        cpu->r[14] = 0x000f02d8u; fn_0018b950(cpu);
    }
L_000f02d8:;
    {
        goto L_000f00a0;
    }
L_000f02dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000f02e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f02e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000f02e8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[10]);
    }
L_000f02ec:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_000f02f0:;
    {
        cpu->r[14] = 0x000f02f4u; fn_000eab7c(cpu);
    }
L_000f02f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f02f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0380;
        }
    }
L_000f02fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb8u);
    }
L_000f0300:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0304:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f0308:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000f030c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_000f0310:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000f0314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_000f0318:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f031c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000f0320:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_000f0324:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000f0328:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f032c:;
    {
        cpu->r[14] = 0x000f0330u; fn_000ce500(cpu);
    }
L_000f0330:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000f0334:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[3]);
    }
L_000f0338:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f033c:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_000f0340:;
    {
        goto L_000efce8;
    }
L_000f0344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f0348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f034c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x60u);
    }
L_000f0350:;
    {
        cpu->r[14] = 0x000f0354u; fn_000ec4f0(cpu);
    }
L_000f0354:;
    {
        goto L_000ef87c;
    }
L_000f0358:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f035c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0360:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000f0364:;
    {
        cpu->r[14] = 0x000f0368u; fn_000ec4f0(cpu);
    }
L_000f0368:;
    {
        goto L_000ef86c;
    }
L_000f036c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000f0370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0374:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000f0378:;
    {
        cpu->r[14] = 0x000f037cu; fn_000ec594(cpu);
    }
L_000f037c:;
    {
        goto L_000ef8ac;
    }
L_000f0380:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000f0384:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0388:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_000f038c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f0390:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[3]);
    }
L_000f0394:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x34u);
    }
L_000f0398:;
    {
        cpu->r[14] = 0x000f039cu; fn_000ce500(cpu);
    }
L_000f039c:;
    {
        goto L_000efce8;
    }
L_000f03a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f03a4:;
    {
        cpu->r[1] = 0x00000c53u;
    }
L_000f03a8:;
    {
        cpu->r[14] = 0x000f03acu; fn_000a30d4(cpu);
    }
L_000f03ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f03b0:;
    {
        cpu->r[1] = 0x00000c51u;
    }
L_000f03b4:;
    {
        cpu->r[14] = 0x000f03b8u; fn_000a30d4(cpu);
    }
L_000f03b8:;
    {
        goto L_000ef814;
    }
}

/* init_array_4 @ 000f0404 (arm) */
void fn_000f0404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0404:;
    {
        cpu->r[3] = rd32(0x000f040cu + + 0x20u);
    }
L_000f0408:;
    {
        cpu->r[1] = rd32(0x000f0410u + + 0x20u);
    }
L_000f040c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0414u, cpu->r[3], 0, 0);
    }
L_000f0410:;
    {
        cpu->r[2] = rd32(0x000f0418u + + 0x1cu);
    }
L_000f0414:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f0418:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f0420u, cpu->r[2], 0, 0);
    }
L_000f041c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0420:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000f0424:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000f0428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9GS_GLLogoD1Ev @ 000f0438 (arm) */
void fn_000f0438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0438:;
    {
        cpu->r[3] = rd32(0x000f0440u + + 0x24u);
    }
L_000f043c:;
    {
        cpu->r[2] = rd32(0x000f0444u + + 0x24u);
    }
L_000f0440:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0448u, cpu->r[3], 0, 0);
    }
L_000f0444:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f0448:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f044c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0450:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f0454:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f0458:;
    {
        cpu->r[14] = 0x000f045cu; fn_000ec084(cpu);
    }
L_000f045c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0460:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0464u)) return;
    }
}

/* _ZN9GS_GLLogo6UpdateEv @ 000f046c (arm) */
void fn_000f046c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f046c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f0470:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x7cu);
    }
L_000f0474:;
    {
        cpu->r[4] = rd32(0x000f047cu + + 0x14cu);
    }
L_000f0478:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f047c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f0480:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f0488u, cpu->r[4], 0, 0);
    }
L_000f0484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f050c;
        }
    }
L_000f0488:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x78u);
    }
L_000f048c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000f0490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0568;
        }
    }
L_000f0494:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000064u, 1, 1);
    }
L_000f0498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f0518;
        }
    }
L_000f049c:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000f04a0:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[6]);
    }
L_000f04a4:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[4]);
    }
L_000f04a8:;
    {
        cpu->r[14] = 0x000f04acu; fn_00097ad0(cpu);
    }
L_000f04ac:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_000f04b0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f04b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f04b8:;
    {
        cpu->r[14] = 0x000f04bcu; fn_00096a08(cpu);
    }
L_000f04bc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000f04c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f04c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f04c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f04cc:;
    {
        cpu->r[14] = 0x000f04d0u; fn_0018aa58(cpu);
    }
L_000f04d0:;
    {
        cpu->r[14] = 0x000f04d4u; fn_00097ad0(cpu);
    }
L_000f04d4:;
    {
        cpu->r[1] = 0x00000029u;
    }
L_000f04d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f04dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f04e0:;
    {
        cpu->r[14] = 0x000f04e4u; fn_00096a08(cpu);
    }
L_000f04e4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000f04e8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f04ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f04f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f04f4:;
    {
        cpu->r[14] = 0x000f04f8u; fn_0018aa58(cpu);
    }
L_000f04f8:;
    {
        cpu->r[14] = 0x000f04fcu; fn_00097ad0(cpu);
    }
L_000f04fc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f0500:;
    {
        cpu->r[14] = 0x000f0504u; fn_0018b5c8(cpu);
    }
L_000f0504:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f0508:;
    {
        goto L_000f0518;
    }
L_000f050c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000f0510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0524;
        }
    }
L_000f0514:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f0518:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000f051c:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[7]);
    }
L_000f0520:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0524u)) return;
    }
L_000f0524:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_000f0528:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f052c:;
    {
        cpu->r[14] = 0x000f0530u; fn_0018ba6c(cpu);
    }
L_000f0530:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0534:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_000f0538:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f053c:;
    {
        cpu->r[14] = 0x000f0540u; imp_memset(cpu); /* memset */
    }
L_000f0540:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0544:;
    {
        cpu->r[14] = 0x000f0548u; fn_000eaca4(cpu);
    }
L_000f0548:;
    {
        cpu->r[3] = rd32(0x000f0550u + + 0x7cu);
    }
L_000f054c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f0550:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f0554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f055c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000f0560:;
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
L_000f0564:;
    {
        return fn_000f36dc(cpu);
    }
L_000f0568:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f056c:;
    {
        cpu->r[14] = 0x000f0570u; fn_00099720(cpu);
    }
L_000f0570:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0574:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0578u)) return;
        }
    }
L_000f0578:;
    {
        cpu->r[14] = 0x000f057cu; fn_00097ad0(cpu);
    }
L_000f057c:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000f0580:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f0584:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f0588:;
    {
        cpu->r[14] = 0x000f058cu; fn_0018aa58(cpu);
    }
L_000f058c:;
    {
        cpu->r[14] = 0x000f0590u; fn_00097ad0(cpu);
    }
L_000f0590:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000f0594:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f0598:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f059c:;
    {
        cpu->r[14] = 0x000f05a0u; fn_0018aa58(cpu);
    }
L_000f05a0:;
    {
        cpu->r[14] = 0x000f05a4u; fn_00097ad0(cpu);
    }
L_000f05a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f05a8:;
    {
        cpu->r[14] = 0x000f05acu; fn_0018b5c8(cpu);
    }
L_000f05ac:;
    {
        cpu->r[3] = rd32(0x000f05b4u + + 0x1cu);
    }
L_000f05b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f05b4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f05b8:;
    {
        cpu->r[14] = 0x000f05bcu; fn_000a45a0(cpu);
    }
L_000f05bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f05c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000f0514;
        }
    }
L_000f05c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f05c8u)) return;
    }
}

/* _ZN9GS_GLLogoD0Ev @ 000f05d4 (arm) */
void fn_000f05d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f05d4:;
    {
        cpu->r[3] = rd32(0x000f05dcu + + 0x2cu);
    }
L_000f05d8:;
    {
        cpu->r[2] = rd32(0x000f05e0u + + 0x2cu);
    }
L_000f05dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f05e4u, cpu->r[3], 0, 0);
    }
L_000f05e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f05e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f05e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f05ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f05f0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f05f4:;
    {
        cpu->r[14] = 0x000f05f8u; fn_000ec084(cpu);
    }
L_000f05f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f05fc:;
    {
        cpu->r[14] = 0x000f0600u; fn_0018ba20(cpu);
    }
L_000f0600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0604:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0608u)) return;
    }
}

/* _ZN9GS_GLLogo6RenderEv @ 000f0610 (arm) */
void fn_000f0610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0610:;
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
L_000f0614:;
    {
        cpu->r[4] = rd32(0x000f061cu + + 0xe4u);
    }
L_000f0618:;
    {
        cpu->r[3] = rd32(0x000f0620u + + 0xe4u);
    }
L_000f061c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f0620:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f0628u, cpu->r[4], 0, 0);
    }
L_000f0624:;
    {
        cpu->r[6] = rd32(0x000f062cu + + 0xdcu);
    }
L_000f0628:;
    {
        cpu->r[1] = 0xff000000u;
    }
L_000f062c:;
    {
        cpu->r[5] = rd32(0x000f0634u + + 0xd8u);
    }
L_000f0630:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0634:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000f0638:;
    {
        cpu->r[14] = 0x000f063cu; fn_0012dd58(cpu);
    }
L_000f063c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f0644:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0648:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000f064c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f0650:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000f0654:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0658:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f065c:;
    {
        cpu->r[14] = 0x000f0660u; fn_00130908(cpu);
    }
L_000f0660:;
    {
        cpu->r[3] = rd32(0x000f0668u + + 0xa8u);
    }
L_000f0664:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0668:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f066c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f0670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f06bc;
        }
    }
L_000f0674:;
    {
        cpu->r[7] = rd32(0x000f067cu + + 0x98u);
    }
L_000f0678:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f067c:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000f0680:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0684:;
    {
        cpu->r[14] = 0x000f0688u; fn_0018aa44(cpu);
    }
L_000f0688:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f068c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f0690:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f0694:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f0698:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000f069c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f06a0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f06a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f06a8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000f06ac:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000f06b0:;
    {
        cpu->r[14] = 0x000f06b4u; fn_000ad8a0(cpu);
    }
L_000f06b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f06b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f06bcu)) return;
    }
L_000f06bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f06c0:;
    {
        cpu->r[14] = 0x000f06c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f06c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f06c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0674;
        }
    }
L_000f06cc:;
    {
        cpu->r[7] = rd32(0x000f06d4u + + 0x40u);
    }
L_000f06d0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f06d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f06d8:;
    {
        cpu->r[14] = 0x000f06dcu; fn_0018aa20(cpu);
    }
L_000f06dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f06e0:;
    {
        cpu->r[14] = 0x000f06e4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f06e4:;
    {
        cpu->r[3] = rd32(0x000f06ecu + + 0x2cu);
    }
L_000f06e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f06ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f06f0:;
    {
        cpu->r[3] = rd32(0x000f06f8u + + 0x24u);
    }
L_000f06f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f06f8:;
    {
        cpu->r[14] = 0x000f06fcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f06fc:;
    {
        goto L_000f0678;
    }
}

/* _ZN9GS_GLLogo7ReleaseEv @ 000f0720 (arm) */
void fn_000f0720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0720:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f0724:;
    {
        cpu->r[4] = rd32(0x000f072cu + + 0x74u);
    }
L_000f0728:;
    {
        cpu->r[3] = rd32(0x000f0730u + + 0x74u);
    }
L_000f072c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f0734u, cpu->r[4], 0, 0);
    }
L_000f0730:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0734:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f0738:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f073c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f075c;
        }
    }
L_000f0740:;
    {
        cpu->r[5] = rd32(0x000f0748u + + 0x60u);
    }
L_000f0744:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0748:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f074c:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000f0750:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000f0754:;
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
L_000f0758:;
    {
        return fn_0018aa58(cpu);
    }
L_000f075c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f0760:;
    {
        cpu->r[14] = 0x000f0764u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f0764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0740;
        }
    }
L_000f076c:;
    {
        cpu->r[5] = rd32(0x000f0774u + + 0x34u);
    }
L_000f0770:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f0774:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0778:;
    {
        cpu->r[14] = 0x000f077cu; fn_0018aa20(cpu);
    }
L_000f077c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f0780:;
    {
        cpu->r[14] = 0x000f0784u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0784:;
    {
        cpu->r[3] = rd32(0x000f078cu + + 0x20u);
    }
L_000f0788:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f078c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0790:;
    {
        cpu->r[3] = rd32(0x000f0798u + + 0x18u);
    }
L_000f0794:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0798:;
    {
        cpu->r[14] = 0x000f079cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f079c:;
    {
        goto L_000f0744;
    }
}

/* _ZN9GS_GLLogo6CreateEv @ 000f07b4 (arm) */
void fn_000f07b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f07b4:;
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
L_000f07b8:;
    {
        cpu->r[4] = rd32(0x000f07c0u + + 0xf0u);
    }
L_000f07bc:;
    {
        cpu->r[7] = rd32(0x000f07c4u + + 0xf0u);
    }
L_000f07c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f07c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f07ccu, cpu->r[4], 0, 0);
    }
L_000f07c8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[3]);
    }
L_000f07cc:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_000f07d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f07d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f07d8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f07dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f07e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0830;
        }
    }
L_000f07e4:;
    {
        cpu->r[6] = rd32(0x000f07ecu + + 0xccu);
    }
L_000f07e8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f07ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f07f0:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000f07f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f07f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f07fc:;
    {
        cpu->r[14] = 0x000f0800u; fn_0018aa58(cpu);
    }
L_000f0800:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f0804:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f0808:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f080c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0874;
        }
    }
L_000f0810:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0814:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f0818:;
    {
        cpu->r[14] = 0x000f081cu; fn_0018b5c8(cpu);
    }
L_000f081c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f0820:;
    {
        cpu->r[2] = 0x000001f4u;
    }
L_000f0824:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f0828:;
    {
        wr32(cpu->r[3] + + 0x4c4u, cpu->r[2]);
    }
L_000f082c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0830u)) return;
    }
L_000f0830:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0834:;
    {
        cpu->r[14] = 0x000f0838u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f0838:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f083c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f07e4;
        }
    }
L_000f0840:;
    {
        cpu->r[6] = rd32(0x000f0848u + + 0x70u);
    }
L_000f0844:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0848:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f084c:;
    {
        cpu->r[14] = 0x000f0850u; fn_0018aa20(cpu);
    }
L_000f0850:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0854:;
    {
        cpu->r[14] = 0x000f0858u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0858:;
    {
        cpu->r[3] = rd32(0x000f0860u + + 0x5cu);
    }
L_000f085c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f0860:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0864:;
    {
        cpu->r[3] = rd32(0x000f086cu + + 0x54u);
    }
L_000f0868:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f086c:;
    {
        cpu->r[14] = 0x000f0870u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f0870:;
    {
        goto L_000f07e8;
    }
L_000f0874:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0878:;
    {
        cpu->r[14] = 0x000f087cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f087c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0810;
        }
    }
L_000f0884:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0888:;
    {
        cpu->r[14] = 0x000f088cu; fn_0018aa20(cpu);
    }
L_000f088c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0890:;
    {
        cpu->r[14] = 0x000f0894u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0894:;
    {
        cpu->r[3] = rd32(0x000f089cu + + 0x20u);
    }
L_000f0898:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f089c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f08a0:;
    {
        cpu->r[3] = rd32(0x000f08a8u + + 0x18u);
    }
L_000f08a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f08a8:;
    {
        cpu->r[14] = 0x000f08acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f08ac:;
    {
        goto L_000f0810;
    }
}

/* _ZN10GS_SDError7ReleaseEv @ 000f08c4 (arm) */
void fn_000f08c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f08c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_5 @ 000f08c8 (arm) */
void fn_000f08c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f08c8:;
    {
        cpu->r[3] = rd32(0x000f08d0u + + 0x20u);
    }
L_000f08cc:;
    {
        cpu->r[1] = rd32(0x000f08d4u + + 0x20u);
    }
L_000f08d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f08d8u, cpu->r[3], 0, 0);
    }
L_000f08d4:;
    {
        cpu->r[2] = rd32(0x000f08dcu + + 0x1cu);
    }
L_000f08d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f08dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f08e4u, cpu->r[2], 0, 0);
    }
L_000f08e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f08e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000f08e8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000f08ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10GS_SDErrorD1Ev @ 000f08fc (arm) */
void fn_000f08fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f08fc:;
    {
        cpu->r[3] = rd32(0x000f0904u + + 0x24u);
    }
L_000f0900:;
    {
        cpu->r[2] = rd32(0x000f0908u + + 0x24u);
    }
L_000f0904:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f090cu, cpu->r[3], 0, 0);
    }
L_000f0908:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f090c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f0910:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f0918:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f091c:;
    {
        cpu->r[14] = 0x000f0920u; fn_000ec084(cpu);
    }
L_000f0920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0924:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0928u)) return;
    }
}

/* _ZN10GS_SDError6UpdateEv @ 000f0930 (arm) */
void fn_000f0930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0930:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f0934:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_000f0938:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f093c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f0940:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f0944:;
    {
        return fn_00097a04(cpu);
    }
}

/* _ZN10GS_SDErrorD0Ev @ 000f0948 (arm) */
void fn_000f0948(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0948:;
    {
        cpu->r[3] = rd32(0x000f0950u + + 0x2cu);
    }
L_000f094c:;
    {
        cpu->r[2] = rd32(0x000f0954u + + 0x2cu);
    }
L_000f0950:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0958u, cpu->r[3], 0, 0);
    }
L_000f0954:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f0958:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f095c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f0964:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f0968:;
    {
        cpu->r[14] = 0x000f096cu; fn_000ec084(cpu);
    }
L_000f096c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0970:;
    {
        cpu->r[14] = 0x000f0974u; fn_0018ba20(cpu);
    }
L_000f0974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0978:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f097cu)) return;
    }
}

/* _ZN10GS_SDError6CreateEv @ 000f0984 (arm) */
void fn_000f0984(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0984:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f0988:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f098c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f0990:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f0994:;
    {
        cpu->r[14] = 0x000f0998u; fn_00096a08(cpu);
    }
L_000f0998:;
    {
        cpu->r[4] = rd32(0x000f09a0u + + 0xc0u);
    }
L_000f099c:;
    {
        cpu->r[5] = rd32(0x000f09a4u + + 0xc0u);
    }
L_000f09a0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f09a8u, cpu->r[4], 0, 0);
    }
L_000f09a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f09a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f09ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f09b0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f09b4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000f09b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f09bc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000f09c0:;
    {
        cpu->r[14] = 0x000f09c4u; fn_00136660(cpu);
    }
L_000f09c4:;
    {
        cpu->r[3] = rd32(0x000f09ccu + + 0x9cu);
    }
L_000f09c8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f09cc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f09d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f09d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0a1c;
        }
    }
L_000f09d8:;
    {
        cpu->r[6] = rd32(0x000f09e0u + + 0x8cu);
    }
L_000f09dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f09e0:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f09e4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f09e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f09ec:;
    {
        cpu->r[14] = 0x000f09f0u; fn_0018aa58(cpu);
    }
L_000f09f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f09f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000f09f8:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f09fc:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_000f0a00:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f0a04:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000f0a08:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000f0a0c:;
    {
        cpu->r[14] = 0x000f0a10u; fn_00136660(cpu);
    }
L_000f0a10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0a14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f0a18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0a1cu)) return;
    }
L_000f0a1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0a20:;
    {
        cpu->r[14] = 0x000f0a24u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f0a24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f09d8;
        }
    }
L_000f0a2c:;
    {
        cpu->r[6] = rd32(0x000f0a34u + + 0x38u);
    }
L_000f0a30:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0a34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0a38:;
    {
        cpu->r[14] = 0x000f0a3cu; fn_0018aa20(cpu);
    }
L_000f0a3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0a40:;
    {
        cpu->r[14] = 0x000f0a44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0a44:;
    {
        cpu->r[3] = rd32(0x000f0a4cu + + 0x24u);
    }
L_000f0a48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0a4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0a50:;
    {
        cpu->r[3] = rd32(0x000f0a58u + + 0x1cu);
    }
L_000f0a54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0a58:;
    {
        cpu->r[14] = 0x000f0a5cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f0a5c:;
    {
        goto L_000f09dc;
    }
}

/* _ZN10GS_SDError6RenderEv @ 000f0a78 (arm) */
void fn_000f0a78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0a78:;
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
L_000f0a7c:;
    {
        cpu->r[4] = rd32(0x000f0a84u + + 0x214u);
    }
L_000f0a80:;
    {
        cpu->r[3] = rd32(0x000f0a88u + + 0x214u);
    }
L_000f0a84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000021cu, 1, 0);
    }
L_000f0a88:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f0a90u, cpu->r[4], 0, 0);
    }
L_000f0a8c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000f0a90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0a94:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000f0a98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f0a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0c08;
        }
    }
L_000f0aa0:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_000f0aa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0aa8:;
    {
        cpu->r[9] = rd32(0x000f0ab0u + + 0x1f0u);
    }
L_000f0aac:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f0ab0:;
    {
        cpu->r[14] = 0x000f0ab4u; fn_0012df9c(cpu);
    }
L_000f0ab4:;
    {
        cpu->r[11] = rd32(0x000f0abcu + + 0x1e8u);
    }
L_000f0ab8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f0abc:;
    {
        cpu->r[8] = rd32(0x000f0ac4u + + 0x1e4u);
    }
L_000f0ac0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f0ac4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0ac8:;
    {
        cpu->r[14] = 0x000f0accu; fn_0012ec44(cpu);
    }
L_000f0acc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f0ad0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000f0ad4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0ad8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f0adc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0ae0:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000f0ae4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f0ae8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f0aec:;
    {
        cpu->r[14] = 0x000f0af0u; fn_0012ed70(cpu);
    }
L_000f0af0:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000f0af4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0af8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f0afc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0b00:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f0b04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f0b08:;
    {
        cpu->r[14] = 0x000f0b0cu; fn_0012fa2c(cpu);
    }
L_000f0b0c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f0b10:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f0b14:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f0b18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0c4c;
        }
    }
L_000f0b1c:;
    {
        cpu->r[6] = rd32(0x000f0b24u + + 0x188u);
    }
L_000f0b20:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0b24:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f0b28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0b2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0b30:;
    {
        cpu->r[14] = 0x000f0b34u; fn_0018aa44(cpu);
    }
L_000f0b34:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f0b38:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f0b3c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f0b40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000f0b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0c10;
        }
    }
L_000f0b48:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f0b4c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_000f0b50:;
    {
        cpu->r[14] = 0x000f0b54u; fn_00096a08(cpu);
    }
L_000f0b54:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f0b58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0b5c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000f0b60:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000f0b64:;
    {
        cpu->r[14] = 0x000f0b68u; fn_0018aa44(cpu);
    }
L_000f0b68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f0b6c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000f0b70:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f0b74:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000f0b78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f0b7c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f0b80:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f0b84:;
    {
        cpu->r[14] = 0x000f0b88u; fn_000ad8a0(cpu);
    }
L_000f0b88:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000f0b8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0c00;
        }
    }
L_000f0b90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f0b94:;
    {
        cpu->r[0] = 0x0000008eu;
    }
L_000f0b98:;
    {
        cpu->r[14] = 0x000f0b9cu; fn_000aeb58(cpu);
    }
L_000f0b9c:;
    {
        cpu->r[1] = rd32(0x000f0ba4u + + 0x10cu);
    }
L_000f0ba0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f0ba4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f0bacu, cpu->r[1], 0, 0);
    }
L_000f0ba8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f0bac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0bb0:;
    {
        cpu->r[14] = 0x000f0bb4u; fn_000ae830(cpu);
    }
L_000f0bb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0bb8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f0bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000214u, 0, 0);
    }
L_000f0bc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000210u, 0, 0);
    }
L_000f0bc4:;
    {
        cpu->r[14] = 0x000f0bc8u; fn_000aa404(cpu);
    }
L_000f0bc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f0bcc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000f0bd0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000f0bd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0bd8:;
    {
        wr8(cpu->r[7] + + 0x50u, cpu->r[12]);
    }
L_000f0bdc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0be0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f0be4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f0be8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f0bec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000f0bf0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000f0bf4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000f0bf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f0bfc:;
    {
        cpu->r[14] = 0x000f0c00u; fn_000ad19c(cpu);
    }
L_000f0c00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f0c04:;
    {
        cpu->r[14] = 0x000f0c08u; fn_0012f780(cpu);
    }
L_000f0c08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000021cu, 0, 0);
    }
L_000f0c0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0c10u)) return;
    }
L_000f0c10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0c14:;
    {
        cpu->r[14] = 0x000f0c18u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f0c18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0b48;
        }
    }
L_000f0c20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0c24:;
    {
        cpu->r[14] = 0x000f0c28u; fn_0018aa20(cpu);
    }
L_000f0c28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f0c2c:;
    {
        cpu->r[14] = 0x000f0c30u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0c30:;
    {
        cpu->r[3] = rd32(0x000f0c38u + + 0x7cu);
    }
L_000f0c34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0c38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0c3c:;
    {
        cpu->r[3] = rd32(0x000f0c44u + + 0x74u);
    }
L_000f0c40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0c44:;
    {
        cpu->r[14] = 0x000f0c48u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f0c48:;
    {
        goto L_000f0b48;
    }
L_000f0c4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0c50:;
    {
        cpu->r[14] = 0x000f0c54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f0c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f0c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0b1c;
        }
    }
L_000f0c5c:;
    {
        cpu->r[6] = rd32(0x000f0c64u + + 0x48u);
    }
L_000f0c60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f0c64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f0c68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000f0c6c:;
    {
        cpu->r[14] = 0x000f0c70u; fn_0018aa20(cpu);
    }
L_000f0c70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0c74:;
    {
        cpu->r[14] = 0x000f0c78u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f0c78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f0c7c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f0c80:;
    {
        cpu->r[3] = rd32(0x000f0c88u + + 0x2cu);
    }
L_000f0c84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0c88:;
    {
        cpu->r[3] = rd32(0x000f0c90u + + 0x28u);
    }
L_000f0c8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f0c90:;
    {
        cpu->r[14] = 0x000f0c94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f0c94:;
    {
        goto L_000f0b20;
    }
}

/* _ZN15GS_LoadMainMenu8isKindOfEi @ 000f0cbc (arm) */
void fn_000f0cbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0cbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001cu, 1, 1);
    }
L_000f0cc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f0cc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f0cc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_LoadMainMenu6CreateEv @ 000f0ccc (arm) */
void fn_000f0ccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0ccc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f0cd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0cd4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_000f0cd8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000f0cdc:;
    {
        wr32(cpu->r[3] + + 0x7cu, cpu->r[1]);
    }
L_000f0ce0:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000f0ce4:;
    {
        wr32(cpu->r[3] + + 0x9cu, cpu->r[2]);
    }
L_000f0ce8:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[1]);
    }
L_000f0cec:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[2]);
    }
L_000f0cf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_LoadMainMenu14ForceTerminateEv @ 000f0cf4 (arm) */
void fn_000f0cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0cf4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_6 @ 000f0cf8 (arm) */
void fn_000f0cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0cf8:;
    {
        cpu->r[3] = rd32(0x000f0d00u + + 0x20u);
    }
L_000f0cfc:;
    {
        cpu->r[1] = rd32(0x000f0d04u + + 0x20u);
    }
L_000f0d00:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0d08u, cpu->r[3], 0, 0);
    }
L_000f0d04:;
    {
        cpu->r[2] = rd32(0x000f0d0cu + + 0x1cu);
    }
L_000f0d08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f0d0c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f0d14u, cpu->r[2], 0, 0);
    }
L_000f0d10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0d14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000f0d18:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000f0d1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_LoadMainMenuD1Ev @ 000f0d2c (arm) */
void fn_000f0d2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0d2c:;
    {
        cpu->r[3] = rd32(0x000f0d34u + + 0x24u);
    }
L_000f0d30:;
    {
        cpu->r[2] = rd32(0x000f0d38u + + 0x24u);
    }
L_000f0d34:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0d3cu, cpu->r[3], 0, 0);
    }
L_000f0d38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f0d3c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f0d40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0d44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f0d48:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f0d4c:;
    {
        cpu->r[14] = 0x000f0d50u; fn_000f22a0(cpu);
    }
L_000f0d50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0d54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0d58u)) return;
    }
}

/* _ZN15GS_LoadMainMenu6RenderEv @ 000f0d60 (arm) */
void fn_000f0d60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0d60:;
    {
        return fn_000f259c(cpu);
    }
}

/* _Z11LoadProfilev @ 000f0d64 (arm) */
void fn_000f0d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0d64:;
    {
        cpu->r[3] = rd32(0x000f0d6cu + + 0x28u);
    }
L_000f0d68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f0d6c:;
    {
        cpu->r[0] = rd32(0x000f0d74u + + 0x24u);
    }
L_000f0d70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0d74:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0d7cu, cpu->r[3], 0, 0);
    }
L_000f0d78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f0d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000f0d80:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f0d84:;
    {
        cpu->r[14] = 0x000f0d88u; fn_0009e494(cpu);
    }
L_000f0d88:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000f0d8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f0d90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0d94u)) return;
    }
}

/* _ZN15GS_LoadMainMenuC1Eh @ 000f0d9c (arm) */
void fn_000f0d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0d9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f0da0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000f0da4:;
    {
        cpu->r[5] = rd32(0x000f0dacu + + 0x50u);
    }
L_000f0da8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0dac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0db0:;
    {
        cpu->r[14] = 0x000f0db4u; fn_000f2344(cpu);
    }
L_000f0db4:;
    {
        cpu->r[3] = rd32(0x000f0dbcu + + 0x44u);
    }
L_000f0db8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f0dc0u, cpu->r[5], 0, 0);
    }
L_000f0dbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0dc0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f0dc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000f0dc8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f0dcc:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[6]);
    }
L_000f0dd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f0dd4:;
    {
        uint32_t v = cpu->r[6] ^ 0x00000001u; cpu->r[6] = v;
    }
L_000f0dd8:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[6]);
    }
L_000f0ddc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0de0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f0de4:;
    {
        wr8(cpu->r[2] + + 0x406u, cpu->r[1]);
    }
L_000f0de8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000f0dec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f0df0:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_000f0df4:;
    {
        wr8(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000f0df8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0dfcu)) return;
    }
}

/* _ZN15GS_LoadMainMenuC2Eh @ 000f0e04 (arm) */
void fn_000f0e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0e04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f0e08:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000f0e0c:;
    {
        cpu->r[5] = rd32(0x000f0e14u + + 0x50u);
    }
L_000f0e10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f0e14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0e18:;
    {
        cpu->r[14] = 0x000f0e1cu; fn_000f2344(cpu);
    }
L_000f0e1c:;
    {
        cpu->r[3] = rd32(0x000f0e24u + + 0x44u);
    }
L_000f0e20:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f0e28u, cpu->r[5], 0, 0);
    }
L_000f0e24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f0e28:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f0e2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000f0e30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f0e34:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[6]);
    }
L_000f0e38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f0e3c:;
    {
        uint32_t v = cpu->r[6] ^ 0x00000001u; cpu->r[6] = v;
    }
L_000f0e40:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[6]);
    }
L_000f0e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f0e4c:;
    {
        wr8(cpu->r[2] + + 0x406u, cpu->r[1]);
    }
L_000f0e50:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000f0e54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f0e58:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_000f0e5c:;
    {
        wr8(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000f0e60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0e64u)) return;
    }
}

/* _ZN15GS_LoadMainMenuD0Ev @ 000f0e6c (arm) */
void fn_000f0e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0e6c:;
    {
        cpu->r[3] = rd32(0x000f0e74u + + 0x2cu);
    }
L_000f0e70:;
    {
        cpu->r[2] = rd32(0x000f0e78u + + 0x2cu);
    }
L_000f0e74:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f0e7cu, cpu->r[3], 0, 0);
    }
L_000f0e78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f0e7c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f0e80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f0e84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f0e88:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f0e8c:;
    {
        cpu->r[14] = 0x000f0e90u; fn_000f22a0(cpu);
    }
L_000f0e90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0e94:;
    {
        cpu->r[14] = 0x000f0e98u; fn_0018ba20(cpu);
    }
L_000f0e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f0e9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0ea0u)) return;
    }
}
