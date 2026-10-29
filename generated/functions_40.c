#include "functions.h"

/* _ZN16GS_CarGarageMenu6ResumeEv @ 00101598 (arm) */
void fn_00101598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101598:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010159c:;
    {
        cpu->r[5] = rd32(0x001015a4u + + 0x90u);
    }
L_001015a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001015a4:;
    {
        cpu->r[14] = 0x001015a8u; fn_001142a0(cpu);
    }
L_001015a8:;
    {
        cpu->r[3] = rd32(0x001015b0u + + 0x88u);
    }
L_001015ac:;
    {
        cpu->r[5] = add_flags(cpu, 0x001015b4u, cpu->r[5], 0, 0);
    }
L_001015b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001015b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001015b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_001015bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x30u);
    }
L_001015c0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001015c4:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001015c8:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001015cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001015d0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_001015d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001015d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101608;
        }
    }
L_001015dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001015e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001015e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001015e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_001015ec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_001015f0:;
    {
        cpu->r[14] = 0x001015f4u; fn_000ec4f0(cpu);
    }
L_001015f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001015f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001015fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_00101600:;
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
L_00101604:;
    {
        return fn_000ec4f0(cpu);
    }
L_00101608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010160c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00101610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101614:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00101618:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0010161c:;
    {
        cpu->r[14] = 0x00101620u; fn_000ec594(cpu);
    }
L_00101620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_00101624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101628:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0010162c:;
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
L_00101630:;
    {
        return fn_000ec594(cpu);
    }
}

/* _ZN16GS_CarGarageMenu11DoBarActionEii @ 0010163c (arm) */
void fn_0010163c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010163c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00101640:;
    {
        cpu->r[5] = rd32(0x00101648u + + 0x1b4u);
    }
L_00101644:;
    {
        cpu->r[6] = rd32(0x0010164cu + + 0x1b4u);
    }
L_00101648:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0010164c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00101654u, cpu->r[5], 0, 0);
    }
L_00101650:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00101654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101658:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010165c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00101660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00101664:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00101668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010170c;
        }
    }
L_0010166c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00101670:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00101674:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x95cu);
    }
L_00101678:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0010167c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00101680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00101684:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00101688:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0010168c:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_00101690:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101728;
        }
    }
L_00101694:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x95du);
    }
L_00101698:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010169c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101728;
        }
    }
L_001016a0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001016a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001016a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010173c;
        }
    }
L_001016ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001016b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001016b4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001016b8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001016bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001016c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001016c4:;
    {
        cpu->r[14] = 0x001016c8u; fn_000fd248(cpu);
    }
L_001016c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001016cc:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_001016d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001016d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010176c;
        }
    }
L_001016d8:;
    {
        cpu->r[2] = 0x000005c9u;
    }
L_001016dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001016e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00101788;
        }
    }
L_001016e4:;
    {
        cpu->r[3] = rd32(0x001016ecu + + 0x118u);
    }
L_001016e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001016ec:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001016f0:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001016f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001016f8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_001016fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00101700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101798;
        }
    }
L_00101704:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101708:;
    {
        cpu->r[14] = 0x0010170cu; fn_0010df70(cpu);
    }
L_0010170c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00101710:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00101714:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00101718:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0010171c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001017f8;
        }
    }
L_00101720:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00101724:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00101728u)) return;
    }
L_00101728:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010172c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00101730:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00101734:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
        }
    }
L_00101738:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010170c;
        }
    }
L_0010173c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101740:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00101744:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00101748:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010174c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00101750:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00101754:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00101758:;
    {
        cpu->r[14] = 0x0010175cu; fn_000fd248(cpu);
    }
L_0010175c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00101760:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_00101764:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00101768:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001016d8;
        }
    }
L_0010176c:;
    {
        cpu->r[2] = 0x000005ceu;
    }
L_00101770:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00101774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001016e4;
        }
    }
L_00101778:;
    {
        cpu->r[2] = 0x0000066cu;
    }
L_0010177c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00101780:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010170c;
        }
    }
L_00101784:;
    {
        goto L_001016e4;
    }
L_00101788:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010178c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00101790:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010170c;
        }
    }
L_00101794:;
    {
        goto L_001016e4;
    }
L_00101798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010179c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001017a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001017a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001017a8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001017ac:;
    {
        cpu->r[1] = rd32(0x001017b4u + + 0x54u);
    }
L_001017b0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001017b4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001017b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001017c0u, cpu->r[1], 0, 0);
    }
L_001017bc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001017c0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001017c4:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x18u;
        wr32(cpu->r[7] + - 0x18u, cpu->r[2]);
        cpu->r[7] = wb_tmp;
    }
L_001017c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001017cc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001017d0:;
    {
        cpu->r[14] = 0x001017d4u; imp_sprintf(cpu); /* sprintf */
    }
L_001017d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001017d8:;
    {
        cpu->r[14] = 0x001017dcu; imp_strlen(cpu); /* strlen */
    }
L_001017dc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001017e0:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001017e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001017e8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001017ec:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001017f0:;
    {
        cpu->r[14] = 0x001017f4u; fn_001c44d0(cpu);
    }
L_001017f4:;
    {
        goto L_00101704;
    }
L_001017f8:;
    {
        cpu->r[14] = 0x001017fcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001017fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 1, 27u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_00101800:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00101804:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_00101808:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 1, 30u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN16GS_CarGarageMenu17ApplyMenuSettingsEv @ 0010180c (arm) */
void fn_0010180c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010180c:;
    {
        cpu->r[3] = rd32(0x00101814u + + 0xd4u);
    }
L_00101810:;
    {
        cpu->r[2] = rd32(0x00101818u + + 0xd4u);
    }
L_00101814:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010181cu, cpu->r[3], 0, 0);
    }
L_00101818:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010181c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00101820:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101824:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00101828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_0010182c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001018d4;
        }
    }
L_00101830:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101834:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00101838:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_0010183c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00101840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001018c4;
        }
    }
L_00101844:;
    {
        cpu->r[3] = rd32(0x0010184cu + + 0xa4u);
    }
L_00101848:;
    {
        cpu->r[3] = add_flags(cpu, 0x00101850u, cpu->r[3], 0, 0);
    }
L_0010184c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_00101850:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00101854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00101858:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0010185c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x964u);
    }
L_00101860:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00101864:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_00101868:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0010186c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101870:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101874:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[1]);
    }
L_00101878:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_0010187c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_00101880:;
    {
        cpu->r[3] = rd32(0x00101888u + + 0x6cu);
    }
L_00101884:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_00101888:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_0010188c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00101894u, cpu->r[3], 0, 0);
    }
L_00101890:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_00101894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000090u, 0, 0);
    }
L_00101898:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[2]);
    }
L_0010189c:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_001018a0:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[1]);
    }
L_001018a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001018a8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_001018ac:;
    {
        cpu->r[14] = 0x001018b4u;
    }
L_001018b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001018b4u)) return;
    }
L_001018b4:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[5]);
    }
L_001018b8:;
    {
        cpu->r[14] = 0x001018bcu; fn_0009b4d0(cpu);
    }
L_001018bc:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_001018c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001018c4u)) return;
    }
L_001018c4:;
    {
        cpu->r[3] = rd32(0x001018ccu + + 0x2cu);
    }
L_001018c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001018d0u, cpu->r[3], 0, 0);
    }
L_001018cc:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_001018d0:;
    {
        goto L_00101854;
    }
L_001018d4:;
    {
        cpu->r[3] = rd32(0x001018dcu + + 0x20u);
    }
L_001018d8:;
    {
        cpu->r[2] = 0x00000149u;
    }
L_001018dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001018e4u, cpu->r[3], 0, 0);
    }
L_001018e0:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[2]);
    }
L_001018e4:;
    {
        goto L_00101830;
    }
}

/* _ZN16GS_CarGarageMenuC1Ebiib @ 00101900 (arm) */
void fn_00101900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101900:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00101904:;
    {
        cpu->r[4] = rd32(0x0010190cu + + 0x58u);
    }
L_00101908:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010190c:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x18u);
    }
L_00101910:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00101914:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00101918:;
    {
        cpu->r[14] = 0x0010191cu; fn_001100c0(cpu);
    }
L_0010191c:;
    {
        cpu->r[3] = rd32(0x00101924u + + 0x44u);
    }
L_00101920:;
    {
        cpu->r[4] = add_flags(cpu, 0x00101928u, cpu->r[4], 0, 0);
    }
L_00101924:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00101928:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010192c:;
    {
        wr32(cpu->r[6] + + 0x960u, cpu->r[5]);
    }
L_00101930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00101934:;
    {
        wr32(cpu->r[6] + + 0x964u, cpu->r[8]);
    }
L_00101938:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010193c:;
    {
        wr8(cpu->r[6] + + 0x8fdu, cpu->r[7]);
    }
L_00101940:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00101944:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00101948:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[7]);
        }
    }
L_0010194c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[3]);
        }
    }
L_00101950:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00101954:;
    {
        wr8(cpu->r[6] + + 0x95eu, cpu->r[3]);
    }
L_00101958:;
    {
        cpu->r[14] = 0x0010195cu; fn_0010180c(cpu);
    }
L_0010195c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00101960:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00101964u)) return;
    }
}

/* _ZN16GS_CarGarageMenuC2Ebiib @ 0010196c (arm) */
void fn_0010196c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010196c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00101970:;
    {
        cpu->r[4] = rd32(0x00101978u + + 0x58u);
    }
L_00101974:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00101978:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x18u);
    }
L_0010197c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00101980:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00101984:;
    {
        cpu->r[14] = 0x00101988u; fn_001100c0(cpu);
    }
L_00101988:;
    {
        cpu->r[3] = rd32(0x00101990u + + 0x44u);
    }
L_0010198c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00101994u, cpu->r[4], 0, 0);
    }
L_00101990:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00101994:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00101998:;
    {
        wr32(cpu->r[6] + + 0x960u, cpu->r[5]);
    }
L_0010199c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001019a0:;
    {
        wr32(cpu->r[6] + + 0x964u, cpu->r[8]);
    }
L_001019a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001019a8:;
    {
        wr8(cpu->r[6] + + 0x8fdu, cpu->r[7]);
    }
L_001019ac:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001019b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001019b4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[7]);
        }
    }
L_001019b8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[3]);
        }
    }
L_001019bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001019c0:;
    {
        wr8(cpu->r[6] + + 0x95eu, cpu->r[3]);
    }
L_001019c4:;
    {
        cpu->r[14] = 0x001019c8u; fn_0010180c(cpu);
    }
L_001019c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001019cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001019d0u)) return;
    }
}

/* _ZN16GS_CarGarageMenuD0Ev @ 001019d8 (arm) */
void fn_001019d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001019d8:;
    {
        cpu->r[3] = rd32(0x001019e0u + + 0x2cu);
    }
L_001019dc:;
    {
        cpu->r[2] = rd32(0x001019e4u + + 0x2cu);
    }
L_001019e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001019e8u, cpu->r[3], 0, 0);
    }
L_001019e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001019e8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001019ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001019f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001019f4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001019f8:;
    {
        cpu->r[14] = 0x001019fcu; fn_000ec21c(cpu);
    }
L_001019fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101a00:;
    {
        cpu->r[14] = 0x00101a04u; fn_0018ba20(cpu);
    }
L_00101a04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101a08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00101a0cu)) return;
    }
}

/* _ZN16GS_CarGarageMenu14renderCarStatsEv @ 00101a14 (arm) */
void fn_00101a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101a14:;
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
L_00101a18:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00101a1c:;
    {
        cpu->r[10] = rd32(0x00101a24u + + 0x2d0u);
    }
L_00101a20:;
    {
        cpu->r[3] = rd32(0x00101a28u + + 0x2d0u);
    }
L_00101a24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00101a28:;
    {
        cpu->r[10] = add_flags(cpu, 0x00101a30u, cpu->r[10], 0, 0);
    }
L_00101a2c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00101a30:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101a34:;
    {
        cpu->r[3] = rd32(0x00101a3cu + + 0x2c0u);
    }
L_00101a38:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101a3c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00101a40:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00101a44:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_00101a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101cac;
        }
    }
L_00101a4c:;
    {
        cpu->r[4] = rd32(0x00101a54u + + 0x2acu);
    }
L_00101a50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00101a54:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_00101a58:;
    {
        cpu->r[1] = 0x00000044u;
    }
L_00101a5c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00101a60:;
    {
        cpu->r[14] = 0x00101a64u; fn_0018aa44(cpu);
    }
L_00101a64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00101a68:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00101a6c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00101a70:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_00101a74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00101a78:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00101a7c:;
    {
        cpu->r[0] = 0x00001c3cu;
    }
L_00101a80:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00101a84:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00101a88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00101a8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_00101a90:;
    {
        cpu->r[14] = 0x00101a94u; fn_00104928(cpu);
    }
L_00101a94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00101a98:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xa4u);
    }
L_00101a9c:;
    {
        cpu->r[3] = rd32(0x00101aa4u + + 0x260u);
    }
L_00101aa0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x58u);
    }
L_00101aa4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101aa8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00101aac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00101ab0:;
    {
        cpu->r[14] = 0x00101ab4u; fn_000962d0(cpu);
    }
L_00101ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00101ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101acc;
        }
    }
L_00101abc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00101ac0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00101ac4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xa4u);
    }
L_00101ac8:;
    {
        cpu->r[14] = 0x00101accu; fn_000a8e18(cpu);
    }
L_00101acc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00101ad0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00101ad4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101ad8:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_00101adc:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x4u;
        wr32(cpu->r[6] + - 0x4u, cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_00101ae0:;
    {
        cpu->r[3] = 0x000000aau;
    }
L_00101ae4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101ae8:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_00101aec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00101af0:;
    {
        cpu->r[4] = 0x0000001du;
    }
L_00101af4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00101af8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00101b00u + + 0x1f0u);
    }
L_00101afc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00101b00:;
    {
        cpu->r[14] = 0x00101b04u; fn_000ad8a0(cpu);
    }
L_00101b04:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00101b08:;
    {
        cpu->r[1] = 0x00000025u;
    }
L_00101b0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00101b10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101b14:;
    {
        cpu->r[14] = 0x00101b18u; fn_000a8d10(cpu);
    }
L_00101b18:;
    {
        cpu->r[3] = rd32(0x00101b20u + + 0x1e8u);
    }
L_00101b1c:;
    {
        cpu->r[1] = rd32(0x00101b24u + + 0x1e8u);
    }
L_00101b20:;
    {
        cpu->r[2] = 0x00000025u;
    }
L_00101b24:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00101b28:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00101b2c:;
    {
        cpu->r[3] = rd32(0x00101b34u + + 0x1dcu);
    }
L_00101b30:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00101b34:;
    {
        cpu->r[1] = 0x0000063au;
    }
L_00101b38:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101b3c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00101b40:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_00101b44:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x8u;
        wr32(cpu->r[6] + + 0x8u, cpu->r[1]);
        cpu->r[6] = wb_tmp;
    }
L_00101b48:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00101b4c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_00101b50:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_00101b54:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00101b58:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101b5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101b60:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_00101b64:;
    {
        cpu->r[14] = 0x00101b68u; fn_000a88e0(cpu);
    }
L_00101b68:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00101b6c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101b70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00101b74:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00101b78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101b7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00101b80:;
    {
        cpu->r[14] = 0x00101b84u; fn_000a8910(cpu);
    }
L_00101b84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00101b88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00101b8c:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0xa4u);
    }
L_00101b90:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00101b94:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00101b98:;
    {
        cpu->r[14] = 0x00101b9cu; fn_000aeb58(cpu);
    }
L_00101b9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00101ba0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x000000aau, 0, 0);
    }
L_00101ba4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00101ba8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000000fu, 0, 0);
    }
L_00101bac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00101bb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00101bb4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00101bb8:;
    {
        cpu->r[14] = 0x00101bbcu; fn_000ad19c(cpu);
    }
L_00101bbc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00101bc0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101bc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101bc8:;
    {
        cpu->r[14] = 0x00101bccu; fn_000a88e0(cpu);
    }
L_00101bcc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00101bd0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00101bd4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00101bd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101bdc:;
    {
        cpu->r[14] = 0x00101be0u; fn_000a8910(cpu);
    }
L_00101be0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + - 0x4u);
    }
L_00101be4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00101be8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x0000000fu, 0, 0);
    }
L_00101bec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00101bf0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_00101bf4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00101bf8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00101bfc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00101c00:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00101c04:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00101c08:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x000000aau, 0, 0);
    }
L_00101c0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00101c10:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00101c14:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00101c18:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00101c1c:;
    {
        cpu->r[14] = 0x00101c20u; fn_0012fa2c(cpu);
    }
L_00101c20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00101c24:;
    {
        cpu->r[14] = 0x00101c28u; fn_0012f780(cpu);
    }
L_00101c28:;
    {
        cpu->r[1] = rd32(cpu->r[6] + - 0x8u);
    }
L_00101c2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000010u, 0, 0);
    }
L_00101c30:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00101c34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101c38:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00101c3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00101c40:;
    {
        cpu->r[14] = 0x00101c44u; fn_000ad8a0(cpu);
    }
L_00101c44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00101c48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00101c4c:;
    {
        cpu->r[14] = 0x00101c50u; fn_0012f780(cpu);
    }
L_00101c50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00101c54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00101c58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00101c5c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00101c60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00101c64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00101c68:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00101c6c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00101c70:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00101c74:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00101c78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00101c7c:;
    {
        cpu->r[14] = 0x00101c80u; fn_0012fa2c(cpu);
    }
L_00101c80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00101c84:;
    {
        cpu->r[14] = 0x00101c88u; fn_0012f780(cpu);
    }
L_00101c88:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000021u, 1, 1);
    }
L_00101c8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101b54;
        }
    }
L_00101c90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00101c94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00101c98:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xa4u);
    }
L_00101c9c:;
    {
        cpu->r[14] = 0x00101ca0u; fn_000a8e18(cpu);
    }
L_00101ca0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00101ca4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00101ca8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00101cacu)) return;
    }
L_00101cac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00101cb0:;
    {
        cpu->r[14] = 0x00101cb4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00101cb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00101cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101a4c;
        }
    }
L_00101cbc:;
    {
        cpu->r[4] = rd32(0x00101cc4u + + 0x3cu);
    }
L_00101cc0:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_00101cc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00101cc8:;
    {
        cpu->r[14] = 0x00101cccu; fn_0018aa20(cpu);
    }
L_00101ccc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00101cd0:;
    {
        cpu->r[14] = 0x00101cd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00101cd4:;
    {
        cpu->r[3] = rd32(0x00101cdcu + + 0x38u);
    }
L_00101cd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00101cdc:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101ce0:;
    {
        cpu->r[3] = rd32(0x00101ce8u + + 0x30u);
    }
L_00101ce4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00101ce8:;
    {
        cpu->r[14] = 0x00101cecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00101cec:;
    {
        goto L_00101a50;
    }
}

/* _ZN16GS_CarGarageMenu6RenderEv @ 00101d1c (arm) */
void fn_00101d1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00101d1c:;
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
L_00101d20:;
    {
        cpu->r[5] = rd32(0x00101d28u + + 0x5d8u);
    }
L_00101d24:;
    {
        cpu->r[7] = rd32(0x00101d2cu + + 0x5d8u);
    }
L_00101d28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000244u, 1, 0);
    }
L_00101d2c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00101d34u, cpu->r[5], 0, 0);
    }
L_00101d30:;
    {
        cpu->r[8] = rd32(0x00101d38u + + 0x5d0u);
    }
L_00101d34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00101d38:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00101d3c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00101d40:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00101d44:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00101d48:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00101d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101fec;
        }
    }
L_00101d50:;
    {
        cpu->r[6] = rd32(0x00101d58u + + 0x5b4u);
    }
L_00101d54:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00101d58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101d5c:;
    {
        cpu->r[14] = 0x00101d60u; fn_00096a08(cpu);
    }
L_00101d60:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00101d64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00101d68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00101d6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00101d70:;
    {
        cpu->r[14] = 0x00101d74u; fn_0018aa44(cpu);
    }
L_00101d74:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00101d78:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00101d7c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00101d80:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00101d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102030;
        }
    }
L_00101d88:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00101d8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101d90:;
    {
        cpu->r[14] = 0x00101d94u; fn_00096a08(cpu);
    }
L_00101d94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00101d98:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00101d9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00101da0:;
    {
        cpu->r[14] = 0x00101da4u; fn_0018aa44(cpu);
    }
L_00101da4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101da8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00101dac:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00101db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101f84;
        }
    }
L_00101db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101db8:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00101dbc:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00101dc0:;
    {
        cpu->r[14] = 0x00101dc4u; fn_00113570(cpu);
    }
L_00101dc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101dc8:;
    {
        cpu->r[7] = 0x00001c4cu;
    }
L_00101dcc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00101dd0:;
    {
        cpu->r[14] = 0x00101dd4u; fn_000978a8(cpu);
    }
L_00101dd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101dd8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x95cu);
    }
L_00101ddc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00101de0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00101de4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_00101de8:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_00101dec:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_00101df0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00101df4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00101df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010206c;
        }
    }
L_00101dfc:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x95du);
    }
L_00101e00:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00101e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010213c;
        }
    }
L_00101e08:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00101e0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00101e10:;
    {
        cpu->r[14] = 0x00101e14u; fn_0012f780(cpu);
    }
L_00101e14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00101e18:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00101e1c:;
    {
        cpu->r[14] = 0x0000004cu;
    }
L_00101e20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00101e24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000220u, 0, 0);
    }
L_00101e28:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00101e2c:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_00101e30:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x444u);
    }
L_00101e34:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00101e38:;
    {
        cpu->r[8] = 0x00000171u;
    }
L_00101e3c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[12] = v;
    }
L_00101e40:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00101e44:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00101e48:;
    {
        cpu->r[7] = rd32(cpu->r[14] + + 0xcu);
    }
L_00101e4c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00101e50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00101e54:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00101e58:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00101e5c:;
    {
        cpu->r[14] = 0x00101e60u; fn_000a8a2c(cpu);
    }
L_00101e60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x220u);
    }
L_00101e64:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_00101e68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x228u);
    }
L_00101e6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x22cu);
    }
L_00101e70:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00101e74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x224u);
    }
L_00101e78:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101e7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00101e80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00101e84:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00101e88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00101e8c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00101e90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00101e94:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000170u, cpu->r[2], 1, 0);
    }
L_00101e98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[5];
        }
    }
L_00101e9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x0000003cu;
        }
    }
L_00101ea0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00101ea4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00101ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00101eac:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000050u, cpu->r[3], 1, 0);
    }
L_00101eb0:;
    {
        cpu->r[12] = 0x000001adu;
    }
L_00101eb4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00101eb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[12];
        }
    }
L_00101ebc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00101ec0:;
    {
        cpu->r[14] = 0x00101ec4u; fn_000ad8a0(cpu);
    }
L_00101ec4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00101ec8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00101ecc:;
    {
        cpu->r[14] = 0x00101ed0u; fn_000aeb58(cpu);
    }
L_00101ed0:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_00101ed4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00101ed8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00101edc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00101ee0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00101ee4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00101ee8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00101eec:;
    {
        cpu->r[14] = 0x00101ef0u; fn_000ad19c(cpu);
    }
L_00101ef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00101ef4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00101ef8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00101f24;
        }
    }
L_00101efc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00101f00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101f04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101f08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00101f0c:;
    {
        cpu->r[14] = 0x00101f14u;
    }
L_00101f10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101f14u)) return;
    }
L_00101f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00101f18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00101f1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00101f20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00101efc;
        }
    }
L_00101f24:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101f28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101f2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101f30:;
    {
        uint32_t v = cpu->r[1] ^ 0x00000001u; cpu->r[1] = v;
    }
L_00101f34:;
    {
        cpu->r[14] = 0x00101f3cu;
    }
L_00101f38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101f3cu)) return;
    }
L_00101f3c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101f40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00101f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101f9c;
        }
    }
L_00101f48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101f4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101f50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00101f54:;
    {
        cpu->r[14] = 0x00101f5cu;
    }
L_00101f58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101f5cu)) return;
    }
L_00101f5c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00101f64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101fbc;
        }
    }
L_00101f68:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x95cu);
    }
L_00101f6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00101f70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101f7c;
        }
    }
L_00101f74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101f78:;
    {
        cpu->r[14] = 0x00101f7cu; fn_00101a14(cpu);
    }
L_00101f7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000244u, 0, 0);
    }
L_00101f80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00101f84u)) return;
    }
L_00101f84:;
    {
        cpu->r[3] = rd32(0x00101f8cu + + 0x384u);
    }
L_00101f88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101f8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00101f90:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00101f94:;
    {
        cpu->r[14] = 0x00101f98u; fn_00113570(cpu);
    }
L_00101f98:;
    {
        goto L_00101dc4;
    }
L_00101f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101fa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101fa4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00101fa8:;
    {
        cpu->r[14] = 0x00101fb0u;
    }
L_00101fac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101fb0u)) return;
    }
L_00101fb0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00101fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00101fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101f68;
        }
    }
L_00101fbc:;
    {
        cpu->r[2] = rd32(0x00101fc4u + + 0x350u);
    }
L_00101fc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101fc4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101fc8:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00101fcc:;
    {
        cpu->r[2] = rd32(0x00101fd4u + cpu->r[2]);
    }
L_00101fd0:;
    {
        cpu->r[14] = 0x00101fd8u;
    }
L_00101fd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x90u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101fd8u)) return;
    }
L_00101fd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00101fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00101fe0:;
    {
        cpu->r[14] = 0x00101fe8u;
    }
L_00101fe4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x94u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00101fe8u)) return;
    }
L_00101fe8:;
    {
        goto L_00101f68;
    }
L_00101fec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00101ff0:;
    {
        cpu->r[14] = 0x00101ff4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00101ff4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00101ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101d50;
        }
    }
L_00101ffc:;
    {
        cpu->r[6] = rd32(0x00102004u + + 0x308u);
    }
L_00102000:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102004:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00102008:;
    {
        cpu->r[14] = 0x0010200cu; fn_0018aa20(cpu);
    }
L_0010200c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102010:;
    {
        cpu->r[14] = 0x00102014u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00102014:;
    {
        cpu->r[3] = rd32(0x0010201cu + + 0x2fcu);
    }
L_00102018:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010201c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00102020:;
    {
        cpu->r[3] = rd32(0x00102028u + + 0x2f4u);
    }
L_00102024:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00102028:;
    {
        cpu->r[14] = 0x0010202cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010202c:;
    {
        goto L_00101d54;
    }
L_00102030:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00102034:;
    {
        cpu->r[14] = 0x00102038u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00102038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010203c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00101d88;
        }
    }
L_00102040:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102044:;
    {
        cpu->r[14] = 0x00102048u; fn_0018aa20(cpu);
    }
L_00102048:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010204c:;
    {
        cpu->r[14] = 0x00102050u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00102050:;
    {
        cpu->r[3] = rd32(0x00102058u + + 0x2c0u);
    }
L_00102054:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102058:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010205c:;
    {
        cpu->r[3] = rd32(0x00102064u + + 0x2b8u);
    }
L_00102060:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00102064:;
    {
        cpu->r[14] = 0x00102068u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00102068:;
    {
        goto L_00101d88;
    }
L_0010206c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00102070:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_00102074:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00102078:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_0010207c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00102080:;
    {
        cpu->r[14] = 0x00102084u; fn_0012dd58(cpu);
    }
L_00102084:;
    {
        cpu->r[3] = rd32(0x0010208cu + + 0x284u);
    }
L_00102088:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0010208c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00102090:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00102094:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00102098:;
    {
        cpu->r[3] = rd32(0x001020a0u + + 0x280u);
    }
L_0010209c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001020a0:;
    {
        cpu->r[3] = rd32(cpu->r[14]);
    }
L_001020a4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001020a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001020ac:;
    {
        cpu->r[14] = 0x001020b0u; fn_00130908(cpu);
    }
L_001020b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001020b4:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_001020b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001020bc:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001020c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001020c4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001020c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001020cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001020d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001020d4:;
    {
        cpu->r[14] = 0x001020d8u; fn_000ad8a0(cpu);
    }
L_001020d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001020dc:;
    {
        cpu->r[0] = 0x00000605u;
    }
L_001020e0:;
    {
        cpu->r[14] = 0x001020e4u; fn_000aeb58(cpu);
    }
L_001020e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001020e8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001020ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001020f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001020f4:;
    {
        cpu->r[14] = 0x001020f8u; fn_000a0cf8(cpu);
    }
L_001020f8:;
    {
        cpu->r[1] = rd32(0x00102100u + + 0x224u);
    }
L_001020fc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00102100:;
    {
        cpu->r[1] = add_flags(cpu, 0x00102108u, cpu->r[1], 0, 0);
    }
L_00102104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00102108:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010210c:;
    {
        cpu->r[14] = 0x00102110u; fn_000ae830(cpu);
    }
L_00102110:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00102114:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00102118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010211c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00102120:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00102124:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00102128:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010212c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00102130:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00102134:;
    {
        cpu->r[14] = 0x00102138u; fn_000ad19c(cpu);
    }
L_00102138:;
    {
        goto L_00101e08;
    }
L_0010213c:;
    {
        cpu->r[0] = rd32(0x00102144u + + 0x1e4u);
    }
L_00102140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00102144:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00102148:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010214c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00102150:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00102154:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00102158:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0010215c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00102160:;
    {
        cpu->r[14] = 0x00102164u; fn_00096e14(cpu);
    }
L_00102164:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00102168:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010216c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00102170:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00102174:;
    {
        cpu->r[14] = 0x00102178u; fn_000f3d88(cpu);
    }
L_00102178:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_0010217c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00102180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102290;
        }
    }
L_00102184:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00102188:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010218c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00102190:;
    {
        cpu->r[3] = 0x0000016du;
    }
L_00102194:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00102198:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0010219c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001021a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001021a4:;
    {
        cpu->r[14] = 0x001021a8u; fn_000ad19c(cpu);
    }
L_001021a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001021ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001021b0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001021b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001021b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001021bc:;
    {
        cpu->r[14] = 0x001021c0u; fn_000a50ac(cpu);
    }
L_001021c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001021c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00101e08;
        }
    }
