#include "functions.h"

/* _ZN13CLinuxNetworkC2Ev @ 001b26ec (arm) */
void fn_001b26ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b26ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b26f0:;
    {
        cpu->r[5] = rd32(0x001b26f8u + + 0x84u);
    }
L_001b26f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b26f8:;
    {
        cpu->r[14] = 0x001b26fcu; fn_001b3280(cpu);
    }
L_001b26fc:;
    {
        cpu->r[3] = rd32(0x001b2704u + + 0x7cu);
    }
L_001b2700:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b2708u, cpu->r[5], 0, 0);
    }
L_001b2704:;
    {
        cpu->r[1] = 0x0000fffeu;
    }
L_001b2708:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b270c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b2710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b2714:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b2718:;
    {
        cpu->r[14] = 0x001b271cu; fn_000964c8(cpu);
    }
L_001b271c:;
    {
        cpu->r[12] = 0x00004bf4u;
    }
L_001b2720:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b2724:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2728:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b272c:;
    {
        cpu->r[12] = 0x00004c78u;
    }
L_001b2730:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001b2734:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b2738:;
    {
        cpu->r[12] = 0x00004c7cu;
    }
L_001b273c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_001b2740:;
    {
        cpu->r[1] = 0x00007490u;
    }
L_001b2744:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_001b2748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001b274c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b2750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00004b00u, 0, 0);
    }
L_001b2754:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001b2758:;
    {
        wr32(cpu->r[1] + + 0xf8u, cpu->r[2]);
    }
L_001b275c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2748;
        }
    }
L_001b2760:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000214u, 0, 0);
    }
L_001b2764:;
    {
        cpu->r[14] = 0x001b2768u; fn_001b250c(cpu);
    }
L_001b2768:;
    {
        cpu->r[3] = 0x00007480u;
    }
L_001b276c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b2770:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2774:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001b2778:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b277cu)) return;
    }
}

/* _ZN5Comms8IsActiveEv @ 001b2784 (arm) */
void fn_001b2784(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2784:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b2788:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms22StartUnblockingConnectEi @ 001b278c (arm) */
void fn_001b278c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b278c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms23UpdateUnblockingConnectEv @ 001b2790 (arm) */
void fn_001b2790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2790:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b2794:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms24IsUnblockingConnectErrorEv @ 001b2798 (arm) */
void fn_001b2798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2798:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b279c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms6updateEv @ 001b27a0 (arm) */
void fn_001b27a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27a0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms15DiscoverServersEv @ 001b27a8 (arm) */
void fn_001b27a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27a8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms17DiscoveryFinishedEv @ 001b27b0 (arm) */
void fn_001b27b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b27b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms11StartServerEb @ 001b27b8 (arm) */
void fn_001b27b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27b8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms17StartOnlineServerEb @ 001b27c0 (arm) */
void fn_001b27c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27c0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms13StopListeningEv @ 001b27c8 (arm) */
void fn_001b27c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms11StartClientEv @ 001b27cc (arm) */
void fn_001b27cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms8SendDataEPhjj @ 001b27d4 (arm) */
void fn_001b27d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27d4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b27d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms18GetLocalDeviceNameEv @ 001b27dc (arm) */
void fn_001b27dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20cu);
    }
L_001b27e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms18SetLocalDeviceNameEPc @ 001b27e4 (arm) */
void fn_001b27e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms19AreAllPingsReceivedEv @ 001b27e8 (arm) */
void fn_001b27e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b27e8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x208u);
    }
L_001b27ec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001b27f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2828;
        }
    }
L_001b27f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b27f8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b27fc:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0xc0u);
    }
L_001b2800:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b2804:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b2808:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b280c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b281c;
        }
    }
L_001b2810:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xe0u);
    }
L_001b2814:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b2818:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b2830;
        }
    }
L_001b281c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001b2820:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001b2824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b27fc;
        }
    }
L_001b2828:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b282c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b2830:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b2834:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms7ConnectEi @ 001b2838 (arm) */
void fn_001b2838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2838:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b283c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms7ConnectEPc @ 001b2840 (arm) */
void fn_001b2840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2840:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b2844:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms10DisconnectEi @ 001b2848 (arm) */
void fn_001b2848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2848:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x208u);
    }
L_001b284c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b2850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001b2854:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b2858:;
    {
        wr8(cpu->r[1] + + 0xc0u, cpu->r[2]);
    }
L_001b285c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2870;
        }
    }
L_001b2860:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001b2864:;
    {
        wr32(cpu->r[0] + + 0x208u, cpu->r[3]);
    }
L_001b2868:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b286c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b2870:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2874:;
    {
        wr8(cpu->r[0] + + 0x316u, cpu->r[3]);
    }
L_001b2878:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms20ConnectionClosedWithEj @ 001b287c (arm) */
void fn_001b287c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b287c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms9ConnectedEi @ 001b2880 (arm) */
void fn_001b2880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2880:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001b2884:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x208u);
    }
L_001b2888:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b288c:;
    {
        wr8(cpu->r[0] + + 0x316u, cpu->r[3]);
    }
L_001b2890:;
    {
        wr8(cpu->r[1] + + 0xc0u, cpu->r[3]);
    }
L_001b2894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001b2898:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b289c:;
    {
        wr32(cpu->r[0] + + 0x208u, cpu->r[2]);
    }
L_001b28a0:;
    {
        wr8(cpu->r[0] + + 0x315u, cpu->r[1]);
    }
L_001b28a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms21IsConnectionAvailableEv @ 001b28a8 (arm) */
void fn_001b28a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b28a8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b28ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms13GetPowerStateEv @ 001b28b0 (arm) */
void fn_001b28b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b28b0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b28b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms13SetPowerStateEb @ 001b28b8 (arm) */
void fn_001b28b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b28b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms12GetDevicesNoEv @ 001b28bc (arm) */
void fn_001b28bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b28bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b28c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms21GetConnectedDevicesNoEv @ 001b28c4 (arm) */
void fn_001b28c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b28c4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b28c8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001b28cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_001b28d0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b28d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b28d8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b28dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b28e0:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0xc0u);
    }
L_001b28e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b28e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b28ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b28f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001b28f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001b28f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b28e0;
        }
    }
L_001b28fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms17SelectFirstDeviceEv @ 001b2900 (arm) */
void fn_001b2900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2900:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2904:;
    {
        wr32(cpu->r[0] + + 0x204u, cpu->r[3]);
    }
L_001b2908:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms13GetNextDeviceEv @ 001b290c (arm) */
void fn_001b290c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b290c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x204u);
    }
L_001b2910:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b2914:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b2918:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
        }
    }
L_001b291c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b2920:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001b2924:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0x204u, cpu->r[3]);
        }
    }
L_001b2928:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_001b292c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms32CheckAndRemoveUnconnectedDevicesEv @ 001b2930 (arm) */
void fn_001b2930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2930:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms24RemoveUnconnectedDevicesEv @ 001b2934 (arm) */
void fn_001b2934(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2934:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b2938:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b293c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b2940:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b2944:;
    {
        goto L_001b2954;
    }
L_001b2948:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b294c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_001b2950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2984;
        }
    }
L_001b2954:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xc0u);
    }
L_001b2958:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b295c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b2960:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2948;
        }
    }
L_001b2964:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b2968:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b296c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b2970:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b2974:;
    {
        cpu->r[14] = 0x001b297cu;
    }
L_001b2978:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b297cu)) return;
    }
L_001b297c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_001b2980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2954;
        }
    }
L_001b2984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2988u)) return;
    }
}

/* _ZN5Comms16ClearDevicesListEv @ 001b2988 (arm) */
void fn_001b2988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2988:;
    {
        cpu->r[3] = rd32(0x001b2990u + + 0x7cu);
    }
L_001b298c:;
    {
        cpu->r[2] = rd32(0x001b2994u + + 0x7cu);
    }
L_001b2990:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2998u, cpu->r[3], 0, 0);
    }
L_001b2994:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b2998:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b299c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b29a0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b29a4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_001b29a8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001b29ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b29b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001b29b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b29e8;
        }
    }
L_001b29b8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b29bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b29c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b29c4u)) return;
        }
    }
L_001b29c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001b29c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b29cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b29d0:;
    {
        cpu->r[14] = 0x001b29d8u;
    }
L_001b29d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b29d8u)) return;
    }
L_001b29d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x200u);
    }
L_001b29dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b29e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b29c4;
        }
    }
L_001b29e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b29e8u)) return;
    }
L_001b29e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b29ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b29f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b29f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b29f8:;
    {
        cpu->r[14] = 0x001b2a00u;
    }
L_001b29fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2a00u)) return;
    }
L_001b2a00:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_001b2a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b29e8;
        }
    }
L_001b2a08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2a0cu)) return;
    }
}

/* _ZN5Comms12QueueIsEmptyEv @ 001b2a14 (arm) */
void fn_001b2a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2a14:;
    {
        cpu->r[3] = 0x00004824u;
    }
L_001b2a18:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b2a1c:;
    {
        cpu->r[3] = 0x00004828u;
    }
L_001b2a20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b2a24:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b2a28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b2a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b2a30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms11QueueIsFullEv @ 001b2a34 (arm) */
void fn_001b2a34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2a34:;
    {
        cpu->r[3] = 0x00004828u;
    }
L_001b2a38:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b2a3c:;
    {
        cpu->r[3] = 0x00004824u;
    }
L_001b2a40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001b2a44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b2a48:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_001b2a4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b2a50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b2a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b2a58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms8QueueGetERjRh @ 001b2a5c (arm) */
void fn_001b2a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2a5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b2a60:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001b2a64:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001b2a68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b2a6c:;
    {
        cpu->r[14] = 0x001b2a70u; fn_001b2a14(cpu);
    }
L_001b2a70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2a74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b2a78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2a7cu)) return;
        }
    }
L_001b2a7c:;
    {
        cpu->r[3] = 0x00004824u;
    }
L_001b2a80:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b2a84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001b2a88:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x324u);
    }
L_001b2a8c:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_001b2a90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b2a94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00001100u, 0, 0);
    }
L_001b2a98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b2a9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 6u, &shc), 0, 0);
    }
L_001b2aa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_001b2aa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b2aa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001b2aac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001b2ab0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b2ab4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b2ab8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b2abc:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[2] = v;
    }
L_001b2ac0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001b2ac4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2ac8u)) return;
    }
}

/* _ZN5Comms8RecvDataERjRh @ 001b2ac8 (arm) */
void fn_001b2ac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2ac8:;
    {
        return fn_001b2a5c(cpu);
    }
}

/* _ZN5Comms10ResetQueueEv @ 001b2acc (arm) */
void fn_001b2acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2acc:;
    {
        cpu->r[2] = 0x00004828u;
    }
L_001b2ad0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2ad4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_001b2ad8:;
    {
        cpu->r[2] = 0x00004824u;
    }
L_001b2adc:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_001b2ae0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms12GetStartGameERj @ 001b2ae4 (arm) */
void fn_001b2ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2ae4:;
    {
        cpu->r[3] = 0x0000482cu;
    }
L_001b2ae8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001b2aec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b2af0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00004800u, 0, 0);
        }
    }
L_001b2af4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000336u;
        }
    }
L_001b2af8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001b2afc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
        }
    }
L_001b2b00:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001b2b04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms13SendKeepAliveEv @ 001b2b08 (arm) */
void fn_001b2b08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2b08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CommsD1Ev @ 001b2b0c (arm) */
void fn_001b2b0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2b0c:;
    {
        cpu->r[3] = rd32(0x001b2b14u + + 0x50u);
    }
L_001b2b10:;
    {
        cpu->r[2] = rd32(0x001b2b18u + + 0x50u);
    }
L_001b2b14:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2b1cu, cpu->r[3], 0, 0);
    }
L_001b2b18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b2b1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2b20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20cu);
    }
L_001b2b24:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b2b28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2b2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b2b30:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b2b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2b44;
        }
    }
L_001b2b38:;
    {
        cpu->r[14] = 0x001b2b3cu; fn_0018ba60(cpu);
    }
L_001b2b3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2b40:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[3]);
    }
L_001b2b44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x210u);
    }
L_001b2b48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2b5c;
        }
    }
L_001b2b50:;
    {
        cpu->r[14] = 0x001b2b54u; fn_0018ba60(cpu);
    }
L_001b2b54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2b58:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[3]);
    }
L_001b2b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2b60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2b64u)) return;
    }
}

/* _ZN5CommsD0Ev @ 001b2b6c (arm) */
void fn_001b2b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2b6c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b2b70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2b74:;
    {
        cpu->r[14] = 0x001b2b78u; fn_001b2b0c(cpu);
    }
L_001b2b78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2b7c:;
    {
        cpu->r[14] = 0x001b2b80u; fn_0018ba20(cpu);
    }
L_001b2b80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2b84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2b88u)) return;
    }
}

/* _ZN5CommsD2Ev @ 001b2b88 (arm) */
void fn_001b2b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2b88:;
    {
        cpu->r[3] = rd32(0x001b2b90u + + 0x50u);
    }
L_001b2b8c:;
    {
        cpu->r[2] = rd32(0x001b2b94u + + 0x50u);
    }
L_001b2b90:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2b98u, cpu->r[3], 0, 0);
    }
L_001b2b94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b2b98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2b9c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20cu);
    }
L_001b2ba0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b2ba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2ba8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b2bac:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b2bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2bc0;
        }
    }
L_001b2bb4:;
    {
        cpu->r[14] = 0x001b2bb8u; fn_0018ba60(cpu);
    }
L_001b2bb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2bbc:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[3]);
    }
L_001b2bc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x210u);
    }
L_001b2bc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2bd8;
        }
    }
L_001b2bcc:;
    {
        cpu->r[14] = 0x001b2bd0u; fn_0018ba60(cpu);
    }
L_001b2bd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2bd4:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[3]);
    }
L_001b2bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b2bdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2be0u)) return;
    }
}

/* _ZN5Comms14ResetStartGameEv @ 001b2be8 (arm) */
void fn_001b2be8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2be8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00004800u, 0, 0);
    }
L_001b2bec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2bf0:;
    {
        wr8(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_001b2bf4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Comms15GetBTDeviceByIDEi @ 001b2bf8 (arm) */
void fn_001b2bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2bf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001fu, 1, 1);
    }
L_001b2bfc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001b2c00:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001b2c04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b2c08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b2c0c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b2c5c;
        }
    }
L_001b2c10:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x200u);
    }
L_001b2c14:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b2c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2c54;
        }
    }
L_001b2c1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2c20:;
    {
        goto L_001b2c2c;
    }
L_001b2c24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b2c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2c54;
        }
    }
L_001b2c2c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_001b2c30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b2c34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001b2c38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2c24;
        }
    }
L_001b2c40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x13cu);
    }
L_001b2c44:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001b2c48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2c24;
        }
    }
L_001b2c4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001b2c50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2c54u)) return;
    }
L_001b2c54:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b2c58:;
    {
        goto L_001b2c4c;
    }
L_001b2c5c:;
    {
        cpu->r[1] = rd32(0x001b2c64u + + 0x30u);
    }
L_001b2c60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001b2c64:;
    {
        cpu->r[2] = rd32(0x001b2c6cu + + 0x2cu);
    }
L_001b2c68:;
    {
        cpu->r[14] = 0x0000022cu;
    }
L_001b2c6c:;
    {
        cpu->r[3] = rd32(0x001b2c74u + + 0x28u);
    }
L_001b2c70:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b2c78u, cpu->r[1], 0, 0);
    }
L_001b2c74:;
    {
        cpu->r[12] = rd32(0x001b2c7cu + + 0x24u);
    }
L_001b2c78:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b2c80u, cpu->r[2], 0, 0);
    }
L_001b2c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2c84u, cpu->r[3], 0, 0);
    }
L_001b2c80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001b2c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b2c8cu, cpu->r[12], 0, 0);
    }
L_001b2c88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b2c8c:;
    {
        cpu->r[14] = 0x001b2c90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001b2c90:;
    {
        goto L_001b2c10;
    }
}

/* _ZN5Comms9AddDeviceEP13DeviceDetailsi @ 001b2ca4 (arm) */
void fn_001b2ca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2ca4:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001b2ca8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b2cac:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b2cb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b2cb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2cb8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b2cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2d24;
        }
    }
L_001b2cc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_001b2cc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b2d40;
        }
    }
L_001b2cc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001b2ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b2cd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b2cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2d0c;
        }
    }
L_001b2cd8:;
    {
        cpu->r[1] = rd32(0x001b2ce0u + + 0x98u);
    }
L_001b2cdc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001b2ce0:;
    {
        cpu->r[12] = rd32(0x001b2ce8u + + 0x94u);
    }
L_001b2ce4:;
    {
        cpu->r[14] = 0x0000021fu;
    }
L_001b2ce8:;
    {
        cpu->r[2] = rd32(0x001b2cf0u + + 0x90u);
    }
L_001b2cec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b2cf4u, cpu->r[1], 0, 0);
    }
L_001b2cf0:;
    {
        cpu->r[3] = rd32(0x001b2cf8u + + 0x8cu);
    }
L_001b2cf4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b2cfcu, cpu->r[12], 0, 0);
    }
L_001b2cf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b2d00u, cpu->r[2], 0, 0);
    }
L_001b2cfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001b2d00:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2d08u, cpu->r[3], 0, 0);
    }
L_001b2d04:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001b2d08:;
    {
        cpu->r[14] = 0x001b2d0cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001b2d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b2d10:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b2d14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b2d18:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[3]);
    }
L_001b2d1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b2d20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2d24u)) return;
    }
L_001b2d24:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x200u);
    }
L_001b2d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_001b2d2c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
        }
    }
L_001b2d30:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001b2d34:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[0] + + 0x200u, cpu->r[3]);
        }
    }
L_001b2d38:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_001b2d3c:;
    {
        goto L_001b2d1c;
    }
L_001b2d40:;
    {
        cpu->r[1] = rd32(0x001b2d48u + + 0x40u);
    }
L_001b2d44:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001b2d48:;
    {
        cpu->r[12] = rd32(0x001b2d50u + + 0x3cu);
    }
L_001b2d4c:;
    {
        cpu->r[14] = 0x0000021eu;
    }
L_001b2d50:;
    {
        cpu->r[2] = rd32(0x001b2d58u + + 0x38u);
    }
L_001b2d54:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b2d5cu, cpu->r[1], 0, 0);
    }
L_001b2d58:;
    {
        cpu->r[3] = rd32(0x001b2d60u + + 0x34u);
    }
L_001b2d5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b2d64u, cpu->r[12], 0, 0);
    }
L_001b2d60:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b2d68u, cpu->r[2], 0, 0);
    }
L_001b2d64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001b2d68:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2d70u, cpu->r[3], 0, 0);
    }
L_001b2d6c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001b2d70:;
    {
        cpu->r[14] = 0x001b2d74u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001b2d74:;
    {
        goto L_001b2cc8;
    }
}

/* _ZN5Comms8QueuePutEPhjh @ 001b2d98 (arm) */
void fn_001b2d98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2d98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b2d9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b2da0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b2da4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b2da8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001b2dac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2db0:;
    {
        cpu->r[14] = 0x001b2db4u; fn_001b2a34(cpu);
    }
L_001b2db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2db8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b2dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2e14;
        }
    }
L_001b2dc0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000040u, 1, 1);
    }
L_001b2dc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b2e1c;
        }
    }
L_001b2dc8:;
    {
        cpu->r[8] = 0x00004828u;
    }
L_001b2dcc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b2dd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b2dd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b2dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001b2ddc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 6u, &shc), 0, 0);
    }
L_001b2de0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_001b2de4:;
    {
        wr8(cpu->r[3] + + 0x324u, cpu->r[6]);
    }
L_001b2de8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001b2dec:;
    {
        cpu->r[14] = 0x001b2df0u; imp_memcpy(cpu); /* memcpy */
    }
L_001b2df0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b2df4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b2df8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00001100u, 0, 0);
    }
L_001b2dfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001b2e00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b2e04:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[2] = v;
    }
L_001b2e08:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[2]);
    }
L_001b2e0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b2e10:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001b2e14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b2e18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2e1cu)) return;
    }
L_001b2e1c:;
    {
        cpu->r[1] = rd32(0x001b2e24u + + 0x38u);
    }
L_001b2e20:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001b2e24:;
    {
        cpu->r[12] = rd32(0x001b2e2cu + + 0x34u);
    }
L_001b2e28:;
    {
        cpu->r[14] = 0x000002cdu;
    }
L_001b2e2c:;
    {
        cpu->r[2] = rd32(0x001b2e34u + + 0x30u);
    }
L_001b2e30:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b2e38u, cpu->r[1], 0, 0);
    }
L_001b2e34:;
    {
        cpu->r[3] = rd32(0x001b2e3cu + + 0x2cu);
    }
L_001b2e38:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b2e40u, cpu->r[12], 0, 0);
    }
L_001b2e3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b2e44u, cpu->r[2], 0, 0);
    }
L_001b2e40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_001b2e44:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2e4cu, cpu->r[3], 0, 0);
    }
L_001b2e48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001b2e4c:;
    {
        cpu->r[5] = 0x00000040u;
    }
L_001b2e50:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b2e54:;
    {
        cpu->r[14] = 0x001b2e58u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001b2e58:;
    {
        goto L_001b2dc8;
    }
}

/* _ZN5Comms21RemoveDisconnectedCarEi @ 001b2e6c (arm) */
void fn_001b2e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2e6c:;
    {
        cpu->r[3] = rd32(0x001b2e74u + + 0x9cu);
    }
L_001b2e70:;
    {
        cpu->r[2] = rd32(0x001b2e78u + + 0x9cu);
    }
L_001b2e74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2e7cu, cpu->r[3], 0, 0);
    }
L_001b2e78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001b2e7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b2e80:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_001b2e84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b2e88:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001b2e8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b2e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2ef4;
        }
    }
L_001b2e94:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001b2e98:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b2e9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b2ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2efc;
        }
    }
L_001b2ea4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000019c0u, 0, 0);
    }
L_001b2ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_001b2eac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b2eb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001b2eb4:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001b2eb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2ee0;
        }
    }
L_001b2ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_001b2ec0:;
    {
        cpu->r[4] = 0x00001cedu;
    }
L_001b2ec4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_001b2ec8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001b2ecc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_001b2ed0:;
    {
        cpu->r[5] = rd8(cpu->r[12] + cpu->r[4]);
    }
L_001b2ed4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b2ed8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001b2edc:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[12] + cpu->r[4], cpu->r[5]);
        }
    }
L_001b2ee0:;
    {
        cpu->r[12] = 0x00005f53u;
    }
L_001b2ee4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_001b2ee8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001b2eec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001b2ef0:;
    {
        return fn_000bd0ec(cpu);
    }
L_001b2ef4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001b2ef8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b2efc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000019c0u, 0, 0);
    }
L_001b2f00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_001b2f04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001b2f08:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001b2f0c:;
    {
        goto L_001b2ee0;
    }
}

/* _ZN5Comms12RemoveDeviceEj @ 001b2f18 (arm) */
void fn_001b2f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2f18:;
    {
        cpu->r[3] = rd32(0x001b2f20u + + 0xd0u);
    }
L_001b2f1c:;
    {
        cpu->r[2] = rd32(0x001b2f24u + + 0xd0u);
    }
L_001b2f20:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b2f28u, cpu->r[3], 0, 0);
    }
L_001b2f24:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b2f28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b2f2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b2f30:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b2f34:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001b2f38:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_001b2f3c:;
    {
        cpu->r[6] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001b2f40:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b2f44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b2fd8;
        }
    }
L_001b2f48:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001b2f4c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001b2f50:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b2f54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b2f6c;
        }
    }
L_001b2f58:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b2f5c:;
    {
        cpu->r[14] = 0x001b2f60u; fn_001b33dc(cpu);
    }
L_001b2f60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b2f64:;
    {
        cpu->r[14] = 0x001b2f68u; fn_0018ba20(cpu);
    }
L_001b2f68:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[6]);
    }
L_001b2f6c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x200u);
    }
L_001b2f70:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001b2f74:;
    {
        if (cond_test(cpu, 3)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2f78u)) return;
        }
    }
L_001b2f78:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001b2f7c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_001b2f80:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b2fb8;
        }
    }
L_001b2f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_001b2f88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000000c1u, 0, 0);
    }
L_001b2f8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001b2f90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b2f94:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001b2f98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b2f9c:;
    {
        cpu->r[1] = rd8(cpu->r[2]);
    }
L_001b2fa0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_001b2fa4:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[0]);
    }
L_001b2fa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b2fac:;
    {
        wr8(cpu->r[2] + - 0x1u, cpu->r[1]);
    }
L_001b2fb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b2fb4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b2f94;
        }
    }
L_001b2fb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001b2fbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001b2fc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2fc4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001b2fc8:;
    {
        wr8(cpu->r[2] + + 0xbfu, cpu->r[3]);
    }
L_001b2fcc:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[6]);
    }
L_001b2fd0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_001b2fd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2fd8u)) return;
    }
L_001b2fd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001b2fdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001b2fe0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b2fe4:;
    {
        wr8(cpu->r[2] + + 0xc0u, cpu->r[3]);
    }
L_001b2fe8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_001b2fec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b2ff0u)) return;
    }
}

/* _ZN5Comms10OnDataRecvEPhjh @ 001b2ff8 (arm) */
void fn_001b2ff8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b2ff8:;
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
L_001b2ffc:;
    {
        cpu->r[8] = rd32(0x001b3004u + + 0x120u);
    }
L_001b3000:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001b3004:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b3008:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b300c:;
    {
        cpu->r[8] = add_flags(cpu, 0x001b3014u, cpu->r[8], 0, 0);
    }
L_001b3010:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b3014:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001b3018:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001b301c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00004800u, 0, 0);
    }
L_001b3020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_001b3024:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001b3028:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001b302c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b3030:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000038u, 0, 0);
    }
L_001b3034:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001b3038:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000058u, 0, 0);
    }
L_001b303c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001b3040:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[4]);
    }
L_001b3044:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_001b3048:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001b304c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_001b3050:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 1);
    }
L_001b3054:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b3098;
        }
    }
L_001b3058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001b305c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x28u);
    }
L_001b3060:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b3064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3098;
        }
    }
L_001b3068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000016u, 1, 1);
    }
L_001b306c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b30e8;
        }
    }
L_001b3070:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001b3074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3110;
        }
    }
L_001b3078:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001au, 1, 1);
    }
L_001b307c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b30c8;
        }
    }
L_001b3080:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x317u);
    }
L_001b3084:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b3088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b30a4;
        }
    }
L_001b308c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001b3090:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001b3094:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b3040;
        }
    }
L_001b3098:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b309c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001b30a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b30a4u)) return;
    }
L_001b30a4:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001b30a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b30ac:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_001b30b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b30b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b30b8:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_001b30bc:;
    {
        cpu->r[14] = 0x001b30c4u;
    }
L_001b30c0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b30c4u)) return;
    }
L_001b30c4:;
    {
        goto L_001b308c;
    }
L_001b30c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b30cc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b30d0:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001b30d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001b30d8:;
    {
        cpu->r[14] = 0x001b30dcu; fn_001b2d98(cpu);
    }
L_001b30dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b30e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001b30e4:;
    {
        goto L_001b3090;
    }
L_001b30e8:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x317u);
    }
L_001b30ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b30f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b30a4;
        }
    }
L_001b30f4:;
    {
        cpu->r[14] = 0x001b30f8u; fn_0009b4d0(cpu);
    }
L_001b30f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b30fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001b3100:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b3104:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001b3108:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_001b310c:;
    {
        goto L_001b308c;
    }
L_001b3110:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001b3114:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b3118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001b311c:;
    {
        cpu->r[14] = 0x001b3120u; imp_memcpy(cpu); /* memcpy */
    }
L_001b3120:;
    {
        goto L_001b3090;
    }
}

/* _ZN5CommsC1Ev @ 001b3128 (arm) */
void fn_001b3128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3128:;
    {
        cpu->r[3] = rd32(0x001b3130u + + 0x144u);
    }
L_001b312c:;
    {
        cpu->r[1] = 0x00008067u;
    }
L_001b3130:;
    {
        cpu->r[2] = rd32(0x001b3138u + + 0x140u);
    }
L_001b3134:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6301u << 16);
    }
L_001b3138:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3140u, cpu->r[3], 0, 0);
    }
L_001b313c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3140:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3144:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b3148:;
    {
        cpu->r[0] = 0x00004828u;
    }
L_001b314c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001b3150:;
    {
        cpu->r[1] = 0x00004824u;
    }
L_001b3154:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b3158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b315c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_001b3160:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001b3164:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_001b3168:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b316c:;
    {
        wr8(cpu->r[4] + + 0x316u, cpu->r[5]);
    }
