#include "functions.h"

/* _ZN3vox7DataObj6UpdateEv @ 001e15d8 (arm) */
void fn_001e15d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e15d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001e15dc:;
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
L_001e15e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e15e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e15e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e15ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e15f8;
        }
    }
L_001e15f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e15f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e15f8u)) return;
    }
L_001e15f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e15fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1600:;
    {
        cpu->r[14] = 0x001e1604u; fn_001ebcfc(cpu);
    }
L_001e1604:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001e1608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001e160c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e161c;
        }
    }
L_001e1610:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1614:;
    {
        cpu->r[14] = 0x001e1618u; fn_001ebcf8(cpu);
    }
L_001e1618:;
    {
        goto L_001e15f0;
    }
L_001e161c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x54u);
    }
L_001e1620:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001e1624:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1864;
        }
    }
L_001e1628:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001e16c0;
        }
    }
L_001e162c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1630:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1634:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1638:;
    {
        cpu->r[14] = 0x001e1640u;
    }
L_001e163c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1640u)) return;
    }
L_001e1640:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16a8;
        }
    }
L_001e1648:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e164c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1650:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1654:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1658:;
    {
        cpu->r[14] = 0x001e1660u;
    }
L_001e165c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1660u)) return;
    }
L_001e1660:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1690;
        }
    }
L_001e1668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001e166c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1670:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_001e1674:;
    {
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
L_001e1678:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001e167c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e1680:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1684:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_001e1688:;
    {
        cpu->r[14] = 0x001e1690u;
    }
L_001e168c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1690u)) return;
    }
L_001e1690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1694:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1698:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e169c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e16a0:;
    {
        cpu->r[14] = 0x001e16a8u;
    }
L_001e16a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e16a8u)) return;
    }
L_001e16a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001e16ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e16b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e16c8;
        }
    }
L_001e16b4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e16b8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e16bc:;
    {
        goto L_001e1610;
    }
L_001e16c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001e16c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16d4;
        }
    }
L_001e16c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e16cc:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e16d0:;
    {
        goto L_001e1610;
    }
L_001e16d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e16d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e16dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e16e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e16e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e16e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e16ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e16f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e16f4:;
    {
        cpu->r[14] = 0x001e16fcu;
    }
L_001e16f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e16fcu)) return;
    }
L_001e16fc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e1704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1708:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e170c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1710:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1714:;
    {
        cpu->r[14] = 0x001e171cu;
    }
L_001e1718:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e171cu)) return;
    }
L_001e171c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1a1c;
        }
    }
L_001e1724:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001e1728:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_001e172c:;
    {
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
L_001e1730:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e1734:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e1738:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001e173c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e1740:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e1744:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001e1748:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_001e174c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e1750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e19d4;
        }
    }
L_001e1754:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e1758:;
    {
        cpu->r[14] = 0x001e175cu; fn_00097dd4(cpu);
    }
L_001e175c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e19d4;
        }
    }
L_001e1764:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e1768:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e176c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e1770:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1774:;
    {
        cpu->r[14] = 0x001e177cu;
    }
L_001e1778:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e177cu)) return;
    }
L_001e177c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1780:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1784:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001e1788:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e178c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1790:;
    {
        cpu->r[14] = 0x001e1798u;
    }
L_001e1794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1798u)) return;
    }
L_001e1798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e179c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e17a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e17a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e17a8:;
    {
        cpu->r[14] = 0x001e17b0u;
    }
L_001e17ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e17b0u)) return;
    }
L_001e17b0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001e17b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e1a10;
        }
    }
L_001e17b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_001e17bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e17c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001e17c4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e17c8:;
    {
        wr8(cpu->r[13] + + 0xdu, cpu->r[1]);
    }
L_001e17cc:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e17d0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001e17d4:;
    {
        cpu->r[14] = 0x001e17d8u; fn_00097dd0(cpu);
    }
L_001e17d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e17dc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e17e0:;
    {
        cpu->r[14] = 0x001e17e4u; fn_001f3cd8(cpu);
    }
L_001e17e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e17e8:;
    {
        cpu->r[14] = 0x001e17ecu; fn_00097dc8(cpu);
    }
L_001e17ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e17f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e17f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e17f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e17fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e180c;
        }
    }
L_001e1800:;
    {
        cpu->r[14] = 0x001e1804u; fn_001de710(cpu);
    }
L_001e1804:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1808:;
    {
        cpu->r[14] = 0x001e180cu; fn_00097dc8(cpu);
    }
L_001e180c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
    }
L_001e1810:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e1814:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001e1818:;
    {
        cpu->r[14] = 0x001e181cu; fn_00097dd0(cpu);
    }
L_001e181c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e1820:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e1824:;
    {
        cpu->r[14] = 0x001e1828u; fn_001d9624(cpu);
    }
L_001e1828:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e182c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e1830:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1834:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1838:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1854;
        }
    }
L_001e183c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1840:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1844:;
    {
        cpu->r[14] = 0x001e184cu;
    }
L_001e1848:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e184cu)) return;
    }
L_001e184c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1850:;
    {
        cpu->r[14] = 0x001e1854u; fn_00097dc8(cpu);
    }
L_001e1854:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e1858:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_001e185c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e1860:;
    {
        goto L_001e1610;
    }
L_001e1864:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e186c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e1870:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1874:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e1878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e187c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1880:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1884:;
    {
        cpu->r[14] = 0x001e188cu;
    }
L_001e1888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e188cu)) return;
    }
L_001e188c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e16b4;
        }
    }
L_001e1894:;
    {
        cpu->r[14] = 0x001e1898u; fn_00097dd4(cpu);
    }
L_001e1898:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e189c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e18a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e18a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e18a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e18ac:;
    {
        cpu->r[14] = 0x001e18b4u;
    }
L_001e18b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e18b4u)) return;
    }
L_001e18b4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e18b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e18bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e18c0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e18c4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e18c8:;
    {
        cpu->r[14] = 0x001e18d0u;
    }
L_001e18cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e18d0u)) return;
    }
L_001e18d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e18d4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e18d8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001e18dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e18e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e18e4:;
    {
        cpu->r[14] = 0x001e18ecu;
    }
L_001e18e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e18ecu)) return;
    }
L_001e18ec:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001e18f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1a10;
        }
    }
L_001e18f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001e18f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e18fc:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001e1900:;
    {
        wr8(cpu->r[13] + + 0xdu, cpu->r[1]);
    }
L_001e1904:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001e1908:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001e190c:;
    {
        cpu->r[14] = 0x001e1910u; fn_00097dd0(cpu);
    }
L_001e1910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e1914:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e1918:;
    {
        cpu->r[14] = 0x001e191cu; fn_001f3cd8(cpu);
    }
L_001e191c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e1920:;
    {
        cpu->r[14] = 0x001e1924u; fn_00097dc8(cpu);
    }
L_001e1924:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e1928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e192c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1944;
        }
    }
L_001e1938:;
    {
        cpu->r[14] = 0x001e193cu; fn_001de710(cpu);
    }
L_001e193c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1940:;
    {
        cpu->r[14] = 0x001e1944u; fn_00097dc8(cpu);
    }
L_001e1944:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
    }
L_001e1948:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e194c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e1950:;
    {
        cpu->r[14] = 0x001e1958u;
    }
L_001e1954:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1958u)) return;
    }
L_001e1958:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e195c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e16b4;
        }
    }
L_001e1960:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1964:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1968:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e196c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1970:;
    {
        cpu->r[14] = 0x001e1978u;
    }
L_001e1974:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1978u)) return;
    }
L_001e1978:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e197c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[6];
        }
    }
L_001e1980:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
        }
    }
L_001e1984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1a24;
        }
    }
L_001e1988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001e198c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e1990:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_001e1994:;
    {
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
L_001e1998:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001e199c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e19a0:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_001e19a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e19a8:;
    {
        cpu->r[14] = 0x001e19b0u;
    }
L_001e19ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e19b0u)) return;
    }
L_001e19b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e19b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e19b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e19bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e19c0:;
    {
        cpu->r[14] = 0x001e19c8u;
    }
L_001e19c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e19c8u)) return;
    }
L_001e19c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e19cc:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e19d0:;
    {
        goto L_001e1610;
    }
L_001e19d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e19d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e19dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e19e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e19e4:;
    {
        cpu->r[14] = 0x001e19ecu;
    }
L_001e19e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e19ecu)) return;
    }
L_001e19ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e19f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e19f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e19f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e19fc:;
    {
        cpu->r[14] = 0x001e1a04u;
    }
L_001e1a00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1a04u)) return;
    }
L_001e1a04:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e1a08:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e1a0c:;
    {
        goto L_001e1610;
    }
L_001e1a10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e1a14:;
    {
        cpu->r[14] = 0x001e1a18u; fn_00097dc8(cpu);
    }
L_001e1a18:;
    {
        goto L_001e16b4;
    }
L_001e1a1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e1a20:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1a24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1a28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1a2c:;
    {
        cpu->r[14] = 0x001e1a34u;
    }
L_001e1a30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1a34u)) return;
    }
L_001e1a34:;
    {
        goto L_001e16b4;
    }
}

/* _ZN3vox17VoxEngineInternal12GetDebugInfoERNS_9DebugInfoE @ 001e1a38 (arm) */
void fn_001e1a38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1a38:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1a3c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e1a40:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e1a44:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e1a48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1a4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e1a50:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e1a54:;
    {
        cpu->r[14] = 0x001e1a58u; fn_001ebdc8(cpu);
    }
L_001e1a58:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001e1a5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000084u, 0, 0);
    }
L_001e1a60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e1a64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e1a68:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001e1a6c:;
    {
        cpu->r[14] = 0x001e1a70u; fn_001ebd9c(cpu);
    }
L_001e1a70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1a74:;
    {
        cpu->r[14] = 0x001e1a78u; fn_001ebdc8(cpu);
    }
L_001e1a78:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x58u;
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
        cpu->r[5] = wb_tmp;
    }
L_001e1a7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e1a80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e1a84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e1a88:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e1a8c:;
    {
        cpu->r[14] = 0x001e1a90u; fn_001de2b4(cpu);
    }
L_001e1a90:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e1a94:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e1a98:;
    {
        cpu->r[14] = 0x001e1a9cu; fn_001de2c4(cpu);
    }
L_001e1a9c:;
    {
        cpu->r[6] = rd32(cpu->r[13]);
    }
L_001e1aa0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e1aa4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e1aa8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e1aac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001e1ab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1af8;
        }
    }
L_001e1ab4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e1ab8:;
    {
        cpu->r[14] = 0x001e1abcu; fn_001dfdb8(cpu);
    }
L_001e1abc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e1ac0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1ac4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_001e1ac8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001e1acc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
        }
    }
L_001e1ad0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e1ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1ae0;
        }
    }
L_001e1ad8:;
    {
        goto L_001e1b10;
    }
L_001e1adc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e1ae0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e1ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1ae8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1adc;
        }
    }
L_001e1aec:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001e1af0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001e1af4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1ab4;
        }
    }
L_001e1af8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e1afc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1b00:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001e1b04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e1b08:;
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
L_001e1b0c:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e1b10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001e1b14:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e1b18:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001e1b1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1b38;
        }
    }
L_001e1b20:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001e1b24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e1b28:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e1b2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001e1b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1b20;
        }
    }
L_001e1b34:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e1b38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e1b3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_001e1b40:;
    {
        goto L_001e1aac;
    }
}

/* _ZN3vox17VoxEngineInternal10PrintDebugEv @ 001e1b44 (arm) */
void fn_001e1b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1b44:;
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
L_001e1b48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e1b4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e1b50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e1b54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1b58:;
    {
        cpu->r[14] = 0x001e1b5cu; fn_001ebcfc(cpu);
    }
L_001e1b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001e1b60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1b64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1b78;
        }
    }
L_001e1b68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1b6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1b70:;
    {
        cpu->r[14] = 0x001e1b78u;
    }
L_001e1b74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1b78u)) return;
    }
L_001e1b78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1b7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_001e1b80:;
    {
        cpu->r[14] = 0x001e1b84u; fn_001ebcf8(cpu);
    }
L_001e1b84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000084u, 0, 0);
    }
L_001e1b88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1b8c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001e1b90:;
    {
        cpu->r[14] = 0x001e1b94u; fn_001ebdc8(cpu);
    }
L_001e1b94:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1b98:;
    {
        cpu->r[14] = 0x001e1b9cu; fn_001ebdc8(cpu);
    }
L_001e1b9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e1ba0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e1ba4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_001e1ba8:;
    {
        cpu->r[14] = 0x001e1bacu; fn_001de2b4(cpu);
    }
L_001e1bac:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e1bb0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e1bb4:;
    {
        cpu->r[14] = 0x001e1bb8u; fn_001de2c4(cpu);
    }
L_001e1bb8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001e1bbc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e1bc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1c50;
        }
    }
L_001e1bc4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e1bc8:;
    {
        cpu->r[14] = 0x001e1bccu; fn_001e0208(cpu);
    }
L_001e1bcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1bd0:;
    {
        cpu->r[14] = 0x001e1bd4u; fn_001ebcfc(cpu);
    }
L_001e1bd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e1bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1bdc:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e1be0:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x40u;
        cpu->r[8] = rd32(cpu->r[10] + + 0x40u);
        cpu->r[10] = wb_tmp;
    }
L_001e1be4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001e1be8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1c10;
        }
    }
L_001e1bec:;
    {
        uint64_t v = rd64(cpu->r[8] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e1bf0:;
    {
        cpu->r[14] = 0x001e1bf4u; fn_001de1e0(cpu);
    }
L_001e1bf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1c00;
        }
    }
L_001e1bfc:;
    {
        cpu->r[14] = 0x001e1c00u; fn_001df698(cpu);
    }
L_001e1c00:;
    {
        cpu->r[8] = rd32(cpu->r[8]);
    }
L_001e1c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1c08:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001e1c0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1bec;
        }
    }
L_001e1c10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1c14:;
    {
        cpu->r[14] = 0x001e1c18u; fn_001ebcf8(cpu);
    }
L_001e1c18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e1c1c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e1c20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e1c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1c30;
        }
    }
L_001e1c28:;
    {
        goto L_001e1c68;
    }
L_001e1c2c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e1c30:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e1c34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1c38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1c2c;
        }
    }
L_001e1c3c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e1c40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e1c44:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001e1c48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e1c4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1bc4;
        }
    }
L_001e1c50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1c54:;
    {
        cpu->r[14] = 0x001e1c58u; fn_001ebd9c(cpu);
    }
L_001e1c58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1c5c:;
    {
        cpu->r[14] = 0x001e1c60u; fn_001ebd9c(cpu);
    }
L_001e1c60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e1c64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1c68u)) return;
    }
L_001e1c68:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e1c6c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e1c70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e1c74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1c90;
        }
    }
L_001e1c78:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e1c7c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e1c80:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e1c84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e1c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1c78;
        }
    }
L_001e1c8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e1c90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e1c94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e1c98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e1c9c:;
    {
        goto L_001e1c44;
    }
}

/* _ZN3vox17VoxEngineInternal16GetEmitterObjectERNS_13EmitterHandleE @ 001e1ca0 (arm) */
void fn_001e1ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1ca0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001e1ca4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e1ca8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e1cac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1cb0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e1cb4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001e1cb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e1cbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1cc0:;
    {
        cpu->r[14] = 0x001e1cc8u;
    }
L_001e1cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1cc8u)) return;
    }
L_001e1cc8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e1ccc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000144u, 0, 0);
    }
L_001e1cd0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001e1cd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e1cd8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e1cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1d38;
        }
    }
L_001e1ce0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e1ce4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1ce8:;
    {
        cpu->r[14] = 0x001e1cf0u;
    }
L_001e1cec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1cf0u)) return;
    }
L_001e1cf0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e1cf4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e1cf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e1cfc:;
    {
        cpu->r[14] = 0x001e1d00u; fn_001de1e0(cpu);
    }
L_001e1d00:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1d54;
        }
    }
L_001e1d08:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_001e1d0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1d10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e1d14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e1d18:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001e1d1c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e1d20:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e1d24:;
    {
        cpu->r[14] = 0x001e1d2cu;
    }
L_001e1d28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1d2cu)) return;
    }
L_001e1d2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1d30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e1d34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1d38u)) return;
    }
L_001e1d38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e1d3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1d40:;
    {
        cpu->r[14] = 0x001e1d48u;
    }
L_001e1d44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1d48u)) return;
    }
L_001e1d48:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1d4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1d2c;
        }
    }
L_001e1d50:;
    {
        goto L_001e1ce0;
    }
L_001e1d54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001e1d58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1d5c:;
    {
        cpu->r[14] = 0x001e1d60u; fn_001ebdc8(cpu);
    }
L_001e1d60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e1d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1d68:;
    {
        cpu->r[14] = 0x001e1d70u;
    }
L_001e1d6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1d70u)) return;
    }
L_001e1d70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e1d74:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e1d78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001e1d7c:;
    {
        cpu->r[14] = 0x001e1d80u; fn_001de1e0(cpu);
    }
L_001e1d80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e1d84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1d88:;
    {
        cpu->r[14] = 0x001e1d8cu; fn_001ebd9c(cpu);
    }
L_001e1d8c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e1d90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1d08;
        }
    }
L_001e1d94:;
    {
        goto L_001e1d2c;
    }
}

/* _ZN3vox17VoxEngineInternal11GetUserDataERNS_13EmitterHandleE @ 001e1d98 (arm) */
void fn_001e1d98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1d98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e1d9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1da0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1da4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1dac:;
    {
        cpu->r[14] = 0x001e1db0u; fn_001ebdc8(cpu);
    }
L_001e1db0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1db4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1db8:;
    {
        cpu->r[14] = 0x001e1dbcu; fn_001e1ca0(cpu);
    }
L_001e1dbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1dc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = (~0x00000000u);
        }
    }
L_001e1dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1dd0;
        }
    }
L_001e1dc8:;
    {
        cpu->r[14] = 0x001e1dccu; fn_001dfbb0(cpu);
    }
L_001e1dcc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1dd4:;
    {
        cpu->r[14] = 0x001e1dd8u; fn_001ebd9c(cpu);
    }
L_001e1dd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1ddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1de0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal11SetUserDataERNS_13EmitterHandleERNS_21EmitterHandleUserDataE @ 001e1de0 (arm) */
void fn_001e1de0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1de0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1de4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1de8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1dec:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1df0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1df4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1df8:;
    {
        cpu->r[14] = 0x001e1dfcu; fn_001ebdc8(cpu);
    }
L_001e1dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1e00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1e04:;
    {
        cpu->r[14] = 0x001e1e08u; fn_001e1ca0(cpu);
    }
L_001e1e08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1e0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1e18;
        }
    }
L_001e1e10:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1e14:;
    {
        cpu->r[14] = 0x001e1e18u; fn_001dfbd8(cpu);
    }
L_001e1e18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1e1c:;
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
L_001e1e20:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal24SetInteractiveMusicStateERNS_13EmitterHandleEPKc @ 001e1e24 (arm) */
void fn_001e1e24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1e24:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1e28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1e2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1e30:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1e34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1e38:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1e3c:;
    {
        cpu->r[14] = 0x001e1e40u; fn_001ebdc8(cpu);
    }
L_001e1e40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1e44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1e48:;
    {
        cpu->r[14] = 0x001e1e4cu; fn_001e1ca0(cpu);
    }
L_001e1e4c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1e80;
        }
    }
L_001e1e54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x118u);
    }
L_001e1e58:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001e1e5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e1e60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e1e64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001e1e68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1e6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1e70:;
    {
        cpu->r[14] = 0x001e1e78u;
    }
L_001e1e74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1e78u)) return;
    }
L_001e1e78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_001e1e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1e8c;
        }
    }
L_001e1e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1e84:;
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
L_001e1e88:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e1e8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x114u);
    }
L_001e1e90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1e80;
        }
    }
L_001e1e98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1e9c:;
    {
        cpu->r[14] = 0x001e1ea0u; fn_001d7658(cpu);
    }
L_001e1ea0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1ea4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1ea8:;
    {
        cpu->r[14] = 0x001e1eacu; fn_001e1200(cpu);
    }
L_001e1eac:;
    {
        goto L_001e1e80;
    }
}

/* _ZN3vox17VoxEngineInternal22SetDSPEmitterParameterERNS_13EmitterHandleEiPv @ 001e1eb0 (arm) */
void fn_001e1eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1eb0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1eb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1eb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1ebc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1ec0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1ec4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1ec8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e1ecc:;
    {
        cpu->r[14] = 0x001e1ed0u; fn_001ebdc8(cpu);
    }
L_001e1ed0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1ed4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1ed8:;
    {
        cpu->r[14] = 0x001e1edcu; fn_001e1ca0(cpu);
    }
L_001e1edc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1ef0;
        }
    }
L_001e1ee4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1ee8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e1eec:;
    {
        cpu->r[14] = 0x001e1ef0u; fn_001e1210(cpu);
    }
L_001e1ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1ef4:;
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
L_001e1ef8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Get3DEmitterParameteriERNS_13EmitterHandleEiRi @ 001e1efc (arm) */
void fn_001e1efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1efc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1f00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1f04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1f08:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1f0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1f10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1f14:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e1f18:;
    {
        cpu->r[14] = 0x001e1f1cu; fn_001ebdc8(cpu);
    }
L_001e1f1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1f20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1f24:;
    {
        cpu->r[14] = 0x001e1f28u; fn_001e1ca0(cpu);
    }
L_001e1f28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1f3c;
        }
    }
L_001e1f30:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1f34:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e1f38:;
    {
        cpu->r[14] = 0x001e1f3cu; fn_001df884(cpu);
    }
L_001e1f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1f40:;
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
L_001e1f44:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Get3DEmitterParameterfERNS_13EmitterHandleEiRf @ 001e1f48 (arm) */
void fn_001e1f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1f48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1f4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1f50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1f54:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e1f58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1f5c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1f60:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e1f64:;
    {
        cpu->r[14] = 0x001e1f68u; fn_001ebdc8(cpu);
    }
L_001e1f68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1f6c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1f70:;
    {
        cpu->r[14] = 0x001e1f74u; fn_001e1ca0(cpu);
    }
L_001e1f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1f88;
        }
    }
L_001e1f7c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1f80:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e1f84:;
    {
        cpu->r[14] = 0x001e1f88u; fn_001df7e0(cpu);
    }
L_001e1f88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1f8c:;
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
L_001e1f90:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Get3DEmitterParametersERNS_13EmitterHandleERNS_22Vox3DEmitterParametersE @ 001e1f94 (arm) */
void fn_001e1f94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1f94:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1f98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e1f9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1fa0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e1fa4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1fa8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e1fac:;
    {
        cpu->r[14] = 0x001e1fb0u; fn_001ebdc8(cpu);
    }
L_001e1fb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1fb4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1fb8:;
    {
        cpu->r[14] = 0x001e1fbcu; fn_001e1ca0(cpu);
    }
L_001e1fbc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2040;
        }
    }
L_001e1fc4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e1fc8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e1fcc:;
    {
        cpu->r[14] = 0x001e1fd0u; fn_001df884(cpu);
    }
L_001e1fd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1fd4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e1fd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001e1fdc:;
    {
        cpu->r[14] = 0x001e1fe0u; fn_001df7e0(cpu);
    }
L_001e1fe0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1fe4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001e1fe8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001e1fec:;
    {
        cpu->r[14] = 0x001e1ff0u; fn_001df7e0(cpu);
    }
L_001e1ff0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e1ff4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001e1ff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001e1ffc:;
    {
        cpu->r[14] = 0x001e2000u; fn_001df7e0(cpu);
    }
L_001e2000:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2004:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001e2008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001e200c:;
    {
        cpu->r[14] = 0x001e2010u; fn_001df7e0(cpu);
    }
