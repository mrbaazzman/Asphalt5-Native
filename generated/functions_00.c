#include "functions.h"

/* sub_0007172c @ 0007172c (arm) */
void fn_0007172c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007172c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071734u, 0x00100000u, 0, 0);
    }
L_00071730:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071734:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071738u)) return;
    }
L_00071738:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071740u, 0x00100000u, 0, 0);
    }
L_0007173c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071740:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xce8u;
        uint32_t t = rd32(cpu->r[12] + + 0xce8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071744u)) return;
    }
L_00071744:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007174cu, 0x00100000u, 0, 0);
    }
L_00071748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007174c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xce0u;
        uint32_t t = rd32(cpu->r[12] + + 0xce0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071750u)) return;
    }
L_00071750:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071758u, 0x00100000u, 0, 0);
    }
L_00071754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071758:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007175cu)) return;
    }
L_0007175c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071764u, 0x00100000u, 0, 0);
    }
L_00071760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071764:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071768u)) return;
    }
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}

/* sub_00071738 @ 00071738 (arm) */
void fn_00071738(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071738:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071740u, 0x00100000u, 0, 0);
    }
L_0007173c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071740:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xce8u;
        uint32_t t = rd32(cpu->r[12] + + 0xce8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071744u)) return;
    }
L_00071744:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007174cu, 0x00100000u, 0, 0);
    }
L_00071748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007174c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xce0u;
        uint32_t t = rd32(cpu->r[12] + + 0xce0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071750u)) return;
    }
L_00071750:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071758u, 0x00100000u, 0, 0);
    }
L_00071754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071758:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007175cu)) return;
    }
L_0007175c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071764u, 0x00100000u, 0, 0);
    }
L_00071760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071764:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071768u)) return;
    }
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}

/* sub_00071744 @ 00071744 (arm) */
void fn_00071744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071744:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007174cu, 0x00100000u, 0, 0);
    }
L_00071748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007174c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xce0u;
        uint32_t t = rd32(cpu->r[12] + + 0xce0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071750u)) return;
    }
L_00071750:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071758u, 0x00100000u, 0, 0);
    }
L_00071754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071758:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007175cu)) return;
    }
L_0007175c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071764u, 0x00100000u, 0, 0);
    }
L_00071760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071764:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071768u)) return;
    }
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}

/* sub_00071750 @ 00071750 (arm) */
void fn_00071750(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071750:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071758u, 0x00100000u, 0, 0);
    }
L_00071754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071758:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007175cu)) return;
    }
L_0007175c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071764u, 0x00100000u, 0, 0);
    }
L_00071760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071764:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071768u)) return;
    }
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}

/* sub_0007175c @ 0007175c (arm) */
void fn_0007175c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007175c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071764u, 0x00100000u, 0, 0);
    }
L_00071760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071764:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071768u)) return;
    }
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}

/* sub_00071768 @ 00071768 (arm) */
void fn_00071768(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071770u, 0x00100000u, 0, 0);
    }
L_0007176c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071770:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071774u)) return;
    }
L_00071774:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007177cu, 0x00100000u, 0, 0);
    }
L_00071778:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007177c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071780u)) return;
    }
L_00071780:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071788u, 0x00100000u, 0, 0);
    }
L_00071784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071788:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007178cu)) return;
    }
L_0007178c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071794u, 0x00100000u, 0, 0);
    }
L_00071790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071794:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xcb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xcb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071798u)) return;
    }
L_00071798:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717a0u, 0x00100000u, 0, 0);
    }
L_0007179c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca8u;
        uint32_t t = rd32(cpu->r[12] + + 0xca8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717a4u)) return;
    }
L_000717a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717acu, 0x00100000u, 0, 0);
    }
L_000717a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717ac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xca0u;
        uint32_t t = rd32(cpu->r[12] + + 0xca0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717b0u)) return;
    }
L_000717b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717b8u, 0x00100000u, 0, 0);
    }
L_000717b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc98u;
        uint32_t t = rd32(cpu->r[12] + + 0xc98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717bcu)) return;
    }
L_000717bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717c4u, 0x00100000u, 0, 0);
    }
L_000717c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc90u;
        uint32_t t = rd32(cpu->r[12] + + 0xc90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717c8u)) return;
    }
L_000717c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717d0u, 0x00100000u, 0, 0);
    }
L_000717cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717d0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc88u;
        uint32_t t = rd32(cpu->r[12] + + 0xc88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717d4u)) return;
    }
L_000717d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717dcu, 0x00100000u, 0, 0);
    }
L_000717d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717dc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc80u;
        uint32_t t = rd32(cpu->r[12] + + 0xc80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717e0u)) return;
    }