L_001b3170:;
    {
        wr8(cpu->r[4] + + 0x317u, cpu->r[5]);
    }
L_001b3174:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_001b3178:;
    {
        wr32(cpu->r[4] + + 0x204u, cpu->r[5]);
    }
L_001b317c:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[5]);
    }
L_001b3180:;
    {
        cpu->r[14] = 0x001b3184u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3184:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b3188:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001b318c:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[0]);
    }
L_001b3190:;
    {
        cpu->r[14] = 0x001b3194u; imp_memset(cpu); /* memset */
    }
L_001b3194:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b3198:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001b319c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001b31a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b31a4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b31a8:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001b31ac:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001b31b0:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001b31b4:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_001b31b8:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001b31bc:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_001b31c0:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_001b31c4:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_001b31c8:;
    {
        wr32(cpu->r[4] + + 0x318u, cpu->r[5]);
    }
L_001b31cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b31d0:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[0]);
    }
L_001b31d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_001b31d8:;
    {
        wr32(cpu->r[3] + + 0xe0u, cpu->r[1]);
    }
L_001b31dc:;
    {
        wr32(cpu->r[3] + + 0x160u, cpu->r[1]);
    }
L_001b31e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b31e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b31cc;
        }
    }
L_001b31e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b31ec:;
    {
        wr32(cpu->r[12] + + 0x1e0u, cpu->r[1]);
    }
L_001b31f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001b31f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001b31f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b31e8;
        }
    }
L_001b31fc:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_001b3200:;
    {
        cpu->r[14] = 0x001b3204u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3204:;
    {
        cpu->r[1] = rd32(0x001b320cu + + 0x70u);
    }
L_001b3208:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0x4u);
    }
L_001b320c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3214u, cpu->r[1], 0, 0);
    }
L_001b3210:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[0]);
    }
L_001b3214:;
    {
        cpu->r[14] = 0x001b3218u; imp_sprintf(cpu); /* sprintf */
    }
L_001b3218:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x210u);
    }
L_001b321c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3220:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3224:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001b3228:;
    {
        cpu->r[2] = 0x00004becu;
    }
L_001b322c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3230:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001b3234:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001b3238:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001b323c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b3240:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b3244:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b3248:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b324c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001b3250:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001b3254:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001b3258:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001b325c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b3260:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001b3264:;
    {
        wr16(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b3268:;
    {
        cpu->r[14] = 0x001b326cu; fn_001b2be8(cpu);
    }
L_001b326c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3270:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3274u)) return;
    }
}

/* _ZN5CommsC2Ev @ 001b3280 (arm) */
void fn_001b3280(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3280:;
    {
        cpu->r[3] = rd32(0x001b3288u + + 0x144u);
    }
L_001b3284:;
    {
        cpu->r[1] = 0x00008067u;
    }
L_001b3288:;
    {
        cpu->r[2] = rd32(0x001b3290u + + 0x140u);
    }
L_001b328c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6301u << 16);
    }
L_001b3290:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3298u, cpu->r[3], 0, 0);
    }
L_001b3294:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b329c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b32a0:;
    {
        cpu->r[0] = 0x00004828u;
    }
L_001b32a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001b32a8:;
    {
        cpu->r[1] = 0x00004824u;
    }
L_001b32ac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b32b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b32b4:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_001b32b8:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001b32bc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_001b32c0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b32c4:;
    {
        wr8(cpu->r[4] + + 0x316u, cpu->r[5]);
    }
L_001b32c8:;
    {
        wr8(cpu->r[4] + + 0x317u, cpu->r[5]);
    }
L_001b32cc:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_001b32d0:;
    {
        wr32(cpu->r[4] + + 0x204u, cpu->r[5]);
    }
L_001b32d4:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[5]);
    }
L_001b32d8:;
    {
        cpu->r[14] = 0x001b32dcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b32dc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b32e0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001b32e4:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[0]);
    }
L_001b32e8:;
    {
        cpu->r[14] = 0x001b32ecu; imp_memset(cpu); /* memset */
    }
L_001b32ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b32f0:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001b32f4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001b32f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b32fc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b3300:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001b3304:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001b3308:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001b330c:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_001b3310:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001b3314:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_001b3318:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_001b331c:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_001b3320:;
    {
        wr32(cpu->r[4] + + 0x318u, cpu->r[5]);
    }
L_001b3324:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b3328:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[0]);
    }
L_001b332c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_001b3330:;
    {
        wr32(cpu->r[3] + + 0xe0u, cpu->r[1]);
    }
L_001b3334:;
    {
        wr32(cpu->r[3] + + 0x160u, cpu->r[1]);
    }
L_001b3338:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b333c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b3324;
        }
    }
L_001b3340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b3344:;
    {
        wr32(cpu->r[12] + + 0x1e0u, cpu->r[1]);
    }
L_001b3348:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001b334c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001b3350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b3340;
        }
    }
L_001b3354:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_001b3358:;
    {
        cpu->r[14] = 0x001b335cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b335c:;
    {
        cpu->r[1] = rd32(0x001b3364u + + 0x70u);
    }
L_001b3360:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0x4u);
    }
L_001b3364:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b336cu, cpu->r[1], 0, 0);
    }
L_001b3368:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[0]);
    }
L_001b336c:;
    {
        cpu->r[14] = 0x001b3370u; imp_sprintf(cpu); /* sprintf */
    }
L_001b3370:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x210u);
    }
L_001b3374:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b337c:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001b3380:;
    {
        cpu->r[2] = 0x00004becu;
    }
L_001b3384:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3388:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001b338c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001b3390:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001b3394:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b3398:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b339c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b33a0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b33a4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001b33a8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001b33ac:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001b33b0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001b33b4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b33b8:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001b33bc:;
    {
        wr16(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b33c0:;
    {
        cpu->r[14] = 0x001b33c4u; fn_001b2be8(cpu);
    }
L_001b33c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b33c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b33ccu)) return;
    }
}

/* _ZN13DeviceDetailsD2Ev @ 001b33d8 (arm) */
void fn_001b33d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b33d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13DeviceDetailsD1Ev @ 001b33dc (arm) */
void fn_001b33dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b33dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13DeviceDetailsC1Ev @ 001b33e0 (arm) */
void fn_001b33e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b33e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b33e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b33e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b33ec:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b33f0:;
    {
        cpu->r[14] = 0x001b33f4u; imp_memset(cpu); /* memset */
    }
L_001b33f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b33f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b33fc:;
    {
        wr8(cpu->r[4] + + 0x140u, cpu->r[3]);
    }
L_001b3400:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[3]);
    }
L_001b3404:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b3408:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001b340c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3410u)) return;
    }
}

/* _ZN13DeviceDetailsC2Ev @ 001b3410 (arm) */
void fn_001b3410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3410:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3414:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3418:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b341c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3420:;
    {
        cpu->r[14] = 0x001b3424u; imp_memset(cpu); /* memset */
    }
L_001b3424:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b342c:;
    {
        wr8(cpu->r[4] + + 0x140u, cpu->r[3]);
    }
L_001b3430:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[3]);
    }
L_001b3434:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b3438:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001b343c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3440u)) return;
    }
}

/* _ZN13NetworkThreadC2Ev @ 001b3440 (arm) */
void fn_001b3440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3440:;
    {
        cpu->r[3] = rd32(0x001b3448u + + 0x20u);
    }
L_001b3444:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b3448:;
    {
        cpu->r[1] = rd32(0x001b3450u + + 0x1cu);
    }
L_001b344c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3454u, cpu->r[3], 0, 0);
    }
L_001b3450:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[12]);
    }
L_001b3454:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001b3458:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001b345c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001b3460:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001b3464:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13NetworkThreadC1Ev @ 001b3470 (arm) */
void fn_001b3470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3470:;
    {
        cpu->r[3] = rd32(0x001b3478u + + 0x20u);
    }
L_001b3474:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b3478:;
    {
        cpu->r[1] = rd32(0x001b3480u + + 0x1cu);
    }
L_001b347c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3484u, cpu->r[3], 0, 0);
    }
L_001b3480:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[12]);
    }
L_001b3484:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001b3488:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001b348c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001b3490:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001b3494:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16NetworkThreadRunPv @ 001b34a0 (arm) */
void fn_001b34a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b34a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b34a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b34b8;
        }
    }
L_001b34ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b34b0:;
    {
        cpu->r[14] = 0x001b34b8u;
    }
L_001b34b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b34b8u)) return;
    }
L_001b34b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b34bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b34c0u)) return;
    }
}

/* _ZN13NetworkThread5StartEv @ 001b34c0 (arm) */
void fn_001b34c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b34c4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b34c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b34cc:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001b34d0:;
    {
        cpu->r[14] = 0x001b34d8u;
    }
L_001b34d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b34d8u)) return;
    }
L_001b34d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b34dcu)) return;
    }
}

/* _ZN13NetworkThread8WaitStopEv @ 001b34dc (arm) */
void fn_001b34dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13NetworkThread8IsActiveEv @ 001b34e0 (arm) */
void fn_001b34e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34e0:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x4u);
    }
L_001b34e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13NetworkThread11TryToCancelEv @ 001b34e8 (arm) */
void fn_001b34e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34e8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b34ec:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[3]);
    }
L_001b34f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket7addByteEh @ 001b34f4 (arm) */
void fn_001b34f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b34f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b34f8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001b34fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b3500:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_001b3504:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001b3508:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket7getByteERh @ 001b350c (arm) */
void fn_001b350c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b350c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3510:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001b3514:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b3518:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_001b351c:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_001b3520:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001b3524:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket6addIntEi @ 001b3528 (arm) */
void fn_001b3528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3528:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001b352c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3530:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001b3534:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b3538:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[7] = v;
    }
L_001b353c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b3540:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001b3544:;
    {
        cpu->r[8] = (cpu->r[1] >> 16) & 0xffu;
    }
L_001b3548:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[7]);
    }
L_001b354c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001b3550:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001b3554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001b3558:;
    {
        cpu->r[6] = (cpu->r[1] >> 8) & 0xffu;
    }
L_001b355c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001b3560:;
    {
        wr8(cpu->r[7] + cpu->r[4], cpu->r[8]);
    }
L_001b3564:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_001b3568:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_001b356c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001b3570:;
    {
        wr8(cpu->r[12] + cpu->r[2], cpu->r[1]);
    }
L_001b3574:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001b3578:;
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
L_001b357c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket6getIntERi @ 001b3580 (arm) */
void fn_001b3580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3580:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b3584:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b3588:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001b358c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_001b3590:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_001b3594:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001b3598:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001b359c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b3604;
        }
    }
L_001b35a0:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001b35a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b35a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b35ac:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b35b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b35b4:;
    {
        cpu->r[7] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_001b35b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001b35bc:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 24u, &shc); cpu->r[7] = v;
    }
L_001b35c0:;
    {
        wr32(cpu->r[1], cpu->r[7]);
    }
L_001b35c4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_001b35c8:;
    {
        cpu->r[7] = rd8(cpu->r[12] + cpu->r[6]);
    }
L_001b35cc:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_001b35d0:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[6] = v;
    }
L_001b35d4:;
    {
        wr32(cpu->r[1], cpu->r[6]);
    }
L_001b35d8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001b35dc:;
    {
        cpu->r[6] = rd8(cpu->r[12] + cpu->r[5]);
    }
L_001b35e0:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_001b35e4:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[5] = v;
    }
L_001b35e8:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_001b35ec:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_001b35f0:;
    {
        cpu->r[12] = rd8(cpu->r[12] + cpu->r[4]);
    }
L_001b35f4:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_001b35f8:;
    {
        uint32_t v = cpu->r[4] | cpu->r[12]; cpu->r[12] = v;
    }
L_001b35fc:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_001b3600:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001b3604:;
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
L_001b3608:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket11packMessageEv @ 001b360c (arm) */
void fn_001b360c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b360c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3610:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001b3614:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket13getMessageLenEv @ 001b3618 (arm) */
void fn_001b3618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3618:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001b361c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket14getMessageBodyEv @ 001b3620 (arm) */
void fn_001b3620(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3620:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001b3624:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16SimpleDataPacket14setMessageBodyEPhi @ 001b3628 (arm) */
void fn_001b3628(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3628:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b362c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3630:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001b3634:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b3638:;
    {
        cpu->r[14] = 0x001b363cu; imp_memcpy(cpu); /* memcpy */
    }
L_001b363c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3640:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_001b3644:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3648u)) return;
    }
}

/* _ZN16SimpleDataPacket8getBytesEPhRh @ 001b3648 (arm) */
void fn_001b3648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3648:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b364c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3650:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b3654:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b3658:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001b365c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b3660:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001b3664:;
    {
        wr8(cpu->r[5], cpu->r[2]);
    }
L_001b3668:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001b366c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b3670:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001b3674:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001b3678:;
    {
        cpu->r[14] = 0x001b367cu; imp_memcpy(cpu); /* memcpy */
    }
L_001b367c:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001b3680:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b3684:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b3688:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001b368c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b3690:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3694u)) return;
    }
}

/* _ZN16SimpleDataPacket8addBytesEPhh @ 001b3694 (arm) */
void fn_001b3694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3694:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b3698:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001b369c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b36a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b36a4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b36a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b36ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b36b0u)) return;
        }
    }
L_001b36b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b36b4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001b36b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b36bc:;
    {
        wr8(cpu->r[12] + cpu->r[0], cpu->r[2]);
    }
L_001b36c0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001b36c4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b36c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b36cc:;
    {
        cpu->r[14] = 0x001b36d0u; imp_memcpy(cpu); /* memcpy */
    }
L_001b36d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b36d4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b36d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001b36dc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001b36e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b36e4u)) return;
    }
}

/* _ZN16SimpleDataPacketD1Ev @ 001b36e4 (arm) */
void fn_001b36e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b36e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b36e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b36ec:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001b36f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b36f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3704;
        }
    }
L_001b36f8:;
    {
        cpu->r[14] = 0x001b36fcu; fn_0018ba60(cpu);
    }
L_001b36fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3700:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b3704:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b370c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3710:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b3714:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3718u)) return;
    }
}

/* _ZN16SimpleDataPacketD2Ev @ 001b3718 (arm) */
void fn_001b3718(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3718:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b371c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3720:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001b3724:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3738;
        }
    }
L_001b372c:;
    {
        cpu->r[14] = 0x001b3730u; fn_0018ba60(cpu);
    }
L_001b3730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3734:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b3738:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b373c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3740:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3744:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b3748:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b374cu)) return;
    }
}

/* _ZN16SimpleDataPacketC1Ei @ 001b374c (arm) */
void fn_001b374c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b374c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3750:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3754:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b3758:;
    {
        cpu->r[14] = 0x001b375cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b375c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3760:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3764:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001b3768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b376c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3770u)) return;
    }
}

/* _ZN16SimpleDataPacketC2Ei @ 001b3770 (arm) */
void fn_001b3770(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3770:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3774:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3778:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b377c:;
    {
        cpu->r[14] = 0x001b3780u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3780:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3784:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b3788:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001b378c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3790:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3794u)) return;
    }
}

/* _ZN18GLXPlayerComponentC2Ev @ 001b3794 (arm) */
void fn_001b3794(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3794:;
    {
        cpu->r[2] = rd32(0x001b379cu + + 0x24u);
    }
L_001b3798:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b379c:;
    {
        cpu->r[1] = rd32(0x001b37a4u + + 0x20u);
    }
L_001b37a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b37a8u, cpu->r[2], 0, 0);
    }
L_001b37a4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001b37a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001b37ac:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001b37b0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001b37b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001b37b8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001b37bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponentC1Ev @ 001b37c8 (arm) */
void fn_001b37c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b37c8:;
    {
        cpu->r[2] = rd32(0x001b37d0u + + 0x24u);
    }
L_001b37cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b37d0:;
    {
        cpu->r[1] = rd32(0x001b37d8u + + 0x20u);
    }
L_001b37d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001b37dcu, cpu->r[2], 0, 0);
    }
L_001b37d8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001b37dc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001b37e0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001b37e4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001b37e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001b37ec:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001b37f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponent16RegisterObserverEP17GLXPlayerObserver @ 001b37fc (arm) */
void fn_001b37fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b37fc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001b3800:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponent6SetGGIEm @ 001b3804 (arm) */
void fn_001b3804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3804:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001b3808:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponent6GetGGIEv @ 001b380c (arm) */
void fn_001b380c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b380c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001b3810:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponent6GetUIDEv @ 001b3814 (arm) */
void fn_001b3814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3814:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001b3818:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GLXPlayerComponentD1Ev @ 001b381c (arm) */
void fn_001b381c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b381c:;
    {
        cpu->r[3] = rd32(0x001b3824u + + 0x40u);
    }
L_001b3820:;
    {
        cpu->r[2] = rd32(0x001b3828u + + 0x40u);
    }
L_001b3824:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3828:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3830u, cpu->r[3], 0, 0);
    }
L_001b382c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3830:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001b3834:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b3838:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b383c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b3840:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001b3844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b3848:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001b384c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b3850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b385c;
        }
    }
L_001b3854:;
    {
        cpu->r[14] = 0x001b3858u; fn_0018ba20(cpu);
    }
L_001b3858:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001b385c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3864u)) return;
    }
}

/* _ZN18GLXPlayerComponentD0Ev @ 001b386c (arm) */
void fn_001b386c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b386c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3870:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3874:;
    {
        cpu->r[14] = 0x001b3878u; fn_001b381c(cpu);
    }
L_001b3878:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b387c:;
    {
        cpu->r[14] = 0x001b3880u; fn_0018ba20(cpu);
    }
L_001b3880:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3884:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3888u)) return;
    }
}

/* _ZN18GLXPlayerComponentD2Ev @ 001b3888 (arm) */
void fn_001b3888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3888:;
    {
        cpu->r[3] = rd32(0x001b3890u + + 0x40u);
    }
L_001b388c:;
    {
        cpu->r[2] = rd32(0x001b3894u + + 0x40u);
    }
L_001b3890:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3894:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b389cu, cpu->r[3], 0, 0);
    }
L_001b3898:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b389c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001b38a0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b38a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b38a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b38ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001b38b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b38b4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001b38b8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b38bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b38c8;
        }
    }
L_001b38c0:;
    {
        cpu->r[14] = 0x001b38c4u; fn_0018ba20(cpu);
    }
L_001b38c4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001b38c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b38cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b38d0u)) return;
    }
}

/* _ZN18GLXPlayerComponent6SetUIDEPc @ 001b38d8 (arm) */
void fn_001b38d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b38d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b38dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b38e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001b38e4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b38e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b38ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b38fc;
        }
    }
L_001b38f0:;
    {
        cpu->r[14] = 0x001b38f4u; fn_0018ba20(cpu);
    }
L_001b38f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b38f8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001b38fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3900:;
    {
        cpu->r[14] = 0x001b3904u; fn_001d0ce8(cpu);
    }
L_001b3904:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001b3908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b390cu)) return;
    }
}

/* _ZN13GLXPlayerHttp14GetRequestDataEv @ 001b390c (arm) */
void fn_001b390c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b390c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x424u);
    }
L_001b3910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b3914:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
        }
    }
L_001b3918:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x41cu);
        }
    }
L_001b391c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerHttp13UpdateRequestEv @ 001b3920 (arm) */
void fn_001b3920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3920:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3924:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3928:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b392c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3930:;
    {
        cpu->r[14] = 0x001b3938u;
    }
L_001b3934:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3938u)) return;
    }
L_001b3938:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b393cu)) return;
    }
}

/* _ZN13GLXPlayerHttp12IsInProgressEv @ 001b393c (arm) */
void fn_001b393c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b393c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3940:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3944:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b3948:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b394c:;
    {
        cpu->r[14] = 0x001b3954u;
    }
L_001b3950:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3954u)) return;
    }
L_001b3954:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3958u)) return;
    }
}

/* _ZN13GLXPlayerHttp15IsErrorOccurredEv @ 001b3958 (arm) */
void fn_001b3958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3958:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b395c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3960:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b3964:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3968:;
    {
        cpu->r[14] = 0x001b3970u;
    }
L_001b396c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3970u)) return;
    }
L_001b3970:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3974u)) return;
    }
}

/* _ZN13GLXPlayerHttp11GetResponseEv @ 001b3974 (arm) */
void fn_001b3974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3974:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x408u);
    }
L_001b3978:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerHttp14GetResponseLenEv @ 001b397c (arm) */
void fn_001b397c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b397c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40cu);
    }
L_001b3980:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerHttp14SetResponseLenEi @ 001b3984 (arm) */
void fn_001b3984(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3984:;
    {
        wr32(cpu->r[0] + + 0x40cu, cpu->r[1]);
    }
L_001b3988:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerHttp6CancelEv @ 001b398c (arm) */
void fn_001b398c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b398c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b3990:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3994:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3998:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b399c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b39a0:;
    {
        cpu->r[14] = 0x001b39a8u;
    }
L_001b39a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b39a8u)) return;
    }
L_001b39a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b39ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b39b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b39c0;
        }
    }
L_001b39b4:;
    {
        cpu->r[14] = 0x001b39b8u; fn_0018ba20(cpu);
    }
L_001b39b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b39bc:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b39c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b39c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b39c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b39d8;
        }
    }
L_001b39cc:;
    {
        cpu->r[14] = 0x001b39d0u; fn_0018ba20(cpu);
    }
L_001b39d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b39d4:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b39d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b39dc:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[3]);
    }
L_001b39e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b39e4u)) return;
    }
}

/* _ZN13GLXPlayerHttpD1Ev @ 001b39e4 (arm) */
void fn_001b39e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b39e4:;
    {
        cpu->r[3] = rd32(0x001b39ecu + + 0x70u);
    }
L_001b39e8:;
    {
        cpu->r[2] = rd32(0x001b39f0u + + 0x70u);
    }
L_001b39ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b39f4u, cpu->r[3], 0, 0);
    }
L_001b39f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b39f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b39f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b39fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b3a00:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001b3a04:;
    {
        cpu->r[14] = 0x001b3a08u; fn_001b398c(cpu);
    }
L_001b3a08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b3a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3a20;
        }
    }
L_001b3a14:;
    {
        cpu->r[14] = 0x001b3a18u; fn_0018ba20(cpu);
    }
L_001b3a18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3a1c:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b3a20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b3a24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3a38;
        }
    }
L_001b3a2c:;
    {
        cpu->r[14] = 0x001b3a30u; fn_0018ba20(cpu);
    }
L_001b3a30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3a34:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b3a38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b3a3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b3a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3a54;
        }
    }
L_001b3a44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b3a48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3a4c:;
    {
        cpu->r[14] = 0x001b3a54u;
    }
L_001b3a50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3a54u)) return;
    }
L_001b3a54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3a58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3a5cu)) return;
    }
}

/* _ZN13GLXPlayerHttpD0Ev @ 001b3a64 (arm) */
void fn_001b3a64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3a64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3a68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3a6c:;
    {
        cpu->r[14] = 0x001b3a70u; fn_001b39e4(cpu);
    }
L_001b3a70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3a74:;
    {
        cpu->r[14] = 0x001b3a78u; fn_0018ba20(cpu);
    }
L_001b3a78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3a7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3a80u)) return;
    }
}

/* _ZN13GLXPlayerHttpD2Ev @ 001b3a80 (arm) */
void fn_001b3a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3a80:;
    {
        cpu->r[3] = rd32(0x001b3a88u + + 0x70u);
    }
L_001b3a84:;
    {
        cpu->r[2] = rd32(0x001b3a8cu + + 0x70u);
    }
L_001b3a88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b3a90u, cpu->r[3], 0, 0);
    }
L_001b3a8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b3a90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b3a94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3a98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b3a9c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001b3aa0:;
    {
        cpu->r[14] = 0x001b3aa4u; fn_001b398c(cpu);
    }
L_001b3aa4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b3aa8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3aac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3abc;
        }
    }
L_001b3ab0:;
    {
        cpu->r[14] = 0x001b3ab4u; fn_0018ba20(cpu);
    }
L_001b3ab4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3ab8:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b3abc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b3ac0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3ac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3ad4;
        }
    }
L_001b3ac8:;
    {
        cpu->r[14] = 0x001b3accu; fn_0018ba20(cpu);
    }
L_001b3acc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3ad0:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b3ad4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b3ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b3adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3af0;
        }
    }
L_001b3ae0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b3ae4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3ae8:;
    {
        cpu->r[14] = 0x001b3af0u;
    }
L_001b3aec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3af0u)) return;
    }
L_001b3af0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3af4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3af8u)) return;
    }
}

/* _ZN13GLXPlayerHttp16GetRequestLengthEv @ 001b3b00 (arm) */
void fn_001b3b00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3b00:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x424u);
    }
L_001b3b04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b3b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3b14;
        }
    }
L_001b3b0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x420u);
    }
L_001b3b10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b3b14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001b3b18:;
    {
        return fn_001d0434(cpu);
    }
}

/* _ZN13GLXPlayerHttp15SetResponseDataEPci @ 001b3b1c (arm) */
void fn_001b3b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3b1c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b3b20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3b24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x408u);
    }
L_001b3b28:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b3b2c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b3b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3b44;
        }
    }
L_001b3b38:;
    {
        cpu->r[14] = 0x001b3b3cu; fn_0018ba20(cpu);
    }
L_001b3b3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3b40:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b3b44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b3b48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b3b4c:;
    {
        cpu->r[14] = 0x001b3b50u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3b50:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b3b54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3b58:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[0]);
    }
L_001b3b5c:;
    {
        cpu->r[14] = 0x001b3b60u; fn_001d0700(cpu);
    }
L_001b3b60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b3b64:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b3b68:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b3b6c:;
    {
        cpu->r[14] = 0x001b3b70u; fn_001d06ec(cpu);
    }
L_001b3b70:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[5]);
    }
L_001b3b74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3b78u)) return;
    }
}

/* _ZN13GLXPlayerHttp18sendByGetWithNoVerEPcS0_ @ 001b3b78 (arm) */
void fn_001b3b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3b78:;
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
L_001b3b7c:;
    {
        cpu->r[6] = rd32(0x001b3b84u + + 0x244u);
    }
L_001b3b80:;
    {
        cpu->r[3] = rd32(0x001b3b88u + + 0x244u);
    }
L_001b3b84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000021cu, 1, 0);
    }
L_001b3b88:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b3b90u, cpu->r[6], 0, 0);
    }
L_001b3b8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b3b90:;
    {
        cpu->r[0] = rd32(0x001b3b98u + + 0x238u);
    }
L_001b3b94:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001b3b98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b3b9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001b3ba0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b3ba8u, cpu->r[0], 0, 0);
    }
L_001b3ba4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b3ba8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3bac:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[3]);
    }
L_001b3bb0:;
    {
        cpu->r[14] = 0x001b3bb4u; fn_001d0ac4(cpu);
    }
L_001b3bb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b3bb8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b3bbc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001b3bc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001b3bc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001b3bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3db4;
        }
    }
L_001b3bcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_001b3bd0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b3bd4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3bd8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3bdc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3be0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001b3be4:;
    {
        cpu->r[14] = 0x001b3be8u; imp_memset(cpu); /* memset */
    }
L_001b3be8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3bec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3bf0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b3bf4:;
    {
        cpu->r[14] = 0x001b3bf8u; imp_memset(cpu); /* memset */
    }
L_001b3bf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3bfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3c00:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3c04:;
    {
        cpu->r[14] = 0x001b3c08u; fn_001d0700(cpu);
    }
L_001b3c08:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b3c0c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3c10:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3c14:;
    {
        cpu->r[14] = 0x001b3c18u; fn_001d0700(cpu);
    }
L_001b3c18:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b3c1c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b3c20:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b3c24:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b3c28:;
    {
        cpu->r[14] = 0x001b3c2cu; fn_001d0048(cpu);
    }
L_001b3c2c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3c30:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3c34:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b3c38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3c3c:;
    {
        cpu->r[14] = 0x001b3c40u; fn_001d0700(cpu);
    }
L_001b3c40:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b3c44:;
    {
        cpu->r[14] = 0x001b3c48u; fn_001d0434(cpu);
    }
L_001b3c48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_001b3c4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001b3c50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3c54:;
    {
        cpu->r[14] = 0x001b3c58u; fn_001d06ec(cpu);
    }
L_001b3c58:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b3c5c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b3c60:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b3c64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3c68:;
    {
        cpu->r[14] = 0x001b3c6cu; fn_001d0048(cpu);
    }
L_001b3c6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3c70:;
    {
        cpu->r[14] = 0x001b3c74u; fn_001d0434(cpu);
    }
L_001b3c74:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b3c78:;
    {
        cpu->r[14] = 0x001b3c7cu; fn_001d0434(cpu);
    }