L_001e2010:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2014:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001e2018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_001e201c:;
    {
        cpu->r[14] = 0x001e2020u; fn_001df7e0(cpu);
    }
L_001e2020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2024:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001e2028:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e202c:;
    {
        cpu->r[14] = 0x001e2030u; fn_001df7e0(cpu);
    }
L_001e2030:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2034:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001e2038:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001e203c:;
    {
        cpu->r[14] = 0x001e2040u; fn_001df7e0(cpu);
    }
L_001e2040:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e2044:;
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
L_001e2048:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Get3DEmitterDirectionERNS_13EmitterHandleERfS3_S3_ @ 001e204c (arm) */
void fn_001e204c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e204c:;
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
L_001e2050:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2054:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e2058:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e205c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e2060:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2064:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001e2068:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e206c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e2070:;
    {
        cpu->r[14] = 0x001e2074u; fn_001ebdc8(cpu);
    }
L_001e2074:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2078:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e207c:;
    {
        cpu->r[14] = 0x001e2080u; fn_001e1ca0(cpu);
    }
L_001e2080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e209c;
        }
    }
L_001e2088:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e208c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e2090:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001e2094:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001e2098:;
    {
        cpu->r[14] = 0x001e209cu; fn_001df744(cpu);
    }
L_001e209c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e20a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e20a4:;
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
L_001e20a8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal20Get3DEmitterVelocityERNS_13EmitterHandleERfS3_S3_ @ 001e20ac (arm) */
void fn_001e20ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e20ac:;
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
L_001e20b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e20b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e20b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e20bc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e20c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e20c4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001e20c8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e20cc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e20d0:;
    {
        cpu->r[14] = 0x001e20d4u; fn_001ebdc8(cpu);
    }
L_001e20d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e20d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e20dc:;
    {
        cpu->r[14] = 0x001e20e0u; fn_001e1ca0(cpu);
    }
L_001e20e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e20e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e20fc;
        }
    }
L_001e20e8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e20ec:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e20f0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001e20f4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001e20f8:;
    {
        cpu->r[14] = 0x001e20fcu; fn_001df744(cpu);
    }
L_001e20fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2100:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e2104:;
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
L_001e2108:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal20Get3DEmitterPositionERNS_13EmitterHandleERfS3_S3_ @ 001e210c (arm) */
void fn_001e210c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e210c:;
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
L_001e2110:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2114:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e2118:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e211c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e2120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2124:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001e2128:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e212c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e2130:;
    {
        cpu->r[14] = 0x001e2134u; fn_001ebdc8(cpu);
    }
L_001e2134:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2138:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e213c:;
    {
        cpu->r[14] = 0x001e2140u; fn_001e1ca0(cpu);
    }
L_001e2140:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e215c;
        }
    }
L_001e2148:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e214c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e2150:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001e2154:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001e2158:;
    {
        cpu->r[14] = 0x001e215cu; fn_001df744(cpu);
    }
L_001e215c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2160:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e2164:;
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
L_001e2168:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Set3DEmitterParameteriERNS_13EmitterHandleEii @ 001e216c (arm) */
void fn_001e216c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e216c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2170:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2174:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2178:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e217c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2180:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e2184:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e2188:;
    {
        cpu->r[14] = 0x001e218cu; fn_001ebdc8(cpu);
    }
L_001e218c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2190:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2194:;
    {
        cpu->r[14] = 0x001e2198u; fn_001e1ca0(cpu);
    }
L_001e2198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e219c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e21ac;
        }
    }
L_001e21a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e21a4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e21a8:;
    {
        cpu->r[14] = 0x001e21acu; fn_001dfa98(cpu);
    }
L_001e21ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e21b0:;
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
L_001e21b4:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Set3DEmitterParameterfERNS_13EmitterHandleEif @ 001e21b8 (arm) */
void fn_001e21b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e21b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e21bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e21c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e21c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e21c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e21cc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e21d0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e21d4:;
    {
        cpu->r[14] = 0x001e21d8u; fn_001ebdc8(cpu);
    }
L_001e21d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e21dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e21e0:;
    {
        cpu->r[14] = 0x001e21e4u; fn_001e1ca0(cpu);
    }
L_001e21e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e21e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e21f8;
        }
    }
L_001e21ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e21f0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e21f4:;
    {
        cpu->r[14] = 0x001e21f8u; fn_001df9d8(cpu);
    }
L_001e21f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e21fc:;
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
L_001e2200:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Set3DEmitterParametersERNS_13EmitterHandleERKNS_22Vox3DEmitterParametersE @ 001e2204 (arm) */
void fn_001e2204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2204:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2208:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e220c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2210:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e2214:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e2218:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e221c:;
    {
        cpu->r[14] = 0x001e2220u; fn_001ebdc8(cpu);
    }
L_001e2220:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2224:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e2228:;
    {
        cpu->r[14] = 0x001e222cu; fn_001e1ca0(cpu);
    }
L_001e222c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e22b0;
        }
    }
L_001e2234:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e2238:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001e223c:;
    {
        cpu->r[14] = 0x001e2240u; fn_001dfa98(cpu);
    }
L_001e2240:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2244:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e2248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e224c:;
    {
        cpu->r[14] = 0x001e2250u; fn_001df9d8(cpu);
    }
L_001e2250:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2254:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001e2258:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e225c:;
    {
        cpu->r[14] = 0x001e2260u; fn_001df9d8(cpu);
    }
L_001e2260:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2264:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001e2268:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e226c:;
    {
        cpu->r[14] = 0x001e2270u; fn_001df9d8(cpu);
    }
L_001e2270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2274:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001e2278:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e227c:;
    {
        cpu->r[14] = 0x001e2280u; fn_001df9d8(cpu);
    }
L_001e2280:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2284:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001e2288:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001e228c:;
    {
        cpu->r[14] = 0x001e2290u; fn_001df9d8(cpu);
    }
L_001e2290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2294:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001e2298:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e229c:;
    {
        cpu->r[14] = 0x001e22a0u; fn_001df9d8(cpu);
    }
L_001e22a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e22a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001e22a8:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001e22ac:;
    {
        cpu->r[14] = 0x001e22b0u; fn_001df9d8(cpu);
    }
L_001e22b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e22b4:;
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
L_001e22b8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Set3DEmitterDirectionERNS_13EmitterHandleEfff @ 001e22bc (arm) */
void fn_001e22bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e22bc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e22c0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e22c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e22c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e22cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e22d0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e22d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e22d8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001e22dc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e22e0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_001e22e4:;
    {
        cpu->r[14] = 0x001e22e8u; fn_001ebdc8(cpu);
    }
L_001e22e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e22ec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e22f0:;
    {
        cpu->r[14] = 0x001e22f4u; fn_001e1ca0(cpu);
    }
L_001e22f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e22f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2310;
        }
    }
L_001e22fc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e2300:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e2304:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001e2308:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e230c:;
    {
        cpu->r[14] = 0x001e2310u; fn_001df940(cpu);
    }
L_001e2310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2314:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e2318:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e231c:;
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
L_001e2320:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal20Set3DEmitterVelocityERNS_13EmitterHandleEfff @ 001e2324 (arm) */
void fn_001e2324(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2324:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2328:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e232c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2330:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e2334:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2338:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e233c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2340:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001e2344:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e2348:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_001e234c:;
    {
        cpu->r[14] = 0x001e2350u; fn_001ebdc8(cpu);
    }
L_001e2350:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2354:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2358:;
    {
        cpu->r[14] = 0x001e235cu; fn_001e1ca0(cpu);
    }
L_001e235c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2378;
        }
    }
L_001e2364:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e2368:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e236c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001e2370:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e2374:;
    {
        cpu->r[14] = 0x001e2378u; fn_001df940(cpu);
    }
L_001e2378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e237c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e2380:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e2384:;
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
L_001e2388:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal20Set3DEmitterPositionERNS_13EmitterHandleEfff @ 001e238c (arm) */
void fn_001e238c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e238c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2390:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e2394:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2398:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e239c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e23a0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e23a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e23a8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001e23ac:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e23b0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_001e23b4:;
    {
        cpu->r[14] = 0x001e23b8u; fn_001ebdc8(cpu);
    }
L_001e23b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e23bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e23c0:;
    {
        cpu->r[14] = 0x001e23c4u; fn_001e1ca0(cpu);
    }
L_001e23c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e23c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e23e0;
        }
    }
L_001e23cc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e23d0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e23d4:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001e23d8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e23dc:;
    {
        cpu->r[14] = 0x001e23e0u; fn_001df940(cpu);
    }
L_001e23e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e23e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e23e8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e23ec:;
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
L_001e23f0:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal8GetGroupERNS_13EmitterHandleE @ 001e23f4 (arm) */
void fn_001e23f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e23f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e23f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e23fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2400:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2404:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2408:;
    {
        cpu->r[14] = 0x001e240cu; fn_001ebdc8(cpu);
    }
L_001e240c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2410:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2414:;
    {
        cpu->r[14] = 0x001e2418u; fn_001e1ca0(cpu);
    }
L_001e2418:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e241c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2428;
        }
    }
L_001e2420:;
    {
        cpu->r[14] = 0x001e2424u; fn_001dff78(cpu);
    }
L_001e2424:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e242c:;
    {
        cpu->r[14] = 0x001e2430u; fn_001ebd9c(cpu);
    }
L_001e2430:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2438u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal8SetGroupERNS_13EmitterHandleEi @ 001e2438 (arm) */
void fn_001e2438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2438:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e243c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2440:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_001e2444:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2448:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e244c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2450:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_001e2454:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001e2458:;
    {
        cpu->r[14] = 0x001e245cu; fn_001ebdc8(cpu);
    }
L_001e245c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2460:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2464:;
    {
        cpu->r[14] = 0x001e2468u; fn_001e1ca0(cpu);
    }
L_001e2468:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e246c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2478;
        }
    }
L_001e2470:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e2474:;
    {
        cpu->r[14] = 0x001e2478u; fn_001dff50(cpu);
    }
L_001e2478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e247c:;
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
L_001e2480:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal13SetPlayCursorERNS_13EmitterHandleEf @ 001e2484 (arm) */
void fn_001e2484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2484:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e248c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2490:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2498:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e249c:;
    {
        cpu->r[14] = 0x001e24a0u; fn_001ebdc8(cpu);
    }
L_001e24a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e24a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e24a8:;
    {
        cpu->r[14] = 0x001e24acu; fn_001e1ca0(cpu);
    }
L_001e24ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e24b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e24bc;
        }
    }
L_001e24b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e24b8:;
    {
        cpu->r[14] = 0x001e24bcu; fn_001dfc04(cpu);
    }
L_001e24bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e24c0:;
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
L_001e24c4:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal13GetPlayCursorERNS_13EmitterHandleE @ 001e24c8 (arm) */
void fn_001e24c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e24c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e24cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e24d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e24d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e24d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e24dc:;
    {
        cpu->r[14] = 0x001e24e0u; fn_001ebdc8(cpu);
    }
L_001e24e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e24e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e24e8:;
    {
        cpu->r[14] = 0x001e24ecu; fn_001e1ca0(cpu);
    }
L_001e24ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e24f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001e24f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2500;
        }
    }
L_001e24f8:;
    {
        cpu->r[14] = 0x001e24fcu; fn_001dfd14(cpu);
    }
L_001e24fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2504:;
    {
        cpu->r[14] = 0x001e2508u; fn_001ebd9c(cpu);
    }
L_001e2508:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e250c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2510u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal9GetStatusERNS_13EmitterHandleE @ 001e2510 (arm) */
void fn_001e2510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2510:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2514:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2518:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e251c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2520:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2524:;
    {
        cpu->r[14] = 0x001e2528u; fn_001ebdc8(cpu);
    }
L_001e2528:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e252c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2530:;
    {
        cpu->r[14] = 0x001e2534u; fn_001e1ca0(cpu);
    }
L_001e2534:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2544;
        }
    }
L_001e253c:;
    {
        cpu->r[14] = 0x001e2540u; fn_001df3e0(cpu);
    }
L_001e2540:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2548:;
    {
        cpu->r[14] = 0x001e254cu; fn_001ebd9c(cpu);
    }
L_001e254c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2554u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal6IsDoneERNS_13EmitterHandleE @ 001e2554 (arm) */
void fn_001e2554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2554:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2558:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e255c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2560:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2564:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2568:;
    {
        cpu->r[14] = 0x001e256cu; fn_001ebdc8(cpu);
    }
L_001e256c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2570:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2574:;
    {
        cpu->r[14] = 0x001e2578u; fn_001e1ca0(cpu);
    }
L_001e2578:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e257c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001e2580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e258c;
        }
    }
L_001e2584:;
    {
        cpu->r[14] = 0x001e2588u; fn_001dfd88(cpu);
    }
L_001e2588:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e258c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2590:;
    {
        cpu->r[14] = 0x001e2594u; fn_001ebd9c(cpu);
    }
L_001e2594:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2598:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e259cu)) return;
    }
}

/* _ZN3vox17VoxEngineInternal9IsPlayingERNS_13EmitterHandleE @ 001e259c (arm) */
void fn_001e259c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e259c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e25a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e25a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e25a8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e25ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e25b0:;
    {
        cpu->r[14] = 0x001e25b4u; fn_001ebdc8(cpu);
    }
L_001e25b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e25b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e25bc:;
    {
        cpu->r[14] = 0x001e25c0u; fn_001e1ca0(cpu);
    }
L_001e25c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e25c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e25d0;
        }
    }
L_001e25c8:;
    {
        cpu->r[14] = 0x001e25ccu; fn_001dfdb8(cpu);
    }
L_001e25cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e25d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e25d4:;
    {
        cpu->r[14] = 0x001e25d8u; fn_001ebd9c(cpu);
    }
L_001e25d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e25dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e25e0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7IsAliveERNS_13EmitterHandleE @ 001e25e0 (arm) */
void fn_001e25e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e25e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e25e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e25e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e25ec:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e25f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e25f4:;
    {
        cpu->r[14] = 0x001e25f8u; fn_001ebdc8(cpu);
    }
L_001e25f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e25fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2600:;
    {
        cpu->r[14] = 0x001e2604u; fn_001e1ca0(cpu);
    }
L_001e2604:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2614;
        }
    }
L_001e260c:;
    {
        cpu->r[14] = 0x001e2610u; fn_001e0010(cpu);
    }
L_001e2610:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2614:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2618:;
    {
        cpu->r[14] = 0x001e261cu; fn_001ebd9c(cpu);
    }
L_001e261c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2620:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2624u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7IsValidERNS_13EmitterHandleE @ 001e2624 (arm) */
void fn_001e2624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2624:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2628:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e262c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2630:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2638:;
    {
        cpu->r[14] = 0x001e263cu; fn_001ebdc8(cpu);
    }
L_001e263c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2640:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2644:;
    {
        cpu->r[14] = 0x001e2648u; fn_001e1ca0(cpu);
    }
L_001e2648:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e264c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2650:;
    {
        cpu->r[14] = 0x001e2654u; fn_001ebd9c(cpu);
    }
L_001e2654:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e2658:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001e265c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2660u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7IsReadyERNS_13EmitterHandleE @ 001e2660 (arm) */
void fn_001e2660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2660:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2664:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2668:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e266c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2670:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2674:;
    {
        cpu->r[14] = 0x001e2678u; fn_001ebdc8(cpu);
    }
L_001e2678:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e267c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2680:;
    {
        cpu->r[14] = 0x001e2684u; fn_001e1ca0(cpu);
    }
L_001e2684:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2694;
        }
    }
L_001e268c:;
    {
        cpu->r[14] = 0x001e2690u; fn_001de5d8(cpu);
    }
L_001e2690:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2698:;
    {
        cpu->r[14] = 0x001e269cu; fn_001ebd9c(cpu);
    }
L_001e269c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e26a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e26a4u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal8GetPitchERNS_13EmitterHandleE @ 001e26a4 (arm) */
void fn_001e26a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e26a4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e26a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e26ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e26b0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e26b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e26b8:;
    {
        cpu->r[14] = 0x001e26bcu; fn_001ebdc8(cpu);
    }
L_001e26bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e26c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e26c4:;
    {
        cpu->r[14] = 0x001e26c8u; fn_001e1ca0(cpu);
    }
L_001e26c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e26cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001e26d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e26dc;
        }
    }
L_001e26d4:;
    {
        cpu->r[14] = 0x001e26d8u; fn_001dfec4(cpu);
    }
L_001e26d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e26dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e26e0:;
    {
        cpu->r[14] = 0x001e26e4u; fn_001ebd9c(cpu);
    }
L_001e26e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e26e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e26ecu)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7SetLoopERNS_13EmitterHandleEb @ 001e26ec (arm) */
void fn_001e26ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e26ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e26f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e26f4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e26f8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e26fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2700:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e2704:;
    {
        cpu->r[14] = 0x001e2708u; fn_001ebdc8(cpu);
    }
L_001e2708:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e270c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2710:;
    {
        cpu->r[14] = 0x001e2714u; fn_001e1ca0(cpu);
    }
L_001e2714:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2724;
        }
    }
L_001e271c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e2720:;
    {
        cpu->r[14] = 0x001e2724u; fn_001dfe24(cpu);
    }
L_001e2724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2728:;
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
L_001e272c:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal7GetGainERNS_13EmitterHandleE @ 001e2730 (arm) */
void fn_001e2730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2730:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2734:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2738:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e273c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2744:;
    {
        cpu->r[14] = 0x001e2748u; fn_001ebdc8(cpu);
    }
L_001e2748:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e274c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2750:;
    {
        cpu->r[14] = 0x001e2754u; fn_001e1ca0(cpu);
    }
L_001e2754:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2758:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001e275c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2768;
        }
    }
L_001e2760:;
    {
        cpu->r[14] = 0x001e2764u; fn_001dfeec(cpu);
    }
L_001e2764:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e276c:;
    {
        cpu->r[14] = 0x001e2770u; fn_001ebd9c(cpu);
    }
L_001e2770:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2774:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2778u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal20SetAutoKillAfterDoneERNS_13EmitterHandleEb @ 001e2778 (arm) */
void fn_001e2778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2778:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e277c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2780:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2784:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2788:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e278c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e2790:;
    {
        cpu->r[14] = 0x001e2794u; fn_001ebdc8(cpu);
    }
L_001e2794:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2798:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e279c:;
    {
        cpu->r[14] = 0x001e27a0u; fn_001e1ca0(cpu);
    }
L_001e27a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e27a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e27b0;
        }
    }
L_001e27a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e27ac:;
    {
        cpu->r[14] = 0x001e27b0u; fn_001e006c(cpu);
    }
L_001e27b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e27b4:;
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
L_001e27b8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal43UnregisterForEmitterStateChangeNotificationERNS_13EmitterHandleE @ 001e27bc (arm) */
void fn_001e27bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e27bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e27c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e27c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e27c8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e27cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e27d0:;
    {
        cpu->r[14] = 0x001e27d4u; fn_001ebdc8(cpu);
    }
L_001e27d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e27d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e27dc:;
    {
        cpu->r[14] = 0x001e27e0u; fn_001e1ca0(cpu);
    }
L_001e27e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e27e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e27ec;
        }
    }
L_001e27e8:;
    {
        cpu->r[14] = 0x001e27ecu; fn_001df538(cpu);
    }
L_001e27ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e27f0:;
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
L_001e27f4:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal41RegisterForEmitterStateChangeNotificationERNS_13EmitterHandleEPFvS2_PvNS_18EmitterExternStateEES3_ @ 001e27f8 (arm) */
void fn_001e27f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e27f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e27fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2800:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2804:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e280c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e2810:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e2814:;
    {
        cpu->r[14] = 0x001e2818u; fn_001ebdc8(cpu);
    }
L_001e2818:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e281c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2820:;
    {
        cpu->r[14] = 0x001e2824u; fn_001e1ca0(cpu);
    }
L_001e2824:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2838;
        }
    }
L_001e282c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e2830:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e2834:;
    {
        cpu->r[14] = 0x001e2838u; fn_001df564(cpu);
    }
L_001e2838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e283c:;
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
L_001e2840:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal29IncreaseEmitterObjectRefCountERNS_13EmitterHandleE @ 001e2844 (arm) */
void fn_001e2844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2844:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2848:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e284c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2850:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2854:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2858:;
    {
        cpu->r[14] = 0x001e285cu; fn_001ebdc8(cpu);
    }
L_001e285c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2860:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2864:;
    {
        cpu->r[14] = 0x001e2868u; fn_001e1ca0(cpu);
    }
L_001e2868:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e286c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e287c;
        }
    }
L_001e2870:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e2874:;
    {
        cpu->r[14] = 0x001e287cu;
    }
L_001e2878:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e287cu)) return;
    }
L_001e287c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2880:;
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
L_001e2884:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox13EmitterHandleC1ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj @ 001e2888 (arm) */
void fn_001e2888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2888:;
    {
        cpu->r[12] = rd32(0x001e2890u + + 0x84u);
    }
L_001e288c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2890:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2894:;
    {
        cpu->r[0] = rd32(0x001e289cu + + 0x7cu);
    }
L_001e2898:;
    {
        cpu->r[12] = add_flags(cpu, 0x001e28a0u, cpu->r[12], 0, 0);
    }
L_001e289c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e28a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e28a4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001e28a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e28ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e28b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e28b4:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e28b8:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e28bc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e28c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e28c4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e28c8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e28cc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001e28d0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e28d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e28fc;
        }
    }
L_001e28d8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001e28dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e28e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e28fc;
        }
    }
L_001e28e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e28e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2904;
        }
    }
L_001e28ec:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e28f0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e28f4:;
    {
        cpu->r[14] = 0x001e28fcu;
    }
L_001e28f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e28fcu)) return;
    }
L_001e28fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2900:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2904u)) return;
    }
L_001e2904:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2908:;
    {
        cpu->r[14] = 0x001e290cu; fn_001e2844(cpu);
    }
L_001e290c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2910:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2914u)) return;
    }
}

/* _ZN3vox13EmitterHandleC2ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj @ 001e291c (arm) */
void fn_001e291c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e291c:;
    {
        cpu->r[12] = rd32(0x001e2924u + + 0x84u);
    }
L_001e2920:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2928:;
    {
        cpu->r[0] = rd32(0x001e2930u + + 0x7cu);
    }
L_001e292c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001e2934u, cpu->r[12], 0, 0);
    }
L_001e2930:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e2934:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e2938:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001e293c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e2940:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e2944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e2948:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e294c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e2950:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e2954:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e2958:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e295c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e2960:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001e2964:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e2968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2990;
        }
    }
L_001e296c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001e2970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2990;
        }
    }
L_001e2978:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e297c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2998;
        }
    }
L_001e2980:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e2984:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e2988:;
    {
        cpu->r[14] = 0x001e2990u;
    }
L_001e298c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2990u)) return;
    }
L_001e2990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2994:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2998u)) return;
    }
L_001e2998:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e299c:;
    {
        cpu->r[14] = 0x001e29a0u; fn_001e2844(cpu);
    }
L_001e29a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e29a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e29a8u)) return;
    }
}

/* _ZN3vox13EmitterHandleC1ERKS0_ @ 001e29b0 (arm) */
void fn_001e29b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e29b0:;
    {
        cpu->r[3] = rd32(0x001e29b8u + + 0x6cu);
    }
L_001e29b4:;
    {
        cpu->r[2] = rd32(0x001e29bcu + + 0x6cu);
    }
L_001e29b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e29bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e29c4u, cpu->r[3], 0, 0);
    }
L_001e29c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e29c4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001e29c8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_001e29cc:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e29d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e29d4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001e29d8:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e29dc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x18u);
    }