L_000717e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717e8u, 0x00100000u, 0, 0);
    }
L_000717e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717e8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc78u;
        uint32_t t = rd32(cpu->r[12] + + 0xc78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717ecu)) return;
    }
L_000717ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000717f4u, 0x00100000u, 0, 0);
    }
L_000717f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000717f4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc70u;
        uint32_t t = rd32(cpu->r[12] + + 0xc70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000717f8u)) return;
    }
L_000717f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071800u, 0x00100000u, 0, 0);
    }
L_000717fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071800:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc68u;
        uint32_t t = rd32(cpu->r[12] + + 0xc68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071804u)) return;
    }
L_00071804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007180cu, 0x00100000u, 0, 0);
    }
L_00071808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007180c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc60u;
        uint32_t t = rd32(cpu->r[12] + + 0xc60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071810u)) return;
    }
L_00071810:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071818u, 0x00100000u, 0, 0);
    }
L_00071814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071818:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc58u;
        uint32_t t = rd32(cpu->r[12] + + 0xc58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007181cu)) return;
    }
L_0007181c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071824u, 0x00100000u, 0, 0);
    }
L_00071820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071824:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc50u;
        uint32_t t = rd32(cpu->r[12] + + 0xc50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071828u)) return;
    }
L_00071828:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071830u, 0x00100000u, 0, 0);
    }
L_0007182c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071830:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc48u;
        uint32_t t = rd32(cpu->r[12] + + 0xc48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071834u)) return;
    }
L_00071834:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007183cu, 0x00100000u, 0, 0);
    }
L_00071838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007183c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc40u;
        uint32_t t = rd32(cpu->r[12] + + 0xc40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071840u)) return;
    }
L_00071840:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071848u, 0x00100000u, 0, 0);
    }
L_00071844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071848:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc38u;
        uint32_t t = rd32(cpu->r[12] + + 0xc38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007184cu)) return;
    }
L_0007184c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071854u, 0x00100000u, 0, 0);
    }
L_00071850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071854:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc30u;
        uint32_t t = rd32(cpu->r[12] + + 0xc30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071858u)) return;
    }
L_00071858:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071860u, 0x00100000u, 0, 0);
    }
L_0007185c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071860:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc28u;
        uint32_t t = rd32(cpu->r[12] + + 0xc28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071864u)) return;
    }
L_00071864:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007186cu, 0x00100000u, 0, 0);
    }
L_00071868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007186c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc20u;
        uint32_t t = rd32(cpu->r[12] + + 0xc20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071870u)) return;
    }
L_00071870:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071878u, 0x00100000u, 0, 0);
    }
L_00071874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071878:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc18u;
        uint32_t t = rd32(cpu->r[12] + + 0xc18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007187cu)) return;
    }
L_0007187c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071884u, 0x00100000u, 0, 0);
    }
L_00071880:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071884:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc10u;
        uint32_t t = rd32(cpu->r[12] + + 0xc10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071888u)) return;
    }
L_00071888:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071890u, 0x00100000u, 0, 0);
    }
L_0007188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071890:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc08u;
        uint32_t t = rd32(cpu->r[12] + + 0xc08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071894u)) return;
    }
L_00071894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007189cu, 0x00100000u, 0, 0);
    }
L_00071898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007189c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xc00u;
        uint32_t t = rd32(cpu->r[12] + + 0xc00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718a0u)) return;
    }
L_000718a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718a8u, 0x00100000u, 0, 0);
    }
L_000718a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718a8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718acu)) return;
    }
L_000718ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718b4u, 0x00100000u, 0, 0);
    }
L_000718b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718b4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718b8u)) return;
    }
L_000718b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718c0u, 0x00100000u, 0, 0);
    }
L_000718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718c0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718c4u)) return;
    }
L_000718c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718ccu, 0x00100000u, 0, 0);
    }
L_000718c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718cc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbe0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbe0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718d0u)) return;
    }
L_000718d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718d8u, 0x00100000u, 0, 0);
    }
L_000718d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718dcu)) return;
    }
L_000718dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718e4u, 0x00100000u, 0, 0);
    }
L_000718e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718e4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbd0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbd0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718e8u)) return;
    }
L_000718e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718f0u, 0x00100000u, 0, 0);
    }
L_000718ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718f0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000718f4u)) return;
    }
L_000718f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000718fcu, 0x00100000u, 0, 0);
    }
L_000718f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000718fc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbc0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbc0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071900u)) return;
    }
L_00071900:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071908u, 0x00100000u, 0, 0);
    }
L_00071904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071908:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb8u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007190cu)) return;
    }
L_0007190c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071914u, 0x00100000u, 0, 0);
    }