L_001021c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001021cc:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_001021d0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001021d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000230u, 0, 0);
    }
L_001021d8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001021dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_001021e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001021e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001021e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001021ec:;
    {
        cpu->r[14] = 0x001021f0u; fn_000a8a2c(cpu);
    }
L_001021f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x230u);
    }
L_001021f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001021f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x238u);
    }
L_001021fc:;
    {
        cpu->r[0] = 0x0000040bu;
    }
L_00102200:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x23cu);
    }
L_00102204:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_00102208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x234u);
    }
L_0010220c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x000001b4u, cpu->r[8], 1, 0);
    }
L_00102210:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_00102214:;
    {
        cpu->r[14] = 0x00102218u; fn_000aeb58(cpu);
    }
L_00102218:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000012u, 1, 0);
    }
L_0010221c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00102220:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00102224:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_00102228:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010222c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102230:;
    {
        cpu->r[14] = 0x00102234u; fn_000a9818(cpu);
    }
L_00102234:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00102238:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0010223c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001022b4;
        }
    }
L_00102240:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00102244:;
    {
        cpu->r[0] = 0x0000040bu;
    }
L_00102248:;
    {
        cpu->r[14] = 0x0010224cu; fn_000aeb58(cpu);
    }
L_0010224c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00102250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x0000006fu, 0, 0);
    }
L_00102254:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 1u, &shc); cpu->r[11] = v;
    }
L_00102258:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000fau, 0, 0);
    }
L_0010225c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00102260:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_00102264:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00102268:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0010226c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00102270:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00102274:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00102278:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0010227c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00102280:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00102284:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102288:;
    {
        cpu->r[14] = 0x0010228cu; fn_000ac4bc(cpu);
    }
L_0010228c:;
    {
        goto L_00101e08;
    }
L_00102290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00102294:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00102298:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_0010229c:;
    {
        cpu->r[3] = 0x0000016du;
    }
L_001022a0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001022a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001022a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001022ac:;
    {
        cpu->r[14] = 0x001022b0u; fn_000ad19c(cpu);
    }
L_001022b0:;
    {
        goto L_001021a8;
    }
L_001022b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001022b8:;
    {
        cpu->r[0] = 0x0000040bu;
    }
L_001022bc:;
    {
        cpu->r[14] = 0x001022c0u; fn_000aeb58(cpu);
    }
L_001022c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001022c4:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001022c8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001022cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000fau, 0, 0);
    }
L_001022d0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001022d4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001022d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001022dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001022e0:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001022e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001022e8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001022ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001022f0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001022f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001022f8:;
    {
        cpu->r[14] = 0x001022fcu; fn_000ac4bc(cpu);
    }
L_001022fc:;
    {
        goto L_00101e08;
    }
}

/* _ZN16GS_CarGarageMenu8DoActionEii @ 0010232c (arm) */
void fn_0010232c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010232c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00102330:;
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
L_00102334:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00102338:;
    {
        cpu->r[5] = rd32(0x00102340u + + 0x5ccu);
    }
L_0010233c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00102340:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00102344:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010234cu, cpu->r[5], 0, 0);
    }
L_00102348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102354;
        }
    }
L_0010234c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00102350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00102354u)) return;
    }
L_00102354:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00102358:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010235c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001027fc;
        }
    }
L_00102360:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00102364:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00102368:;
    {
        cpu->r[3] = 0x00000546u;
    }
L_0010236c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00102370:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_00102374:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00102378:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_0010237c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_00102380:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_00102384:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00102388:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_0010238c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102600;
        }
    }
L_00102390:;
    {
        cpu->r[3] = 0x00000547u;
    }
L_00102394:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00102398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102414;
        }
    }
L_0010239c:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_001023a0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001023a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001028e4;
        }
    }
L_001023a8:;
    {
        cpu->r[3] = 0x000004f9u;
    }
L_001023ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001023b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001023b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
        }
    }
L_001023b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010234c;
        }
    }
L_001023bc:;
    {
        cpu->r[3] = 0x00000415u;
    }
L_001023c0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001023c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102820;
        }
    }
L_001023c8:;
    {
        cpu->r[3] = 0x00000416u;
    }
L_001023cc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001023d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102820;
        }
    }
L_001023d4:;
    {
        cpu->r[3] = 0x00000413u;
    }
L_001023d8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001023dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102880;
        }
    }
L_001023e0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000540u, 1, 1);
    }
L_001023e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010234c;
        }
    }
L_001023e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001023ec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001023f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001023f4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001023f8:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[1]);
    }
L_001023fc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00102400:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00102404:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00102408:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010240c:;
    {
        cpu->r[14] = 0x00102410u; fn_000fd248(cpu);
    }
L_00102410:;
    {
        goto L_0010234c;
    }
L_00102414:;
    {
        cpu->r[1] = rd32(0x0010241cu + + 0x4f4u);
    }
L_00102418:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_0010241c:;
    {
        cpu->r[2] = rd32(0x00102424u + + 0x4f0u);
    }
L_00102420:;
    {
        cpu->r[9] = 0x0000004cu;
    }
L_00102424:;
    {
        cpu->r[3] = rd32(0x0010242cu + + 0x4ecu);
    }
L_00102428:;
    {
        cpu->r[11] = 0x0000150du;
    }
L_0010242c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00102430:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00102434:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00102438:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0010243c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102440:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_00102444:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102448:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0010244c:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[2]);
    }
L_00102450:;
    {
        cpu->r[14] = 0x00102454u; fn_00096114(cpu);
    }
L_00102454:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102458:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010245c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00102460:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00102464:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[2]);
        }
    }
L_00102468:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0010246c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001024a4;
        }
    }
L_00102470:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00102474:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00102478:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010247c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00102480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001025d8;
        }
    }
L_00102484:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00102488:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010248c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_00102490:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_00102494:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00102498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001028bc;
        }
    }
L_0010249c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001024a0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001024a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001024a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001024ac:;
    {
        cpu->r[14] = 0x001024b0u; fn_000978a8(cpu);
    }
L_001024b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001024b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001024b8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x444u);
    }
L_001024bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001024c0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001024c4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[0] = v;
    }
L_001024c8:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001024cc:;
    {
        wr8(cpu->r[3] + cpu->r[11], cpu->r[2]);
    }
L_001024d0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001024d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001024d8:;
    {
        cpu->r[14] = 0x001024dcu; fn_000a439c(cpu);
    }
L_001024dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001024e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102570;
        }
    }
L_001024e4:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001024e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001024ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001024f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_001024f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001027e0;
        }
    }
L_001024f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001024fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010252c;
        }
    }
L_00102500:;
    {
        cpu->r[3] = rd32(0x00102508u + + 0x40cu);
    }
L_00102504:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00102508:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010250c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00102510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102590;
        }
    }
L_00102514:;
    {
        cpu->r[6] = rd32(0x0010251cu + + 0x3fcu);
    }
L_00102518:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010251c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00102520:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102524:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00102528:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[2]);
    }
L_0010252c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00102530:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00102534:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00102538:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_0010253c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00102540:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00102544:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00102548:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0010254c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00102550:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00102554:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00102558:;
    {
        cpu->r[14] = 0x0010255cu; fn_000fd248(cpu);
    }
L_0010255c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102560:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00102564:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00102568:;
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
L_0010256c:;
    {
        return fn_0009e9e8(cpu);
    }
L_00102570:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102574:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00102578:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0010257c:;
    {
        cpu->r[14] = 0x00102580u; fn_000a439c(cpu);
    }
L_00102580:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001025b8;
        }
    }
L_00102588:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0010258c:;
    {
        goto L_001024e8;
    }
L_00102590:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00102594:;
    {
        cpu->r[14] = 0x00102598u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00102598:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010259c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102514;
        }
    }
L_001025a0:;
    {
        cpu->r[6] = rd32(0x001025a8u + + 0x370u);
    }
L_001025a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001025a8:;
    {
        cpu->r[14] = 0x001025acu; fn_00094228(cpu);
    }
L_001025ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001025b0:;
    {
        cpu->r[14] = 0x001025b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001025b4:;
    {
        goto L_00102518;
    }
L_001025b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001025bc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001025c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001025c4:;
    {
        cpu->r[14] = 0x001025c8u; fn_000a587c(cpu);
    }
L_001025c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001025cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001024e4;
        }
    }
L_001025d0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001025d4:;
    {
        goto L_001024e8;
    }
L_001025d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001025dc:;
    {
        cpu->r[14] = 0x001025e0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001025e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001025e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102484;
        }
    }
L_001025e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001025ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001025f0:;
    {
        cpu->r[14] = 0x001025f4u; fn_00094228(cpu);
    }
L_001025f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001025f8:;
    {
        cpu->r[14] = 0x001025fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001025fc:;
    {
        goto L_00102484;
    }
L_00102600:;
    {
        cpu->r[0] = rd32(0x00102608u + + 0x308u);
    }
L_00102604:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_00102608:;
    {
        cpu->r[1] = rd32(0x00102610u + + 0x304u);
    }
L_0010260c:;
    {
        cpu->r[10] = 0x0000004cu;
    }
L_00102610:;
    {
        cpu->r[11] = rd32(0x00102618u + + 0x300u);
    }
L_00102614:;
    {
        cpu->r[9] = 0x0000150du;
    }
L_00102618:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0010261c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00102620:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102624:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00102628:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_0010262c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00102630:;
    {
        wr32(cpu->r[8] + cpu->r[6], cpu->r[2]);
    }
L_00102634:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00102638:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001027bc;
        }
    }
L_0010263c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00102640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102674;
        }
    }
L_00102644:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00102648:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010264c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00102650:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00102654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102798;
        }
    }
L_00102658:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0010265c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_00102660:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_00102664:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00102668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010280c;
        }
    }
L_0010266c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102670:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102674:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00102678:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010267c:;
    {
        cpu->r[14] = 0x00102680u; fn_000978a8(cpu);
    }
L_00102680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102684:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102688:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x444u);
    }
L_0010268c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00102690:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00102694:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[0] = v;
    }
L_00102698:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0010269c:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[2]);
    }
L_001026a0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001026a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001026a8:;
    {
        cpu->r[14] = 0x001026acu; fn_000a439c(cpu);
    }
L_001026ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001026b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102708;
        }
    }
L_001026b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001026b8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001026bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001026c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_001026c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102734;
        }
    }
L_001026c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001026cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001026fc;
        }
    }
L_001026d0:;
    {
        cpu->r[3] = rd32(0x001026d8u + + 0x23cu);
    }
L_001026d4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001026d8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001026dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001026e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102750;
        }
    }
L_001026e4:;
    {
        cpu->r[6] = rd32(0x001026ecu + + 0x22cu);
    }
L_001026e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001026ec:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001026f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001026f4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001026f8:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[2]);
    }
L_001026fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00102700:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00102704:;
    {
        goto L_00102534;
    }
L_00102708:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010270c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00102710:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102714:;
    {
        cpu->r[14] = 0x00102718u; fn_000a439c(cpu);
    }
L_00102718:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010271c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102778;
        }
    }
L_00102720:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00102724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102728:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010272c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_00102730:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001026c8;
        }
    }
L_00102734:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00102738:;
    {
        cpu->r[14] = 0x0010273cu; fn_000a5db0(cpu);
    }
L_0010273c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001026c8;
        }
    }
L_00102744:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00102748:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_0010274c:;
    {
        goto L_00102620;
    }
L_00102750:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00102754:;
    {
        cpu->r[14] = 0x00102758u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00102758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010275c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001026e4;
        }
    }
L_00102760:;
    {
        cpu->r[6] = rd32(0x00102768u + + 0x1b0u);
    }
L_00102764:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102768:;
    {
        cpu->r[14] = 0x0010276cu; fn_00094228(cpu);
    }
L_0010276c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00102770:;
    {
        cpu->r[14] = 0x00102774u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00102774:;
    {
        goto L_001026e8;
    }
L_00102778:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010277c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102780:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102784:;
    {
        cpu->r[14] = 0x00102788u; fn_000a587c(cpu);
    }
L_00102788:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010278c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001026b4;
        }
    }
L_00102790:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00102794:;
    {
        goto L_00102724;
    }
L_00102798:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010279c:;
    {
        cpu->r[14] = 0x001027a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001027a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001027a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102658;
        }
    }
L_001027a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001027ac:;
    {
        cpu->r[14] = 0x001027b0u; fn_00094228(cpu);
    }
L_001027b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001027b4:;
    {
        cpu->r[14] = 0x001027b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001027b8:;
    {
        goto L_00102658;
    }
L_001027bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001027c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001027c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001027c8:;
    {
        cpu->r[14] = 0x001027ccu; fn_00096114(cpu);
    }
L_001027cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001027d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001027d4:;
    {
        wr32(cpu->r[8] + cpu->r[6], cpu->r[0]);
    }
L_001027d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001027dc:;
    {
        goto L_0010263c;
    }
L_001027e0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001027e4:;
    {
        cpu->r[14] = 0x001027e8u; fn_000a5db0(cpu);
    }
L_001027e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001027ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001024f8;
        }
    }
L_001027f0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001027f4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001027f8:;
    {
        goto L_0010243c;
    }
L_001027fc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00102800:;
    {
        cpu->r[14] = 0x00102808u;
    }
L_00102804:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00102808u)) return;
    }
L_00102808:;
    {
        goto L_0010234c;
    }
L_0010280c:;
    {
        cpu->r[14] = 0x00102810u; fn_000979a0(cpu);
    }
L_00102810:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00102814:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1f0u);
    }
L_00102818:;
    {
        wr8(cpu->r[3] + cpu->r[7], cpu->r[12]);
    }
L_0010281c:;
    {
        goto L_0010266c;
    }
L_00102820:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[12]);
    }
L_00102824:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00102828:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0010282c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_00102830:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_00102834:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00102838:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010283c:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00102840:;
    {
        cpu->r[14] = 0x00102844u; fn_00093f34(cpu);
    }
L_00102844:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102848:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010284c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00102850:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00102854:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_00102858:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_0010285c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00102860:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00102864:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00102868:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010286c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00102870:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00102874:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[12]);
    }
L_00102878:;
    {
        cpu->r[14] = 0x0010287cu; fn_000fd248(cpu);
    }
L_0010287c:;
    {
        goto L_0010234c;
    }
L_00102880:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_00102884:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00102888:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_0010288c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00102890:;
    {
        wr8(cpu->r[0] + + 0x8fcu, cpu->r[3]);
    }
L_00102894:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00102898:;
    {
        cpu->r[14] = 0x0010289cu; fn_00093f34(cpu);
    }
L_0010289c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001028a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001028a4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001028a8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001028ac:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001028b0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_001028b4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001028b8:;
    {
        goto L_0010285c;
    }
L_001028bc:;
    {
        cpu->r[14] = 0x001028c0u; fn_000979a0(cpu);
    }
L_001028c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001028c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001028c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001028cc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1f0u);
    }
L_001028d0:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001028d4:;
    {
        wr8(cpu->r[2] + cpu->r[7], cpu->r[0]);
    }
L_001028d8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001028dc:;
    {
        cpu->r[14] = 0x001028e0u; fn_0009e9e8(cpu);
    }
L_001028e0:;
    {
        goto L_0010249c;
    }
L_001028e4:;
    {
        cpu->r[14] = 0x001028e8u; fn_0010df70(cpu);
    }
L_001028e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001028ec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001028f0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001028f4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001028f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001028fc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00102900:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00102904:;
    {
        cpu->r[14] = 0x00102908u; fn_000fd248(cpu);
    }
L_00102908:;
    {
        goto L_0010234c;
    }
}

/* _ZN16GS_CarGarageMenu6UpdateEv @ 0010291c (arm) */
void fn_0010291c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010291c:;
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
L_00102920:;
    {
        cpu->r[5] = rd32(0x00102928u + + 0xb68u);
    }
L_00102924:;
    {
        cpu->r[7] = rd32(0x0010292cu + + 0xb68u);
    }
L_00102928:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010292c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00102934u, cpu->r[5], 0, 0);
    }
L_00102930:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00102934:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102938:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010293c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_00102940:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102cc4;
        }
    }
L_00102948:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010294c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00102950:;
    {
        cpu->r[14] = 0x00102954u; fn_000a2764(cpu);
    }
L_00102954:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00102958:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010295c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102ce8;
        }
    }
L_00102960:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102964:;
    {
        cpu->r[2] = 0x000002adu;
    }
L_00102968:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_0010296c:;
    {
        cpu->r[2] = 0x000002aau;
    }
L_00102970:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_00102974:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102978:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_0010297c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00102980:;
    {
        cpu->r[14] = 0x00102984u; fn_000978a8(cpu);
    }
L_00102984:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_00102988:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x96cu);
    }
L_0010298c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00102990:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00102994:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102998:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0010299c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x444u);
    }
L_001029a0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001029a4:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001029a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102e28;
        }
    }
L_001029ac:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_001029b0:;
    {
        cpu->r[14] = 0x001029b4u; fn_000f3430(cpu);
    }
L_001029b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001029b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102b0c;
        }
    }
L_001029bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001029c0:;
    {
        wr8(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001029c4:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_001029c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001029cc:;
    {
        cpu->r[14] = 0x001029d0u; fn_000f3430(cpu);
    }
L_001029d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001029d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102af0;
        }
    }
L_001029d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001029dc:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x95cu);
    }
L_001029e0:;
    {
        wr8(cpu->r[4] + + 0x95du, cpu->r[3]);
    }
L_001029e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001029e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001029f4;
        }
    }
L_001029ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001029f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102c08;
        }
    }
L_001029f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_001029f8:;
    {
        cpu->r[9] = 0x000004b9u;
    }
L_001029fc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00102a00:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_00102a04:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_00102a08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102a38;
        }
    }
L_00102a0c:;
    {
        cpu->r[6] = 0x00000018u;
    }
L_00102a10:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00102a14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102a18:;
    {
        cpu->r[14] = 0x00102a1cu; fn_000ec594(cpu);
    }
L_00102a1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102a20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00102a24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00102a28:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00102a2c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_00102a30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102a10;
        }
    }
L_00102a34:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x95cu);
    }
L_00102a38:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00102a3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00102a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102acc;
        }
    }
L_00102a44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102b80;
        }
    }
L_00102a4c:;
    {
        cpu->r[2] = rd32(0x00102a54u + + 0xa44u);
    }
L_00102a50:;
    {
        cpu->r[1] = 0x000004f9u;
    }
L_00102a54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102a58:;
    {
        cpu->r[2] = add_flags(cpu, 0x00102a60u, cpu->r[2], 0, 0);
    }
L_00102a5c:;
    {
        wr32(cpu->r[2] + + 0x34u, cpu->r[1]);
    }
L_00102a60:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_00102a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00102a68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00102a6c:;
    {
        cpu->r[2] = 0x10000000u;
    }
L_00102a70:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_00102a74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102a78:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_00102a7c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00102a80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00102a84:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00102a88:;
    {
        cpu->r[14] = 0x00102a90u;
    }
L_00102a8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00102a90u)) return;
    }
L_00102a90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_00102a94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00102a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102db8;
        }
    }
L_00102a9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00102aa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102d14;
        }
    }
L_00102aa4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102aa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102abc;
        }
    }
L_00102aac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102ab0:;
    {
        cpu->r[14] = 0x00102ab4u; fn_00114a58(cpu);
    }
L_00102ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102ac4;
        }
    }
L_00102abc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00102ac0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00102ac4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00102ac8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00102accu)) return;
    }
L_00102acc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102ad0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102ad4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x30u);
    }
L_00102ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102b2c;
        }
    }
L_00102adc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00102ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102ae4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00102ae8:;
    {
        cpu->r[14] = 0x00102aecu; fn_000ec594(cpu);
    }
L_00102aec:;
    {
        goto L_00102a74;
    }
L_00102af0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102af4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00102af8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102afc:;
    {
        cpu->r[14] = 0x00102b00u; fn_000a587c(cpu);
    }
L_00102b00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001029dc;
        }
    }
L_00102b08:;
    {
        goto L_001029d8;
    }
L_00102b0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102b10:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00102b14:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102b18:;
    {
        cpu->r[14] = 0x00102b1cu; fn_000a439c(cpu);
    }
L_00102b1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102b20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00102b24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001029c0;
        }
    }
L_00102b28:;
    {
        goto L_001029bc;
    }
L_00102b2c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x95du);
    }
L_00102b30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102adc;
        }
    }
L_00102b38:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102b3c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00102b40:;
    {
        cpu->r[1] = 0x00006774u;
    }
L_00102b44:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00102b48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102b6c;
        }
    }
L_00102b50:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x40u);
    }
L_00102b54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102b58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102b6c;
        }
    }
L_00102b5c:;
    {
        cpu->r[1] = 0x00006785u;
    }
L_00102b60:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_00102b64:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00102b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102adc;
        }
    }
L_00102b6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00102b70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102b74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00102b78:;
    {
        cpu->r[14] = 0x00102b7cu; fn_000ec4f0(cpu);
    }
L_00102b7c:;
    {
        goto L_00102a74;
    }
L_00102b80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102b84:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x95du);
    }
L_00102b88:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x30u);
    }
L_00102b8c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00102b90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00102b94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_00102b98:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00102b9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102dc8;
        }
    }
L_00102ba0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102ba4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00102ba8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102bac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00102bb0:;
    {
        cpu->r[14] = 0x00102bb4u; fn_000a50ac(cpu);
    }
L_00102bb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102f0c;
        }
    }
L_00102bbc:;
    {
        cpu->r[3] = rd32(0x00102bc4u + + 0x8d8u);
    }
L_00102bc0:;
    {
        cpu->r[12] = 0x000004f9u;
    }
L_00102bc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102bc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102bcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00102bd4u, cpu->r[3], 0, 0);
    }
L_00102bd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102bd4:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[12]);
    }
L_00102bd8:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x30u);
    }
L_00102bdc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00102be0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_00102be4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[6] = v;
    }
L_00102be8:;
    {
        cpu->r[14] = 0x00102becu; fn_000ec4f0(cpu);
    }
L_00102bec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102bf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102bf4:;
    {
        cpu->r[3] = 0x00000540u;
    }
L_00102bf8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00102bfc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_00102c00:;
    {
        wr32(cpu->r[2] + + 0x34u, cpu->r[3]);
    }
L_00102c04:;
    {
        goto L_00102a74;
    }
L_00102c08:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00102c0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001029f4;
        }
    }
L_00102c14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102c18:;
    {
        cpu->r[9] = 0x000004b9u;
    }
L_00102c1c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00102c20:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00102c24:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_00102c28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000018u;
        }
    }
L_00102c2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102c38;
        }
    }
L_00102c30:;
    {
        goto L_00102c60;
    }
L_00102c34:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00102c38:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00102c3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102c40:;
    {
        cpu->r[14] = 0x00102c44u; fn_000ec4f0(cpu);
    }
L_00102c44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102c48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00102c4c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00102c50:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00102c54:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00102c58:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_00102c5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102c34;
        }
    }
L_00102c60:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00102c64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00102c68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00102c6c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00102c70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00102a34;
        }
    }
L_00102c74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00102c78:;
    {
        cpu->r[14] = 0x000005ceu;
    }
L_00102c7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_00102c80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00102c84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00102c88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102e14;
        }
    }
L_00102c8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102c90:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00102c94:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_00102c98:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00102c9c:;
    {
        cpu->r[3] = 0x0000193cu;
    }
L_00102ca0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00102ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103088;
        }
    }
L_00102cac:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00102cb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102cb4:;
    {
        cpu->r[14] = 0x00102cb8u; fn_000ec594(cpu);
    }
L_00102cb8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x95cu);
    }
L_00102cbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102cc0:;
    {
        goto L_00102a38;
    }
L_00102cc4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00102cc8:;
    {
        cpu->r[14] = 0x00102cccu; fn_00099b28(cpu);
    }
L_00102ccc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00102cd0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00102cd4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00102cd8:;
    {
        cpu->r[14] = 0x00102cdcu; fn_000a2764(cpu);
    }
L_00102cdc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fdu);
    }
L_00102ce0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102ce4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102960;
        }
    }
L_00102ce8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102cec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00102cf0:;
    {
        cpu->r[14] = 0x00102cf4u; fn_000a5940(cpu);
    }
L_00102cf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00102cf8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00102960;
        }
    }
L_00102cfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102d00:;
    {
        cpu->r[2] = 0x000000afu;
    }
L_00102d04:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00102d08:;
    {
        cpu->r[2] = 0x000000acu;
    }
L_00102d0c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_00102d10:;
    {
        goto L_00102974;
    }
L_00102d14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102d18:;
    {
        cpu->r[14] = 0x00102d1cu; fn_0010da28(cpu);
    }
L_00102d1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102ac4;
        }
    }
L_00102d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00102d28:;
    {
        cpu->r[9] = 0x000004bau;
    }
L_00102d2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00102d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103260;
        }
    }
L_00102d34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00102f3c;
        }
    }
L_00102d38:;
    {
        cpu->r[2] = 0x00000415u;
    }
L_00102d3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00102d40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103008;
        }
    }
L_00102d44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001030a0;
        }
    }
L_00102d48:;
    {
        cpu->r[2] = 0x00000413u;
    }
L_00102d4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00102d50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102abc;
        }
    }
L_00102d54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102d58:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00102d5c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00102d60:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102d64:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_00102d68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102d6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_00102d70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_00102d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_00102d78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_00102d7c:;
    {
        cpu->r[14] = 0x00102d80u; imp_memcpy(cpu); /* memcpy */
    }
L_00102d80:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102d84:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_00102d88:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00102d8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00102d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001033fc;
        }
    }
L_00102d94:;
    {
        cpu->r[0] = 0x00000974u;
    }
L_00102d98:;
    {
        cpu->r[14] = 0x00102d9cu; fn_0018ba6c(cpu);
    }
L_00102d9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00102da0:;
    {
        cpu->r[14] = 0x00102da4u; fn_001a905c(cpu);
    }
L_00102da4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102da8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00102dac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00102db0:;
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
L_00102db4:;
    {
        return fn_000f361c(cpu);
    }
L_00102db8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102dbc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00102dc0:;
    {
        cpu->r[14] = 0x00102dc4u; fn_000eb59c(cpu);
    }
L_00102dc4:;
    {
        goto L_00102abc;
    }
L_00102dc8:;
    {
        cpu->r[1] = rd32(0x00102dd0u + + 0x6d0u);
    }
L_00102dcc:;
    {
        cpu->r[6] = 0x000004bau;
    }
L_00102dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102dd4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00102ddcu, cpu->r[1], 0, 0);
    }
L_00102dd8:;
    {
        wr32(cpu->r[1] + + 0x34u, cpu->r[6]);
    }
L_00102ddc:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x30u);
    }
L_00102de0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_00102de4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 3u, &shc));
    }
L_00102de8:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 3u, &shc); cpu->r[9] = v;
    }
L_00102dec:;
    {
        cpu->r[14] = 0x00102df0u; fn_000ec4f0(cpu);
    }
L_00102df0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102df4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102df8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_00102dfc:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[6]);
    }
L_00102e00:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[6]);
    }
L_00102e04:;
    {
        goto L_00102a74;
    }
L_00102e08:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_00102e0c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 1);
    }
L_00102e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102c8c;
        }
    }
L_00102e14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00102e18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_00102e1c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00102e20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102e08;
        }
    }
L_00102e24:;
    {
        goto L_00102a34;
    }
L_00102e28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102e2c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00102e30:;
    {
        cpu->r[9] = rd32(0x00102e38u + + 0x66cu);
    }
L_00102e34:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00102e38:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00102e3c:;
    {
        cpu->r[14] = 0x00102e40u; fn_000a2fcc(cpu);
    }
L_00102e40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00102e44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00102e48:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[2]);
    }