L_001e29e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e29e4:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e29e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e29ec:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e29f0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001e29f4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e29f8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001e29fc:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e2a00:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001e2a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2a1c;
        }
    }
L_001e2a08:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001e2a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2a1c;
        }
    }
L_001e2a14:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2a18:;
    {
        cpu->r[14] = 0x001e2a1cu; fn_001e2844(cpu);
    }
L_001e2a1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2a20:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2a24u)) return;
    }
}

/* _ZN3vox13EmitterHandleC2ERKS0_ @ 001e2a2c (arm) */
void fn_001e2a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2a2c:;
    {
        cpu->r[3] = rd32(0x001e2a34u + + 0x6cu);
    }
L_001e2a30:;
    {
        cpu->r[2] = rd32(0x001e2a38u + + 0x6cu);
    }
L_001e2a34:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2a38:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e2a40u, cpu->r[3], 0, 0);
    }
L_001e2a3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2a40:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001e2a44:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_001e2a48:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e2a4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2a50:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001e2a54:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e2a58:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x18u);
    }
L_001e2a5c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e2a60:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e2a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e2a68:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e2a6c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001e2a70:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e2a74:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001e2a78:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e2a7c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001e2a80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2a98;
        }
    }
L_001e2a84:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001e2a88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2a98;
        }
    }
L_001e2a90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2a94:;
    {
        cpu->r[14] = 0x001e2a98u; fn_001e2844(cpu);
    }
L_001e2a98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2a9c:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2aa0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal29DecreaseEmitterObjectRefCountERNS_13EmitterHandleE @ 001e2aa8 (arm) */
void fn_001e2aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2aa8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2aac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2ab0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2ab4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2ab8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2abc:;
    {
        cpu->r[14] = 0x001e2ac0u; fn_001ebdc8(cpu);
    }
L_001e2ac0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2ac4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2ac8:;
    {
        cpu->r[14] = 0x001e2accu; fn_001e1ca0(cpu);
    }
L_001e2acc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2ad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2ae0;
        }
    }
L_001e2ad4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e2ad8:;
    {
        cpu->r[14] = 0x001e2ae0u;
    }
L_001e2adc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2ae0u)) return;
    }
L_001e2ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2ae4:;
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
L_001e2ae8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox13EmitterHandleaSERKS0_ @ 001e2aec (arm) */
void fn_001e2aec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2aec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e2af0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2af4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2af8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e2afc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2b6c;
        }
    }
L_001e2b00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e2b04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e2b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2b20;
        }
    }
L_001e2b0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001e2b10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2b20;
        }
    }
L_001e2b18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2b1c:;
    {
        cpu->r[14] = 0x001e2b20u; fn_001e2aa8(cpu);
    }
L_001e2b20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001e2b24:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001e2b28:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x8u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e2b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e2b30:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e2b34:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001e2b38:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e2b3c:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e2b40:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e2b44:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001e2b48:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e2b4c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e2b50:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001e2b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2b6c;
        }
    }
L_001e2b58:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001e2b5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2b6c;
        }
    }
L_001e2b64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2b68:;
    {
        cpu->r[14] = 0x001e2b6cu; fn_001e2844(cpu);
    }
L_001e2b6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2b70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2b74u)) return;
    }
}

/* _ZN3vox13EmitterHandleD1Ev @ 001e2b74 (arm) */
void fn_001e2b74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2b74:;
    {
        cpu->r[3] = rd32(0x001e2b7cu + + 0x40u);
    }
L_001e2b78:;
    {
        cpu->r[2] = rd32(0x001e2b80u + + 0x40u);
    }
L_001e2b7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e2b84u, cpu->r[3], 0, 0);
    }
L_001e2b80:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e2b84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e2b88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e2b8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e2b90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2b94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e2b98:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001e2b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2bb4;
        }
    }
L_001e2ba0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001e2ba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2ba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2bb4;
        }
    }
L_001e2bac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2bb0:;
    {
        cpu->r[14] = 0x001e2bb4u; fn_001e2aa8(cpu);
    }
L_001e2bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2bb8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2bbcu)) return;
    }
}

/* _ZN3vox13EmitterHandleD0Ev @ 001e2bc4 (arm) */
void fn_001e2bc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2bc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e2bc8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2bcc:;
    {
        cpu->r[14] = 0x001e2bd0u; fn_001e2b74(cpu);
    }
L_001e2bd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2bd4:;
    {
        cpu->r[14] = 0x001e2bd8u; fn_0018ba20(cpu);
    }
L_001e2bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2bdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2be0u)) return;
    }
}

/* _ZN3vox13EmitterHandleD2Ev @ 001e2be0 (arm) */
void fn_001e2be0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2be0:;
    {
        cpu->r[3] = rd32(0x001e2be8u + + 0x40u);
    }
L_001e2be4:;
    {
        cpu->r[2] = rd32(0x001e2becu + + 0x40u);
    }
L_001e2be8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e2bf0u, cpu->r[3], 0, 0);
    }
L_001e2bec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e2bf0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e2bf4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e2bf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e2bfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e2c00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e2c04:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001e2c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2c20;
        }
    }
L_001e2c0c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001e2c10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2c20;
        }
    }
L_001e2c18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2c1c:;
    {
        cpu->r[14] = 0x001e2c20u; fn_001e2aa8(cpu);
    }
L_001e2c20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2c24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2c28u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal14GetAllEmittersEPNS_13EmitterHandleEi @ 001e2c30 (arm) */
void fn_001e2c30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2c30:;
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
L_001e2c34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_001e2c38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e2c3c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e2c40:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001e2c44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001e2c48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e2c4c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e2c50:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e2c54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000058u, 0, 0);
    }
L_001e2c58:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001e2c5c:;
    {
        cpu->r[14] = 0x001e2c60u; fn_001ebdc8(cpu);
    }
L_001e2c60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e2c64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e2c68:;
    {
        cpu->r[14] = 0x001e2c6cu; fn_001ebdc8(cpu);
    }
L_001e2c6c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2c70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001e2c74:;
    {
        cpu->r[11] = rd32(0x001e2c7cu + + 0x20cu);
    }
L_001e2c78:;
    {
        cpu->r[14] = 0x001e2c7cu; fn_001de2b4(cpu);
    }
L_001e2c7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e2c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_001e2c84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e2c88:;
    {
        cpu->r[14] = 0x001e2c8cu; fn_001de2c4(cpu);
    }
L_001e2c8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e2c90:;
    {
        cpu->r[10] = rd32(0x001e2c98u + + 0x1f4u);
    }
L_001e2c94:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e2c98:;
    {
        cpu->r[10] = add_flags(cpu, 0x001e2ca0u, cpu->r[10], 0, 0);
    }
L_001e2c9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e2ca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e2ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2cb0;
        }
    }
L_001e2ca8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e2cac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e2d28;
        }
    }
L_001e2cb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000068u, 0, 0);
    }
L_001e2cb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e2cb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e2cbc:;
    {
        cpu->r[11] = rd32(0x001e2cc4u + + 0x1c4u);
    }
L_001e2cc0:;
    {
        cpu->r[14] = 0x001e2cc4u; fn_001de2b4(cpu);
    }
L_001e2cc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e2cc8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e2ccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e2cd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001e2cd4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e2cd8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001e2cdc:;
    {
        cpu->r[14] = 0x001e2ce0u; fn_001de2c4(cpu);
    }
L_001e2ce0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e2ce4:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001e2ce8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e2cec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001e2cf0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e2cf4:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_001e2cf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e2cfc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e2d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2d0c;
        }
    }
L_001e2d04:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e2d08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e2da4;
        }
    }
L_001e2d0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e2d10:;
    {
        cpu->r[14] = 0x001e2d14u; fn_001ebd9c(cpu);
    }
L_001e2d14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e2d18:;
    {
        cpu->r[14] = 0x001e2d1cu; fn_001ebd9c(cpu);
    }
L_001e2d1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2d20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_001e2d24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2d28u)) return;
    }
L_001e2d28:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e2d2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e2d30:;
    {
        cpu->r[9] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_001e2d34:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e2d38:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e2d3c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e2d40:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e2d44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e2d48:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e2d4c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e2d50:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e2d54:;
    {
        cpu->r[14] = 0x001e2d58u; fn_001e2888(cpu);
    }
L_001e2d58:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e2d5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2d60:;
    {
        cpu->r[14] = 0x001e2d64u; fn_001e2aec(cpu);
    }
L_001e2d64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e2d68:;
    {
        cpu->r[14] = 0x001e2d6cu; fn_001e2b74(cpu);
    }
L_001e2d6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e2d70:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e2d74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e2d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2d84;
        }
    }
L_001e2d7c:;
    {
        goto L_001e2e54;
    }
L_001e2d80:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e2d84:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e2d88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e2d8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2d80;
        }
    }
L_001e2d90:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e2d94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e2d98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e2d9c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001e2da0:;
    {
        goto L_001e2c9c;
    }
L_001e2da4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e2da8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e2dac:;
    {
        cpu->r[10] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001e2db0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e2db4:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e2db8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e2dbc:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001e2dc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e2dc4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e2dc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e2dcc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e2dd0:;
    {
        cpu->r[14] = 0x001e2dd4u; fn_001e2888(cpu);
    }
L_001e2dd4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e2dd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2ddc:;
    {
        cpu->r[14] = 0x001e2de0u; fn_001e2aec(cpu);
    }
L_001e2de0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e2de4:;
    {
        cpu->r[14] = 0x001e2de8u; fn_001e2b74(cpu);
    }
L_001e2de8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e2dec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e2df0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e2df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2e00;
        }
    }
L_001e2df8:;
    {
        goto L_001e2e20;
    }
L_001e2dfc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e2e00:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e2e04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e2e08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2dfc;
        }
    }
L_001e2e0c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e2e10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e2e14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e2e18:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001e2e1c:;
    {
        goto L_001e2cf8;
    }
L_001e2e20:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e2e24:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e2e28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e2e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2e48;
        }
    }
L_001e2e30:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e2e34:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e2e38:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e2e3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e2e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2e30;
        }
    }
L_001e2e44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e2e48:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e2e4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e2e50:;
    {
        goto L_001e2e10;
    }
L_001e2e54:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e2e58:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e2e5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e2e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2e7c;
        }
    }
L_001e2e64:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e2e68:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e2e6c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e2e70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e2e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2e64;
        }
    }
L_001e2e78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e2e7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e2e80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e2e84:;
    {
        goto L_001e2d94;
    }
}

/* _ZN3vox17VoxEngineInternal13GetDataObjectERNS_10DataHandleE @ 001e2e90 (arm) */
void fn_001e2e90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2e90:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001e2e94:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e2e98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e2e9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2ea0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e2ea4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001e2ea8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e2eac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2eb0:;
    {
        cpu->r[14] = 0x001e2eb8u;
    }
L_001e2eb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2eb8u)) return;
    }
L_001e2eb8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e2ebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000144u, 0, 0);
    }
L_001e2ec0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001e2ec4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e2ec8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e2ecc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2f28;
        }
    }
L_001e2ed0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e2ed4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2ed8:;
    {
        cpu->r[14] = 0x001e2ee0u;
    }
L_001e2edc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2ee0u)) return;
    }
L_001e2ee0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e2ee4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e2ee8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e2eec:;
    {
        cpu->r[14] = 0x001e2ef0u; fn_001de1e0(cpu);
    }
L_001e2ef0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2ef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2f44;
        }
    }
L_001e2ef8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_001e2efc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2f00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e2f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e2f08:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001e2f0c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e2f10:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e2f14:;
    {
        cpu->r[14] = 0x001e2f1cu;
    }
L_001e2f18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2f1cu)) return;
    }
L_001e2f1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e2f20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e2f24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2f28u)) return;
    }
L_001e2f28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e2f2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2f30:;
    {
        cpu->r[14] = 0x001e2f38u;
    }
L_001e2f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2f38u)) return;
    }
L_001e2f38:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2f1c;
        }
    }
L_001e2f40:;
    {
        goto L_001e2ed0;
    }
L_001e2f44:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001e2f48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e2f4c:;
    {
        cpu->r[14] = 0x001e2f50u; fn_001ebdc8(cpu);
    }
L_001e2f50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e2f54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2f58:;
    {
        cpu->r[14] = 0x001e2f60u;
    }
L_001e2f5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2f60u)) return;
    }
L_001e2f60:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e2f64:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e2f68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e2f6c:;
    {
        cpu->r[14] = 0x001e2f70u; fn_001de1e0(cpu);
    }
L_001e2f70:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e2f74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e2f78:;
    {
        cpu->r[14] = 0x001e2f7cu; fn_001ebd9c(cpu);
    }
L_001e2f7c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e2f80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e2ef8;
        }
    }
L_001e2f84:;
    {
        goto L_001e2f1c;
    }
}

/* _ZN3vox17VoxEngineInternal11GetUserDataERNS_10DataHandleE @ 001e2f88 (arm) */
void fn_001e2f88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2f88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e2f8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e2f90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2f94:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2f98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2f9c:;
    {
        cpu->r[14] = 0x001e2fa0u; fn_001ebdc8(cpu);
    }
L_001e2fa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2fa4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2fa8:;
    {
        cpu->r[14] = 0x001e2facu; fn_001e2e90(cpu);
    }
L_001e2fac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2fb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = (~0x00000000u);
        }
    }
L_001e2fb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e2fc0;
        }
    }
L_001e2fb8:;
    {
        cpu->r[14] = 0x001e2fbcu; fn_001e0094(cpu);
    }
L_001e2fbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2fc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2fc4:;
    {
        cpu->r[14] = 0x001e2fc8u; fn_001ebd9c(cpu);
    }
L_001e2fc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2fcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e2fd0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal11SetUserDataERNS_10DataHandleERNS_18DataHandleUserDataE @ 001e2fd0 (arm) */
void fn_001e2fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e2fd0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e2fd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e2fd8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e2fdc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e2fe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e2fe4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e2fe8:;
    {
        cpu->r[14] = 0x001e2fecu; fn_001ebdc8(cpu);
    }
L_001e2fec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e2ff0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e2ff4:;
    {
        cpu->r[14] = 0x001e2ff8u; fn_001e2e90(cpu);
    }
L_001e2ff8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e2ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3008;
        }
    }
L_001e3000:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e3004:;
    {
        cpu->r[14] = 0x001e3008u; fn_001e00bc(cpu);
    }
L_001e3008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e300c:;
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
L_001e3010:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal6GetUidERNS_10DataHandleE @ 001e3014 (arm) */
void fn_001e3014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3014:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3018:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e301c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3020:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3024:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3028:;
    {
        cpu->r[14] = 0x001e302cu; fn_001ebdc8(cpu);
    }
L_001e302c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3030:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3034:;
    {
        cpu->r[14] = 0x001e3038u; fn_001e2e90(cpu);
    }
L_001e3038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e303c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = (~0x00000000u);
        }
    }
L_001e3040:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[0] + + 0x24u);
        }
    }
L_001e3044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3048:;
    {
        cpu->r[14] = 0x001e304cu; fn_001ebd9c(cpu);
    }
L_001e304c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3054u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal6SetUidERNS_10DataHandleEi @ 001e3054 (arm) */
void fn_001e3054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3054:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e3058:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e305c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3060:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3068:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e306c:;
    {
        cpu->r[14] = 0x001e3070u; fn_001ebdc8(cpu);
    }
L_001e3070:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3074:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3078:;
    {
        cpu->r[14] = 0x001e307cu; fn_001e2e90(cpu);
    }
L_001e307c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3080:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x24u, cpu->r[7]);
        }
    }
L_001e3084:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3088:;
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
L_001e308c:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal17SetPriorityBankIdERNS_10DataHandleEi @ 001e3090 (arm) */
void fn_001e3090(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3090:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e3094:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e3098:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e309c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e30a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e30a4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e30a8:;
    {
        cpu->r[14] = 0x001e30acu; fn_001ebdc8(cpu);
    }
L_001e30ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e30b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e30b4:;
    {
        cpu->r[14] = 0x001e30b8u; fn_001e2e90(cpu);
    }
L_001e30b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e30bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x20u, cpu->r[7]);
        }
    }
L_001e30c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e30c4:;
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
L_001e30c8:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal11GetDurationERNS_10DataHandleE @ 001e30cc (arm) */
void fn_001e30cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e30cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e30d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e30d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e30d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e30dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e30e0:;
    {
        cpu->r[14] = 0x001e30e4u; fn_001ebdc8(cpu);
    }
L_001e30e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e30e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e30ec:;
    {
        cpu->r[14] = 0x001e30f0u; fn_001e2e90(cpu);
    }
L_001e30f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e30f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001e30f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3104;
        }
    }
L_001e30fc:;
    {
        cpu->r[14] = 0x001e3100u; fn_001e0118(cpu);
    }
L_001e3100:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3104:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3108:;
    {
        cpu->r[14] = 0x001e310cu; fn_001ebd9c(cpu);
    }
L_001e310c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3110:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3114u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7IsValidERNS_10DataHandleE @ 001e3114 (arm) */
void fn_001e3114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3114:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e311c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3120:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3124:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3128:;
    {
        cpu->r[14] = 0x001e312cu; fn_001ebdc8(cpu);
    }
L_001e312c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3130:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3134:;
    {
        cpu->r[14] = 0x001e3138u; fn_001e2e90(cpu);
    }
L_001e3138:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e313c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3140:;
    {
        cpu->r[14] = 0x001e3144u; fn_001ebd9c(cpu);
    }
L_001e3144:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e3148:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001e314c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3150u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7IsReadyERNS_10DataHandleE @ 001e3150 (arm) */
void fn_001e3150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3150:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3154:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e3158:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e315c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3164:;
    {
        cpu->r[14] = 0x001e3168u; fn_001ebdc8(cpu);
    }
L_001e3168:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e316c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3170:;
    {
        cpu->r[14] = 0x001e3174u; fn_001e2e90(cpu);
    }
L_001e3174:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3184;
        }
    }
L_001e317c:;
    {
        cpu->r[14] = 0x001e3180u; fn_001e00e8(cpu);
    }
L_001e3180:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3188:;
    {
        cpu->r[14] = 0x001e318cu; fn_001ebd9c(cpu);
    }
L_001e318c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3190:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3194u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal17GetEmitterHandlesERNS_10DataHandleEPNS_13EmitterHandleEi @ 001e3194 (arm) */
void fn_001e3194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3194:;
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
L_001e3198:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e319c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_001e31a0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e31a4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e31a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e31ac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001e31b0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001e31b4:;
    {
        cpu->r[14] = 0x001e31b8u; fn_001ebdc8(cpu);
    }
L_001e31b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e31bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e31c0:;
    {
        cpu->r[8] = rd32(0x001e31c8u + + 0x288u);
    }
L_001e31c4:;
    {
        cpu->r[14] = 0x001e31c8u; fn_001e2e90(cpu);
    }
L_001e31c8:;
    {
        cpu->r[8] = add_flags(cpu, 0x001e31d0u, cpu->r[8], 0, 0);
    }
L_001e31cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e31d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[6];
        }
    }
L_001e31d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e329c;
        }
    }
L_001e31d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000084u, 0, 0);
    }
L_001e31dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000090u, 0, 0);
    }
L_001e31e0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001e31e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001e31e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e31ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000058u, 0, 0);
    }
L_001e31f0:;
    {
        cpu->r[14] = 0x001e31f4u; fn_001ebdc8(cpu);
    }
L_001e31f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e31f8:;
    {
        cpu->r[14] = 0x001e31fcu; fn_001ebdc8(cpu);
    }
L_001e31fc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e3200:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001e3204:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e3208:;
    {
        cpu->r[14] = 0x001e320cu; fn_001de2b4(cpu);
    }
L_001e320c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e3210:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_001e3214:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e3218:;
    {
        cpu->r[14] = 0x001e321cu; fn_001de2c4(cpu);
    }
L_001e321c:;
    {
        cpu->r[2] = rd32(0x001e3224u + + 0x230u);
    }
L_001e3220:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e3224:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001e3228:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e322c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001e3230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e323c;
        }
    }
L_001e3234:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001e3238:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e32b0;
        }
    }
L_001e323c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000068u, 0, 0);
    }
L_001e3240:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e3244:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e3248:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e324c:;
    {
        cpu->r[14] = 0x001e3250u; fn_001de2b4(cpu);
    }
L_001e3250:;
    {
        cpu->r[3] = rd32(0x001e3258u + + 0x1fcu);
    }
L_001e3254:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e3258:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e325c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e3260:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e3264:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001e3268:;
    {
        cpu->r[14] = 0x001e326cu; fn_001de2c4(cpu);
    }
L_001e326c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e3270:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e3274:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e3278:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_001e327c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001e3280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e328c;
        }
    }
L_001e3284:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001e3288:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e32ec;
        }
    }
L_001e328c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e3290:;
    {
        cpu->r[14] = 0x001e3294u; fn_001ebd9c(cpu);
    }
L_001e3294:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e3298:;
    {
        cpu->r[14] = 0x001e329cu; fn_001ebd9c(cpu);
    }
L_001e329c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e32a0:;
    {
        cpu->r[14] = 0x001e32a4u; fn_001ebd9c(cpu);
    }
L_001e32a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e32a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_001e32ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e32b0u)) return;
    }
L_001e32b0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_001e32b4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x118u);
    }
L_001e32b8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001e32bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e33f4;
        }
    }
L_001e32c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e32c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e32c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e32d4;
        }
    }
L_001e32cc:;
    {
        goto L_001e3360;
    }
L_001e32d0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e32d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e32d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e32dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e32d0;
        }
    }
L_001e32e0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e32e4:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_001e32e8:;
    {
        goto L_001e322c;
    }
L_001e32ec:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_001e32f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x118u);
    }
L_001e32f4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001e32f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3398;
        }
    }
L_001e32fc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e3300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3310;
        }
    }
L_001e3308:;
    {
        goto L_001e3328;
    }
L_001e330c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e3310:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3314:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e3318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e330c;
        }
    }
L_001e331c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e3320:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_001e3324:;
    {
        goto L_001e327c;
    }
L_001e3328:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e332c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e3330:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001e3334:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3350;
        }
    }
L_001e3338:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001e333c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e3340:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e3344:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e3348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3338;
        }
    }
L_001e334c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e3350:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001e3354:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001e3358:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_001e335c:;
    {
        goto L_001e327c;
    }
L_001e3360:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e3364:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e3368:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001e336c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3388;
        }
    }
L_001e3370:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001e3374:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e3378:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e337c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e3380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3370;
        }
    }
L_001e3384:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e3388:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001e338c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001e3390:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_001e3394:;
    {
        goto L_001e322c;
    }
L_001e3398:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e339c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e33a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e33a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000144u, 0, 0);
    }
L_001e33a8:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001e33ac:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e33b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e33b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e33b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001e33bc:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001e33c0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e33c4:;
    {
        cpu->r[14] = 0x001e33c8u; fn_001e2888(cpu);
    }
L_001e33c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e33cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001e33d0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e33d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e33d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001e33dc:;
    {
        cpu->r[14] = 0x001e33e0u; fn_001e2aec(cpu);
    }
L_001e33e0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e33e4:;
    {
        cpu->r[14] = 0x001e33e8u; fn_001e2b74(cpu);
    }
L_001e33e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e33ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e33f0:;
    {
        goto L_001e32fc;
    }
L_001e33f4:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e33f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e33fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e3400:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000144u, 0, 0);
    }
L_001e3404:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001e3408:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e340c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e3410:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e3414:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001e3418:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001e341c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e3420:;
    {
        cpu->r[14] = 0x001e3424u; fn_001e2888(cpu);
    }
L_001e3424:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e3428:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001e342c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e3430:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e3434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001e3438:;
    {
        cpu->r[14] = 0x001e343cu; fn_001e2aec(cpu);
    }