L_00071910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071914:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xbb0u;
        uint32_t t = rd32(cpu->r[12] + + 0xbb0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071918u)) return;
    }
L_00071918:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071920u, 0x00100000u, 0, 0);
    }
L_0007191c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071920:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba8u;
        uint32_t t = rd32(cpu->r[12] + + 0xba8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071924u)) return;
    }
L_00071924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007192cu, 0x00100000u, 0, 0);
    }
L_00071928:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007192c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xba0u;
        uint32_t t = rd32(cpu->r[12] + + 0xba0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071930u)) return;
    }
L_00071930:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071938u, 0x00100000u, 0, 0);
    }
L_00071934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071938:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb98u;
        uint32_t t = rd32(cpu->r[12] + + 0xb98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007193cu)) return;
    }
L_0007193c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071944u, 0x00100000u, 0, 0);
    }
L_00071940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071944:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb90u;
        uint32_t t = rd32(cpu->r[12] + + 0xb90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071948u)) return;
    }
L_00071948:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071950u, 0x00100000u, 0, 0);
    }
L_0007194c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071950:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb88u;
        uint32_t t = rd32(cpu->r[12] + + 0xb88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071954u)) return;
    }
L_00071954:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007195cu, 0x00100000u, 0, 0);
    }
L_00071958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007195c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb80u;
        uint32_t t = rd32(cpu->r[12] + + 0xb80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071960u)) return;
    }
L_00071960:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071968u, 0x00100000u, 0, 0);
    }
L_00071964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071968:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb78u;
        uint32_t t = rd32(cpu->r[12] + + 0xb78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007196cu)) return;
    }
L_0007196c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071974u, 0x00100000u, 0, 0);
    }
L_00071970:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071974:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb70u;
        uint32_t t = rd32(cpu->r[12] + + 0xb70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071978u)) return;
    }
L_00071978:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071980u, 0x00100000u, 0, 0);
    }
L_0007197c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071980:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb68u;
        uint32_t t = rd32(cpu->r[12] + + 0xb68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071984u)) return;
    }
L_00071984:;
    {
        cpu->r[12] = add_flags(cpu, 0x0007198cu, 0x00100000u, 0, 0);
    }
L_00071988:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_0007198c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb60u;
        uint32_t t = rd32(cpu->r[12] + + 0xb60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071990u)) return;
    }
L_00071990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071998u, 0x00100000u, 0, 0);
    }
L_00071994:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071998:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb58u;
        uint32_t t = rd32(cpu->r[12] + + 0xb58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007199cu)) return;
    }
L_0007199c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719a4u, 0x00100000u, 0, 0);
    }
L_000719a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719a4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb50u;
        uint32_t t = rd32(cpu->r[12] + + 0xb50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719a8u)) return;
    }
L_000719a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719b0u, 0x00100000u, 0, 0);
    }
L_000719ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719b0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb48u;
        uint32_t t = rd32(cpu->r[12] + + 0xb48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719b4u)) return;
    }
L_000719b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719bcu, 0x00100000u, 0, 0);
    }
L_000719b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719bc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb40u;
        uint32_t t = rd32(cpu->r[12] + + 0xb40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719c0u)) return;
    }
L_000719c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719c8u, 0x00100000u, 0, 0);
    }
L_000719c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719c8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb38u;
        uint32_t t = rd32(cpu->r[12] + + 0xb38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719ccu)) return;
    }
L_000719cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719d4u, 0x00100000u, 0, 0);
    }
L_000719d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719d4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb30u;
        uint32_t t = rd32(cpu->r[12] + + 0xb30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719d8u)) return;
    }
L_000719d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719e0u, 0x00100000u, 0, 0);
    }
L_000719dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719e0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb28u;
        uint32_t t = rd32(cpu->r[12] + + 0xb28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719e4u)) return;
    }
L_000719e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719ecu, 0x00100000u, 0, 0);
    }
L_000719e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719ec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb20u;
        uint32_t t = rd32(cpu->r[12] + + 0xb20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719f0u)) return;
    }
L_000719f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000719f8u, 0x00100000u, 0, 0);
    }
L_000719f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_000719f8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb18u;
        uint32_t t = rd32(cpu->r[12] + + 0xb18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x000719fcu)) return;
    }
L_000719fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a04u, 0x00100000u, 0, 0);
    }
L_00071a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb10u;
        uint32_t t = rd32(cpu->r[12] + + 0xb10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a08u)) return;
    }
L_00071a08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a10u, 0x00100000u, 0, 0);
    }
L_00071a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb08u;
        uint32_t t = rd32(cpu->r[12] + + 0xb08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a14u)) return;
    }