L_00102e4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102e50:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00102e54:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00102e58:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00102e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102ed4;
        }
    }
L_00102e60:;
    {
        cpu->r[6] = rd32(0x00102e68u + + 0x640u);
    }
L_00102e64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102e68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_00102e6c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[11]);
    }
L_00102e70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00102e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103184;
        }
    }
L_00102e78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102e7c:;
    {
        cpu->r[11] = 0x00001c4cu;
    }
L_00102e80:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_00102e84:;
    {
        cpu->r[14] = 0x00102e88u; fn_000978a8(cpu);
    }
L_00102e88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102e8c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00102e90:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00102e94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_00102e98:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00102e9c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00102ea0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00102ea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102fa0;
        }
    }
L_00102ea8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102eac:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00102eb0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102eb4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00102eb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102ebc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00102ec0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00102ec4:;
    {
        wr32(cpu->r[3] + + 0x84u, cpu->r[2]);
    }
L_00102ec8:;
    {
        cpu->r[14] = 0x00102eccu; fn_0009e9e8(cpu);
    }
L_00102ecc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102ed0:;
    {
        goto L_001029ac;
    }
L_00102ed4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00102ed8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00102edc:;
    {
        cpu->r[14] = 0x00102ee0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00102ee0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00102ee4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102e60;
        }
    }
L_00102eec:;
    {
        cpu->r[6] = rd32(0x00102ef4u + + 0x5b4u);
    }
L_00102ef0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00102ef4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102ef8:;
    {
        cpu->r[14] = 0x00102efcu; fn_00094228(cpu);
    }
L_00102efc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00102f00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00102f04:;
    {
        cpu->r[14] = 0x00102f08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00102f08:;
    {
        goto L_00102e64;
    }
L_00102f0c:;
    {
        cpu->r[3] = rd32(0x00102f14u + + 0x598u);
    }
L_00102f10:;
    {
        cpu->r[12] = 0x000004f9u;
    }
L_00102f14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00102f18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00102f1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00102f24u, cpu->r[3], 0, 0);
    }
L_00102f20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00102f24:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[12]);
    }
L_00102f28:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_00102f2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00102f30:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_00102f34:;
    {
        cpu->r[14] = 0x00102f38u; fn_000ec594(cpu);
    }
L_00102f38:;
    {
        goto L_00102a74;
    }
L_00102f3c:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_00102f40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00102f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102fc4;
        }
    }
L_00102f48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010313c;
        }
    }
L_00102f4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000540u, 1, 1);
    }
L_00102f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001031a8;
        }
    }
L_00102f54:;
    {
        cpu->r[2] = 0x000005c9u;
    }
L_00102f58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00102f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102abc;
        }
    }
L_00102f60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102f64:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00102f68:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102f6c:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_00102f70:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102f74:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_00102f78:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00102f7c:;
    {
        cpu->r[14] = 0x00102f80u; fn_0018ba6c(cpu);
    }
L_00102f80:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00102f84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00102f88:;
    {
        cpu->r[14] = 0x00102f8cu; fn_00100758(cpu);
    }
L_00102f8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00102f90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00102f94:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00102f98:;
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
L_00102f9c:;
    {
        return fn_000f361c(cpu);
    }
L_00102fa0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00102fa4:;
    {
        cpu->r[14] = 0x00102fa8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00102fa8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00102fac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00102ea8;
        }
    }
L_00102fb0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00102fb4:;
    {
        cpu->r[14] = 0x00102fb8u; fn_00094228(cpu);
    }
L_00102fb8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00102fbc:;
    {
        cpu->r[14] = 0x00102fc0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00102fc0:;
    {
        goto L_00102ea8;
    }
L_00102fc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00102fc8:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00102fcc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00102fd0:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_00102fd4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00102fd8:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_00102fdc:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00102fe0:;
    {
        cpu->r[14] = 0x00102fe4u; fn_0018ba6c(cpu);
    }
L_00102fe4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00102fe8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00102fec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00102ff0:;
    {
        cpu->r[14] = 0x00102ff4u; fn_00105604(cpu);
    }
L_00102ff4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00102ff8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00102ffc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103000:;
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
L_00103004:;
    {
        return fn_000f361c(cpu);
    }
L_00103008:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010300c:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00103010:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103014:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00103018:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_0010301c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00103020:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_00103024:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00103028:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_0010302c:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_00103030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103034:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[5]);
    }
L_00103038:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_0010303c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00103040:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_00103044:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00103048:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0010304c:;
    {
        cpu->r[14] = 0x00103050u; fn_0018ba6c(cpu);
    }
L_00103050:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103054:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00103058:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010305c:;
    {
        cpu->r[12] = 0x000004c1u;
    }
L_00103060:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00103064:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00103068:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0010306c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00103070:;
    {
        cpu->r[14] = 0x00103074u; fn_001239a4(cpu);
    }
L_00103074:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103078:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010307c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103080:;
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
L_00103084:;
    {
        return fn_000f361c(cpu);
    }
L_00103088:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0010308c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103090:;
    {
        cpu->r[14] = 0x00103094u; fn_000ec4f0(cpu);
    }
L_00103094:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x95cu);
    }
L_00103098:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010309c:;
    {
        goto L_00102a38;
    }
L_001030a0:;
    {
        cpu->r[2] = 0x00000416u;
    }
L_001030a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001030a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010320c;
        }
    }
L_001030ac:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001030b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001030b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102abc;
        }
    }
L_001030b8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x95cu);
    }
L_001030bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001030c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001030d0;
        }
    }
L_001030c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x95du);
    }
L_001030c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001030cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001030f4;
        }
    }
L_001030d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001030d4:;
    {
        cpu->r[14] = 0x00001c4cu;
    }
L_001030d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x968u);
    }
L_001030dc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001030e0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001030e4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001030e8:;
    {
        wr32(cpu->r[2] + cpu->r[14], cpu->r[12]);
    }
L_001030ec:;
    {
        cpu->r[14] = 0x001030f4u;
    }
L_001030f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001030f4u)) return;
    }
L_001030f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001030f8:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_001030fc:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_00103100:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00103104:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_00103108:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_0010310c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103110:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_00103114:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_00103118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_0010311c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_00103120:;
    {
        cpu->r[14] = 0x00103124u; imp_memcpy(cpu); /* memcpy */
    }
L_00103124:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103128:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010312c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00103130:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103134:;
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
L_00103138:;
    {
        return fn_000f34e8(cpu);
    }
L_0010313c:;
    {
        cpu->r[2] = 0x000005ceu;
    }
L_00103140:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010339c;
        }
    }
L_00103148:;
    {
        cpu->r[2] = 0x0000066cu;
    }
L_0010314c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00102abc;
        }
    }
L_00103154:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103158:;
    {
        cpu->r[0] = 0x00000968u;
    }
L_0010315c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00103160:;
    {
        cpu->r[14] = 0x00103164u; fn_0018ba6c(cpu);
    }
L_00103164:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00103168:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010316c:;
    {
        cpu->r[14] = 0x00103170u; fn_001098a8(cpu);
    }
L_00103170:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00103174:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00103178:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0010317c:;
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
L_00103180:;
    {
        return fn_000f361c(cpu);
    }
L_00103184:;
    {
        cpu->r[14] = 0x00103188u; fn_000979a0(cpu);
    }
L_00103188:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010318c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00103190:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1f0u);
    }
L_00103194:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00103198:;
    {
        wr8(cpu->r[2] + cpu->r[11], cpu->r[0]);
    }
L_0010319c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001031a0:;
    {
        cpu->r[14] = 0x001031a4u; fn_0009e9e8(cpu);
    }
L_001031a4:;
    {
        goto L_00102e78;
    }
L_001031a8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001031ac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001031b0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001031b4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001031b8:;
    {
        cpu->r[14] = 0x001031bcu; fn_000a50ac(cpu);
    }
L_001031bc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001031c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103420;
        }
    }
L_001031c4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001031c8:;
    {
        cpu->r[14] = 0x001031ccu; fn_0018ba6c(cpu);
    }
L_001031cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001031d0:;
    {
        cpu->r[14] = 0x001031d4u; fn_000a7570(cpu);
    }
L_001031d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001031d8:;
    {
        cpu->r[0] = 0x0000055au;
    }
L_001031dc:;
    {
        cpu->r[14] = 0x001031e0u; fn_000aeb58(cpu);
    }
L_001031e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001031e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001031e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001031ec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001031f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001031f4:;
    {
        cpu->r[14] = 0x001031f8u; fn_000a7bb0(cpu);
    }
L_001031f8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001031fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00103200:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103204:;
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
L_00103208:;
    {
        return fn_000f361c(cpu);
    }
L_0010320c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103210:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_00103214:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00103218:;
    {
        cpu->r[14] = 0x0010321cu; fn_0018ba6c(cpu);
    }
L_0010321c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00103220:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00103224:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00103228:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010322c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00103230:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00103234:;
    {
        cpu->r[12] = 0x000004c1u;
    }
L_00103238:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010323c:;
    {
        cpu->r[12] = 0x00000412u;
    }
L_00103240:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00103244:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00103248:;
    {
        cpu->r[14] = 0x0010324cu; fn_001239a4(cpu);
    }
L_0010324c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00103250:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00103254:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103258:;
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
L_0010325c:;
    {
        return fn_000f361c(cpu);
    }
L_00103260:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103264:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00103268:;
    {
        cpu->r[8] = 0x00001bd0u;
    }
L_0010326c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00103270:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00103274:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103278:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010327c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00103280:;
    {
        cpu->r[14] = 0x00103284u; fn_00096b5c(cpu);
    }
L_00103284:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00103288:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010328c:;
    {
        cpu->r[14] = 0x00103290u; fn_00096bb8(cpu);
    }
L_00103290:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103294:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001033dc;
        }
    }
L_00103298:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010329c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001032a0:;
    {
        cpu->r[14] = 0x001032a4u; fn_00096c6c(cpu);
    }
L_001032a4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001032a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001032ac:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_001032b0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001032b4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x438u);
    }
L_001032b8:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_001032bc:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001032c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001032c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_001032c8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x34u);
    }
L_001032cc:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_001032d0:;
    {
        cpu->r[6] = 0x00001c50u;
    }
L_001032d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001032d8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001032dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001032e0:;
    {
        cpu->r[14] = 0x001032e4u; fn_000a21a4(cpu);
    }
L_001032e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001032e8:;
    {
        cpu->r[14] = 0x00001c98u;
    }
L_001032ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001032f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001032f4:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[1]);
    }
L_001032f8:;
    {
        cpu->r[14] = 0x0000009cu;
    }
L_001032fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00103300:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00103304:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00103308:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010330c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x438u);
    }
L_00103310:;
    {
        uint32_t v = cpu->r[14] * cpu->r[8] + cpu->r[12]; cpu->r[8] = v;
    }
L_00103314:;
    {
        cpu->r[14] = 0x00001be0u;
    }
L_00103318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0010331c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00103320:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00103324:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[12]);
    }
L_00103328:;
    {
        cpu->r[14] = 0x0010332cu; fn_00097724(cpu);
    }
L_0010332c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00103330:;
    {
        cpu->r[14] = 0x00103334u; fn_000979a0(cpu);
    }
L_00103334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103338:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010333c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00103340:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00103344:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001b8u, 0, 0);
    }
L_00103348:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x4u);
    }
L_0010334c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00103350:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00103464;
        }
    }
L_00103354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00103358:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010335c:;
    {
        cpu->r[14] = 0x00103360u; fn_000f35e4(cpu);
    }
L_00103360:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103364:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00103368:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_0010336c:;
    {
        cpu->r[14] = 0x00103370u; fn_0018ba6c(cpu);
    }
L_00103370:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00103374:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103378:;
    {
        cpu->r[14] = 0x0010337cu; fn_000f22d4(cpu);
    }
L_0010337c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103380:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103384:;
    {
        cpu->r[14] = 0x00103388u; fn_000f361c(cpu);
    }
L_00103388:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0010338c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00103390:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00103394:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00103398:;
    {
        goto L_00102ac4;
    }
L_0010339c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001033a0:;
    {
        cpu->r[1] = 0x0000150du;
    }
L_001033a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001033a8:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_001033ac:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001033b0:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[12]);
    }
L_001033b4:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001033b8:;
    {
        cpu->r[14] = 0x001033bcu; fn_0018ba6c(cpu);
    }
L_001033bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001033c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001033c4:;
    {
        cpu->r[14] = 0x001033c8u; fn_00121548(cpu);
    }
L_001033c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001033cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001033d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001033d4:;
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
L_001033d8:;
    {
        return fn_000f361c(cpu);
    }
L_001033dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001033e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001033e4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001033e8:;
    {
        cpu->r[14] = 0x001033ecu; fn_00096b5c(cpu);
    }
L_001033ec:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_001033f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001033f4:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_001033f8:;
    {
        goto L_001032d0;
    }
L_001033fc:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00103400:;
    {
        cpu->r[14] = 0x00103404u; fn_0018ba6c(cpu);
    }
L_00103404:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103408:;
    {
        cpu->r[14] = 0x0010340cu; fn_0019fb34(cpu);
    }
L_0010340c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103410:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103414:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00103418:;
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
L_0010341c:;
    {
        return fn_000f361c(cpu);
    }
L_00103420:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_00103424:;
    {
        cpu->r[14] = 0x00103428u; fn_0018ba6c(cpu);
    }
L_00103428:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010342c:;
    {
        cpu->r[14] = 0x00103430u; fn_000a7570(cpu);
    }
L_00103430:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00103434:;
    {
        cpu->r[0] = 0x00000654u;
    }
L_00103438:;
    {
        cpu->r[14] = 0x0010343cu; fn_000aeb58(cpu);
    }
L_0010343c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00103440:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00103444:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00103448:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010344c:;
    {
        cpu->r[14] = 0x00103450u; fn_000a7bb0(cpu);
    }
L_00103450:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00103454:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00103458:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0010345c:;
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
L_00103460:;
    {
        return fn_000f361c(cpu);
    }
L_00103464:;
    {
        cpu->r[14] = 0x00103468u; fn_000979a0(cpu);
    }
L_00103468:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010346c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00103470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00103474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00103478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_0010347c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00103480:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00103484:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00103488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010348c:;
    {
        goto L_00103354;
    }
}

/* _ZN24GS_CarOptionsControlMenu17ApplyMenuSettingsEv @ 001034b0 (arm) */
void fn_001034b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001034b0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_001034b4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001034b8:;
    {
        wr32(cpu->r[0] + + 0x8dcu, cpu->r[3]);
    }
L_001034bc:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_001034c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001034c4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001034c8:;
    {
        wr32(cpu->r[0] + + 0x8f0u, cpu->r[2]);
    }
L_001034cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001034d0:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001034d4:;
    {
        cpu->r[3] = rd32(0x001034dcu + + 0xb0u);
    }
L_001034d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001034dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001034e4u, cpu->r[3], 0, 0);
    }
L_001034e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103560;
        }
    }
L_001034e4:;
    {
        cpu->r[2] = rd32(0x001034ecu + + 0xa4u);
    }
L_001034e8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001034ec:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_001034f0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001034f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001034fcu, cpu->r[2], 0, 0);
    }
L_001034f8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_001034fc:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00103500:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103504:;
    {
        cpu->r[1] = 0x000004f8u;
    }
L_00103508:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_0010350c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00103510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103538;
        }
    }
L_00103514:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00103518:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_0010351c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103520:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[2]);
    }
L_00103524:;
    {
        cpu->r[2] = rd32(0x0010352cu + + 0x68u);
    }
L_00103528:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010352c:;
    {
        cpu->r[2] = 0x00000403u;
    }
L_00103530:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00103534:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_00103538:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010353c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00103540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103544:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00103548:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010354c:;
    {
        cpu->r[14] = 0x00103554u;
    }
L_00103550:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103554u)) return;
    }
L_00103554:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00103558:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_0010355c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00103560u)) return;
    }
L_00103560:;
    {
        cpu->r[1] = rd32(0x00103568u + + 0x30u);
    }
L_00103564:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00103568:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_0010356c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00103570:;
    {
        cpu->r[1] = add_flags(cpu, 0x00103578u, cpu->r[1], 0, 0);
    }
L_00103574:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[0]);
    }
L_00103578:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_0010357c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_00103580:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_00103584:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[0]);
    }
L_00103588:;
    {
        goto L_00103500;
    }
}

/* _ZN24GS_CarOptionsControlMenu8DoActionEii @ 0010359c (arm) */
void fn_0010359c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010359c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_001035a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001035a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001035a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001035ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001035b0u)) return;
        }
    }
L_001035b0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001035b4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001035b8:;
    {
        wr8(cpu->r[0] + + 0x94fu, cpu->r[6]);
    }
L_001035bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001035c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001035fc;
        }
    }
L_001035c4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001035c8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001035cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001035d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_001035d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001035d8:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_001035dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001035e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_001035e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001035e8:;
    {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
    }
L_001035ec:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001035f0:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_001035f4:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_001035f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001035fcu)) return;
    }
L_001035fc:;
    {
        wr8(cpu->r[0] + + 0x94fu, cpu->r[12]);
    }
L_00103600:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00103604:;
    {
        cpu->r[14] = 0x0010360cu;
    }
L_00103608:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010360cu)) return;
    }
L_0010360c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103610u)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenu8isKindOfEi @ 00103610 (arm) */
void fn_00103610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103610:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000cu, 1, 1);
    }
L_00103614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00103618:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010361c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_17 @ 00103620 (arm) */
void fn_00103620(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103620:;
    {
        cpu->r[3] = rd32(0x00103628u + + 0x58u);
    }
L_00103624:;
    {
        cpu->r[1] = rd32(0x0010362cu + + 0x58u);
    }
L_00103628:;
    {
        cpu->r[3] = add_flags(cpu, 0x00103630u, cpu->r[3], 0, 0);
    }
L_0010362c:;
    {
        cpu->r[0] = rd32(0x00103634u + + 0x54u);
    }
L_00103630:;
    {
        cpu->r[2] = rd32(0x00103638u + + 0x54u);
    }
L_00103634:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00103638:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0010363c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00103644u, cpu->r[2], 0, 0);
    }
L_00103640:;
    {
        cpu->r[3] = rd32(0x00103648u + + 0x48u);
    }
L_00103644:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00103648:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010364c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00103654u, cpu->r[3], 0, 0);
    }
L_00103650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_00103654:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_00103658:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0010365c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00103660:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x0000010cu, 1, 0);
    }
L_00103664:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000000d2u, 1, 0);
    }
L_00103668:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_0010366c:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[2]);
    }
L_00103670:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[1]);
    }
L_00103674:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_00103678:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[2]);
    }
L_0010367c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN24GS_CarOptionsControlMenu18ProcessOnMouseDragEv @ 00103694 (arm) */
void fn_00103694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103694:;
    {
        return fn_000eb988(cpu);
    }
}

/* _ZN24GS_CarOptionsControlMenu24ProcessOnMouseButtonDownEv @ 00103698 (arm) */
void fn_00103698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103698:;
    {
        cpu->r[3] = rd32(0x001036a0u + + 0x24u);
    }
L_0010369c:;
    {
        cpu->r[2] = rd32(0x001036a4u + + 0x24u);
    }
L_001036a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001036a8u, cpu->r[3], 0, 0);
    }
L_001036a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001036a8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001036ac:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001036b0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_001036b4:;
    {
        cpu->r[14] = 0x001036b8u; fn_00110498(cpu);
    }
L_001036b8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001036bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001036c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001036c4u)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenu11DoBarActionEii @ 001036cc (arm) */
void fn_001036cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001036cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001036d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001036d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001036d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001036dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001036e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103774;
        }
    }
L_001036e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001036e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_001036ec:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_001036f0:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001036f4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001036f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001036fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00103700:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00103704:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00103708:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010370c:;
    {
        cpu->r[14] = 0x00103710u; fn_00093f34(cpu);
    }
L_00103710:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00103714:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00103718:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010371c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00103720:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00103724:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00103728:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0010372c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00103730:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00103734:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103738:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010373c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00103740:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00103744:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00103748:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010374c:;
    {
        cpu->r[14] = 0x00103750u; fn_000fd248(cpu);
    }
L_00103750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00103754:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00103758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103788;
        }
    }
L_0010375c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010377c;
        }
    }
L_00103760:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00103764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103788;
        }
    }
L_00103768:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010376c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001037a8;
        }
    }
L_00103774:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00103778:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010377cu)) return;
    }
L_0010377c:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00103780:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103798;
        }
    }
L_00103788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010378c:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00103790:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00103794:;
    {
        goto L_00103774;
    }
L_00103798:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_0010379c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001037a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103774;
        }
    }
L_001037a4:;
    {
        goto L_00103788;
    }
L_001037a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001037ac:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001037b0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_001037b4:;
    {
        cpu->r[14] = 0x001037b8u; fn_00093f34(cpu);
    }
L_001037b8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001037bc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001037c0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001037c4:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001037c8:;
    {
        goto L_00103774;
    }
}

/* _ZN24GS_CarOptionsControlMenuD1Ev @ 001037cc (arm) */
void fn_001037cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001037cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001037d0:;
    {
        cpu->r[4] = rd32(0x001037d8u + + 0x48u);
    }
L_001037d4:;
    {
        cpu->r[2] = rd32(0x001037dcu + + 0x48u);
    }
L_001037d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001037dc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001037e4u, cpu->r[4], 0, 0);
    }
L_001037e0:;
    {
        cpu->r[3] = rd32(0x001037e8u + + 0x40u);
    }
L_001037e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001037e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001037ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001037f0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001037f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001037f8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001037fc:;
    {
        cpu->r[14] = 0x00103800u; fn_0009e9e8(cpu);
    }
L_00103800:;
    {
        cpu->r[3] = rd32(0x00103808u + + 0x24u);
    }
L_00103804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00103808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010380c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00103810:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00103814:;
    {
        cpu->r[14] = 0x00103818u; fn_000ec21c(cpu);
    }
L_00103818:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010381c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103820u)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenuD0Ev @ 00103830 (arm) */
void fn_00103830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103830:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00103834:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00103838:;
    {
        cpu->r[14] = 0x0010383cu; fn_001037cc(cpu);
    }
L_0010383c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103840:;
    {
        cpu->r[14] = 0x00103844u; fn_0018ba20(cpu);
    }
L_00103844:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103848:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010384cu)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenuD2Ev @ 0010384c (arm) */
void fn_0010384c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010384c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00103850:;
    {
        cpu->r[4] = rd32(0x00103858u + + 0x48u);
    }
L_00103854:;
    {
        cpu->r[2] = rd32(0x0010385cu + + 0x48u);
    }
L_00103858:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010385c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00103864u, cpu->r[4], 0, 0);
    }
L_00103860:;
    {
        cpu->r[3] = rd32(0x00103868u + + 0x40u);
    }
L_00103864:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00103868:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010386c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103870:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00103874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00103878:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010387c:;
    {
        cpu->r[14] = 0x00103880u; fn_0009e9e8(cpu);
    }
L_00103880:;
    {
        cpu->r[3] = rd32(0x00103888u + + 0x24u);
    }
L_00103884:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00103888:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010388c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00103890:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00103894:;
    {
        cpu->r[14] = 0x00103898u; fn_000ec21c(cpu);
    }
L_00103898:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010389c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001038a0u)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenuC1Eb @ 001038b0 (arm) */
void fn_001038b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001038b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001038b4:;
    {
        cpu->r[4] = rd32(0x001038bcu + + 0x30u);
    }
L_001038b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001038bc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001038c0:;
    {
        cpu->r[14] = 0x001038c4u; fn_0010ffa8(cpu);
    }
L_001038c4:;
    {
        cpu->r[3] = rd32(0x001038ccu + + 0x24u);
    }
L_001038c8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001038d0u, cpu->r[4], 0, 0);
    }
L_001038cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001038d0:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_001038d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001038d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001038dc:;
    {
        wr8(cpu->r[5] + + 0x94fu, cpu->r[2]);
    }
L_001038e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001038e4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001038e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001038ecu)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenuC2Eb @ 001038f4 (arm) */
void fn_001038f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001038f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001038f8:;
    {
        cpu->r[4] = rd32(0x00103900u + + 0x30u);
    }
L_001038fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103900:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00103904:;
    {
        cpu->r[14] = 0x00103908u; fn_0010ffa8(cpu);
    }
L_00103908:;
    {
        cpu->r[3] = rd32(0x00103910u + + 0x24u);
    }
L_0010390c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00103914u, cpu->r[4], 0, 0);
    }
L_00103910:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103914:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_00103918:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010391c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103920:;
    {
        wr8(cpu->r[5] + + 0x94fu, cpu->r[2]);
    }
L_00103924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00103928:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010392c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103930u)) return;
    }
}

/* _ZN24GS_CarOptionsControlMenu11InitSpritesEv @ 00103938 (arm) */
void fn_00103938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103938:;
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
L_0010393c:;
    {
        cpu->r[4] = rd32(0x00103944u + + 0x2ccu);
    }
L_00103940:;
    {
        cpu->r[7] = rd32(0x00103948u + + 0x2ccu);
    }
L_00103944:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103948:;
    {
        cpu->r[4] = add_flags(cpu, 0x00103950u, cpu->r[4], 0, 0);
    }
L_0010394c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00103950:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00103954:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00103958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103a8c;
        }
    }
L_0010395c:;
    {
        cpu->r[6] = rd32(0x00103964u + + 0x2b4u);
    }
L_00103960:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00103964:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00103968:;
    {
        cpu->r[14] = 0x0010396cu; fn_00096a08(cpu);
    }
L_0010396c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103970:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103974:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00103978:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010397c:;
    {
        cpu->r[14] = 0x00103980u; fn_0018aa44(cpu);
    }
L_00103980:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00103984:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00103988:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010398c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00103990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103bd4;
        }
    }
L_00103994:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00103998:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010399c:;
    {
        cpu->r[14] = 0x001039a0u; fn_00096a08(cpu);
    }
L_001039a0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001039a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001039a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001039ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001039b0:;
    {
        cpu->r[14] = 0x001039b4u; fn_0018aa44(cpu);
    }
L_001039b4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001039b8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001039bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001039c0:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_001039c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103b98;
        }
    }
L_001039c8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_001039cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001039d0:;
    {
        cpu->r[14] = 0x001039d4u; fn_00096a08(cpu);
    }
L_001039d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001039d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001039dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001039e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001039e4:;
    {
        cpu->r[14] = 0x001039e8u; fn_0018aa44(cpu);
    }
L_001039e8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001039ec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001039f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001039f4:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_001039f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103b5c;
        }
    }
L_001039fc:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00103a00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00103a04:;
    {
        cpu->r[14] = 0x00103a08u; fn_00096a08(cpu);
    }
L_00103a08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103a0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103a10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00103a14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103a18:;
    {
        cpu->r[14] = 0x00103a1cu; fn_0018aa44(cpu);
    }
L_00103a1c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00103a20:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00103a24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00103a28:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00103a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103b20;
        }
    }
L_00103a30:;
    {
        cpu->r[3] = rd32(0x00103a38u + + 0x1e4u);
    }
L_00103a34:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00103a38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103a3c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00103a40:;
    {
        cpu->r[14] = 0x00103a44u; fn_000f3430(cpu);
    }
L_00103a44:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103a48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103a4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00103a50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103a54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_00103a58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_00103a5c:;
    {
        cpu->r[14] = 0x00103a60u; fn_0018aa44(cpu);
    }
L_00103a60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00103a64:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00103a68:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00103a6c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00103a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103ad0;
        }
    }
L_00103a74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00103a78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103a7c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00103a80:;
    {
        cpu->r[14] = 0x00103a84u; fn_0018aa44(cpu);
    }
L_00103a84:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00103a88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103a8cu)) return;
    }
L_00103a8c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103a90:;
    {
        cpu->r[14] = 0x00103a94u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103a94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010395c;
        }
    }
L_00103a9c:;
    {
        cpu->r[6] = rd32(0x00103aa4u + + 0x174u);
    }
L_00103aa0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103aa4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103aa8:;
    {
        cpu->r[14] = 0x00103aacu; fn_0018aa20(cpu);
    }
L_00103aac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103ab0:;
    {
        cpu->r[14] = 0x00103ab4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103ab4:;
    {
        cpu->r[3] = rd32(0x00103abcu + + 0x164u);
    }
L_00103ab8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103abc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103ac0:;
    {
        cpu->r[3] = rd32(0x00103ac8u + + 0x15cu);
    }
L_00103ac4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103ac8:;
    {
        cpu->r[14] = 0x00103accu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103acc:;
    {
        goto L_00103960;
    }
L_00103ad0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00103ad4:;
    {
        cpu->r[14] = 0x00103ad8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103ad8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103a74;
        }
    }
L_00103ae0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103ae4:;
    {
        cpu->r[14] = 0x00103ae8u; fn_0018aa20(cpu);
    }
L_00103ae8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00103aec:;
    {
        cpu->r[14] = 0x00103af0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103af0:;
    {
        cpu->r[3] = rd32(0x00103af8u + + 0x128u);
    }
L_00103af4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103af8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103afc:;
    {
        cpu->r[3] = rd32(0x00103b04u + + 0x120u);
    }
L_00103b00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103b04:;
    {
        cpu->r[14] = 0x00103b08u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103b08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00103b0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00103b10:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00103b14:;
    {
        cpu->r[14] = 0x00103b18u; fn_0018aa44(cpu);
    }
L_00103b18:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00103b1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103b20u)) return;
    }