L_001b3c7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b3c80:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b3c84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b3c88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b3c8c:;
    {
        cpu->r[14] = 0x001b3c90u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3c90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3c94:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b3c98:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b3c9c:;
    {
        cpu->r[14] = 0x001b3ca0u; fn_001d0700(cpu);
    }
L_001b3ca0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b3ca4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b3ca8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3cac:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b3cb0:;
    {
        cpu->r[14] = 0x001b3cb4u; fn_001d06ec(cpu);
    }
L_001b3cb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3cb8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b3cbc:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001b3cc0:;
    {
        cpu->r[14] = 0x001b3cc4u; fn_001d0700(cpu);
    }
L_001b3cc4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x408u);
    }
L_001b3cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3cd8;
        }
    }
L_001b3cd0:;
    {
        cpu->r[14] = 0x001b3cd4u; fn_0018ba20(cpu);
    }
L_001b3cd4:;
    {
        wr32(cpu->r[7] + + 0x408u, cpu->r[4]);
    }
L_001b3cd8:;
    {
        cpu->r[1] = rd32(0x001b3ce0u + + 0xf4u);
    }
L_001b3cdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3ce0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3ce8u, cpu->r[1], 0, 0);
    }
L_001b3ce4:;
    {
        cpu->r[14] = 0x001b3ce8u; fn_001d06dc(cpu);
    }
L_001b3ce8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b3cec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3cf0:;
    {
        cpu->r[14] = 0x001b3cf4u; fn_001d06d4(cpu);
    }
L_001b3cf4:;
    {
        cpu->r[1] = rd32(0x001b3cfcu + + 0xdcu);
    }
L_001b3cf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3cfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3d04u, cpu->r[1], 0, 0);
    }
L_001b3d00:;
    {
        cpu->r[14] = 0x001b3d04u; fn_001d06d4(cpu);
    }
L_001b3d04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b3d08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3d0c:;
    {
        cpu->r[14] = 0x001b3d10u; fn_001d06d4(cpu);
    }
L_001b3d10:;
    {
        cpu->r[1] = rd32(0x001b3d18u + + 0xc4u);
    }
L_001b3d14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3d18:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3d20u, cpu->r[1], 0, 0);
    }
L_001b3d1c:;
    {
        cpu->r[14] = 0x001b3d20u; fn_001d06d4(cpu);
    }
L_001b3d20:;
    {
        cpu->r[1] = rd32(0x001b3d28u + + 0xb8u);
    }
L_001b3d24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3d28:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3d30u, cpu->r[1], 0, 0);
    }
L_001b3d2c:;
    {
        cpu->r[14] = 0x001b3d30u; fn_001d06d4(cpu);
    }
L_001b3d30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b3d34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3d38:;
    {
        cpu->r[14] = 0x001b3d3cu; fn_001d06d4(cpu);
    }
L_001b3d3c:;
    {
        cpu->r[1] = rd32(0x001b3d44u + + 0xa0u);
    }
L_001b3d40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b3d44:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b3d4cu, cpu->r[1], 0, 0);
    }
L_001b3d48:;
    {
        cpu->r[14] = 0x001b3d4cu; fn_001d06d4(cpu);
    }
L_001b3d4c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b3d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3d5c;
        }
    }
L_001b3d54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3d58:;
    {
        cpu->r[14] = 0x001b3d5cu; fn_0018ba20(cpu);
    }
L_001b3d5c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001b3d60:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b3d64:;
    {
        wr8(cpu->r[7] + + 0x424u, cpu->r[4]);
    }
L_001b3d68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b3d6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3d70:;
    {
        cpu->r[14] = 0x001b3d78u;
    }
L_001b3d74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3d78u)) return;
    }
L_001b3d78:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x408u);
    }
L_001b3d7c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001b3d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3d8c;
        }
    }
L_001b3d84:;
    {
        cpu->r[14] = 0x001b3d88u; fn_0018ba20(cpu);
    }
L_001b3d88:;
    {
        wr32(cpu->r[7] + + 0x408u, cpu->r[4]);
    }
L_001b3d8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3d90:;
    {
        wr32(cpu->r[7] + + 0x40cu, cpu->r[3]);
    }
L_001b3d94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b3d98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001b3d9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x214u);
    }
L_001b3da0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b3da4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b3da8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b3dc4;
        }
    }
L_001b3dac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000021cu, 0, 0);
    }
L_001b3db0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3db4u)) return;
    }
L_001b3db4:;
    {
        cpu->r[0] = rd32(0x001b3dbcu + + 0x2cu);
    }
L_001b3db8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b3dc0u, cpu->r[0], 0, 0);
    }
L_001b3dbc:;
    {
        cpu->r[14] = 0x001b3dc0u; fn_001d0ac4(cpu);
    }
L_001b3dc0:;
    {
        goto L_001b3d94;
    }
L_001b3dc4:;
    {
        cpu->r[14] = 0x001b3dc8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b3dc8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 2, 17u, &shc); cpu->r[6] = v;
        }
    }
L_001b3dcc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b3dd0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 26u, &shc); cpu->r[11] = v;
        }
    }
L_001b3dd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001b3dd8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[5]; cpu->r[7] = v;
        }
    }
L_001b3ddc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 24u, &shc); cpu->r[11] = v;
        }
    }
L_001b3de0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[12] << 32) | cpu->r[11]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b3de4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 26u, &shc); cpu->r[11] = v;
        }
    }
L_001b3de8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 22u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN13GLXPlayerHttpC1EPcS0_S0_ @ 001b3dec (arm) */
void fn_001b3dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3dec:;
    {
        cpu->r[12] = rd32(0x001b3df4u + + 0x58u);
    }
L_001b3df0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3df4:;
    {
        cpu->r[14] = rd32(0x001b3dfcu + + 0x54u);
    }
L_001b3df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b3e00u, cpu->r[12], 0, 0);
    }
L_001b3dfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3e00:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b3e04:;
    {
        wr32(cpu->r[0] + + 0x414u, cpu->r[2]);
    }
L_001b3e08:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001b3e0c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b3e10:;
    {
        wr32(cpu->r[0] + + 0x418u, cpu->r[3]);
    }
L_001b3e14:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b3e18:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001b3e1c:;
    {
        cpu->r[1] = 0x00000050u;
    }
L_001b3e20:;
    {
        wr32(cpu->r[4] + + 0x410u, cpu->r[5]);
    }
L_001b3e24:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_001b3e28:;
    {
        cpu->r[14] = 0x001b3e2cu; fn_001b6b08(cpu);
    }
L_001b3e2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3e30:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[3]);
    }
L_001b3e34:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b3e38:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[3]);
    }
L_001b3e3c:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b3e40:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001b3e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3e48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3e4cu)) return;
    }
}

/* _ZN13GLXPlayerHttpC2EPcS0_S0_ @ 001b3e54 (arm) */
void fn_001b3e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3e54:;
    {
        cpu->r[12] = rd32(0x001b3e5cu + + 0x58u);
    }
L_001b3e58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b3e5c:;
    {
        cpu->r[14] = rd32(0x001b3e64u + + 0x54u);
    }
L_001b3e60:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b3e68u, cpu->r[12], 0, 0);
    }
L_001b3e64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3e68:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b3e6c:;
    {
        wr32(cpu->r[0] + + 0x414u, cpu->r[2]);
    }
L_001b3e70:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001b3e74:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b3e78:;
    {
        wr32(cpu->r[0] + + 0x418u, cpu->r[3]);
    }
L_001b3e7c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b3e80:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001b3e84:;
    {
        cpu->r[1] = 0x00000050u;
    }
L_001b3e88:;
    {
        wr32(cpu->r[4] + + 0x410u, cpu->r[5]);
    }
L_001b3e8c:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_001b3e90:;
    {
        cpu->r[14] = 0x001b3e94u; fn_001b6b08(cpu);
    }
L_001b3e94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3e98:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[3]);
    }
L_001b3e9c:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b3ea0:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[3]);
    }
L_001b3ea4:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b3ea8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001b3eac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b3eb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b3eb4u)) return;
    }
}

/* _ZN13GLXPlayerHttp15sendVideoByPostEPcS0_S0_RiS0_ @ 001b3ebc (arm) */
void fn_001b3ebc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b3ebc:;
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
L_001b3ec0:;
    {
        cpu->r[11] = rd32(0x001b3ec8u + + 0x2b4u);
    }
L_001b3ec4:;
    {
        cpu->r[12] = rd32(0x001b3eccu + + 0x2b4u);
    }
L_001b3ec8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000224u, 1, 0);
    }
L_001b3ecc:;
    {
        cpu->r[11] = add_flags(cpu, 0x001b3ed4u, cpu->r[11], 0, 0);
    }
L_001b3ed0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_001b3ed4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b3ed8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001b3edc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001b3ee0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001b3ee4:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[12]);
    }
L_001b3ee8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b3eec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b3ef0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3ef4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3ef8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3efc:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001b3f00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24cu);
    }
L_001b3f04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x248u);
    }
L_001b3f08:;
    {
        wr32(cpu->r[13] + + 0x21cu, cpu->r[3]);
    }
L_001b3f0c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001b3f10:;
    {
        cpu->r[14] = 0x001b3f14u; imp_memset(cpu); /* memset */
    }
L_001b3f14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3f18:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3f1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b3f20:;
    {
        cpu->r[14] = 0x001b3f24u; imp_memset(cpu); /* memset */
    }
L_001b3f24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3f28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3f2c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3f30:;
    {
        cpu->r[14] = 0x001b3f34u; fn_001d0700(cpu);
    }
L_001b3f34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b3f38:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3f3c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3f40:;
    {
        cpu->r[14] = 0x001b3f44u; fn_001d0700(cpu);
    }
L_001b3f44:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b3f48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b3f4c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b3f50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3f54:;
    {
        cpu->r[14] = 0x001b3f58u; fn_001d0048(cpu);
    }
L_001b3f58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3f5c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b3f60:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b3f64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3f68:;
    {
        cpu->r[14] = 0x001b3f6cu; fn_001d0700(cpu);
    }
L_001b3f6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b3f70:;
    {
        cpu->r[14] = 0x001b3f74u; fn_001d0434(cpu);
    }
L_001b3f74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001b3f78:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001b3f7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3f80:;
    {
        cpu->r[14] = 0x001b3f84u; fn_001d06ec(cpu);
    }
L_001b3f84:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b3f88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b3f8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b3f90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3f94:;
    {
        cpu->r[14] = 0x001b3f98u; fn_001d0048(cpu);
    }
L_001b3f98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b3f9c:;
    {
        cpu->r[14] = 0x001b3fa0u; fn_001d0434(cpu);
    }
L_001b3fa0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b3fa4:;
    {
        cpu->r[14] = 0x001b3fa8u; fn_001d0434(cpu);
    }
L_001b3fa8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b3fac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b3fb0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b3fb4:;
    {
        cpu->r[14] = 0x001b3fb8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b3fb8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b3fbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b3fc0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b3fc4:;
    {
        cpu->r[14] = 0x001b3fc8u; fn_001d0700(cpu);
    }
L_001b3fc8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b3fcc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b3fd0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b3fd4:;
    {
        cpu->r[14] = 0x001b3fd8u; fn_001d06ec(cpu);
    }
L_001b3fd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b3fdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b3fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b3ff0;
        }
    }
L_001b3fe4:;
    {
        cpu->r[14] = 0x001b3fe8u; fn_0018ba60(cpu);
    }
L_001b3fe8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b3fec:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b3ff0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001b3ff4:;
    {
        cpu->r[7] = rd32(0x001b3ffcu + + 0x188u);
    }
L_001b3ff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_001b3ffc:;
    {
        cpu->r[14] = 0x001b4000u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4000:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001b4004:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4008:;
    {
        cpu->r[7] = add_flags(cpu, 0x001b4010u, cpu->r[7], 0, 0);
    }
L_001b400c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_001b4010:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[0]);
    }
L_001b4014:;
    {
        cpu->r[14] = 0x001b4018u; fn_001d0700(cpu);
    }
L_001b4018:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001b401c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_001b4020:;
    {
        cpu->r[14] = 0x001b4024u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4024:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001b4028:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b402c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_001b4030:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b4034:;
    {
        cpu->r[14] = 0x001b4038u; fn_001d0700(cpu);
    }
L_001b4038:;
    {
        cpu->r[1] = rd32(0x001b4040u + + 0x148u);
    }
L_001b403c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b4040:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b4048u, cpu->r[1], 0, 0);
    }
L_001b4044:;
    {
        cpu->r[14] = 0x001b4048u; fn_001d06d4(cpu);
    }
L_001b4048:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x414u);
    }
L_001b404c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b4050:;
    {
        cpu->r[14] = 0x001b4054u; fn_001d06d4(cpu);
    }
L_001b4054:;
    {
        cpu->r[1] = rd32(0x001b405cu + + 0x130u);
    }
L_001b4058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b405c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4060:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b4068u, cpu->r[1], 0, 0);
    }
L_001b4064:;
    {
        cpu->r[14] = 0x001b4068u; imp_sprintf(cpu); /* sprintf */
    }
L_001b4068:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b406c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001b4070:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b4074:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001b4078:;
    {
        cpu->r[14] = 0x001b407cu; fn_001d06ec(cpu);
    }
L_001b407c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001b4080:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b4084:;
    {
        cpu->r[2] = 0x0000001cu;
    }
L_001b4088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_001b408c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001b4090:;
    {
        cpu->r[14] = 0x001b4094u; fn_001d06ec(cpu);
    }
L_001b4094:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001b4098:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b409c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001b40a0:;
    {
        cpu->r[14] = 0x001b40a4u; fn_001d0434(cpu);
    }
L_001b40a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b40a8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b40ac:;
    {
        cpu->r[1] = rd32(0x001b40b4u + + 0xdcu);
    }
L_001b40b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b40b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b40bcu, cpu->r[1], 0, 0);
    }
L_001b40b8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001b40bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_001b40c0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001b40c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b40c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001b40cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001b40d0:;
    {
        cpu->r[14] = 0x001b40d4u; imp_sprintf(cpu); /* sprintf */
    }
L_001b40d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b40d8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b40dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b40e0:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001b40e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001b40e8:;
    {
        cpu->r[14] = 0x001b40ecu; fn_001d06ec(cpu);
    }
L_001b40ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b40f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b40f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001b40f8:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_001b40fc:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[7]);
    }
L_001b4100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b410c;
        }
    }
L_001b4104:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4108:;
    {
        cpu->r[14] = 0x001b410cu; fn_0018ba60(cpu);
    }
L_001b410c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001b4110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b411c;
        }
    }
L_001b4114:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b4118:;
    {
        cpu->r[14] = 0x001b411cu; fn_0018ba20(cpu);
    }
L_001b411c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b4120:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b4124:;
    {
        wr8(cpu->r[4] + + 0x424u, cpu->r[2]);
    }
L_001b4128:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b412c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b4130:;
    {
        cpu->r[14] = 0x001b4138u;
    }
L_001b4134:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4138u)) return;
    }
L_001b4138:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b413c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4150;
        }
    }
L_001b4144:;
    {
        cpu->r[14] = 0x001b4148u; fn_0018ba20(cpu);
    }
L_001b4148:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b414c:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b4150:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b4154:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4158:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[1]);
    }
L_001b415c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001b4160:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x21cu);
    }
L_001b4164:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b4168:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b416c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4178;
        }
    }
L_001b4170:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_001b4174:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4178u)) return;
    }
L_001b4178:;
    {
        cpu->r[14] = 0x001b417cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b417c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 1, 10u, &shc); cpu->r[6] = v;
        }
    }
L_001b4180:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b4184:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[9]; cpu->r[7] = v;
        }
    }
L_001b4188:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 17u, &shc); cpu->r[11] = v;
        }
    }
L_001b418c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[11] = (uint32_t)v;
        cpu->r[12] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b4190:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 18u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN13GLXPlayerHttp10sendByPostEPcS0_ @ 001b4194 (arm) */
void fn_001b4194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4194:;
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
L_001b4198:;
    {
        cpu->r[7] = rd32(0x001b41a0u + + 0x27cu);
    }
L_001b419c:;
    {
        cpu->r[3] = rd32(0x001b41a4u + + 0x27cu);
    }
L_001b41a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000224u, 1, 0);
    }
L_001b41a4:;
    {
        cpu->r[7] = add_flags(cpu, 0x001b41acu, cpu->r[7], 0, 0);
    }
L_001b41a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b41ac:;
    {
        cpu->r[0] = rd32(0x001b41b4u + + 0x270u);
    }
L_001b41b0:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001b41b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001b41b8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001b41bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001b41c0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b41c8u, cpu->r[0], 0, 0);
    }
L_001b41c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b41c8:;
    {
        wr32(cpu->r[13] + + 0x21cu, cpu->r[3]);
    }
L_001b41cc:;
    {
        cpu->r[14] = 0x001b41d0u; fn_001d0ac4(cpu);
    }
L_001b41d0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b41d4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
        }
    }
L_001b41d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001b41dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001b41e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4408;
        }
    }
L_001b41e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_001b41e8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001b41ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b41f0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b41f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b41f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001b41fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001b4200:;
    {
        cpu->r[14] = 0x001b4204u; imp_memset(cpu); /* memset */
    }
L_001b4204:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b4208:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b420c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b4210:;
    {
        cpu->r[14] = 0x001b4214u; imp_memset(cpu); /* memset */
    }
L_001b4214:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4218:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b421c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b4220:;
    {
        cpu->r[14] = 0x001b4224u; fn_001d0700(cpu);
    }
L_001b4224:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b4228:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b422c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b4230:;
    {
        cpu->r[14] = 0x001b4234u; fn_001d0700(cpu);
    }
L_001b4234:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b4238:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b423c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b4240:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b4244:;
    {
        cpu->r[14] = 0x001b4248u; fn_001d0048(cpu);
    }
L_001b4248:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b424c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b4250:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b4254:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4258:;
    {
        cpu->r[14] = 0x001b425cu; fn_001d0700(cpu);
    }
L_001b425c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b4260:;
    {
        cpu->r[14] = 0x001b4264u; fn_001d0434(cpu);
    }
L_001b4264:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_001b4268:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001b426c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4270:;
    {
        cpu->r[14] = 0x001b4274u; fn_001d06ec(cpu);
    }
L_001b4274:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b4278:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b427c:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b4280:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4284:;
    {
        cpu->r[14] = 0x001b4288u; fn_001d0048(cpu);
    }
L_001b4288:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b428c:;
    {
        cpu->r[14] = 0x001b4290u; fn_001d0434(cpu);
    }
L_001b4290:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b4294:;
    {
        cpu->r[14] = 0x001b4298u; fn_001d0434(cpu);
    }
L_001b4298:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b429c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b42a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b42a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b42a8:;
    {
        cpu->r[14] = 0x001b42acu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b42ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b42b0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b42b4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b42b8:;
    {
        cpu->r[14] = 0x001b42bcu; fn_001d0700(cpu);
    }
L_001b42bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b42c0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b42c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b42c8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b42cc:;
    {
        cpu->r[14] = 0x001b42d0u; fn_001d06ec(cpu);
    }
L_001b42d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b42d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b42d8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001b42dc:;
    {
        cpu->r[14] = 0x001b42e0u; fn_001d0700(cpu);
    }
L_001b42e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b42e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b42e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b42f4;
        }
    }
L_001b42ec:;
    {
        cpu->r[14] = 0x001b42f0u; fn_0018ba20(cpu);
    }
L_001b42f0:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[5]);
    }
L_001b42f4:;
    {
        cpu->r[1] = rd32(0x001b42fcu + + 0x12cu);
    }
L_001b42f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b42fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b4304u, cpu->r[1], 0, 0);
    }
L_001b4300:;
    {
        cpu->r[14] = 0x001b4304u; fn_001d06d4(cpu);
    }
L_001b4304:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x414u);
    }
L_001b4308:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b430c:;
    {
        cpu->r[14] = 0x001b4310u; fn_001d06d4(cpu);
    }
L_001b4310:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4314:;
    {
        cpu->r[14] = 0x001b4318u; fn_001d0434(cpu);
    }
L_001b4318:;
    {
        cpu->r[1] = rd32(0x001b4320u + + 0x10cu);
    }
L_001b431c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b4320:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b4324:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b432cu, cpu->r[1], 0, 0);
    }
L_001b4328:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001b432c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b4330:;
    {
        cpu->r[14] = 0x001b4334u; imp_sprintf(cpu); /* sprintf */
    }
L_001b4334:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b4338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b433c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b434c;
        }
    }
L_001b4340:;
    {
        cpu->r[14] = 0x001b4344u; fn_0018ba20(cpu);
    }
L_001b4344:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4348:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[3]);
    }
L_001b434c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b4350:;
    {
        cpu->r[14] = 0x001b4354u; fn_001d0434(cpu);
    }
L_001b4354:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b4358:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b435c:;
    {
        cpu->r[14] = 0x001b4360u; fn_001d0434(cpu);
    }
L_001b4360:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001b4364:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b4368:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b436c:;
    {
        cpu->r[14] = 0x001b4370u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4370:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b4374:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4378:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[0]);
    }
L_001b437c:;
    {
        cpu->r[14] = 0x001b4380u; fn_001d0700(cpu);
    }
L_001b4380:;
    {
        cpu->r[1] = rd32(0x001b4388u + + 0xa8u);
    }
L_001b4384:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b4388:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001b438c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b4394u, cpu->r[1], 0, 0);
    }
L_001b4390:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_001b4394:;
    {
        cpu->r[14] = 0x001b4398u; imp_sprintf(cpu); /* sprintf */
    }
L_001b4398:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b439c:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[5]);
    }
L_001b43a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b43ac;
        }
    }
L_001b43a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b43a8:;
    {
        cpu->r[14] = 0x001b43acu; fn_0018ba20(cpu);
    }
L_001b43ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b43b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b43b4:;
    {
        wr8(cpu->r[4] + + 0x424u, cpu->r[2]);
    }
L_001b43b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b43bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b43c0:;
    {
        cpu->r[14] = 0x001b43c8u;
    }
L_001b43c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b43c8u)) return;
    }
L_001b43c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x408u);
    }
L_001b43cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b43d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b43e0;
        }
    }
L_001b43d4:;
    {
        cpu->r[14] = 0x001b43d8u; fn_0018ba20(cpu);
    }
L_001b43d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b43dc:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[3]);
    }
L_001b43e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b43e4:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[3]);
    }
L_001b43e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b43ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001b43f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x21cu);
    }
L_001b43f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b43f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b43fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4418;
        }
    }
L_001b4400:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_001b4404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4408u)) return;
    }
L_001b4408:;
    {
        cpu->r[0] = rd32(0x001b4410u + + 0x24u);
    }
L_001b440c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b4414u, cpu->r[0], 0, 0);
    }
L_001b4410:;
    {
        cpu->r[14] = 0x001b4414u; fn_001d0ac4(cpu);
    }
L_001b4414:;
    {
        goto L_001b43e8;
    }
L_001b4418:;
    {
        cpu->r[14] = 0x001b441cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b441c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 4, 4u, &shc); cpu->r[6] = v;
        }
    }
L_001b4420:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b4424:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        wr16(cpu->r[7], cpu->r[11]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b4428:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001b442c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 15u, &shc); cpu->r[11] = v;
        }
    }
L_001b4430:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 15u, &shc); cpu->r[11] = v;
        }
    }
L_001b4434:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 13u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN13GLXPlayerHttp9sendByGetEPcS0_ @ 001b4438 (arm) */
void fn_001b4438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4438:;
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
L_001b443c:;
    {
        cpu->r[7] = rd32(0x001b4444u + + 0x260u);
    }
L_001b4440:;
    {
        cpu->r[3] = rd32(0x001b4448u + + 0x260u);
    }
L_001b4444:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000021cu, 1, 0);
    }
L_001b4448:;
    {
        cpu->r[7] = add_flags(cpu, 0x001b4450u, cpu->r[7], 0, 0);
    }
L_001b444c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b4450:;
    {
        cpu->r[0] = rd32(0x001b4458u + + 0x254u);
    }
L_001b4454:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001b4458:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b445c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001b4460:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b4468u, cpu->r[0], 0, 0);
    }
L_001b4464:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b4468:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b446c:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[3]);
    }
L_001b4470:;
    {
        cpu->r[14] = 0x001b4474u; fn_001d0ac4(cpu);
    }
L_001b4474:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b4478:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b447c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001b4480:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001b4484:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001b4488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4690;
        }
    }
L_001b448c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_001b4490:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b4494:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b4498:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b449c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b44a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001b44a4:;
    {
        cpu->r[14] = 0x001b44a8u; imp_memset(cpu); /* memset */
    }
L_001b44a8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b44ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b44b0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b44b4:;
    {
        cpu->r[14] = 0x001b44b8u; imp_memset(cpu); /* memset */
    }
L_001b44b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b44bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b44c0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b44c4:;
    {
        cpu->r[14] = 0x001b44c8u; fn_001d0700(cpu);
    }
L_001b44c8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b44cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b44d0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b44d4:;
    {
        cpu->r[14] = 0x001b44d8u; fn_001d0700(cpu);
    }
L_001b44d8:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b44dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b44e0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b44e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b44e8:;
    {
        cpu->r[14] = 0x001b44ecu; fn_001d0048(cpu);
    }
L_001b44ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b44f0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b44f4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b44f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b44fc:;
    {
        cpu->r[14] = 0x001b4500u; fn_001d0700(cpu);
    }
L_001b4500:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b4504:;
    {
        cpu->r[14] = 0x001b4508u; fn_001d0434(cpu);
    }
L_001b4508:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_001b450c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001b4510:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4514:;
    {
        cpu->r[14] = 0x001b4518u; fn_001d06ec(cpu);
    }
L_001b4518:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b451c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b4520:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b4524:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4528:;
    {
        cpu->r[14] = 0x001b452cu; fn_001d0048(cpu);
    }
L_001b452c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4530:;
    {
        cpu->r[14] = 0x001b4534u; fn_001d0434(cpu);
    }
L_001b4534:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b4538:;
    {
        cpu->r[14] = 0x001b453cu; fn_001d0434(cpu);
    }
L_001b453c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b4540:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b4544:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b4548:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b454c:;
    {
        cpu->r[14] = 0x001b4550u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4550:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b4554:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b4558:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b455c:;
    {
        cpu->r[14] = 0x001b4560u; fn_001d0700(cpu);
    }
L_001b4560:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b4564:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b4568:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b456c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b4570:;
    {
        cpu->r[14] = 0x001b4574u; fn_001d06ec(cpu);
    }
L_001b4574:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4578:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b457c:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001b4580:;
    {
        cpu->r[14] = 0x001b4584u; fn_001d0700(cpu);
    }
L_001b4584:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x408u);
    }
L_001b4588:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b458c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4598;
        }
    }
L_001b4590:;
    {
        cpu->r[14] = 0x001b4594u; fn_0018ba20(cpu);
    }
L_001b4594:;
    {
        wr32(cpu->r[6] + + 0x408u, cpu->r[5]);
    }
L_001b4598:;
    {
        cpu->r[1] = rd32(0x001b45a0u + + 0x110u);
    }
L_001b459c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b45a8u, cpu->r[1], 0, 0);
    }
L_001b45a4:;
    {
        cpu->r[14] = 0x001b45a8u; fn_001d06dc(cpu);
    }
L_001b45a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b45ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45b0:;
    {
        cpu->r[14] = 0x001b45b4u; fn_001d06d4(cpu);
    }
L_001b45b4:;
    {
        cpu->r[1] = rd32(0x001b45bcu + + 0xf8u);
    }
L_001b45b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b45c4u, cpu->r[1], 0, 0);
    }
L_001b45c0:;
    {
        cpu->r[14] = 0x001b45c4u; fn_001d06d4(cpu);
    }
L_001b45c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b45c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45cc:;
    {
        cpu->r[14] = 0x001b45d0u; fn_001d06d4(cpu);
    }
L_001b45d0:;
    {
        cpu->r[1] = rd32(0x001b45d8u + + 0xe0u);
    }
L_001b45d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b45e0u, cpu->r[1], 0, 0);
    }
L_001b45dc:;
    {
        cpu->r[14] = 0x001b45e0u; fn_001d06d4(cpu);
    }
L_001b45e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x414u);
    }
L_001b45e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45e8:;
    {
        cpu->r[14] = 0x001b45ecu; fn_001d06d4(cpu);
    }
L_001b45ec:;
    {
        cpu->r[1] = rd32(0x001b45f4u + + 0xc8u);
    }
L_001b45f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b45f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b45fcu, cpu->r[1], 0, 0);
    }
L_001b45f8:;
    {
        cpu->r[14] = 0x001b45fcu; fn_001d06d4(cpu);
    }
L_001b45fc:;
    {
        cpu->r[1] = rd32(0x001b4604u + + 0xbcu);
    }
L_001b4600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4604:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b460cu, cpu->r[1], 0, 0);
    }