L_00071a14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a1cu, 0x00100000u, 0, 0);
    }
L_00071a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xb00u;
        uint32_t t = rd32(cpu->r[12] + + 0xb00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a20u)) return;
    }
L_00071a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a28u, 0x00100000u, 0, 0);
    }
L_00071a24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a2cu)) return;
    }
L_00071a2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a34u, 0x00100000u, 0, 0);
    }
L_00071a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaf0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaf0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a38u)) return;
    }
L_00071a38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a40u, 0x00100000u, 0, 0);
    }
L_00071a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae8u;
        uint32_t t = rd32(cpu->r[12] + + 0xae8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a44u)) return;
    }
L_00071a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a4cu, 0x00100000u, 0, 0);
    }
L_00071a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xae0u;
        uint32_t t = rd32(cpu->r[12] + + 0xae0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a50u)) return;
    }
L_00071a50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a58u, 0x00100000u, 0, 0);
    }
L_00071a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad8u;
        uint32_t t = rd32(cpu->r[12] + + 0xad8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a5cu)) return;
    }
L_00071a5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a64u, 0x00100000u, 0, 0);
    }
L_00071a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xad0u;
        uint32_t t = rd32(cpu->r[12] + + 0xad0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a68u)) return;
    }
L_00071a68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a70u, 0x00100000u, 0, 0);
    }
L_00071a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac8u;
        uint32_t t = rd32(cpu->r[12] + + 0xac8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a74u)) return;
    }
L_00071a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a7cu, 0x00100000u, 0, 0);
    }
L_00071a78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xac0u;
        uint32_t t = rd32(cpu->r[12] + + 0xac0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a80u)) return;
    }
L_00071a80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a88u, 0x00100000u, 0, 0);
    }
L_00071a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab8u;
        uint32_t t = rd32(cpu->r[12] + + 0xab8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a8cu)) return;
    }
L_00071a8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071a94u, 0x00100000u, 0, 0);
    }
L_00071a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071a94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xab0u;
        uint32_t t = rd32(cpu->r[12] + + 0xab0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071a98u)) return;
    }
L_00071a98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aa0u, 0x00100000u, 0, 0);
    }
L_00071a9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aa0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa8u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aa4u)) return;
    }
L_00071aa4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071aacu, 0x00100000u, 0, 0);
    }
L_00071aa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071aac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xaa0u;
        uint32_t t = rd32(cpu->r[12] + + 0xaa0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ab0u)) return;
    }
L_00071ab0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ab8u, 0x00100000u, 0, 0);
    }
L_00071ab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ab8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa98u;
        uint32_t t = rd32(cpu->r[12] + + 0xa98u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071abcu)) return;
    }
L_00071abc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ac4u, 0x00100000u, 0, 0);
    }
L_00071ac0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ac4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa90u;
        uint32_t t = rd32(cpu->r[12] + + 0xa90u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ac8u)) return;
    }
L_00071ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ad0u, 0x00100000u, 0, 0);
    }
L_00071acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ad0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa88u;
        uint32_t t = rd32(cpu->r[12] + + 0xa88u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ad4u)) return;
    }
L_00071ad4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071adcu, 0x00100000u, 0, 0);
    }
L_00071ad8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071adc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa80u;
        uint32_t t = rd32(cpu->r[12] + + 0xa80u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ae0u)) return;
    }
L_00071ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ae8u, 0x00100000u, 0, 0);
    }
L_00071ae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ae8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa78u;
        uint32_t t = rd32(cpu->r[12] + + 0xa78u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071aecu)) return;
    }
L_00071aec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071af4u, 0x00100000u, 0, 0);
    }
L_00071af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071af4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa70u;
        uint32_t t = rd32(cpu->r[12] + + 0xa70u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071af8u)) return;
    }
L_00071af8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b00u, 0x00100000u, 0, 0);
    }
L_00071afc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa68u;
        uint32_t t = rd32(cpu->r[12] + + 0xa68u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b04u)) return;
    }
L_00071b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b0cu, 0x00100000u, 0, 0);
    }
L_00071b08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa60u;
        uint32_t t = rd32(cpu->r[12] + + 0xa60u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b10u)) return;
    }
L_00071b10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b18u, 0x00100000u, 0, 0);
    }
L_00071b14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa58u;
        uint32_t t = rd32(cpu->r[12] + + 0xa58u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b1cu)) return;
    }
L_00071b1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b24u, 0x00100000u, 0, 0);
    }
L_00071b20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa50u;
        uint32_t t = rd32(cpu->r[12] + + 0xa50u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b28u)) return;
    }
L_00071b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b30u, 0x00100000u, 0, 0);
    }