L_001e343c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e3440:;
    {
        cpu->r[14] = 0x001e3444u; fn_001e2b74(cpu);
    }
L_001e3444:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001e3448:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e344c:;
    {
        goto L_001e32c0;
    }
}

/* _ZN3vox17VoxEngineInternal17ReleaseDatasourceERNS_10DataHandleE @ 001e3458 (arm) */
void fn_001e3458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3458:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e345c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e3460:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e3464:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3468:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e346c:;
    {
        cpu->r[14] = 0x001e3470u; fn_001ebdc8(cpu);
    }
L_001e3470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3474:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3478:;
    {
        cpu->r[14] = 0x001e347cu; fn_001e2e90(cpu);
    }
L_001e347c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e34a8;
        }
    }
L_001e3484:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_001e3488:;
    {
        cpu->r[14] = 0x001e348cu; fn_001e030c(cpu);
    }
L_001e348c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e3490:;
    {
        cpu->r[14] = 0x001e3494u; fn_001ebcfc(cpu);
    }
L_001e3494:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x4cu);
    }
L_001e3498:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e349c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e34b4;
        }
    }
L_001e34a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e34a4:;
    {
        cpu->r[14] = 0x001e34a8u; fn_001ebcf8(cpu);
    }
L_001e34a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e34ac:;
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
L_001e34b0:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e34b4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e34b8:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e34bc:;
    {
        wr8(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_001e34c0:;
    {
        cpu->r[14] = 0x001e34c4u; fn_00097dd0(cpu);
    }
L_001e34c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001e34c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001e34cc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[7]);
    }
L_001e34d0:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001e34d4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001e34d8:;
    {
        goto L_001e34a0;
    }
}

/* _ZN3vox17VoxEngineInternal26IncreaseDataObjectRefCountERNS_10DataHandleE @ 001e34dc (arm) */
void fn_001e34dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e34dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e34e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e34e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e34e8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e34ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e34f0:;
    {
        cpu->r[14] = 0x001e34f4u; fn_001ebdc8(cpu);
    }
L_001e34f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e34f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e34fc:;
    {
        cpu->r[14] = 0x001e3500u; fn_001e2e90(cpu);
    }
L_001e3500:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3514;
        }
    }
L_001e3508:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e350c:;
    {
        cpu->r[14] = 0x001e3514u;
    }
L_001e3510:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3514u)) return;
    }
L_001e3514:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3518:;
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
L_001e351c:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox10DataHandleC1ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj @ 001e3520 (arm) */
void fn_001e3520(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3520:;
    {
        cpu->r[12] = rd32(0x001e3528u + + 0x84u);
    }
L_001e3524:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e352c:;
    {
        cpu->r[0] = rd32(0x001e3534u + + 0x7cu);
    }
L_001e3530:;
    {
        cpu->r[12] = add_flags(cpu, 0x001e3538u, cpu->r[12], 0, 0);
    }
L_001e3534:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e3538:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e353c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001e3540:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e3544:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e3548:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e354c:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e3550:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e3554:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e3558:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e355c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e3560:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e3564:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001e3568:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e356c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3594;
        }
    }
L_001e3570:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001e3574:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3594;
        }
    }
L_001e357c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e3580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e359c;
        }
    }
L_001e3584:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e3588:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e358c:;
    {
        cpu->r[14] = 0x001e3594u;
    }
L_001e3590:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3594u)) return;
    }
L_001e3594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3598:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e359cu)) return;
    }
L_001e359c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e35a0:;
    {
        cpu->r[14] = 0x001e35a4u; fn_001e34dc(cpu);
    }
L_001e35a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e35a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e35acu)) return;
    }
}

/* _ZN3vox10DataHandleC2ExPPNS_17VoxEngineInternalEPNS_9HandlableEjj @ 001e35b4 (arm) */
void fn_001e35b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e35b4:;
    {
        cpu->r[12] = rd32(0x001e35bcu + + 0x84u);
    }
L_001e35b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e35bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e35c0:;
    {
        cpu->r[0] = rd32(0x001e35c8u + + 0x7cu);
    }
L_001e35c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001e35ccu, cpu->r[12], 0, 0);
    }
L_001e35c8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e35cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e35d0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001e35d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e35d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e35dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e35e0:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e35e4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e35e8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e35ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e35f0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e35f4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e35f8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001e35fc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e3600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3628;
        }
    }
L_001e3604:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001e3608:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e360c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3628;
        }
    }
L_001e3610:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e3614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3630;
        }
    }
L_001e3618:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e361c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e3620:;
    {
        cpu->r[14] = 0x001e3628u;
    }
L_001e3624:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3628u)) return;
    }
L_001e3628:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e362c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3630u)) return;
    }
L_001e3630:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e3634:;
    {
        cpu->r[14] = 0x001e3638u; fn_001e34dc(cpu);
    }
L_001e3638:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e363c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3640u)) return;
    }
}

/* _ZN3vox10DataHandleC1ERKS0_ @ 001e3648 (arm) */
void fn_001e3648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3648:;
    {
        cpu->r[3] = rd32(0x001e3650u + + 0x6cu);
    }
L_001e364c:;
    {
        cpu->r[2] = rd32(0x001e3654u + + 0x6cu);
    }
L_001e3650:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e3654:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e365cu, cpu->r[3], 0, 0);
    }
L_001e3658:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e365c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001e3660:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_001e3664:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e3668:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e366c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001e3670:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e3674:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x18u);
    }
L_001e3678:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e367c:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e3680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e3684:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e3688:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001e368c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e3690:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001e3694:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e3698:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001e369c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e36b4;
        }
    }
L_001e36a0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001e36a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e36a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e36b4;
        }
    }
L_001e36ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e36b0:;
    {
        cpu->r[14] = 0x001e36b4u; fn_001e34dc(cpu);
    }
L_001e36b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e36b8:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e36bcu)) return;
    }
}

/* _ZN3vox10DataHandleC2ERKS0_ @ 001e36c4 (arm) */
void fn_001e36c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e36c4:;
    {
        cpu->r[3] = rd32(0x001e36ccu + + 0x6cu);
    }
L_001e36c8:;
    {
        cpu->r[2] = rd32(0x001e36d0u + + 0x6cu);
    }
L_001e36cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e36d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e36d8u, cpu->r[3], 0, 0);
    }
L_001e36d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e36d8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001e36dc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_001e36e0:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e36e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e36e8:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001e36ec:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e36f0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x18u);
    }
L_001e36f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e36f8:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e36fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e3700:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e3704:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001e3708:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e370c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001e3710:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e3714:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001e3718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3730;
        }
    }
L_001e371c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001e3720:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3730;
        }
    }
L_001e3728:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e372c:;
    {
        cpu->r[14] = 0x001e3730u; fn_001e34dc(cpu);
    }
L_001e3730:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3734:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3738u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7GetDataERNS_13EmitterHandleE @ 001e3740 (arm) */
void fn_001e3740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3740:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e3744:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000084u, 0, 0);
    }
L_001e3748:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e374c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001e3750:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001e3754:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3758:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e375c:;
    {
        cpu->r[4] = rd32(0x001e3764u + + 0xa0u);
    }
L_001e3760:;
    {
        cpu->r[14] = 0x001e3764u; fn_001ebdc8(cpu);
    }
L_001e3764:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e3768:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e376c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001e3774u, cpu->r[4], 0, 0);
    }
L_001e3770:;
    {
        cpu->r[14] = 0x001e3774u; fn_001e1ca0(cpu);
    }
L_001e3774:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e37d4;
        }
    }
L_001e377c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x118u);
    }
L_001e3780:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e37cc;
        }
    }
L_001e3788:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e378c:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x8u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e3790:;
    {
        cpu->r[14] = 0x001e3794u; fn_001ebd9c(cpu);
    }
L_001e3794:;
    {
        cpu->r[12] = rd32(0x001e379cu + + 0x6cu);
    }
L_001e3798:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e379c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e37a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e37a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e37a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001e37ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e37b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e37b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e37b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e37bc:;
    {
        cpu->r[14] = 0x001e37c0u; fn_001e3520(cpu);
    }
L_001e37c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e37c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e37c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e37ccu)) return;
    }
L_001e37cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e37d0:;
    {
        cpu->r[14] = 0x001e37d4u; fn_001ebd9c(cpu);
    }
L_001e37d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e37d8:;
    {
        cpu->r[14] = 0x001e37dcu; fn_001ebd9c(cpu);
    }
L_001e37dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e37e0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e37e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e37e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e37ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e37f0:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e37f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e37f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e37fc:;
    {
        cpu->r[14] = 0x001e3800u; fn_001e3520(cpu);
    }
L_001e3800:;
    {
        goto L_001e37c0;
    }
}

/* _ZN3vox17VoxEngineInternal22GetFreeEmitterObjectIdEv @ 001e380c (arm) */
void fn_001e380c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e380c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3810:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e3814:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e381c:;
    {
        cpu->r[14] = 0x001e3820u; fn_001ebd2c(cpu);
    }
L_001e3820:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e3824:;
    {
        cpu->r[14] = 0x001e3828u; fn_001de288(cpu);
    }
L_001e3828:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e382c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3830:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3834:;
    {
        cpu->r[14] = 0x001e3838u; fn_001ebd00(cpu);
    }
L_001e3838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e383c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3840:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3844u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal19GetFreeDataObjectIdEv @ 001e3844 (arm) */
void fn_001e3844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3844:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3848:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e384c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e3854:;
    {
        cpu->r[14] = 0x001e3858u; fn_001ebd2c(cpu);
    }
L_001e3858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e385c:;
    {
        cpu->r[14] = 0x001e3860u; fn_001de288(cpu);
    }
L_001e3860:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3864:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e3868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e386c:;
    {
        cpu->r[14] = 0x001e3870u; fn_001ebd00(cpu);
    }
L_001e3870:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3874:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e3878:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e387cu)) return;
    }
}

/* _ZN3vox17VoxEngineInternal10InitializeEv @ 001e387c (arm) */
void fn_001e387c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e387c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001e3880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e3884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3888:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e388c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3898;
        }
    }
L_001e3890:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001e3894:;
    {
        return fn_0020029c(cpu);
    }
L_001e3898:;
    {
        cpu->r[14] = 0x001e389cu; fn_001dab04(cpu);
    }
L_001e389c:;
    {
        wr32(cpu->r[4] + + 0x50cu, cpu->r[0]);
    }
L_001e38a0:;
    {
        goto L_001e3890;
    }
}

/* sub_001e38a4 @ 001e38a4 (arm) */
void fn_001e38a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e38a4:;
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
L_001e38a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e38ac:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_001e38b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e38b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001e38b8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001e38bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001e38c0:;
    {
        if (cond_test(cpu, 9)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e38c4u)) return;
        }
    }
L_001e38c4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e38c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e38cc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001e38d0:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001e38d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e391c;
        }
    }
L_001e38d8:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_001e38dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e38e0:;
    {
        cpu->r[14] = 0x001e38e4u; fn_00097dd0(cpu);
    }
L_001e38e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001e38e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e38ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e38fc;
        }
    }
L_001e38f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e38f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e38f8:;
    {
        cpu->r[14] = 0x001e38fcu; imp_memcpy(cpu); /* memcpy */
    }
L_001e38fc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e3900:;
    {
        cpu->r[14] = 0x001e3904u; fn_00097dc8(cpu);
    }
L_001e3904:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001e3908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000200u, 0, 0);
    }
L_001e390c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e3910:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e3914:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001e3918:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e391cu)) return;
    }
L_001e391c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e3920:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_001e3924:;
    {
        cpu->r[14] = 0x001e3928u; fn_00097dd0(cpu);
    }
L_001e3928:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e392c:;
    {
        goto L_001e3904;
    }
}

/* sub_001e3930 @ 001e3930 (arm) */
void fn_001e3930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3930:;
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
L_001e3934:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e3938:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_001e393c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e3940:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001e3944:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001e3948:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001e394c:;
    {
        if (cond_test(cpu, 9)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3950u)) return;
        }
    }
L_001e3950:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e3954:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e3958:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001e395c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001e3960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e39a8;
        }
    }
L_001e3964:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_001e3968:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e396c:;
    {
        cpu->r[14] = 0x001e3970u; fn_00097dd0(cpu);
    }
L_001e3970:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001e3974:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3988;
        }
    }
L_001e397c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e3980:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e3984:;
    {
        cpu->r[14] = 0x001e3988u; imp_memcpy(cpu); /* memcpy */
    }
L_001e3988:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e398c:;
    {
        cpu->r[14] = 0x001e3990u; fn_00097dc8(cpu);
    }
L_001e3990:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001e3994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000200u, 0, 0);
    }
L_001e3998:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e399c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e39a0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001e39a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e39a8u)) return;
    }
L_001e39a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e39ac:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_001e39b0:;
    {
        cpu->r[14] = 0x001e39b4u; fn_00097dd0(cpu);
    }
L_001e39b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e39b8:;
    {
        goto L_001e3990;
    }
}

/* sub_001e39bc @ 001e39bc (arm) */
void fn_001e39bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e39bc:;
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
L_001e39c0:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001e39c4:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_001e39c8:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001e39cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e39d0:;
    {
        cpu->r[3] = 0x00006666u;
    }
L_001e39d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0666u << 16);
    }
L_001e39d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e39dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_001e39e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e39e4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e39e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001e39ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e39f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e39f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e39f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e39fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001e3a00:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[1], 0, 0);
        }
    }
L_001e3a04:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001e3a08:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001e3a0c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e3a4c;
        }
    }
L_001e3a10:;
    {
        cpu->r[3] = (~0x0000000fu);
    }
L_001e3a14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e3a18:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e3a1c:;
    {
        cpu->r[14] = 0x001e3a20u; fn_00097b58(cpu);
    }
L_001e3a20:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e3a24:;
    {
        cpu->r[3] = 0x0000cccdu;
    }
L_001e3a28:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001e3a2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xccccu << 16);
    }
L_001e3a30:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[9]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001e3a34:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 5u, &shc); cpu->r[9] = v;
    }
L_001e3a38:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001e3a3c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e3a40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_001e3a44:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_001e3a48:;
    {
        goto L_001e3a6c;
    }
L_001e3a4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_001e3a50:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e3a10;
        }
    }
L_001e3a54:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001e3a58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
        }
    }
L_001e3a5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000028u;
        }
    }
L_001e3a60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[9];
        }
    }
L_001e3a64:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 2, 3u, &shc); cpu->r[3] = v;
        }
    }
L_001e3a68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3a14;
        }
    }
L_001e3a6c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001e3a70:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e3a74:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001e3a78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 4u, &shc), 0, 0);
    }
L_001e3a7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 8u, &shc), 0, 0);
    }
L_001e3a80:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 16u, &shc), 0, 0);
    }
L_001e3a84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001e3a88:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e3a8c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_001e3a90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e3ac0;
        }
    }
L_001e3a94:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001e3a98:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e3a9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001e3aa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001e3aa4:;
    {
        cpu->r[14] = 0x001e3aa8u; fn_001e3648(cpu);
    }
L_001e3aa8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001e3aac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e3ab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3a9c;
        }
    }
L_001e3ab4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001e3ab8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e3abc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_001e3ac0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e3ac4:;
    {
        cpu->r[14] = 0x001e3ac8u; fn_001e3648(cpu);
    }
L_001e3ac8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3acc:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001e3ad0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001e3ad4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001e3ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3af8;
        }
    }
L_001e3adc:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x28u;
        cpu->r[3] = rd32(cpu->r[6] + - 0x28u);
        cpu->r[6] = wb_tmp;
    }
L_001e3ae0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e3ae4:;
    {
        cpu->r[14] = 0x001e3aecu;
    }
L_001e3ae8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3aecu)) return;
    }
L_001e3aec:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001e3af0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3adc;
        }
    }
L_001e3af4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e3af8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3afc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e3b00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3b34;
        }
    }
L_001e3b04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001e3b08:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e3b0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001e3b10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e3b14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e3b18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e3b1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e3b20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001e3b24:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[1] = v;
    }
L_001e3b28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001e3b2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e3b48;
        }
    }
L_001e3b30:;
    {
        cpu->r[14] = 0x001e3b34u; fn_002082a8(cpu);
    }
L_001e3b34:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[9]);
    }
L_001e3b38:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_001e3b3c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001e3b40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e3b44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3b48u)) return;
    }
L_001e3b48:;
    {
        cpu->r[14] = 0x001e3b4cu; fn_0018ba20(cpu);
    }
L_001e3b4c:;
    {
        goto L_001e3b34;
    }
}

/* sub_001e3b50 @ 001e3b50 (arm) */
void fn_001e3b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3b50:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e3b54:;
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
L_001e3b58:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e3b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e3b60:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e3b64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3bc4;
        }
    }
L_001e3b68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e3b6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e3b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3e5c;
        }
    }
L_001e3b74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e3b78:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001e3b7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001e3b80:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001e3b84:;
    {
        cpu->r[14] = 0x001e3b88u; fn_00097dd0(cpu);
    }
L_001e3b88:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e3b8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001e3b90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e3b94:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3b98:;
    {
        uint64_t v = rd64(cpu->r[3]);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e3b9c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001e3ba0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e3ba4:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[0]);
    }
L_001e3ba8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e3bac:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[8]);
    }
L_001e3bb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001e3bb4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001e3bb8:;
    {
        wr64(cpu->r[0] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e3bbc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
        }
    }
L_001e3bc0:;
    {
        goto L_001e3c0c;
    }
L_001e3bc4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e3bc8:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001e3bcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001e3bd0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001e3bd4:;
    {
        cpu->r[14] = 0x001e3bd8u; fn_00097dd0(cpu);
    }
L_001e3bd8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e3bdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e3be0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3be4:;
    {
        uint64_t v = rd64(cpu->r[3]);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e3be8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e3bec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e3bf0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001e3bf4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001e3bf8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_001e3bfc:;
    {
        wr64(cpu->r[0] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e3c00:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001e3c04:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001e3c08:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001e3c0c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001e3c10:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e3c14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3c18:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001e3c1c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001e3c20:;
    {
        wr8(cpu->r[1], cpu->r[8]);
    }
L_001e3c24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001e3c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3cfc;
        }
    }
L_001e3c2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3c30:;
    {
        cpu->r[0] = rd8(cpu->r[2]);
    }
L_001e3c34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3c38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3cf8;
        }
    }
L_001e3c3c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e3c40:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3c44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001e3c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3d20;
        }
    }
L_001e3c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3c78;
        }
    }
L_001e3c54:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_001e3c58:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e3c5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3c78;
        }
    }
L_001e3c60:;
    {
        wr8(cpu->r[2], cpu->r[7]);
    }
L_001e3c64:;
    {
        wr8(cpu->r[0], cpu->r[7]);
    }
L_001e3c68:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e3c6c:;
    {
        wr8(cpu->r[12], cpu->r[10]);
    }
L_001e3c70:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e3c74:;
    {
        goto L_001e3c24;
    }
L_001e3c78:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e3c7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e3c80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_001e3c84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001e3c88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001e3c8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3dcc;
        }
    }
L_001e3c90:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e3c94:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001e3c98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e3c9c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e3ca0:;
    {
        wr8(cpu->r[3], cpu->r[8]);
    }
L_001e3ca4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3ca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3cac:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001e3cb0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001e3cb4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3cb8:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001e3cbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3cc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e3cc4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
        }
    }
L_001e3cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3ce0;
        }
    }
L_001e3ccc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3cd0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e3cd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001e3cd8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
        }
    }
L_001e3cdc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
        }
    }
L_001e3ce0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001e3ce4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001e3ce8:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
    }
L_001e3cec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e3cf0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3cf4:;
    {
        goto L_001e3c24;
    }
L_001e3cf8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001e3cfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e3d00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e3d04:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_001e3d08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e3d0c:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_001e3d10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001e3d14:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e3d18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e3d1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3d20u)) return;
    }
L_001e3d20:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e3d24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e3d28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3d50;
        }
    }
L_001e3d2c:;
    {
        cpu->r[10] = rd8(cpu->r[2]);
    }
L_001e3d30:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e3d34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3d50;
        }
    }
L_001e3d38:;
    {
        wr8(cpu->r[0], cpu->r[7]);
    }
L_001e3d3c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e3d40:;
    {
        wr8(cpu->r[2], cpu->r[7]);
    }
L_001e3d44:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e3d48:;
    {
        wr8(cpu->r[12], cpu->r[10]);
    }
L_001e3d4c:;
    {
        goto L_001e3c24;
    }
L_001e3d50:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001e3d54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e3d58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_001e3d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001e3d60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001e3d64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3e14;
        }
    }
L_001e3d68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e3d6c:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001e3d70:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e3d74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3d78:;
    {
        wr8(cpu->r[3], cpu->r[8]);
    }
L_001e3d7c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e3d80:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e3d84:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
    }
L_001e3d88:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
        }
    }
L_001e3d8c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3d90:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[12]);
    }
L_001e3d94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3d98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e3d9c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
        }
    }
L_001e3da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3db8;
        }
    }
L_001e3da4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3da8:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e3dac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001e3db0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[2]);
        }
    }
L_001e3db4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
        }
    }
L_001e3db8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001e3dbc:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_001e3dc0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e3dc4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3dc8:;
    {
        goto L_001e3c24;
    }
L_001e3dcc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e3dd0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e3dd4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
        }
    }
L_001e3dd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_001e3ddc:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[6]);
    }
L_001e3de0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001e3de4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3de8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001e3dec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_001e3df0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3e08;
        }
    }
L_001e3df4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e3df8:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e3dfc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001e3e00:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[0]);
        }
    }
L_001e3e04:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[0]);
        }
    }
L_001e3e08:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_001e3e0c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001e3e10:;
    {
        goto L_001e3c90;
    }
L_001e3e14:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3e18:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e3e1c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001e3e20:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
        }
    }
L_001e3e24:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e3e28:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_001e3e2c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e3e30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001e3e34:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
        }
    }
L_001e3e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3e50;
        }
    }
L_001e3e3c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e3e40:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3e44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001e3e48:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
        }
    }
L_001e3e4c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0xcu, cpu->r[2]);
        }
    }
L_001e3e50:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001e3e54:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[0]);
    }
L_001e3e58:;
    {
        goto L_001e3d68;
    }
L_001e3e5c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_001e3e60:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3e64:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e3e68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e3b74;
        }
    }
L_001e3e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3ec0;
        }
    }
L_001e3e70:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e3e74:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001e3e78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001e3e7c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001e3e80:;
    {
        cpu->r[14] = 0x001e3e84u; fn_00097dd0(cpu);
    }
L_001e3e84:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e3e88:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001e3e8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e3e90:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3e94:;
    {
        uint64_t v = rd64(cpu->r[3]);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e3e98:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001e3e9c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e3ea0:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[0]);
    }
L_001e3ea4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e3ea8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[8]);
    }
L_001e3eac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001e3eb0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001e3eb4:;
    {
        wr64(cpu->r[0] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e3eb8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
        }
    }
L_001e3ebc:;
    {
        goto L_001e3c0c;
    }
L_001e3ec0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x10u);
    }
L_001e3ec4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001e3ec8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e3ecc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e3e70;
        }
    }
L_001e3ed0:;
    {
        goto L_001e3b74;
    }
}

/* _ZN3vox18HandlableContainer3AddEPNS_9HandlableE @ 001e3ed4 (arm) */
void fn_001e3ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e3ed4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e3ed8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e3edc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001e3ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3f70;
        }
    }
L_001e3ee4:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001e3ee8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3eec:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e3ef0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e3ef4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e3ef8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e3efc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001e3f00:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e3f04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_001e3f08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3f28;
        }
    }