L_001b4608:;
    {
        cpu->r[14] = 0x001b460cu; fn_001d06d4(cpu);
    }
L_001b460c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b4610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4614:;
    {
        cpu->r[14] = 0x001b4618u; fn_001d06d4(cpu);
    }
L_001b4618:;
    {
        cpu->r[1] = rd32(0x001b4620u + + 0xa4u);
    }
L_001b461c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4620:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b4628u, cpu->r[1], 0, 0);
    }
L_001b4624:;
    {
        cpu->r[14] = 0x001b4628u; fn_001d06d4(cpu);
    }
L_001b4628:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b462c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4638;
        }
    }
L_001b4630:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b4634:;
    {
        cpu->r[14] = 0x001b4638u; fn_0018ba20(cpu);
    }
L_001b4638:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001b463c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b4640:;
    {
        wr8(cpu->r[6] + + 0x424u, cpu->r[4]);
    }
L_001b4644:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b4648:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b464c:;
    {
        cpu->r[14] = 0x001b4654u;
    }
L_001b4650:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4654u)) return;
    }
L_001b4654:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x408u);
    }
L_001b4658:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001b465c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4668;
        }
    }
L_001b4660:;
    {
        cpu->r[14] = 0x001b4664u; fn_0018ba20(cpu);
    }
L_001b4664:;
    {
        wr32(cpu->r[6] + + 0x408u, cpu->r[4]);
    }
L_001b4668:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b466c:;
    {
        wr32(cpu->r[6] + + 0x40cu, cpu->r[3]);
    }
L_001b4670:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b4674:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001b4678:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x214u);
    }
L_001b467c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b4680:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b4684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b46a0;
        }
    }
L_001b4688:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000021cu, 0, 0);
    }
L_001b468c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4690u)) return;
    }
L_001b4690:;
    {
        cpu->r[0] = rd32(0x001b4698u + + 0x30u);
    }
L_001b4694:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b469cu, cpu->r[0], 0, 0);
    }
L_001b4698:;
    {
        cpu->r[14] = 0x001b469cu; fn_001d0ac4(cpu);
    }
L_001b469c:;
    {
        goto L_001b4670;
    }
L_001b46a0:;
    {
        cpu->r[14] = 0x001b46a4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b46a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 1, 31u, &shc); cpu->r[5] = v;
        }
    }
L_001b46a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b46ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 8u, &shc); cpu->r[11] = v;
        }
    }
L_001b46b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001b46b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b46b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001b46bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 6u, &shc); cpu->r[11] = v;
        }
    }
L_001b46c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 6u, &shc); cpu->r[11] = v;
        }
    }
L_001b46c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001b46c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 4u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN15GLXPlayerSocket11GetAcceptIPEv @ 001b46cc (arm) */
void fn_001b46cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x824u);
    }
L_001b46d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket13GetAcceptPortEv @ 001b46d4 (arm) */
void fn_001b46d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x828u);
    }
L_001b46d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket13SetAcceptPortEi @ 001b46dc (arm) */
void fn_001b46dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46dc:;
    {
        wr32(cpu->r[0] + + 0x828u, cpu->r[1]);
    }
L_001b46e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket9SetSocketEi @ 001b46e4 (arm) */
void fn_001b46e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46e4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001b46e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket13GetSocketTypeEv @ 001b46ec (arm) */
void fn_001b46ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x820u);
    }
L_001b46f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket13SetSocketTypeEi @ 001b46f4 (arm) */
void fn_001b46f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46f4:;
    {
        wr32(cpu->r[0] + + 0x820u, cpu->r[1]);
    }
L_001b46f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket6CancelEv @ 001b46fc (arm) */
void fn_001b46fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b46fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b4700:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b4704:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b4708:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
        }
    }
L_001b470c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001b4710:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001b4714:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4718u)) return;
        }
    }
L_001b4718:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001b471c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4720u)) return;
        }
    }
L_001b4720:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_001b4724:;
    {
        wr32(cpu->r[0] + + 0x858u, cpu->r[1]);
    }
L_001b4728:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001b472c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001b4730:;
    {
        cpu->r[14] = 0x001b4738u;
    }
L_001b4734:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4738u)) return;
    }
L_001b4738:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b473cu)) return;
    }
}

/* _ZN15GLXPlayerSocket12IsInProgressEv @ 001b473c (arm) */
void fn_001b473c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b473c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b4740:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4744:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
        }
    }
L_001b4748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4760;
        }
    }
L_001b474c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001b4750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4760;
        }
    }
L_001b4754:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_001b4758:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b475c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b4760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b4764:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerSocket15IsErrorOccurredEv @ 001b4768 (arm) */
void fn_001b4768(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4768:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b476c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_001b4770:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b4774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b4778:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNKSs4findEPKcj @ 001b477c (arm) */
void fn_001b477c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b477c:;
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
L_001b4780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4784:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b4788:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001b478c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b4790:;
    {
        cpu->r[14] = 0x001b4794u; imp_strlen(cpu); /* strlen */
    }
L_001b4794:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b4798:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b479c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001b47a0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001b47a4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b47d8;
        }
    }
L_001b47a8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001b47ac:;
    {
        if (cond_test(cpu, 10)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_001b47b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b47cc;
        }
    }
L_001b47b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b47b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b47bcu)) return;
    }
L_001b47bc:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_001b47c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001b47c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
        }
    }
L_001b47c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b47b4;
        }
    }
L_001b47cc:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001b47d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b47d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b47d8u)) return;
    }
L_001b47d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001b47dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001b47e0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b47a8;
        }
    }
L_001b47e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001b47e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b47ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001b47f0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
        }
    }
L_001b47f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b47c0;
        }
    }
L_001b47f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b47fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b4800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_001b4804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_001b4808:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001b480c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b487c;
        }
    }
L_001b4810:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_001b4814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4838;
        }
    }
L_001b4818:;
    {
        cpu->r[12] = rd8(cpu->r[7] + - 0x1u);
    }
L_001b481c:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001b4820:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001b4824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4840;
        }
    }
L_001b4828:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001b482c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b4830:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_001b4834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4818;
        }
    }
L_001b4838:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001b483c:;
    {
        goto L_001b47c0;
    }
L_001b4840:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001b4844:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001b4848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4838;
        }
    }
L_001b484c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001b4850:;
    {
        cpu->r[4] = rd8(cpu->r[6]);
    }
L_001b4854:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b4858:;
    {
        cpu->r[12] = rd8(cpu->r[3] + - 0x1u);
    }
L_001b485c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_001b4860:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4828;
        }
    }
L_001b4864:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b4868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b486c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b47bc;
        }
    }
L_001b4870:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001b4874:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4850;
        }
    }
L_001b4878:;
    {
        goto L_001b47c0;
    }
L_001b487c:;
    {
        cpu->r[0] = rd8(cpu->r[5]);
    }
L_001b4880:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_001b4884:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b4888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b47c0;
        }
    }
L_001b488c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b4890:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001b4894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b47c0;
        }
    }
L_001b4898:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_001b489c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b48a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b488c;
        }
    }
L_001b48a4:;
    {
        goto L_001b47c0;
    }
}

/* _ZNSt4priv12_String_baseIcSaIcEE17_M_allocate_blockEj @ 001b48a8 (arm) */
void fn_001b48a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b48a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b48ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b48b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b48b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b48b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b48cc;
        }
    }
L_001b48bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_001b48c0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b48dc;
        }
    }
L_001b48c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b48c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b48ccu)) return;
    }
L_001b48cc:;
    {
        cpu->r[0] = rd32(0x001b48d4u + + 0x40u);
    }
L_001b48d0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b48d8u, cpu->r[0], 0, 0);
    }
L_001b48d4:;
    {
        cpu->r[14] = 0x001b48d8u; fn_00208298(cpu);
    }
L_001b48d8:;
    {
        goto L_001b48c4;
    }
L_001b48dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b48e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001b48e4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b4908;
        }
    }
L_001b48e8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b48ec:;
    {
        cpu->r[14] = 0x001b48f0u; fn_0018ba6c(cpu);
    }
L_001b48f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b48f4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001b48f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b48fc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001b4900:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b4904:;
    {
        goto L_001b48c4;
    }
L_001b4908:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b490c:;
    {
        cpu->r[14] = 0x001b4910u; fn_00208278(cpu);
    }
L_001b4910:;
    {
        goto L_001b48f0;
    }
}

/* _ZN15GLXPlayerSocketC1EPciP23GLXPlayerSocketObserver @ 001b4918 (arm) */
void fn_001b4918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4918:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b491c:;
    {
        cpu->r[14] = rd32(0x001b4924u + + 0x7cu);
    }
L_001b4920:;
    {
        cpu->r[5] = rd32(0x001b4928u + + 0x7cu);
    }
L_001b4924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4928:;
    {
        cpu->r[14] = add_flags(cpu, 0x001b4930u, cpu->r[14], 0, 0);
    }
L_001b492c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000820u, 0, 0);
    }
L_001b4930:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001b4934:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001b4938:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_001b493c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001b4940:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001b4944:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001b4948:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b494c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001b4950:;
    {
        wr32(cpu->r[4] + + 0x83cu, cpu->r[12]);
    }
L_001b4954:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001b4958:;
    {
        wr32(cpu->r[4] + + 0x840u, cpu->r[12]);
    }
L_001b495c:;
    {
        cpu->r[14] = 0x001b4960u; fn_001b48a8(cpu);
    }
L_001b4960:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x83cu);
    }
L_001b4964:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4968:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b496c:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001b4970:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001b4974:;
    {
        wr32(cpu->r[4] + + 0x854u, cpu->r[3]);
    }
L_001b4978:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001b497c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001b4980:;
    {
        wr32(cpu->r[4] + + 0x824u, cpu->r[3]);
    }
L_001b4984:;
    {
        wr32(cpu->r[4] + + 0x858u, cpu->r[3]);
    }
L_001b4988:;
    {
        wr32(cpu->r[4] + + 0x85cu, cpu->r[3]);
    }
L_001b498c:;
    {
        wr32(cpu->r[4] + + 0x860u, cpu->r[3]);
    }
L_001b4990:;
    {
        wr32(cpu->r[4] + + 0x864u, cpu->r[3]);
    }
L_001b4994:;
    {
        wr32(cpu->r[4] + + 0x84cu, cpu->r[3]);
    }
L_001b4998:;
    {
        wr32(cpu->r[4] + + 0x850u, cpu->r[3]);
    }
L_001b499c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b49a0u)) return;
    }
}

/* _ZN15GLXPlayerSocketC2EPciP23GLXPlayerSocketObserver @ 001b49a8 (arm) */
void fn_001b49a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b49a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b49ac:;
    {
        cpu->r[14] = rd32(0x001b49b4u + + 0x7cu);
    }
L_001b49b0:;
    {
        cpu->r[5] = rd32(0x001b49b8u + + 0x7cu);
    }
L_001b49b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b49b8:;
    {
        cpu->r[14] = add_flags(cpu, 0x001b49c0u, cpu->r[14], 0, 0);
    }
L_001b49bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000820u, 0, 0);
    }
L_001b49c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001b49c4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001b49c8:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_001b49cc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001b49d0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001b49d4:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001b49d8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b49dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001b49e0:;
    {
        wr32(cpu->r[4] + + 0x83cu, cpu->r[12]);
    }
L_001b49e4:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001b49e8:;
    {
        wr32(cpu->r[4] + + 0x840u, cpu->r[12]);
    }
L_001b49ec:;
    {
        cpu->r[14] = 0x001b49f0u; fn_001b48a8(cpu);
    }
L_001b49f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x83cu);
    }
L_001b49f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b49f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b49fc:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001b4a00:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001b4a04:;
    {
        wr32(cpu->r[4] + + 0x854u, cpu->r[3]);
    }
L_001b4a08:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001b4a0c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001b4a10:;
    {
        wr32(cpu->r[4] + + 0x824u, cpu->r[3]);
    }
L_001b4a14:;
    {
        wr32(cpu->r[4] + + 0x858u, cpu->r[3]);
    }
L_001b4a18:;
    {
        wr32(cpu->r[4] + + 0x85cu, cpu->r[3]);
    }
L_001b4a1c:;
    {
        wr32(cpu->r[4] + + 0x860u, cpu->r[3]);
    }
L_001b4a20:;
    {
        wr32(cpu->r[4] + + 0x864u, cpu->r[3]);
    }
L_001b4a24:;
    {
        wr32(cpu->r[4] + + 0x84cu, cpu->r[3]);
    }
L_001b4a28:;
    {
        wr32(cpu->r[4] + + 0x850u, cpu->r[3]);
    }
L_001b4a2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4a30u)) return;
    }
}

/* _ZNKSs6substrEjj @ 001b4a38 (arm) */
void fn_001b4a38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4a38:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b4a3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4a40:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001b4a44:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001b4a48:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_001b4a4c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_001b4a50:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001b4a54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001b4a58:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4ab0;
        }
    }
L_001b4a5c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001b4a60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001b4a64:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001b4a68:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
        }
    }
L_001b4a6c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
        }
    }
L_001b4a70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001b4a74:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001b4a78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b4a7c:;
    {
        cpu->r[14] = 0x001b4a80u; fn_001b48a8(cpu);
    }
L_001b4a80:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001b4a84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b4a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4a9c;
        }
    }
L_001b4a8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b4a90:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b4a94:;
    {
        cpu->r[14] = 0x001b4a98u; imp_memcpy(cpu); /* memcpy */
    }
L_001b4a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001b4a9c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001b4aa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4aa4:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b4aa8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4ab0u)) return;
    }
L_001b4ab0:;
    {
        cpu->r[0] = rd32(0x001b4ab8u + + 0xcu);
    }
L_001b4ab4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b4abcu, cpu->r[0], 0, 0);
    }
L_001b4ab8:;
    {
        cpu->r[14] = 0x001b4abcu; fn_00208288(cpu);
    }
L_001b4abc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4ac0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4ac4u)) return;
    }
}

/* _ZNSt4priv12_String_baseIcSaIcEE19_M_deallocate_blockEv @ 001b4ac8 (arm) */
void fn_001b4ac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4ac8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001b4acc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b4ad0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b4ad4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b4ad8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b4adc:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001b4ae0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001b4ae4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b4ae8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4af4;
        }
    }
L_001b4aec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b4af0:;
    {
        return fn_002082a8(cpu);
    }
L_001b4af4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b4af8:;
    {
        return fn_0018ba20(cpu);
    }
}

/* _ZN15GLXPlayerSocket5StartEv @ 001b4afc (arm) */
void fn_001b4afc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4afc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b4b00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4b04:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b4b08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_001b4b0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b4b10:;
    {
        wr32(cpu->r[4] + + 0x81cu, cpu->r[5]);
    }
L_001b4b14:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b4b18:;
    {
        cpu->r[14] = 0x001b4b1cu; fn_001d0700(cpu);
    }
L_001b4b1c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b4b20:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001b4b24:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b4b28:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b4b2c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001b4b30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4b34u)) return;
    }
}

/* _ZN15GLXPlayerSocket11SetAcceptIPEPc @ 001b4b34 (arm) */
void fn_001b4b34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4b34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b4b38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4b3c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b4b40:;
    {
        cpu->r[14] = 0x001b4b44u; fn_001d0ce8(cpu);
    }
L_001b4b44:;
    {
        wr32(cpu->r[4] + + 0x824u, cpu->r[0]);
    }
L_001b4b48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4b4cu)) return;
    }
}

/* _ZNSsC1EPKcRKSaIcE @ 001b4b4c (arm) */
void fn_001b4b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4b4c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b4b50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4b54:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b4b58:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b4b5c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[4]);
    }
L_001b4b60:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[4]);
    }
L_001b4b64:;
    {
        cpu->r[14] = 0x001b4b68u; imp_strlen(cpu); /* strlen */
    }
L_001b4b68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001b4b6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4b70:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001b4b74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b4b78:;
    {
        cpu->r[14] = 0x001b4b7cu; fn_001b48a8(cpu);
    }
L_001b4b7c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001b4b80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b4b84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001b4b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4b9c;
        }
    }
L_001b4b8c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b4b90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b4b94:;
    {
        cpu->r[14] = 0x001b4b98u; imp_memcpy(cpu); /* memcpy */
    }
L_001b4b98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001b4b9c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001b4ba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4ba4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4ba8:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_001b4bac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4bb0u)) return;
    }
}

/* _ZN15GLXPlayerSocketD1Ev @ 001b4bb0 (arm) */
void fn_001b4bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4bb0:;
    {
        cpu->r[3] = rd32(0x001b4bb8u + + 0x74u);
    }
L_001b4bb4:;
    {
        cpu->r[2] = rd32(0x001b4bbcu + + 0x74u);
    }
L_001b4bb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b4bc0u, cpu->r[3], 0, 0);
    }
L_001b4bbc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b4bc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4bc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x824u);
    }
L_001b4bc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b4bcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4bd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b4bd4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b4bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4be8;
        }
    }
L_001b4bdc:;
    {
        cpu->r[14] = 0x001b4be0u; fn_0018ba20(cpu);
    }
L_001b4be0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4be4:;
    {
        wr32(cpu->r[4] + + 0x824u, cpu->r[3]);
    }
L_001b4be8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b4bec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001b4bf0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001b4bf4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b4bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4c18;
        }
    }
L_001b4bfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4c00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4c18;
        }
    }
L_001b4c04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x82cu);
    }
L_001b4c08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b4c0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b4c10:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4c20;
        }
    }
L_001b4c14:;
    {
        cpu->r[14] = 0x001b4c18u; fn_002082a8(cpu);
    }
L_001b4c18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4c1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4c20u)) return;
    }
L_001b4c20:;
    {
        cpu->r[14] = 0x001b4c24u; fn_0018ba20(cpu);
    }
L_001b4c24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4c28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4c2cu)) return;
    }
}

/* _ZN15GLXPlayerSocketD0Ev @ 001b4c34 (arm) */
void fn_001b4c34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4c34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b4c38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4c3c:;
    {
        cpu->r[14] = 0x001b4c40u; fn_001b4bb0(cpu);
    }
L_001b4c40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4c44:;
    {
        cpu->r[14] = 0x001b4c48u; fn_0018ba20(cpu);
    }
L_001b4c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4c4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4c50u)) return;
    }
}

/* _ZN15GLXPlayerSocketD2Ev @ 001b4c50 (arm) */
void fn_001b4c50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4c50:;
    {
        cpu->r[3] = rd32(0x001b4c58u + + 0x74u);
    }
L_001b4c54:;
    {
        cpu->r[2] = rd32(0x001b4c5cu + + 0x74u);
    }
L_001b4c58:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b4c60u, cpu->r[3], 0, 0);
    }
L_001b4c5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b4c60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4c64:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x824u);
    }
L_001b4c68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b4c6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4c70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b4c74:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b4c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4c88;
        }
    }
L_001b4c7c:;
    {
        cpu->r[14] = 0x001b4c80u; fn_0018ba20(cpu);
    }
L_001b4c80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4c84:;
    {
        wr32(cpu->r[4] + + 0x824u, cpu->r[3]);
    }
L_001b4c88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b4c8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001b4c90:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001b4c94:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b4c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4cb8;
        }
    }
L_001b4c9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4cb8;
        }
    }
L_001b4ca4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x82cu);
    }
L_001b4ca8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b4cac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b4cb0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4cc0;
        }
    }
L_001b4cb4:;
    {
        cpu->r[14] = 0x001b4cb8u; fn_002082a8(cpu);
    }
L_001b4cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4cbc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4cc0u)) return;
    }
L_001b4cc0:;
    {
        cpu->r[14] = 0x001b4cc4u; fn_0018ba20(cpu);
    }
L_001b4cc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4cc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4cccu)) return;
    }
}

/* _ZNSs9_M_appendEPKcS0_ @ 001b4cd4 (arm) */
void fn_001b4cd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4cd4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b4cd8:;
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
L_001b4cdc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b4ce0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b4ce4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b4ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4df8;
        }
    }
L_001b4cec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_001b4cf0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001b4cf4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001b4cf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001b4cfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_001b4d00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + + 0x10u;
        cpu->r[6] = rd32(cpu->r[3] + + 0x10u);
        cpu->r[3] = wb_tmp;
        }
    }
L_001b4d04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0]);
        }
    }
L_001b4d08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_001b4d0c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001b4d10:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b4e04;
        }
    }
L_001b4d14:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_001b4d18:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001b4d1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001b4d20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_001b4d24:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001b4d28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4e84;
        }
    }
L_001b4d2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b4d30:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001b4d34:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
        }
    }
L_001b4d38:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
        }
    }
L_001b4d3c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001b4d40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4d4c;
        }
    }
L_001b4d44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001b4d48:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b4e54;
        }
    }
L_001b4d4c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_001b4d50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001b4d54:;
    {
        cpu->r[14] = 0x001b4d58u; fn_0018ba6c(cpu);
    }
L_001b4d58:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b4d5c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b4d60:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001b4d64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b4d68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b4d6c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001b4d70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b4d74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_001b4d78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b4d98;
        }
    }
L_001b4d7c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001b4d80:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[6]);
    }
L_001b4d84:;
    {
        wr8(cpu->r[7] + cpu->r[6], cpu->r[3]);
    }
L_001b4d88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b4d8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001b4d90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4d80;
        }
    }
L_001b4d94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001b4d98:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001b4d9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b4dbc;
        }
    }
L_001b4da0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4da4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001b4da8:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001b4dac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b4db0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001b4db4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4da4;
        }
    }
L_001b4db8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001b4dbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4dc0:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_001b4dc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b4dc8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001b4dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4dec;
        }
    }
L_001b4dd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b4dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4dec;
        }
    }
L_001b4dd8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001b4ddc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b4de0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b4de4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4e7c;
        }
    }
L_001b4de8:;
    {
        cpu->r[14] = 0x001b4decu; fn_002082a8(cpu);
    }
L_001b4dec:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_001b4df0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001b4df4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[7]);
    }
L_001b4df8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b4dfc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001b4e00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b4e04u)) return;
    }
L_001b4e04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b4e08:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b4e0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b4e10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b4e30;
        }
    }
L_001b4e14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001b4e18:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b4e1c:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x1u;
        cpu->r[1] = rd8(cpu->r[3] + + 0x1u);
        cpu->r[3] = wb_tmp;
    }
L_001b4e20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b4e24:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x1u;
        wr8(cpu->r[6] + + 0x1u, cpu->r[1]);
        cpu->r[6] = wb_tmp;
    }
L_001b4e28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b4e1c;
        }
    }
L_001b4e2c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b4e30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b4e34:;
    {
        wr8(cpu->r[6] + cpu->r[10], cpu->r[3]);
    }
L_001b4e38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b4e3c:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001b4e40:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001b4e44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b4e48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001b4e4c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_001b4e50:;
    {
        goto L_001b4df8;
    }
L_001b4e54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4e58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001b4e5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001b4e60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4d64;
        }
    }
L_001b4e64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000080u, 1, 1);
    }
L_001b4e68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001b4e6c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b4d54;
        }
    }
L_001b4e70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b4e74:;
    {
        cpu->r[14] = 0x001b4e78u; fn_00208278(cpu);
    }
L_001b4e78:;
    {
        goto L_001b4d58;
    }
L_001b4e7c:;
    {
        cpu->r[14] = 0x001b4e80u; fn_0018ba20(cpu);
    }
L_001b4e80:;
    {
        goto L_001b4dec;
    }
L_001b4e84:;
    {
        cpu->r[0] = rd32(0x001b4e8cu + + 0x8u);
    }
L_001b4e88:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b4e90u, cpu->r[0], 0, 0);
    }
L_001b4e8c:;
    {
        cpu->r[14] = 0x001b4e90u; fn_00208298(cpu);
    }
L_001b4e90:;
    {
        goto L_001b4d2c;
    }
}

/* _ZN15GLXPlayerSocket15ParseHttpHeaderEPc @ 001b4e98 (arm) */
void fn_001b4e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b4e98:;
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
L_001b4e9c:;
    {
        cpu->r[4] = rd32(0x001b4ea4u + + 0x348u);
    }
L_001b4ea0:;
    {
        cpu->r[11] = rd32(0x001b4ea8u + + 0x348u);
    }
L_001b4ea4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001b4ea8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b4eb0u, cpu->r[4], 0, 0);
    }
L_001b4eac:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b4eb0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b4eb4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b4eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001b4ebc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b4ec0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001b4ec4:;
    {
        cpu->r[14] = 0x001b4ec8u; fn_001d0434(cpu);
    }
L_001b4ec8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b4ecc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4ed0:;
    {
        cpu->r[14] = 0x001b4ed4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4ed4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b4ed8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4edc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b4ee0:;
    {
        cpu->r[14] = 0x001b4ee4u; fn_001d0700(cpu);
    }
L_001b4ee4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b4ee8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b4eec:;
    {
        cpu->r[14] = 0x001b4ef0u; fn_001d01ac(cpu);
    }
L_001b4ef0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x83cu);
    }
L_001b4ef4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x840u);
    }
L_001b4ef8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b4efc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5034;
        }
    }
L_001b4f00:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b4f04:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b4f08:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001b4f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b4f10:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001b4f14:;
    {
        cpu->r[14] = 0x001b4f18u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4f18:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b4f1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b4f20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b4f24:;
    {
        cpu->r[14] = 0x001b4f28u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b4f28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4f2c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b4f30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b4f34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4f38:;
    {
        cpu->r[14] = 0x001b4f3cu; fn_001d0700(cpu);
    }
L_001b4f3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b4f40:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b4f44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b4f48:;
    {
        cpu->r[14] = 0x001b4f4cu; fn_001d0700(cpu);
    }
L_001b4f4c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001b4f50:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x840u);
    }
L_001b4f54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4f58:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b4f5c:;
    {
        cpu->r[14] = 0x001b4f60u; fn_001d06ec(cpu);
    }
L_001b4f60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4f64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b4f68:;
    {
        cpu->r[14] = 0x001b4f6cu; fn_001d01ac(cpu);
    }
L_001b4f6c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b4f70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b4f74:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b4f78:;
    {
        cpu->r[14] = 0x001b4f7cu; fn_001b4b4c(cpu);
    }
L_001b4f7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b4f80:;
    {
        cpu->r[14] = 0x001b4f84u; imp_strlen(cpu); /* strlen */
    }
L_001b4f84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b4f88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b4f8c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001b4f90:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b4f94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5024;
        }
    }
L_001b4f98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4f9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001b4fa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b502c;
        }
    }
L_001b4fa4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b4fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4fb4;
        }
    }
L_001b4fac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b4fb0:;
    {
        cpu->r[14] = 0x001b4fb4u; fn_0018ba60(cpu);
    }
L_001b4fb4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b4fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4fc4;
        }
    }
L_001b4fbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b4fc0:;
    {
        cpu->r[14] = 0x001b4fc4u; fn_0018ba60(cpu);
    }
L_001b4fc4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b4fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4fd4;
        }
    }
L_001b4fcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b4fd0:;
    {
        cpu->r[14] = 0x001b4fd4u; fn_0018ba60(cpu);
    }
L_001b4fd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b4fd8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b4fdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4ffc;
        }
    }
L_001b4fe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b4fe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4ffc;
        }
    }
L_001b4fe8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b4fec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b4ff0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b4ff4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b501c;
        }
    }
L_001b4ff8:;
    {
        cpu->r[14] = 0x001b4ffcu; fn_002082a8(cpu);
    }
L_001b4ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001b5000:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b5004:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b5008:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b500c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b51e8;
        }
    }
L_001b5014:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001b5018:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b501cu)) return;
    }
L_001b501c:;
    {
        cpu->r[14] = 0x001b5020u; fn_0018ba20(cpu);
    }
L_001b5020:;
    {
        goto L_001b4ffc;
    }
L_001b5024:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001b5028:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b5090;
        }
    }
L_001b502c:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_001b5030:;
    {
        goto L_001b4fa4;
    }
L_001b5034:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001b5038:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b4f00;
        }
    }
L_001b503c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5074;
        }
    }
L_001b5044:;
    {
        cpu->r[1] = rd32(0x001b504cu + + 0x1a8u);
    }
L_001b5048:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b504c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b5054u, cpu->r[1], 0, 0);
    }
L_001b5050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001b5054:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001b5058:;
    {
        cpu->r[1] = rd8(cpu->r[5] + - 0x1u);
    }
L_001b505c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_001b5060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5160;
        }
    }
L_001b5064:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5068:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b506c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001b5070:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5058;
        }
    }
L_001b5074:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001b5078:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001b507c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b4f00;
        }
    }
L_001b5080:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001b5084:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b5088:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_001b508c:;
    {
        goto L_001b4f0c;
    }
L_001b5090:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_001b5094:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5098:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
        }
    }
L_001b509c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b510c;
        }
    }
L_001b50a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b50a4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_001b50a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b51bc;
        }
    }