L_00071b2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa48u;
        uint32_t t = rd32(cpu->r[12] + + 0xa48u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b34u)) return;
    }
L_00071b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b3cu, 0x00100000u, 0, 0);
    }
L_00071b38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa40u;
        uint32_t t = rd32(cpu->r[12] + + 0xa40u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b40u)) return;
    }
L_00071b40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b48u, 0x00100000u, 0, 0);
    }
L_00071b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa38u;
        uint32_t t = rd32(cpu->r[12] + + 0xa38u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b4cu)) return;
    }
L_00071b4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b54u, 0x00100000u, 0, 0);
    }
L_00071b50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa30u;
        uint32_t t = rd32(cpu->r[12] + + 0xa30u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b58u)) return;
    }
L_00071b58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b60u, 0x00100000u, 0, 0);
    }
L_00071b5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa28u;
        uint32_t t = rd32(cpu->r[12] + + 0xa28u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b64u)) return;
    }
L_00071b64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b6cu, 0x00100000u, 0, 0);
    }
L_00071b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa20u;
        uint32_t t = rd32(cpu->r[12] + + 0xa20u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b70u)) return;
    }
L_00071b70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b78u, 0x00100000u, 0, 0);
    }
L_00071b74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa18u;
        uint32_t t = rd32(cpu->r[12] + + 0xa18u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b7cu)) return;
    }
L_00071b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b84u, 0x00100000u, 0, 0);
    }
L_00071b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa10u;
        uint32_t t = rd32(cpu->r[12] + + 0xa10u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b88u)) return;
    }
L_00071b88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b90u, 0x00100000u, 0, 0);
    }
L_00071b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa08u;
        uint32_t t = rd32(cpu->r[12] + + 0xa08u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071b94u)) return;
    }
L_00071b94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071b9cu, 0x00100000u, 0, 0);
    }
L_00071b98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0xa00u;
        uint32_t t = rd32(cpu->r[12] + + 0xa00u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ba0u)) return;
    }
L_00071ba0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ba8u, 0x00100000u, 0, 0);
    }
L_00071ba4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bacu)) return;
    }
L_00071bac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bb4u, 0x00100000u, 0, 0);
    }
L_00071bb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bb8u)) return;
    }
L_00071bb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bc0u, 0x00100000u, 0, 0);
    }
L_00071bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bc0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bc4u)) return;
    }
L_00071bc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bccu, 0x00100000u, 0, 0);
    }
L_00071bc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bcc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bd0u)) return;
    }
L_00071bd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bd8u, 0x00100000u, 0, 0);
    }
L_00071bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bd8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bdcu)) return;
    }
L_00071bdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071be4u, 0x00100000u, 0, 0);
    }
L_00071be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071be4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071be8u)) return;
    }
L_00071be8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bf0u, 0x00100000u, 0, 0);
    }
L_00071bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bf0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071bf4u)) return;
    }
L_00071bf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071bfcu, 0x00100000u, 0, 0);
    }
L_00071bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071bfc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c00u)) return;
    }
L_00071c00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c08u, 0x00100000u, 0, 0);
    }
L_00071c04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c0cu)) return;
    }
L_00071c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c14u, 0x00100000u, 0, 0);
    }
L_00071c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c18u)) return;
    }
L_00071c18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c20u, 0x00100000u, 0, 0);
    }
L_00071c1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c24u)) return;
    }
L_00071c24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c2cu, 0x00100000u, 0, 0);
    }
L_00071c28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x9a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x9a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c30u)) return;
    }
L_00071c30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c38u, 0x00100000u, 0, 0);
    }
L_00071c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x998u;
        uint32_t t = rd32(cpu->r[12] + + 0x998u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c3cu)) return;
    }
L_00071c3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c44u, 0x00100000u, 0, 0);
    }
L_00071c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x990u;
        uint32_t t = rd32(cpu->r[12] + + 0x990u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c48u)) return;
    }
L_00071c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c50u, 0x00100000u, 0, 0);
    }
L_00071c4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x988u;
        uint32_t t = rd32(cpu->r[12] + + 0x988u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c54u)) return;
    }
L_00071c54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c5cu, 0x00100000u, 0, 0);
    }
L_00071c58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x980u;
        uint32_t t = rd32(cpu->r[12] + + 0x980u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c60u)) return;
    }
L_00071c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c68u, 0x00100000u, 0, 0);
    }
L_00071c64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x978u;
        uint32_t t = rd32(cpu->r[12] + + 0x978u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c6cu)) return;
    }
L_00071c6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c74u, 0x00100000u, 0, 0);
    }
L_00071c70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x970u;
        uint32_t t = rd32(cpu->r[12] + + 0x970u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c78u)) return;
    }