L_00103b20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103b24:;
    {
        cpu->r[14] = 0x00103b28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103b28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103a30;
        }
    }
L_00103b30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103b34:;
    {
        cpu->r[14] = 0x00103b38u; fn_0018aa20(cpu);
    }
L_00103b38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103b3c:;
    {
        cpu->r[14] = 0x00103b40u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103b40:;
    {
        cpu->r[3] = rd32(0x00103b48u + + 0xd8u);
    }
L_00103b44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103b48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103b4c:;
    {
        cpu->r[3] = rd32(0x00103b54u + + 0xd0u);
    }
L_00103b50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103b54:;
    {
        cpu->r[14] = 0x00103b58u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103b58:;
    {
        goto L_00103a30;
    }
L_00103b5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103b60:;
    {
        cpu->r[14] = 0x00103b64u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103b64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001039fc;
        }
    }
L_00103b6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103b70:;
    {
        cpu->r[14] = 0x00103b74u; fn_0018aa20(cpu);
    }
L_00103b74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103b78:;
    {
        cpu->r[14] = 0x00103b7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103b7c:;
    {
        cpu->r[3] = rd32(0x00103b84u + + 0x9cu);
    }
L_00103b80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103b84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103b88:;
    {
        cpu->r[3] = rd32(0x00103b90u + + 0x94u);
    }
L_00103b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103b90:;
    {
        cpu->r[14] = 0x00103b94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103b94:;
    {
        goto L_001039fc;
    }
L_00103b98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103b9c:;
    {
        cpu->r[14] = 0x00103ba0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103ba0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001039c8;
        }
    }
L_00103ba8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103bac:;
    {
        cpu->r[14] = 0x00103bb0u; fn_0018aa20(cpu);
    }
L_00103bb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103bb4:;
    {
        cpu->r[14] = 0x00103bb8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103bb8:;
    {
        cpu->r[3] = rd32(0x00103bc0u + + 0x60u);
    }
L_00103bbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103bc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103bc4:;
    {
        cpu->r[3] = rd32(0x00103bccu + + 0x58u);
    }
L_00103bc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103bcc:;
    {
        cpu->r[14] = 0x00103bd0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103bd0:;
    {
        goto L_001039c8;
    }
L_00103bd4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103bd8:;
    {
        cpu->r[14] = 0x00103bdcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103bdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103be0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103994;
        }
    }
L_00103be4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103be8:;
    {
        cpu->r[14] = 0x00103becu; fn_0018aa20(cpu);
    }
L_00103bec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00103bf0:;
    {
        cpu->r[14] = 0x00103bf4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103bf4:;
    {
        cpu->r[3] = rd32(0x00103bfcu + + 0x24u);
    }
L_00103bf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00103bfc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103c00:;
    {
        cpu->r[3] = rd32(0x00103c08u + + 0x1cu);
    }
L_00103c04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00103c08:;
    {
        cpu->r[14] = 0x00103c0cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00103c0c:;
    {
        goto L_00103994;
    }
}

/* _ZN24GS_CarOptionsControlMenu6UpdateEv @ 00103c28 (arm) */
void fn_00103c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00103c28:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00103c2c:;
    {
        cpu->r[5] = rd32(0x00103c34u + + 0x5b0u);
    }
L_00103c30:;
    {
        cpu->r[3] = rd32(0x00103c38u + + 0x5b0u);
    }
L_00103c34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00103c38:;
    {
        cpu->r[5] = add_flags(cpu, 0x00103c40u, cpu->r[5], 0, 0);
    }
L_00103c3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00103c40:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103c44:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00103c48:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00103c4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103ce4;
        }
    }
L_00103c50:;
    {
        cpu->r[7] = rd32(0x00103c58u + + 0x594u);
    }
L_00103c54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103c58:;
    {
        cpu->r[14] = 0x00103c5cu; fn_00093fd8(cpu);
    }
L_00103c5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00103c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103d18;
        }
    }
L_00103c64:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103c68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103c70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00103c74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_00103c78:;
    {
        cpu->r[14] = 0x00103c80u;
    }
L_00103c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103c80u)) return;
    }
L_00103c80:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x94u);
    }
L_00103c84:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00103c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103d40;
        }
    }
L_00103c8c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00103c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103ddc;
        }
    }
L_00103c94:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00103c98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cdc;
        }
    }
L_00103c9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103ca0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103ca4:;
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
L_00103ca8:;
    {
        return fn_00114a58(cpu);
    }
L_00103cac:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00103cb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103e94;
        }
    }
L_00103cb8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00103f48;
        }
    }
L_00103cbc:;
    {
        cpu->r[2] = 0x000004e8u;
    }
L_00103cc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104030;
        }
    }
L_00103cc8:;
    {
        cpu->r[2] = 0x000004ecu;
    }
L_00103ccc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103fb0;
        }
    }
L_00103cd4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00103cd8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_00103cdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103ce0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00103ce4u)) return;
    }
L_00103ce4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103ce8:;
    {
        cpu->r[14] = 0x00103cecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00103cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103c50;
        }
    }
L_00103cf4:;
    {
        cpu->r[7] = rd32(0x00103cfcu + + 0x4f0u);
    }
L_00103cf8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103cfc:;
    {
        cpu->r[14] = 0x00103d00u; fn_00094228(cpu);
    }
L_00103d00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103d04:;
    {
        cpu->r[14] = 0x00103d08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00103d08:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00103d0c:;
    {
        cpu->r[14] = 0x00103d10u; fn_00093fd8(cpu);
    }
L_00103d10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00103d14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103c64;
        }
    }
L_00103d18:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103d1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103d20:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103d24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00103d28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_00103d2c:;
    {
        cpu->r[14] = 0x00103d34u;
    }
L_00103d30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103d34u)) return;
    }
L_00103d34:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x94u);
    }
L_00103d38:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00103d3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103c8c;
        }
    }
L_00103d40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103d44:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00103d48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103d4c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00103d50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00103d54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_00103d58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_00103d5c:;
    {
        cpu->r[14] = 0x00103d60u; fn_000eb59c(cpu);
    }
L_00103d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103d64:;
    {
        cpu->r[14] = 0x00103d68u; fn_000eb420(cpu);
    }
L_00103d68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103d6c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00103d70:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00103d74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00103d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103d7c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_00103d80:;
    {
        cpu->r[5] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00103d84:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00103d88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cdc;
        }
    }
L_00103d8c:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_00103d90:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00103d94:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00103d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103d9c:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_00103da0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00103da4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103dac:;
    {
        cpu->r[14] = 0x00103db0u; fn_000c1cd8(cpu);
    }
L_00103db0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00103db4:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_00103db8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00103dbc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00103dc0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00103dc4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00103dc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103dcc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_00103dd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103dd4:;
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
L_00103dd8:;
    {
        return fn_000bd908(cpu);
    }
L_00103ddc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103de0:;
    {
        cpu->r[14] = 0x00103de4u; fn_0010da28(cpu);
    }
L_00103de4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103dec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00103df0:;
    {
        cpu->r[2] = 0x000004e2u;
    }
L_00103df4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010411c;
        }
    }
L_00103dfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00103cac;
        }
    }
L_00103e00:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00103e04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103e78;
        }
    }
L_00103e0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00103ee4;
        }
    }
L_00103e10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00103e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103e18:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x94fu);
    }
L_00103e1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00103e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00103cdc;
        }
    }
L_00103e24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103e28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103e2c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00103e30:;
    {
        cpu->r[14] = 0x00103e38u;
    }
L_00103e34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103e38u)) return;
    }
L_00103e38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103e3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103e40:;
    {
        cpu->r[3] = rd32(0x00103e48u + + 0x3a8u);
    }
L_00103e44:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_00103e48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103e4c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00103e50:;
    {
        cpu->r[14] = 0x00103e54u; fn_0018ba6c(cpu);
    }
L_00103e54:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103e58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00103e5c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103e60:;
    {
        cpu->r[14] = 0x00103e64u; fn_0012234c(cpu);
    }
L_00103e64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103e68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103e6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103e70:;
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
L_00103e74:;
    {
        return fn_000f36dc(cpu);
    }
L_00103e78:;
    {
        cpu->r[3] = rd32(0x00103e80u + + 0x370u);
    }
L_00103e7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00103e80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103e84:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00103e88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103e8c:;
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
L_00103e90:;
    {
        return fn_000f34e8(cpu);
    }
L_00103e94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103e9c:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00103ea0:;
    {
        cpu->r[14] = 0x00103ea8u;
    }
L_00103ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103ea8u)) return;
    }
L_00103ea8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103eb0:;
    {
        cpu->r[3] = rd32(0x00103eb8u + + 0x338u);
    }
L_00103eb4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00103eb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103ebc:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00103ec0:;
    {
        cpu->r[14] = 0x00103ec4u; fn_0018ba6c(cpu);
    }
L_00103ec4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103ec8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103ecc:;
    {
        cpu->r[14] = 0x00103ed0u; fn_001038b0(cpu);
    }
L_00103ed0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103ed4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103ed8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103edc:;
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
L_00103ee0:;
    {
        return fn_000f36dc(cpu);
    }
L_00103ee4:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00103ee8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103eec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001040d8;
        }
    }
L_00103ef0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00103ef4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103ef8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103efc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103f00:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_00103f04:;
    {
        cpu->r[14] = 0x00103f0cu;
    }
L_00103f08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103f0cu)) return;
    }
L_00103f0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103f10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103f14:;
    {
        cpu->r[3] = rd32(0x00103f1cu + + 0x2d4u);
    }
L_00103f18:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00103f1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103f20:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00103f24:;
    {
        cpu->r[14] = 0x00103f28u; fn_0018ba6c(cpu);
    }
L_00103f28:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103f2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103f30:;
    {
        cpu->r[14] = 0x00103f34u; fn_00127fd8(cpu);
    }
L_00103f34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103f38:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103f3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103f40:;
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
L_00103f44:;
    {
        return fn_000f36dc(cpu);
    }
L_00103f48:;
    {
        cpu->r[2] = 0x00000536u;
    }
L_00103f4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104170;
        }
    }
L_00103f54:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00103f58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00103f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103f60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00103f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00103f68:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00103f6c:;
    {
        cpu->r[14] = 0x00103f74u;
    }
L_00103f70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00103f74u)) return;
    }
L_00103f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00103f78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cd4;
        }
    }
L_00103f7c:;
    {
        cpu->r[3] = rd32(0x00103f84u + + 0x26cu);
    }
L_00103f80:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00103f84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103f88:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00103f8c:;
    {
        cpu->r[14] = 0x00103f90u; fn_0018ba6c(cpu);
    }
L_00103f90:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00103f94:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00103f98:;
    {
        cpu->r[14] = 0x00103f9cu; fn_00124ea8(cpu);
    }
L_00103f9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00103fa0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00103fa4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00103fa8:;
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
L_00103fac:;
    {
        return fn_000f36dc(cpu);
    }
L_00103fb0:;
    {
        cpu->r[14] = 0x00103fb4u; fn_000979a0(cpu);
    }
L_00103fb4:;
    {
        cpu->r[14] = 0x00103fb8u; fn_00093fd8(cpu);
    }
L_00103fb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00103fbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00103fc0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
        }
    }
L_00103fc4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
        }
    }
L_00103fc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00103cdc;
        }
    }
L_00103fcc:;
    {
        cpu->r[14] = 0x00103fd0u; fn_000979a0(cpu);
    }
L_00103fd0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00103fd4:;
    {
        cpu->r[14] = 0x00103fd8u; fn_000979a0(cpu);
    }
L_00103fd8:;
    {
        cpu->r[3] = rd32(0x00103fe0u + + 0x210u);
    }
L_00103fdc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00103fe0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00103fe4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00103fe8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00103fec:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00103ff0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_00103ff4:;
    {
        cpu->r[5] = rd32(cpu->r[14] + + 0x490u);
    }
L_00103ff8:;
    {
        cpu->r[14] = rd8(cpu->r[0] + + 0xcu);
    }
L_00103ffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00104000:;
    {
        uint32_t v = cpu->r[14] ^ 0x00000001u; cpu->r[14] = v;
    }
L_00104004:;
    {
        wr8(cpu->r[6] + + 0xcu, cpu->r[14]);
    }
L_00104008:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010400c:;
    {
        cpu->r[14] = 0x00104010u; fn_000fd248(cpu);
    }
L_00104010:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104014:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00104018:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0010401c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00104020:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00104024:;
    {
        cpu->r[3] = 0x00005f52u;
    }
L_00104028:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0010402c:;
    {
        goto L_00103cd4;
    }
L_00104030:;
    {
        cpu->r[14] = 0x00104034u; fn_000979a0(cpu);
    }
L_00104034:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00104038:;
    {
        cpu->r[14] = 0x0010403cu; fn_000979a0(cpu);
    }
L_0010403c:;
    {
        cpu->r[14] = 0x00104040u; fn_00093fd8(cpu);
    }
L_00104040:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00104044:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104048:;
    {
        cpu->r[14] = 0x0010404cu; fn_00093fd0(cpu);
    }
L_0010404c:;
    {
        cpu->r[14] = 0x00104050u; fn_000979a0(cpu);
    }
L_00104050:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00104054:;
    {
        cpu->r[14] = 0x00104058u; fn_00093fe0(cpu);
    }
L_00104058:;
    {
        cpu->r[14] = 0x0010405cu; fn_000979a0(cpu);
    }
L_0010405c:;
    {
        cpu->r[14] = 0x00104060u; fn_00093fd8(cpu);
    }
L_00104060:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00104064:;
    {
        cpu->r[14] = 0x00104068u; fn_000979a0(cpu);
    }
L_00104068:;
    {
        cpu->r[14] = 0x0010406cu; fn_00093fe8(cpu);
    }
L_0010406c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00104070:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001041d4;
        }
    }
L_00104074:;
    {
        cpu->r[0] = rd32(0x0010407cu + + 0x174u);
    }
L_00104078:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010407c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00104080:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00104084:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00104088:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010408c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00104090:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00104094:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104098:;
    {
        cpu->r[14] = 0x0010409cu; fn_000fd248(cpu);
    }
L_0010409c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001040a0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001040a4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001040a8:;
    {
        cpu->r[14] = 0x001040acu; fn_000979a0(cpu);
    }
L_001040ac:;
    {
        cpu->r[14] = 0x001040b0u; fn_00093fd8(cpu);
    }
L_001040b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001040b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001040c4;
        }
    }
L_001040b8:;
    {
        cpu->r[14] = 0x001040bcu; fn_000979a0(cpu);
    }
L_001040bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001040c0:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001040c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001040c8:;
    {
        cpu->r[3] = 0x00005f52u;
    }
L_001040cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001040d0:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001040d4:;
    {
        goto L_00103cd4;
    }
L_001040d8:;
    {
        cpu->r[0] = rd32(0x001040e0u + + 0x110u);
    }
L_001040dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001040e0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001040e4:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001040e8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001040ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001040f0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001040f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001040f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001040fc:;
    {
        cpu->r[14] = 0x00104100u; fn_000fd248(cpu);
    }
L_00104100:;
    {
        cpu->r[14] = 0x00104104u; fn_000979a0(cpu);
    }
L_00104104:;
    {
        cpu->r[14] = 0x00104108u; fn_00094064(cpu);
    }
L_00104108:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010410c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00104110:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00104114:;
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
L_00104118:;
    {
        return fn_000f34e8(cpu);
    }
L_0010411c:;
    {
        cpu->r[0] = rd32(0x00104124u + + 0xccu);
    }
L_00104120:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104124:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00104128:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010412c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00104130:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00104134:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00104138:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010413c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104140:;
    {
        cpu->r[14] = 0x00104144u; fn_000fd248(cpu);
    }
L_00104144:;
    {
        cpu->r[14] = 0x00104148u; fn_000979a0(cpu);
    }
L_00104148:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010414c:;
    {
        cpu->r[14] = 0x00104150u; fn_000979a0(cpu);
    }
L_00104150:;
    {
        cpu->r[14] = 0x00104154u; fn_00093fa8(cpu);
    }
L_00104154:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 0);
    }
L_00104158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010415c:;
    {
        cpu->r[14] = 0x00104160u; fn_00093fa0(cpu);
    }
L_00104160:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00104164:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00104168:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010416c:;
    {
        goto L_00103cd4;
    }
L_00104170:;
    {
        cpu->r[14] = 0x00104174u; fn_000979a0(cpu);
    }
L_00104174:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_00104178:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010417c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001041c4;
        }
    }
L_00104180:;
    {
        cpu->r[14] = 0x00104184u; fn_000979a0(cpu);
    }
L_00104184:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00104188:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_0010418c:;
    {
        cpu->r[0] = rd32(0x00104194u + + 0x5cu);
    }
L_00104190:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104194:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00104198:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010419c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001041a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001041a4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001041a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001041ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001041b0:;
    {
        cpu->r[14] = 0x001041b4u; fn_000fd248(cpu);
    }
L_001041b4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001041b8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001041bc:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001041c0:;
    {
        goto L_00103cd4;
    }
L_001041c4:;
    {
        cpu->r[14] = 0x001041c8u; fn_000979a0(cpu);
    }
L_001041c8:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001041cc:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_001041d0:;
    {
        goto L_0010418c;
    }
L_001041d4:;
    {
        cpu->r[14] = 0x001041d8u; fn_000979a0(cpu);
    }
L_001041d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001041dc:;
    {
        cpu->r[14] = 0x001041e0u; fn_00093fd0(cpu);
    }
L_001041e0:;
    {
        goto L_00104074;
    }
}

/* _ZN24GS_CarOptionsControlMenu6RenderEv @ 001041f4 (arm) */
void fn_001041f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001041f4:;
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
L_001041f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001041fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00104200:;
    {
        cpu->r[14] = 0x00104204u; fn_0010de00(cpu);
    }
L_00104204:;
    {
        cpu->r[5] = rd32(0x0010420cu + + 0x2f8u);
    }
L_00104208:;
    {
        cpu->r[5] = add_flags(cpu, 0x00104210u, cpu->r[5], 0, 0);
    }
L_0010420c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104468;
        }
    }
L_00104214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00104218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010421c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001042d0;
        }
    }
L_00104220:;
    {
        cpu->r[3] = rd32(0x00104228u + + 0x2e0u);
    }
L_00104224:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00104228:;
    {
        cpu->r[9] = rd32(0x00104230u + + 0x2dcu);
    }
L_0010422c:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_00104230:;
    {
        cpu->r[11] = 0x000004ecu;
    }
L_00104234:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_00104238:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0010423c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00104240:;
    {
        goto L_001042a0;
    }
L_00104244:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00104248:;
    {
        cpu->r[14] = 0x0010424cu; fn_00093fd8(cpu);
    }
L_0010424c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00104250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00104254:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x908u);
        }
    }
L_00104258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104278;
        }
    }
L_0010425c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00104260:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00104264:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00104268:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x908u, cpu->r[10]);
        }
    }
L_0010426c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00990000u;
        }
    }
L_00104270:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x908u, cpu->r[3]);
        }
    }
L_00104274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00104278:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010427c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00104280:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104284:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00104288:;
    {
        cpu->r[14] = 0x00104290u;
    }
L_0010428c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00104290u)) return;
    }
L_00104290:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00104294:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_00104298:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010429c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001042dc;
        }
    }
L_001042a0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001042a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001042a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00104244;
        }
    }
L_001042ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001042b0:;
    {
        cpu->r[14] = 0x001042b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001042b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001042b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104244;
        }
    }
L_001042bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001042c0:;
    {
        cpu->r[14] = 0x001042c4u; fn_00094228(cpu);
    }
L_001042c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001042c8:;
    {
        cpu->r[14] = 0x001042ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001042cc:;
    {
        goto L_00104244;
    }
L_001042d0:;
    {
        cpu->r[3] = rd32(0x001042d8u + + 0x230u);
    }
L_001042d4:;
    {
        cpu->r[9] = rd32(0x001042dcu + + 0x230u);
    }
L_001042d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001042dc:;
    {
        cpu->r[3] = rd32(0x001042e4u + + 0x22cu);
    }
L_001042e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001042e4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001042e8:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_001042ec:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001042f0:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_001042f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001042f8:;
    {
        cpu->r[3] = rd32(0x00104300u + + 0x214u);
    }
L_001042fc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_00104300:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00104304:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x0000003cu, 1, 0);
        }
    }
L_00104308:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010430c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00104310:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00104328;
        }
    }
L_00104314:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00104318:;
    {
        cpu->r[14] = 0x0010431cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010431c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001044b8;
        }
    }
L_00104324:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104328:;
    {
        cpu->r[7] = rd32(0x00104330u + + 0x1e8u);
    }
L_0010432c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00104330:;
    {
        cpu->r[14] = 0x00104334u; fn_00096a08(cpu);
    }
L_00104334:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00104338:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010433c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00104340:;
    {
        cpu->r[14] = 0x00104344u; fn_0018aa44(cpu);
    }
L_00104344:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104348:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0010434c:;
    {
        cpu->r[0] = 0x00000539u;
    }
L_00104350:;
    {
        cpu->r[14] = 0x00104354u; fn_000aeb58(cpu);
    }
L_00104354:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00104358:;
    {
        cpu->r[3] = 0x0000013fu;
    }
L_0010435c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00104360:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104364:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104368:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010436c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00104370:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104374:;
    {
        cpu->r[14] = 0x00104378u; fn_000ad19c(cpu);
    }
L_00104378:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010437c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00104380:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00104384:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0xacu);
    }
L_00104388:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010438c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00104390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104470;
        }
    }
L_00104394:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00104398:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010439c:;
    {
        cpu->r[14] = 0x001043a0u; fn_00093fd8(cpu);
    }
L_001043a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001043a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001043f0;
        }
    }
L_001043a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001043ac:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001043b0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001043b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001043b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001043dc;
        }
    }
L_001043bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001043c0:;
    {
        cpu->r[14] = 0x001043c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001043c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001043c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001043dc;
        }
    }
L_001043cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001043d0:;
    {
        cpu->r[14] = 0x001043d4u; fn_00094228(cpu);
    }
L_001043d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001043d8:;
    {
        cpu->r[14] = 0x001043dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001043dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001043e0:;
    {
        cpu->r[14] = 0x001043e4u; fn_00093fd8(cpu);
    }
L_001043e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001043e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001043ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001043f4;
        }
    }
L_001043f0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001043f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001043f8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001043fc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00104400:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00104404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104494;
        }
    }
L_00104408:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0010440c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00104410:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00104414:;
    {
        cpu->r[0] = 0x0000015du;
    }
L_00104418:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_0010441c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_00104420:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00104424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104428:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_0010442c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00104430:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00104434:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00104438:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010443c:;
    {
        cpu->r[14] = 0x00104440u; guest_call(cpu, cpu->r[7]);
    }
L_00104440:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104444:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00104448:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0010444c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00104450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001044f0;
        }
    }
L_00104454:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104458:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010445c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104460:;
    {
        cpu->r[14] = 0x00104468u;
    }
L_00104464:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00104468u)) return;
    }
L_00104468:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0010446c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00104470u)) return;
    }
L_00104470:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00104474:;
    {
        cpu->r[14] = 0x00104478u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00104478:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010447c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104394;
        }
    }
L_00104480:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00104484:;
    {
        cpu->r[14] = 0x00104488u; fn_00094228(cpu);
    }
L_00104488:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010448c:;
    {
        cpu->r[14] = 0x00104490u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00104490:;
    {
        goto L_00104394;
    }
L_00104494:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00104498:;
    {
        cpu->r[14] = 0x0010449cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010449c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001044a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104408;
        }
    }
L_001044a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001044a8:;
    {
        cpu->r[14] = 0x001044acu; fn_00094228(cpu);
    }
L_001044ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001044b0:;
    {
        cpu->r[14] = 0x001044b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001044b4:;
    {
        goto L_00104408;
    }
L_001044b8:;
    {
        cpu->r[7] = rd32(0x001044c0u + + 0x58u);
    }
L_001044bc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001044c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001044c4:;
    {
        cpu->r[14] = 0x001044c8u; fn_0018aa20(cpu);
    }
L_001044c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001044cc:;
    {
        cpu->r[14] = 0x001044d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001044d0:;
    {
        cpu->r[3] = rd32(0x001044d8u + + 0x44u);
    }
L_001044d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001044d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001044dc:;
    {
        cpu->r[3] = rd32(0x001044e4u + + 0x3cu);
    }
L_001044e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001044e4:;
    {
        cpu->r[14] = 0x001044e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001044e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001044ec:;
    {
        goto L_0010432c;
    }
L_001044f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001044f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001044f8:;
    {
        cpu->r[14] = 0x00104500u;
    }
L_001044fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00104500u)) return;
    }
L_00104500:;
    {
        goto L_00104454;
    }
}

/* _ZN24GS_CarOptionsControlMenu13GetMenuStringEi @ 00104524 (arm) */
void fn_00104524(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104524:;
    {
        cpu->r[3] = 0x000004e8u;
    }
L_00104528:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010452c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00104530:;
    {
        cpu->r[5] = rd32(0x00104538u + + 0x37cu);
    }
L_00104534:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00104538:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010453c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00104544u, cpu->r[5], 0, 0);
    }
L_00104540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001045d4;
        }
    }
L_00104544:;
    {
        cpu->r[3] = 0x00000536u;
    }
L_00104548:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010454c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001046a0;
        }
    }
L_00104550:;
    {
        cpu->r[3] = 0x000004e2u;
    }
L_00104554:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00104558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001046d0;
        }
    }
L_0010455c:;
    {
        cpu->r[3] = 0x000004ecu;
    }
L_00104560:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00104564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104578;
        }
    }
L_00104568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010456c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00104570:;
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
L_00104574:;
    {
        return fn_0010e02c(cpu);
    }
L_00104578:;
    {
        cpu->r[3] = rd32(0x00104580u + + 0x338u);
    }
L_0010457c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00104580:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00104584:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00104588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001045ac;
        }
    }
L_0010458c:;
    {
        cpu->r[6] = rd32(0x00104594u + + 0x328u);
    }
L_00104590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00104594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104598:;
    {
        cpu->r[1] = 0x000004ecu;
    }
L_0010459c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xcu);
    }
L_001045a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001045a4:;
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
L_001045a8:;
    {
        return fn_0010ed78(cpu);
    }
L_001045ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001045b0:;
    {
        cpu->r[14] = 0x001045b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001045b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001045b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010458c;
        }
    }
L_001045bc:;
    {
        cpu->r[6] = rd32(0x001045c4u + + 0x2f8u);
    }
L_001045c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001045c4:;
    {
        cpu->r[14] = 0x001045c8u; fn_00094228(cpu);
    }
L_001045c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001045cc:;
    {
        cpu->r[14] = 0x001045d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001045d0:;
    {
        goto L_00104590;
    }
L_001045d4:;
    {
        cpu->r[7] = rd32(0x001045dcu + + 0x2dcu);
    }
L_001045d8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001045dc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001045e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001045e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104678;
        }
    }
L_001045e8:;
    {
        cpu->r[6] = rd32(0x001045f0u + + 0x2ccu);
    }
L_001045ec:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001045f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001045f4:;
    {
        cpu->r[14] = 0x001045f8u; fn_00093fd8(cpu);
    }
L_001045f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001045fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010483c;
        }
    }
L_00104600:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00104604:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00104608:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010460c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104818;
        }
    }
L_00104610:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00104614:;
    {
        cpu->r[14] = 0x00104618u; fn_00093fd8(cpu);
    }
L_00104618:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010461c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001047dc;
        }
    }
L_00104620:;
    {
        cpu->r[14] = 0x00104624u; fn_000979a0(cpu);
    }
L_00104624:;
    {
        cpu->r[14] = 0x00104628u; fn_00093fd8(cpu);
    }
L_00104628:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0010462c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104878;
        }
    }
L_00104630:;
    {
        cpu->r[14] = 0x00104634u; fn_000979a0(cpu);
    }
L_00104634:;
    {
        cpu->r[14] = 0x00104638u; fn_00093fd8(cpu);
    }
L_00104638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0010463c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001047a0;
        }
    }
L_00104640:;
    {
        cpu->r[1] = rd32(0x00104648u + + 0x278u);
    }
L_00104644:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00104648:;
    {
        cpu->r[2] = rd32(0x00104650u + + 0x274u);
    }
L_0010464c:;
    {
        cpu->r[14] = 0x000001b3u;
    }
L_00104650:;
    {
        cpu->r[3] = rd32(0x00104658u + + 0x270u);
    }