L_001b50ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b50b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001b50b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001b50b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b50bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b50c0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001b50c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001b50c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b50cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001b50d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5100;
        }
    }
L_001b50d4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + - 0x1u);
    }
L_001b50d8:;
    {
        cpu->r[3] = rd8(cpu->r[7]);
    }
L_001b50dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001b50e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b511c;
        }
    }
L_001b50e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b50e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b50ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b50f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b50f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b50f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001b50fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b50d4;
        }
    }
L_001b5100:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b5104:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001b5108:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001b510c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001b5110:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_001b5114:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = (~0x00000000u);
        }
    }
L_001b5118:;
    {
        goto L_001b4fa4;
    }
L_001b511c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001b5120:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5100;
        }
    }
L_001b5128:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b512c:;
    {
        cpu->r[12] = rd8(cpu->r[1]);
    }
L_001b5130:;
    {
        cpu->r[0] = rd8(cpu->r[3] + - 0x1u);
    }
L_001b5134:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001b5138:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b50e4;
        }
    }
L_001b513c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001b5140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b51a4;
        }
    }
L_001b5144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b514c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b5150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b512c;
        }
    }
L_001b5154:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b5158:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001b515c:;
    {
        goto L_001b510c;
    }
L_001b5160:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001b5164:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5074;
        }
    }
L_001b516c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b5170:;
    {
        goto L_001b518c;
    }
L_001b5174:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001b5178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b51b4;
        }
    }
L_001b517c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5180:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b5184:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b5188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5078;
        }
    }
L_001b518c:;
    {
        cpu->r[14] = rd8(cpu->r[1]);
    }
L_001b5190:;
    {
        cpu->r[12] = rd8(cpu->r[0] + - 0x1u);
    }
L_001b5194:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 1);
    }
L_001b5198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5174;
        }
    }
L_001b519c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b51a0:;
    {
        goto L_001b5058;
    }
L_001b51a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b51a8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001b51ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b51b0:;
    {
        goto L_001b510c;
    }
L_001b51b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001b51b8:;
    {
        goto L_001b5078;
    }
L_001b51bc:;
    {
        cpu->r[12] = rd8(cpu->r[7]);
    }
L_001b51c0:;
    {
        cpu->r[0] = rd8(cpu->r[3]);
    }
L_001b51c4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001b51c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b510c;
        }
    }
L_001b51cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b51d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b51d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b510c;
        }
    }
L_001b51d8:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001b51dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001b51e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b51cc;
        }
    }
L_001b51e4:;
    {
        goto L_001b510c;
    }
L_001b51e8:;
    {
        cpu->r[14] = 0x001b51ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b51ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 4, 10u, &shc); cpu->r[5] = v;
        }
    }
L_001b51f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b51f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 20u, &shc); cpu->r[10] = v;
        }
    }
}

/* _ZN15GLXPlayerSocket16RemoveHttpHeaderEv @ 001b51f8 (arm) */
void fn_001b51f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b51f8:;
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
L_001b51fc:;
    {
        cpu->r[4] = rd32(0x001b5204u + + 0x1c0u);
    }
L_001b5200:;
    {
        cpu->r[5] = rd32(0x001b5208u + + 0x1c0u);
    }
L_001b5204:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001b5208:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b5210u, cpu->r[4], 0, 0);
    }
L_001b520c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x83cu);
    }
L_001b5210:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x840u);
    }
L_001b5214:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b5218:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b521c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b5220:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001b5224:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001b5228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5248;
        }
    }
L_001b522c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b5230:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b5234:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b5238:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b523c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b53c0;
        }
    }
L_001b5240:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001b5244:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b5248u)) return;
    }
L_001b5248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_001b524c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b522c;
        }
    }
L_001b5250:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b5254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5288;
        }
    }
L_001b5258:;
    {
        cpu->r[10] = rd32(0x001b5260u + + 0x16cu);
    }
L_001b525c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b5260:;
    {
        cpu->r[10] = add_flags(cpu, 0x001b5268u, cpu->r[10], 0, 0);
    }
L_001b5264:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001b5268:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001b526c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + - 0x1u);
    }
L_001b5270:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_001b5274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5374;
        }
    }
L_001b5278:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b527c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b5280:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b5284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b526c;
        }
    }
L_001b5288:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001b528c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001b5290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b522c;
        }
    }
L_001b5294:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_001b5298:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001b529c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b522c;
        }
    }
L_001b52a0:;
    {
        cpu->r[0] = rd32(0x001b52a8u + + 0x128u);
    }
L_001b52a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000820u, 0, 0);
    }
L_001b52a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b52ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001b52b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b52b8u, cpu->r[0], 0, 0);
    }
L_001b52b4:;
    {
        cpu->r[14] = 0x001b52b8u; fn_001d0434(cpu);
    }
L_001b52b8:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x83cu);
    }
L_001b52bc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x840u);
    }
L_001b52c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001b52c4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001b52c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_001b52cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001b52d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b52d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5364;
        }
    }
L_001b52d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001b52dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001b52e0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_001b52e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b52e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001b52ec:;
    {
        cpu->r[14] = 0x001b52f0u; fn_001b48a8(cpu);
    }
L_001b52f0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_001b52f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b52f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b530c;
        }
    }
L_001b52fc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b5300:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b5304:;
    {
        cpu->r[14] = 0x001b5308u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001b530c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001b5310:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5314:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5318:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001b531c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5330;
        }
    }
L_001b5320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b5324:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b5328:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b532c:;
    {
        cpu->r[14] = 0x001b5330u; fn_00189c04(cpu);
    }
L_001b5330:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b5334:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001b5338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b522c;
        }
    }
L_001b533c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b522c;
        }
    }
L_001b5344:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5348:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b534c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5350:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b535c;
        }
    }
L_001b5354:;
    {
        cpu->r[14] = 0x001b5358u; fn_002082a8(cpu);
    }
L_001b5358:;
    {
        goto L_001b522c;
    }
L_001b535c:;
    {
        cpu->r[14] = 0x001b5360u; fn_0018ba20(cpu);
    }
L_001b5360:;
    {
        goto L_001b522c;
    }
L_001b5364:;
    {
        cpu->r[0] = rd32(0x001b536cu + + 0x68u);
    }
L_001b5368:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5370u, cpu->r[0], 0, 0);
    }
L_001b536c:;
    {
        cpu->r[14] = 0x001b5370u; fn_00208288(cpu);
    }
L_001b5370:;
    {
        goto L_001b5318;
    }
L_001b5374:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001b5378:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_001b537c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5288;
        }
    }
L_001b5380:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b5384:;
    {
        goto L_001b53a0;
    }
L_001b5388:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001b538c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b53b8;
        }
    }
L_001b5390:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001b5394:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5398:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001b539c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b528c;
        }
    }
L_001b53a0:;
    {
        cpu->r[12] = rd8(cpu->r[11]);
    }
L_001b53a4:;
    {
        cpu->r[0] = rd8(cpu->r[1] + - 0x1u);
    }
L_001b53a8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001b53ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5388;
        }
    }
L_001b53b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001b53b4:;
    {
        goto L_001b526c;
    }
L_001b53b8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001b53bc:;
    {
        goto L_001b528c;
    }
L_001b53c0:;
    {
        cpu->r[14] = 0x001b53c4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b53c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 2, 4u, &shc); cpu->r[5] = v;
        }
    }
L_001b53c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b53cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b53d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 15u, &shc); cpu->r[10] = v;
        }
    }
L_001b53d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 1u, &shc); cpu->r[9] = v;
        }
    }
}

/* _ZN15GLXPlayerSocket19ParseChunkedContentEv @ 001b53d8 (arm) */
void fn_001b53d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b53d8:;
    {
        cpu->r[1] = rd32(0x001b53e0u + + 0x9d4u);
    }
L_001b53dc:;
    {
        cpu->r[2] = rd32(0x001b53e4u + + 0x9d4u);
    }
L_001b53e0:;
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
L_001b53e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b53ecu, cpu->r[1], 0, 0);
    }
L_001b53e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000114u, 1, 0);
    }
L_001b53ec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x840u);
    }
L_001b53f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_001b53f4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x83cu);
    }
L_001b53f8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001b53fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b5400:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001b5404:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001b5408:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001b540c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001b5410:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b5414:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[0]);
    }
L_001b5418:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b541c:;
    {
        wr32(cpu->r[13] + + 0x108u, cpu->r[0]);
    }
L_001b5420:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001b5424:;
    {
        wr32(cpu->r[13] + + 0x10cu, cpu->r[3]);
    }
L_001b5428:;
    {
        cpu->r[14] = 0x001b542cu; fn_001b48a8(cpu);
    }
L_001b542c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001b5430:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b5434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5448;
        }
    }
L_001b5438:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b543c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b5440:;
    {
        cpu->r[14] = 0x001b5444u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5444:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001b5448:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b544c:;
    {
        cpu->r[4] = rd32(0x001b5454u + + 0x968u);
    }
L_001b5450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000820u, 0, 0);
    }
L_001b5454:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[0]);
    }
L_001b5458:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b5460u, cpu->r[4], 0, 0);
    }
L_001b545c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001b5460:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001b5464:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5468:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b546c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b5470:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b5474:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b5478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_001b547c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b5480:;
    {
        cpu->r[14] = 0x001b5484u; fn_00189c04(cpu);
    }
L_001b5484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_001b5488:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b548c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001b5490:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001b5494:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b5498:;
    {
        cpu->r[14] = 0x001b549cu; fn_001b4b4c(cpu);
    }
L_001b549c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001b54a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b54a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b54a8:;
    {
        cpu->r[14] = 0x001b54acu; fn_001b4b4c(cpu);
    }
L_001b54ac:;
    {
        cpu->r[0] = rd32(0x001b54b4u + + 0x90cu);
    }
L_001b54b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b54b4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b54bcu, cpu->r[0], 0, 0);
    }
L_001b54b8:;
    {
        cpu->r[14] = 0x001b54bcu; fn_001d0ac4(cpu);
    }
L_001b54bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b54c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b54c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b54c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b55a4;
        }
    }
L_001b54cc:;
    {
        cpu->r[0] = rd32(0x001b54d4u + + 0x8f0u);
    }
L_001b54d0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b54d4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b54d8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b54e0u, cpu->r[0], 0, 0);
    }
L_001b54dc:;
    {
        cpu->r[14] = 0x001b54e0u; fn_001d0ac4(cpu);
    }
L_001b54e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd8u);
    }
L_001b54e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b54e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001b54ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b550c;
        }
    }
L_001b54f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b54f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b550c;
        }
    }
L_001b54f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc4u);
    }
L_001b54fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5500:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5504:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b558c;
        }
    }
L_001b5508:;
    {
        cpu->r[14] = 0x001b550cu; fn_002082a8(cpu);
    }
L_001b550c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5510:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b5514:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001b5518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5538;
        }
    }
L_001b551c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5538;
        }
    }
L_001b5524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xdcu);
    }
L_001b5528:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b552c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5530:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b559c;
        }
    }
L_001b5534:;
    {
        cpu->r[14] = 0x001b5538u; fn_002082a8(cpu);
    }
L_001b5538:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b553c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001b5540:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b5544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5564;
        }
    }
L_001b5548:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b554c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5564;
        }
    }
L_001b5550:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xf4u);
    }
L_001b5554:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5558:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b555c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5594;
        }
    }
L_001b5560:;
    {
        cpu->r[14] = 0x001b5564u; fn_002082a8(cpu);
    }
L_001b5564:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001b5568:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b556c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10cu);
    }
L_001b5570:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001b5574:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b5578:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b557c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5db0;
        }
    }
L_001b5584:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_001b5588:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b558cu)) return;
    }
L_001b558c:;
    {
        cpu->r[14] = 0x001b5590u; fn_0018ba20(cpu);
    }
L_001b5590:;
    {
        goto L_001b550c;
    }
L_001b5594:;
    {
        cpu->r[14] = 0x001b5598u; fn_0018ba20(cpu);
    }
L_001b5598:;
    {
        goto L_001b5564;
    }
L_001b559c:;
    {
        cpu->r[14] = 0x001b55a0u; fn_0018ba20(cpu);
    }
L_001b55a0:;
    {
        goto L_001b5538;
    }
L_001b55a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001b55a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b54cc;
        }
    }
L_001b55ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b55b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b55d4;
        }
    }
L_001b55b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b55b8:;
    {
        cpu->r[0] = rd8(cpu->r[1] + - 0x1u);
    }
L_001b55bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000du, 1, 1);
    }
L_001b55c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5d7c;
        }
    }
L_001b55c4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b55c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b55cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b55d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b55b8;
        }
    }
L_001b55d4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001b55d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b55dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b54cc;
        }
    }
L_001b55e0:;
    {
        cpu->r[0] = rd32(0x001b55e8u + + 0x7e0u);
    }
L_001b55e4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001b55e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b55ec:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b55f4u, cpu->r[0], 0, 0);
    }
L_001b55f0:;
    {
        cpu->r[14] = 0x001b55f4u; fn_001d0ac4(cpu);
    }
L_001b55f4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b55f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b5da8;
        }
    }
L_001b55fc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b5600:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_001b5604:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b5608:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b560c:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[4]);
    }
L_001b5610:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001b5614:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[4]);
    }
L_001b5618:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001b561c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
        }
    }
L_001b5620:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
        }
    }
L_001b5624:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001b5628:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b562c:;
    {
        cpu->r[14] = 0x001b5630u; fn_001b48a8(cpu);
    }
L_001b5630:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001b5634:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc0u);
    }
L_001b5638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b564c;
        }
    }
L_001b563c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b5640:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b5644:;
    {
        cpu->r[14] = 0x001b5648u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5648:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001b564c:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[0]);
    }
L_001b5650:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5654:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5658:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b565c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc0u);
    }
L_001b5660:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_001b5664:;
    {
        cpu->r[14] = 0x001b5668u; fn_00189c04(cpu);
    }
L_001b5668:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc0u);
    }
L_001b566c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001b5670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5690;
        }
    }
L_001b5674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5690;
        }
    }
L_001b567c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xacu);
    }
L_001b5680:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5684:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5688:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d74;
        }
    }
L_001b568c:;
    {
        cpu->r[14] = 0x001b5690u; fn_002082a8(cpu);
    }
L_001b5690:;
    {
        cpu->r[5] = rd32(0x001b5698u + + 0x734u);
    }
L_001b5694:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b5698:;
    {
        cpu->r[6] = rd32(0x001b56a0u + + 0x730u);
    }
L_001b569c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b56a4u, cpu->r[5], 0, 0);
    }
L_001b56a0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b56a8u, cpu->r[6], 0, 0);
    }
L_001b56a4:;
    {
        goto L_001b56c0;
    }
L_001b56a8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_001b56ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b56b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b56b4:;
    {
        cpu->r[14] = 0x001b56b8u; fn_001d0ac4(cpu);
    }
L_001b56b8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001b56bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b56f8;
        }
    }
L_001b56c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b56c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b56c8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b56cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001b56d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b56a8;
        }
    }
L_001b56d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b56d8:;
    {
        cpu->r[14] = 0x001b56dcu; fn_00208288(cpu);
    }
L_001b56dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b56e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b56e4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_001b56e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b56ec:;
    {
        cpu->r[14] = 0x001b56f0u; fn_001d0ac4(cpu);
    }
L_001b56f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001b56f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b56c0;
        }
    }
L_001b56f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b56fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5700:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001b5704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b58c8;
        }
    }
L_001b570c:;
    {
        cpu->r[0] = rd32(0x001b5714u + + 0x6c0u);
    }
L_001b5710:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b5714:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b571cu, cpu->r[0], 0, 0);
    }
L_001b5718:;
    {
        cpu->r[14] = 0x001b571cu; fn_001d0ac4(cpu);
    }
L_001b571c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b5720:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b5724:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5728:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001b572c:;
    {
        cpu->r[14] = 0x001b5730u; imp_strtol(cpu); /* strtol */
    }
L_001b5730:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b5734:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b5738:;
    {
        cpu->r[0] = rd32(0x001b5740u + + 0x698u);
    }
L_001b573c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5744u, cpu->r[0], 0, 0);
    }
L_001b5740:;
    {
        cpu->r[14] = 0x001b5744u; fn_001d0ac4(cpu);
    }
L_001b5744:;
    {
        cpu->r[0] = rd32(0x001b574cu + + 0x690u);
    }
L_001b5748:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b574c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5754u, cpu->r[0], 0, 0);
    }
L_001b5750:;
    {
        cpu->r[14] = 0x001b5754u; fn_001d0ac4(cpu);
    }
L_001b5754:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b5758:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b5bcc;
        }
    }
L_001b575c:;
    {
        cpu->r[3] = rd32(0x001b5764u + + 0x67cu);
    }
L_001b5760:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001b5764:;
    {
        cpu->r[4] = rd32(0x001b576cu + + 0x678u);
    }
L_001b5768:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b5770u, cpu->r[3], 0, 0);
    }
L_001b576c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001b5770:;
    {
        cpu->r[3] = rd32(0x001b5778u + + 0x670u);
    }
L_001b5774:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b577cu, cpu->r[4], 0, 0);
    }
L_001b5778:;
    {
        cpu->r[6] = rd32(0x001b5780u + + 0x66cu);
    }
L_001b577c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b5784u, cpu->r[3], 0, 0);
    }
L_001b5780:;
    {
        cpu->r[1] = rd32(0x001b5788u + + 0x668u);
    }
L_001b5784:;
    {
        cpu->r[2] = rd32(0x001b578cu + + 0x668u);
    }
L_001b5788:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b5790u, cpu->r[6], 0, 0);
    }
L_001b578c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001b5790:;
    {
        cpu->r[3] = rd32(0x001b5798u + + 0x660u);
    }
L_001b5794:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001b5798:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001b579c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001b57a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b57a4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b57a8:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[10]);
    }
L_001b57ac:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001b57b0:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[10]);
    }
L_001b57b4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_001b57b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d44;
        }
    }
L_001b57bc:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 0);
    }
L_001b57c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001b57c4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_001b57c8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
        }
    }
L_001b57cc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
        }
    }
L_001b57d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b57d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001b57d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_001b57dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b57e0:;
    {
        cpu->r[14] = 0x001b57e4u; fn_001b48a8(cpu);
    }
L_001b57e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_001b57e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_001b57ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5800;
        }
    }
L_001b57f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b57f4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b57f8:;
    {
        cpu->r[14] = 0x001b57fcu; imp_memcpy(cpu); /* memcpy */
    }
L_001b57fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001b5800:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[0]);
    }
L_001b5804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5808:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b580c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b5810:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_001b5814:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001b5818:;
    {
        cpu->r[14] = 0x001b581cu; fn_00189c04(cpu);
    }
L_001b581c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x90u);
    }
L_001b5820:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001b5824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5844;
        }
    }
L_001b5828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b582c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5844;
        }
    }
L_001b5830:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001b5834:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5838:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b583c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d3c;
        }
    }
L_001b5840:;
    {
        cpu->r[14] = 0x001b5844u; fn_002082a8(cpu);
    }
L_001b5844:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001b5848:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001b584c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xd8u);
    }
L_001b5850:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_001b5854:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b585cu, cpu->r[2], 0, 0);
    }
L_001b5858:;
    {
        cpu->r[14] = 0x001b585cu; fn_001d0ac4(cpu);
    }
L_001b585c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001b5860:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xd8u);
    }
L_001b5864:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b5868:;
    {
        cpu->r[14] = 0x001b586cu; fn_001b4cd4(cpu);
    }
L_001b586c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b5870:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b5874:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x840u);
    }
L_001b5878:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5880u, cpu->r[3], 0, 0);
    }
L_001b587c:;
    {
        cpu->r[14] = 0x001b5880u; fn_001d0ac4(cpu);
    }
L_001b5880:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b5884:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5888:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5890u, cpu->r[3], 0, 0);
    }
L_001b588c:;
    {
        cpu->r[14] = 0x001b5890u; fn_001d0ac4(cpu);
    }
L_001b5890:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b5894:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b5898:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001b589c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001b58a0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b59e0;
        }
    }
L_001b58a4:;
    {
        cpu->r[0] = rd32(0x001b58acu + + 0x550u);
    }
L_001b58a8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b58ac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b58b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b58b8u, cpu->r[0], 0, 0);
    }
L_001b58b4:;
    {
        cpu->r[14] = 0x001b58b8u; fn_001d0ac4(cpu);
    }
L_001b58b8:;
    {
        goto L_001b54e0;
    }
L_001b58bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b58c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b58c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b58d4;
        }
    }
L_001b58c8:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_001b58cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_001b58d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b58bc;
        }
    }
L_001b58d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b58d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b570c;
        }
    }
L_001b58dc:;
    {
        cpu->r[0] = rd32(0x001b58e4u + + 0x51cu);
    }
L_001b58e0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_001b58e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b58e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b58f0u, cpu->r[0], 0, 0);
    }
L_001b58ec:;
    {
        cpu->r[14] = 0x001b58f0u; fn_001d0ac4(cpu);
    }
L_001b58f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001b58f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b571c;
        }
    }
L_001b58f8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b58fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001b5900:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5904:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b5908:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[5]);
    }
L_001b590c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001b5910:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[5]);
    }
L_001b5914:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001b5918:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
        }
    }
L_001b591c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
        }
    }
L_001b5920:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001b5924:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b5928:;
    {
        cpu->r[14] = 0x001b592cu; fn_001b48a8(cpu);
    }
L_001b592c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001b5930:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa8u);
    }
L_001b5934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5948;
        }
    }
L_001b5938:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b593c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b5940:;
    {
        cpu->r[14] = 0x001b5944u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001b5948:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[0]);
    }
L_001b594c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5950:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5954:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b5958:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa8u);
    }
L_001b595c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_001b5960:;
    {
        cpu->r[14] = 0x001b5964u; fn_00189c04(cpu);
    }
L_001b5964:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa8u);
    }
L_001b5968:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b596c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b598c;
        }
    }
L_001b5970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b598c;
        }
    }
L_001b5978:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x94u);
    }
L_001b597c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5980:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5984:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d98;
        }
    }
L_001b5988:;
    {
        cpu->r[14] = 0x001b598cu; fn_002082a8(cpu);
    }
L_001b598c:;
    {
        cpu->r[6] = rd32(0x001b5994u + + 0x470u);
    }
L_001b5990:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b5994:;
    {
        cpu->r[7] = rd32(0x001b599cu + + 0x46cu);
    }
L_001b5998:;
    {
        cpu->r[6] = add_flags(cpu, 0x001b59a0u, cpu->r[6], 0, 0);
    }
L_001b599c:;
    {
        cpu->r[7] = add_flags(cpu, 0x001b59a4u, cpu->r[7], 0, 0);
    }
L_001b59a0:;
    {
        goto L_001b59bc;
    }
L_001b59a4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_001b59a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b59ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b59b0:;
    {
        cpu->r[14] = 0x001b59b4u; fn_001d0ac4(cpu);
    }
L_001b59b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001b59b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b571c;
        }
    }
L_001b59bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b59c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b59c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b59c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001b59cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b59a4;
        }
    }
L_001b59d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b59d4:;
    {
        cpu->r[14] = 0x001b59d8u; fn_00208288(cpu);
    }
L_001b59d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b59dc:;
    {
        goto L_001b59a4;
    }
L_001b59e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001b59e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001b59e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001b59ec:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b58a4;
        }
    }
L_001b59f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001b59f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b59f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5bd4;
        }
    }
L_001b59fc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001b5a00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b5a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b58a4;
        }
    }
L_001b5a08:;
    {
        cpu->r[0] = rd32(0x001b5a10u + + 0x3fcu);
    }
L_001b5a0c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001b5a10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b5a14:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5a1cu, cpu->r[0], 0, 0);
    }
L_001b5a18:;
    {
        cpu->r[14] = 0x001b5a1cu; fn_001d0ac4(cpu);
    }
L_001b5a1c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b5a20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b5da8;
        }
    }
L_001b5a24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x108u);
    }
L_001b5a28:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001b5a2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b5a30:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[7]);
    }
L_001b5a34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b5a38:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[7]);
    }
L_001b5a3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001b5a40:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d5c;
        }
    }
L_001b5a44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001b5a48:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001b5a4c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_001b5a50:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
        }
    }
L_001b5a54:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
        }
    }
L_001b5a58:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b5a5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001b5a60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b5a64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 0);
    }
L_001b5a68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b5a6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b5a70:;
    {
        cpu->r[14] = 0x001b5a74u; fn_001b48a8(cpu);
    }
L_001b5a74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b5a78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001b5a7c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001b5a80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5a9c;
        }
    }
L_001b5a88:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b5a8c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b5a90:;
    {
        cpu->r[14] = 0x001b5a94u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5a94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b5a9c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_001b5aa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5aa4:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5aa8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b5aac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_001b5ab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_001b5ab4:;
    {
        cpu->r[14] = 0x001b5ab8u; fn_00189c04(cpu);
    }
L_001b5ab8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001b5abc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001b5ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5ae0;
        }
    }
L_001b5ac4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5ac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5ae0;
        }
    }
L_001b5acc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
    }
L_001b5ad0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5ad4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5ad8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d54;
        }
    }
L_001b5adc:;
    {
        cpu->r[14] = 0x001b5ae0u; fn_002082a8(cpu);
    }
L_001b5ae0:;
    {
        cpu->r[0] = rd32(0x001b5ae8u + + 0x328u);
    }
L_001b5ae4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5ae8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5af0u, cpu->r[0], 0, 0);
    }
L_001b5aec:;
    {
        cpu->r[14] = 0x001b5af0u; fn_001d0ac4(cpu);
    }
L_001b5af0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001b5af4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001b5b64;
        }
    }
L_001b5af8:;
    {
        cpu->r[7] = 0x0000fffeu;
    }
L_001b5afc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b5b00:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0xffffu << 16);
    }
L_001b5b04:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 0);
    }
L_001b5b08:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b5b0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001b5b10:;
    {
        goto L_001b5b2c;
    }
L_001b5b14:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_001b5b18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b5b1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b5b20:;
    {
        cpu->r[14] = 0x001b5b24u; fn_001d0ac4(cpu);
    }
L_001b5b24:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001b5b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5b64;
        }
    }
L_001b5b2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5b30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5b34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b5b38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001b5b3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5b14;
        }
    }
L_001b5b40:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b5b44:;
    {
        cpu->r[14] = 0x001b5b48u; fn_00208288(cpu);
    }
L_001b5b48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b5b50:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_001b5b54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b5b58:;
    {
        cpu->r[14] = 0x001b5b5cu; fn_001d0ac4(cpu);
    }
L_001b5b5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001b5b60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5b2c;
        }
    }
L_001b5b64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5b68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5b6c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001b5b70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5b74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5c1c;
        }
    }
L_001b5b78:;
    {
        cpu->r[0] = rd32(0x001b5b80u + + 0x294u);
    }
L_001b5b7c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b5b80:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5b88u, cpu->r[0], 0, 0);
    }
L_001b5b84:;
    {
        cpu->r[14] = 0x001b5b88u; fn_001d0ac4(cpu);
    }
L_001b5b88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b5b8c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b5b90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b5b94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5b98:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001b5b9c:;
    {
        cpu->r[14] = 0x001b5ba0u; imp_strtol(cpu); /* strtol */
    }
L_001b5ba0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b5ba4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b5ba8:;
    {
        cpu->r[0] = rd32(0x001b5bb0u + + 0x268u);
    }
L_001b5bac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5bb4u, cpu->r[0], 0, 0);
    }
L_001b5bb0:;
    {
        cpu->r[14] = 0x001b5bb4u; fn_001d0ac4(cpu);
    }
L_001b5bb4:;
    {
        cpu->r[0] = rd32(0x001b5bbcu + + 0x260u);
    }
L_001b5bb8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b5bbc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5bc4u, cpu->r[0], 0, 0);
    }
L_001b5bc0:;
    {
        cpu->r[14] = 0x001b5bc4u; fn_001d0ac4(cpu);
    }
L_001b5bc4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b5bc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b57a0;
        }
    }
L_001b5bcc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001b5bd0:;
    {
        goto L_001b54e0;
    }
L_001b5bd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5bd8:;
    {
        cpu->r[0] = rd8(cpu->r[1] + - 0x1u);
    }
L_001b5bdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000du, 1, 1);
    }
L_001b5be0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5c00;
        }
    }
L_001b5be4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b5be8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5bec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b5bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b59fc;
        }
    }
L_001b5bf4:;
    {
        cpu->r[0] = rd8(cpu->r[1] + - 0x1u);
    }
L_001b5bf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000du, 1, 1);
    }
L_001b5bfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5be4;
        }
    }
L_001b5c00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b5c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b59fc;
        }
    }
L_001b5c08:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001b5c0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_001b5c10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5bd4;
        }
    }