L_001e3f0c:;
    {
        goto L_001e3f98;
    }
L_001e3f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3f78;
        }
    }
L_001e3f14:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e3f18:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001e3f1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3f48;
        }
    }
L_001e3f24:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001e3f28:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x14u);
    }
L_001e3f2c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001e3f30:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x10u);
    }
L_001e3f34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e3f38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e3f10;
        }
    }
L_001e3f3c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3f40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3f44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3f24;
        }
    }
L_001e3f48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e3f4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3f98;
        }
    }
L_001e3f50:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e3f54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e3f88;
        }
    }
L_001e3f58:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001e3f5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e3f60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e3f64:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001e3f68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e3f6c:;
    {
        cpu->r[14] = 0x001e3f70u; fn_001e3b50(cpu);
    }
L_001e3f70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e3f74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e3f78u)) return;
    }
L_001e3f78:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001e3f7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e3f14;
        }
    }
L_001e3f80:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3f84:;
    {
        goto L_001e3f40;
    }
L_001e3f88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3f70;
        }
    }
L_001e3f8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001e3f90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e3f70;
        }
    }
L_001e3f94:;
    {
        goto L_001e3f58;
    }
L_001e3f98:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_001e3f9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e3fa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4030;
        }
    }
L_001e3fa4:;
    {
        cpu->r[3] = rd8(cpu->r[12]);
    }
L_001e3fa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3fc0;
        }
    }
L_001e3fb0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_001e3fb4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e3fb8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001e3fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4020;
        }
    }
L_001e3fc0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e3fc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e3ff0;
        }
    }
L_001e3fcc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e3fd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e3fd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e3fd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3fcc;
        }
    }
L_001e3fdc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001e3fe0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x10u);
    }
L_001e3fe4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e3fe8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e3f58;
        }
    }
L_001e3fec:;
    {
        goto L_001e3f88;
    }
L_001e3ff0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_001e3ff4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001e3ff8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001e3ffc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
        }
    }
L_001e4000:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[3] + + 0x10u);
        }
    }
L_001e4004:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e3f50;
        }
    }
L_001e4008:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e400c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e4010:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e4014:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e4018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4008;
        }
    }
L_001e401c:;
    {
        goto L_001e3fdc;
    }
L_001e4020:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e4024:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_001e4028:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e402c:;
    {
        goto L_001e3f50;
    }
L_001e4030:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001e4034:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e4038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e403c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e4040:;
    {
        cpu->r[14] = 0x001e4044u; fn_001e3b50(cpu);
    }
L_001e4044:;
    {
        goto L_001e3f70;
    }
}

/* _ZN3vox18HandlableContainer5MergeEPS0_ @ 001e4048 (arm) */
void fn_001e4048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4048:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e404c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e4050:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e4054:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e4058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e405c:;
    {
        cpu->r[14] = 0x001e4060u; fn_001de2b4(cpu);
    }
L_001e4060:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4064:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e4068:;
    {
        cpu->r[14] = 0x001e406cu; fn_001de2c4(cpu);
    }
L_001e406c:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_001e4070:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e4074:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001e4078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e40bc;
        }
    }
L_001e407c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e4080:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e4084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4090;
        }
    }
L_001e4088:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e408c:;
    {
        cpu->r[14] = 0x001e4090u; fn_001e3ed4(cpu);
    }
L_001e4090:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4094:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e4098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e40a4;
        }
    }
L_001e409c:;
    {
        goto L_001e40c4;
    }
L_001e40a0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e40a4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e40a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e40ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e40a0;
        }
    }
L_001e40b0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e40b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001e40b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e407c;
        }
    }
L_001e40bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e40c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e40c4u)) return;
    }
L_001e40c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e40c8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e40cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e40d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e40ec;
        }
    }
L_001e40d4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e40d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e40dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e40e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e40e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e40d4;
        }
    }
L_001e40e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e40ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e40f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e40f4:;
    {
        goto L_001e4074;
    }
}

/* _ZN3vox17VoxEngineInternal18CreateEmitterAsyncERNS_10DataHandleEiPv @ 001e40f8 (arm) */
void fn_001e40f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e40f8:;
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
L_001e40fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_001e4100:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001e4104:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e4108:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_001e410c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001e4110:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4114:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001e4118:;
    {
        cpu->r[14] = 0x001e411cu; fn_001ebdc8(cpu);
    }
L_001e411c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e4120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4124:;
    {
        cpu->r[6] = rd32(0x001e412cu + + 0x238u);
    }
L_001e4128:;
    {
        cpu->r[14] = 0x001e412cu; fn_001e2e90(cpu);
    }
L_001e412c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e4134u, cpu->r[6], 0, 0);
    }
L_001e4130:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4338;
        }
    }
L_001e4138:;
    {
        cpu->r[14] = 0x001e413cu; fn_001e00e8(cpu);
    }
L_001e413c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e430c;
        }
    }
L_001e4144:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e4148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e414c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e42d4;
        }
    }
L_001e4150:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001e4154:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x38u);
    }
L_001e4158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e415c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
        }
    }
L_001e4160:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001e4164:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001e4168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e42d4;
        }
    }
L_001e416c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e4170:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e4174:;
    {
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
L_001e4178:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e417c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e4180:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e42d4;
        }
    }
L_001e4184:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001e4188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e418c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e42d4;
        }
    }
L_001e4190:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e4194:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001e4198:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_001e419c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001e41a0:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001e41a4:;
    {
        cpu->r[14] = 0x001e41acu;
    }
L_001e41a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e41acu)) return;
    }
L_001e41ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e41b0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001e41b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e42d4;
        }
    }
L_001e41b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e41bc:;
    {
        cpu->r[14] = 0x001e41c0u; fn_001e380c(cpu);
    }
L_001e41c0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x20u);
    }
L_001e41c4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e41c8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e41cc:;
    {
        cpu->r[0] = 0x00000168u;
    }
L_001e41d0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e41d4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001e41d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e41dc:;
    {
        cpu->r[14] = 0x001e41e0u; fn_00097dd0(cpu);
    }
L_001e41e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e41e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e41e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e41ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_001e41f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e41f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001e41f8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e41fc:;
    {
        cpu->r[14] = 0x001e4200u; fn_001e0b88(cpu);
    }
L_001e4200:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e4204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e42b4;
        }
    }
L_001e4208:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e420c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e4210:;
    {
        cpu->r[14] = 0x001e4214u; fn_001e0268(cpu);
    }
L_001e4214:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e4218:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e421c:;
    {
        cpu->r[14] = 0x001e4220u; fn_001dff50(cpu);
    }
L_001e4220:;
    {
        uint64_t v = rd64(cpu->r[7] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e4224:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4228:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001e422c:;
    {
        cpu->r[14] = 0x001e4230u; fn_001e03cc(cpu);
    }
L_001e4230:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4234:;
    {
        cpu->r[14] = 0x001e4238u; fn_001ebd9c(cpu);
    }
L_001e4238:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e423c:;
    {
        cpu->r[12] = rd32(0x001e4244u + + 0x124u);
    }
L_001e4240:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e4244:;
    {
        uint64_t v = rd64(cpu->r[7] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e4248:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[1]);
    }
L_001e424c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e4250:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001e4254:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e4258:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001e425c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e4260:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e4264:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e4268:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e426c:;
    {
        cpu->r[14] = 0x001e4270u; fn_001e2888(cpu);
    }
L_001e4270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e4274:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4278:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e427c:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_001e4280:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[3]);
    }
L_001e4284:;
    {
        cpu->r[14] = 0x001e4288u; fn_001ebd2c(cpu);
    }
L_001e4288:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e428c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_001e4290:;
    {
        cpu->r[14] = 0x001e4294u; fn_001e3ed4(cpu);
    }
L_001e4294:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4298:;
    {
        cpu->r[14] = 0x001e429cu; fn_001ebd00(cpu);
    }
L_001e429c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e42a0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e42a4:;
    {
        cpu->r[14] = 0x001e42a8u; fn_001e29b0(cpu);
    }
L_001e42a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e42ac:;
    {
        cpu->r[14] = 0x001e42b0u; fn_001e2b74(cpu);
    }
L_001e42b0:;
    {
        goto L_001e4300;
    }
L_001e42b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001e42b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e42bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e42d4;
        }
    }
L_001e42c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e42c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e42c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e42cc:;
    {
        cpu->r[14] = 0x001e42d4u;
    }
L_001e42d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e42d4u)) return;
    }
L_001e42d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e42d8:;
    {
        cpu->r[14] = 0x001e42dcu; fn_001ebd9c(cpu);
    }
L_001e42dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e42e0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e42e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e42e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e42ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e42f0:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e42f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e42f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e42fc:;
    {
        cpu->r[14] = 0x001e4300u; fn_001e2888(cpu);
    }
L_001e4300:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e4304:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001e4308:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e430cu)) return;
    }
L_001e430c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4310:;
    {
        cpu->r[14] = 0x001e4314u; fn_001ebd9c(cpu);
    }
L_001e4314:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e4318:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e431c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e4320:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001e4324:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001e4328:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001e432c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001e4330:;
    {
        cpu->r[14] = 0x001e4334u; fn_001e2888(cpu);
    }
L_001e4334:;
    {
        goto L_001e4300;
    }
L_001e4338:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e433c:;
    {
        cpu->r[14] = 0x001e4340u; fn_001ebd9c(cpu);
    }
L_001e4340:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e4344:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e4348:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e434c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001e4350:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001e4354:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001e4358:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001e435c:;
    {
        cpu->r[14] = 0x001e4360u; fn_001e2888(cpu);
    }
L_001e4360:;
    {
        goto L_001e4300;
    }
}

/* _ZN3vox9HandlableD0Ev @ 001e436c (arm) */
void fn_001e436c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e436c:;
    {
        cpu->r[3] = rd32(0x001e4374u + + 0x2cu);
    }
L_001e4370:;
    {
        cpu->r[2] = rd32(0x001e4378u + + 0x2cu);
    }
L_001e4374:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e437cu, cpu->r[3], 0, 0);
    }
L_001e4378:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e437c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e4380:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e4384:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e4388:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001e438c:;
    {
        cpu->r[14] = 0x001e4390u; fn_001ebe28(cpu);
    }
L_001e4390:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4394:;
    {
        cpu->r[14] = 0x001e4398u; fn_0018ba20(cpu);
    }
L_001e4398:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e439c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e43a0u)) return;
    }
}

/* _ZN3vox10EmitterObjD1Ev @ 001e43a8 (arm) */
void fn_001e43a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e43a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e43ac:;
    {
        cpu->r[4] = rd32(0x001e43b4u + + 0x44u);
    }
L_001e43b0:;
    {
        cpu->r[3] = rd32(0x001e43b8u + + 0x44u);
    }
L_001e43b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e43b8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001e43c0u, cpu->r[4], 0, 0);
    }
L_001e43bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xf4u);
    }
L_001e43c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e43c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e43c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e43cc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001e43d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e43d8;
        }
    }
L_001e43d4:;
    {
        cpu->r[14] = 0x001e43d8u; fn_00097dc8(cpu);
    }
L_001e43d8:;
    {
        cpu->r[3] = rd32(0x001e43e0u + + 0x20u);
    }
L_001e43dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e43e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e43e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e43e8:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e43ec:;
    {
        cpu->r[14] = 0x001e43f0u; fn_001ebe28(cpu);
    }
L_001e43f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e43f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e43f8u)) return;
    }
}

/* _ZN3vox10EmitterObjD0Ev @ 001e4404 (arm) */
void fn_001e4404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4404:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e4408:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e440c:;
    {
        cpu->r[14] = 0x001e4410u; fn_001e43a8(cpu);
    }
L_001e4410:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4414:;
    {
        cpu->r[14] = 0x001e4418u; fn_0018ba20(cpu);
    }
L_001e4418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e441c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4420u)) return;
    }
}

/* _ZN3vox10EmitterObjD2Ev @ 001e4420 (arm) */
void fn_001e4420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4420:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e4424:;
    {
        cpu->r[4] = rd32(0x001e442cu + + 0x44u);
    }
L_001e4428:;
    {
        cpu->r[3] = rd32(0x001e4430u + + 0x44u);
    }
L_001e442c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e4430:;
    {
        cpu->r[4] = add_flags(cpu, 0x001e4438u, cpu->r[4], 0, 0);
    }
L_001e4434:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xf4u);
    }
L_001e4438:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e443c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4440:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e4444:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001e4448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4450;
        }
    }
L_001e444c:;
    {
        cpu->r[14] = 0x001e4450u; fn_00097dc8(cpu);
    }
L_001e4450:;
    {
        cpu->r[3] = rd32(0x001e4458u + + 0x20u);
    }
L_001e4454:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e445c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e4460:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e4464:;
    {
        cpu->r[14] = 0x001e4468u; fn_001ebe28(cpu);
    }
L_001e4468:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e446c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4470u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal17ReleaseDatasourceEj @ 001e447c (arm) */
void fn_001e447c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e447c:;
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
L_001e4480:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e4484:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e4488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e448c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001e4490:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e4494:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e4498:;
    {
        cpu->r[14] = 0x001e449cu; fn_001ebdc8(cpu);
    }
L_001e449c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e44a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e44a4:;
    {
        cpu->r[14] = 0x001e44a8u; fn_001de2b4(cpu);
    }
L_001e44a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e44ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e44b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001e44b4:;
    {
        cpu->r[14] = 0x001e44b8u; fn_001de2c4(cpu);
    }
L_001e44b8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e44bc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e44c0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x0000004cu, 0, 0);
    }
L_001e44c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001e44c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4510;
        }
    }
L_001e44cc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e44d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e44d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e44d8:;
    {
        cpu->r[14] = 0x001e44dcu; fn_001e022c(cpu);
    }
L_001e44dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e44e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e45b4;
        }
    }
L_001e44e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e44e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e44ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e44f8;
        }
    }
L_001e44f0:;
    {
        goto L_001e45e4;
    }
L_001e44f4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e44f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e44fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e44f4;
        }
    }
L_001e4504:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e4508:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001e450c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e44cc;
        }
    }
L_001e4510:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e4514:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000040u, 0, 0);
    }
L_001e4518:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e451c:;
    {
        cpu->r[14] = 0x001e4520u; fn_001ebd9c(cpu);
    }
L_001e4520:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_001e4524:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4528:;
    {
        cpu->r[14] = 0x001e452cu; fn_001ebdc8(cpu);
    }
L_001e452c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4530:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e4534:;
    {
        cpu->r[14] = 0x001e4538u; fn_001de2b4(cpu);
    }
L_001e4538:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e453c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4540:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e4544:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e4548:;
    {
        cpu->r[14] = 0x001e454cu; fn_001de2c4(cpu);
    }
L_001e454c:;
    {
        cpu->r[9] = rd32(cpu->r[13]);
    }
L_001e4550:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e4554:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001e4558:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_001e455c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e45a4;
        }
    }
L_001e4560:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e4564:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e4568:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e456c:;
    {
        cpu->r[14] = 0x001e4570u; fn_001e022c(cpu);
    }
L_001e4570:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4618;
        }
    }
L_001e4578:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e457c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e4580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e458c;
        }
    }
L_001e4584:;
    {
        goto L_001e4648;
    }
L_001e4588:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e458c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e4590:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4588;
        }
    }
L_001e4598:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e459c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_001e45a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4560;
        }
    }
L_001e45a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e45a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e45ac:;
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
L_001e45b0:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e45b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e45b8:;
    {
        cpu->r[14] = 0x001e45bcu; fn_001e030c(cpu);
    }
L_001e45bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e45c0:;
    {
        cpu->r[14] = 0x001e45c4u; fn_001ebcfc(cpu);
    }
L_001e45c4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x4cu);
    }
L_001e45c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e45cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e46a4;
        }
    }
L_001e45d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e45d4:;
    {
        cpu->r[14] = 0x001e45d8u; fn_001ebcf8(cpu);
    }
L_001e45d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e45dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e45e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e44f8;
        }
    }
L_001e45e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e45e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e45ec:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e45f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e460c;
        }
    }
L_001e45f4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e45f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e45fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4600:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e4604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e45f4;
        }
    }
L_001e4608:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e460c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e4610:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e4614:;
    {
        goto L_001e44c4;
    }
L_001e4618:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e461c:;
    {
        cpu->r[14] = 0x001e4620u; fn_001e030c(cpu);
    }
L_001e4620:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e4624:;
    {
        cpu->r[14] = 0x001e4628u; fn_001ebcfc(cpu);
    }
L_001e4628:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x4cu);
    }
L_001e462c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e4630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e467c;
        }
    }
L_001e4634:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e4638:;
    {
        cpu->r[14] = 0x001e463cu; fn_001ebcf8(cpu);
    }
L_001e463c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4640:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e4644:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e458c;
        }
    }
L_001e4648:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e464c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4650:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001e4654:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4670;
        }
    }
L_001e4658:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e465c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e4660:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4664:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e4668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4658;
        }
    }
L_001e466c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e4674:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e4678:;
    {
        goto L_001e4558;
    }
L_001e467c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e4680:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e4684:;
    {
        wr8(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001e4688:;
    {
        cpu->r[14] = 0x001e468cu; fn_00097dd0(cpu);
    }
L_001e468c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x50u);
    }
L_001e4690:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_001e4694:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_001e4698:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001e469c:;
    {
        wr32(cpu->r[10] + + 0x50u, cpu->r[0]);
    }
L_001e46a0:;
    {
        goto L_001e4634;
    }
L_001e46a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e46a8:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e46ac:;
    {
        wr8(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001e46b0:;
    {
        cpu->r[14] = 0x001e46b4u; fn_00097dd0(cpu);
    }
L_001e46b4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x50u);
    }
L_001e46b8:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_001e46bc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_001e46c0:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001e46c4:;
    {
        wr32(cpu->r[10] + + 0x50u, cpu->r[0]);
    }
L_001e46c8:;
    {
        goto L_001e45d0;
    }
}

/* _ZNSt6vectorIPhN3vox10SAllocatorIS0_LNS1_10VoxMemHintE0EEEEaSERKS5_ @ 001e46cc (arm) */
void fn_001e46cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e46cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001e46d0:;
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
L_001e46d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e46d8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e46dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4724;
        }
    }
L_001e46e0:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[8] = v1;
    }
L_001e46e4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001e46e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e46ec:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001e46f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001e46f4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001e46f8:;
    {
        sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_001e46fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e4758;
        }
    }
L_001e4700:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e4704:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001e4708:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001e470c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001e4710:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e472c;
        }
    }
L_001e4714:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e4718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e479c;
        }
    }
L_001e471c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001e4720:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e4724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4728:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e472cu)) return;
    }
L_001e472c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001e4730:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001e4734:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e47b8;
        }
    }
L_001e4738:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_001e473c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e471c;
        }
    }
L_001e4740:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e4744:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001e4748:;
    {
        cpu->r[14] = 0x001e474cu; imp_memcpy(cpu); /* memcpy */
    }
L_001e474c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e4750:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001e4754:;
    {
        goto L_001e4720;
    }
L_001e4758:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001e475c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e4760:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4764:;
    {
        cpu->r[14] = 0x001e4768u; fn_00097dd0(cpu);
    }
L_001e4768:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001e476c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e4770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4780;
        }
    }
L_001e4774:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e4778:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e477c:;
    {
        cpu->r[14] = 0x001e4780u; imp_memcpy(cpu); /* memcpy */
    }
L_001e4780:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e4784:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001e4788:;
    {
        cpu->r[14] = 0x001e478cu; fn_00097dc8(cpu);
    }
L_001e478c:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001e4790:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001e4794:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e4798:;
    {
        goto L_001e4724;
    }
L_001e479c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e47a0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e47a4:;
    {
        cpu->r[14] = 0x001e47a8u; imp_memmove(cpu); /* memmove */
    }
L_001e47a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e47ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001e47b0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e47b4:;
    {
        goto L_001e4724;
    }
L_001e47b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e47bc:;
    {
        cpu->r[14] = 0x001e47c0u; imp_memmove(cpu); /* memmove */
    }
L_001e47c0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e47c4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001e47c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001e47cc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_001e47d0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_001e47d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001e47d8:;
    {
        goto L_001e4738;
    }
}

/* _ZN3vox19PriorityBankManager6UpdateEv @ 001e47dc (arm) */
void fn_001e47dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e47dc:;
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
L_001e47e0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e47e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e47e8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e47ec:;
    {
        cpu->r[14] = 0x001e47f0u; fn_001ebcfc(cpu);
    }
L_001e47f0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001e47f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e47f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e48b4;
        }
    }
L_001e47fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e4800:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001e4804:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e4808:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001e480c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e4810:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4814:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001e4818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4828;
        }
    }
L_001e481c:;
    {
        goto L_001e48a4;
    }
L_001e4820:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001e4824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e48a0;
        }
    }
L_001e4828:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e482c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e48c0;
        }
    }
L_001e4834:;
    {
        cpu->r[14] = 0x001e4838u; fn_001dfdb8(cpu);
    }
L_001e4838:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e483c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
        }
    }
L_001e4840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4820;
        }
    }
L_001e4844:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e4848:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001e484c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001e4850:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000008u;
        cpu->r[3] = rd32(cpu->r[12]);
        cpu->r[12] = wb_tmp;
    }
L_001e4854:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x10u);
    }
L_001e4858:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_001e485c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_001e4860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4890;
        }
    }
L_001e4864:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_001e4868:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001e486c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e4870:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e4890;
        }
    }
L_001e4874:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e4878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e487c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001e4880:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e4884:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e4888:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e488c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4878;
        }
    }
L_001e4890:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001e4894:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[7]);
    }
L_001e4898:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001e489c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4828;
        }
    }
L_001e48a0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001e48a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001e48a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e48ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001e48b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e4804;
        }
    }
L_001e48b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e48b8:;
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
L_001e48bc:;
    {
        return fn_001ebcf8(cpu);
    }
L_001e48c0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e48c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001e48c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001e48cc:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x10u);
    }
L_001e48d0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_001e48d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4890;
        }
    }
L_001e48d8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_001e48dc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001e48e0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e48e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e4890;
        }
    }
L_001e48e8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e48ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e48f0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001e48f4:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e48f8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e48fc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e4900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e48ec;
        }
    }
L_001e4904:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001e4908:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[7]);
    }
L_001e490c:;
    {
        goto L_001e4898;
    }
}

/* _ZN3vox18HandlableContainer6DetachEx @ 001e4910 (arm) */
void fn_001e4910(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4910:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e4914:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e4918:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e491c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e4920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4984;
        }
    }
L_001e4924:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4928:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x14u);
    }
L_001e492c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001e4930:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e495c;
        }
    }
L_001e4934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4950;
        }
    }
L_001e4938:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e493c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e4940:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e4944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4970;
        }
    }
L_001e4948:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_001e494c:;
    {
        goto L_001e4928;
    }
L_001e4950:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x10u);
    }
L_001e4954:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e4958:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001e4938;
        }
    }
L_001e495c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0xcu);
    }
L_001e4960:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001e4964:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e4968:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e496c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4948;
        }
    }
L_001e4970:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_001e4974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e49d4;
        }
    }
L_001e4978:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x14u);
    }
L_001e497c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001e4980:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e49c0;
        }
    }
L_001e4984:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001e4988:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_001e498c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e49d4;
        }
    }
L_001e4990:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001e4994:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e4998:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001e499c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001e49a0:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x18u);
    }
L_001e49a4:;
    {
        cpu->r[14] = 0x001e49a8u; fn_001de780(cpu);
    }
L_001e49a8:;
    {
        cpu->r[14] = 0x001e49acu; fn_00097dc8(cpu);
    }
L_001e49ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e49b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e49b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001e49b8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e49bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e49c0u)) return;
    }
L_001e49c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4988;
        }
    }