L_00104654:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010465cu, cpu->r[1], 0, 0);
    }
L_00104658:;
    {
        cpu->r[12] = rd32(0x00104660u + + 0x26cu);
    }
L_0010465c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00104664u, cpu->r[2], 0, 0);
    }
L_00104660:;
    {
        cpu->r[3] = add_flags(cpu, 0x00104668u, cpu->r[3], 0, 0);
    }
L_00104664:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00104668:;
    {
        cpu->r[12] = add_flags(cpu, 0x00104670u, cpu->r[12], 0, 0);
    }
L_0010466c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00104670:;
    {
        cpu->r[14] = 0x00104674u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00104674:;
    {
        goto L_00104734;
    }
L_00104678:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010467c:;
    {
        cpu->r[14] = 0x00104680u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00104680:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001045e8;
        }
    }
L_00104688:;
    {
        cpu->r[6] = rd32(0x00104690u + + 0x22cu);
    }
L_0010468c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00104690:;
    {
        cpu->r[14] = 0x00104694u; fn_00094228(cpu);
    }
L_00104694:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00104698:;
    {
        cpu->r[14] = 0x0010469cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010469c:;
    {
        goto L_001045ec;
    }
L_001046a0:;
    {
        cpu->r[3] = rd32(0x001046a8u + + 0x210u);
    }
L_001046a4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001046a8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001046ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001046b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104768;
        }
    }
L_001046b4:;
    {
        cpu->r[6] = rd32(0x001046bcu + + 0x200u);
    }
L_001046b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001046bc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_001046c0:;
    {
        cpu->r[3] = 0x00000537u;
    }
L_001046c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001046c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001046cc:;
    {
        goto L_00104568;
    }
L_001046d0:;
    {
        cpu->r[3] = rd32(0x001046d8u + + 0x1e0u);
    }
L_001046d4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001046d8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001046dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001046e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104740;
        }
    }
L_001046e4:;
    {
        cpu->r[6] = rd32(0x001046ecu + + 0x1d0u);
    }
L_001046e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001046ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_001046f0:;
    {
        cpu->r[14] = 0x001046f4u; fn_00093fa8(cpu);
    }
L_001046f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001046f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001046fc:;
    {
        cpu->r[0] = 0x000004e2u;
    }
L_00104700:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000018u;
        }
    }
L_00104704:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000019u;
        }
    }
L_00104708:;
    {
        cpu->r[14] = 0x0010470cu; fn_000aeb28(cpu);
    }
L_0010470c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104710:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00104714:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00104718:;
    {
        cpu->r[14] = 0x0010471cu; fn_000aeb58(cpu);
    }
L_0010471c:;
    {
        cpu->r[1] = rd32(0x00104724u + + 0x1acu);
    }
L_00104720:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00104724:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010472cu, cpu->r[1], 0, 0);
    }
L_00104728:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010472c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104730:;
    {
        cpu->r[14] = 0x00104734u; fn_000ae830(cpu);
    }
L_00104734:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104738:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0010473c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00104740u)) return;
    }
L_00104740:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104744:;
    {
        cpu->r[14] = 0x00104748u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00104748:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010474c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001046e4;
        }
    }
L_00104750:;
    {
        cpu->r[6] = rd32(0x00104758u + + 0x164u);
    }
L_00104754:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00104758:;
    {
        cpu->r[14] = 0x0010475cu; fn_00094228(cpu);
    }
L_0010475c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104760:;
    {
        cpu->r[14] = 0x00104764u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00104764:;
    {
        goto L_001046e8;
    }
L_00104768:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010476c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00104770:;
    {
        cpu->r[14] = 0x00104774u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00104774:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00104778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010477c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001046b4;
        }
    }
L_00104780:;
    {
        cpu->r[6] = rd32(0x00104788u + + 0x134u);
    }
L_00104784:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00104788:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010478c:;
    {
        cpu->r[14] = 0x00104790u; fn_00094228(cpu);
    }
L_00104790:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104794:;
    {
        cpu->r[14] = 0x00104798u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00104798:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0010479c:;
    {
        goto L_001046b8;
    }
L_001047a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001047a4:;
    {
        cpu->r[0] = 0x000004e8u;
    }
L_001047a8:;
    {
        cpu->r[14] = 0x001047acu; fn_000aeb28(cpu);
    }
L_001047ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001047b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_001047b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001047b8:;
    {
        cpu->r[0] = 0x000006a2u;
    }
L_001047bc:;
    {
        cpu->r[14] = 0x001047c0u; fn_000aeb28(cpu);
    }
L_001047c0:;
    {
        cpu->r[1] = rd32(0x001047c8u + + 0x10cu);
    }
L_001047c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001047c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001047d0u, cpu->r[1], 0, 0);
    }
L_001047cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001047d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001047d4:;
    {
        cpu->r[14] = 0x001047d8u; fn_000ae830(cpu);
    }
L_001047d8:;
    {
        goto L_00104734;
    }
L_001047dc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001047e0:;
    {
        cpu->r[0] = 0x000004e8u;
    }
L_001047e4:;
    {
        cpu->r[14] = 0x001047e8u; fn_000aeb28(cpu);
    }
L_001047e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001047ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_001047f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001047f4:;
    {
        cpu->r[0] = 0x000004e9u;
    }
L_001047f8:;
    {
        cpu->r[14] = 0x001047fcu; fn_000aeb28(cpu);
    }
L_001047fc:;
    {
        cpu->r[1] = rd32(0x00104804u + + 0xd4u);
    }
L_00104800:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00104804:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010480cu, cpu->r[1], 0, 0);
    }
L_00104808:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010480c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104810:;
    {
        cpu->r[14] = 0x00104814u; fn_000ae830(cpu);
    }
L_00104814:;
    {
        goto L_00104734;
    }
L_00104818:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010481c:;
    {
        cpu->r[14] = 0x00104820u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00104820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104610;
        }
    }
L_00104828:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010482c:;
    {
        cpu->r[14] = 0x00104830u; fn_00094228(cpu);
    }
L_00104830:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00104834:;
    {
        cpu->r[14] = 0x00104838u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00104838:;
    {
        goto L_00104610;
    }
L_0010483c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104840:;
    {
        cpu->r[0] = 0x000004e8u;
    }
L_00104844:;
    {
        cpu->r[14] = 0x00104848u; fn_000aeb28(cpu);
    }
L_00104848:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010484c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00104850:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00104854:;
    {
        cpu->r[0] = 0x000004eau;
    }
L_00104858:;
    {
        cpu->r[14] = 0x0010485cu; fn_000aeb28(cpu);
    }
L_0010485c:;
    {
        cpu->r[1] = rd32(0x00104864u + + 0x78u);
    }
L_00104860:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00104864:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010486cu, cpu->r[1], 0, 0);
    }
L_00104868:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010486c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104870:;
    {
        cpu->r[14] = 0x00104874u; fn_000ae830(cpu);
    }
L_00104874:;
    {
        goto L_00104734;
    }
L_00104878:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010487c:;
    {
        cpu->r[0] = 0x000004e8u;
    }
L_00104880:;
    {
        cpu->r[14] = 0x00104884u; fn_000aeb28(cpu);
    }
L_00104884:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104888:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010488c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00104890:;
    {
        cpu->r[0] = 0x000004ebu;
    }
L_00104894:;
    {
        cpu->r[14] = 0x00104898u; fn_000aeb28(cpu);
    }
L_00104898:;
    {
        cpu->r[1] = rd32(0x001048a0u + + 0x40u);
    }
L_0010489c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001048a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001048a8u, cpu->r[1], 0, 0);
    }
L_001048a4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001048a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001048ac:;
    {
        cpu->r[14] = 0x001048b0u; fn_000ae830(cpu);
    }
L_001048b0:;
    {
        goto L_00104734;
    }
}

/* _ZN16GS_CarTuningMenu8isKindOfEi @ 001048e4 (arm) */
void fn_001048e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001048e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000033u, 1, 1);
    }
L_001048e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001048ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001048f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_18 @ 001048f4 (arm) */
void fn_001048f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001048f4:;
    {
        cpu->r[3] = rd32(0x001048fcu + + 0x20u);
    }
L_001048f8:;
    {
        cpu->r[1] = rd32(0x00104900u + + 0x20u);
    }
L_001048fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00104904u, cpu->r[3], 0, 0);
    }
L_00104900:;
    {
        cpu->r[2] = rd32(0x00104908u + + 0x1cu);
    }
L_00104904:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00104908:;
    {
        cpu->r[2] = add_flags(cpu, 0x00104910u, cpu->r[2], 0, 0);
    }
L_0010490c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00104910:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00104914:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00104918:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_CarTuningMenu15ComputeBarPropsEP4CCariiiiii @ 00104928 (arm) */
void fn_00104928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104928:;
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
L_0010492c:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00104930:;
    {
        cpu->r[4] = rd32(0x00104938u + + 0x270u);
    }
L_00104934:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00104938:;
    {
        cpu->r[1] = rd32(0x00104940u + + 0x26cu);
    }
L_0010493c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00104944u, cpu->r[4], 0, 0);
    }
L_00104940:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00104944:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00104948:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0010494c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00104950:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00104954:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104958:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0010495c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00104960:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00104964:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00104968:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0010496c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00104970:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00104974:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00104978:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0010497c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00104980:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00104984:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00104988:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010498c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00104990:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x70u);
    }
L_00104994:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x74u);
    }
L_00104998:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x78u);
    }
L_0010499c:;
    {
        cpu->r[14] = 0x001049a0u; fn_000978a8(cpu);
    }
L_001049a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001049a4:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x001049acu + + 0x1dcu);
    }
L_001049a8:;
    {
        cpu->r[14] = 0x001049acu; fn_00169c9c(cpu);
    }
L_001049ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_001049b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_001049b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_001049b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_001049bc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001049c0:;
    {
        cpu->r[3] = 0x00001904u;
    }
L_001049c4:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[6];
    }
L_001049c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001049cc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3]);
    }
L_001049d0:;
    {
        cpu->r[3] = 0x00001910u;
    }
L_001049d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001049d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001049dc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_001049e0:;
    {
        cpu->r[3] = 0x00001908u;
    }
L_001049e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000028u;
        }
    }
L_001049e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001049ec:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_001049f0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001049f4:;
    {
        cpu->r[3] = 0x0000190cu;
    }
L_001049f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001049fc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3]);
    }
L_00104a00:;
    {
        cpu->r[5] = rd32(0x00104a08u + + 0x1a8u);
    }
L_00104a04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000027u;
        }
    }
L_00104a08:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00104a0c:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_00104a10:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000028u;
        }
    }
L_00104a14:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000027u;
        }
    }
L_00104a18:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00104a1c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00104a20:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = 0x00000028u;
        }
    }
L_00104a24:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = 0x00000027u;
        }
    }
L_00104a28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00104a2c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00104a30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000028u;
        }
    }
L_00104a34:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000027u;
        }
    }
L_00104a38:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00104a3c:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x00104a44u + + 0x14cu);
    }
L_00104a40:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_00104a44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000027u;
        }
    }
L_00104a48:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00104a4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00104a50:;
    {
        vfp_vadd(cpu, 12, 12, 8);
    }
L_00104a54:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00104a58:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00104a5c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[14]);
    }
L_00104a60:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00104a64:;
    {
        vfp_vadd(cpu, 13, 13, 9);
    }
L_00104a68:;
    {
        vfp_vadd(cpu, 14, 14, 10);
    }
L_00104a6c:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_00104a70:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[7];
    }
L_00104a74:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00104a78:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[9];
    }
L_00104a7c:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00104a80:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00104a84:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[10];
    }
L_00104a88:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00104a8c:;
    {
        vfp_vadd(cpu, 12, 12, 8);
    }
L_00104a90:;
    {
        vfp_vadd(cpu, 13, 13, 9);
    }
L_00104a94:;
    {
        vfp_vadd(cpu, 14, 14, 10);
    }
L_00104a98:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_00104a9c:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_00104aa0:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00104aa4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00104aa8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00104aac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00104ab0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00104ab4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00104ab8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00104abc:;
    {
        cpu->r[14] = 0x00104ac0u; fn_00093f34(cpu);
    }
L_00104ac0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00104ac4:;
    {
        cpu->r[3] = 0x000001f4u;
    }
L_00104ac8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_00104acc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_00104ad0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00104ad4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_00104ad8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00104adc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00104ae0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00104ae4:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_00104ae8:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_00104aec:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_00104af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00104af8u + + 0xa8u);
    }
L_00104af4:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_00104af8:;
    {
        cpu->r[14] = 0x00104afcu; fn_00093f34(cpu);
    }
L_00104afc:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00104b00:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_00104b04:;
    {
        cpu->r[14] = 0x00104b08u; fn_00093f34(cpu);
    }
L_00104b08:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00104b0c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_00104b10:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00104b14:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_00104b18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000027u;
        }
    }
L_00104b1c:;
    {
        *vfp_d(cpu,6) = *vfp_d(cpu,10);
    }
L_00104b20:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_00104b24:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[0];
    }
L_00104b28:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_00104b2c:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_00104b30:;
    {
        *vfp_d(cpu,7) = *vfp_d(cpu,6);
    }
L_00104b34:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00104b3cu + + 0x68u);
    }
L_00104b38:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[11];
    }
L_00104b3c:;
    {
        vfp_vmla(cpu, 17, 7, 13);
    }
L_00104b40:;
    {
        vfp_vdiv(cpu, 13, 16, 17);
    }
L_00104b44:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_00104b48:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 9);
    }
L_00104b4c:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x00104b54u + + 0x44u);
    }
L_00104b50:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00104b54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00104b58:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) * *vfp_d(cpu, 5);
    }
L_00104b5c:;
    {
        cpu->r[14] = 0x00104b60u; fn_00093f34(cpu);
    }
L_00104b60:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00104b64:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_00104b68:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) + *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_00104b6c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) / *vfp_d(cpu, 10);
    }
L_00104b70:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00104b74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00104b78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00104b7c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00104b80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00104b84u)) return;
    }
}

/* _ZN16GS_CarTuningMenu15ComputeBarPropsEiiiiii @ 00104bb8 (arm) */
void fn_00104bb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104bb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9a0u);
    }
L_00104bbc:;
    {
        return fn_00104928(cpu);
    }
}

/* _ZN16GS_CarTuningMenu15ComputeBarPropsEv @ 00104bc0 (arm) */
void fn_00104bc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104bc0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104bc4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00104bc8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00104bcc:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00104bd0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00104bd4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00104bd8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104bdc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00104be0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00104be4:;
    {
        cpu->r[14] = 0x00104be8u; fn_00104bb8(cpu);
    }
L_00104be8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00104bec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00104bf0u)) return;
    }
}

/* _ZN16GS_CarTuningMenu20ProcessPanelResponseEv @ 00104bf0 (arm) */
void fn_00104bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104bf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x970u);
    }
L_00104bf4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00104bf8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00104bfc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00104c00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00104c04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00104c08:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00104c20;
        case 1: goto L_00104c40;
        case 2: goto L_00104c20;
        case 3: goto L_00104c20;
        default: guest_unimplemented(cpu, 0x00104c08u); return; }
        }
    }
L_00104c0c:;
    {
        goto L_00104c38;
    }
L_00104c20:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00104c24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00104c28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x96cu);
    }
L_00104c2c:;
    {
        wr32(cpu->r[0] + + 0x970u, cpu->r[1]);
    }
L_00104c30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00104c34:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_00104c38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00104c3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00104c40u)) return;
    }
L_00104c40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00104c44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00104c48:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_00104c4c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00104c50:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00104c54:;
    {
        cpu->r[14] = 0x00104c58u; fn_000978a8(cpu);
    }
L_00104c58:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x96cu);
    }
L_00104c5c:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_00104c60:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00104c64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104c38;
        }
    }
L_00104c68:;
    {
        cpu->r[7] = 0x00005556u;
    }
L_00104c6c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x968u);
    }
L_00104c70:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x5555u << 16);
    }
L_00104c74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104c78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00104c7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00104c80:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[12]; cpu->r[3] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_00104c84:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_00104c88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00104c8c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00104c90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00104c94:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_00104c98:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00104c9c:;
    {
        cpu->r[14] = 0x00104ca0u; fn_000a55bc(cpu);
    }
L_00104ca0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104d14;
        }
    }
L_00104ca8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104cac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00104cb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00104cb4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00104cb8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00104cbc:;
    {
        cpu->r[14] = 0x00104cc0u; fn_000a239c(cpu);
    }
L_00104cc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00104cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104cdc;
        }
    }
L_00104cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00104ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00104cd0:;
    {
        cpu->r[14] = 0x00104cd8u;
    }
L_00104cd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00104cd8u)) return;
    }
L_00104cd8:;
    {
        goto L_00104c38;
    }
L_00104cdc:;
    {
        cpu->r[1] = rd32(0x00104ce4u + + 0x68u);
    }
L_00104ce0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00104ce4:;
    {
        cpu->r[2] = rd32(0x00104cecu + + 0x64u);
    }
L_00104ce8:;
    {
        cpu->r[14] = 0x00000260u;
    }
L_00104cec:;
    {
        cpu->r[3] = rd32(0x00104cf4u + + 0x60u);
    }
L_00104cf0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00104cf8u, cpu->r[1], 0, 0);
    }
L_00104cf4:;
    {
        cpu->r[12] = rd32(0x00104cfcu + + 0x5cu);
    }
L_00104cf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00104d00u, cpu->r[2], 0, 0);
    }
L_00104cfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00104d04u, cpu->r[3], 0, 0);
    }
L_00104d00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00104d04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00104d0cu, cpu->r[12], 0, 0);
    }
L_00104d08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104d0c:;
    {
        cpu->r[14] = 0x00104d10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00104d10:;
    {
        goto L_00104cc8;
    }
L_00104d14:;
    {
        cpu->r[1] = rd32(0x00104d1cu + + 0x40u);
    }
L_00104d18:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00104d1c:;
    {
        cpu->r[2] = rd32(0x00104d24u + + 0x3cu);
    }
L_00104d20:;
    {
        cpu->r[14] = 0x0000025eu;
    }
L_00104d24:;
    {
        cpu->r[3] = rd32(0x00104d2cu + + 0x38u);
    }
L_00104d28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00104d30u, cpu->r[1], 0, 0);
    }
L_00104d2c:;
    {
        cpu->r[12] = rd32(0x00104d34u + + 0x34u);
    }
L_00104d30:;
    {
        cpu->r[2] = add_flags(cpu, 0x00104d38u, cpu->r[2], 0, 0);
    }
L_00104d34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00104d3cu, cpu->r[3], 0, 0);
    }
L_00104d38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00104d3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00104d44u, cpu->r[12], 0, 0);
    }
L_00104d40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104d44:;
    {
        cpu->r[14] = 0x00104d48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00104d48:;
    {
        goto L_00104ca8;
    }
}

/* _ZN16GS_CarTuningMenu11DoBarActionEii @ 00104d6c (arm) */
void fn_00104d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104d6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00104d70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00104d74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00104d78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00104d7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00104d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104e1c;
        }
    }
L_00104d84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00104d88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00104d8c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00104d90:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00104d94:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00104d98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00104d9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00104da0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00104da4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00104da8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00104dac:;
    {
        cpu->r[14] = 0x00104db0u; fn_00093f34(cpu);
    }
L_00104db0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00104db4:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00104db8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00104dbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00104dc0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00104dc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00104dc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00104dcc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00104dd0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00104dd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104dd8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00104ddc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00104de0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00104de4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00104de8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00104dec:;
    {
        cpu->r[14] = 0x00104df0u; fn_000fd248(cpu);
    }
L_00104df0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00104df4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00104df8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00104dfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104e24;
        }
    }
L_00104e00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00104e1c;
        }
    }
L_00104e04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000630u, 1, 0);
    }
L_00104e08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00104e0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00104e10:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00104e14:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
        }
    }
L_00104e18:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_00104e1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00104e20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00104e24u)) return;
    }
L_00104e24:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00104e28:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00104e2c:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00104e30:;
    {
        cpu->r[14] = 0x00104e34u; fn_00093f34(cpu);
    }
L_00104e34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00104e38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00104e3c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00104e40:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00104e44:;
    {
        goto L_00104e1c;
    }
}

/* _ZN16GS_CarTuningMenu8DoActionEii @ 00104e48 (arm) */
void fn_00104e48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104e48:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00104e4c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00104e50:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00104e54:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00104e58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00104e5c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00104e60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104e6c;
        }
    }
L_00104e64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00104e68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00104e6cu)) return;
    }
L_00104e6c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00104e70:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00104e74:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00104f18;
        }
    }
L_00104e78:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00104e7c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_00104e80:;
    {
        cpu->r[1] = 0x00000646u;
    }
L_00104e84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00104e88:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_00104e8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00104e90:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_00104e94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00104e98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00104e9c:;
    {
        cpu->r[2] = 0x000004f9u;
    }
L_00104ea0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00104ea4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
        }
    }
L_00104ea8:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_00104eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104f08;
        }
    }
L_00104eb0:;
    {
        cpu->r[5] = 0x00000647u;
    }
L_00104eb4:;
    {
        cpu->r[2] = 0x00000649u;
    }
L_00104eb8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00104ebc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
        }
    }
L_00104ec0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_00104ec4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_00104ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104f08;
        }
    }
L_00104ecc:;
    {
        cpu->r[2] = 0x0000064cu;
    }
L_00104ed0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00104ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104f08;
        }
    }
L_00104ed8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00104edc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000630u, 1, 1);
    }
L_00104ee0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_00104ee4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00104ee8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x94u, cpu->r[1]);
        }
    }
L_00104eec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000095u;
        }
    }
L_00104ef0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00104ef4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00104ef8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00104efc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00104f00:;
    {
        cpu->r[14] = 0x00104f04u; fn_000fd248(cpu);
    }
L_00104f04:;
    {
        goto L_00104e64;
    }
L_00104f08:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x96cu);
    }
L_00104f0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00104f10:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[12]);
    }
L_00104f14:;
    {
        goto L_00104e64;
    }
L_00104f18:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00104f1c:;
    {
        cpu->r[14] = 0x00104f24u;
    }
L_00104f20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00104f24u)) return;
    }
L_00104f24:;
    {
        goto L_00104e64;
    }
}

/* _ZN16GS_CarTuningMenu17ApplyMenuSettingsEv @ 00104f28 (arm) */
void fn_00104f28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00104f28:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00104f2c:;
    {
        cpu->r[6] = rd32(0x00104f34u + + 0x534u);
    }
L_00104f30:;
    {
        cpu->r[3] = rd32(0x00104f38u + + 0x534u);
    }
L_00104f34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000050u, 1, 0);
    }
L_00104f38:;
    {
        cpu->r[6] = add_flags(cpu, 0x00104f40u, cpu->r[6], 0, 0);
    }
L_00104f3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00104f40:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00104f44:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00104f48:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00104f4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001050bc;
        }
    }
L_00104f50:;
    {
        cpu->r[5] = rd32(0x00104f58u + + 0x518u);
    }
L_00104f54:;
    {
        cpu->r[1] = 0x00000044u;
    }
L_00104f58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00104f5c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00104f60:;
    {
        cpu->r[14] = 0x00104f64u; fn_0018aa44(cpu);
    }
L_00104f64:;
    {
        cpu->r[2] = rd32(0x00104f6cu + + 0x508u);
    }
L_00104f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104f6c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00104f70:;
    {
        cpu->r[2] = add_flags(cpu, 0x00104f78u, cpu->r[2], 0, 0);
    }
L_00104f74:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_00104f78:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00104f7c:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_00104f80:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_00104f84:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00104f88:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00104f8c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_00104f90:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00104f94:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00104f98:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[0]);
    }
L_00104f9c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00104fa0:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00104fa4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_00104fa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00104fac:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[1]);
    }
L_00104fb0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00104fb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00104fb8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_00104fbc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[1]);
        }
    }
L_00104fc0:;
    {
        cpu->r[14] = 0x00104fc4u; fn_00096e40(cpu);
    }
L_00104fc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00104fc8:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[0]);
    }
L_00104fcc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00104fd0:;
    {
        cpu->r[14] = 0x00104fd4u; fn_00097b70(cpu);
    }
L_00104fd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00104fd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00104fdc:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[0]);
    }
L_00104fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001053b4;
        }
    }
L_00104fe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00104fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001052ec;
        }
    }
L_00104fec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00104ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105100;
        }
    }
L_00104ff4:;
    {
        cpu->r[1] = rd32(0x00104ffcu + + 0x47cu);
    }
L_00104ff8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00104ffc:;
    {
        cpu->r[12] = rd32(0x00105004u + + 0x478u);
    }
L_00105000:;
    {
        cpu->r[14] = 0x0000013au;
    }
L_00105004:;
    {
        cpu->r[2] = rd32(0x0010500cu + + 0x474u);
    }
L_00105008:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105010u, cpu->r[1], 0, 0);
    }
L_0010500c:;
    {
        cpu->r[3] = rd32(0x00105014u + + 0x470u);
    }
L_00105010:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105018u, cpu->r[12], 0, 0);
    }
L_00105014:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010501cu, cpu->r[2], 0, 0);
    }
L_00105018:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_0010501c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00105024u, cpu->r[3], 0, 0);
    }
L_00105020:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00105024:;
    {
        cpu->r[14] = 0x00105028u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105028:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010502c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00105030:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00105034:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00105038:;
    {
        cpu->r[14] = 0x00105040u;
    }
L_0010503c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00105040u)) return;
    }
L_00105040:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00105044:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00105048:;
    {
        cpu->r[1] = 0x000000a7u;
    }
L_0010504c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00105050:;
    {
        cpu->r[14] = 0x00105054u; fn_000a8d10(cpu);
    }
L_00105054:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_00105058:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010505c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001051b8;
        }
    }
L_00105060:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00105064:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00105068:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0010506c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_00105070:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00105074:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00105078:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010507c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000au, 0, 0);
    }
L_00105080:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_00105084:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00105088:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0010508c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_00105090:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[12]);
    }
L_00105094:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_00105098:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_0010509c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_001050a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_001050a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001050a8:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[12]);
    }
L_001050ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_001050b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001051a4;
        }
    }
L_001050b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001050b8:;
    {
        goto L_0010507c;
    }
L_001050bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001050c0:;
    {
        cpu->r[14] = 0x001050c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001050c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001050c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00104f50;
        }
    }
L_001050cc:;
    {
        cpu->r[5] = rd32(0x001050d4u + + 0x39cu);
    }
L_001050d0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001050d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001050d8:;
    {
        cpu->r[14] = 0x001050dcu; fn_0018aa20(cpu);
    }
L_001050dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001050e0:;
    {
        cpu->r[14] = 0x001050e4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001050e4:;
    {
        cpu->r[3] = rd32(0x001050ecu + + 0x39cu);
    }
L_001050e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001050ec:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001050f0:;
    {
        cpu->r[3] = rd32(0x001050f8u + + 0x394u);
    }
L_001050f4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001050f8:;
    {
        cpu->r[14] = 0x001050fcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001050fc:;
    {
        goto L_00104f54;
    }
L_00105100:;
    {
        cpu->r[2] = rd32(0x00105108u + + 0x388u);
    }
L_00105104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_00105108:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0010510c:;
    {
        cpu->r[3] = 0x00000631u;
    }
L_00105110:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105118u, cpu->r[2], 0, 0);
    }
L_00105114:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_00105118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000060u, 0, 0);
    }
L_0010511c:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_00105120:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[2]);
    }
L_00105124:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_00105128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105160;
        }
    }
L_0010512c:;
    {
        cpu->r[1] = rd32(0x00105134u + + 0x360u);
    }
L_00105130:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105134:;
    {
        cpu->r[12] = rd32(0x0010513cu + + 0x35cu);
    }
L_00105138:;
    {
        cpu->r[14] = 0x00000123u;
    }
L_0010513c:;
    {
        cpu->r[2] = rd32(0x00105144u + + 0x358u);
    }
L_00105140:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105148u, cpu->r[1], 0, 0);
    }
L_00105144:;
    {
        cpu->r[3] = rd32(0x0010514cu + + 0x354u);
    }
L_00105148:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105150u, cpu->r[12], 0, 0);
    }
L_0010514c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105154u, cpu->r[2], 0, 0);
    }
L_00105150:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00105154:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010515cu, cpu->r[3], 0, 0);
    }
L_00105158:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0010515c:;
    {
        cpu->r[14] = 0x00105160u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105160:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00105164:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_00105168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105028;
        }
    }
L_0010516c:;
    {
        cpu->r[1] = rd32(0x00105174u + + 0x330u);
    }
L_00105170:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105174:;
    {
        cpu->r[12] = rd32(0x0010517cu + + 0x32cu);
    }
L_00105178:;
    {
        cpu->r[14] = 0x00000124u;
    }
L_0010517c:;
    {
        cpu->r[2] = rd32(0x00105184u + + 0x328u);
    }
L_00105180:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105188u, cpu->r[1], 0, 0);
    }