L_001b5c14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001b5c18:;
    {
        goto L_001b5a00;
    }
L_001b5c1c:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_001b5c20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_001b5c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5c34;
        }
    }
L_001b5c28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b5c2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b5c30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5c1c;
        }
    }
L_001b5c34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5c38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5b78;
        }
    }
L_001b5c3c:;
    {
        cpu->r[0] = rd32(0x001b5c44u + + 0x1dcu);
    }
L_001b5c40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001b5c44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5c48:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5c50u, cpu->r[0], 0, 0);
    }
L_001b5c4c:;
    {
        cpu->r[14] = 0x001b5c50u; fn_001d0ac4(cpu);
    }
L_001b5c50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b5c54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b5b88;
        }
    }
L_001b5c58:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5c5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001b5c60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5c64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b5c68:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[7]);
    }
L_001b5c6c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_001b5c70:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[7]);
    }
L_001b5c74:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001b5c78:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
        }
    }
L_001b5c7c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
        }
    }
L_001b5c80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b5c84:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_001b5c88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001b5c8c:;
    {
        cpu->r[14] = 0x001b5c90u; fn_001b48a8(cpu);
    }
L_001b5c90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5c94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_001b5c98:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001b5c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5cb0;
        }
    }
L_001b5ca0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b5ca4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b5ca8:;
    {
        cpu->r[14] = 0x001b5cacu; imp_memcpy(cpu); /* memcpy */
    }
L_001b5cac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001b5cb0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_001b5cb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5cb8:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5cbc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b5cc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_001b5cc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001b5cc8:;
    {
        cpu->r[14] = 0x001b5cccu; fn_00189c04(cpu);
    }
L_001b5ccc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_001b5cd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001b5cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5cf4;
        }
    }
L_001b5cd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5cf4;
        }
    }
L_001b5ce0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001b5ce4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b5ce8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b5cec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b5d6c;
        }
    }
L_001b5cf0:;
    {
        cpu->r[14] = 0x001b5cf4u; fn_002082a8(cpu);
    }
L_001b5cf4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001b5cf8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_001b5cfc:;
    {
        goto L_001b5d18;
    }
L_001b5d00:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_001b5d04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b5d08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b5d0c:;
    {
        cpu->r[14] = 0x001b5d10u; fn_001d0ac4(cpu);
    }
L_001b5d10:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001b5d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5b88;
        }
    }
L_001b5d18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5d1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001b5d20:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001b5d24:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001b5d28:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001b5d00;
        }
    }
L_001b5d2c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b5d30:;
    {
        cpu->r[14] = 0x001b5d34u; fn_00208288(cpu);
    }
L_001b5d34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001b5d38:;
    {
        goto L_001b5d00;
    }
L_001b5d3c:;
    {
        cpu->r[14] = 0x001b5d40u; fn_0018ba20(cpu);
    }
L_001b5d40:;
    {
        goto L_001b5844;
    }
L_001b5d44:;
    {
        cpu->r[0] = rd32(0x001b5d4cu + + 0xd8u);
    }
L_001b5d48:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5d50u, cpu->r[0], 0, 0);
    }
L_001b5d4c:;
    {
        cpu->r[14] = 0x001b5d50u; fn_00208288(cpu);
    }
L_001b5d50:;
    {
        goto L_001b580c;
    }
L_001b5d54:;
    {
        cpu->r[14] = 0x001b5d58u; fn_0018ba20(cpu);
    }
L_001b5d58:;
    {
        goto L_001b5ae0;
    }
L_001b5d5c:;
    {
        cpu->r[0] = rd32(0x001b5d64u + + 0xc4u);
    }
L_001b5d60:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b5d68u, cpu->r[0], 0, 0);
    }
L_001b5d64:;
    {
        cpu->r[14] = 0x001b5d68u; fn_00208288(cpu);
    }
L_001b5d68:;
    {
        goto L_001b5aa8;
    }
L_001b5d6c:;
    {
        cpu->r[14] = 0x001b5d70u; fn_0018ba20(cpu);
    }
L_001b5d70:;
    {
        goto L_001b5cf4;
    }
L_001b5d74:;
    {
        cpu->r[14] = 0x001b5d78u; fn_0018ba20(cpu);
    }
L_001b5d78:;
    {
        goto L_001b5690;
    }
L_001b5d7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b5d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b55d4;
        }
    }
L_001b5d84:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001b5d88:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_001b5d8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5da0;
        }
    }
L_001b5d90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001b5d94:;
    {
        goto L_001b55d8;
    }
L_001b5d98:;
    {
        cpu->r[14] = 0x001b5d9cu; fn_0018ba20(cpu);
    }
L_001b5d9c:;
    {
        goto L_001b598c;
    }
L_001b5da0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001b5da4:;
    {
        goto L_001b55b8;
    }
L_001b5da8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b5dac:;
    {
        goto L_001b54e0;
    }
L_001b5db0:;
    {
        cpu->r[14] = 0x001b5db4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b5db4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 3, 32u, &shc); cpu->r[5] = v;
        }
    }
L_001b5db8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b5dbc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b5dc0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 13u, &shc); cpu->r[10] = v;
        }
    }
L_001b5dc4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, (cpu->r[6] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b5dc8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 10u, &shc); cpu->r[10] = v;
        }
    }
L_001b5dcc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 9u, &shc); cpu->r[10] = v;
        }
    }
L_001b5dd0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 26u, &shc); cpu->r[8] = v;
        }
    }
L_001b5dd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 8u, &shc); cpu->r[10] = v;
        }
    }
L_001b5dd8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 8u, &shc); cpu->r[10] = v;
        }
    }
L_001b5ddc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 8u, &shc); cpu->r[10] = v;
        }
    }
L_001b5de0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 25u, &shc); cpu->r[8] = v;
        }
    }
L_001b5de4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5de8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 25u, &shc); cpu->r[8] = v;
        }
    }
L_001b5dec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 7u, &shc); cpu->r[10] = v;
        }
    }
L_001b5df0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b5df4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 6u, &shc); cpu->r[10] = v;
        }
    }
L_001b5df8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 6u, &shc); cpu->r[10] = v;
        }
    }
L_001b5dfc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b5e00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[7] = v;
        }
    }
L_001b5e04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5e08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 20u, &shc); cpu->r[8] = v;
        }
    }
L_001b5e0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 3u, &shc); cpu->r[10] = v;
        }
    }
L_001b5e10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_001b5e14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        wr16(cpu->r[7], cpu->r[10]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5e18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5e1c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5e20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b5e24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 13u, &shc); cpu->r[8] = v;
        }
    }
L_001b5e28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 13u, &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN15GLXPlayerSocket20CalculateTotalLengthEv @ 001b5e2c (arm) */
void fn_001b5e2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b5e2c:;
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
L_001b5e30:;
    {
        cpu->r[9] = rd32(0x001b5e38u + + 0x6ccu);
    }
L_001b5e34:;
    {
        cpu->r[4] = rd32(0x001b5e3cu + + 0x6ccu);
    }
L_001b5e38:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b5e3c:;
    {
        cpu->r[8] = rd32(0x001b5e44u + + 0x6c8u);
    }
L_001b5e40:;
    {
        cpu->r[9] = add_flags(cpu, 0x001b5e48u, cpu->r[9], 0, 0);
    }
L_001b5e44:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b5e4cu, cpu->r[4], 0, 0);
    }
L_001b5e48:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x840u);
    }
L_001b5e4c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[9] = base + 16u;
    }
L_001b5e50:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b5e54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000bcu, 1, 0);
    }
L_001b5e58:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x83cu);
    }
L_001b5e5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_001b5e60:;
    {
        cpu->r[12] = rd32(0x001b5e68u + + 0x6a8u);
    }
L_001b5e64:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_001b5e68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_001b5e6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001b5e70:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001b5e74:;
    {
        cpu->r[12] = add_flags(cpu, 0x001b5e7cu, cpu->r[12], 0, 0);
    }
L_001b5e78:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[10]);
    }
L_001b5e7c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001b5e80:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[9] = base + 16u;
    }
L_001b5e84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5e88:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_001b5e8c:;
    {
        wr16(cpu->r[9], cpu->r[2]);
    }
L_001b5e90:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_001b5e94:;
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
        cpu->r[12] = base + 16u;
    }
L_001b5e98:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[9] = base + 16u;
    }
L_001b5e9c:;
    {
        cpu->r[12] = rd16(cpu->r[12]);
    }
L_001b5ea0:;
    {
        wr16(cpu->r[9], cpu->r[12]);
    }
L_001b5ea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5ecc;
        }
    }
L_001b5ea8:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b5eac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b5eb0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b5eb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_001b5eb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b5ebc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b5ec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6500;
        }
    }
L_001b5ec4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_001b5ec8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b5eccu)) return;
    }
L_001b5ecc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 1);
    }
L_001b5ed0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b5ea8;
        }
    }
L_001b5ed4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001b5ed8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5f10;
        }
    }
L_001b5edc:;
    {
        cpu->r[3] = rd32(0x001b5ee4u + + 0x630u);
    }
L_001b5ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b5ee4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b5eecu, cpu->r[3], 0, 0);
    }
L_001b5ee8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b5eec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001b5ef0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b5ef4:;
    {
        cpu->r[3] = rd8(cpu->r[12] + - 0x1u);
    }
L_001b5ef8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001b5efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b62bc;
        }
    }
L_001b5f00:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001b5f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001b5f08:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001b5f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b5ef4;
        }
    }
L_001b5f10:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001b5f14:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001b5f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5ea8;
        }
    }
L_001b5f1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b5f20:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001b5ea8;
        }
    }
L_001b5f24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001b5f28:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
        }
    }
L_001b5f2c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
        }
    }
L_001b5f30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001b5f34:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
    }
L_001b5f38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b5f3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001b5f40:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[6]);
    }
L_001b5f44:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_001b5f48:;
    {
        cpu->r[14] = 0x001b5f4cu; fn_001b48a8(cpu);
    }
L_001b5f4c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001b5f50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b5f54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5f68;
        }
    }
L_001b5f58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b5f5c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001b5f60:;
    {
        cpu->r[14] = 0x001b5f64u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5f64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001b5f68:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[0]);
    }
L_001b5f6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b5f70:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b5f74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b5f78:;
    {
        cpu->r[14] = 0x001b5f7cu; imp_strlen(cpu); /* strlen */
    }
L_001b5f7c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x84u);
    }
L_001b5f80:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b5f84:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001b5f88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6074;
        }
    }
L_001b5f8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b5f90:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
        }
    }
L_001b5f94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6094;
        }
    }
L_001b5f98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b5f9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001b5fa0:;
    {
        cpu->r[14] = 0x001b5fa4u; fn_001d0434(cpu);
    }
L_001b5fa4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b5fa8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x84u);
    }
L_001b5fac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b5fb0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001b5fb4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_001b5fb8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[5]);
    }
L_001b5fbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001b5fc0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b5fc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b62ac;
        }
    }
L_001b5fc8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001b5fcc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001b5fd0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_001b5fd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b5fd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b5fdc:;
    {
        cpu->r[14] = 0x001b5fe0u; fn_001b48a8(cpu);
    }
L_001b5fe0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_001b5fe4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b5fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5ffc;
        }
    }
L_001b5fec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001b5ff0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b5ff4:;
    {
        cpu->r[14] = 0x001b5ff8u; imp_memcpy(cpu); /* memcpy */
    }
L_001b5ff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001b5ffc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_001b6000:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b6004:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b6008:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001b600c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b6010:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001b6014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6128;
        }
    }
L_001b6018:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_001b601c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b63c8;
        }
    }
L_001b6020:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001b6024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b63c8;
        }
    }
L_001b6028:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b602c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
    }
L_001b6030:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b6034:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b6454;
        }
    }
L_001b6038:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b603c:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b6040:;
    {
        cpu->r[14] = 0x001b6044u; fn_002082a8(cpu);
    }
L_001b6044:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b6048:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001b604c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5eac;
        }
    }
L_001b6050:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001b6054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5eac;
        }
    }
L_001b6058:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_001b605c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 0);
    }
L_001b6060:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b6064:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b6210;
        }
    }
L_001b6068:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b606c:;
    {
        cpu->r[14] = 0x001b6070u; fn_002082a8(cpu);
    }
L_001b6070:;
    {
        goto L_001b5eac;
    }
L_001b6074:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b6078:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001b621c;
        }
    }
L_001b607c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b6080:;
    {
        cpu->r[14] = 0x001b6084u; imp_strlen(cpu); /* strlen */
    }
L_001b6084:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001b6088:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001b63d4;
        }
    }
L_001b608c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001b6090:;
    {
        goto L_001b6048;
    }
L_001b6094:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b6098:;
    {
        cpu->r[14] = 0x001b609cu; imp_strlen(cpu); /* strlen */
    }
L_001b609c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b60a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b608c;
        }
    }
L_001b60a4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b60a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001b60ac:;
    {
        cpu->r[14] = 0x001b60b0u; fn_001d0434(cpu);
    }
L_001b60b0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b60b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b60b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b60bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b60c0:;
    {
        cpu->r[14] = 0x001b60c4u; fn_001b4a38(cpu);
    }
L_001b60c4:;
    {
        cpu->r[1] = rd32(0x001b60ccu + + 0x44cu);
    }
L_001b60c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b60cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b60d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b60d8u, cpu->r[1], 0, 0);
    }
L_001b60d4:;
    {
        cpu->r[14] = 0x001b60d8u; fn_001b477c(cpu);
    }
L_001b60d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b60dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b6468;
        }
    }
L_001b60e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001b60e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b60e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b60ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b60f0:;
    {
        cpu->r[14] = 0x001b60f4u; fn_001b4a38(cpu);
    }
L_001b60f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_001b60f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_001b60fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6100:;
    {
        cpu->r[14] = 0x001b6104u; fn_00189c04(cpu);
    }
L_001b6104:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6108:;
    {
        cpu->r[14] = 0x001b610cu; fn_001b4ac8(cpu);
    }
L_001b610c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001b6110:;
    {
        cpu->r[14] = 0x001b6114u; fn_001d06cc(cpu);
    }
L_001b6114:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b6118:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b611c:;
    {
        cpu->r[14] = 0x001b6120u; fn_001b4ac8(cpu);
    }
L_001b6120:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b6124:;
    {
        goto L_001b6048;
    }
L_001b6128:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001b612c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6018;
        }
    }
L_001b6130:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001b6134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6300;
        }
    }
L_001b6138:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001b613c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001b6140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6018;
        }
    }
L_001b6144:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_001b6148:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001b6018;
        }
    }
L_001b614c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001b6150:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
        }
    }
L_001b6154:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
        }
    }
L_001b6158:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b615c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001b6160:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6164:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001b6168:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_001b616c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_001b6170:;
    {
        cpu->r[14] = 0x001b6174u; fn_001b48a8(cpu);
    }
L_001b6174:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001b6178:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b617c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6190;
        }
    }
L_001b6180:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001b6184:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b6188:;
    {
        cpu->r[14] = 0x001b618cu; imp_memcpy(cpu); /* memcpy */
    }
L_001b618c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001b6190:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001b6194:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b6198:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001b619c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b61a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b61a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b61a8:;
    {
        cpu->r[14] = 0x001b61acu; fn_00189c04(cpu);
    }
L_001b61ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b61b0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001b61b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b61d4;
        }
    }
L_001b61b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b61bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b61d4;
        }
    }
L_001b61c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b61c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b61c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b61cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b6360;
        }
    }
L_001b61d0:;
    {
        cpu->r[14] = 0x001b61d4u; fn_002082a8(cpu);
    }
L_001b61d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b61d8:;
    {
        cpu->r[14] = 0x001b61dcu; fn_001d06cc(cpu);
    }
L_001b61dc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001b61e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001b61e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b61e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6208;
        }
    }
L_001b61ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b61f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6208;
        }
    }
L_001b61f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b61f8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001b61fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001b6200:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001b6354;
        }
    }
L_001b6204:;
    {
        cpu->r[14] = 0x001b6208u; fn_002082a8(cpu);
    }
L_001b6208:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b620c:;
    {
        goto L_001b6048;
    }
L_001b6210:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b6214:;
    {
        cpu->r[14] = 0x001b6218u; fn_0018ba20(cpu);
    }
L_001b6218:;
    {
        goto L_001b5eac;
    }
L_001b621c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_001b6220:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001b6224:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
        }
    }
L_001b6228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6248;
        }
    }
L_001b622c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b6230:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_001b6234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b607c;
        }
    }
L_001b6238:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001b623c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001b6240:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001b5f98;
        }
    }
L_001b6244:;
    {
        goto L_001b607c;
    }
L_001b6248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b624c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001b6250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6324;
        }
    }
L_001b6254:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001b6258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001b625c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001b6260:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001b6264:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b6268:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0xa0u);
    }
L_001b626c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001b6270:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b6274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b62a4;
        }
    }
L_001b6278:;
    {
        cpu->r[3] = rd8(cpu->r[14] + - 0x1u);
    }
L_001b627c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b6280:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b6284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6368;
        }
    }
L_001b6288:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b628c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_001b6290:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b6294:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001b6298:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b629c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001b62a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6278;
        }
    }
L_001b62a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b62a8:;
    {
        goto L_001b6230;
    }
L_001b62ac:;
    {
        cpu->r[0] = rd32(0x001b62b4u + + 0x268u);
    }
L_001b62b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b62b8u, cpu->r[0], 0, 0);
    }
L_001b62b4:;
    {
        cpu->r[14] = 0x001b62b8u; fn_00208288(cpu);
    }
L_001b62b8:;
    {
        goto L_001b6008;
    }
L_001b62bc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_001b62c0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001b62c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5f10;
        }
    }
L_001b62c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b62cc:;
    {
        goto L_001b62e8;
    }
L_001b62d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001b62d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b64c0;
        }
    }
L_001b62d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b62dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001b62e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001b62e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b5f14;
        }
    }
L_001b62e8:;
    {
        cpu->r[0] = rd8(cpu->r[3]);
    }
L_001b62ec:;
    {
        cpu->r[1] = rd8(cpu->r[2] + - 0x1u);
    }
L_001b62f0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001b62f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b62d0;
        }
    }
L_001b62f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001b62fc:;
    {
        goto L_001b5ef4;
    }
L_001b6300:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001b6304:;
    {
        cpu->r[1] = rd8(cpu->r[11] + - 0x1u);
    }
L_001b6308:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_001b630c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b63ac;
        }
    }
L_001b6310:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b6314:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001b6318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001b631c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6304;
        }
    }
L_001b6320:;
    {
        goto L_001b6138;
    }
L_001b6324:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0xa0u);
    }
L_001b6328:;
    {
        cpu->r[3] = rd8(cpu->r[10]);
    }
L_001b632c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b6330:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_001b6334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b622c;
        }
    }
L_001b6338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b633c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b6340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6230;
        }
    }
L_001b6344:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_001b6348:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b634c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6338;
        }
    }
L_001b6350:;
    {
        goto L_001b6230;
    }
L_001b6354:;
    {
        cpu->r[14] = 0x001b6358u; fn_0018ba20(cpu);
    }
L_001b6358:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b635c:;
    {
        goto L_001b6048;
    }
L_001b6360:;
    {
        cpu->r[14] = 0x001b6364u; fn_0018ba20(cpu);
    }
L_001b6364:;
    {
        goto L_001b61d4;
    }
L_001b6368:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 1);
    }
L_001b636c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001b6370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6230;
        }
    }
L_001b6374:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b6378:;
    {
        goto L_001b638c;
    }
L_001b637c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b6380:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b6384:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001b6388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6230;
        }
    }
L_001b638c:;
    {
        cpu->r[1] = rd8(cpu->r[0]);
    }
L_001b6390:;
    {
        cpu->r[2] = rd8(cpu->r[3] + - 0x1u);
    }
L_001b6394:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b6398:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6288;
        }
    }
L_001b639c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001b63a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b637c;
        }
    }
L_001b63a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b63a8:;
    {
        goto L_001b6230;
    }
L_001b63ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001b63b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6138;
        }
    }
L_001b63b4:;
    {
        cpu->r[1] = rd8(cpu->r[11]);
    }
L_001b63b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_001b63bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b64f8;
        }
    }
L_001b63c0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_001b63c4:;
    {
        goto L_001b613c;
    }
L_001b63c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b63cc:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b63d0:;
    {
        goto L_001b6048;
    }
L_001b63d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_001b63d8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001b63dc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
        }
    }
L_001b63e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6438;
        }
    }
L_001b63e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001b63e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b63ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b64c8;
        }
    }
L_001b63f0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x8cu);
    }
L_001b63f4:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001b63f8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_001b63fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_001b6400:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001b6404:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001b6408:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b640c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6430;
        }
    }
L_001b6410:;
    {
        cpu->r[3] = rd8(cpu->r[12] + - 0x1u);
    }
L_001b6414:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b6418:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b641c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b647c;
        }
    }
L_001b6420:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001b6424:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001b6428:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_001b642c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6410;
        }
    }
L_001b6430:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_001b6434:;
    {
        goto L_001b643c;
    }
L_001b6438:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_001b643c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_001b6440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b608c;
        }
    }
L_001b6444:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001b6448:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001b60a4;
        }
    }
L_001b644c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001b6450:;
    {
        goto L_001b6048;
    }
L_001b6454:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b6458:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b645c:;
    {
        cpu->r[14] = 0x001b6460u; fn_0018ba20(cpu);
    }
L_001b6460:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b6464:;
    {
        goto L_001b6048;
    }
L_001b6468:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b646c:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001b6470:;
    {
        cpu->r[14] = 0x001b6474u; fn_001b4ac8(cpu);
    }
L_001b6474:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x88u);
    }
L_001b6478:;
    {
        goto L_001b6048;
    }
L_001b647c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_001b6480:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_001b6484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b643c;
        }
    }
L_001b6488:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b648c:;
    {
        goto L_001b64a0;
    }
L_001b6490:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b6494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b6498:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001b649c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b643c;
        }
    }
L_001b64a0:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_001b64a4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + - 0x1u);
    }
L_001b64a8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b64ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6420;
        }
    }
L_001b64b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001b64b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6490;
        }
    }
L_001b64b8:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001b64bc:;
    {
        goto L_001b643c;
    }
L_001b64c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001b64c4:;
    {
        goto L_001b5f14;
    }
L_001b64c8:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x8cu);
    }
L_001b64cc:;
    {
        cpu->r[3] = rd8(cpu->r[10]);
    }
L_001b64d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b64d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[10];
        }
    }
L_001b64d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6438;
        }
    }
L_001b64dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b64e0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001b64e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b643c;
        }
    }
L_001b64e8:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001b64ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b64f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b64dc;
        }
    }
L_001b64f4:;
    {
        goto L_001b643c;
    }
L_001b64f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001b64fc:;
    {
        goto L_001b6304;
    }
L_001b6500:;
    {
        cpu->r[14] = 0x001b6504u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b6504:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001b6508:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 1, 11u, &shc); cpu->r[4] = v;
        }
    }
L_001b650c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b6510:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b6514:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 23u, &shc); cpu->r[9] = v;
        }
    }
L_001b6518:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 23u, &shc); cpu->r[9] = v;
        }
    }
L_001b651c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN15GLXPlayerSocket3RunEv @ 001b6520 (arm) */
void fn_001b6520(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6520:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b6524:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b6528:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b652c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
        }
    }
L_001b6530:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b6534:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6548;
        }
    }
L_001b6538:;
    {
        cpu->r[0] = rd32(0x001b6540u + + 0x570u);
    }
L_001b653c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6544u, cpu->r[0], 0, 0);
    }
L_001b6540:;
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
L_001b6544:;
    {
        return fn_001d0ac4(cpu);
    }
L_001b6548:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_001b654c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6538;
        }
    }
L_001b6550:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001b6554:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_001b6558:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_001b68b0;
        case 1: goto L_001b684c;
        case 2: goto L_001b6738;
        case 3: goto L_001b65d8;
        case 4: goto L_001b6578;
        default: guest_unimplemented(cpu, 0x001b6558u); return; }
        }
    }
L_001b655c:;
    {
        goto L_001b6574;
    }
L_001b6574:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6578u)) return;
    }
L_001b6578:;
    {
        cpu->r[0] = rd32(0x001b6580u + + 0x534u);
    }
L_001b657c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6584u, cpu->r[0], 0, 0);
    }
L_001b6580:;
    {
        cpu->r[14] = 0x001b6584u; fn_001d0ac4(cpu);
    }
L_001b6584:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b658c:;
    {
        cpu->r[14] = 0x001b6594u;
    }
L_001b6590:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6594u)) return;
    }
L_001b6594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b6598:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x840u);
    }
L_001b659c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x83cu);
    }
L_001b65a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b65a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b65a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001b65ac:;
    {
        cpu->r[14] = 0x001b65b4u;
    }
L_001b65b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b65b4u)) return;
    }
L_001b65b4:;
    {
        cpu->r[1] = rd32(0x001b65bcu + + 0x4fcu);
    }
L_001b65b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b65bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b65c4u, cpu->r[1], 0, 0);
    }
L_001b65c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001b65c4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001b65c8:;
    {
        cpu->r[14] = 0x001b65ccu; fn_00189c04(cpu);
    }
L_001b65cc:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_001b65d0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b65d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b65d8u)) return;
    }
L_001b65d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b65dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b65e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b65e4:;
    {
        cpu->r[14] = 0x001b65ecu;
    }
L_001b65e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b65ecu)) return;
    }
L_001b65ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b65f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b65f4u)) return;
        }
    }
L_001b65f4:;
    {
        cpu->r[0] = rd32(0x001b65fcu + + 0x4c0u);
    }
L_001b65f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001b65fc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6604u, cpu->r[0], 0, 0);
    }
L_001b6600:;
    {
        cpu->r[14] = 0x001b6604u; fn_001d0ac4(cpu);
    }
L_001b6604:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6608:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b660c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b6610:;
    {
        cpu->r[14] = 0x001b6614u; fn_001d0700(cpu);
    }
L_001b6614:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b661c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6620:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b6624:;
    {
        cpu->r[14] = 0x001b662cu;
    }
L_001b6628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b662cu)) return;
    }
L_001b662c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6630:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b6a34;
        }
    }
L_001b6634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6900;
        }
    }
L_001b6638:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b663c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001b6640:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001b6644:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001cu, 0, 0);
    }
L_001b664c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6650:;
    {
        cpu->r[14] = 0x001b6654u; fn_001b4cd4(cpu);
    }
L_001b6654:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x845u);
    }
L_001b6658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b665c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b66cc;
        }
    }
L_001b6660:;
    {
        cpu->r[5] = rd32(0x001b6668u + + 0x458u);
    }
L_001b6664:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6668:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b666c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b6674u, cpu->r[5], 0, 0);
    }
L_001b6670:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6674:;
    {
        cpu->r[14] = 0x001b6678u; fn_001b477c(cpu);
    }
L_001b6678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b667c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6680u)) return;
        }
    }
L_001b6680:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6684:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b6688:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b668c:;
    {
        cpu->r[14] = 0x001b6690u; fn_001b477c(cpu);
    }
L_001b6690:;
    {
        cpu->r[1] = rd32(0x001b6698u + + 0x42cu);
    }
L_001b6694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6698:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b66a0u, cpu->r[1], 0, 0);
    }
L_001b669c:;
    {
        cpu->r[14] = 0x001b66a0u; fn_001b4e98(cpu);
    }
L_001b66a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b66a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b66bc;
        }
    }
L_001b66a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b66ac:;
    {
        cpu->r[14] = 0x001b66b0u; fn_001b5e2c(cpu);
    }
L_001b66b0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b66b4:;
    {
        wr8(cpu->r[4] + + 0x846u, cpu->r[3]);
    }
L_001b66b8:;
    {
        wr32(cpu->r[4] + + 0x848u, cpu->r[0]);
    }
L_001b66bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b66c0:;
    {
        cpu->r[14] = 0x001b66c4u; fn_001b51f8(cpu);
    }
L_001b66c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b66c8:;
    {
        wr8(cpu->r[4] + + 0x845u, cpu->r[3]);
    }
L_001b66cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b66d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x83cu);
    }
L_001b66d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x840u);
    }
L_001b66d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b66dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b66e0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001b66e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b66e8:;
    {
        cpu->r[14] = 0x001b66f0u;
    }
L_001b66ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b66f0u)) return;
    }
L_001b66f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x846u);
    }
L_001b66f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b66f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b66fcu)) return;
        }
    }
L_001b66fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x848u);
    }
L_001b6700:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001b6704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6708u)) return;
        }
    }
L_001b6708:;
    {
        cpu->r[0] = rd32(0x001b6710u + + 0x3b8u);
    }
L_001b670c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001b6710:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b6714:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b671cu, cpu->r[0], 0, 0);
    }