L_00071c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c80u, 0x00100000u, 0, 0);
    }
L_00071c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x968u;
        uint32_t t = rd32(cpu->r[12] + + 0x968u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c84u)) return;
    }
L_00071c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c8cu, 0x00100000u, 0, 0);
    }
L_00071c88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x960u;
        uint32_t t = rd32(cpu->r[12] + + 0x960u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c90u)) return;
    }
L_00071c90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071c98u, 0x00100000u, 0, 0);
    }
L_00071c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071c98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x958u;
        uint32_t t = rd32(cpu->r[12] + + 0x958u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071c9cu)) return;
    }
L_00071c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ca4u, 0x00100000u, 0, 0);
    }
L_00071ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ca4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x950u;
        uint32_t t = rd32(cpu->r[12] + + 0x950u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ca8u)) return;
    }
L_00071ca8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cb0u, 0x00100000u, 0, 0);
    }
L_00071cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x948u;
        uint32_t t = rd32(cpu->r[12] + + 0x948u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cb4u)) return;
    }
L_00071cb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cbcu, 0x00100000u, 0, 0);
    }
L_00071cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x940u;
        uint32_t t = rd32(cpu->r[12] + + 0x940u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cc0u)) return;
    }
L_00071cc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cc8u, 0x00100000u, 0, 0);
    }
L_00071cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x938u;
        uint32_t t = rd32(cpu->r[12] + + 0x938u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cccu)) return;
    }
L_00071ccc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cd4u, 0x00100000u, 0, 0);
    }
L_00071cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x930u;
        uint32_t t = rd32(cpu->r[12] + + 0x930u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cd8u)) return;
    }
L_00071cd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ce0u, 0x00100000u, 0, 0);
    }
L_00071cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ce0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x928u;
        uint32_t t = rd32(cpu->r[12] + + 0x928u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ce4u)) return;
    }
L_00071ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cecu, 0x00100000u, 0, 0);
    }
L_00071ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x920u;
        uint32_t t = rd32(cpu->r[12] + + 0x920u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cf0u)) return;
    }
L_00071cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071cf8u, 0x00100000u, 0, 0);
    }
L_00071cf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071cf8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x918u;
        uint32_t t = rd32(cpu->r[12] + + 0x918u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071cfcu)) return;
    }
L_00071cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d04u, 0x00100000u, 0, 0);
    }
L_00071d00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d04:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x910u;
        uint32_t t = rd32(cpu->r[12] + + 0x910u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d08u)) return;
    }
L_00071d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d10u, 0x00100000u, 0, 0);
    }
L_00071d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d10:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x908u;
        uint32_t t = rd32(cpu->r[12] + + 0x908u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d14u)) return;
    }
L_00071d14:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d1cu, 0x00100000u, 0, 0);
    }
L_00071d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d1c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x900u;
        uint32_t t = rd32(cpu->r[12] + + 0x900u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d20u)) return;
    }
L_00071d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d28u, 0x00100000u, 0, 0);
    }
L_00071d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d28:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d2cu)) return;
    }
L_00071d2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d34u, 0x00100000u, 0, 0);
    }
L_00071d30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d34:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d38u)) return;
    }
L_00071d38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d40u, 0x00100000u, 0, 0);
    }
L_00071d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d40:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d44u)) return;
    }
L_00071d44:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d4cu, 0x00100000u, 0, 0);
    }
L_00071d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d4c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d50u)) return;
    }
L_00071d50:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d58u, 0x00100000u, 0, 0);
    }
L_00071d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d58:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d5cu)) return;
    }
L_00071d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d64u, 0x00100000u, 0, 0);
    }
L_00071d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d64:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d68u)) return;
    }
L_00071d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d70u, 0x00100000u, 0, 0);
    }
L_00071d6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d70:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d74u)) return;
    }
L_00071d74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d7cu, 0x00100000u, 0, 0);
    }
L_00071d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d7c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d80u)) return;
    }
L_00071d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d88u, 0x00100000u, 0, 0);
    }
L_00071d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d88:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d8cu)) return;
    }
L_00071d8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071d94u, 0x00100000u, 0, 0);
    }
L_00071d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071d94:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071d98u)) return;
    }
L_00071d98:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071da0u, 0x00100000u, 0, 0);
    }
L_00071d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071da0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071da4u)) return;
    }
L_00071da4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dacu, 0x00100000u, 0, 0);
    }
L_00071da8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x8a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x8a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071db0u)) return;
    }
L_00071db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071db8u, 0x00100000u, 0, 0);
    }
L_00071db4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071db8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x898u;
        uint32_t t = rd32(cpu->r[12] + + 0x898u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dbcu)) return;
    }