L_00105184:;
    {
        cpu->r[3] = rd32(0x0010518cu + + 0x324u);
    }
L_00105188:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105190u, cpu->r[12], 0, 0);
    }
L_0010518c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105194u, cpu->r[2], 0, 0);
    }
L_00105190:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00105194:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010519cu, cpu->r[3], 0, 0);
    }
L_00105198:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0010519c:;
    {
        cpu->r[14] = 0x001051a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001051a0:;
    {
        goto L_00105028;
    }
L_001051a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001051a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001051ac:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000048u, 0, 0);
    }
L_001051b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001051b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010506c;
        }
    }
L_001051b8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001051bc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001051c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001051c4:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_001051c8:;
    {
        cpu->r[14] = 0x001051ccu; fn_000a8d10(cpu);
    }
L_001051cc:;
    {
        cpu->r[1] = rd32(0x001051d4u + + 0x2e0u);
    }
L_001051d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001051d4:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_001051d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001051dc:;
    {
        cpu->r[8] = 0x00001c4cu;
    }
L_001051e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001051e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001051e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001051ec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001051f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001051f4:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001051f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001051fc:;
    {
        cpu->r[1] = rd32(0x00105204u + + 0x2b4u);
    }
L_00105200:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000188u, 1, 0);
    }
L_00105204:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_00105208:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[12]);
    }
L_0010520c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00105210:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00105214:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00105218:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0010521c:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00105220:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_00105224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00105228:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 0);
    }
L_0010522c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_00105230:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_00105234:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00105238:;
    {
        cpu->r[14] = 0x0010523cu; fn_000978a8(cpu);
    }
L_0010523c:;
    {
        cpu->r[2] = rd32(0x00105244u + + 0x278u);
    }
L_00105240:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105244:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00105248:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0010524c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_00105250:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_00105254:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_00105258:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
    }
L_0010525c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_00105260:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[7]);
    }
L_00105264:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00105268:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0010526c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00105270:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00105274:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00105278:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0010527c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_00105280:;
    {
        wr8(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00105284:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_00105288:;
    {
        wr8(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_0010528c:;
    {
        wr8(cpu->r[13] + + 0x3du, cpu->r[5]);
    }
L_00105290:;
    {
        cpu->r[14] = 0x00105294u; fn_00095fec(cpu);
    }
L_00105294:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105298:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010529c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x9a0u);
    }
L_001052a0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001052a4:;
    {
        cpu->r[14] = rd32(cpu->r[6]);
    }
L_001052a8:;
    {
        cpu->r[6] = 0x0000004cu;
    }
L_001052ac:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x444u);
    }
L_001052b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001052b4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001052b8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_001052bc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001052c0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[12] = v;
    }
L_001052c4:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001052c8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001052cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001052d0:;
    {
        cpu->r[14] = 0x001052d4u; fn_00169ee0(cpu);
    }
L_001052d4:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[7]);
    }
L_001052d8:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[5]);
    }
L_001052dc:;
    {
        cpu->r[14] = 0x001052e0u; fn_0009b4d0(cpu);
    }
L_001052e0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_001052e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001052e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001052ecu)) return;
    }
L_001052ec:;
    {
        cpu->r[3] = rd32(0x001052f4u + + 0x1ccu);
    }
L_001052f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001052f4:;
    {
        cpu->r[2] = 0x00000633u;
    }
L_001052f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001052fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00105304u, cpu->r[3], 0, 0);
    }
L_00105300:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00105304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000002d0u, 0, 0);
    }
L_00105308:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_0010530c:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00105310:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_00105314:;
    {
        cpu->r[14] = 0x00105318u; fn_00097b70(cpu);
    }
L_00105318:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010531c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00105320:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105324:;
    {
        cpu->r[14] = 0x00105328u; fn_00097b70(cpu);
    }
L_00105328:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_0010532c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00105330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00105334:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[0]);
    }
L_00105338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105370;
        }
    }
L_0010533c:;
    {
        cpu->r[1] = rd32(0x00105344u + + 0x180u);
    }
L_00105340:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105344:;
    {
        cpu->r[12] = rd32(0x0010534cu + + 0x17cu);
    }
L_00105348:;
    {
        cpu->r[14] = 0x00000136u;
    }
L_0010534c:;
    {
        cpu->r[2] = rd32(0x00105354u + + 0x178u);
    }
L_00105350:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105358u, cpu->r[1], 0, 0);
    }
L_00105354:;
    {
        cpu->r[3] = rd32(0x0010535cu + + 0x174u);
    }
L_00105358:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105360u, cpu->r[12], 0, 0);
    }
L_0010535c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105364u, cpu->r[2], 0, 0);
    }
L_00105360:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00105364:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010536cu, cpu->r[3], 0, 0);
    }
L_00105368:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0010536c:;
    {
        cpu->r[14] = 0x00105370u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00105374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00105378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105028;
        }
    }
L_0010537c:;
    {
        cpu->r[1] = rd32(0x00105384u + + 0x150u);
    }
L_00105380:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105384:;
    {
        cpu->r[12] = rd32(0x0010538cu + + 0x14cu);
    }
L_00105388:;
    {
        cpu->r[14] = 0x00000137u;
    }
L_0010538c:;
    {
        cpu->r[2] = rd32(0x00105394u + + 0x148u);
    }
L_00105390:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105398u, cpu->r[1], 0, 0);
    }
L_00105394:;
    {
        cpu->r[3] = rd32(0x0010539cu + + 0x144u);
    }
L_00105398:;
    {
        cpu->r[12] = add_flags(cpu, 0x001053a0u, cpu->r[12], 0, 0);
    }
L_0010539c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001053a4u, cpu->r[2], 0, 0);
    }
L_001053a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_001053a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001053acu, cpu->r[3], 0, 0);
    }
L_001053a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001053ac:;
    {
        cpu->r[14] = 0x001053b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001053b0:;
    {
        goto L_00105028;
    }
L_001053b4:;
    {
        cpu->r[3] = rd32(0x001053bcu + + 0x128u);
    }
L_001053b8:;
    {
        cpu->r[2] = 0x00000632u;
    }
L_001053bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001053c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001053c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001053ccu, cpu->r[3], 0, 0);
    }
L_001053c8:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_001053cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000198u, 0, 0);
    }
L_001053d0:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_001053d4:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_001053d8:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_001053dc:;
    {
        cpu->r[14] = 0x001053e0u; fn_00097b70(cpu);
    }
L_001053e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001053e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001053e8:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[0]);
    }
L_001053ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105424;
        }
    }
L_001053f0:;
    {
        cpu->r[1] = rd32(0x001053f8u + + 0xf0u);
    }
L_001053f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001053f8:;
    {
        cpu->r[12] = rd32(0x00105400u + + 0xecu);
    }
L_001053fc:;
    {
        cpu->r[14] = 0x0000012cu;
    }
L_00105400:;
    {
        cpu->r[2] = rd32(0x00105408u + + 0xe8u);
    }
L_00105404:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010540cu, cpu->r[1], 0, 0);
    }
L_00105408:;
    {
        cpu->r[3] = rd32(0x00105410u + + 0xe4u);
    }
L_0010540c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105414u, cpu->r[12], 0, 0);
    }
L_00105410:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105418u, cpu->r[2], 0, 0);
    }
L_00105414:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00105418:;
    {
        cpu->r[3] = add_flags(cpu, 0x00105420u, cpu->r[3], 0, 0);
    }
L_0010541c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00105420:;
    {
        cpu->r[14] = 0x00105424u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105424:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00105428:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0010542c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105028;
        }
    }
L_00105430:;
    {
        cpu->r[1] = rd32(0x00105438u + + 0xc0u);
    }
L_00105434:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105438:;
    {
        cpu->r[12] = rd32(0x00105440u + + 0xbcu);
    }
L_0010543c:;
    {
        cpu->r[14] = 0x0000012du;
    }
L_00105440:;
    {
        cpu->r[2] = rd32(0x00105448u + + 0xb8u);
    }
L_00105444:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010544cu, cpu->r[1], 0, 0);
    }
L_00105448:;
    {
        cpu->r[3] = rd32(0x00105450u + + 0xb4u);
    }
L_0010544c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105454u, cpu->r[12], 0, 0);
    }
L_00105450:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105458u, cpu->r[2], 0, 0);
    }
L_00105454:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00105458:;
    {
        cpu->r[3] = add_flags(cpu, 0x00105460u, cpu->r[3], 0, 0);
    }
L_0010545c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00105460:;
    {
        cpu->r[14] = 0x00105464u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105464:;
    {
        goto L_00105028;
    }
}

/* _ZN16GS_CarTuningMenuD1Ev @ 00105508 (arm) */
void fn_00105508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105508:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010550c:;
    {
        cpu->r[5] = rd32(0x00105514u + + 0x58u);
    }
L_00105510:;
    {
        cpu->r[2] = rd32(0x00105518u + + 0x58u);
    }
L_00105514:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105518:;
    {
        cpu->r[5] = add_flags(cpu, 0x00105520u, cpu->r[5], 0, 0);
    }
L_0010551c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9a0u);
    }
L_00105520:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00105524:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00105528:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010552c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00105530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010554c;
        }
    }
L_00105534:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105538:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010553c:;
    {
        cpu->r[14] = 0x00105544u;
    }
L_00105540:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00105544u)) return;
    }
L_00105544:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00105548:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_0010554c:;
    {
        cpu->r[3] = rd32(0x00105554u + + 0x20u);
    }
L_00105550:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00105554:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00105558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010555c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00105560:;
    {
        cpu->r[14] = 0x00105564u; fn_000ec21c(cpu);
    }
L_00105564:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00105568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010556cu)) return;
    }
}

/* _ZN16GS_CarTuningMenuD0Ev @ 00105578 (arm) */
void fn_00105578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105578:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010557c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105580:;
    {
        cpu->r[14] = 0x00105584u; fn_00105508(cpu);
    }
L_00105584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00105588:;
    {
        cpu->r[14] = 0x0010558cu; fn_0018ba20(cpu);
    }
L_0010558c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00105590:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00105594u)) return;
    }
}

/* _ZN16GS_CarTuningMenuD2Ev @ 00105594 (arm) */
void fn_00105594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105594:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00105598:;
    {
        cpu->r[5] = rd32(0x001055a0u + + 0x58u);
    }
L_0010559c:;
    {
        cpu->r[2] = rd32(0x001055a4u + + 0x58u);
    }
L_001055a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001055a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001055acu, cpu->r[5], 0, 0);
    }
L_001055a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9a0u);
    }
L_001055ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001055b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001055b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001055b8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001055bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001055d8;
        }
    }
L_001055c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001055c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001055c8:;
    {
        cpu->r[14] = 0x001055d0u;
    }
L_001055cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001055d0u)) return;
    }
L_001055d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001055d4:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_001055d8:;
    {
        cpu->r[3] = rd32(0x001055e0u + + 0x20u);
    }
L_001055dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001055e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001055e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001055e8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001055ec:;
    {
        cpu->r[14] = 0x001055f0u; fn_000ec21c(cpu);
    }
L_001055f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001055f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001055f8u)) return;
    }
}

/* _ZN16GS_CarTuningMenuC1E16eTUNING_CATEGORYb @ 00105604 (arm) */
void fn_00105604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105604:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00105608:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010560c:;
    {
        cpu->r[6] = rd32(0x00105614u + + 0x78u);
    }
L_00105610:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00105614:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00105618:;
    {
        cpu->r[14] = 0x0010561cu; fn_001100c0(cpu);
    }
L_0010561c:;
    {
        cpu->r[2] = rd32(0x00105624u + + 0x6cu);
    }
L_00105620:;
    {
        cpu->r[6] = add_flags(cpu, 0x00105628u, cpu->r[6], 0, 0);
    }
L_00105624:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00105628:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[4]);
    }
L_0010562c:;
    {
        wr32(cpu->r[5] + + 0x99cu, cpu->r[3]);
    }
L_00105630:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00105634:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00105638:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_0010563c:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[1]);
    }
L_00105640:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00105644:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_00105648:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0010564c:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[3]);
    }
L_00105650:;
    {
        wr32(cpu->r[5] + + 0x97cu, cpu->r[3]);
    }
L_00105654:;
    {
        wr32(cpu->r[5] + + 0x980u, cpu->r[3]);
    }
L_00105658:;
    {
        wr32(cpu->r[5] + + 0x984u, cpu->r[3]);
    }
L_0010565c:;
    {
        wr32(cpu->r[5] + + 0x988u, cpu->r[3]);
    }
L_00105660:;
    {
        wr32(cpu->r[5] + + 0x98cu, cpu->r[3]);
    }
L_00105664:;
    {
        wr32(cpu->r[5] + + 0x990u, cpu->r[3]);
    }
L_00105668:;
    {
        wr32(cpu->r[5] + + 0x994u, cpu->r[3]);
    }
L_0010566c:;
    {
        wr32(cpu->r[5] + + 0x998u, cpu->r[3]);
    }
L_00105670:;
    {
        cpu->r[14] = 0x00105674u; fn_0018ba6c(cpu);
    }
L_00105674:;
    {
        cpu->r[1] = (~0x0000007au);
    }
L_00105678:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010567c:;
    {
        cpu->r[14] = 0x00105680u; fn_00166fa4(cpu);
    }
L_00105680:;
    {
        wr32(cpu->r[5] + + 0x9a0u, cpu->r[4]);
    }
L_00105684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00105688:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010568cu)) return;
    }
}

/* _ZN16GS_CarTuningMenu6UpdateEv @ 00105694 (arm) */
void fn_00105694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105694:;
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
L_00105698:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010569c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001056a0:;
    {
        cpu->r[4] = rd32(0x001056a8u + + 0x400u);
    }
L_001056a4:;
    {
        cpu->r[14] = 0x001056a8u; fn_00104bf0(cpu);
    }
L_001056a8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x94u);
    }
L_001056ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001056b4u, cpu->r[4], 0, 0);
    }
L_001056b0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001056b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105880;
        }
    }
L_001056b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001056bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105700;
        }
    }
L_001056c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001056c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001056f8;
        }
    }
L_001056c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001056cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001056d0:;
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
L_001056d4:;
    {
        return fn_00114a58(cpu);
    }
L_001056d8:;
    {
        cpu->r[2] = 0x00000632u;
    }
L_001056dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001056e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001058bc;
        }
    }
L_001056e4:;
    {
        cpu->r[2] = 0x00000633u;
    }
L_001056e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001056ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105930;
        }
    }
L_001056f0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001056f4:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_001056f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001056fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00105700u)) return;
    }
L_00105700:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00105704:;
    {
        cpu->r[14] = 0x00105708u; fn_0010da28(cpu);
    }
L_00105708:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010570c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001056f8;
        }
    }
L_00105710:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00105714:;
    {
        cpu->r[2] = 0x00000631u;
    }
L_00105718:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010571c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105990;
        }
    }
L_00105720:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001056d8;
        }
    }
L_00105724:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00105728:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010572c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105894;
        }
    }
L_00105730:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000630u, 1, 1);
    }
L_00105734:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001056f0;
        }
    }
L_00105738:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010573c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00105740:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00105744:;
    {
        cpu->r[14] = 0x00105748u; fn_000978a8(cpu);
    }
L_00105748:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x96cu);
    }
L_0010574c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00105750:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00105754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105a6c;
        }
    }
L_00105758:;
    {
        cpu->r[10] = 0x00005556u;
    }
L_0010575c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x968u);
    }
L_00105760:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x5555u << 16);
    }
L_00105764:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_00105768:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0010576c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_00105770:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00105774:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_00105778:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0010577c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001059f0;
        }
    }
L_00105780:;
    {
        cpu->r[2] = rd32(0x00105788u + + 0x324u);
    }
L_00105784:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_00105788:;
    {
        cpu->r[3] = rd32(0x00105790u + + 0x320u);
    }
L_0010578c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00105790:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105798u, cpu->r[2], 0, 0);
    }
L_00105794:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00105798:;
    {
        cpu->r[2] = rd32(0x001057a0u + + 0x314u);
    }
L_0010579c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001057a4u, cpu->r[3], 0, 0);
    }
L_001057a0:;
    {
        cpu->r[12] = rd32(0x001057a8u + + 0x310u);
    }
L_001057a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_001057a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001057b0u, cpu->r[2], 0, 0);
    }
L_001057ac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001057b0:;
    {
        cpu->r[2] = rd32(0x001057b8u + + 0x304u);
    }
L_001057b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001057b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001057c0u, cpu->r[2], 0, 0);
    }
L_001057bc:;
    {
        cpu->r[8] = rd32(0x001057c4u + + 0x2fcu);
    }
L_001057c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001057c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001057c8:;
    {
        goto L_001057ec;
    }
L_001057cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001057d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_001057d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001057d8:;
    {
        cpu->r[7] = rd8(cpu->r[3] + shifter(cpu->r[7], 2, 1u, &shc));
    }
L_001057dc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001057e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105a3c;
        }
    }
L_001057e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001057e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001059f0;
        }
    }
L_001057ec:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001057f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001057f4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001057f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001057fc:;
    {
        cpu->r[14] = 0x00105800u; fn_000973dc(cpu);
    }
L_00105800:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00105804:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00105808:;
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
L_0010580c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00105810:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105814:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010582c;
        }
    }
L_00105818:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010581c:;
    {
        cpu->r[12] = 0x00008c78u;
    }
L_00105820:;
    {
        cpu->r[12] = rd8(cpu->r[14] + cpu->r[12]);
    }
L_00105824:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_00105828:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00105840;
        }
    }
L_0010582c:;
    {
        cpu->r[12] = 0x00000201u;
    }
L_00105830:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00105834:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00105838:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010583c:;
    {
        cpu->r[14] = 0x00105840u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105840:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00105844:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00105848:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0010584c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00105850:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001057cc;
        }
    }
L_00105854:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105858:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0010585c:;
    {
        cpu->r[14] = 0x00105860u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00105860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00105864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001057cc;
        }
    }
L_00105868:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0010586c:;
    {
        cpu->r[14] = 0x00105870u; fn_00094228(cpu);
    }
L_00105870:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00105874:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105878:;
    {
        cpu->r[14] = 0x0010587cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010587c:;
    {
        goto L_001057cc;
    }
L_00105880:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00105884:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00105888:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0010588c:;
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
L_00105890:;
    {
        return fn_000eb59c(cpu);
    }
L_00105894:;
    {
        cpu->r[3] = rd32(0x0010589cu + + 0x228u);
    }
L_00105898:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010589c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001058a0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001058a4:;
    {
        cpu->r[14] = 0x001058a8u; fn_0009e9e8(cpu);
    }
L_001058a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001058ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001058b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001058b4:;
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
L_001058b8:;
    {
        return fn_000f34e8(cpu);
    }
L_001058bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001058c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001058c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001056f0;
        }
    }
L_001058c8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001058cc:;
    {
        cpu->r[3] = 0x0000064cu;
    }
L_001058d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_001058d4:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_001058d8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001058dc:;
    {
        cpu->r[2] = rd32(0x001058e4u + + 0x1e0u);
    }
L_001058e0:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x88u);
    }
L_001058e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001058e8:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001058ec:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_001058f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001058f4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001058f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001058fc:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00105900:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00105904:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00105908:;
    {
        cpu->r[14] = 0x0010590cu; fn_0018ba6c(cpu);
    }
L_0010590c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00105910:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00105914:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105918:;
    {
        cpu->r[14] = 0x0010591cu; fn_00105604(cpu);
    }
L_0010591c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00105920:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00105924:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00105928:;
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
L_0010592c:;
    {
        return fn_000f36dc(cpu);
    }
L_00105930:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00105934:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00105938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001056f0;
        }
    }
L_0010593c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00105940:;
    {
        cpu->r[3] = 0x0000064cu;
    }
L_00105944:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00105948:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_0010594c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00105950:;
    {
        cpu->r[2] = rd32(0x00105958u + + 0x16cu);
    }
L_00105954:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x88u);
    }
L_00105958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0010595c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00105960:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_00105964:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_00105968:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0010596c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00105970:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00105974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00105978:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_0010597c:;
    {
        cpu->r[14] = 0x00105980u; fn_0018ba6c(cpu);
    }
L_00105980:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00105984:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00105988:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010598c:;
    {
        goto L_00105918;
    }
L_00105990:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00105994:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00105998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001056f0;
        }
    }
L_0010599c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001059a0:;
    {
        cpu->r[3] = 0x0000064cu;
    }
L_001059a4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_001059a8:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_001059ac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001059b0:;
    {
        cpu->r[2] = rd32(0x001059b8u + + 0x10cu);
    }
L_001059b4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x88u);
    }
L_001059b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001059bc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001059c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_001059c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001059c8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001059cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001059d0:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001059d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001059d8:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001059dc:;
    {
        cpu->r[14] = 0x001059e0u; fn_0018ba6c(cpu);
    }
L_001059e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001059e4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001059e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001059ec:;
    {
        goto L_00105918;
    }
L_001059f0:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001059f4:;
    {
        cpu->r[14] = 0x001059f8u; fn_0018ba6c(cpu);
    }
L_001059f8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001059fc:;
    {
        cpu->r[14] = 0x00105a00u; fn_000a7570(cpu);
    }
L_00105a00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00105a04:;
    {
        cpu->r[0] = 0x0000064au;
    }
L_00105a08:;
    {
        cpu->r[14] = 0x00105a0cu; fn_000aeb58(cpu);
    }
L_00105a0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000970u, 0, 0);
    }
L_00105a10:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00105a14:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00105a18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00105a1c:;
    {
        cpu->r[14] = 0x00105a20u; fn_000a7bb0(cpu);
    }
L_00105a20:;
    {
        cpu->r[3] = rd32(0x00105a28u + + 0x9cu);
    }
L_00105a24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00105a28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00105a2c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00105a30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00105a34:;
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
L_00105a38:;
    {
        return fn_000f361c(cpu);
    }
L_00105a3c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_00105a40:;
    {
        cpu->r[14] = 0x00105a44u; fn_0018ba6c(cpu);
    }
L_00105a44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00105a48:;
    {
        cpu->r[14] = 0x00105a4cu; fn_000a7570(cpu);
    }
L_00105a4c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00105a50:;
    {
        cpu->r[0] = 0x0000064bu;
    }
L_00105a54:;
    {
        cpu->r[14] = 0x00105a58u; fn_000aeb58(cpu);
    }
L_00105a58:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00105a5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000970u, 0, 0);
    }
L_00105a60:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00105a64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00105a68:;
    {
        goto L_00105a1c;
    }
L_00105a6c:;
    {
        cpu->r[1] = rd32(0x00105a74u + + 0x54u);
    }
L_00105a70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00105a74:;
    {
        cpu->r[12] = rd32(0x00105a7cu + + 0x50u);
    }
L_00105a78:;
    {
        cpu->r[14] = 0x000001f7u;
    }
L_00105a7c:;
    {
        cpu->r[2] = rd32(0x00105a84u + + 0x4cu);
    }
L_00105a80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105a88u, cpu->r[1], 0, 0);
    }
L_00105a84:;
    {
        cpu->r[3] = rd32(0x00105a8cu + + 0x48u);
    }
L_00105a88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00105a90u, cpu->r[12], 0, 0);
    }
L_00105a8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00105a94u, cpu->r[2], 0, 0);
    }
L_00105a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_00105a94:;
    {
        cpu->r[3] = add_flags(cpu, 0x00105a9cu, cpu->r[3], 0, 0);
    }
L_00105a98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00105a9c:;
    {
        cpu->r[14] = 0x00105aa0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00105aa0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x96cu);
    }
L_00105aa4:;
    {
        goto L_00105758;
    }
}

/* _ZN16GS_CarTuningMenuC2E16eTUNING_CATEGORYb @ 00105ad8 (arm) */
void fn_00105ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105ad8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00105adc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00105ae0:;
    {
        cpu->r[6] = rd32(0x00105ae8u + + 0x78u);
    }
L_00105ae4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00105ae8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00105aec:;
    {
        cpu->r[14] = 0x00105af0u; fn_001100c0(cpu);
    }
L_00105af0:;
    {
        cpu->r[2] = rd32(0x00105af8u + + 0x6cu);
    }
L_00105af4:;
    {
        cpu->r[6] = add_flags(cpu, 0x00105afcu, cpu->r[6], 0, 0);
    }
L_00105af8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00105afc:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[4]);
    }
L_00105b00:;
    {
        wr32(cpu->r[5] + + 0x99cu, cpu->r[3]);
    }
L_00105b04:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00105b08:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00105b0c:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_00105b10:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[1]);
    }
L_00105b14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00105b18:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_00105b1c:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00105b20:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[3]);
    }
L_00105b24:;
    {
        wr32(cpu->r[5] + + 0x97cu, cpu->r[3]);
    }
L_00105b28:;
    {
        wr32(cpu->r[5] + + 0x980u, cpu->r[3]);
    }
L_00105b2c:;
    {
        wr32(cpu->r[5] + + 0x984u, cpu->r[3]);
    }
L_00105b30:;
    {
        wr32(cpu->r[5] + + 0x988u, cpu->r[3]);
    }
L_00105b34:;
    {
        wr32(cpu->r[5] + + 0x98cu, cpu->r[3]);
    }
L_00105b38:;
    {
        wr32(cpu->r[5] + + 0x990u, cpu->r[3]);
    }
L_00105b3c:;
    {
        wr32(cpu->r[5] + + 0x994u, cpu->r[3]);
    }
L_00105b40:;
    {
        wr32(cpu->r[5] + + 0x998u, cpu->r[3]);
    }
L_00105b44:;
    {
        cpu->r[14] = 0x00105b48u; fn_0018ba6c(cpu);
    }
L_00105b48:;
    {
        cpu->r[1] = (~0x0000007au);
    }
L_00105b4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105b50:;
    {
        cpu->r[14] = 0x00105b54u; fn_00166fa4(cpu);
    }
L_00105b54:;
    {
        wr32(cpu->r[5] + + 0x9a0u, cpu->r[4]);
    }
L_00105b58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00105b5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00105b60u)) return;
    }
}

/* _ZN16GS_CarTuningMenu32GetCurrentOwnedKitInThisCategoryE16eTUNING_CATEGORYi @ 00105b68 (arm) */
void fn_00105b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105b68:;
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
L_00105b6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105b70:;
    {
        cpu->r[5] = rd32(0x00105b78u + + 0x1e4u);
    }
L_00105b74:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00105b78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00105b7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00105b80:;
    {
        cpu->r[6] = rd32(0x00105b88u + + 0x1d8u);
    }
L_00105b84:;
    {
        cpu->r[5] = add_flags(cpu, 0x00105b8cu, cpu->r[5], 0, 0);
    }
L_00105b88:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00105b8c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00105b90:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00105b94:;
    {
        cpu->r[11] = 0x00008c78u;
    }
L_00105b98:;
    {
        cpu->r[14] = 0x00105b9cu; fn_000978a8(cpu);
    }
L_00105b9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00105ba0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00105ba4:;
    {
        cpu->r[8] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_00105ba8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00105bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105c78;
        }
    }
L_00105bb0:;
    {
        cpu->r[3] = rd32(0x00105bb8u + + 0x1acu);
    }
L_00105bb4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00105bb8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_00105bbc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00105bc0:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00105bc4:;
    {
        cpu->r[9] = 0x0000002cu;
    }
L_00105bc8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00105bcc:;
    {
        cpu->r[3] = rd32(0x00105bd4u + + 0x194u);
    }
L_00105bd0:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00105bd4:;
    {
        goto L_00105bf0;
    }
L_00105bd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00105bdc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00105be0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00105be4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_00105be8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00105bec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00105c6c;
        }
    }
L_00105bf0:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10] + cpu->r[2]; cpu->r[2] = v;
    }
L_00105bf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00008700u, 0, 0);
    }
L_00105bf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_00105bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00105c00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00105c04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00105bd8;
        }
    }
L_00105c08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008700u, 0, 0);
    }
L_00105c0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000054u, 0, 0);
    }
L_00105c10:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00105c14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00105c18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00105c1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00105bd8;
        }
    }
L_00105c20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00105c24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00105c28:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00105c2c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00105c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105cf0;
        }
    }
L_00105c34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00105c38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00105c3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00105c40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00105c44:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_00105c48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00105c4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105c6c;
        }
    }
L_00105c50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00105c54:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00105c58:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00105c5c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00105c60:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_00105c64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00105c68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00105bf0;
        }
    }
L_00105c6c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_00105c70:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_00105c74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105d28;
        }
    }
L_00105c78:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00105c7c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00105c80:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00105c84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105c88:;
    {
        cpu->r[14] = 0x00105c8cu; fn_0009750c(cpu);
    }
L_00105c8c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00105c90:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[9] = v0;
        cpu->r[10] = v1;
    }
L_00105c94:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x8u);
    }
L_00105c98:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0xcu);
    }
L_00105c9c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
    }
L_00105ca0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_00105ca4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_00105ca8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00105cac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_00105cb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_00105cb4:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[9]);
    }
L_00105cb8:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[10]);
    }