L_001b6718:;
    {
        cpu->r[14] = 0x001b671cu; fn_001d0ac4(cpu);
    }
L_001b671c:;
    {
        cpu->r[14] = 0x001b6720u; fn_001d05bc(cpu);
    }
L_001b6720:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x854u);
    }
L_001b6724:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001b6728:;
    {
        cpu->r[0] = rd32(0x001b6730u + + 0x39cu);
    }
L_001b672c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6734u, cpu->r[0], 0, 0);
    }
L_001b6730:;
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
L_001b6734:;
    {
        return fn_001d0ac4(cpu);
    }
L_001b6738:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b673c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6740:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001b6744:;
    {
        cpu->r[14] = 0x001b674cu;
    }
L_001b6748:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b674cu)) return;
    }
L_001b674c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6750:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b69f8;
        }
    }
L_001b6754:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6758u)) return;
        }
    }
L_001b6758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b675c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b6760:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b6764:;
    {
        cpu->r[14] = 0x001b676cu;
    }
L_001b6768:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b676cu)) return;
    }
L_001b676c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b6770:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b6774:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b6778:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b677c:;
    {
        cpu->r[14] = 0x001b6784u;
    }
L_001b6780:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6784u)) return;
    }
L_001b6784:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84cu);
    }
L_001b6788:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001b678c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_001b6790:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,15);
    }
L_001b6794:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001b679cu + + 0x30cu);
    }
L_001b6798:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,6), *vfp_d(cpu,7));
    }
L_001b679c:;
    {
        vfp_sync_flags(cpu);
    }
L_001b67a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00007800u;
        }
    }
L_001b67a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b67a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b67ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b67b0:;
    {
        cpu->r[14] = 0x001b67b8u;
    }
L_001b67b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b67b8u)) return;
    }
L_001b67b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b67bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b6a88;
        }
    }
L_001b67c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84cu);
    }
L_001b67c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001b67c8:;
    {
        wr32(cpu->r[4] + + 0x84cu, cpu->r[0]);
    }
L_001b67cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001b67d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b67d4u)) return;
        }
    }
L_001b67d4:;
    {
        cpu->r[0] = rd32(0x001b67dcu + + 0x2f4u);
    }
L_001b67d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001b67dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b67e4u, cpu->r[0], 0, 0);
    }
L_001b67e0:;
    {
        cpu->r[14] = 0x001b67e4u; fn_001d0ac4(cpu);
    }
L_001b67e4:;
    {
        cpu->r[1] = rd32(0x001b67ecu + + 0x2e8u);
    }
L_001b67e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b67ec:;
    {
        wr32(cpu->r[4] + + 0x81cu, cpu->r[6]);
    }
L_001b67f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b67f8u, cpu->r[1], 0, 0);
    }
L_001b67f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001b67f8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001b67fc:;
    {
        cpu->r[14] = 0x001b6800u; fn_00189c04(cpu);
    }
L_001b6800:;
    {
        cpu->r[0] = rd32(0x001b6808u + + 0x2d0u);
    }
L_001b6804:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b6808:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b680c:;
    {
        wr8(cpu->r[4] + + 0x845u, cpu->r[3]);
    }
L_001b6810:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6818u, cpu->r[0], 0, 0);
    }
L_001b6814:;
    {
        wr8(cpu->r[4] + + 0x846u, cpu->r[6]);
    }
L_001b6818:;
    {
        wr8(cpu->r[4] + + 0x844u, cpu->r[6]);
    }
L_001b681c:;
    {
        cpu->r[14] = 0x001b6820u; fn_001d0ac4(cpu);
    }
L_001b6820:;
    {
        cpu->r[14] = 0x001b6824u; fn_001d05bc(cpu);
    }
L_001b6824:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x850u);
    }
L_001b6828:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001b682c:;
    {
        cpu->r[0] = rd32(0x001b6834u + + 0x2a8u);
    }
L_001b6830:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6838u, cpu->r[0], 0, 0);
    }
L_001b6834:;
    {
        cpu->r[14] = 0x001b6838u; fn_001d0ac4(cpu);
    }
L_001b6838:;
    {
        cpu->r[14] = 0x001b683cu; fn_001d05bc(cpu);
    }
L_001b683c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001b6840:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b6844:;
    {
        wr32(cpu->r[4] + + 0x854u, cpu->r[0]);
    }
L_001b6848:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b684cu)) return;
    }
L_001b684c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6854:;
    {
        cpu->r[14] = 0x001b685cu;
    }
L_001b6858:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b685cu)) return;
    }
L_001b685c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6860:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6960;
        }
    }
L_001b6864:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x858u);
    }
L_001b6868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001b686c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6950;
        }
    }
L_001b6870:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6878:;
    {
        cpu->r[14] = 0x001b6880u;
    }
L_001b687c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6880u)) return;
    }
L_001b6880:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b6884:;
    {
        cpu->r[0] = rd32(0x001b688cu + + 0x254u);
    }
L_001b6888:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6890u, cpu->r[0], 0, 0);
    }
L_001b688c:;
    {
        cpu->r[14] = 0x001b6890u; fn_001d0ac4(cpu);
    }
L_001b6890:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6898:;
    {
        cpu->r[14] = 0x001b68a0u;
    }
L_001b689c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b68a0u)) return;
    }
L_001b68a0:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001b68a4:;
    {
        wr32(cpu->r[4] + + 0x858u, cpu->r[5]);
    }
L_001b68a8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b68ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b68b0u)) return;
    }
L_001b68b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b68b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b68b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b698c;
        }
    }
L_001b68bc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b68c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b68c4:;
    {
        cpu->r[14] = 0x001b68ccu;
    }
L_001b68c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b68ccu)) return;
    }
L_001b68cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b68d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001b68d4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_001b68d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b68dcu)) return;
        }
    }
L_001b68dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b68e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b68e4:;
    {
        cpu->r[14] = 0x001b68ecu;
    }
L_001b68e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b68ecu)) return;
    }
L_001b68ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b68f0:;
    {
        cpu->r[0] = rd32(0x001b68f8u + + 0x1ecu);
    }
L_001b68f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b68fcu, cpu->r[0], 0, 0);
    }
L_001b68f8:;
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
L_001b68fc:;
    {
        return fn_001d0ac4(cpu);
    }
L_001b6900:;
    {
        cpu->r[0] = rd32(0x001b6908u + + 0x1e0u);
    }
L_001b6904:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b690cu, cpu->r[0], 0, 0);
    }
L_001b6908:;
    {
        cpu->r[14] = 0x001b690cu; fn_001d0ac4(cpu);
    }
L_001b690c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x846u);
    }
L_001b6910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b6914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6920;
        }
    }
L_001b6918:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b691c:;
    {
        cpu->r[14] = 0x001b6920u; fn_001b53d8(cpu);
    }
L_001b6920:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b6924:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x840u);
    }
L_001b6928:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x83cu);
    }
L_001b692c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b6930:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b6934:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001b6938:;
    {
        cpu->r[14] = 0x001b6940u;
    }
L_001b693c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6940u)) return;
    }
L_001b6940:;
    {
        cpu->r[1] = rd32(0x001b6948u + + 0x1a4u);
    }
L_001b6944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_001b6948:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b6950u, cpu->r[1], 0, 0);
    }
L_001b694c:;
    {
        goto L_001b65c0;
    }
L_001b6950:;
    {
        cpu->r[0] = rd32(0x001b6958u + + 0x198u);
    }
L_001b6954:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b695cu, cpu->r[0], 0, 0);
    }
L_001b6958:;
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
L_001b695c:;
    {
        return fn_001d0ac4(cpu);
    }
L_001b6960:;
    {
        cpu->r[0] = rd32(0x001b6968u + + 0x18cu);
    }
L_001b6964:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b6968:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6970u, cpu->r[0], 0, 0);
    }
L_001b696c:;
    {
        cpu->r[14] = 0x001b6970u; fn_001d0ac4(cpu);
    }
L_001b6970:;
    {
        wr32(cpu->r[4] + + 0x84cu, cpu->r[5]);
    }
L_001b6974:;
    {
        cpu->r[14] = 0x001b6978u; fn_001d05bc(cpu);
    }
L_001b6978:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001b697c:;
    {
        wr32(cpu->r[4] + + 0x858u, cpu->r[5]);
    }
L_001b6980:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b6984:;
    {
        wr32(cpu->r[4] + + 0x850u, cpu->r[0]);
    }
L_001b6988:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b698cu)) return;
    }
L_001b698c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6994:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b6998:;
    {
        cpu->r[14] = 0x001b69a0u;
    }
L_001b699c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b69a0u)) return;
    }
L_001b69a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b69a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b69a8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001b69ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b68bc;
        }
    }
L_001b69b0:;
    {
        cpu->r[14] = 0x001b69b4u; fn_001d05bc(cpu);
    }
L_001b69b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x864u);
    }
L_001b69b8:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_001b69bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001b69c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b69c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b69c8u)) return;
        }
    }
L_001b69c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b69cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b69d0:;
    {
        cpu->r[14] = 0x001b69d8u;
    }
L_001b69d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b69d8u)) return;
    }
L_001b69d8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b69dc:;
    {
        cpu->r[0] = rd32(0x001b69e4u + + 0x114u);
    }
L_001b69e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b69e8u, cpu->r[0], 0, 0);
    }
L_001b69e4:;
    {
        cpu->r[14] = 0x001b69e8u; fn_001d0ac4(cpu);
    }
L_001b69e8:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001b69ec:;
    {
        wr32(cpu->r[4] + + 0x85cu, cpu->r[5]);
    }
L_001b69f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b69f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b69f8u)) return;
    }
L_001b69f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b69fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6a00:;
    {
        cpu->r[14] = 0x001b6a08u;
    }
L_001b6a04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a08u)) return;
    }
L_001b6a08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b6a0c:;
    {
        cpu->r[0] = rd32(0x001b6a14u + + 0xe8u);
    }
L_001b6a10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6a18u, cpu->r[0], 0, 0);
    }
L_001b6a14:;
    {
        cpu->r[14] = 0x001b6a18u; fn_001d0ac4(cpu);
    }
L_001b6a18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6a1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6a20:;
    {
        cpu->r[14] = 0x001b6a28u;
    }
L_001b6a24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a28u)) return;
    }
L_001b6a28:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001b6a2c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001b6a30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a34u)) return;
    }
L_001b6a34:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6a38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6a3c:;
    {
        cpu->r[14] = 0x001b6a44u;
    }
L_001b6a40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a44u)) return;
    }
L_001b6a44:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b6a48:;
    {
        cpu->r[0] = rd32(0x001b6a50u + + 0xb0u);
    }
L_001b6a4c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6a54u, cpu->r[0], 0, 0);
    }
L_001b6a50:;
    {
        cpu->r[14] = 0x001b6a54u; fn_001d0ac4(cpu);
    }
L_001b6a54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6a58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6a5c:;
    {
        cpu->r[14] = 0x001b6a64u;
    }
L_001b6a60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a64u)) return;
    }
L_001b6a64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b6a68:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_001b6a6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b6a70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b6a74:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_001b6a78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b6a7c:;
    {
        cpu->r[14] = 0x001b6a84u;
    }
L_001b6a80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a84u)) return;
    }
L_001b6a84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a88u)) return;
    }
L_001b6a88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b6a8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6a90:;
    {
        cpu->r[14] = 0x001b6a98u;
    }
L_001b6a94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6a98u)) return;
    }
L_001b6a98:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b6a9c:;
    {
        cpu->r[0] = rd32(0x001b6aa4u + + 0x60u);
    }
L_001b6aa0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b6aa8u, cpu->r[0], 0, 0);
    }
L_001b6aa4:;
    {
        goto L_001b6a14;
    }
}

/* _ZN22GLXPlayerSocketFactory9GetSocketEPciP23GLXPlayerSocketObserver @ 001b6b08 (arm) */
void fn_001b6b08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6b08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b6b0c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b6b10:;
    {
        cpu->r[0] = 0x00000cf0u;
    }
L_001b6b14:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b6b18:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001b6b1c:;
    {
        cpu->r[14] = 0x001b6b20u; fn_0018ba6c(cpu);
    }
L_001b6b20:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b6b24:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b6b28:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001b6b2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b6b30:;
    {
        cpu->r[14] = 0x001b6b34u; fn_001d26f0(cpu);
    }
L_001b6b34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6b38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6b3cu)) return;
    }
}

/* _ZN21GLXPlayerWebComponent19StartResponseParserEPci @ 001b6b3c (arm) */
void fn_001b6b3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6b3c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_001b6b40:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_001b6b44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GLXPlayerWebComponent13GetFunctionIDEci @ 001b6b48 (arm) */
void fn_001b6b48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6b48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000066u, 1, 1);
    }
L_001b6b4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6b58;
        }
    }
L_001b6b50:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b6b54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b6b58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000067u, 1, 1);
    }
L_001b6b5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001b6b60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001f4u, 0, 0);
        }
    }
L_001b6b64:;
    {
        goto L_001b6b50;
    }
}

/* _ZN21GLXPlayerWebComponent15OnUpdateSuccessEi @ 001b6b68 (arm) */
void fn_001b6b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6b68:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b6b6c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b6b70:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b6b74:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b6b78:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b6b7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6b80:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
    }
L_001b6b84:;
    {
        cpu->r[14] = 0x001b6b88u; fn_001d0434(cpu);
    }
L_001b6b88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b6b8c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b6b90:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b6b94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6b98:;
    {
        cpu->r[14] = 0x001b6b9cu; guest_call(cpu, cpu->r[4]);
    }
L_001b6b9c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b6ba0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6ba4u)) return;
    }
}

/* _ZN21GLXPlayerWebComponent10LoadConfigEv @ 001b6ba4 (arm) */
void fn_001b6ba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6ba4:;
    {
        cpu->r[1] = rd32(0x001b6bacu + + 0x428u);
    }
L_001b6ba8:;
    {
        cpu->r[2] = rd32(0x001b6bb0u + + 0x428u);
    }
L_001b6bac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b6bb4u, cpu->r[1], 0, 0);
    }
L_001b6bb0:;
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
L_001b6bb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001b6bb8:;
    {
        cpu->r[4] = rd32(0x001b6bc0u + + 0x41cu);
    }
L_001b6bbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000364u, 1, 0);
    }
L_001b6bc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b6bc4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b6bccu, cpu->r[4], 0, 0);
    }
L_001b6bc8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001b6bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6bd0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001b6bd4:;
    {
        wr32(cpu->r[13] + + 0x35cu, cpu->r[3]);
    }
L_001b6bd8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001b6bdc:;
    {
        cpu->r[14] = 0x001b6be0u; fn_00073f80(cpu);
    }
L_001b6be0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001b6be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b6be8:;
    {
        cpu->r[14] = 0x001b6becu; fn_00073e10(cpu);
    }
L_001b6bec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b6bf0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001b6bf4:;
    {
        cpu->r[14] = 0x001b6bf8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b6bf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001b6bfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b6c00:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b6c04:;
    {
        cpu->r[14] = 0x001b6c08u; fn_001d0700(cpu);
    }
L_001b6c08:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001b6c0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6c10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b6c14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b6c18:;
    {
        cpu->r[14] = 0x001b6c1cu; fn_001d0048(cpu);
    }
L_001b6c1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6c20:;
    {
        cpu->r[14] = 0x001b6c24u; fn_001d0434(cpu);
    }
L_001b6c24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b6c28:;
    {
        cpu->r[3] = rd8(cpu->r[0] + - 0x1u);
    }
L_001b6c2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001b6c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6fb8;
        }
    }
L_001b6c34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6c38:;
    {
        cpu->r[14] = 0x001b6c3cu; fn_001d0434(cpu);
    }
L_001b6c3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6c40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b6f6c;
        }
    }
L_001b6c44:;
    {
        cpu->r[3] = rd32(0x001b6c4cu + + 0x394u);
    }
L_001b6c48:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000033cu, 0, 0);
    }
L_001b6c4c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001b6c50:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_001b6c54:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b6c5cu, cpu->r[3], 0, 0);
    }
L_001b6c58:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001b6c5c:;
    {
        cpu->r[3] = rd32(0x001b6c64u + + 0x380u);
    }
L_001b6c60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000023cu, 0, 0);
    }
L_001b6c64:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b6c68:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_001b6c6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b6c74u, cpu->r[3], 0, 0);
    }
L_001b6c70:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001b6c74:;
    {
        cpu->r[3] = rd32(0x001b6c7cu + + 0x36cu);
    }
L_001b6c78:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_001b6c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b6c84u, cpu->r[3], 0, 0);
    }
L_001b6c80:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001b6c84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000013cu, 0, 0);
    }
L_001b6c88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001b6c8c:;
    {
        goto L_001b6d08;
    }
L_001b6c90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6c94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b6c98:;
    {
        cpu->r[14] = 0x001b6c9cu; fn_001d06e8(cpu);
    }
L_001b6c9c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6de0;
        }
    }
L_001b6ca4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6ca8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b6cac:;
    {
        cpu->r[14] = 0x001b6cb0u; fn_001d06e8(cpu);
    }
L_001b6cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6f38;
        }
    }
L_001b6cb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6cbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b6cc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001b6cc4:;
    {
        cpu->r[14] = 0x001b6cc8u; fn_001d0700(cpu);
    }
L_001b6cc8:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001b6ccc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b6cd0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001b6cd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b6cd8:;
    {
        cpu->r[14] = 0x001b6cdcu; fn_001d0048(cpu);
    }
L_001b6cdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6ce0:;
    {
        cpu->r[14] = 0x001b6ce4u; fn_001d0434(cpu);
    }
L_001b6ce4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b6ce8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + - 0x1u);
    }
L_001b6cec:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001b6cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6f4c;
        }
    }
L_001b6cf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6cf8:;
    {
        cpu->r[14] = 0x001b6cfcu; fn_001d0434(cpu);
    }
L_001b6cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6d00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b6f6c;
        }
    }
L_001b6d04:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001b6d08:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001b6d0c:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[4]);
    }
L_001b6d10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b6d14:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6d18:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001b6d20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6d24:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001b6d28:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d2c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d30:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d34:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d38:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001b6d3c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001b6d40:;
    {
        cpu->r[14] = 0x001b6d44u; imp_memset(cpu); /* memset */
    }
L_001b6d44:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b6d48:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001b6d4c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b6d50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6d54:;
    {
        cpu->r[14] = 0x001b6d58u; fn_001d0048(cpu);
    }
L_001b6d58:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001b6d5c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b6d60:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b6d64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6d68:;
    {
        cpu->r[14] = 0x001b6d6cu; fn_001d0048(cpu);
    }
L_001b6d6c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b6d70:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6d74:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b6d78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6d7c:;
    {
        cpu->r[14] = 0x001b6d80u; fn_001d0700(cpu);
    }
L_001b6d80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6d84:;
    {
        cpu->r[14] = 0x001b6d88u; fn_001d0434(cpu);
    }
L_001b6d88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001b6d8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_001b6d90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6d94:;
    {
        cpu->r[14] = 0x001b6d98u; fn_001d06ec(cpu);
    }
L_001b6d98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6d9c:;
    {
        cpu->r[14] = 0x001b6da0u; fn_001d049c(cpu);
    }
L_001b6da0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6da4:;
    {
        cpu->r[14] = 0x001b6da8u; fn_001d049c(cpu);
    }
L_001b6da8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6dac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b6db0:;
    {
        cpu->r[14] = 0x001b6db4u; fn_001d06e8(cpu);
    }
L_001b6db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6db8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6c90;
        }
    }
L_001b6dbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6dc0:;
    {
        cpu->r[14] = 0x001b6dc4u; fn_001d06cc(cpu);
    }
L_001b6dc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6dc8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[0]);
    }
L_001b6dcc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6dd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b6dd4:;
    {
        cpu->r[14] = 0x001b6dd8u; fn_001d06e8(cpu);
    }
L_001b6dd8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6ddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6ca4;
        }
    }
L_001b6de0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6de4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6de8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6dec:;
    {
        cpu->r[14] = 0x001b6df0u; imp_memset(cpu); /* memset */
    }
L_001b6df0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6df4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6df8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b6dfc:;
    {
        cpu->r[14] = 0x001b6e00u; imp_memset(cpu); /* memset */
    }
L_001b6e00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6e04:;
    {
        cpu->r[14] = 0x001b6e08u; fn_001d0ce8(cpu);
    }
L_001b6e08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6e0c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6e10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6e14:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[0]);
    }
L_001b6e18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e1c:;
    {
        cpu->r[14] = 0x001b6e20u; fn_001d0700(cpu);
    }
L_001b6e20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b6e24:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6e28:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6e2c:;
    {
        cpu->r[14] = 0x001b6e30u; fn_001d0700(cpu);
    }
L_001b6e30:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b6e34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e38:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b6e3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6e40:;
    {
        cpu->r[14] = 0x001b6e44u; fn_001d0048(cpu);
    }
L_001b6e44:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6e48:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b6e4c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b6e50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e54:;
    {
        cpu->r[14] = 0x001b6e58u; fn_001d0700(cpu);
    }
L_001b6e58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6e5c:;
    {
        cpu->r[14] = 0x001b6e60u; fn_001d0434(cpu);
    }
L_001b6e60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001b6e64:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001b6e68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e6c:;
    {
        cpu->r[14] = 0x001b6e70u; fn_001d06ec(cpu);
    }
L_001b6e70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b6e74:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b6e78:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001b6e7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e80:;
    {
        cpu->r[14] = 0x001b6e84u; fn_001d0048(cpu);
    }
L_001b6e84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6e88:;
    {
        cpu->r[14] = 0x001b6e8cu; fn_001d0434(cpu);
    }
L_001b6e8c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001b6e90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b6e94:;
    {
        cpu->r[14] = 0x001b6e98u; fn_001d0434(cpu);
    }
L_001b6e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001b6e9c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_001b6ea0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b6ea4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b6ea8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001b6eac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001b6eb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001b6eb4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001b6eb8:;
    {
        cpu->r[14] = 0x001b6ebcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b6ebc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6ec0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6ec4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b6ec8:;
    {
        wr32(cpu->r[14] + + 0x10u, cpu->r[0]);
    }
L_001b6ecc:;
    {
        cpu->r[14] = 0x001b6ed0u; fn_001d0700(cpu);
    }
L_001b6ed0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6ed4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b6ed8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b6edc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001b6ee0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x10u);
    }
L_001b6ee4:;
    {
        cpu->r[14] = 0x001b6ee8u; fn_001d06ec(cpu);
    }
L_001b6ee8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b6eec:;
    {
        cpu->r[14] = 0x001b6ef0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b6ef0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6ef4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b6ef8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b6efc:;
    {
        wr32(cpu->r[14] + + 0x14u, cpu->r[0]);
    }
L_001b6f00:;
    {
        cpu->r[14] = 0x001b6f04u; fn_001d0700(cpu);
    }
L_001b6f04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b6f08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b6f0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b6f10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001b6f14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6f18:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001b6f1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001b6f20:;
    {
        cpu->r[14] = 0x001b6f24u; fn_001d06ec(cpu);
    }
L_001b6f24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b6f28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001b6f2c:;
    {
        cpu->r[14] = 0x001b6f30u; fn_001d06e8(cpu);
    }
L_001b6f30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6f34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6cb8;
        }
    }
L_001b6f38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b6f3c:;
    {
        cpu->r[14] = 0x001b6f40u; fn_001d0ce8(cpu);
    }
L_001b6f40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b6f44:;
    {
        wr32(cpu->r[14] + + 0x18u, cpu->r[0]);
    }
L_001b6f48:;
    {
        goto L_001b6cb8;
    }
L_001b6f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6f50:;
    {
        cpu->r[14] = 0x001b6f54u; fn_001d0434(cpu);
    }
L_001b6f54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b6f58:;
    {
        wr8(cpu->r[0] + - 0x1u, cpu->r[4]);
    }
L_001b6f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6f60:;
    {
        cpu->r[14] = 0x001b6f64u; fn_001d0434(cpu);
    }
L_001b6f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b6f68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b6d04;
        }
    }
L_001b6f6c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b6f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6f7c;
        }
    }
L_001b6f74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6f78:;
    {
        cpu->r[14] = 0x001b6f7cu; fn_0018ba20(cpu);
    }
L_001b6f7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b6f80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b6f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b6f90;
        }
    }
L_001b6f88:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b6f8c:;
    {
        cpu->r[14] = 0x001b6f90u; fn_0018ba20(cpu);
    }
L_001b6f90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001b6f94:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b6f98:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001b6f9c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001b6fa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x35cu);
    }
L_001b6fa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b6fa8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b6fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b6fd0;
        }
    }
L_001b6fb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000364u, 0, 0);
    }
L_001b6fb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b6fb8u)) return;
    }
L_001b6fb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b6fbc:;
    {
        cpu->r[14] = 0x001b6fc0u; fn_001d0434(cpu);
    }
L_001b6fc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b6fc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001b6fc8:;
    {
        wr8(cpu->r[0] + - 0x1u, cpu->r[3]);
    }
L_001b6fcc:;
    {
        goto L_001b6c34;
    }
L_001b6fd0:;
    {
        cpu->r[14] = 0x001b6fd4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b6fd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 4, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001b6fd8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b6fdc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 5u, &shc); cpu->r[9] = v;
        }
    }
L_001b6fe0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b6fe4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 3u, &shc); cpu->r[9] = v;
        }
    }
L_001b6fe8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 3u, &shc); cpu->r[9] = v;
        }
    }
}

/* _ZN21GLXPlayerWebComponent20GetNextResponseTokenEPc @ 001b6fec (arm) */
void fn_001b6fec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b6fec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b6ff0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001b6ff4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b6ff8:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001b6ffc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7060;
        }
    }
L_001b7004:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001b7008:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001b700c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001b7010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7074;
        }
    }
L_001b7014:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001b7018:;
    {
        goto L_001b7024;
    }
L_001b701c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000007cu, 1, 1);
    }
L_001b7020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7070;
        }
    }
L_001b7024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b7028:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001b702c:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_001b7030:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b7034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b701c;
        }
    }
L_001b7038:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001b703c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001b7040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7060;
        }
    }
L_001b7044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7048:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001b704c:;
    {
        cpu->r[14] = 0x001b7050u; fn_001d06d8(cpu);
    }
L_001b7050:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7054:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7058:;
    {
        wr8(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001b705c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7060u)) return;
    }
L_001b7060:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7068:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_001b706c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7070u)) return;
    }
L_001b7070:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001b7074:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b7078:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001b707c:;
    {
        goto L_001b703c;
    }
}

/* _ZN21GLXPlayerWebComponent22IsNextResponseIntTokenEi @ 001b7080 (arm) */
void fn_001b7080(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7080:;
    {
        cpu->r[3] = rd32(0x001b7088u + + 0x80u);
    }
L_001b7084:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b7088:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b708c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b7090:;
    {
        cpu->r[0] = rd32(0x001b7098u + + 0x74u);
    }
L_001b7094:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b709cu, cpu->r[3], 0, 0);
    }
L_001b7098:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_001b709c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b70a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b70a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b70a8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001b70ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b70b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b70b4:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001b70b8:;
    {
        cpu->r[14] = 0x001b70bcu; imp_memset(cpu); /* memset */
    }
L_001b70bc:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b70c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b70c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b70c8:;
    {
        cpu->r[14] = 0x001b70ccu; fn_001d0700(cpu);
    }
L_001b70cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b70d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b70d4:;
    {
        cpu->r[14] = 0x001b70d8u; fn_001b6fec(cpu);
    }
L_001b70d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b70dc:;
    {
        cpu->r[14] = 0x001b70e0u; fn_001d06cc(cpu);
    }
L_001b70e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b70e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b70e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001b70ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b70f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b70f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b70f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7104;
        }
    }
L_001b70fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001b7100:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7104u)) return;
    }
L_001b7104:;
    {
        cpu->r[14] = 0x001b7108u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7108:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001b710c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN21GLXPlayerWebComponent25IsNextResponseStringTokenEPKc @ 001b7110 (arm) */
void fn_001b7110(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7110:;
    {
        cpu->r[3] = rd32(0x001b7118u + + 0x80u);
    }
L_001b7114:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b7118:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b711c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b7120:;
    {
        cpu->r[0] = rd32(0x001b7128u + + 0x74u);
    }
L_001b7124:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b712cu, cpu->r[3], 0, 0);
    }
L_001b7128:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_001b712c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b7130:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b7134:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7138:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001b713c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7140:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b7144:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001b7148:;
    {
        cpu->r[14] = 0x001b714cu; imp_memset(cpu); /* memset */
    }
L_001b714c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b7150:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7154:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7158:;
    {
        cpu->r[14] = 0x001b715cu; fn_001d0700(cpu);
    }
L_001b715c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b7160:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b7164:;
    {
        cpu->r[14] = 0x001b7168u; fn_001b6fec(cpu);
    }