L_00071dbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dc4u, 0x00100000u, 0, 0);
    }
L_00071dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dc4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x890u;
        uint32_t t = rd32(cpu->r[12] + + 0x890u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dc8u)) return;
    }
L_00071dc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071dd0u, 0x00100000u, 0, 0);
    }
L_00071dcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x888u;
        uint32_t t = rd32(cpu->r[12] + + 0x888u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071dd4u)) return;
    }
L_00071dd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ddcu, 0x00100000u, 0, 0);
    }
L_00071dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ddc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x880u;
        uint32_t t = rd32(cpu->r[12] + + 0x880u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071de0u)) return;
    }
L_00071de0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071de8u, 0x00100000u, 0, 0);
    }
L_00071de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071de8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x878u;
        uint32_t t = rd32(cpu->r[12] + + 0x878u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071decu)) return;
    }
L_00071dec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071df4u, 0x00100000u, 0, 0);
    }
L_00071df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071df4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x870u;
        uint32_t t = rd32(cpu->r[12] + + 0x870u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071df8u)) return;
    }
L_00071df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e00u, 0x00100000u, 0, 0);
    }
L_00071dfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e00:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x868u;
        uint32_t t = rd32(cpu->r[12] + + 0x868u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e04u)) return;
    }
L_00071e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e0cu, 0x00100000u, 0, 0);
    }
L_00071e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x860u;
        uint32_t t = rd32(cpu->r[12] + + 0x860u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e10u)) return;
    }
L_00071e10:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e18u, 0x00100000u, 0, 0);
    }
L_00071e14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e18:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x858u;
        uint32_t t = rd32(cpu->r[12] + + 0x858u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e1cu)) return;
    }
L_00071e1c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e24u, 0x00100000u, 0, 0);
    }
L_00071e20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e24:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x850u;
        uint32_t t = rd32(cpu->r[12] + + 0x850u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e28u)) return;
    }
L_00071e28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e30u, 0x00100000u, 0, 0);
    }
L_00071e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e30:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x848u;
        uint32_t t = rd32(cpu->r[12] + + 0x848u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e34u)) return;
    }
L_00071e34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e3cu, 0x00100000u, 0, 0);
    }
L_00071e38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e3c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x840u;
        uint32_t t = rd32(cpu->r[12] + + 0x840u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e40u)) return;
    }
L_00071e40:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e48u, 0x00100000u, 0, 0);
    }
L_00071e44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e48:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x838u;
        uint32_t t = rd32(cpu->r[12] + + 0x838u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e4cu)) return;
    }
L_00071e4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e54u, 0x00100000u, 0, 0);
    }
L_00071e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x830u;
        uint32_t t = rd32(cpu->r[12] + + 0x830u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e58u)) return;
    }
L_00071e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e60u, 0x00100000u, 0, 0);
    }
L_00071e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e60:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x828u;
        uint32_t t = rd32(cpu->r[12] + + 0x828u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e64u)) return;
    }
L_00071e64:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e6cu, 0x00100000u, 0, 0);
    }
L_00071e68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e6c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x820u;
        uint32_t t = rd32(cpu->r[12] + + 0x820u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e70u)) return;
    }
L_00071e70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e78u, 0x00100000u, 0, 0);
    }
L_00071e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e78:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x818u;
        uint32_t t = rd32(cpu->r[12] + + 0x818u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e7cu)) return;
    }
L_00071e7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e84u, 0x00100000u, 0, 0);
    }
L_00071e80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e84:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x810u;
        uint32_t t = rd32(cpu->r[12] + + 0x810u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e88u)) return;
    }
L_00071e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e90u, 0x00100000u, 0, 0);
    }
L_00071e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x808u;
        uint32_t t = rd32(cpu->r[12] + + 0x808u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071e94u)) return;
    }
L_00071e94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071e9cu, 0x00100000u, 0, 0);
    }
L_00071e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071e9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x800u;
        uint32_t t = rd32(cpu->r[12] + + 0x800u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ea0u)) return;
    }
L_00071ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ea8u, 0x00100000u, 0, 0);
    }
L_00071ea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ea8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eacu)) return;
    }
L_00071eac:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eb4u, 0x00100000u, 0, 0);
    }
L_00071eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071eb4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7f0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7f0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071eb8u)) return;
    }
L_00071eb8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ec0u, 0x00100000u, 0, 0);
    }
L_00071ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ec0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ec4u)) return;
    }
L_00071ec4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071eccu, 0x00100000u, 0, 0);
    }
L_00071ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ecc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7e0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7e0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ed0u)) return;
    }
L_00071ed0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ed8u, 0x00100000u, 0, 0);
    }