L_00105cbc:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[8]);
    }
L_00105cc0:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[7]);
    }
L_00105cc4:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[6]);
    }
L_00105cc8:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[5]);
    }
L_00105ccc:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[12]);
    }
L_00105cd0:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[1]);
    }
L_00105cd4:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[2]);
    }
L_00105cd8:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[0]);
    }
L_00105cdc:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_00105ce0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000970u, 0, 0);
    }
L_00105ce4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00105ce8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00105cec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00105cf0u)) return;
    }
L_00105cf0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105cf4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00105cf8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00105cfc:;
    {
        cpu->r[14] = 0x00105d00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00105d00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00105d04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00105d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105c34;
        }
    }
L_00105d0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00105d10:;
    {
        cpu->r[14] = 0x00105d14u; fn_00094228(cpu);
    }
L_00105d14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00105d18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105d1c:;
    {
        cpu->r[14] = 0x00105d20u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00105d20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00105d24:;
    {
        goto L_00105c34;
    }
L_00105d28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00105d2c:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_00105d30:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_00105d34:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_00105d38:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_00105d3c:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[3]);
    }
L_00105d40:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[3]);
    }
L_00105d44:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_00105d48:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[3]);
    }
L_00105d4c:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_00105d50:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_00105d54:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[3]);
    }
L_00105d58:;
    {
        goto L_00105ce0;
    }
}

/* _ZN16GS_CarTuningMenu6ResumeEv @ 00105d6c (arm) */
void fn_00105d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105d6c:;
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
L_00105d70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105d74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00105d78:;
    {
        cpu->r[8] = rd32(0x00105d80u + + 0x184u);
    }
L_00105d7c:;
    {
        cpu->r[14] = 0x00105d80u; fn_001142a0(cpu);
    }
L_00105d80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_00105d84:;
    {
        cpu->r[8] = add_flags(cpu, 0x00105d8cu, cpu->r[8], 0, 0);
    }
L_00105d88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00105d8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00105e88;
        }
    }
L_00105d90:;
    {
        cpu->r[3] = rd32(0x00105d98u + + 0x170u);
    }
L_00105d94:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00105d98:;
    {
        cpu->r[2] = rd32(0x00105da0u + + 0x16cu);
    }
L_00105d9c:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_00105da0:;
    {
        cpu->r[9] = rd32(0x00105da8u + + 0x168u);
    }
L_00105da4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00105da8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00105dac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00105db0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00105db4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_00105db8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00105dbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00105dc0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00105dc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x968u);
    }
L_00105dc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105dcc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_00105dd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_00105dd4:;
    {
        cpu->r[14] = 0x00105dd8u; fn_000a28cc(cpu);
    }
L_00105dd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x968u);
    }
L_00105ddc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00105de0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105de4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_00105de8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00105dec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105df0:;
    {
        cpu->r[14] = 0x00105df4u; fn_000973dc(cpu);
    }
L_00105df4:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00105df8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00105dfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105e00:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00105e04:;
    {
        cpu->r[14] = 0x00105e08u; fn_000978a8(cpu);
    }
L_00105e08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00105e0c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_00105e10:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00105e14:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00105e18:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00105e1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105e90;
        }
    }
L_00105e20:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00105e24:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00105e28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00105e2c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0404u << 16);
    }
L_00105e30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00105e34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00105e38:;
    {
        cpu->r[10] = rd8(cpu->r[3] + shifter(cpu->r[11], 2, 1u, &shc));
    }
L_00105e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105ee0;
        }
    }
L_00105e40:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00105e44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00105e48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00105e4c:;
    {
        cpu->r[1] = 0x000004a7u;
    }
L_00105e50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000002a8u;
        }
    }
L_00105e54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_00105e58:;
    {
        uint32_t v = cpu->r[1] | cpu->r[0]; cpu->r[0] = v;
    }
L_00105e5c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00105e60:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[0]);
    }
L_00105e64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00105e68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00105dbc;
        }
    }
L_00105e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_00105e70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00105e74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00105e78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00105e7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000048u, 0, 0);
    }
L_00105e80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00105e84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00105db4;
        }
    }
L_00105e88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00105e8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00105e90u)) return;
    }
L_00105e90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105e94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00105e98:;
    {
        cpu->r[14] = 0x00105e9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00105e9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00105ea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00105ea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00105e20;
        }
    }
L_00105ea8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00105eac:;
    {
        cpu->r[14] = 0x00105eb0u; fn_00094228(cpu);
    }
L_00105eb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00105eb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00105eb8:;
    {
        cpu->r[14] = 0x00105ebcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00105ebc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00105ec0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00105ec4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00105ec8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00105ecc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00105ed0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0404u << 16);
    }
L_00105ed4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00105ed8:;
    {
        cpu->r[10] = rd8(cpu->r[3] + shifter(cpu->r[11], 2, 1u, &shc));
    }
L_00105edc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00105e40;
        }
    }
L_00105ee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x968u);
    }
L_00105ee4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00105ee8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105eec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_00105ef0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105ef4:;
    {
        cpu->r[14] = 0x00105ef8u; fn_000972f8(cpu);
    }
L_00105ef8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00105efc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 24u, &shc); cpu->r[0] = v;
    }
L_00105f00:;
    {
        goto L_00105e40;
    }
}

/* _ZN16GS_CarTuningMenu24RenderTuningKitSelectionEv @ 00105f14 (arm) */
void fn_00105f14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00105f14:;
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
L_00105f18:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00105f1c:;
    {
        cpu->r[1] = rd32(0x00105f24u + + 0x4acu);
    }
L_00105f20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_00105f24:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00105f28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00105f30u, cpu->r[1], 0, 0);
    }
L_00105f2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x96cu);
    }
L_00105f30:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00105f34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00105f38:;
    {
        cpu->r[1] = rd32(0x00105f40u + + 0x494u);
    }
L_00105f3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00105f40:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_00105f44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00105f48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00105f4c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[5] = v;
    }
L_00105f50:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_00105f54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00105f58:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_00105f5c:;
    {
        cpu->r[9] = rd32(cpu->r[12]);
    }
L_00105f60:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00105f64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00106378;
        }
    }
L_00105f68:;
    {
        cpu->r[8] = 0x00005556u;
    }
L_00105f6c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x968u);
    }
L_00105f70:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x5555u << 16);
    }
L_00105f74:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x95cu);
    }
L_00105f78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00105f7c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_00105f80:;
    {
        cpu->r[11] = rd32(0x00105f88u + + 0x450u);
    }
L_00105f84:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00105f88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_00105f8c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00105f90:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00105f94:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_00105f98:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00105f9c:;
    {
        cpu->r[14] = 0x00105fa0u; fn_000973dc(cpu);
    }
L_00105fa0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00105fa4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00105fa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105fac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00105fb0:;
    {
        cpu->r[14] = 0x00105fb4u; fn_000978a8(cpu);
    }
L_00105fb4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00105fb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105fbc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00105fc0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00105fc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00105fc8:;
    {
        cpu->r[14] = 0x00105fccu; fn_0009750c(cpu);
    }
L_00105fcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105fd0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00105fd4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00105fd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00105fdc:;
    {
        cpu->r[14] = 0x00105fe0u; fn_00105b68(cpu);
    }
L_00105fe0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00105fe4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00105fe8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00105fec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00105ff0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00105ff4:;
    {
        cpu->r[0] = rd32(0x00105ffcu + + 0x3e0u);
    }
L_00105ff8:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[0]);
    }
L_00105ffc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00106000:;
    {
        cpu->r[14] = 0x00106004u; fn_000a28cc(cpu);
    }
L_00106004:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_00106008:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010600c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_00106010:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00106014:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001062f4;
        }
    }
L_0010601c:;
    {
        cpu->r[6] = rd32(0x00106024u + + 0x3bcu);
    }
L_00106020:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00106024:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x20u);
    }
L_00106028:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[6]);
    }
L_0010602c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00106030:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x5cu);
    }
L_00106034:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_00106038:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010603c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00106040:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00106044:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00106048:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010604c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106050:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[6]);
    }
L_00106054:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00106058:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010605c:;
    {
        cpu->r[8] = rd32(0x00106064u + + 0x380u);
    }
L_00106060:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00106064:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00106068:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_0010606c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00106070:;
    {
        cpu->r[6] = rd8(cpu->r[12] + shifter(cpu->r[14], 2, 1u, &shc));
    }
L_00106074:;
    {
        cpu->r[14] = 0x00106078u; fn_000a8d10(cpu);
    }
L_00106078:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010607c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00106080:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00106084:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00106088:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0010608c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106354;
        }
    }
L_00106090:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00106094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001063f0;
        }
    }
L_00106098:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0010609c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_001060a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001060a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001060a8:;
    {
        cpu->r[3] = 0x00000646u;
    }
L_001060ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001060b0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_001060b4:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001060b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001060bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001060c0:;
    {
        cpu->r[14] = 0x001060c4u; fn_00104bc0(cpu);
    }
L_001060c4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001060c8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 3u, &shc); cpu->r[7] = v;
    }
L_001060cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001060d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001060d4:;
    {
        cpu->r[14] = rd32(0x001060dcu + + 0x30cu);
    }
L_001060d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001060dc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001060e4u + + 0x2e8u);
    }
L_001060e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001060e4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001060e8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001060ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000630u, 1, 1);
    }
L_001060f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_001060f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001060f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001060fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & ~ 0x00040000u; cpu->r[2] = v;
        }
    }
L_00106100:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00040000u; cpu->r[2] = v;
        }
    }
L_00106104:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_00106108:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_0010610c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00106110:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
        }
    }
L_00106114:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
        }
    }
L_00106118:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & ~ 0x00040000u; cpu->r[3] = v;
        }
    }
L_0010611c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00040000u; cpu->r[3] = v;
        }
    }
L_00106120:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_00106124:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_00106128:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010612c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_00106130:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00106134:;
    {
        cpu->r[14] = 0x00106138u; fn_000a8e18(cpu);
    }
L_00106138:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010613c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00106140:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_00106144:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_00106148:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[6]);
    }
L_0010614c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00106150:;
    {
        cpu->r[8] = 0x00000030u;
    }
L_00106154:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106158:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0010615c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00106160:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00106164:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000017cu, 1, 0);
    }
L_00106168:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0010616c:;
    {
        cpu->r[14] = 0x00106170u; fn_000ad8a0(cpu);
    }
L_00106170:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_00106174:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00106178:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0010617c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106180:;
    {
        cpu->r[14] = 0x00106184u; fn_000a8d10(cpu);
    }
L_00106184:;
    {
        cpu->r[6] = rd32(0x0010618cu + + 0x260u);
    }
L_00106188:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010618c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00106190:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_00106194:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00106198:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010619c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001061a0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[8], 0x00000006u, 1, 0);
    }
L_001061a4:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_001061a8:;
    {
        cpu->r[14] = 0x001061acu; fn_000a88e0(cpu);
    }
L_001061ac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001061b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001061b4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x0000017cu, 1, 0);
    }
L_001061b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001061bc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001061c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001061c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001061c8:;
    {
        cpu->r[14] = 0x001061ccu; fn_000a8910(cpu);
    }
L_001061cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa4u);
    }
L_001061d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001061d4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001061d8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001061dc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001061e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001061e4:;
    {
        cpu->r[14] = 0x001061e8u; fn_000aeb58(cpu);
    }
L_001061e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001061ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001061f0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001061f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001061f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001061fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00106200:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00106204:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00106208:;
    {
        cpu->r[14] = 0x0010620cu; fn_000ad19c(cpu);
    }
L_0010620c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00106210:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00106214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106218:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_0010621c:;
    {
        cpu->r[14] = 0x00106220u; fn_000a88e0(cpu);
    }
L_00106220:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00106224:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00106228:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x0000017cu, 1, 0);
    }
L_0010622c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_00106230:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106234:;
    {
        cpu->r[14] = 0x00106238u; fn_000a8910(cpu);
    }
L_00106238:;
    {
        cpu->r[2] = rd32(cpu->r[6] + - 0x4u);
    }
L_0010623c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_00106240:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00106244:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00106248:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0010624c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00106250:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00106254:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00106258:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_0010625c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_00106260:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00106264:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00106268:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0010626c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00106270:;
    {
        cpu->r[14] = 0x00106274u; fn_0012fa2c(cpu);
    }
L_00106274:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00106278:;
    {
        cpu->r[14] = 0x0010627cu; fn_0012f780(cpu);
    }
L_0010627c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + - 0x8u);
    }
L_00106280:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_00106284:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00106288:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0010628c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00106290:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00106294:;
    {
        cpu->r[14] = 0x00106298u; fn_000ad8a0(cpu);
    }
L_00106298:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0010629c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001062a0:;
    {
        cpu->r[14] = 0x001062a4u; fn_0012f780(cpu);
    }
L_001062a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001062a8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001062ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001062b0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001062b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001062b8:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001062bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001062c0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001062c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001062c8:;
    {
        cpu->r[14] = 0x001062ccu; fn_0012fa2c(cpu);
    }
L_001062cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001062d0:;
    {
        cpu->r[14] = 0x001062d4u; fn_0012f780(cpu);
    }
L_001062d4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000036u, 1, 1);
    }
L_001062d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106194;
        }
    }
L_001062dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_001062e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001062e4:;
    {
        cpu->r[14] = 0x001062e8u; fn_000a8e18(cpu);
    }
L_001062e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001062ec:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001062f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001062f4u)) return;
    }
L_001062f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001062f8:;
    {
        cpu->r[14] = 0x001062fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001062fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106300:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001063b0;
        }
    }
L_00106304:;
    {
        cpu->r[6] = rd32(0x0010630cu + + 0xd4u);
    }
L_00106308:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010630c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x20u);
    }
L_00106310:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_00106314:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00106318:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0010631c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00106320:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x5cu);
    }
L_00106324:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106328:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_0010632c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106038;
        }
    }
L_00106330:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106334:;
    {
        cpu->r[14] = 0x00106338u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010633c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106038;
        }
    }
L_00106340:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00106344:;
    {
        cpu->r[14] = 0x00106348u; fn_00094228(cpu);
    }
L_00106348:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010634c:;
    {
        cpu->r[14] = 0x00106350u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00106350:;
    {
        goto L_00106038;
    }
L_00106354:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[10] = v;
    }
L_00106358:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010635c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00106360:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00106364:;
    {
        cpu->r[3] = 0x000004f9u;
    }
L_00106368:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0010636c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_00106370:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00106374:;
    {
        goto L_001060b8;
    }
L_00106378:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0010637c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_00106380:;
    {
        cpu->r[3] = 0x0000064cu;
    }
L_00106384:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_00106388:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0010638c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00106390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00106394:;
    {
        cpu->r[8] = rd32(0x0010639cu + + 0x48u);
    }
L_00106398:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0010639c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001063a0:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001063a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001063a8:;
    {
        cpu->r[14] = 0x001063acu; fn_00104bc0(cpu);
    }
L_001063ac:;
    {
        goto L_001060cc;
    }
L_001063b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001063b4:;
    {
        cpu->r[6] = rd32(0x001063bcu + + 0x24u);
    }
L_001063b8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_001063bc:;
    {
        cpu->r[14] = 0x001063c0u; fn_00094228(cpu);
    }
L_001063c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001063c4:;
    {
        cpu->r[14] = 0x001063c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001063c8:;
    {
        goto L_00106308;
    }
L_001063f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_001063f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001063f8:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x20u);
    }
L_001063fc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00106400:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00106404:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00106408:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0010640c:;
    {
        cpu->r[14] = 0x00106410u; fn_000f3d88(cpu);
    }
L_00106410:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00106414:;
    {
        cpu->r[3] = 0x0000016du;
    }
L_00106418:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc0u);
    }
L_0010641c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 3u, &shc); cpu->r[7] = v;
    }
L_00106420:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000118u, 1, 0);
    }
L_00106424:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00106428:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010642c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00106430:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00106434:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00106438:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010643c:;
    {
        cpu->r[14] = 0x00106440u; fn_000ad19c(cpu);
    }
L_00106440:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00106444:;
    {
        cpu->r[2] = 0x00000647u;
    }
L_00106448:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0010644c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00106450:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_00106454:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00106458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010645c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000630u;
        }
    }
L_00106460:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
    }
L_00106464:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00106468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0010646c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00106470:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x14u);
    }
L_00106474:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_00106478:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x10u);
    }
L_0010647c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00106480:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00106484:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00106488:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0010648c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x8u);
    }
L_00106490:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00106494:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00106498:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0010649c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001064a0:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x10u);
    }
L_001064a4:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0xcu);
    }
L_001064a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_001064ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001064b0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001064b4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001064b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001064bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001064c0:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x18u);
    }
L_001064c4:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x18u);
    }
L_001064c8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001064cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001064d0:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x1cu);
    }
L_001064d4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_001064d8:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x1cu);
    }
L_001064dc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001064e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001064e4:;
    {
        cpu->r[14] = 0x001064e8u; fn_00104bb8(cpu);
    }
L_001064e8:;
    {
        goto L_001060cc;
    }
}

/* _ZN16GS_CarTuningMenu6RenderEv @ 001064ec (arm) */
void fn_001064ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001064ec:;
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
L_001064f0:;
    {
        cpu->r[4] = rd32(0x001064f8u + + 0x3fcu);
    }
L_001064f4:;
    {
        cpu->r[3] = rd32(0x001064fcu + + 0x3fcu);
    }
L_001064f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_001064fc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00106504u, cpu->r[4], 0, 0);
    }
L_00106500:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00106504:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00106508:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010650c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106510:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00106514:;
    {
        cpu->r[14] = 0x00106518u; fn_00113570(cpu);
    }
L_00106518:;
    {
        cpu->r[1] = 0x77000000u;
    }
L_0010651c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106520:;
    {
        cpu->r[14] = 0x00106524u; fn_0012dd58(cpu);
    }
L_00106524:;
    {
        cpu->r[12] = rd32(0x0010652cu + + 0x3d0u);
    }
L_00106528:;
    {
        cpu->r[3] = rd32(0x00106530u + + 0x3d0u);
    }
L_0010652c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00106530:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106534:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00106538:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0010653c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106540:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00106544:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00106548:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010654c:;
    {
        cpu->r[14] = 0x00106550u; fn_00130908(cpu);
    }
L_00106550:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106554:;
    {
        cpu->r[14] = 0x00106558u; fn_00105f14(cpu);
    }
L_00106558:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_0010655c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00106560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106590;
        }
    }
L_00106564:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00106568:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010656c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00106570:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106574:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00106578:;
    {
        cpu->r[14] = 0x00106580u;
    }
L_0010657c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00106580u)) return;
    }
L_00106580:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00106584:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00106588:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010658c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00106568;
        }
    }
L_00106590:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106594:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00106598:;
    {
        cpu->r[14] = 0x001065a0u;
    }
L_0010659c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001065a0u)) return;
    }
L_001065a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001065a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001065a8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001065ac:;
    {
        cpu->r[14] = 0x001065b4u;
    }
L_001065b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001065b4u)) return;
    }
L_001065b4:;
    {
        cpu->r[3] = rd32(0x001065bcu + + 0x348u);
    }
L_001065b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001065bc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001065c0:;
    {
        cpu->r[2] = rd32(0x001065c8u + cpu->r[3]);
    }
L_001065c4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001065c8:;
    {
        cpu->r[14] = 0x001065d0u;
    }
L_001065cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x90u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001065d0u)) return;
    }
L_001065d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001065d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb0u);
    }
L_001065d8:;
    {
        cpu->r[1] = 0x000000a7u;
    }
L_001065dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001065e0:;
    {
        cpu->r[14] = 0x001065e4u; fn_000a8d10(cpu);
    }
L_001065e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x964u);
    }
L_001065e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001065ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106890;
        }
    }
L_001065f0:;
    {
        cpu->r[3] = rd32(0x001065f8u + + 0x310u);
    }
L_001065f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001065f8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001065fc:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00106600:;
    {
        cpu->r[2] = rd32(0x00106608u + + 0x304u);
    }
L_00106604:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010660cu, cpu->r[3], 0, 0);
    }
L_00106608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_0010660c:;
    {
        cpu->r[12] = rd32(0x00106614u + + 0x2fcu);
    }
L_00106610:;
    {
        cpu->r[2] = add_flags(cpu, 0x00106618u, cpu->r[2], 0, 0);
    }
L_00106614:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_00106618:;
    {
        cpu->r[3] = rd32(0x00106620u + + 0x2f4u);
    }
L_0010661c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_00106620:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00106624:;
    {
        cpu->r[2] = rd32(0x0010662cu + + 0x2ecu);
    }
L_00106628:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0010662c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00106634u, cpu->r[2], 0, 0);
    }
L_00106630:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00106634:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00106638:;
    {
        cpu->r[9] = rd32(0x00106640u + + 0x2dcu);
    }
L_0010663c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00106640:;
    {
        goto L_00106684;
    }
L_00106644:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00106648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001067cc;
        }
    }
L_0010664c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106650:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00106654:;
    {
        cpu->r[14] = 0x00106658u; fn_000a8e18(cpu);
    }
L_00106658:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_0010665c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106738;
        }
    }
L_00106660:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00106664:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x964u);
    }
L_00106668:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0010666c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00106670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00106674:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00106678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010667c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00106680:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106890;
        }
    }
L_00106684:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00106688:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_0010668c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00106690:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_00106694:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00106698:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_0010669c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001066a0:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[7];
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_001066a4:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001066a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001066ac:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001066b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001066b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001066b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010678c;
        }
    }
L_001066bc:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001066c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001066c4:;
    {
        cpu->r[14] = 0x001066c8u; fn_00096a08(cpu);
    }
L_001066c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001066cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001066d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001066d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001066d8:;
    {
        cpu->r[14] = 0x001066dcu; fn_0018aa44(cpu);
    }
L_001066dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001066e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001066e4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001066e8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001066ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001066f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106748;
        }
    }
L_001066f4:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001066f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001066fc:;
    {
        cpu->r[14] = 0x00106700u; fn_00096a08(cpu);
    }
L_00106700:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00106704:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00106708:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0010670c:;
    {
        cpu->r[14] = 0x00106710u; fn_0018aa44(cpu);
    }
L_00106710:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00106714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106860;
        }
    }
L_00106718:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0010671c:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x58u);
    }
L_00106720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106644;
        }
    }
L_00106724:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106728:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0010672c:;
    {
        cpu->r[14] = 0x00106730u; fn_000a8e18(cpu);
    }
L_00106730:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00106734:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00106738:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0010673c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_00106740:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00106744:;
    {
        goto L_00106694;
    }
L_00106748:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010674c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00106750:;
    {
        cpu->r[14] = 0x00106754u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106754:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001066f4;
        }
    }
L_0010675c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00106760:;
    {
        cpu->r[14] = 0x00106764u; fn_0018aa20(cpu);
    }
L_00106764:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00106768:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010676c:;
    {
        cpu->r[14] = 0x00106770u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00106770:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00106774:;
    {
        cpu->r[3] = rd32(0x0010677cu + + 0x1a4u);
    }
L_00106778:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010677c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00106780:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106784:;
    {
        cpu->r[14] = 0x00106788u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00106788:;
    {
        goto L_001066f4;
    }
L_0010678c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106790:;
    {
        cpu->r[14] = 0x00106794u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001066bc;
        }
    }
L_0010679c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001067a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001067a4:;
    {
        cpu->r[14] = 0x001067a8u; fn_0018aa20(cpu);
    }
L_001067a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001067ac:;
    {
        cpu->r[14] = 0x001067b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001067b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001067b4:;
    {
        cpu->r[3] = rd32(0x001067bcu + + 0x164u);
    }
L_001067b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001067bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001067c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001067c4:;
    {
        cpu->r[14] = 0x001067c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001067c8:;
    {
        goto L_001066bc;
    }
L_001067cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x968u);
    }
L_001067d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001067d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001067d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001067dc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001067e0:;
    {
        cpu->r[14] = 0x001067e4u; fn_00096e94(cpu);
    }
L_001067e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001067e8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001067ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001068c0;
        }
    }
L_001067f0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_001067f4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001067f8:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[3]);
    }
L_001067fc:;
    {
        cpu->r[3] = rd32(0x00106804u + + 0x120u);
    }
L_00106800:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00106804:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[2]);
    }
L_00106808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010680c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 0);
    }
L_00106810:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00106814:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00106818:;
    {
        cpu->r[14] = 0x0010681cu; fn_000962d0(cpu);
    }
L_0010681c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00106820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00106824:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00106828:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0010682c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00106830:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_00106834:;
    {
        cpu->r[14] = 0x00106838u; fn_000aeb58(cpu);
    }
L_00106838:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010683c:;
    {
        cpu->r[12] = 0x00000020u;
    }
L_00106840:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00106844:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00106848:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010684c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00106850:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00106854:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00106858:;
    {
        cpu->r[14] = 0x0010685cu; fn_000ad19c(cpu);
    }
L_0010685c:;
    {
        goto L_0010664c;
    }
L_00106860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_00106864:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00106868:;
    {
        cpu->r[2] = rd32(0x00106870u + + 0xb8u);
    }
L_0010686c:;
    {
        cpu->r[12] = 0x000002a5u;
    }
L_00106870:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00106874:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00106878:;
    {
        cpu->r[2] = add_flags(cpu, 0x00106880u, cpu->r[2], 0, 0);
    }
L_0010687c:;
    {
        cpu->r[3] = rd32(0x00106884u + + 0xa8u);
    }
L_00106880:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00106884:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010688cu, cpu->r[3], 0, 0);
    }
L_00106888:;
    {
        cpu->r[14] = 0x0010688cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0010688c:;
    {
        goto L_00106718;
    }
L_00106890:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_00106894:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00106898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001068b8;
        }
    }
L_0010689c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8d8u);
    }
L_001068a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001068a4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001068b8;
        }
    }
L_001068a8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_001068ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001068b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001068b4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x96cu, cpu->r[3]);
        }
    }
L_001068b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001068bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001068c0u)) return;
    }
L_001068c0:;
    {
        cpu->r[3] = 0x000002b5u;
    }
L_001068c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001068c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001068cc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001068d0:;
    {
        cpu->r[1] = rd32(0x001068d8u + + 0x58u);
    }
L_001068d4:;
    {
        cpu->r[2] = rd32(0x001068dcu + + 0x58u);
    }
L_001068d8:;
    {
        cpu->r[3] = rd32(0x001068e0u + + 0x58u);
    }
L_001068dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001068e4u, cpu->r[1], 0, 0);
    }
L_001068e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001068e8u, cpu->r[2], 0, 0);
    }
L_001068e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001068e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001068f0u, cpu->r[3], 0, 0);
    }
L_001068ec:;
    {
        cpu->r[14] = 0x001068f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001068f0:;
    {
        goto L_001067f0;
    }
}

/* _ZN12GS_CheatMenu8isKindOfEi @ 0010693c (arm) */
void fn_0010693c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010693c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001bu, 1, 1);
    }
L_00106940:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00106944:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00106948:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GS_CheatMenu8DoActionEii @ 0010694c (arm) */
void fn_0010694c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010694c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00106950:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_00106954:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00106958:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0010695c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00106960:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_00106964:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_19 @ 00106968 (arm) */
void fn_00106968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106968:;
    {
        cpu->r[3] = rd32(0x00106970u + + 0x54u);
    }
L_0010696c:;
    {
        cpu->r[1] = rd32(0x00106974u + + 0x54u);
    }
L_00106970:;
    {
        cpu->r[3] = add_flags(cpu, 0x00106978u, cpu->r[3], 0, 0);
    }
L_00106974:;
    {
        cpu->r[0] = rd32(0x0010697cu + + 0x50u);
    }
L_00106978:;
    {
        cpu->r[2] = rd32(0x00106980u + + 0x50u);
    }
L_0010697c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00106980:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00106984:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010698cu, cpu->r[2], 0, 0);
    }
L_00106988:;
    {
        cpu->r[3] = rd32(0x00106990u + + 0x44u);
    }
L_0010698c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00106990:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00106994:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010699cu, cpu->r[3], 0, 0);
    }
L_00106998:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000184u, 1, 0);
    }
L_0010699c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000064u, 1, 0);
    }
L_001069a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_001069a4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_001069a8:;
    {
        wr32(cpu->r[3] + + 0x9cu, cpu->r[1]);
    }
L_001069ac:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_001069b0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001069b4:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[1]);
    }
L_001069b8:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[2]);
    }
L_001069bc:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_001069c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GS_CheatMenu13GetMenuStringEi @ 001069d8 (arm) */
void fn_001069d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001069d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001069dc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001069e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001069e4:;
    {
        cpu->r[14] = 0x001069e8u; fn_00095978(cpu);
    }
L_001069e8:;
    {
        cpu->r[3] = 0x000005d3u;
    }
L_001069ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001069f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106a30;
        }
    }
L_001069f4:;
    {
        cpu->r[3] = 0x000005d4u;
    }
L_001069f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001069fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106a10;
        }
    }