L_001b7168:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b716c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b7170:;
    {
        cpu->r[14] = 0x001b7174u; fn_001d06e8(cpu);
    }
L_001b7174:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b7178:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b717c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001b7180:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b7184:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7194;
        }
    }
L_001b718c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001b7190:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7194u)) return;
    }
L_001b7194:;
    {
        cpu->r[14] = 0x001b7198u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7198:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 4, 5u, &shc); cpu->r[3] = v;
        }
    }
L_001b719c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN21GLXPlayerWebComponent23GetNextResponseIntTokenEv @ 001b71a0 (arm) */
void fn_001b71a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b71a0:;
    {
        cpu->r[3] = rd32(0x001b71a8u + + 0x70u);
    }
L_001b71a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b71a8:;
    {
        cpu->r[12] = rd32(0x001b71b0u + + 0x6cu);
    }
L_001b71ac:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b71b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b71b8u, cpu->r[3], 0, 0);
    }
L_001b71b4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b71b8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001b71bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_001b71c0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b71c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b71c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b71cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b71d0:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001b71d4:;
    {
        cpu->r[14] = 0x001b71d8u; imp_memset(cpu); /* memset */
    }
L_001b71d8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b71dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b71e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b71e4:;
    {
        cpu->r[14] = 0x001b71e8u; fn_001d0700(cpu);
    }
L_001b71e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b71ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b71f0:;
    {
        cpu->r[14] = 0x001b71f4u; fn_001b6fec(cpu);
    }
L_001b71f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b71f8:;
    {
        cpu->r[14] = 0x001b71fcu; fn_001d06cc(cpu);
    }
L_001b71fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001b7200:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001b7204:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7214;
        }
    }
L_001b720c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_001b7210:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7214u)) return;
    }
L_001b7214:;
    {
        cpu->r[14] = 0x001b7218u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7218:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 4, 4u, &shc); cpu->r[3] = v;
        }
    }
L_001b721c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN21GLXPlayerWebComponent15OnUpdateFailureEi @ 001b7220 (arm) */
void fn_001b7220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7220:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7224:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7228:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001b722c:;
    {
        cpu->r[14] = 0x001b7230u; fn_001b71a0(cpu);
    }
L_001b7230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b7234:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7238:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b723c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b7240:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7244:;
    {
        cpu->r[14] = 0x001b724cu;
    }
L_001b7248:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b724cu)) return;
    }
L_001b724c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b7250:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7254u)) return;
    }
}

/* _ZN21GLXPlayerWebComponent10SendByPostEPc @ 001b7254 (arm) */
void fn_001b7254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7254:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b7258:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b725c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b7260:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b7264:;
    {
        wr8(cpu->r[5] + + 0x2cu, cpu->r[3]);
    }
L_001b7268:;
    {
        cpu->r[14] = 0x001b726cu; fn_001d091c(cpu);
    }
L_001b726c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b7270:;
    {
        cpu->r[14] = 0x001b7274u; fn_001d0434(cpu);
    }
L_001b7274:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_001b7278:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b727c:;
    {
        cpu->r[14] = 0x001b7280u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b7280:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b7284:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7288:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b728c:;
    {
        cpu->r[14] = 0x001b7290u; fn_001d0700(cpu);
    }
L_001b7290:;
    {
        cpu->r[1] = rd32(0x001b7298u + + 0x5cu);
    }
L_001b7294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7298:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b729c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b72a4u, cpu->r[1], 0, 0);
    }
L_001b72a0:;
    {
        cpu->r[14] = 0x001b72a4u; imp_sprintf(cpu); /* sprintf */
    }
L_001b72a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b72a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b72b4;
        }
    }
L_001b72ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b72b0:;
    {
        cpu->r[14] = 0x001b72b4u; fn_0018ba20(cpu);
    }
L_001b72b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b72b8:;
    {
        cpu->r[14] = 0x001b72bcu; fn_001d0434(cpu);
    }
L_001b72bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b72c0:;
    {
        cpu->r[0] = rd32(0x001b72c8u + + 0x30u);
    }
L_001b72c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b72ccu, cpu->r[0], 0, 0);
    }
L_001b72c8:;
    {
        cpu->r[14] = 0x001b72ccu; fn_001d0ac4(cpu);
    }
L_001b72cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001b72d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_001b72d4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b72d8:;
    {
        cpu->r[14] = 0x001b72dcu; fn_001b4194(cpu);
    }
L_001b72dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001b72e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b72ec;
        }
    }
L_001b72e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b72e8:;
    {
        cpu->r[14] = 0x001b72ecu; fn_0018ba20(cpu);
    }
L_001b72ec:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b72f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b72f4u)) return;
    }
}

/* _ZN21GLXPlayerWebComponent9SendByGetEPc @ 001b72fc (arm) */
void fn_001b72fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b72fc:;
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
L_001b7300:;
    {
        cpu->r[4] = rd32(0x001b7308u + + 0xf4u);
    }
L_001b7304:;
    {
        cpu->r[8] = rd32(0x001b730cu + + 0xf4u);
    }
L_001b7308:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b730c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b7314u, cpu->r[4], 0, 0);
    }
L_001b7310:;
    {
        wr8(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_001b7314:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7318:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b731c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b7320:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001b7324:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b7328:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001b732c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7330:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7334:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x0000000cu, 1, 0);
    }
L_001b7338:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b733c:;
    {
        cpu->r[14] = 0x001b7340u; fn_001d091c(cpu);
    }
L_001b7340:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7344:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7348:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b734c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b7350:;
    {
        cpu->r[14] = 0x001b7354u; fn_001d0700(cpu);
    }
L_001b7354:;
    {
        cpu->r[1] = rd32(0x001b735cu + + 0xa8u);
    }
L_001b7358:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b735c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b7360:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7368u, cpu->r[1], 0, 0);
    }
L_001b7364:;
    {
        cpu->r[14] = 0x001b7368u; imp_sprintf(cpu); /* sprintf */
    }
L_001b7368:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b736c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7378;
        }
    }
L_001b7370:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b7374:;
    {
        cpu->r[14] = 0x001b7378u; fn_0018ba20(cpu);
    }
L_001b7378:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b737c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b7380:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001b7384:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b7388:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b738c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b7390:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001b7394:;
    {
        wr32(cpu->r[13] + + 0x808u, cpu->r[12]);
    }
L_001b7398:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[12]);
    }
L_001b739c:;
    {
        cpu->r[14] = 0x001b73a0u; fn_001d0148(cpu);
    }
L_001b73a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b73a4:;
    {
        cpu->r[14] = 0x001b73a8u; fn_001d06cc(cpu);
    }
L_001b73a8:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_001b73ac:;
    {
        cpu->r[14] = 0x001b73b0u; fn_001d05bc(cpu);
    }
L_001b73b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b73b4:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[0]);
    }
L_001b73b8:;
    {
        cpu->r[0] = rd32(0x001b73c0u + + 0x48u);
    }
L_001b73bc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b73c4u, cpu->r[0], 0, 0);
    }
L_001b73c0:;
    {
        cpu->r[14] = 0x001b73c4u; fn_001d0ac4(cpu);
    }
L_001b73c4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001b73c8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_001b73cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001b73d0:;
    {
        cpu->r[14] = 0x001b73d4u; fn_001b4438(cpu);
    }
L_001b73d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001b73d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b73dc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b73e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b73e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b73e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b73f8;
        }
    }
L_001b73ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b73f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b73f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b73f8u)) return;
    }
L_001b73f8:;
    {
        cpu->r[14] = 0x001b73fcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b73fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 2, 2u, &shc); cpu->r[3] = v;
        }
    }
L_001b7400:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7404:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 22u, &shc); cpu->r[8] = v;
        }
    }
L_001b7408:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN21GLXPlayerWebComponent13OnUpdateParseEv @ 001b740c (arm) */
void fn_001b740c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b740c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b7410:;
    {
        cpu->r[5] = rd32(0x001b7418u + + 0x1dcu);
    }
L_001b7414:;
    {
        cpu->r[7] = rd32(0x001b741cu + + 0x1dcu);
    }
L_001b7418:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001b741c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b7424u, cpu->r[5], 0, 0);
    }
L_001b7420:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b7424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7428:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001b742c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001b7430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7434:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001b7438:;
    {
        cpu->r[14] = 0x001b743cu; fn_001b3974(cpu);
    }
L_001b743c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b7440:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b7444:;
    {
        cpu->r[14] = 0x001b7448u; fn_001b397c(cpu);
    }
L_001b7448:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b744c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b7450:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7454:;
    {
        cpu->r[14] = 0x001b7458u; fn_001b6b3c(cpu);
    }
L_001b7458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001b745c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7470;
        }
    }
L_001b7464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001b7468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b746c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b74a8;
        }
    }
L_001b7470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b7474:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b7478:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b747c:;
    {
        cpu->r[14] = 0x001b7484u;
    }
L_001b7480:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7484u)) return;
    }
L_001b7484:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b7488:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001b748c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001b7490:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7494:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b75f0;
        }
    }
L_001b749c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b74a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b74a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b74a8u)) return;
    }
L_001b74a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b74ac:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b74b0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001b74b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b74b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b74bc:;
    {
        cpu->r[14] = 0x001b74c0u; fn_001d0700(cpu);
    }
L_001b74c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b74c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b74c8:;
    {
        cpu->r[14] = 0x001b74ccu; fn_001b6fec(cpu);
    }
L_001b74cc:;
    {
        cpu->r[1] = rd32(0x001b74d4u + + 0x128u);
    }
L_001b74d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b74d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b74dcu, cpu->r[1], 0, 0);
    }
L_001b74d8:;
    {
        cpu->r[14] = 0x001b74dcu; fn_001d06e8(cpu);
    }
L_001b74dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b74e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000066u;
        }
    }
L_001b74e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b75a0;
        }
    }
L_001b74e8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b74ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b74f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b74f4:;
    {
        cpu->r[14] = 0x001b74f8u; fn_001d0700(cpu);
    }
L_001b74f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b74fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7500:;
    {
        cpu->r[14] = 0x001b7504u; fn_001b6fec(cpu);
    }
L_001b7504:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b7508:;
    {
        cpu->r[14] = 0x001b750cu; fn_001d06cc(cpu);
    }
L_001b750c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b7510:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001b7514:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7518:;
    {
        cpu->r[14] = 0x001b751cu; fn_001b6b48(cpu);
    }
L_001b751c:;
    {
        cpu->r[1] = rd32(0x001b7524u + + 0xdcu);
    }
L_001b7520:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7528u, cpu->r[1], 0, 0);
    }
L_001b7524:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001b7528:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b752c:;
    {
        cpu->r[14] = 0x001b7530u; fn_001b7110(cpu);
    }
L_001b7530:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b75bc;
        }
    }
L_001b7538:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b753c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b7540:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7544:;
    {
        cpu->r[14] = 0x001b7548u; fn_001d0700(cpu);
    }
L_001b7548:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b754c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7550:;
    {
        cpu->r[14] = 0x001b7554u; fn_001b6fec(cpu);
    }
L_001b7554:;
    {
        cpu->r[1] = rd32(0x001b755cu + + 0xa8u);
    }
L_001b7558:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b755c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7564u, cpu->r[1], 0, 0);
    }
L_001b7560:;
    {
        cpu->r[14] = 0x001b7564u; fn_001d06e8(cpu);
    }
L_001b7564:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b75d8;
        }
    }
L_001b756c:;
    {
        cpu->r[1] = rd32(0x001b7574u + + 0x94u);
    }
L_001b7570:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b7574:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b757cu, cpu->r[1], 0, 0);
    }
L_001b7578:;
    {
        cpu->r[14] = 0x001b757cu; fn_001d06e8(cpu);
    }
L_001b757c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7580:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b7584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7488;
        }
    }
L_001b7588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b758c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b7590:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7594:;
    {
        cpu->r[14] = 0x001b759cu;
    }
L_001b7598:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b759cu)) return;
    }
L_001b759c:;
    {
        goto L_001b7488;
    }
L_001b75a0:;
    {
        cpu->r[1] = rd32(0x001b75a8u + + 0x64u);
    }
L_001b75a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b75a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b75b0u, cpu->r[1], 0, 0);
    }
L_001b75ac:;
    {
        cpu->r[14] = 0x001b75b0u; fn_001d06e8(cpu);
    }
L_001b75b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b75b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000067u;
        }
    }
L_001b75b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b74e8;
        }
    }
L_001b75bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b75c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b75c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b75c8:;
    {
        cpu->r[14] = 0x001b75d0u;
    }
L_001b75cc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b75d0u)) return;
    }
L_001b75d0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b75d4:;
    {
        goto L_001b7488;
    }
L_001b75d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b75dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b75e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b75e4:;
    {
        cpu->r[14] = 0x001b75ecu;
    }
L_001b75e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b75ecu)) return;
    }
L_001b75ec:;
    {
        goto L_001b7488;
    }
L_001b75f0:;
    {
        cpu->r[14] = 0x001b75f4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b75f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[4]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b75f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b75fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 27u, &shc); cpu->r[7] = v;
        }
    }
L_001b7600:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 18u, &shc); cpu->r[8] = v;
        }
    }
L_001b7604:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 3, (0x001b760cu & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001b7608:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001b760c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 1, 29u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN21GLXPlayerWebComponent6CancelEv @ 001b7610 (arm) */
void fn_001b7610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7610:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7614:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7618:;
    {
        cpu->r[0] = rd32(0x001b7620u + + 0x2cu);
    }
L_001b761c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b7620:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001b7624:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b762cu, cpu->r[0], 0, 0);
    }
L_001b7628:;
    {
        cpu->r[14] = 0x001b762cu; fn_001d0ac4(cpu);
    }
L_001b762c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001b7630:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001b7634:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b7638:;
    {
        cpu->r[14] = 0x001b763cu; fn_001b398c(cpu);
    }
L_001b763c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b7640:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001b7644:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001b7648:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b764cu)) return;
    }
}

/* _ZN21GLXPlayerWebComponent6UpdateEv @ 001b7650 (arm) */
void fn_001b7650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7650:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2cu);
    }
L_001b7654:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b765c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7660:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7664u)) return;
        }
    }
L_001b7664:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001b7668:;
    {
        cpu->r[14] = 0x001b766cu; fn_001b3920(cpu);
    }
L_001b766c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b7670:;
    {
        cpu->r[14] = 0x001b7674u; fn_001b393c(cpu);
    }
L_001b7674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b76d4;
        }
    }
L_001b767c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b7680:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_001b7684:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7688:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b768cu)) return;
        }
    }
L_001b768c:;
    {
        cpu->r[14] = 0x001b7690u; fn_001d05bc(cpu);
    }
L_001b7690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001b7694:;
    {
        cpu->r[2] = 0x00004650u;
    }
L_001b7698:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001b769c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001b76a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b76a4u)) return;
        }
    }
L_001b76a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b76a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b76ac:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x38u);
    }
L_001b76b0:;
    {
        cpu->r[14] = 0x001b76b8u;
    }
L_001b76b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b76b8u)) return;
    }
L_001b76b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b76bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b76c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b76c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b76c8:;
    {
        cpu->r[14] = 0x001b76d0u;
    }
L_001b76cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b76d0u)) return;
    }
L_001b76d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b76d4u)) return;
    }
L_001b76d4:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001b76d8:;
    {
        cpu->r[0] = rd32(0x001b76e0u + + 0x50u);
    }
L_001b76dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b76e4u, cpu->r[0], 0, 0);
    }
L_001b76e0:;
    {
        cpu->r[14] = 0x001b76e4u; fn_001d0ac4(cpu);
    }
L_001b76e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b76e8:;
    {
        cpu->r[14] = 0x001b76ecu; fn_001b3958(cpu);
    }
L_001b76ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b76f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7708;
        }
    }
L_001b76f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b76f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b76fc:;
    {
        cpu->r[14] = 0x001b7704u;
    }
L_001b7700:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7704u)) return;
    }
L_001b7704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7708u)) return;
    }
L_001b7708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b770c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7710:;
    {
        cpu->r[14] = 0x001b7718u;
    }
L_001b7714:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7718u)) return;
    }
L_001b7718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b771c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b7720:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7724:;
    {
        cpu->r[14] = 0x001b772cu;
    }
L_001b7728:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b772cu)) return;
    }
L_001b772c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7730u)) return;
    }
}

/* _ZN21GLXPlayerWebComponentD1Ev @ 001b7734 (arm) */
void fn_001b7734(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7734:;
    {
        cpu->r[3] = rd32(0x001b773cu + + 0xc0u);
    }
L_001b7738:;
    {
        cpu->r[2] = rd32(0x001b7740u + + 0xc0u);
    }
L_001b773c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7740:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7748u, cpu->r[3], 0, 0);
    }
L_001b7744:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7748:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001b774c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b7750:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7754:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b7758:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001b775c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b7760:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b7764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7770;
        }
    }
L_001b7768:;
    {
        cpu->r[14] = 0x001b776cu; fn_0018ba60(cpu);
    }
L_001b776c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001b7770:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b7774:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7788;
        }
    }
L_001b777c:;
    {
        cpu->r[14] = 0x001b7780u; fn_0018ba60(cpu);
    }
L_001b7780:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7784:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b7788:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b778c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b77a0;
        }
    }
L_001b7794:;
    {
        cpu->r[14] = 0x001b7798u; fn_0018ba60(cpu);
    }
L_001b7798:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b779c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b77a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001b77a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b77a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b77b8;
        }
    }
L_001b77ac:;
    {
        cpu->r[14] = 0x001b77b0u; fn_0018ba60(cpu);
    }
L_001b77b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b77b4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b77b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b77bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b77c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b77dc;
        }
    }
L_001b77c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b77c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b77cc:;
    {
        cpu->r[14] = 0x001b77d4u;
    }
L_001b77d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b77d4u)) return;
    }
L_001b77d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b77d8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b77dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b77e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b77e4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b77e8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b77ec:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001b77f0:;
    {
        cpu->r[14] = 0x001b77f4u; fn_001b3888(cpu);
    }
L_001b77f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b77f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b77fcu)) return;
    }
}

/* _ZN21GLXPlayerWebComponentD0Ev @ 001b7804 (arm) */
void fn_001b7804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7804:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b7808:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b780c:;
    {
        cpu->r[14] = 0x001b7810u; fn_001b7734(cpu);
    }
L_001b7810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7814:;
    {
        cpu->r[14] = 0x001b7818u; fn_0018ba20(cpu);
    }
L_001b7818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b781c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7820u)) return;
    }
}

/* _ZN21GLXPlayerWebComponentD2Ev @ 001b7820 (arm) */
void fn_001b7820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7820:;
    {
        cpu->r[3] = rd32(0x001b7828u + + 0xc0u);
    }
L_001b7824:;
    {
        cpu->r[2] = rd32(0x001b782cu + + 0xc0u);
    }
L_001b7828:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b782c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7834u, cpu->r[3], 0, 0);
    }
L_001b7830:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7834:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001b7838:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b783c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7840:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b7844:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001b7848:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b784c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b7850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b785c;
        }
    }
L_001b7854:;
    {
        cpu->r[14] = 0x001b7858u; fn_0018ba60(cpu);
    }
L_001b7858:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001b785c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b7860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7874;
        }
    }
L_001b7868:;
    {
        cpu->r[14] = 0x001b786cu; fn_0018ba60(cpu);
    }
L_001b786c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7870:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b7874:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b7878:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b787c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b788c;
        }
    }
L_001b7880:;
    {
        cpu->r[14] = 0x001b7884u; fn_0018ba60(cpu);
    }
L_001b7884:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7888:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b788c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001b7890:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b78a4;
        }
    }
L_001b7898:;
    {
        cpu->r[14] = 0x001b789cu; fn_0018ba60(cpu);
    }
L_001b789c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b78a0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b78a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b78a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b78ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b78c8;
        }
    }
L_001b78b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b78b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b78b8:;
    {
        cpu->r[14] = 0x001b78c0u;
    }
L_001b78bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b78c0u)) return;
    }
L_001b78c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b78c4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b78c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b78cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b78d0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b78d4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001b78d8:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001b78dc:;
    {
        cpu->r[14] = 0x001b78e0u; fn_001b3888(cpu);
    }
L_001b78e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b78e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b78e8u)) return;
    }
}

/* _ZN21GLXPlayerWebComponentC1Ev @ 001b78f0 (arm) */
void fn_001b78f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b78f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b78f4:;
    {
        cpu->r[5] = rd32(0x001b78fcu + + 0x50u);
    }
L_001b78f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b78fc:;
    {
        cpu->r[14] = 0x001b7900u; fn_001b3794(cpu);
    }
L_001b7900:;
    {
        cpu->r[2] = rd32(0x001b7908u + + 0x48u);
    }
L_001b7904:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b790cu, cpu->r[5], 0, 0);
    }
L_001b7908:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b790c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b7910:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7914:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b7918:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001b791c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[1]);
    }
L_001b7920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b7924:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001b7928:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b792c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b7930:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b7934:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b7938:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001b793c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001b7940:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001b7944:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b7948:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b794cu)) return;
    }
}

/* _ZN21GLXPlayerWebComponentC2Ev @ 001b7954 (arm) */
void fn_001b7954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7954:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7958:;
    {
        cpu->r[5] = rd32(0x001b7960u + + 0x50u);
    }
L_001b795c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7960:;
    {
        cpu->r[14] = 0x001b7964u; fn_001b3794(cpu);
    }
L_001b7964:;
    {
        cpu->r[2] = rd32(0x001b796cu + + 0x48u);
    }
L_001b7968:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b7970u, cpu->r[5], 0, 0);
    }
L_001b796c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b7970:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001b7974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7978:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001b797c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001b7980:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[1]);
    }
L_001b7984:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b7988:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001b798c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b7990:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001b7994:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001b7998:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001b799c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001b79a0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001b79a4:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001b79a8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001b79ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b79b0u)) return;
    }
}

/* _ZN14GLXPlayerLogin9getAPNSIPEv @ 001b79b8 (arm) */
void fn_001b79b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001b79bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin11getAPNSPortEv @ 001b79c0 (arm) */
void fn_001b79c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001b79c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin17getAPNSFeedBackIPEv @ 001b79c8 (arm) */
void fn_001b79c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x50u);
    }
L_001b79cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin19getAPNSFeedBackPortEv @ 001b79d0 (arm) */
void fn_001b79d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54u);
    }
L_001b79d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin20getAPNSPublicPemPathEv @ 001b79d8 (arm) */
void fn_001b79d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_001b79dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin24getAPNSPrivateKeyPemPathEv @ 001b79e0 (arm) */
void fn_001b79e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001b79e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin25getAPNSPrivateKeyPasswordEv @ 001b79e8 (arm) */
void fn_001b79e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_001b79ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin19getProductListCountEv @ 001b79f0 (arm) */
void fn_001b79f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x64u);
    }
L_001b79f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin13getProductGGIEi @ 001b79f8 (arm) */
void fn_001b79f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b79f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x68u);
    }
L_001b79fc:;
    {
        cpu->r[2] = (~cpu->r[1]);
    }
L_001b7a00:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
    }
L_001b7a04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7a08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b7a0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b7a10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001b7a14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b7a18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin12getProductIDEi @ 001b7a1c (arm) */
void fn_001b7a1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7a1c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001b7a20:;
    {
        cpu->r[2] = (~cpu->r[1]);
    }
L_001b7a24:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
    }
L_001b7a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b7a30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b7a34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001b7a38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b7a3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin14getProductNameEi @ 001b7a40 (arm) */
void fn_001b7a40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7a40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_001b7a44:;
    {
        cpu->r[0] = (~cpu->r[1]);
    }
L_001b7a48:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_001b7a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7a50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b7a54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7a58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b7a5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GLXPlayerLogin19ShouldSendKeepAliveEv @ 001b7a60 (arm) */
void fn_001b7a60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7a60:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x40u);
    }
L_001b7a64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b7a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b7a6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7a70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001b7a74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7a78u)) return;
        }
    }
L_001b7a78:;
    {
        cpu->r[14] = 0x001b7a7cu; fn_001d05bc(cpu);
    }
L_001b7a7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b7a80:;
    {
        cpu->r[3] = 0x00005f90u;
    }
L_001b7a84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001b7a88:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001b7a8c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001b7a90:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001b7a94:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001b7a98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7a9cu)) return;
    }
}

/* _ZN14GLXPlayerLogin32SendGameInvitationGetLobbyServerEPc @ 001b7a9c (arm) */
void fn_001b7a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7a9c:;
    {
        cpu->r[3] = rd32(0x001b7aa4u + + 0xacu);
    }
L_001b7aa0:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7aa4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b7aa8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b7aac:;
    {
        cpu->r[1] = rd32(0x001b7ab4u + + 0xa0u);
    }
L_001b7ab0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7ab8u, cpu->r[3], 0, 0);
    }
L_001b7ab4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7ab8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7abc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001b7ac0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001b7ac4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7ac8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7acc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7ad0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7ad4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7ad8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7adc:;
    {
        cpu->r[14] = 0x001b7ae0u; imp_memset(cpu); /* memset */
    }
L_001b7ae0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7ae4:;
    {
        cpu->r[2] = 0x0000006cu;
    }
L_001b7ae8:;
    {
        cpu->r[1] = rd32(0x001b7af0u + + 0x68u);
    }
L_001b7aec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7af0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7af4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7afcu, cpu->r[1], 0, 0);
    }
L_001b7af8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7afc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001b7b00:;
    {
        cpu->r[14] = 0x001b7b04u; imp_sprintf(cpu); /* sprintf */
    }
L_001b7b04:;
    {
        cpu->r[14] = 0x001b7b08u; fn_001d05bc(cpu);
    }
L_001b7b08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7b0c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001b7b10:;
    {
        cpu->r[0] = rd32(0x001b7b18u + + 0x44u);
    }
L_001b7b14:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7b1cu, cpu->r[0], 0, 0);
    }
L_001b7b18:;
    {
        cpu->r[14] = 0x001b7b1cu; fn_001d0ac4(cpu);
    }
L_001b7b1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7b20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7b24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7b28:;
    {
        cpu->r[14] = 0x001b7b30u;
    }
L_001b7b2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7b30u)) return;
    }
L_001b7b30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7b34:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7b38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7b4c;
        }
    }
L_001b7b40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b7b44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b7b48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7b4cu)) return;
    }
L_001b7b4c:;
    {
        cpu->r[14] = 0x001b7b50u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7b50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 4, 18u, &shc); cpu->r[2] = v;
        }
    }
L_001b7b54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7b58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, (cpu->r[4] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_001b7b5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[4] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin18SendGetLobbyServerEv @ 001b7b60 (arm) */
void fn_001b7b60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7b60:;
    {
        cpu->r[3] = rd32(0x001b7b68u + + 0x9cu);
    }
L_001b7b64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7b68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7b6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7b70:;
    {
        cpu->r[0] = rd32(0x001b7b78u + + 0x90u);
    }
L_001b7b74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7b7cu, cpu->r[3], 0, 0);
    }
L_001b7b78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7b7c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7b80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7b84:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001b7b88:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7b8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7b90:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7b94:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7b98:;
    {
        cpu->r[14] = 0x001b7b9cu; imp_memset(cpu); /* memset */
    }
L_001b7b9c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7ba0:;
    {
        cpu->r[2] = 0x0000006bu;
    }
L_001b7ba4:;
    {
        cpu->r[1] = rd32(0x001b7bacu + + 0x60u);
    }
L_001b7ba8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7bac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7bb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7bb8u, cpu->r[1], 0, 0);
    }
L_001b7bb4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7bb8:;
    {
        cpu->r[14] = 0x001b7bbcu; imp_sprintf(cpu); /* sprintf */
    }
L_001b7bbc:;
    {
        cpu->r[14] = 0x001b7bc0u; fn_001d05bc(cpu);
    }
L_001b7bc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7bc4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001b7bc8:;
    {
        cpu->r[0] = rd32(0x001b7bd0u + + 0x40u);
    }
L_001b7bcc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7bd4u, cpu->r[0], 0, 0);
    }
L_001b7bd0:;
    {
        cpu->r[14] = 0x001b7bd4u; fn_001d0ac4(cpu);
    }
L_001b7bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7bdc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7be0:;
    {
        cpu->r[14] = 0x001b7be8u;
    }
L_001b7be4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7be8u)) return;
    }
L_001b7be8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7bec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7bf0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7bf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7c00;
        }
    }
L_001b7bf8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001b7bfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7c00u)) return;
    }
L_001b7c00:;
    {
        cpu->r[14] = 0x001b7c04u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7c04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[8]; cpu->r[9] = v;
        }
    }
L_001b7c08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7c0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 7u, &shc); cpu->r[8] = v;
        }
    }
L_001b7c10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr16(cpu->r[7], cpu->r[8]);
        cpu->r[7] = wb_tmp;
        }
    }
}