L_001e49c4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_001e49c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e49cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e4988;
        }
    }
L_001e49d0:;
    {
        goto L_001e4984;
    }
L_001e49d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e49d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e49dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e49e0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal19DetachEmitterObjectEx @ 001e49e0 (arm) */
void fn_001e49e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e49e0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e49e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e49e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_001e49ec:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e49f0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e49f4:;
    {
        cpu->r[14] = 0x001e49f8u; fn_001e4910(cpu);
    }
L_001e49f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e49fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4a08;
        }
    }
L_001e4a00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4a04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4a08u)) return;
    }
L_001e4a08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001e4a0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4a10:;
    {
        cpu->r[14] = 0x001e4a14u; fn_001ebd2c(cpu);
    }
L_001e4a14:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e4a18:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e4a1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_001e4a20:;
    {
        cpu->r[14] = 0x001e4a24u; fn_001e4910(cpu);
    }
L_001e4a24:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e4a28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4a2c:;
    {
        cpu->r[14] = 0x001e4a30u; fn_001ebd00(cpu);
    }
L_001e4a30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4a34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4a38u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal17ReleaseDatasourceEPNS_7DataObjE @ 001e4a38 (arm) */
void fn_001e4a38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4a38:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e4a3c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e4a40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e4a44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4a48u)) return;
        }
    }
L_001e4a48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001e4a4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_001e4a50:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e4a54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000144u, 0, 0);
    }
L_001e4a58:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001e4a5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e4a60:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_001e4a64:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001e4a68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001e4a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4ac0;
        }
    }
L_001e4a70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e4a74:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001e4a78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4a70;
        }
    }
L_001e4a7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e4a80:;
    {
        cpu->r[14] = 0x001e4a84u; fn_001ebd2c(cpu);
    }
L_001e4a84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x44u);
    }
L_001e4a88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4a8c:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e4a90:;
    {
        cpu->r[14] = 0x001e4a94u; fn_001e49e0(cpu);
    }
L_001e4a94:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e4a98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e4a9c:;
    {
        cpu->r[14] = 0x001e4aa0u; fn_001ebd00(cpu);
    }
L_001e4aa0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001e4aa4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e4aa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4aac:;
    {
        cpu->r[14] = 0x001e4ab4u;
    }
L_001e4ab0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4ab4u)) return;
    }
L_001e4ab4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001e4ab8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001e4abc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4a70;
        }
    }
L_001e4ac0:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x3cu);
    }
L_001e4ac4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001e4ac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4ae4;
        }
    }
L_001e4acc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e4ad0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4ad4:;
    {
        cpu->r[14] = 0x001e4adcu;
    }
L_001e4ad8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4adcu)) return;
    }
L_001e4adc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4ae0:;
    {
        cpu->r[14] = 0x001e4ae4u; fn_00097dc8(cpu);
    }
L_001e4ae4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x38u);
    }
L_001e4ae8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001e4aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4b00;
        }
    }
L_001e4af0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4af4:;
    {
        cpu->r[14] = 0x001e4af8u; fn_001de710(cpu);
    }
L_001e4af8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4afc:;
    {
        cpu->r[14] = 0x001e4b00u; fn_00097dc8(cpu);
    }
L_001e4b00:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e4b04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4b08:;
    {
        cpu->r[14] = 0x001e4b10u;
    }
L_001e4b0c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4b10u)) return;
    }
L_001e4b10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4b14:;
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
L_001e4b18:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21_ReleaseAllDatasourceEv @ 001e4b1c (arm) */
void fn_001e4b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4b1c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e4b20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e4b24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001e4b28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e4b2c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4b30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e4b34:;
    {
        cpu->r[14] = 0x001e4b38u; fn_001de2b4(cpu);
    }
L_001e4b38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4b3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e4b40:;
    {
        cpu->r[14] = 0x001e4b44u; fn_001de2c4(cpu);
    }
L_001e4b44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e4b48:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e4b4c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e4b50:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001e4b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4b94;
        }
    }
L_001e4b58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4b5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e4b60:;
    {
        cpu->r[14] = 0x001e4b64u; fn_001e4a38(cpu);
    }
L_001e4b64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4b68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e4b6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4b78;
        }
    }
L_001e4b70:;
    {
        goto L_001e4c70;
    }
L_001e4b74:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e4b78:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e4b7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4b80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4b74;
        }
    }
L_001e4b84:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e4b88:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e4b8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001e4b90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4b58;
        }
    }
L_001e4b94:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001e4b98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e4b9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e4ba0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4bc8;
        }
    }
L_001e4ba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4bac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e4bb0:;
    {
        cpu->r[14] = 0x001e4bb4u; fn_001deec0(cpu);
    }
L_001e4bb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e4bb8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[4]);
    }
L_001e4bbc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[4]);
    }
L_001e4bc0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e4bc4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e4bc8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e4bcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e4bd0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4bd4:;
    {
        cpu->r[14] = 0x001e4bd8u; fn_001de2b4(cpu);
    }
L_001e4bd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e4bdc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e4be0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e4be4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e4be8:;
    {
        cpu->r[14] = 0x001e4becu; fn_001de2c4(cpu);
    }
L_001e4bec:;
    {
        cpu->r[6] = rd32(cpu->r[13]);
    }
L_001e4bf0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e4bf4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001e4bf8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001e4bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4c38;
        }
    }
L_001e4c00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4c04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e4c08:;
    {
        cpu->r[14] = 0x001e4c0cu; fn_001e4a38(cpu);
    }
L_001e4c0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4c10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e4c14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4c20;
        }
    }
L_001e4c18:;
    {
        goto L_001e4ca8;
    }
L_001e4c1c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e4c20:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e4c24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4c28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4c1c;
        }
    }
L_001e4c2c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e4c30:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001e4c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4c00;
        }
    }
L_001e4c38:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e4c3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e4c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4c68;
        }
    }
L_001e4c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4c4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e4c50:;
    {
        cpu->r[14] = 0x001e4c54u; fn_001deec0(cpu);
    }
L_001e4c54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e4c58:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[4]);
    }
L_001e4c5c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[4]);
    }
L_001e4c60:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e4c64:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e4c68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e4c6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4c70u)) return;
    }
L_001e4c70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e4c74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4c78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001e4c7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4c98;
        }
    }
L_001e4c80:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e4c84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e4c88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4c8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e4c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4c80;
        }
    }
L_001e4c94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4c98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e4c9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e4ca0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e4ca4:;
    {
        goto L_001e4b8c;
    }
L_001e4ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e4cac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4cb0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e4cb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4cd0;
        }
    }
L_001e4cb8:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e4cbc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e4cc0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e4cc4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e4cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4cb8;
        }
    }
L_001e4ccc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e4cd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e4cd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e4cd8:;
    {
        goto L_001e4bf8;
    }
}

/* _ZN3vox17VoxEngineInternal11KillEmitterERNS_13EmitterHandleE @ 001e4cdc (arm) */
void fn_001e4cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4cdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e4ce0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e4ce4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e4ce8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e4cec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4cf0:;
    {
        cpu->r[14] = 0x001e4cf4u; fn_001ebd2c(cpu);
    }
L_001e4cf4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e4cf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4cfc:;
    {
        cpu->r[14] = 0x001e4d04u;
    }
L_001e4d00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d04u)) return;
    }
L_001e4d04:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e4d08:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e4d0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4d10:;
    {
        cpu->r[14] = 0x001e4d14u; fn_001e49e0(cpu);
    }
L_001e4d14:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e4d18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4d1c:;
    {
        cpu->r[14] = 0x001e4d20u; fn_001ebd00(cpu);
    }
L_001e4d20:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e4d24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d28u)) return;
        }
    }
L_001e4d28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4d2c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e4d30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e4d34:;
    {
        cpu->r[14] = 0x001e4d3cu;
    }
L_001e4d38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d3cu)) return;
    }
L_001e4d3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d40u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal16DetachDataObjectEx @ 001e4d40 (arm) */
void fn_001e4d40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4d40:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e4d44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e4d48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e4d4c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e4d50:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e4d54:;
    {
        cpu->r[14] = 0x001e4d58u; fn_001e4910(cpu);
    }
L_001e4d58:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4d5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4d68;
        }
    }
L_001e4d60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4d64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d68u)) return;
    }
L_001e4d68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_001e4d6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4d70:;
    {
        cpu->r[14] = 0x001e4d74u; fn_001ebd2c(cpu);
    }
L_001e4d74:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e4d78:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001e4d7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e4d80:;
    {
        cpu->r[14] = 0x001e4d84u; fn_001e4910(cpu);
    }
L_001e4d84:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e4d88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4d8c:;
    {
        cpu->r[14] = 0x001e4d90u; fn_001ebd00(cpu);
    }
L_001e4d90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4d94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4d98u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal13UpdateSourcesEv @ 001e4d98 (arm) */
void fn_001e4d98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4d98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x554u);
    }
L_001e4d9c:;
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
L_001e4da0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4da4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e4da8:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4dacu)) return;
        }
    }
L_001e4dac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e4db0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001e4db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4db8:;
    {
        cpu->r[14] = 0x001e4dbcu; fn_001ebd2c(cpu);
    }
L_001e4dbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4dc0:;
    {
        cpu->r[14] = 0x001e4dc4u; fn_001ebd2c(cpu);
    }
L_001e4dc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e4dc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e4dcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4dd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e4e10;
        }
    }
L_001e4dd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e4dd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e4ddc:;
    {
        cpu->r[14] = 0x001e4de0u; fn_001e4048(cpu);
    }
L_001e4de0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e4de4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_001e4de8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e4dec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4e10;
        }
    }
L_001e4df0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e4df4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001e4df8:;
    {
        cpu->r[14] = 0x001e4dfcu; fn_001deec0(cpu);
    }
L_001e4dfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e4e00:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[7]);
    }
L_001e4e04:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[7]);
    }
L_001e4e08:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_001e4e0c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001e4e10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e4e14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e4e18:;
    {
        cpu->r[14] = 0x001e4e1cu; fn_001ebd00(cpu);
    }
L_001e4e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4e20:;
    {
        cpu->r[14] = 0x001e4e24u; fn_001ebd00(cpu);
    }
L_001e4e24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4e28:;
    {
        cpu->r[14] = 0x001e4e2cu; fn_001ebcfc(cpu);
    }
L_001e4e2c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e4e30:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4cu;
        cpu->r[3] = rd32(cpu->r[2] + + 0x4cu);
        cpu->r[2] = wb_tmp;
    }
L_001e4e34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e4e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4f00;
        }
    }
L_001e4e3c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001e4e40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e4e44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001e4e48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e4e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4e40;
        }
    }
L_001e4e50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4e54:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e4e58:;
    {
        cpu->r[14] = 0x001e4e5cu; fn_001ebcf8(cpu);
    }
L_001e4e5c:;
    {
        goto L_001e4e8c;
    }
L_001e4e60:;
    {
        uint64_t v = rd64(cpu->r[10] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e4e64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4e68:;
    {
        cpu->r[14] = 0x001e4e6cu; fn_001e4d40(cpu);
    }
L_001e4e6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4e70:;
    {
        cpu->r[14] = 0x001e4e74u; fn_001ebd00(cpu);
    }
L_001e4e74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001e4e78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e4e7c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e4e80:;
    {
        cpu->r[14] = 0x001e4e84u; fn_001e4a38(cpu);
    }
L_001e4e84:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001e4e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e4efc;
        }
    }
L_001e4e8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4e90:;
    {
        cpu->r[14] = 0x001e4e94u; fn_001ebd2c(cpu);
    }
L_001e4e94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4e98:;
    {
        cpu->r[14] = 0x001e4e9cu; fn_001ebcfc(cpu);
    }
L_001e4e9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001e4ea0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e4ea4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[10] = v2;
    }
L_001e4ea8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001e4eac:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001e4eb0:;
    {
        cpu->r[14] = 0x001e4eb4u; fn_00097dc8(cpu);
    }
L_001e4eb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4eb8:;
    {
        cpu->r[14] = 0x001e4ebcu; fn_001ebcf8(cpu);
    }
L_001e4ebc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e4ec0:;
    {
        cpu->r[14] = 0x001e4ec4u; fn_001e0290(cpu);
    }
L_001e4ec4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e4ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4e60;
        }
    }
L_001e4ed0:;
    {
        wr8(cpu->r[10] + + 0x4cu, cpu->r[3]);
    }
L_001e4ed4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001e4ed8:;
    {
        cpu->r[14] = 0x001e4edcu; fn_001ebd00(cpu);
    }
L_001e4edc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4ee0:;
    {
        cpu->r[14] = 0x001e4ee4u; fn_001ebdc8(cpu);
    }
L_001e4ee4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e4ee8:;
    {
        cpu->r[14] = 0x001e4eecu; fn_001e15d8(cpu);
    }
L_001e4eec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e4ef0:;
    {
        cpu->r[14] = 0x001e4ef4u; fn_001ebd9c(cpu);
    }
L_001e4ef4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001e4ef8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4e8c;
        }
    }
L_001e4efc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e4f00u)) return;
    }
L_001e4f00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e4f04:;
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
L_001e4f08:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* sub_001e4f0c @ 001e4f0c (arm) */
void fn_001e4f0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e4f0c:;
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
L_001e4f10:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001e4f14:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_001e4f18:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001e4f1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e4f20:;
    {
        cpu->r[3] = 0x00006666u;
    }
L_001e4f24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0666u << 16);
    }
L_001e4f28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e4f2c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_001e4f30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e4f34:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e4f38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001e4f3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e4f40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e4f44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e4f48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e4f4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001e4f50:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[1], 0, 0);
        }
    }
L_001e4f54:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001e4f58:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001e4f5c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e4f9c;
        }
    }
L_001e4f60:;
    {
        cpu->r[3] = (~0x0000000fu);
    }
L_001e4f64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e4f68:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e4f6c:;
    {
        cpu->r[14] = 0x001e4f70u; fn_00097b58(cpu);
    }
L_001e4f70:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e4f74:;
    {
        cpu->r[3] = 0x0000cccdu;
    }
L_001e4f78:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001e4f7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xccccu << 16);
    }
L_001e4f80:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[9]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001e4f84:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 5u, &shc); cpu->r[9] = v;
    }
L_001e4f88:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001e4f8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e4f90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_001e4f94:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_001e4f98:;
    {
        goto L_001e4fbc;
    }
L_001e4f9c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_001e4fa0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e4f60;
        }
    }
L_001e4fa4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001e4fa8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
        }
    }
L_001e4fac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000028u;
        }
    }
L_001e4fb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[9];
        }
    }
L_001e4fb4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 2, 3u, &shc); cpu->r[3] = v;
        }
    }
L_001e4fb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4f64;
        }
    }
L_001e4fbc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001e4fc0:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e4fc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001e4fc8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 4u, &shc), 0, 0);
    }
L_001e4fcc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 8u, &shc), 0, 0);
    }
L_001e4fd0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 16u, &shc), 0, 0);
    }
L_001e4fd4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001e4fd8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e4fdc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_001e4fe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e5010;
        }
    }
L_001e4fe4:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001e4fe8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e4fec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001e4ff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001e4ff4:;
    {
        cpu->r[14] = 0x001e4ff8u; fn_001e29b0(cpu);
    }
L_001e4ff8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001e4ffc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e5000:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e4fec;
        }
    }
L_001e5004:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001e5008:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e500c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_001e5010:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e5014:;
    {
        cpu->r[14] = 0x001e5018u; fn_001e29b0(cpu);
    }
L_001e5018:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e501c:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001e5020:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001e5024:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001e5028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5048;
        }
    }
L_001e502c:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x28u;
        cpu->r[3] = rd32(cpu->r[6] + - 0x28u);
        cpu->r[6] = wb_tmp;
    }
L_001e5030:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5034:;
    {
        cpu->r[14] = 0x001e503cu;
    }
L_001e5038:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e503cu)) return;
    }
L_001e503c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001e5040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e502c;
        }
    }
L_001e5044:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e5048:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e504c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e5050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5084;
        }
    }
L_001e5054:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001e5058:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e505c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001e5060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e5064:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e5068:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e506c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e5070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001e5074:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[1] = v;
    }
L_001e5078:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001e507c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e5098;
        }
    }
L_001e5080:;
    {
        cpu->r[14] = 0x001e5084u; fn_002082a8(cpu);
    }
L_001e5084:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[9]);
    }
L_001e5088:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_001e508c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001e5090:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e5094:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5098u)) return;
    }
L_001e5098:;
    {
        cpu->r[14] = 0x001e509cu; fn_0018ba20(cpu);
    }
L_001e509c:;
    {
        goto L_001e5084;
    }
}

/* _ZN3vox17VoxEngineInternal26DecreaseDataObjectRefCountERNS_10DataHandleE @ 001e50a0 (arm) */
void fn_001e50a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e50a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e50a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e50a8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e50ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e50b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e50b4:;
    {
        cpu->r[14] = 0x001e50b8u; fn_001ebdc8(cpu);
    }
L_001e50b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e50bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e50c0:;
    {
        cpu->r[14] = 0x001e50c4u; fn_001e2e90(cpu);
    }
L_001e50c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e50c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e50f8;
        }
    }
L_001e50cc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001e50d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_001e50d4:;
    {
        cpu->r[14] = 0x001e50dcu;
    }
L_001e50d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e50dcu)) return;
    }
L_001e50dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e50e0:;
    {
        cpu->r[14] = 0x001e50e4u; fn_001ebcfc(cpu);
    }
L_001e50e4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x4cu);
    }
L_001e50e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e50ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5104;
        }
    }
L_001e50f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e50f4:;
    {
        cpu->r[14] = 0x001e50f8u; fn_001ebcf8(cpu);
    }
L_001e50f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e50fc:;
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
L_001e5100:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e5104:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e5108:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e510c:;
    {
        wr8(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001e5110:;
    {
        cpu->r[14] = 0x001e5114u; fn_00097dd0(cpu);
    }
L_001e5114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001e5118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001e511c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[5]);
    }
L_001e5120:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001e5124:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001e5128:;
    {
        goto L_001e50f0;
    }
}

/* _ZN3vox10DataHandleaSERKS0_ @ 001e512c (arm) */
void fn_001e512c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e512c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e5130:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e5134:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e5138:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e513c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e51ac;
        }
    }
L_001e5140:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e5144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e5148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5160;
        }
    }
L_001e514c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001e5150:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5160;
        }
    }
L_001e5158:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e515c:;
    {
        cpu->r[14] = 0x001e5160u; fn_001e50a0(cpu);
    }
L_001e5160:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001e5164:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001e5168:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x8u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001e516c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e5170:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e5174:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001e5178:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_001e517c:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e5180:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001e5184:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001e5188:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001e518c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e5190:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001e5194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e51ac;
        }
    }
L_001e5198:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001e519c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e51a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e51ac;
        }
    }
L_001e51a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e51a8:;
    {
        cpu->r[14] = 0x001e51acu; fn_001e34dc(cpu);
    }
L_001e51ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e51b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e51b4u)) return;
    }
}

/* _ZN3vox10DataHandleD1Ev @ 001e51b4 (arm) */
void fn_001e51b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e51b4:;
    {
        cpu->r[3] = rd32(0x001e51bcu + + 0x40u);
    }
L_001e51b8:;
    {
        cpu->r[2] = rd32(0x001e51c0u + + 0x40u);
    }
L_001e51bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e51c4u, cpu->r[3], 0, 0);
    }
L_001e51c0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e51c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e51c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e51cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e51d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e51d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e51d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001e51dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e51f4;
        }
    }
L_001e51e0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001e51e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e51e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e51f4;
        }
    }
L_001e51ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e51f0:;
    {
        cpu->r[14] = 0x001e51f4u; fn_001e50a0(cpu);
    }
L_001e51f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e51f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e51fcu)) return;
    }
}

/* _ZN3vox10DataHandleD0Ev @ 001e5204 (arm) */
void fn_001e5204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5204:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e5208:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e520c:;
    {
        cpu->r[14] = 0x001e5210u; fn_001e51b4(cpu);
    }
L_001e5210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e5214:;
    {
        cpu->r[14] = 0x001e5218u; fn_0018ba20(cpu);
    }
L_001e5218:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e521c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5220u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal17GetAllDataSourcesEPNS_10DataHandleEi @ 001e5220 (arm) */
void fn_001e5220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5220:;
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
L_001e5224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e5228:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_001e522c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e5230:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e5234:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e5238:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e523c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e5240:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001e5244:;
    {
        cpu->r[14] = 0x001e5248u; fn_001ebdc8(cpu);
    }
L_001e5248:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e524c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e5250:;
    {
        cpu->r[14] = 0x001e5254u; fn_001de2b4(cpu);
    }
L_001e5254:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e5258:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e525c:;
    {
        cpu->r[11] = rd32(0x001e5264u + + 0x214u);
    }
L_001e5260:;
    {
        cpu->r[14] = 0x001e5264u; fn_001de2c4(cpu);
    }
L_001e5264:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e5268:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e526c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e5270:;
    {
        cpu->r[10] = rd32(0x001e5278u + + 0x204u);
    }
L_001e5274:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001e5278:;
    {
        cpu->r[10] = add_flags(cpu, 0x001e5280u, cpu->r[10], 0, 0);
    }
L_001e527c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e5280:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e5284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5290;
        }
    }
L_001e5288:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e528c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e5318;
        }
    }
L_001e5290:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e5294:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_001e5298:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001e529c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001e52a0:;
    {
        cpu->r[14] = 0x001e52a4u; fn_001ebd9c(cpu);
    }
L_001e52a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e52a8:;
    {
        cpu->r[14] = 0x001e52acu; fn_001ebdc8(cpu);
    }
L_001e52ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e52b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001e52b4:;
    {
        cpu->r[11] = rd32(0x001e52bcu + + 0x1bcu);
    }
L_001e52b8:;
    {
        cpu->r[14] = 0x001e52bcu; fn_001de2b4(cpu);
    }
L_001e52bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e52c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e52c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001e52c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001e52cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e52d0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e52d4:;
    {
        cpu->r[14] = 0x001e52d8u; fn_001de2c4(cpu);
    }
L_001e52d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e52dc:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001e52e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e52e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001e52e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e52ec:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_001e52f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e52f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e52f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5304;
        }
    }
L_001e52fc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e5300:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e5394;
        }
    }
L_001e5304:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e5308:;
    {
        cpu->r[14] = 0x001e530cu; fn_001ebd9c(cpu);
    }
L_001e530c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e5310:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001e5314:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5318u)) return;
    }
L_001e5318:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e531c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5320:;
    {
        cpu->r[9] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_001e5324:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e5328:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e532c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e5330:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e5334:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e5338:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e533c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e5340:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e5344:;
    {
        cpu->r[14] = 0x001e5348u; fn_001e3520(cpu);
    }
L_001e5348:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e534c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e5350:;
    {
        cpu->r[14] = 0x001e5354u; fn_001e512c(cpu);
    }
L_001e5354:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5358:;
    {
        cpu->r[14] = 0x001e535cu; fn_001e51b4(cpu);
    }
L_001e535c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e5360:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5364:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5374;
        }
    }
L_001e536c:;
    {
        goto L_001e5444;
    }
L_001e5370:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e5374:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e5378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e537c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5370;
        }
    }
L_001e5380:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e5384:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e5388:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e538c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e5390:;
    {
        goto L_001e527c;
    }
L_001e5394:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e5398:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e539c:;
    {
        cpu->r[10] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001e53a0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e53a4:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e53a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e53ac:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001e53b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e53b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e53b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e53bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e53c0:;
    {
        cpu->r[14] = 0x001e53c4u; fn_001e3520(cpu);
    }
L_001e53c4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e53c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e53cc:;
    {
        cpu->r[14] = 0x001e53d0u; fn_001e512c(cpu);
    }
L_001e53d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e53d4:;
    {
        cpu->r[14] = 0x001e53d8u; fn_001e51b4(cpu);
    }
L_001e53d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e53dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e53e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e53e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e53f0;
        }
    }