L_00106a00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106a04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00106a08:;
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
L_00106a0c:;
    {
        return fn_0010e02c(cpu);
    }
L_00106a10:;
    {
        cpu->r[1] = rd32(0x00106a18u + + 0x4cu);
    }
L_00106a14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00106a18:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00106a1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106a20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00106a28u, cpu->r[1], 0, 0);
    }
L_00106a24:;
    {
        cpu->r[14] = 0x00106a28u; fn_000ae830(cpu);
    }
L_00106a28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106a2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106a30u)) return;
    }
L_00106a30:;
    {
        cpu->r[5] = rd32(0x00106a38u + + 0x30u);
    }
L_00106a34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00106a38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00106a3c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00106a44u, cpu->r[5], 0, 0);
    }
L_00106a40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00106a44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00106a48:;
    {
        cpu->r[14] = 0x00106a4cu; fn_000990cc(cpu);
    }
L_00106a4c:;
    {
        cpu->r[1] = rd32(0x00106a54u + + 0x18u);
    }
L_00106a50:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00106a54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106a58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00106a60u, cpu->r[1], 0, 0);
    }
L_00106a5c:;
    {
        cpu->r[14] = 0x00106a60u; fn_000ae830(cpu);
    }
L_00106a60:;
    {
        goto L_00106a28;
    }
}

/* _ZN12GS_CheatMenu6RenderEv @ 00106a70 (arm) */
void fn_00106a70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106a70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00106a74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00106a78:;
    {
        cpu->r[14] = 0x00106a7cu; fn_0010de00(cpu);
    }
L_00106a7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106a80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106a84u)) return;
        }
    }
L_00106a84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00106a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00106a8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106abc;
        }
    }
L_00106a90:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00106a94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00106a98:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00106a9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106aa0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00106aa4:;
    {
        cpu->r[14] = 0x00106aacu;
    }
L_00106aa8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00106aacu)) return;
    }
L_00106aac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00106ab0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00106ab4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00106ab8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00106a94;
        }
    }
L_00106abc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106ac0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00106ac4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00106ac8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00106acc:;
    {
        cpu->r[14] = 0x00106ad4u;
    }
L_00106ad0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00106ad4u)) return;
    }
L_00106ad4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106ad8u)) return;
    }
}

/* _ZN12GS_CheatMenu6ResumeEv @ 00106ad8 (arm) */
void fn_00106ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106ad8:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN12GS_CheatMenuD1Ev @ 00106adc (arm) */
void fn_00106adc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106adc:;
    {
        cpu->r[3] = rd32(0x00106ae4u + + 0x24u);
    }
L_00106ae0:;
    {
        cpu->r[2] = rd32(0x00106ae8u + + 0x24u);
    }
L_00106ae4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00106aecu, cpu->r[3], 0, 0);
    }
L_00106ae8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00106aec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00106af0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00106af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00106af8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00106afc:;
    {
        cpu->r[14] = 0x00106b00u; fn_000ec21c(cpu);
    }
L_00106b00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106b04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00106b08u)) return;
    }
}

/* _ZN12GS_CheatMenuD0Ev @ 00106b10 (arm) */
void fn_00106b10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106b10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00106b14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00106b18:;
    {
        cpu->r[14] = 0x00106b1cu; fn_00106adc(cpu);
    }
L_00106b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106b20:;
    {
        cpu->r[14] = 0x00106b24u; fn_0018ba20(cpu);
    }
L_00106b24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106b28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00106b2cu)) return;
    }
}

/* _ZN12GS_CheatMenuD2Ev @ 00106b2c (arm) */
void fn_00106b2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106b2c:;
    {
        cpu->r[3] = rd32(0x00106b34u + + 0x24u);
    }
L_00106b30:;
    {
        cpu->r[2] = rd32(0x00106b38u + + 0x24u);
    }
L_00106b34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00106b3cu, cpu->r[3], 0, 0);
    }
L_00106b38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00106b3c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00106b40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00106b44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00106b48:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00106b4c:;
    {
        cpu->r[14] = 0x00106b50u; fn_000ec21c(cpu);
    }
L_00106b50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106b54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00106b58u)) return;
    }
}

/* _ZN12GS_CheatMenuC1Ev @ 00106b60 (arm) */
void fn_00106b60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106b60:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00106b64:;
    {
        cpu->r[4] = rd32(0x00106b6cu + + 0x28u);
    }
L_00106b68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00106b6c:;
    {
        cpu->r[14] = 0x00106b70u; fn_0010ffa8(cpu);
    }
L_00106b70:;
    {
        cpu->r[3] = rd32(0x00106b78u + + 0x20u);
    }
L_00106b74:;
    {
        cpu->r[4] = add_flags(cpu, 0x00106b7cu, cpu->r[4], 0, 0);
    }
L_00106b78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106b7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106b80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00106b84:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00106b88:;
    {
        cpu->r[14] = 0x00106b8cu; fn_0010db28(cpu);
    }
L_00106b8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106b90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106b94u)) return;
    }
}

/* _ZN12GS_CheatMenuC2Ev @ 00106b9c (arm) */
void fn_00106b9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106b9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00106ba0:;
    {
        cpu->r[4] = rd32(0x00106ba8u + + 0x28u);
    }
L_00106ba4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00106ba8:;
    {
        cpu->r[14] = 0x00106bacu; fn_0010ffa8(cpu);
    }
L_00106bac:;
    {
        cpu->r[3] = rd32(0x00106bb4u + + 0x20u);
    }
L_00106bb0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00106bb8u, cpu->r[4], 0, 0);
    }
L_00106bb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106bb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106bbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00106bc0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00106bc4:;
    {
        cpu->r[14] = 0x00106bc8u; fn_0010db28(cpu);
    }
L_00106bc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00106bcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106bd0u)) return;
    }
}

/* _ZN12GS_CheatMenu6UpdateEv @ 00106bd8 (arm) */
void fn_00106bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106bd8:;
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
L_00106bdc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00106be0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_00106be4:;
    {
        cpu->r[4] = rd32(0x00106becu + + 0x1a0u);
    }
L_00106be8:;
    {
        cpu->r[14] = 0x00106becu; fn_00095978(cpu);
    }
L_00106bec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00106bf0:;
    {
        cpu->r[2] = 0x000005d6u;
    }
L_00106bf4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00106bfcu, cpu->r[4], 0, 0);
    }
L_00106bf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00106bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106c94;
        }
    }
L_00106c00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00106c2c;
        }
    }
L_00106c04:;
    {
        cpu->r[2] = 0x000005d7u;
    }
L_00106c08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00106c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106c58;
        }
    }
L_00106c10:;
    {
        cpu->r[2] = 0x000005d8u;
    }
L_00106c14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00106c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106c50;
        }
    }
L_00106c1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00106c20:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_00106c24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00106c28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106c2cu)) return;
    }
L_00106c2c:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00106c30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00106c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106c60;
        }
    }
L_00106c38:;
    {
        cpu->r[2] = 0x000005d5u;
    }
L_00106c3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00106c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106c1c;
        }
    }
L_00106c44:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00106c48:;
    {
        cpu->r[14] = 0x00106c4cu; fn_0009578c(cpu);
    }
L_00106c4c:;
    {
        goto L_00106c1c;
    }
L_00106c50:;
    {
        cpu->r[14] = 0x00106c54u; fn_00095848(cpu);
    }
L_00106c54:;
    {
        goto L_00106c1c;
    }
L_00106c58:;
    {
        cpu->r[14] = 0x00106c5cu; fn_0009589c(cpu);
    }
L_00106c5c:;
    {
        goto L_00106c1c;
    }
L_00106c60:;
    {
        cpu->r[5] = rd32(0x00106c68u + + 0x128u);
    }
L_00106c64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00106c68:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00106c6c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00106c70:;
    {
        cpu->r[14] = 0x00106c74u; fn_000f3430(cpu);
    }
L_00106c74:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106ca0;
        }
    }
L_00106c7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00106c80:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00106c84:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00106c88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00106c8c:;
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
L_00106c90:;
    {
        return fn_000f34e8(cpu);
    }
L_00106c94:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00106c98:;
    {
        cpu->r[14] = 0x00106c9cu; fn_000956d0(cpu);
    }
L_00106c9c:;
    {
        goto L_00106c1c;
    }
L_00106ca0:;
    {
        cpu->r[14] = 0x00106ca4u; fn_0009562c(cpu);
    }
L_00106ca4:;
    {
        cpu->r[14] = 0x00106ca8u; fn_00095978(cpu);
    }
L_00106ca8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00106cac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00106cb0:;
    {
        cpu->r[14] = 0x00106cb4u; fn_000956d0(cpu);
    }
L_00106cb4:;
    {
        cpu->r[14] = 0x00106cb8u; fn_00095978(cpu);
    }
L_00106cb8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00106cbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00106cc0:;
    {
        cpu->r[14] = 0x00106cc4u; fn_000956d0(cpu);
    }
L_00106cc4:;
    {
        cpu->r[14] = 0x00106cc8u; fn_00095978(cpu);
    }
L_00106cc8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00106ccc:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_00106cd0:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_00106cd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00106cd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00106cdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00106ce0:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_00106ce4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00106ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106d4c;
        }
    }
L_00106cec:;
    {
        cpu->r[3] = rd32(0x00106cf4u + + 0xa0u);
    }
L_00106cf0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00106cf4:;
    {
        cpu->r[8] = rd32(0x00106cfcu + + 0x9cu);
    }
L_00106cf8:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00106cfc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00106d00:;
    {
        goto L_00106d1c;
    }
L_00106d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00106d08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x44u);
    }
L_00106d0c:;
    {
        wr8(cpu->r[3] + cpu->r[6], cpu->r[10]);
    }
L_00106d10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00106d14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000064u, 1, 1);
    }
L_00106d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106d4c;
        }
    }
L_00106d1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00106d20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106d24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106d04;
        }
    }
L_00106d28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00106d2c:;
    {
        cpu->r[14] = 0x00106d30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106d30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106d04;
        }
    }
L_00106d38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00106d3c:;
    {
        cpu->r[14] = 0x00106d40u; fn_00094228(cpu);
    }
L_00106d40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00106d44:;
    {
        cpu->r[14] = 0x00106d48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00106d48:;
    {
        goto L_00106d04;
    }
L_00106d4c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00106d50:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_00106d54:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00106d68;
        }
    }
L_00106d58:;
    {
        cpu->r[14] = 0x00106d5cu; fn_000979a0(cpu);
    }
L_00106d5c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00106d60:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[3]);
    }
L_00106d64:;
    {
        goto L_00106c7c;
    }
L_00106d68:;
    {
        cpu->r[14] = 0x00106d6cu; fn_000979a0(cpu);
    }
L_00106d6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00106d70:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00106d74:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00106d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002140u, 0, 0);
    }
L_00106d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001bu, 0, 0);
    }
L_00106d80:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00106d84:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[3]);
    }
L_00106d88:;
    {
        goto L_00106d58;
    }
}

/* _ZN12GS_CheatMenu17ApplyMenuSettingsEv @ 00106d9c (arm) */
void fn_00106d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106d9c:;
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
L_00106da0:;
    {
        cpu->r[5] = rd32(0x00106da8u + + 0x1a0u);
    }
L_00106da4:;
    {
        cpu->r[6] = rd32(0x00106dacu + + 0x1a0u);
    }
L_00106da8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00106dac:;
    {
        cpu->r[5] = add_flags(cpu, 0x00106db4u, cpu->r[5], 0, 0);
    }
L_00106db0:;
    {
        cpu->r[2] = rd32(0x00106db8u + + 0x198u);
    }
L_00106db4:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_00106db8:;
    {
        cpu->r[1] = 0x000005d2u;
    }
L_00106dbc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00106dc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00106dc8u, cpu->r[2], 0, 0);
    }
L_00106dc4:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_00106dc8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00106dcc:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00106dd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00106dd4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00106dd8:;
    {
        wr8(cpu->r[0] + + 0x8cau, cpu->r[3]);
    }
L_00106ddc:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00106de0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00106de4:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_00106de8:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_00106dec:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00106df0:;
    {
        cpu->r[14] = 0x00106df4u; fn_000f3430(cpu);
    }
L_00106df4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106e30;
        }
    }
L_00106dfc:;
    {
        cpu->r[3] = rd32(0x00106e04u + + 0x150u);
    }
L_00106e00:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00106e04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00106e08:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00106e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00106e10:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00106e14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00106e18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00106e1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00106e20:;
    {
        cpu->r[14] = 0x00106e28u;
    }
L_00106e24:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00106e28u)) return;
    }
L_00106e28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00106e2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00106e30u)) return;
    }
L_00106e30:;
    {
        cpu->r[3] = rd32(0x00106e38u + + 0x11cu);
    }
L_00106e34:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00106e38:;
    {
        cpu->r[9] = rd32(0x00106e40u + + 0x118u);
    }
L_00106e3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00106e40:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00106e44:;
    {
        cpu->r[14] = 0x00106e48u; fn_0009562c(cpu);
    }
L_00106e48:;
    {
        cpu->r[14] = 0x00106e4cu; fn_00095978(cpu);
    }
L_00106e4c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00106e50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106e54:;
    {
        cpu->r[14] = 0x00106e58u; fn_000956d0(cpu);
    }
L_00106e58:;
    {
        cpu->r[14] = 0x00106e5cu; fn_00095978(cpu);
    }
L_00106e5c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00106e60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106e64:;
    {
        cpu->r[14] = 0x00106e68u; fn_000956d0(cpu);
    }
L_00106e68:;
    {
        cpu->r[14] = 0x00106e6cu; fn_00095978(cpu);
    }
L_00106e6c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00106e70:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_00106e74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00106e78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00106e7c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00106e80:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_00106e84:;
    {
        cpu->r[14] = 0x00106e88u; fn_000a04f8(cpu);
    }
L_00106e88:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00106e8c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00106e90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106e94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00106e98:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_00106e9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106ed8;
        }
    }
L_00106ea0:;
    {
        cpu->r[7] = rd32(0x00106ea8u + + 0xb4u);
    }
L_00106ea4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00106ea8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00106eac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x5cu);
    }
L_00106eb0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00106eb4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00106eb8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00106ebc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00106ec0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00106ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002140u, 0, 0);
    }
L_00106ec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_00106ecc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00106ed0:;
    {
        wr32(cpu->r[2] + + 0x58u, cpu->r[3]);
    }
L_00106ed4:;
    {
        goto L_00106e0c;
    }
L_00106ed8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106edc:;
    {
        cpu->r[14] = 0x00106ee0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106ee0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106ee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106f30;
        }
    }
L_00106ee8:;
    {
        cpu->r[7] = rd32(0x00106ef0u + + 0x6cu);
    }
L_00106eec:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00106ef0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00106ef4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00106ef8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x5cu);
    }
L_00106efc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106f00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00106f04:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00106f08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00106eb4;
        }
    }
L_00106f0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106f10:;
    {
        cpu->r[14] = 0x00106f14u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00106f14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00106f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106eb4;
        }
    }
L_00106f1c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00106f20:;
    {
        cpu->r[14] = 0x00106f24u; fn_00094228(cpu);
    }
L_00106f24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106f28:;
    {
        cpu->r[14] = 0x00106f2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00106f2c:;
    {
        goto L_00106eb4;
    }
L_00106f30:;
    {
        cpu->r[7] = rd32(0x00106f38u + + 0x24u);
    }
L_00106f34:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00106f38:;
    {
        cpu->r[14] = 0x00106f3cu; fn_00094228(cpu);
    }
L_00106f3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106f40:;
    {
        cpu->r[14] = 0x00106f44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00106f44:;
    {
        goto L_00106eec;
    }
}

/* _ZN12GS_CheatMenu11InitSpritesEv @ 00106f60 (arm) */
void fn_00106f60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00106f60:;
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
L_00106f64:;
    {
        cpu->r[4] = rd32(0x00106f6cu + + 0x33cu);
    }
L_00106f68:;
    {
        cpu->r[7] = rd32(0x00106f70u + + 0x33cu);
    }
L_00106f6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00106f70:;
    {
        cpu->r[4] = add_flags(cpu, 0x00106f78u, cpu->r[4], 0, 0);
    }
L_00106f74:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00106f78:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00106f7c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001070b0;
        }
    }
L_00106f84:;
    {
        cpu->r[6] = rd32(0x00106f8cu + + 0x324u);
    }
L_00106f88:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00106f8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00106f90:;
    {
        cpu->r[14] = 0x00106f94u; fn_00096a08(cpu);
    }
L_00106f94:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00106f98:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00106f9c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00106fa0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106fa4:;
    {
        cpu->r[14] = 0x00106fa8u; fn_0018aa44(cpu);
    }
L_00106fa8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00106fac:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00106fb0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106fb4:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00106fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107230;
        }
    }
L_00106fbc:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00106fc0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00106fc4:;
    {
        cpu->r[14] = 0x00106fc8u; fn_00096a08(cpu);
    }
L_00106fc8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00106fcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00106fd0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00106fd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00106fd8:;
    {
        cpu->r[14] = 0x00106fdcu; fn_0018aa44(cpu);
    }
L_00106fdc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00106fe0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00106fe4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00106fe8:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00106fec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001071f4;
        }
    }
L_00106ff0:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00106ff4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00106ff8:;
    {
        cpu->r[14] = 0x00106ffcu; fn_00096a08(cpu);
    }
L_00106ffc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00107000:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00107004:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00107008:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010700c:;
    {
        cpu->r[14] = 0x00107010u; fn_0018aa44(cpu);
    }
L_00107010:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00107014:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00107018:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010701c:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00107020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001071b8;
        }
    }
L_00107024:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00107028:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010702c:;
    {
        cpu->r[14] = 0x00107030u; fn_00096a08(cpu);
    }
L_00107030:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00107034:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00107038:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010703c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107040:;
    {
        cpu->r[14] = 0x00107044u; fn_0018aa44(cpu);
    }
L_00107044:;
    {
        cpu->r[3] = rd32(0x0010704cu + + 0x268u);
    }
L_00107048:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010704c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107050:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00107054:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00107058:;
    {
        cpu->r[14] = 0x0010705cu; fn_000f3430(cpu);
    }
L_0010705c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107130;
        }
    }
L_00107064:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00107068:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010706c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00107070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001070f4;
        }
    }
L_00107074:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00107078:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0010707c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00107080:;
    {
        cpu->r[14] = 0x00107084u; fn_0018aa44(cpu);
    }
L_00107084:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00107088:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010708c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00107090:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00107094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107164;
        }
    }
L_00107098:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010709c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001070a0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001070a4:;
    {
        cpu->r[14] = 0x001070a8u; fn_0018aa44(cpu);
    }
L_001070a8:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001070ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001070b0u)) return;
    }
L_001070b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001070b4:;
    {
        cpu->r[14] = 0x001070b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001070b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001070bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106f84;
        }
    }
L_001070c0:;
    {
        cpu->r[6] = rd32(0x001070c8u + + 0x1e8u);
    }
L_001070c4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001070c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001070cc:;
    {
        cpu->r[14] = 0x001070d0u; fn_0018aa20(cpu);
    }
L_001070d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001070d4:;
    {
        cpu->r[14] = 0x001070d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001070d8:;
    {
        cpu->r[3] = rd32(0x001070e0u + + 0x1d8u);
    }
L_001070dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001070e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001070e4:;
    {
        cpu->r[3] = rd32(0x001070ecu + + 0x1d0u);
    }
L_001070e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001070ec:;
    {
        cpu->r[14] = 0x001070f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001070f0:;
    {
        goto L_00106f88;
    }
L_001070f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001070f8:;
    {
        cpu->r[14] = 0x001070fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001070fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107074;
        }
    }
L_00107104:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107108:;
    {
        cpu->r[14] = 0x0010710cu; fn_0018aa20(cpu);
    }
L_0010710c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00107110:;
    {
        cpu->r[14] = 0x00107114u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00107114:;
    {
        cpu->r[3] = rd32(0x0010711cu + + 0x19cu);
    }
L_00107118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010711c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107120:;
    {
        cpu->r[3] = rd32(0x00107128u + + 0x194u);
    }
L_00107124:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107128:;
    {
        cpu->r[14] = 0x0010712cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010712c:;
    {
        goto L_00107074;
    }
L_00107130:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00107134:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00107138:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010713c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010726c;
        }
    }
L_00107140:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00107144:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00107148:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010714c:;
    {
        cpu->r[14] = 0x00107150u; fn_0018aa44(cpu);
    }
L_00107150:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00107154:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00107158:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010715c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00107160:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107098;
        }
    }
L_00107164:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107168:;
    {
        cpu->r[14] = 0x0010716cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010716c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107098;
        }
    }
L_00107174:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00107178:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010717c:;
    {
        cpu->r[14] = 0x00107180u; fn_0018aa20(cpu);
    }
L_00107180:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107184:;
    {
        cpu->r[14] = 0x00107188u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00107188:;
    {
        cpu->r[3] = rd32(0x00107190u + + 0x128u);
    }
L_0010718c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107190:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107194:;
    {
        cpu->r[3] = rd32(0x0010719cu + + 0x120u);
    }
L_00107198:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010719c:;
    {
        cpu->r[14] = 0x001071a0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001071a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001071a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001071a8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001071ac:;
    {
        cpu->r[14] = 0x001071b0u; fn_0018aa44(cpu);
    }
L_001071b0:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001071b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001071b8u)) return;
    }
L_001071b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001071bc:;
    {
        cpu->r[14] = 0x001071c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001071c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001071c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107024;
        }
    }
L_001071c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001071cc:;
    {
        cpu->r[14] = 0x001071d0u; fn_0018aa20(cpu);
    }
L_001071d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001071d4:;
    {
        cpu->r[14] = 0x001071d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001071d8:;
    {
        cpu->r[3] = rd32(0x001071e0u + + 0xd8u);
    }
L_001071dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001071e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001071e4:;
    {
        cpu->r[3] = rd32(0x001071ecu + + 0xd0u);
    }
L_001071e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001071ec:;
    {
        cpu->r[14] = 0x001071f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001071f0:;
    {
        goto L_00107024;
    }
L_001071f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001071f8:;
    {
        cpu->r[14] = 0x001071fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001071fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106ff0;
        }
    }
L_00107204:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107208:;
    {
        cpu->r[14] = 0x0010720cu; fn_0018aa20(cpu);
    }
L_0010720c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00107210:;
    {
        cpu->r[14] = 0x00107214u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00107214:;
    {
        cpu->r[3] = rd32(0x0010721cu + + 0x9cu);
    }
L_00107218:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010721c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107220:;
    {
        cpu->r[3] = rd32(0x00107228u + + 0x94u);
    }
L_00107224:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107228:;
    {
        cpu->r[14] = 0x0010722cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010722c:;
    {
        goto L_00106ff0;
    }
L_00107230:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00107234:;
    {
        cpu->r[14] = 0x00107238u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00107238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010723c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00106fbc;
        }
    }
L_00107240:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107244:;
    {
        cpu->r[14] = 0x00107248u; fn_0018aa20(cpu);
    }
L_00107248:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010724c:;
    {
        cpu->r[14] = 0x00107250u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00107250:;
    {
        cpu->r[3] = rd32(0x00107258u + + 0x60u);
    }
L_00107254:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107258:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010725c:;
    {
        cpu->r[3] = rd32(0x00107264u + + 0x58u);
    }
L_00107260:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107264:;
    {
        cpu->r[14] = 0x00107268u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00107268:;
    {
        goto L_00106fbc;
    }
L_0010726c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00107270:;
    {
        cpu->r[14] = 0x00107274u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00107274:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107140;
        }
    }
L_0010727c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107280:;
    {
        cpu->r[14] = 0x00107284u; fn_0018aa20(cpu);
    }
L_00107284:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00107288:;
    {
        cpu->r[14] = 0x0010728cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010728c:;
    {
        cpu->r[3] = rd32(0x00107294u + + 0x24u);
    }
L_00107290:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00107294:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107298:;
    {
        cpu->r[3] = rd32(0x001072a0u + + 0x1cu);
    }
L_0010729c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001072a0:;
    {
        cpu->r[14] = 0x001072a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001072a4:;
    {
        goto L_00107140;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu17ApplyMenuSettingsEv @ 001072c0 (arm) */
void fn_001072c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001072c0:;
    {
        cpu->r[2] = rd32(0x001072c8u + + 0x3cu);
    }
L_001072c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001072c8:;
    {
        cpu->r[12] = 0x000005cau;
    }
L_001072cc:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001072d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001072d8u, cpu->r[2], 0, 0);
    }
L_001072d4:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[12]);
    }
L_001072d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001072dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_001072e0:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_001072e4:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[12]);
    }
L_001072e8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001072ec:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_001072f0:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[12]);
    }
L_001072f4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001072f8:;
    {
        cpu->r[14] = 0x00107300u;
    }
L_001072fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00107300u)) return;
    }
L_00107300:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00107304u)) return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu8isKindOfEi @ 00107308 (arm) */
void fn_00107308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107308:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000032u, 1, 1);
    }
L_0010730c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00107310:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00107314:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu13IsPointInsideEiii @ 00107318 (arm) */
void fn_00107318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107318:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010731c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00107320:;
    {
        cpu->r[4] = rd32(0x00107328u + + 0x134u);
    }
L_00107324:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00107328:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0010732c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00107334u, cpu->r[4], 0, 0);
    }
L_00107330:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00107358;
        }
    }
L_00107334:;
    {
        cpu->r[2] = rd32(0x0010733cu + + 0x124u);
    }
L_00107338:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010733c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00107340:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_00107344:;
    {
        cpu->r[14] = 0x0010734cu;
    }
L_00107348:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010734cu)) return;
    }
L_0010734c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 0);
    }
L_00107350:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00107354:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00107360;
        }
    }
L_00107358:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0010735c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00107360u)) return;
    }
L_00107360:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00107364:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00107358;
        }
    }
L_00107368:;
    {
        cpu->r[3] = rd32(0x00107370u + + 0xf4u);
    }
L_0010736c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107370:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00107374:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00107378:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00107358;
        }
    }
L_0010737c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_00107380:;
    {
        cpu->r[2] = rd32(0x00107388u + + 0xe0u);
    }
L_00107384:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00107388:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_0010738c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00107390:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00107394:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_00107398:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010739c:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001073a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001073a4:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001073a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001073ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6]);
    }
L_001073b0:;
    {
        uint32_t v = cpu->r[3] & 0x00000003u; cpu->r[2] = v;
    }
L_001073b4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_001073b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001073bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001073c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001073c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001073c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001073cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001073d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001073d4:;
    {
        vfp_vsub(cpu, 12, 14, 12);
    }
L_001073d8:;
    {
        vfp_vsub(cpu, 13, 15, 13);
    }
L_001073dc:;
    {
        vfp_vsub(cpu, 14, 14, 10);
    }
L_001073e0:;
    {
        vfp_vsub(cpu, 15, 15, 11);
    }
L_001073e4:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_001073e8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_001073ec:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001073f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001073f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107434;
        }
    }
L_001073f8:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,12);
    }
L_001073fc:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00107400:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4]; cpu->r[2] = v;
    }
L_00107404:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00107408:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0010740c:;
    {
        uint32_t v = cpu->r[2] - cpu->r[4] * cpu->r[5]; cpu->r[2] = v;
    }
L_00107410:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00107414:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00107418:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_0010741c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00107420:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107358;
        }
    }
L_00107424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00107428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001073a8;
        }
    }
L_0010742c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00107430:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00107434u)) return;
    }
L_00107434:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00107438:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010743c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[2] = v;
    }
L_00107440:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00107444:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00107448:;
    {
        uint32_t v = cpu->r[2] - cpu->r[5] * cpu->r[4]; cpu->r[2] = v;
    }
L_0010744c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00107450:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00107454:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = (~0x00000000u);
        }
    }
L_00107458:;
    {
        goto L_00107424;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu19ProcessOnMousePinchEv @ 0010746c (arm) */
void fn_0010746c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010746c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x954u);
    }
L_00107470:;
    {
        cpu->r[3] = rd32(0x00107478u + + 0x6cu);
    }
L_00107474:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00107478:;
    {
        cpu->r[3] = add_flags(cpu, 0x00107480u, cpu->r[3], 0, 0);
    }
L_0010747c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00107480:;
    {
        cpu->r[2] = rd32(0x00107488u + + 0x60u);
    }
L_00107484:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010748cu + + 0x4cu);
    }
L_00107488:;
    {
        cpu->r[1] = rd32(0x00107490u + + 0x5cu);
    }
L_0010748c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00107494u + + 0x48u);
    }
L_00107490:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107494:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00107498:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0010749c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_001074a0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_001074a4:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001074a8:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_001074ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001074b0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001074b4:;
    {
        vfp_sync_flags(cpu);
    }
L_001074b8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001074c4;
        }
    }
L_001074bc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001074c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001074c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001074ccu + + 0x14u);
    }
L_001074c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001074cc:;
    {
        vfp_sync_flags(cpu);
    }
L_001074d0:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001074d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