L_00071ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ed8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071edcu)) return;
    }
L_00071edc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ee4u, 0x00100000u, 0, 0);
    }
L_00071ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ee4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7d0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7d0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ee8u)) return;
    }
L_00071ee8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071ef0u, 0x00100000u, 0, 0);
    }
L_00071eec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071ef0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ef4u)) return;
    }
L_00071ef4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071efcu, 0x00100000u, 0, 0);
    }
L_00071ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071efc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7c0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7c0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f00u)) return;
    }
L_00071f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f08u, 0x00100000u, 0, 0);
    }
L_00071f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f08:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f0cu)) return;
    }
L_00071f0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f14u, 0x00100000u, 0, 0);
    }
L_00071f10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f14:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7b0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7b0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f18u)) return;
    }
L_00071f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f20u, 0x00100000u, 0, 0);
    }
L_00071f1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f20:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a8u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a8u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f24u)) return;
    }
L_00071f24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f2cu, 0x00100000u, 0, 0);
    }
L_00071f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f2c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x7a0u;
        uint32_t t = rd32(cpu->r[12] + + 0x7a0u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f30u)) return;
    }
L_00071f30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f38u, 0x00100000u, 0, 0);
    }
L_00071f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f38:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x798u;
        uint32_t t = rd32(cpu->r[12] + + 0x798u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f3cu)) return;
    }
L_00071f3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f44u, 0x00100000u, 0, 0);
    }
L_00071f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f44:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x790u;
        uint32_t t = rd32(cpu->r[12] + + 0x790u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f48u)) return;
    }
L_00071f48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f50u, 0x00100000u, 0, 0);
    }
L_00071f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f50:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x788u;
        uint32_t t = rd32(cpu->r[12] + + 0x788u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f54u)) return;
    }
L_00071f54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f5cu, 0x00100000u, 0, 0);
    }
L_00071f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f5c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x780u;
        uint32_t t = rd32(cpu->r[12] + + 0x780u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f60u)) return;
    }
L_00071f60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f68u, 0x00100000u, 0, 0);
    }
L_00071f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f68:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x778u;
        uint32_t t = rd32(cpu->r[12] + + 0x778u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f6cu)) return;
    }
L_00071f6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f74u, 0x00100000u, 0, 0);
    }
L_00071f70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f74:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x770u;
        uint32_t t = rd32(cpu->r[12] + + 0x770u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f78u)) return;
    }
L_00071f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f80u, 0x00100000u, 0, 0);
    }
L_00071f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x768u;
        uint32_t t = rd32(cpu->r[12] + + 0x768u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f84u)) return;
    }
L_00071f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f8cu, 0x00100000u, 0, 0);
    }
L_00071f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f8c:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x760u;
        uint32_t t = rd32(cpu->r[12] + + 0x760u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f90u)) return;
    }
L_00071f90:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071f98u, 0x00100000u, 0, 0);
    }
L_00071f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071f98:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x758u;
        uint32_t t = rd32(cpu->r[12] + + 0x758u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071f9cu)) return;
    }
L_00071f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fa4u, 0x00100000u, 0, 0);
    }
L_00071fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fa4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x750u;
        uint32_t t = rd32(cpu->r[12] + + 0x750u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fa8u)) return;
    }
L_00071fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fb0u, 0x00100000u, 0, 0);
    }
L_00071fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x748u;
        uint32_t t = rd32(cpu->r[12] + + 0x748u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fb4u)) return;
    }
L_00071fb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fbcu, 0x00100000u, 0, 0);
    }
L_00071fb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fbc:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x740u;
        uint32_t t = rd32(cpu->r[12] + + 0x740u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fc0u)) return;
    }
L_00071fc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fc8u, 0x00100000u, 0, 0);
    }
L_00071fc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fc8:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x738u;
        uint32_t t = rd32(cpu->r[12] + + 0x738u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fccu)) return;
    }
L_00071fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fd4u, 0x00100000u, 0, 0);
    }
L_00071fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fd4:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x730u;
        uint32_t t = rd32(cpu->r[12] + + 0x730u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fd8u)) return;
    }
L_00071fd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fe0u, 0x00100000u, 0, 0);
    }
L_00071fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fe0:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x728u;
        uint32_t t = rd32(cpu->r[12] + + 0x728u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071fe4u)) return;
    }
L_00071fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00071fecu, 0x00100000u, 0, 0);
    }
L_00071fe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d8u, 0, 0);
    }
L_00071fec:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x720u;
        uint32_t t = rd32(cpu->r[12] + + 0x720u);
        cpu->r[12] = wb_tmp;
        if (guest_pc_write(cpu, t, entry_lr, 0x00071ff0u)) return;
    }
}