L_001e53e8:;
    {
        goto L_001e5410;
    }
L_001e53ec:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e53f0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e53f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e53f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e53ec;
        }
    }
L_001e53fc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e5400:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001e5404:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e5408:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e540c:;
    {
        goto L_001e52f0;
    }
L_001e5410:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e5414:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e5418:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e541c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5438;
        }
    }
L_001e5420:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e5424:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e5428:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e542c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e5430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5420;
        }
    }
L_001e5434:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5438:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e543c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e5440:;
    {
        goto L_001e5400;
    }
L_001e5444:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e5448:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e544c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e5450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e546c;
        }
    }
L_001e5454:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e5458:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e545c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e5460:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e5464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5454;
        }
    }
L_001e5468:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e546c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e5470:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e5474:;
    {
        goto L_001e5384;
    }
}

/* _ZN3vox17VoxEngineInternal17GetAllDataSourcesERSt6vectorINS_10DataHandleESaIS2_EE @ 001e5480 (arm) */
void fn_001e5480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5480:;
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
L_001e5484:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e5488:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000070u, 1, 0);
    }
L_001e548c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001e5490:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e5494:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5498:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e549c:;
    {
        cpu->r[14] = 0x001e54a0u; fn_001ebdc8(cpu);
    }
L_001e54a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e54a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001e54a8:;
    {
        cpu->r[14] = 0x001e54acu; fn_001de2b4(cpu);
    }
L_001e54ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e54b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001e54b4:;
    {
        cpu->r[7] = rd32(0x001e54bcu + + 0x264u);
    }
L_001e54b8:;
    {
        cpu->r[14] = 0x001e54bcu; fn_001de2c4(cpu);
    }
L_001e54bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e54c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e54c4:;
    {
        cpu->r[7] = add_flags(cpu, 0x001e54ccu, cpu->r[7], 0, 0);
    }
L_001e54c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001e54cc:;
    {
        cpu->r[8] = rd32(0x001e54d4u + + 0x250u);
    }
L_001e54d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e54d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5568;
        }
    }
L_001e54d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e54dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e54e0:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001e54e4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e54e8:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e54ec:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e54f0:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e54f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e54f8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e54fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e5500:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e5504:;
    {
        cpu->r[14] = 0x001e5508u; fn_001e3520(cpu);
    }
L_001e5508:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e550c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e5510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5660;
        }
    }
L_001e5514:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e5518:;
    {
        cpu->r[14] = 0x001e551cu; fn_001e3648(cpu);
    }
L_001e551c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e5520:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e5524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e5528:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e552c:;
    {
        cpu->r[14] = 0x001e5530u; fn_001e51b4(cpu);
    }
L_001e5530:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e5534:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5538:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e553c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5548;
        }
    }
L_001e5540:;
    {
        goto L_001e5688;
    }
L_001e5544:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e5548:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e554c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e5550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5544;
        }
    }
L_001e5554:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e5558:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e555c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e5560:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e5564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e54d8;
        }
    }
L_001e5568:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e556c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_001e5570:;
    {
        cpu->r[14] = 0x001e5574u; fn_001ebd9c(cpu);
    }
L_001e5574:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001e5578:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e557c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e5580:;
    {
        cpu->r[14] = 0x001e5584u; fn_001ebdc8(cpu);
    }
L_001e5584:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001e5588:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e558c:;
    {
        cpu->r[8] = rd32(0x001e5594u + + 0x190u);
    }
L_001e5590:;
    {
        cpu->r[14] = 0x001e5594u; fn_001de2b4(cpu);
    }
L_001e5594:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_001e5598:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e559c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_001e55a0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e55a4:;
    {
        cpu->r[14] = 0x001e55a8u; fn_001de2c4(cpu);
    }
L_001e55a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_001e55ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e55b0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_001e55b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e55b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e55bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5650;
        }
    }
L_001e55c0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e55c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e55c8:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001e55cc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e55d0:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e55d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e55d8:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e55dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e55e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e55e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e55e8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e55ec:;
    {
        cpu->r[14] = 0x001e55f0u; fn_001e3520(cpu);
    }
L_001e55f0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e55f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e55f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e56c0;
        }
    }
L_001e55fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e5600:;
    {
        cpu->r[14] = 0x001e5604u; fn_001e3648(cpu);
    }
L_001e5604:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e5608:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e560c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e5610:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e5614:;
    {
        cpu->r[14] = 0x001e5618u; fn_001e51b4(cpu);
    }
L_001e5618:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e561c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5620:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5624:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5630;
        }
    }
L_001e5628:;
    {
        goto L_001e56e8;
    }
L_001e562c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e5630:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e5634:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e5638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e562c;
        }
    }
L_001e563c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e5640:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e5644:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e5648:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e564c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e55c0;
        }
    }
L_001e5650:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5654:;
    {
        cpu->r[14] = 0x001e5658u; fn_001ebd9c(cpu);
    }
L_001e5658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e565c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5660u)) return;
    }
L_001e5660:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e5664:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e5668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e566c:;
    {
        cpu->r[14] = 0x001e5670u; fn_001e39bc(cpu);
    }
L_001e5670:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e5674:;
    {
        cpu->r[14] = 0x001e5678u; fn_001e51b4(cpu);
    }
L_001e5678:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e567c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5680:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5548;
        }
    }
L_001e5688:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e568c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e5690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e5694:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e56b0;
        }
    }
L_001e5698:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e569c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e56a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e56a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e56a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5698;
        }
    }
L_001e56ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e56b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e56b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e56b8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e56bc:;
    {
        goto L_001e555c;
    }
L_001e56c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e56c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e56c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e56cc:;
    {
        cpu->r[14] = 0x001e56d0u; fn_001e39bc(cpu);
    }
L_001e56d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e56d4:;
    {
        cpu->r[14] = 0x001e56d8u; fn_001e51b4(cpu);
    }
L_001e56d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e56dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e56e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e56e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5630;
        }
    }
L_001e56e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e56ec:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e56f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e56f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5710;
        }
    }
L_001e56f8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e56fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e5700:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e5704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e5708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e56f8;
        }
    }
L_001e570c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e5710:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e5714:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e5718:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e571c:;
    {
        goto L_001e5644;
    }
}

/* _ZN3vox17VoxEngineInternal19LoadDataSourceAsyncEiPviS1_iNS_21VoxSourceLoadingFlagsE @ 001e5728 (arm) */
void fn_001e5728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5728:;
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
L_001e572c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5730:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001e5734:;
    {
        cpu->r[7] = rd32(0x001e573cu + + 0x244u);
    }
L_001e5738:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e573c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e5740:;
    {
        cpu->r[7] = add_flags(cpu, 0x001e5748u, cpu->r[7], 0, 0);
    }
L_001e5744:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e5748:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e57a0;
        }
    }
L_001e574c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x484u);
    }
L_001e5750:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e5754:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001e57a0;
        }
    }
L_001e5758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e575c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x404u);
    }
L_001e5760:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e57a0;
        }
    }
L_001e5768:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e576c:;
    {
        cpu->r[14] = 0x001e5770u; guest_call(cpu, cpu->r[2]);
    }
L_001e5770:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5774:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001e5778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e57a0;
        }
    }
L_001e577c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001e5780:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e5790;
        }
    }
L_001e5784:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x508u);
    }
L_001e5788:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001e578c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e57d0;
        }
    }
L_001e5790:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5794:;
    {
        cpu->r[14] = 0x001e5798u; fn_001de710(cpu);
    }
L_001e5798:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e579c:;
    {
        cpu->r[14] = 0x001e57a0u; fn_00097dc8(cpu);
    }
L_001e57a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e57a4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e57a8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e57ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e57b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e57b4:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e57b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e57bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e57c0:;
    {
        cpu->r[14] = 0x001e57c4u; fn_001e3520(cpu);
    }
L_001e57c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e57c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001e57cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e57d0u)) return;
    }
L_001e57d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001e57d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001e57d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001e57dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e57e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5790;
        }
    }
L_001e57e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e57e8:;
    {
        cpu->r[14] = 0x001e57ecu; guest_call(cpu, cpu->r[3]);
    }
L_001e57ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e57f0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001e57f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5790;
        }
    }
L_001e57f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e57fc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e5800:;
    {
        cpu->r[14] = 0x001e5804u; fn_001e3844(cpu);
    }
L_001e5804:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001e5808:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001e580c:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001e5810:;
    {
        cpu->r[0] = 0x00000060u;
    }
L_001e5814:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e5818:;
    {
        cpu->r[14] = 0x001e581cu; fn_00097dd0(cpu);
    }
L_001e581c:;
    {
        cpu->r[2] = rd32(0x001e5824u + + 0x160u);
    }
L_001e5820:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001e5824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e5828:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e582c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e5830:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_001e5834:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e5838:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0x7cu);
    }
L_001e583c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e5840:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e5844:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e5848:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e584c:;
    {
        cpu->r[14] = 0x001e5850u; fn_001ebe50(cpu);
    }
L_001e5850:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_001e5854:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_001e5858:;
    {
        cpu->r[2] = rd32(0x001e5860u + + 0x128u);
    }
L_001e585c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_001e5860:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e5864:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5868:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001e586c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_001e5870:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e5874:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e5878:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[12]);
    }
L_001e587c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001e5880:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001e5884:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_001e5888:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e588c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001e5890:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_001e5894:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e5898:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[1]);
    }
L_001e589c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[12]);
    }
L_001e58a0:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001e58a4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_001e58a8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[6]);
    }
L_001e58ac:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[6]);
    }
L_001e58b0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[6]);
    }
L_001e58b4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001e58b8:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[6]);
    }
L_001e58bc:;
    {
        wr8(cpu->r[4] + + 0x4du, cpu->r[6]);
    }
L_001e58c0:;
    {
        cpu->r[14] = 0x001e58c4u; fn_001ebe50(cpu);
    }
L_001e58c4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x550u);
    }
L_001e58c8:;
    {
        cpu->r[12] = rd32(0x001e58d0u + + 0xbcu);
    }
L_001e58cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e58d0:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e58d4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001e58d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x550u);
    }
L_001e58dc:;
    {
        cpu->r[14] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001e58e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e58e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001e58e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e58ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e58f0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001e58f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e58f8:;
    {
        cpu->r[14] = 0x001e58fcu; fn_001e3520(cpu);
    }
L_001e58fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x550u);
    }
L_001e5900:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e5908:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_001e590c:;
    {
        wr32(cpu->r[5] + + 0x550u, cpu->r[3]);
    }
L_001e5910:;
    {
        cpu->r[14] = 0x001e5914u; fn_001ebd2c(cpu);
    }
L_001e5914:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e5918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e591c:;
    {
        cpu->r[14] = 0x001e5920u; fn_001e3ed4(cpu);
    }
L_001e5920:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5924:;
    {
        cpu->r[14] = 0x001e5928u; fn_001ebd00(cpu);
    }
L_001e5928:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e592c:;
    {
        cpu->r[14] = 0x001e5930u; fn_001ebcfc(cpu);
    }
L_001e5930:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e5934:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e5938:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e593c:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001e5940:;
    {
        cpu->r[14] = 0x001e5944u; fn_00097dd0(cpu);
    }
L_001e5944:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001e5948:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e594c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5950:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_001e5954:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e5958:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001e595c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001e5960:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001e5964:;
    {
        cpu->r[14] = 0x001e5968u; fn_001ebcf8(cpu);
    }
L_001e5968:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e596c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e5970:;
    {
        cpu->r[14] = 0x001e5974u; fn_001e3648(cpu);
    }
L_001e5974:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5978:;
    {
        cpu->r[14] = 0x001e597cu; fn_001e51b4(cpu);
    }
L_001e597c:;
    {
        goto L_001e57c4;
    }
}

/* _ZN3vox17VoxEngineInternal14LoadDataSourceEiPviS1_i @ 001e5990 (arm) */
void fn_001e5990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5990:;
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
L_001e5994:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e5998:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_001e599c:;
    {
        cpu->r[6] = rd32(0x001e59a4u + + 0x2c0u);
    }
L_001e59a0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001e59a4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e59a8:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e59b0u, cpu->r[6], 0, 0);
    }
L_001e59ac:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x80u);
    }
L_001e59b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e5a04;
        }
    }
L_001e59b4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x484u);
    }
L_001e59b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e59bc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001e5a04;
        }
    }
L_001e59c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e59c4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x404u);
    }
L_001e59c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e59cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5a04;
        }
    }
L_001e59d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e59d4:;
    {
        cpu->r[14] = 0x001e59d8u; guest_call(cpu, cpu->r[2]);
    }
L_001e59d8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e59dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5a04;
        }
    }
L_001e59e0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e59e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e59f4;
        }
    }
L_001e59e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x508u);
    }
L_001e59ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001e59f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e5a34;
        }
    }
L_001e59f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e59f8:;
    {
        cpu->r[14] = 0x001e59fcu; fn_001de710(cpu);
    }
L_001e59fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5a00:;
    {
        cpu->r[14] = 0x001e5a04u; fn_00097dc8(cpu);
    }
L_001e5a04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5a08:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e5a0c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e5a10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e5a14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e5a18:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e5a1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e5a20:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e5a24:;
    {
        cpu->r[14] = 0x001e5a28u; fn_001e3520(cpu);
    }
L_001e5a28:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5a2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001e5a30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5a34u)) return;
    }
L_001e5a34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000120u, 0, 0);
    }
L_001e5a38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001e5a3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001e5a40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e5a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e59f4;
        }
    }
L_001e5a48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_001e5a4c:;
    {
        cpu->r[14] = 0x001e5a50u; guest_call(cpu, cpu->r[3]);
    }
L_001e5a50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5a54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e59f4;
        }
    }
L_001e5a58:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e5a5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5a60:;
    {
        cpu->r[14] = 0x001e5a68u;
    }
L_001e5a64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5a68u)) return;
    }
L_001e5a68:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5c38;
        }
    }
L_001e5a70:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5a74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5a78:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e5a7c:;
    {
        cpu->r[14] = 0x001e5a84u;
    }
L_001e5a80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5a84u)) return;
    }
L_001e5a84:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5c24;
        }
    }
L_001e5a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001e5a90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e5a94:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001e5a98:;
    {
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
L_001e5a9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5aa0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e5aa4:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e5aa8:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001e5aac:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5ab0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5ab4:;
    {
        cpu->r[14] = 0x001e5abcu;
    }
L_001e5ab8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5abcu)) return;
    }
L_001e5abc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e5ac0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e5c24;
        }
    }
L_001e5ac4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e5ac8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001e5acc:;
    {
        cpu->r[14] = 0x001e5ad0u; fn_001e3844(cpu);
    }
L_001e5ad0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e5ad4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e5ad8:;
    {
        cpu->r[0] = 0x00000060u;
    }
L_001e5adc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e5ae0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001e5ae4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e5ae8:;
    {
        cpu->r[14] = 0x001e5aecu; fn_00097dd0(cpu);
    }
L_001e5aec:;
    {
        cpu->r[1] = rd32(0x001e5af4u + + 0x174u);
    }
L_001e5af0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e5af4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e5af8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e5afc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e5b00:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e5b04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e5b08:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e5b0c:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_001e5b10:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[11]);
    }
L_001e5b14:;
    {
        cpu->r[14] = 0x001e5b18u; fn_001ebe50(cpu);
    }
L_001e5b18:;
    {
        cpu->r[3] = rd32(0x001e5b20u + + 0x14cu);
    }
L_001e5b1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_001e5b20:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001e5b24:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[11]);
    }
L_001e5b28:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001e5b2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001e5b30:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[2]);
    }
L_001e5b34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001e5b38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e5b3c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001e5b40:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[12]);
    }
L_001e5b44:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001e5b48:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5b4c:;
    {
        uint32_t base = cpu->r[12];
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
L_001e5b50:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[14]);
    }
L_001e5b54:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001e5b58:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[11]);
    }
L_001e5b5c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[12]);
    }
L_001e5b60:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[7]);
    }
L_001e5b64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e5b68:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[14]);
    }
L_001e5b6c:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[8]);
    }
L_001e5b70:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e5b74:;
    {
        wr8(cpu->r[5] + + 0x4cu, cpu->r[11]);
    }
L_001e5b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e5b7c:;
    {
        wr8(cpu->r[5] + + 0x4du, cpu->r[11]);
    }
L_001e5b80:;
    {
        cpu->r[14] = 0x001e5b84u; fn_001ebe50(cpu);
    }
L_001e5b84:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e5b88:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e5b8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5b90:;
    {
        cpu->r[14] = 0x001e5b98u;
    }
L_001e5b94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5b98u)) return;
    }
L_001e5b98:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_001e5b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5c38;
        }
    }
L_001e5ba0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e5ba4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e5ba8:;
    {
        cpu->r[12] = rd32(0x001e5bb0u + + 0xc0u);
    }
L_001e5bac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5bb0:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e5bb4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_001e5bb8:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[1]);
    }
L_001e5bbc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e5bc0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001e5bc4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e5bc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001e5bcc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e5bd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e5bd4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e5bd8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e5bdc:;
    {
        cpu->r[14] = 0x001e5be0u; fn_001e3520(cpu);
    }
L_001e5be0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e5be4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5be8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e5bec:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_001e5bf0:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[3]);
    }
L_001e5bf4:;
    {
        cpu->r[14] = 0x001e5bf8u; fn_001ebd2c(cpu);
    }
L_001e5bf8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e5bfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e5c00:;
    {
        cpu->r[14] = 0x001e5c04u; fn_001e3ed4(cpu);
    }
L_001e5c04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5c08:;
    {
        cpu->r[14] = 0x001e5c0cu; fn_001ebd00(cpu);
    }
L_001e5c0c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5c10:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e5c14:;
    {
        cpu->r[14] = 0x001e5c18u; fn_001e3648(cpu);
    }
L_001e5c18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5c1c:;
    {
        cpu->r[14] = 0x001e5c20u; fn_001e51b4(cpu);
    }
L_001e5c20:;
    {
        goto L_001e5a28;
    }
L_001e5c24:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e5c28:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e5c2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5c30:;
    {
        cpu->r[14] = 0x001e5c38u;
    }
L_001e5c34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5c38u)) return;
    }
L_001e5c38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5c3c:;
    {
        cpu->r[14] = 0x001e5c40u; fn_001de710(cpu);
    }
L_001e5c40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5c44:;
    {
        cpu->r[14] = 0x001e5c48u; fn_00097dc8(cpu);
    }
L_001e5c48:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5c4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5c50:;
    {
        cpu->r[14] = 0x001e5c58u;
    }
L_001e5c54:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5c58u)) return;
    }
L_001e5c58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5c5c:;
    {
        cpu->r[14] = 0x001e5c60u; fn_00097dc8(cpu);
    }
L_001e5c60:;
    {
        goto L_001e5a04;
    }
}

/* _ZN3vox17VoxEngineInternal24ConvertToRamBufferSourceERNS_10DataHandleE @ 001e5c74 (arm) */
void fn_001e5c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5c74:;
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
L_001e5c78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_001e5c7c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e5c80:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e5c84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_001e5c88:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001e5c8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5c90:;
    {
        cpu->r[6] = rd32(0x001e5c98u + + 0x254u);
    }
L_001e5c94:;
    {
        cpu->r[14] = 0x001e5c98u; fn_001ebdc8(cpu);
    }
L_001e5c98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5c9c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e5ca0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e5ca8u, cpu->r[6], 0, 0);
    }
L_001e5ca4:;
    {
        cpu->r[14] = 0x001e5ca8u; fn_001e2e90(cpu);
    }
L_001e5ca8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5cac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5ec0;
        }
    }
L_001e5cb0:;
    {
        cpu->r[2] = rd32(0x001e5cb8u + + 0x238u);
    }
L_001e5cb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e5cb8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_001e5cbc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001e5cc0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_001e5cc4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e5cc8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e5ccc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001e5cd0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001e5cd4:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_001e5cd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e5cdc:;
    {
        wr64(cpu->r[13] + + 0x50u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001e5ce0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001e5ce4:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_001e5ce8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_001e5cec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5d04;
        }
    }
L_001e5cf0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x38u);
    }
L_001e5cf4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001e5cf8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001e5cfc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
        }
    }
L_001e5d00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e5d30;
        }
    }
L_001e5d04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5d08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e5d0c:;
    {
        cpu->r[14] = 0x001e5d10u; fn_001ebd9c(cpu);
    }
L_001e5d10:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5d14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e5d18:;
    {
        cpu->r[14] = 0x001e5d1cu; fn_001e3648(cpu);
    }
L_001e5d1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5d20:;
    {
        cpu->r[14] = 0x001e5d24u; fn_001e51b4(cpu);
    }
L_001e5d24:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5d28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_001e5d2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5d30u)) return;
    }
L_001e5d30:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5d34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5d38:;
    {
        cpu->r[14] = 0x001e5d40u;
    }
L_001e5d3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5d40u)) return;
    }
L_001e5d40:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5d04;
        }
    }
L_001e5d48:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5d50:;
    {
        cpu->r[14] = 0x001e5d58u;
    }
L_001e5d54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5d58u)) return;
    }
L_001e5d58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5d5c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001e5d60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e5e58;
        }
    }
L_001e5d64:;
    {
        cpu->r[14] = 0x001e5d68u; fn_00097dd4(cpu);
    }
L_001e5d68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5d6c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001e5d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e5e9c;
        }
    }
L_001e5d74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e5d78:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e5d7c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5d80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5d84:;
    {
        cpu->r[14] = 0x001e5d8cu;
    }
L_001e5d88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5d8cu)) return;
    }
L_001e5d8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e5d90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e5d94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5d98:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001e5d9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e5da0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5da4:;
    {
        cpu->r[14] = 0x001e5dacu;
    }
L_001e5da8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5dacu)) return;
    }
L_001e5dac:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e5db0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5db4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5db8:;
    {
        cpu->r[14] = 0x001e5dc0u;
    }
L_001e5dbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5dc0u)) return;
    }
L_001e5dc0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5dc4:;
    {
        cpu->r[14] = 0x001e5dc8u; fn_001ebd9c(cpu);
    }
L_001e5dc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e5dcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e5dd0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e5dd4:;
    {
        wr8(cpu->r[13] + + 0x7du, cpu->r[4]);
    }
L_001e5dd8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e5ddc:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[1]);
    }
L_001e5de0:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[0]);
    }
L_001e5de4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5de8:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001e5dec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001e5df0:;
    {
        cpu->r[14] = 0x001e5df8u;
    }
L_001e5df4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5df8u)) return;
    }
L_001e5df8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001e5dfc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001e5e00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5e04:;
    {
        cpu->r[14] = 0x001e5e0cu;
    }
L_001e5e08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5e0cu)) return;
    }
L_001e5e0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e5e10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e5e14:;
    {
        cpu->r[14] = 0x001e5e18u; fn_001e0268(cpu);
    }
L_001e5e18:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e5e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e5e20:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e5e24:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e5e28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001e5e2c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001e5e30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5e34:;
    {
        cpu->r[14] = 0x001e5e38u; fn_001e5990(cpu);
    }
L_001e5e38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5e3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5e40:;
    {
        cpu->r[14] = 0x001e5e44u; fn_001e512c(cpu);
    }
L_001e5e44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e5e48:;
    {
        cpu->r[14] = 0x001e5e4cu; fn_001e51b4(cpu);
    }
L_001e5e4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e5e50:;
    {
        cpu->r[14] = 0x001e5e54u; fn_00097dc8(cpu);
    }
L_001e5e54:;
    {
        goto L_001e5d10;
    }
L_001e5e58:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5e5c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e5e60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5e64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e5e68:;
    {
        cpu->r[14] = 0x001e5e70u;
    }
L_001e5e6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5e70u)) return;
    }
L_001e5e70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5e74:;
    {
        cpu->r[14] = 0x001e5e78u; fn_001ebd9c(cpu);
    }
L_001e5e78:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e5e7c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e5e80:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5e84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e5e88:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001e5e8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001e5e90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001e5e94:;
    {
        cpu->r[14] = 0x001e5e98u; fn_001e3520(cpu);
    }
L_001e5e98:;
    {
        goto L_001e5d1c;
    }
L_001e5e9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e5ea0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5ea4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e5ea8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e5eac:;
    {
        cpu->r[14] = 0x001e5eb4u;
    }
L_001e5eb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5eb4u)) return;
    }
L_001e5eb4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5eb8:;
    {
        cpu->r[14] = 0x001e5ebcu; fn_001ebd9c(cpu);
    }
L_001e5ebc:;
    {
        goto L_001e5d10;
    }
L_001e5ec0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5ec4:;
    {
        cpu->r[14] = 0x001e5ec8u; fn_001ebd9c(cpu);
    }
L_001e5ec8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5ecc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e5ed0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e5ed4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001e5ed8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001e5edc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001e5ee0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001e5ee4:;
    {
        cpu->r[14] = 0x001e5ee8u; fn_001e3520(cpu);
    }
L_001e5ee8:;
    {
        goto L_001e5d24;
    }
}

/* _ZN3vox17VoxEngineInternal18ConvertToRawSourceERNS_10DataHandleE @ 001e5ef4 (arm) */
void fn_001e5ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e5ef4:;
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
L_001e5ef8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_001e5efc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_001e5f00:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e5f04:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001e5f08:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001e5f0c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e5f10:;
    {
        cpu->r[6] = rd32(0x001e5f18u + + 0x2a4u);
    }
L_001e5f14:;
    {
        cpu->r[14] = 0x001e5f18u; fn_001ebdc8(cpu);
    }
L_001e5f18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e5f1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e5f20:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e5f28u, cpu->r[6], 0, 0);
    }
L_001e5f24:;
    {
        cpu->r[14] = 0x001e5f28u; fn_001e2e90(cpu);
    }
L_001e5f28:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6190;
        }
    }
L_001e5f30:;
    {
        cpu->r[2] = rd32(0x001e5f38u + + 0x288u);
    }
L_001e5f34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e5f38:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_001e5f3c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001e5f40:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_001e5f44:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e5f48:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001e5f4c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001e5f50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001e5f54:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_001e5f58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e5f5c:;
    {
        wr64(cpu->r[13] + + 0x50u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001e5f60:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001e5f64:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_001e5f68:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_001e5f6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6164;
        }
    }
L_001e5f70:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e5f74:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e5f78:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001e5f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6164;
        }
    }
L_001e5f80:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e5f84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e5f88:;
    {
        cpu->r[14] = 0x001e5f90u;
    }
L_001e5f8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5f90u)) return;
    }
L_001e5f90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5f94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001e5f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6164;
        }
    }
L_001e5f9c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e5fa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6174;
        }
    }
L_001e5fa4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e5fa8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e5fac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e5fb0:;
    {
        cpu->r[14] = 0x001e5fb8u;
    }
L_001e5fb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e5fb8u)) return;
    }
L_001e5fb8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6174;
        }
    }
L_001e5fc0:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e5fc4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001e5fc8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e5fcc:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 3u, &shc); cpu->r[11] = v;
    }
L_001e5fd0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[11] = v;
    }
L_001e5fd4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[11] = v;
    }
L_001e5fd8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001e5fdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e610c;
        }
    }
L_001e5fe0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e5fe4:;
    {
        cpu->r[14] = 0x001e5fe8u; fn_00097dd4(cpu);
    }
L_001e5fe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e5fec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001e5ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6020;
        }
    }
L_001e5ff4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e5ff8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e5ffc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6000:;
    {
        cpu->r[14] = 0x001e6008u;
    }
L_001e6004:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6008u)) return;
    }
L_001e6008:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001e600c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e6010:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6014:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e6018:;
    {
        cpu->r[14] = 0x001e6020u;
    }
L_001e601c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6020u)) return;
    }
L_001e6020:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e6024:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e6028:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_001e602c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6030:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e6034:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e6038:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001e603c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_001e6040:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[12]);
    }
L_001e6044:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[14]);
    }
L_001e6048:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_001e604c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e6050:;
    {
        cpu->r[14] = 0x001e6058u;
    }
L_001e6054:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6058u)) return;
    }
L_001e6058:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e605c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6060:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e6064:;
    {
        cpu->r[14] = 0x001e606cu;
    }
L_001e6068:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e606cu)) return;
    }
L_001e606c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6070:;
    {
        cpu->r[14] = 0x001e6074u; fn_001ebd9c(cpu);
    }
L_001e6074:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e6078:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e607c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
        }
    }
L_001e6080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e60ec;
        }
    }
L_001e6084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e6088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e608c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e6090:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[5]);
    }
L_001e6094:;
    {
        wr8(cpu->r[13] + + 0x8du, cpu->r[6]);
    }
L_001e6098:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e609c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_001e60a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e60a4:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_001e60a8:;
    {
        cpu->r[14] = 0x001e60acu; fn_001e0268(cpu);
    }
L_001e60ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e60b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e60b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_001e60b8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e60bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e60c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001e60c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001e60c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e60cc:;
    {
        cpu->r[14] = 0x001e60d0u; fn_001e5990(cpu);
    }
L_001e60d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e60d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e60d8:;
    {
        cpu->r[14] = 0x001e60dcu; fn_001e512c(cpu);
    }
L_001e60dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e60e0:;
    {
        cpu->r[14] = 0x001e60e4u; fn_001e51b4(cpu);
    }
L_001e60e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e60e8:;
    {
        cpu->r[14] = 0x001e60ecu; fn_00097dc8(cpu);
    }
L_001e60ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e60f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e60f4:;
    {
        cpu->r[14] = 0x001e60f8u; fn_001e3648(cpu);
    }
L_001e60f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e60fc:;
    {
        cpu->r[14] = 0x001e6100u; fn_001e51b4(cpu);
    }
L_001e6100:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e6104:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001e6108:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e610cu)) return;
    }
L_001e610c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e6110:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e6114:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001e6118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e611c:;
    {
        cpu->r[14] = 0x001e6124u;
    }
L_001e6120:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6124u)) return;
    }
L_001e6124:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e6128:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e612c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6130:;
    {
        cpu->r[14] = 0x001e6138u;
    }
L_001e6134:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6138u)) return;
    }
L_001e6138:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e613c:;
    {
        cpu->r[14] = 0x001e6140u; fn_001ebd9c(cpu);
    }
L_001e6140:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e6144:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e6148:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e614c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001e6150:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001e6154:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001e6158:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001e615c:;
    {
        cpu->r[14] = 0x001e6160u; fn_001e3520(cpu);
    }
L_001e6160:;
    {
        goto L_001e60f8;
    }
L_001e6164:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6168:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e616c:;
    {
        cpu->r[14] = 0x001e6170u; fn_001ebd9c(cpu);
    }
L_001e6170:;
    {
        goto L_001e60ec;
    }
L_001e6174:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6178:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e617c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e6180:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001e6184:;
    {
        cpu->r[14] = 0x001e618cu;
    }
L_001e6188:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e618cu)) return;
    }
L_001e618c:;
    {
        goto L_001e60ec;
    }
L_001e6190:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6194:;
    {
        cpu->r[14] = 0x001e6198u; fn_001ebd9c(cpu);
    }
L_001e6198:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e619c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e61a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e61a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e61a8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001e61ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001e61b0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001e61b4:;
    {
        cpu->r[14] = 0x001e61b8u; fn_001e3520(cpu);
    }
L_001e61b8:;
    {
        goto L_001e6100;
    }
}

/* _ZN3vox10DataHandleD2Ev @ 001e61c4 (arm) */
void fn_001e61c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e61c4:;
    {
        cpu->r[3] = rd32(0x001e61ccu + + 0x40u);
    }
L_001e61c8:;
    {
        cpu->r[2] = rd32(0x001e61d0u + + 0x40u);
    }
L_001e61cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e61d4u, cpu->r[3], 0, 0);
    }
L_001e61d0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001e61d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e61d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e61dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e61e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e61e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e61e8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001e61ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6204;
        }
    }
L_001e61f0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001e61f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e61f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6204;
        }
    }
L_001e61fc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e6200:;
    {
        cpu->r[14] = 0x001e6204u; fn_001e50a0(cpu);
    }
L_001e6204:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6208:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e620cu)) return;
    }
}

/* _ZN3vox17VoxEngineInternal14GetAllEmittersERSt6vectorINS_13EmitterHandleESaIS2_EE @ 001e6214 (arm) */
void fn_001e6214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6214:;
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
L_001e6218:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e621c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000070u, 1, 0);
    }
L_001e6220:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_001e6224:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e6228:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e622c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e6230:;
    {
        cpu->r[14] = 0x001e6234u; fn_001ebdc8(cpu);
    }
L_001e6234:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e6238:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001e623c:;
    {
        cpu->r[14] = 0x001e6240u; fn_001de2b4(cpu);
    }
L_001e6240:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e6244:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001e6248:;
    {
        cpu->r[7] = rd32(0x001e6250u + + 0x264u);
    }
L_001e624c:;
    {
        cpu->r[14] = 0x001e6250u; fn_001de2c4(cpu);
    }
L_001e6250:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e6254:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e6258:;
    {
        cpu->r[7] = add_flags(cpu, 0x001e6260u, cpu->r[7], 0, 0);
    }
L_001e625c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001e6260:;
    {
        cpu->r[8] = rd32(0x001e6268u + + 0x250u);
    }
L_001e6264:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e62fc;
        }
    }
L_001e626c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e6270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6274:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001e6278:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e627c:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e6280:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e6284:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e6288:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e628c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e6290:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e6294:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e6298:;
    {
        cpu->r[14] = 0x001e629cu; fn_001e2888(cpu);
    }
L_001e629c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e62a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e62a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e63f4;
        }
    }
L_001e62a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e62ac:;
    {
        cpu->r[14] = 0x001e62b0u; fn_001e29b0(cpu);
    }
L_001e62b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e62b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e62b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e62bc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e62c0:;
    {
        cpu->r[14] = 0x001e62c4u; fn_001e2b74(cpu);
    }
L_001e62c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e62c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e62cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e62d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e62dc;
        }
    }
L_001e62d4:;
    {
        goto L_001e641c;
    }
L_001e62d8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e62dc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e62e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e62e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e62d8;
        }
    }
L_001e62e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e62ec:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e62f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e62f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e62f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e626c;
        }
    }
L_001e62fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6300:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001e6304:;
    {
        cpu->r[14] = 0x001e6308u; fn_001ebd9c(cpu);
    }
L_001e6308:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001e630c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6310:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e6314:;
    {
        cpu->r[14] = 0x001e6318u; fn_001ebdc8(cpu);
    }
L_001e6318:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001e631c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e6320:;
    {
        cpu->r[8] = rd32(0x001e6328u + + 0x190u);
    }
L_001e6324:;
    {
        cpu->r[14] = 0x001e6328u; fn_001de2b4(cpu);
    }
L_001e6328:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_001e632c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e6330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_001e6334:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e6338:;
    {
        cpu->r[14] = 0x001e633cu; fn_001de2c4(cpu);
    }
L_001e633c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_001e6340:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e6344:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_001e6348:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e634c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e63e4;
        }
    }
L_001e6354:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e6358:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e635c:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001e6360:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e6364:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e6368:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_001e636c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001e6370:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e6374:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e6378:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001e637c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e6380:;
    {
        cpu->r[14] = 0x001e6384u; fn_001e2888(cpu);
    }
L_001e6384:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e6388:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e638c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6454;
        }
    }
L_001e6390:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e6394:;
    {
        cpu->r[14] = 0x001e6398u; fn_001e29b0(cpu);
    }
L_001e6398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e639c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e63a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e63a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e63a8:;
    {
        cpu->r[14] = 0x001e63acu; fn_001e2b74(cpu);
    }
L_001e63ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e63b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e63b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e63b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e63c4;
        }
    }
L_001e63bc:;
    {
        goto L_001e647c;
    }
L_001e63c0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e63c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e63c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e63cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e63c0;
        }
    }
L_001e63d0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e63d4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e63d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e63dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e63e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6354;
        }
    }
L_001e63e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e63e8:;
    {
        cpu->r[14] = 0x001e63ecu; fn_001ebd9c(cpu);
    }
L_001e63ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e63f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e63f4u)) return;
    }
L_001e63f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e63f8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e63fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6400:;
    {
        cpu->r[14] = 0x001e6404u; fn_001e4f0c(cpu);
    }
L_001e6404:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6408:;
    {
        cpu->r[14] = 0x001e640cu; fn_001e2b74(cpu);
    }
L_001e640c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e6410:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6414:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6418:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e62dc;
        }
    }
L_001e641c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6420:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6424:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e6428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6444;
        }
    }
L_001e642c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e6430:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e6434:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6438:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e643c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e642c;
        }
    }
L_001e6440:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6444:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e6448:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e644c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e6450:;
    {
        goto L_001e62f0;
    }
L_001e6454:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e6458:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e645c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6460:;
    {
        cpu->r[14] = 0x001e6464u; fn_001e4f0c(cpu);
    }
L_001e6464:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6468:;
    {
        cpu->r[14] = 0x001e646cu; fn_001e2b74(cpu);
    }
L_001e646c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e6470:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6474:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e63c4;
        }
    }
L_001e647c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6480:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6484:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e6488:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e64a4;
        }
    }
L_001e648c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e6490:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e6494:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6498:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e649c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e648c;
        }
    }
L_001e64a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e64a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e64a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e64ac:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001e64b0:;
    {
        goto L_001e63d8;
    }
}

/* _ZN3vox17VoxEngineInternal12SetGroupGainEjff @ 001e64bc (arm) */
void fn_001e64bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e64bc:;
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
L_001e64c0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e64c4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001e64c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001e64cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e64d0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e64d4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e64d8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[3];
    }
L_001e64dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001e64e0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e65cc;
        }
    }
L_001e64e4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001e64ecu + + 0xf4u);
    }
L_001e64e8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x000003b4u, 0, 0);
    }
L_001e64ec:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e64f0:;
    {
        cpu->r[14] = 0x001e64f4u; fn_001ebcfc(cpu);
    }
L_001e64f4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001e64f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e65b8;
        }
    }
L_001e64fc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001e6500:;
    {
        cpu->r[14] = cpu->r[8];
    }
L_001e6504:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e6508:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_001e650c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e6510:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001e6518u + + 0xc8u);
    }
L_001e6514:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001e651cu + + 0xc8u);
    }
L_001e6518:;
    {
        goto L_001e652c;
    }
L_001e651c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001e6520:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000014u, 0, 0);
    }
L_001e6524:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000020u, 1, 1);
    }
L_001e6528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e65b8;
        }
    }
L_001e652c:;
    {
        uint32_t v = cpu->r[4] & shifter(cpu->r[6], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001e6530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e651c;
        }
    }
L_001e6534:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0xc0u);
    }
L_001e6538:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14] + + 0xbcu);
    }
L_001e653c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e6540:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6544:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0xb8u);
        }
    }
L_001e6548:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e6570;
        }
    }
L_001e654c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e6550:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6554:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[14] + + 0xb4u);
        }
    }
L_001e6558:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[14] + + 0xb8u);
        }
    }
L_001e655c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 10, 10, 11);
        }
    }
L_001e6560:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0xb4u);
        }
    }
L_001e6564:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 10);
        }
    }
L_001e6568:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e656c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 11, 15);
        }
    }
L_001e6570:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e6574:;
    {
        vfp_vadd(cpu, 15, 17, 13);
    }
L_001e6578:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_001e657c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e6580:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e6584:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001e6588:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_001e658c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001e6590:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001e6594:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000020u, 1, 1);
    }
L_001e6598:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000b4u, 0, 0);
    }
L_001e659c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000014u, 0, 0);
    }
L_001e65a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e65a4:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[7] = base + 16u;
    }
L_001e65a8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_001e65ac:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001e65b0:;
    {
        wr8(cpu->r[5], cpu->r[2]);
    }
L_001e65b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e652c;
        }
    }
L_001e65b8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e65bc:;
    {
        cpu->r[14] = 0x001e65c0u; fn_001ebcf8(cpu);
    }
L_001e65c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e65c4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e65c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e65ccu)) return;
    }
L_001e65cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e65d4u + + 0x14u);
    }
L_001e65d0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001e65d4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e65d8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_001e65dc:;
    {
        goto L_001e64e8;
    }
}

/* _ZN3vox17VoxEngineInternal13SetMasterGainEff @ 001e65ec (arm) */
void fn_001e65ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e65ec:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001e65f0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e65f4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001e65f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001e65fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e6600:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6604:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_001e6608:;
    {
        vfp_sync_flags(cpu);
    }
L_001e660c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e66ac;
        }
    }
L_001e6610:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001e6618u + + 0xa8u);
    }
L_001e6614:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000003b4u, 0, 0);
    }
L_001e6618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e661c:;
    {
        cpu->r[14] = 0x001e6620u; fn_001ebcfc(cpu);
    }
L_001e6620:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xacu);
    }
L_001e6624:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xa8u);
    }
L_001e6628:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e662c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6630:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xa4u);
        }
    }
L_001e6634:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e665c;
        }
    }
L_001e6638:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e663c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6640:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0xa0u);
        }
    }
L_001e6644:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0xa4u);
        }
    }
L_001e6648:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e664c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xa0u);
        }
    }
L_001e6650:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e6654:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e6658:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e665c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e6664u + + 0x60u);
    }
L_001e6660:;
    {
        vfp_vadd(cpu, 17, 17, 14);
    }
L_001e6664:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e6668:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e666c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e6670:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e6678u + + 0x48u);
    }
L_001e6674:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e6678:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e667c:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e6680:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x000000a0u, 0, 0);
    }
L_001e6684:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e6688:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_001e668c:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e6690:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e6694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6698:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e669c:;
    {
        cpu->r[14] = 0x001e66a0u; fn_001ebcf8(cpu);
    }
L_001e66a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e66a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e66a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e66acu)) return;
    }
L_001e66ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e66b4u + + 0x14u);
    }
L_001e66b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001e66b4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e66b8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_001e66bc:;
    {
        goto L_001e6614;
    }
}

/* _ZN3vox10EmitterObj8SetPitchEff @ 001e66cc (arm) */
void fn_001e66cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e66cc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001e66d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e66d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e66d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e66dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e66e0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e66e4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e66e8:;
    {
        cpu->r[14] = 0x001e66ecu; fn_001ebcfc(cpu);
    }
L_001e66ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x84u);
    }
L_001e66f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x80u);
    }
L_001e66f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e66f8:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[6]);
    }
L_001e66fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001e6700:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6704:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x7cu);
        }
    }
L_001e6708:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e6730;
        }
    }
L_001e670c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e6710:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6714:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x7cu);
        }
    }
L_001e6718:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x78u);
        }
    }
L_001e671c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e6720:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x78u);
        }
    }
L_001e6724:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e6728:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e672c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e6730:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e6734:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e6738:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001e673c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e6744u + + 0x2cu);
    }
L_001e6740:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_001e6744:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e6748:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_001e674c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e6750:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001e6754:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e6758:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e675c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6760:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e6764:;
    {
        cpu->r[14] = 0x001e6768u; fn_001ebcf8(cpu);
    }
L_001e6768:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e676c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6770u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal8SetPitchERNS_13EmitterHandleEff @ 001e6774 (arm) */
void fn_001e6774(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6774:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e6778:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e677c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6780:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e6784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6788:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e678c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e6790:;
    {
        cpu->r[14] = 0x001e6794u; fn_001ebdc8(cpu);
    }
L_001e6794:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6798:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e679c:;
    {
        cpu->r[14] = 0x001e67a0u; fn_001e1ca0(cpu);
    }
L_001e67a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e67a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e67b4;
        }
    }
L_001e67a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e67ac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e67b0:;
    {
        cpu->r[14] = 0x001e67b4u; fn_001e66cc(cpu);
    }
L_001e67b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e67b8:;
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
L_001e67bc:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox10EmitterObj7SetGainEff @ 001e67c0 (arm) */
void fn_001e67c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e67c0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001e67c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e67c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e67cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e67d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e67d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e67d8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e67dc:;
    {
        cpu->r[14] = 0x001e67e0u; fn_001ebcfc(cpu);
    }
L_001e67e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x54u);
    }
L_001e67e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x50u);
    }
L_001e67e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e67ec:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_001e67f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001e67f4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e67f8:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4cu);
        }
    }
L_001e67fc:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e6824;
        }
    }
L_001e6800:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e6804:;
    {
        vfp_sync_flags(cpu);
    }
L_001e6808:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x4cu);
        }
    }
L_001e680c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x48u);
        }
    }
L_001e6810:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e6814:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x48u);
        }
    }
L_001e6818:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e681c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e6820:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e6824:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e6828:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e682c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001e6830:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e6838u + + 0x2cu);
    }
L_001e6834:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_001e6838:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e683c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_001e6840:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e6844:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001e6848:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e684c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e6850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6854:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e6858:;
    {
        cpu->r[14] = 0x001e685cu; fn_001ebcf8(cpu);
    }
L_001e685c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e6860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6864u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal7SetGainERNS_13EmitterHandleEff @ 001e6868 (arm) */
void fn_001e6868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6868:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e686c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e6870:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6874:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e6878:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e687c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e6880:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e6884:;
    {
        cpu->r[14] = 0x001e6888u; fn_001ebdc8(cpu);
    }
L_001e6888:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e688c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e6890:;
    {
        cpu->r[14] = 0x001e6894u; fn_001e1ca0(cpu);
    }
L_001e6894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e6898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e68a8;
        }
    }
L_001e689c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e68a0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e68a4:;
    {
        cpu->r[14] = 0x001e68a8u; fn_001e67c0(cpu);
    }
L_001e68a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e68ac:;
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
L_001e68b0:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox7DataObjD0Ev @ 001e68b4 (arm) */
void fn_001e68b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e68b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e68b8:;
    {
        cpu->r[7] = rd32(0x001e68c0u + + 0x74u);
    }
L_001e68bc:;
    {
        cpu->r[3] = rd32(0x001e68c4u + + 0x74u);
    }
L_001e68c0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e68c4:;
    {
        cpu->r[7] = add_flags(cpu, 0x001e68ccu, cpu->r[7], 0, 0);
    }
L_001e68c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_001e68cc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001e68d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e68d4:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000058u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e68d8:;
    {
        cpu->r[14] = 0x001e68dcu; fn_001ebe28(cpu);
    }
L_001e68dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001e68e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001e68e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6904;
        }
    }
L_001e68e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e68ec:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e68f0:;
    {
        cpu->r[14] = 0x001e68f4u; fn_00097dc8(cpu);
    }
L_001e68f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001e68f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e68fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e68ec;
        }
    }
L_001e6900:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001e6904:;
    {
        cpu->r[2] = rd32(0x001e690cu + + 0x30u);
    }
L_001e6908:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e690c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001e6910:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_001e6914:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001e6918:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e691c:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001e6920:;
    {
        cpu->r[14] = 0x001e6924u; fn_001ebe28(cpu);
    }
L_001e6924:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6928:;
    {
        cpu->r[14] = 0x001e692cu; fn_0018ba20(cpu);
    }
L_001e692c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6930:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6934u)) return;
    }
}
